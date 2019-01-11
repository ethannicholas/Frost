#include "panda/core/String/RegexMatchIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/String/Match.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Matcher.h"
#include "panda/core/String/Index.h"
#include "panda/core/Int64.h"

__attribute__((weak)) panda$core$Object* panda$core$String$RegexMatchIterator$next$R$panda$core$String$Match$shim(panda$core$String$RegexMatchIterator* p0) {
    panda$core$String$Match* result = panda$core$String$RegexMatchIterator$next$R$panda$core$String$Match(p0);

    return ((panda$core$Object*) result);
}

struct { panda$core$Class* cl; ITable* next; void* methods[11]; } panda$core$String$RegexMatchIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$RegexMatchIterator$get_done$R$panda$core$Bit, panda$core$String$RegexMatchIterator$next$R$panda$core$String$Match$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T, panda$collections$Iterator$map$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$map$U$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$map$U$GT} };

static panda$core$String $s1;
panda$core$String$RegexMatchIterator$class_type panda$core$String$RegexMatchIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$RegexMatchIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$String$RegexMatchIterator$cleanup, panda$core$String$RegexMatchIterator$get_done$R$panda$core$Bit, panda$core$String$RegexMatchIterator$next$R$panda$core$String$Match$shim} };

typedef panda$core$Bit (*$fn21)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x52\x65\x67\x65\x78\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72", 36, 9169160126284605533, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x52\x65\x67\x65\x78\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68", 99, 3959721154300098506, NULL };

void panda$core$String$RegexMatchIterator$init$panda$core$String$panda$core$RegularExpression$panda$core$Bit(panda$core$String$RegexMatchIterator* param0, panda$core$String* param1, panda$core$RegularExpression* param2, panda$core$Bit param3) {

// line 295
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String** $tmp2 = &param0->haystack;
panda$core$String* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$String** $tmp4 = &param0->haystack;
*$tmp4 = param1;
// line 296
panda$core$Bit* $tmp5 = &param0->allowOverlaps;
panda$core$Bit $tmp6 = *$tmp5;
panda$core$Bit* $tmp7 = &param0->allowOverlaps;
*$tmp7 = $tmp6;
// line 297
panda$core$Matcher* $tmp8 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param2, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Matcher** $tmp9 = &param0->matcher;
panda$core$Matcher* $tmp10 = *$tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$Matcher** $tmp11 = &param0->matcher;
*$tmp11 = $tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
// unreffing REF($15:panda.core.Matcher)
// line 298
panda$core$Matcher** $tmp12 = &param0->matcher;
panda$core$Matcher* $tmp13 = *$tmp12;
panda$core$Bit $tmp14 = panda$core$Matcher$find$R$panda$core$Bit($tmp13);
panda$core$Bit* $tmp15 = &param0->found;
*$tmp15 = $tmp14;
return;

}
panda$core$Bit panda$core$String$RegexMatchIterator$get_done$R$panda$core$Bit(panda$core$String$RegexMatchIterator* param0) {

// line 303
panda$core$Bit* $tmp16 = &param0->found;
panda$core$Bit $tmp17 = *$tmp16;
panda$core$Bit $tmp18 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp17);
return $tmp18;

}
panda$core$String$Match* panda$core$String$RegexMatchIterator$next$R$panda$core$String$Match(panda$core$String$RegexMatchIterator* param0) {

panda$core$String$Match* local0 = NULL;
panda$core$String$Index local1;
ITable* $tmp19 = ((panda$collections$Iterator*) param0)->$class->itable;
while ($tmp19->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
$fn21 $tmp20 = $tmp19->methods[0];
panda$core$Bit $tmp22 = $tmp20(((panda$collections$Iterator*) param0));
panda$core$Bit $tmp23 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp22);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp25 = (panda$core$Int64) {307};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s26, $tmp25, &$s27);
abort(); // unreachable
block1:;
// line 308
panda$core$String$Match* $tmp28 = (panda$core$String$Match*) pandaObjectAlloc(40, (panda$core$Class*) &panda$core$String$Match$class);
panda$core$Matcher** $tmp29 = &param0->matcher;
panda$core$Matcher* $tmp30 = *$tmp29;
panda$core$String$Match$init$panda$core$Matcher($tmp28, $tmp30);
*(&local0) = ((panda$core$String$Match*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
panda$core$String$Match* $tmp31 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
*(&local0) = $tmp28;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
// unreffing REF($10:panda.core.String.Match)
// line 309
// line 310
panda$core$Bit* $tmp32 = &param0->allowOverlaps;
panda$core$Bit $tmp33 = *$tmp32;
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block3; else goto block5;
block3:;
// line 311
panda$core$String** $tmp35 = &param0->haystack;
panda$core$String* $tmp36 = *$tmp35;
panda$core$Matcher** $tmp37 = &param0->matcher;
panda$core$Matcher* $tmp38 = *$tmp37;
panda$core$String$Index $tmp39;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp39, $tmp38);
panda$core$String$Index $tmp40 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp36, $tmp39);
*(&local1) = $tmp40;
goto block4;
block5:;
// line 1
// line 314
panda$core$Matcher** $tmp41 = &param0->matcher;
panda$core$Matcher* $tmp42 = *$tmp41;
panda$core$String$Index $tmp43;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp43, $tmp42);
*(&local1) = $tmp43;
goto block4;
block4:;
// line 316
panda$core$Matcher** $tmp44 = &param0->matcher;
panda$core$Matcher* $tmp45 = *$tmp44;
panda$core$String$Index $tmp46 = *(&local1);
panda$core$Bit $tmp47 = panda$core$Matcher$find$panda$core$String$Index$R$panda$core$Bit($tmp45, $tmp46);
panda$core$Bit* $tmp48 = &param0->found;
*$tmp48 = $tmp47;
// line 317
panda$core$String$Match* $tmp49 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
panda$core$String$Match* $tmp50 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// unreffing result
*(&local0) = ((panda$core$String$Match*) NULL);
return $tmp49;

}
void panda$core$String$RegexMatchIterator$cleanup(panda$core$String$RegexMatchIterator* param0) {

// line 285
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$Matcher** $tmp51 = &param0->matcher;
panda$core$Matcher* $tmp52 = *$tmp51;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
panda$core$String** $tmp53 = &param0->haystack;
panda$core$String* $tmp54 = *$tmp53;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
return;

}






