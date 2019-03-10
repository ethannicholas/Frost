#include "frost/collections/Iterator/EnumerationIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Tuple2.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"

__attribute__((weak)) frost$core$Object* frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int$Cfrost$collections$Iterator$EnumerationIterator$T$RP$shim(frost$collections$Iterator$EnumerationIterator* p0) {
    frost$core$Tuple2* result = frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int$Cfrost$collections$Iterator$EnumerationIterator$T$RP(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$Iterator$EnumerationIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$Iterator$EnumerationIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int$Cfrost$collections$Iterator$EnumerationIterator$T$RP$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Iterator$EnumerationIterator$class_type frost$collections$Iterator$EnumerationIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$EnumerationIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$Iterator$EnumerationIterator$cleanup, frost$collections$Iterator$EnumerationIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int$Cfrost$collections$Iterator$EnumerationIterator$T$RP$shim} };

typedef frost$core$Bit (*$fn11)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn15)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn40)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72", 46, -4993360700336273267, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29", 152, -7078141578672242078, NULL };

void frost$collections$Iterator$EnumerationIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$EnumerationIterator$T$GT(frost$collections$Iterator$EnumerationIterator* param0, frost$collections$Iterator* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:139
frost$core$Int $tmp2 = (frost$core$Int) {18446744073709551615u};
frost$core$Int* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$Iterator** $tmp4 = &param0->base;
frost$collections$Iterator* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$Iterator** $tmp6 = &param0->base;
*$tmp6 = param1;
return;

}
frost$core$Bit frost$collections$Iterator$EnumerationIterator$get_done$R$frost$core$Bit(frost$collections$Iterator$EnumerationIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:147
frost$collections$Iterator** $tmp7 = &param0->base;
frost$collections$Iterator* $tmp8 = *$tmp7;
ITable* $tmp9 = $tmp8->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp9 = $tmp9->next;
}
$fn11 $tmp10 = $tmp9->methods[0];
frost$core$Bit $tmp12 = $tmp10($tmp8);
return $tmp12;

}
frost$core$Tuple2* frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int$Cfrost$collections$Iterator$EnumerationIterator$T$RP(frost$collections$Iterator$EnumerationIterator* param0) {

ITable* $tmp13 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[0];
frost$core$Bit $tmp16 = $tmp14(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp17 = $tmp16.value;
bool $tmp18 = !$tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block2:;
frost$core$Int $tmp21 = (frost$core$Int) {151u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:152
frost$core$Int* $tmp24 = &param0->index;
frost$core$Int $tmp25 = *$tmp24;
frost$core$Int $tmp26 = (frost$core$Int) {1u};
int64_t $tmp27 = $tmp25.value;
int64_t $tmp28 = $tmp26.value;
int64_t $tmp29 = $tmp27 + $tmp28;
frost$core$Int $tmp30 = (frost$core$Int) {$tmp29};
frost$core$Int* $tmp31 = &param0->index;
*$tmp31 = $tmp30;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:153
FROST_ASSERT(32 == sizeof(frost$core$Tuple2));
frost$core$Tuple2* $tmp32 = (frost$core$Tuple2*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Tuple2$class);
frost$core$Int* $tmp33 = &param0->index;
frost$core$Int $tmp34 = *$tmp33;
frost$core$Int$wrapper* $tmp35;
$tmp35 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp35->value = $tmp34;
frost$collections$Iterator** $tmp36 = &param0->base;
frost$collections$Iterator* $tmp37 = *$tmp36;
ITable* $tmp38 = $tmp37->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp38 = $tmp38->next;
}
$fn40 $tmp39 = $tmp38->methods[1];
frost$core$Object* $tmp41 = $tmp39($tmp37);
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1($tmp32, ((frost$core$Object*) $tmp35), $tmp41);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q($tmp41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
return $tmp32;

}
void frost$collections$Iterator$EnumerationIterator$cleanup(frost$collections$Iterator$EnumerationIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:136
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Iterator** $tmp42 = &param0->base;
frost$collections$Iterator* $tmp43 = *$tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
return;

}






