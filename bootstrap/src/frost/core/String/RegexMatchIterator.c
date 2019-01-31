#include "frost/core/String/RegexMatchIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/String/Match.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Matcher.h"
#include "frost/core/String/Index.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Object* frost$core$String$RegexMatchIterator$next$R$frost$core$String$Match$shim(frost$core$String$RegexMatchIterator* p0) {
    frost$core$String$Match* result = frost$core$String$RegexMatchIterator$next$R$frost$core$String$Match(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$core$String$RegexMatchIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$core$String$RegexMatchIterator$get_done$R$frost$core$Bit, frost$core$String$RegexMatchIterator$next$R$frost$core$String$Match$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$core$String$RegexMatchIterator$class_type frost$core$String$RegexMatchIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$String$RegexMatchIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$String$RegexMatchIterator$cleanup, frost$core$String$RegexMatchIterator$get_done$R$frost$core$Bit, frost$core$String$RegexMatchIterator$next$R$frost$core$String$Match$shim} };

typedef frost$core$Bit (*$fn21)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x52\x65\x67\x65\x78\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72", 36, -7545645683876285905, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x52\x65\x67\x65\x78\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68", 99, -6360471890359797890, NULL };

void frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit(frost$core$String$RegexMatchIterator* param0, frost$core$String* param1, frost$core$RegularExpression* param2, frost$core$Bit param3) {

// line 295
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp2 = &param0->haystack;
frost$core$String* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$String** $tmp4 = &param0->haystack;
*$tmp4 = param1;
// line 296
frost$core$Bit* $tmp5 = &param0->allowOverlaps;
frost$core$Bit $tmp6 = *$tmp5;
frost$core$Bit* $tmp7 = &param0->allowOverlaps;
*$tmp7 = $tmp6;
// line 297
frost$core$Matcher* $tmp8 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param2, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$Matcher** $tmp9 = &param0->matcher;
frost$core$Matcher* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Matcher** $tmp11 = &param0->matcher;
*$tmp11 = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// line 298
frost$core$Matcher** $tmp12 = &param0->matcher;
frost$core$Matcher* $tmp13 = *$tmp12;
frost$core$Bit $tmp14 = frost$core$Matcher$find$R$frost$core$Bit($tmp13);
frost$core$Bit* $tmp15 = &param0->found;
*$tmp15 = $tmp14;
return;

}
frost$core$Bit frost$core$String$RegexMatchIterator$get_done$R$frost$core$Bit(frost$core$String$RegexMatchIterator* param0) {

// line 303
frost$core$Bit* $tmp16 = &param0->found;
frost$core$Bit $tmp17 = *$tmp16;
frost$core$Bit $tmp18 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp17);
return $tmp18;

}
frost$core$String$Match* frost$core$String$RegexMatchIterator$next$R$frost$core$String$Match(frost$core$String$RegexMatchIterator* param0) {

frost$core$String$Match* local0 = NULL;
frost$core$String$Index local1;
ITable* $tmp19 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
$fn21 $tmp20 = $tmp19->methods[0];
frost$core$Bit $tmp22 = $tmp20(((frost$collections$Iterator*) param0));
frost$core$Bit $tmp23 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp22);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp25 = (frost$core$Int64) {307};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s26, $tmp25, &$s27);
abort(); // unreachable
block1:;
// line 308
FROST_ASSERT(40 == sizeof(frost$core$String$Match));
frost$core$String$Match* $tmp28 = (frost$core$String$Match*) frostObjectAlloc(40, (frost$core$Class*) &frost$core$String$Match$class);
frost$core$Matcher** $tmp29 = &param0->matcher;
frost$core$Matcher* $tmp30 = *$tmp29;
frost$core$String$Match$init$frost$core$Matcher($tmp28, $tmp30);
*(&local0) = ((frost$core$String$Match*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$String$Match* $tmp31 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
*(&local0) = $tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// line 309
// line 310
frost$core$Bit* $tmp32 = &param0->allowOverlaps;
frost$core$Bit $tmp33 = *$tmp32;
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block3; else goto block5;
block3:;
// line 311
frost$core$String** $tmp35 = &param0->haystack;
frost$core$String* $tmp36 = *$tmp35;
frost$core$Matcher** $tmp37 = &param0->matcher;
frost$core$Matcher* $tmp38 = *$tmp37;
frost$core$String$Index $tmp39;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp39, $tmp38);
frost$core$String$Index $tmp40 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp36, $tmp39);
*(&local1) = $tmp40;
goto block4;
block5:;
// line 1
// line 314
frost$core$Matcher** $tmp41 = &param0->matcher;
frost$core$Matcher* $tmp42 = *$tmp41;
frost$core$String$Index $tmp43;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp43, $tmp42);
*(&local1) = $tmp43;
goto block4;
block4:;
// line 316
frost$core$Matcher** $tmp44 = &param0->matcher;
frost$core$Matcher* $tmp45 = *$tmp44;
frost$core$String$Index $tmp46 = *(&local1);
frost$core$Bit $tmp47 = frost$core$Matcher$find$frost$core$String$Index$R$frost$core$Bit($tmp45, $tmp46);
frost$core$Bit* $tmp48 = &param0->found;
*$tmp48 = $tmp47;
// line 317
frost$core$String$Match* $tmp49 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$String$Match* $tmp50 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
*(&local0) = ((frost$core$String$Match*) NULL);
return $tmp49;

}
void frost$core$String$RegexMatchIterator$cleanup(frost$core$String$RegexMatchIterator* param0) {

// line 285
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Matcher** $tmp51 = &param0->matcher;
frost$core$Matcher* $tmp52 = *$tmp51;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$String** $tmp53 = &param0->haystack;
frost$core$String* $tmp54 = *$tmp53;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
return;

}






