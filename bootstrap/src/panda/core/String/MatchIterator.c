#include "panda/core/String/MatchIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/String/Index.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"

__attribute__((weak)) panda$core$Object* panda$core$String$MatchIterator$next$R$panda$core$String$Index$shim(panda$core$String$MatchIterator* p0) {
    panda$core$String$Index result = panda$core$String$MatchIterator$next$R$panda$core$String$Index(p0);

    panda$core$String$Index$wrapper* $tmp2;
    $tmp2 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[11]; } panda$core$String$MatchIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$MatchIterator$get_done$R$panda$core$Bit, panda$core$String$MatchIterator$next$R$panda$core$String$Index$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T, panda$collections$Iterator$map$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$map$U$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$map$U$GT} };

static panda$core$String $s1;
panda$core$String$MatchIterator$class_type panda$core$String$MatchIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$MatchIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$String$MatchIterator$cleanup, panda$core$String$MatchIterator$get_done$R$panda$core$Bit, panda$core$String$MatchIterator$next$R$panda$core$String$Index$shim} };

typedef panda$core$Bit (*$fn19)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72", 31, 1240365279592640354, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 94, 5579456169478881106, NULL };

void panda$core$String$MatchIterator$init$panda$core$String$panda$core$String$panda$core$Bit(panda$core$String$MatchIterator* param0, panda$core$String* param1, panda$core$String* param2, panda$core$Bit param3) {

// line 222
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String** $tmp3 = &param0->haystack;
panda$core$String* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$String** $tmp5 = &param0->haystack;
*$tmp5 = param1;
// line 223
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp6 = &param0->needle;
panda$core$String* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$String** $tmp8 = &param0->needle;
*$tmp8 = param2;
// line 224
panda$core$Bit* $tmp9 = &param0->allowOverlaps;
panda$core$Bit $tmp10 = *$tmp9;
panda$core$Bit* $tmp11 = &param0->allowOverlaps;
*$tmp11 = $tmp10;
// line 225
panda$core$String$Index$nullable $tmp12 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(param1, param2);
panda$core$String$Index$nullable* $tmp13 = &param0->nextMatch;
*$tmp13 = $tmp12;
return;

}
panda$core$Bit panda$core$String$MatchIterator$get_done$R$panda$core$Bit(panda$core$String$MatchIterator* param0) {

// line 230
panda$core$String$Index$nullable* $tmp14 = &param0->nextMatch;
panda$core$String$Index$nullable $tmp15 = *$tmp14;
panda$core$Bit $tmp16 = panda$core$Bit$init$builtin_bit(!$tmp15.nonnull);
return $tmp16;

}
panda$core$String$Index panda$core$String$MatchIterator$next$R$panda$core$String$Index(panda$core$String$MatchIterator* param0) {

panda$core$String$Index$nullable local0;
panda$core$String$Index local1;
ITable* $tmp17 = ((panda$collections$Iterator*) param0)->$class->itable;
while ($tmp17->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[0];
panda$core$Bit $tmp20 = $tmp18(((panda$collections$Iterator*) param0));
panda$core$Bit $tmp21 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp20);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp23 = (panda$core$Int64) {234};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s24, $tmp23, &$s25);
abort(); // unreachable
block1:;
// line 235
panda$core$String$Index$nullable* $tmp26 = &param0->nextMatch;
panda$core$String$Index$nullable $tmp27 = *$tmp26;
*(&local0) = $tmp27;
// line 236
// line 237
panda$core$Bit* $tmp28 = &param0->allowOverlaps;
panda$core$Bit $tmp29 = *$tmp28;
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block3; else goto block5;
block3:;
// line 238
panda$core$String** $tmp31 = &param0->haystack;
panda$core$String* $tmp32 = *$tmp31;
panda$core$String$Index $tmp33 = *(&local1);
panda$core$String$Index $tmp34 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp32, $tmp33);
*(&local1) = $tmp34;
goto block4;
block5:;
// line 1
// line 241
panda$core$String$Index$nullable* $tmp35 = &param0->nextMatch;
panda$core$String$Index$nullable $tmp36 = *$tmp35;
panda$core$Int64 $tmp37 = ((panda$core$String$Index) $tmp36.value).value;
panda$core$String** $tmp38 = &param0->needle;
panda$core$String* $tmp39 = *$tmp38;
panda$core$Int64 $tmp40 = panda$core$String$get_byteLength$R$panda$core$Int64($tmp39);
int64_t $tmp41 = $tmp37.value;
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41 + $tmp42;
panda$core$Int64 $tmp44 = (panda$core$Int64) {$tmp43};
panda$core$String$Index $tmp45 = panda$core$String$Index$init$panda$core$Int64($tmp44);
*(&local1) = $tmp45;
goto block4;
block4:;
// line 243
panda$core$String** $tmp46 = &param0->haystack;
panda$core$String* $tmp47 = *$tmp46;
panda$core$String** $tmp48 = &param0->needle;
panda$core$String* $tmp49 = *$tmp48;
panda$core$String$Index $tmp50 = *(&local1);
panda$core$String$Index$nullable $tmp51 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q($tmp47, $tmp49, $tmp50);
panda$core$String$Index$nullable* $tmp52 = &param0->nextMatch;
*$tmp52 = $tmp51;
// line 244
panda$core$String$Index$nullable $tmp53 = *(&local0);
return ((panda$core$String$Index) $tmp53.value);

}
void panda$core$String$MatchIterator$cleanup(panda$core$String$MatchIterator* param0) {

// line 212
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$String** $tmp54 = &param0->haystack;
panda$core$String* $tmp55 = *$tmp54;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
panda$core$String** $tmp56 = &param0->needle;
panda$core$String* $tmp57 = *$tmp56;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
return;

}

