#include "frost/collections/SpecializedArrayIterator.LTorg/frostlang/frostc/parser/Token.GT.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "frost/collections/SpecializedArray.LTorg/frostlang/frostc/parser/Token.GT.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"

__attribute__((weak)) frost$core$Object* frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$next$R$org$frostlang$frostc$parser$Token$shim(frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT* p0) {
    org$frostlang$frostc$parser$Token result = frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$next$R$org$frostlang$frostc$parser$Token(p0);

    org$frostlang$frostc$parser$Token$wrapper* $tmp2;
    $tmp2 = (org$frostlang$frostc$parser$Token$wrapper*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$parser$Token$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$get_done$R$frost$core$Bit, frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$next$R$org$frostlang$frostc$parser$Token$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$class_type frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$Iterator, { frost$core$Object$convert$R$frost$core$String, frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$cleanup, frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$get_done$R$frost$core$Bit, frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$next$R$org$frostlang$frostc$parser$Token$shim} };

typedef frost$core$Int64 (*$fn14)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn19)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e", 77, -8702029048741241015, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, -8814985355593378243, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x6e\x65\x78\x74\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 152, -5401702524248814457, NULL };

void frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$init$frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT(frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param1) {

// line 11
frost$core$Int64 $tmp3 = (frost$core$Int64) {0};
frost$core$Int64* $tmp4 = &param0->index;
*$tmp4 = $tmp3;
// line 14
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp5 = &param0->array;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp7 = &param0->array;
*$tmp7 = param1;
return;

}
frost$core$Bit frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$get_done$R$frost$core$Bit(frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT* param0) {

// line 19
frost$core$Int64* $tmp8 = &param0->index;
frost$core$Int64 $tmp9 = *$tmp8;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp10 = &param0->array;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp11 = *$tmp10;
ITable* $tmp12 = ((frost$collections$CollectionView*) $tmp11)->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
frost$core$Int64 $tmp15 = $tmp13(((frost$collections$CollectionView*) $tmp11));
frost$core$Bit $tmp16 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp9, $tmp15);
return $tmp16;

}
org$frostlang$frostc$parser$Token frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$next$R$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT* param0) {

ITable* $tmp17 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[0];
frost$core$Bit $tmp20 = $tmp18(((frost$collections$Iterator*) param0));
frost$core$Bit $tmp21 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp20);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp23 = (frost$core$Int64) {23};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s24, $tmp23, &$s25);
abort(); // unreachable
block1:;
// line 24
frost$core$Int64* $tmp26 = &param0->index;
frost$core$Int64 $tmp27 = *$tmp26;
frost$core$Int64 $tmp28 = (frost$core$Int64) {1};
int64_t $tmp29 = $tmp27.value;
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29 + $tmp30;
frost$core$Int64 $tmp32 = (frost$core$Int64) {$tmp31};
frost$core$Int64* $tmp33 = &param0->index;
*$tmp33 = $tmp32;
// line 25
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp34 = &param0->array;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp35 = *$tmp34;
frost$core$Int64* $tmp36 = &param0->index;
frost$core$Int64 $tmp37 = *$tmp36;
frost$core$Int64 $tmp38 = (frost$core$Int64) {1};
int64_t $tmp39 = $tmp37.value;
int64_t $tmp40 = $tmp38.value;
int64_t $tmp41 = $tmp39 - $tmp40;
frost$core$Int64 $tmp42 = (frost$core$Int64) {$tmp41};
org$frostlang$frostc$parser$Token $tmp43 = frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlang$frostc$parser$Token($tmp35, $tmp42);
return $tmp43;

}
void frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$cleanup(frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT* param0) {

// line 8
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp44 = &param0->array;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp45 = *$tmp44;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
return;

}

