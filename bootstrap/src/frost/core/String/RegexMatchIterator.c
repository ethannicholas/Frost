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
frost$core$String$RegexMatchIterator$class_type frost$core$String$RegexMatchIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$String$RegexMatchIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$String$RegexMatchIterator$cleanup, frost$core$String$RegexMatchIterator$get_done$R$frost$core$Bit, frost$core$String$RegexMatchIterator$next$R$frost$core$String$Match$shim} };

typedef frost$core$Bit (*$fn23)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x52\x65\x67\x65\x78\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72", 36, -7545645683876285905, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x52\x65\x67\x65\x78\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68", 99, -6360471890359797890, NULL };

void frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit(frost$core$String$RegexMatchIterator* param0, frost$core$String* param1, frost$core$RegularExpression* param2, frost$core$Bit param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:295
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp2 = &param0->haystack;
frost$core$String* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$String** $tmp4 = &param0->haystack;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:296
frost$core$Bit* $tmp5 = &param0->allowOverlaps;
frost$core$Bit $tmp6 = *$tmp5;
frost$core$Bit* $tmp7 = &param0->allowOverlaps;
*$tmp7 = $tmp6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:297
frost$core$Matcher* $tmp8 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param2, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$Matcher** $tmp9 = &param0->matcher;
frost$core$Matcher* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Matcher** $tmp11 = &param0->matcher;
*$tmp11 = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:298
frost$core$Matcher** $tmp12 = &param0->matcher;
frost$core$Matcher* $tmp13 = *$tmp12;
frost$core$Bit $tmp14 = frost$core$Matcher$find$R$frost$core$Bit($tmp13);
frost$core$Bit* $tmp15 = &param0->found;
*$tmp15 = $tmp14;
return;

}
frost$core$Bit frost$core$String$RegexMatchIterator$get_done$R$frost$core$Bit(frost$core$String$RegexMatchIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:303
frost$core$Bit* $tmp16 = &param0->found;
frost$core$Bit $tmp17 = *$tmp16;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from String.frost:303:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp18 = $tmp17.value;
bool $tmp19 = !$tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
return $tmp20;

}
frost$core$String$Match* frost$core$String$RegexMatchIterator$next$R$frost$core$String$Match(frost$core$String$RegexMatchIterator* param0) {

frost$core$String$Match* local0 = NULL;
frost$core$String$Index local1;
ITable* $tmp21 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp21 = $tmp21->next;
}
$fn23 $tmp22 = $tmp21->methods[0];
frost$core$Bit $tmp24 = $tmp22(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.stub:47:6
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp25 = $tmp24.value;
bool $tmp26 = !$tmp25;
frost$core$Bit $tmp27 = (frost$core$Bit) {$tmp26};
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp29 = (frost$core$Int64) {307};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s30, $tmp29, &$s31);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:308
FROST_ASSERT(40 == sizeof(frost$core$String$Match));
frost$core$String$Match* $tmp32 = (frost$core$String$Match*) frostObjectAlloc(40, (frost$core$Class*) &frost$core$String$Match$class);
frost$core$Matcher** $tmp33 = &param0->matcher;
frost$core$Matcher* $tmp34 = *$tmp33;
frost$core$String$Match$init$frost$core$Matcher($tmp32, $tmp34);
*(&local0) = ((frost$core$String$Match*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$String$Match* $tmp35 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
*(&local0) = $tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:309
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:310
frost$core$Bit* $tmp36 = &param0->allowOverlaps;
frost$core$Bit $tmp37 = *$tmp36;
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:311
frost$core$String** $tmp39 = &param0->haystack;
frost$core$String* $tmp40 = *$tmp39;
frost$core$Matcher** $tmp41 = &param0->matcher;
frost$core$Matcher* $tmp42 = *$tmp41;
frost$core$String$Index $tmp43;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp43, $tmp42);
frost$core$String$Index $tmp44 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp40, $tmp43);
*(&local1) = $tmp44;
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:314
frost$core$Matcher** $tmp45 = &param0->matcher;
frost$core$Matcher* $tmp46 = *$tmp45;
frost$core$String$Index $tmp47;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp47, $tmp46);
*(&local1) = $tmp47;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:316
frost$core$Matcher** $tmp48 = &param0->matcher;
frost$core$Matcher* $tmp49 = *$tmp48;
frost$core$String$Index $tmp50 = *(&local1);
// begin inline call to method frost.core.Matcher.find(start:frost.core.String.Index):frost.core.Bit from String.frost:316:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:86
frost$core$String$Index* $tmp51 = &$tmp49->replacementIndex;
*$tmp51 = $tmp50;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:87
frost$core$Bit $tmp52;
frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit(&$tmp52, $tmp49, $tmp50);
frost$core$Bit* $tmp53 = &$tmp49->matched;
*$tmp53 = $tmp52;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:88
frost$core$Bit* $tmp54 = &$tmp49->matched;
frost$core$Bit $tmp55 = *$tmp54;
frost$core$Bit* $tmp56 = &param0->found;
*$tmp56 = $tmp55;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:317
frost$core$String$Match* $tmp57 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$String$Match* $tmp58 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local0) = ((frost$core$String$Match*) NULL);
return $tmp57;

}
void frost$core$String$RegexMatchIterator$cleanup(frost$core$String$RegexMatchIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:285
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Matcher** $tmp59 = &param0->matcher;
frost$core$Matcher* $tmp60 = *$tmp59;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$String** $tmp61 = &param0->haystack;
frost$core$String* $tmp62 = *$tmp61;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
return;

}






