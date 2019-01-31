#include "frost/collections/Iterator/EnumerationIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Tuple2.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"

__attribute__((weak)) frost$core$Object* frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int64$Cfrost$collections$Iterator$EnumerationIterator$T$RP$shim(frost$collections$Iterator$EnumerationIterator* p0) {
    frost$core$Tuple2* result = frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int64$Cfrost$collections$Iterator$EnumerationIterator$T$RP(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$Iterator$EnumerationIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$Iterator$EnumerationIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int64$Cfrost$collections$Iterator$EnumerationIterator$T$RP$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Iterator$EnumerationIterator$class_type frost$collections$Iterator$EnumerationIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$EnumerationIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$Iterator$EnumerationIterator$cleanup, frost$collections$Iterator$EnumerationIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int64$Cfrost$collections$Iterator$EnumerationIterator$T$RP$shim} };

typedef frost$core$Bit (*$fn11)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn15)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn38)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72", 46, 1871806772927786407, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29", 154, 3795059146684846050, NULL };

void frost$collections$Iterator$EnumerationIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$EnumerationIterator$T$GT(frost$collections$Iterator$EnumerationIterator* param0, frost$collections$Iterator* param1) {

// line 139
frost$core$Int64 $tmp2 = (frost$core$Int64) {18446744073709551615};
frost$core$Int64* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// line 142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$Iterator** $tmp4 = &param0->base;
frost$collections$Iterator* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$Iterator** $tmp6 = &param0->base;
*$tmp6 = param1;
return;

}
frost$core$Bit frost$collections$Iterator$EnumerationIterator$get_done$R$frost$core$Bit(frost$collections$Iterator$EnumerationIterator* param0) {

// line 147
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
frost$core$Tuple2* frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int64$Cfrost$collections$Iterator$EnumerationIterator$T$RP(frost$collections$Iterator$EnumerationIterator* param0) {

ITable* $tmp13 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[0];
frost$core$Bit $tmp16 = $tmp14(((frost$collections$Iterator*) param0));
frost$core$Bit $tmp17 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp16);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp19 = (frost$core$Int64) {151};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s20, $tmp19, &$s21);
abort(); // unreachable
block1:;
// line 152
frost$core$Int64* $tmp22 = &param0->index;
frost$core$Int64 $tmp23 = *$tmp22;
frost$core$Int64 $tmp24 = (frost$core$Int64) {1};
int64_t $tmp25 = $tmp23.value;
int64_t $tmp26 = $tmp24.value;
int64_t $tmp27 = $tmp25 + $tmp26;
frost$core$Int64 $tmp28 = (frost$core$Int64) {$tmp27};
frost$core$Int64* $tmp29 = &param0->index;
*$tmp29 = $tmp28;
// line 153
FROST_ASSERT(32 == sizeof(frost$core$Tuple2));
frost$core$Tuple2* $tmp30 = (frost$core$Tuple2*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Tuple2$class);
frost$core$Int64* $tmp31 = &param0->index;
frost$core$Int64 $tmp32 = *$tmp31;
frost$core$Int64$wrapper* $tmp33;
$tmp33 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp33->value = $tmp32;
frost$collections$Iterator** $tmp34 = &param0->base;
frost$collections$Iterator* $tmp35 = *$tmp34;
ITable* $tmp36 = $tmp35->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp36 = $tmp36->next;
}
$fn38 $tmp37 = $tmp36->methods[1];
frost$core$Object* $tmp39 = $tmp37($tmp35);
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1($tmp30, ((frost$core$Object*) $tmp33), $tmp39);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q($tmp39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
return $tmp30;

}
void frost$collections$Iterator$EnumerationIterator$cleanup(frost$collections$Iterator$EnumerationIterator* param0) {

// line 136
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Iterator** $tmp40 = &param0->base;
frost$collections$Iterator* $tmp41 = *$tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
return;

}






