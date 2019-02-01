#include "frost/core/String/MatchIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/String/Index.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Object* frost$core$String$MatchIterator$next$R$frost$core$String$Index$shim(frost$core$String$MatchIterator* p0) {
    frost$core$String$Index result = frost$core$String$MatchIterator$next$R$frost$core$String$Index(p0);

    frost$core$String$Index$wrapper* $tmp2;
    $tmp2 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$core$String$MatchIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$core$String$MatchIterator$get_done$R$frost$core$Bit, frost$core$String$MatchIterator$next$R$frost$core$String$Index$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$core$String$MatchIterator$class_type frost$core$String$MatchIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$String$MatchIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$String$MatchIterator$cleanup, frost$core$String$MatchIterator$get_done$R$frost$core$Bit, frost$core$String$MatchIterator$next$R$frost$core$String$Index$shim} };

typedef frost$core$Bit (*$fn19)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72", 31, 505867795171361900, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 94, -864616477991308834, NULL };

void frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit(frost$core$String$MatchIterator* param0, frost$core$String* param1, frost$core$String* param2, frost$core$Bit param3) {

// line 222
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp3 = &param0->haystack;
frost$core$String* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$core$String** $tmp5 = &param0->haystack;
*$tmp5 = param1;
// line 223
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp6 = &param0->needle;
frost$core$String* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$String** $tmp8 = &param0->needle;
*$tmp8 = param2;
// line 224
frost$core$Bit* $tmp9 = &param0->allowOverlaps;
frost$core$Bit $tmp10 = *$tmp9;
frost$core$Bit* $tmp11 = &param0->allowOverlaps;
*$tmp11 = $tmp10;
// line 225
frost$core$String$Index$nullable $tmp12 = frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(param1, param2);
frost$core$String$Index$nullable* $tmp13 = &param0->nextMatch;
*$tmp13 = $tmp12;
return;

}
frost$core$Bit frost$core$String$MatchIterator$get_done$R$frost$core$Bit(frost$core$String$MatchIterator* param0) {

// line 230
frost$core$String$Index$nullable* $tmp14 = &param0->nextMatch;
frost$core$String$Index$nullable $tmp15 = *$tmp14;
frost$core$Bit $tmp16 = frost$core$Bit$init$builtin_bit(!$tmp15.nonnull);
return $tmp16;

}
frost$core$String$Index frost$core$String$MatchIterator$next$R$frost$core$String$Index(frost$core$String$MatchIterator* param0) {

frost$core$String$Index$nullable local0;
frost$core$String$Index local1;
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
frost$core$Int64 $tmp23 = (frost$core$Int64) {234};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s24, $tmp23, &$s25);
abort(); // unreachable
block1:;
// line 235
frost$core$String$Index$nullable* $tmp26 = &param0->nextMatch;
frost$core$String$Index$nullable $tmp27 = *$tmp26;
*(&local0) = $tmp27;
// line 236
// line 237
frost$core$Bit* $tmp28 = &param0->allowOverlaps;
frost$core$Bit $tmp29 = *$tmp28;
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block3; else goto block5;
block3:;
// line 238
frost$core$String** $tmp31 = &param0->haystack;
frost$core$String* $tmp32 = *$tmp31;
frost$core$String$Index $tmp33 = *(&local1);
frost$core$String$Index $tmp34 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp32, $tmp33);
*(&local1) = $tmp34;
goto block4;
block5:;
// line 1
// line 241
frost$core$String$Index$nullable* $tmp35 = &param0->nextMatch;
frost$core$String$Index$nullable $tmp36 = *$tmp35;
frost$core$Int64 $tmp37 = ((frost$core$String$Index) $tmp36.value).value;
frost$core$String** $tmp38 = &param0->needle;
frost$core$String* $tmp39 = *$tmp38;
frost$core$Int64 $tmp40 = frost$core$String$get_byteLength$R$frost$core$Int64($tmp39);
int64_t $tmp41 = $tmp37.value;
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41 + $tmp42;
frost$core$Int64 $tmp44 = (frost$core$Int64) {$tmp43};
frost$core$String$Index $tmp45 = frost$core$String$Index$init$frost$core$Int64($tmp44);
*(&local1) = $tmp45;
goto block4;
block4:;
// line 243
frost$core$String** $tmp46 = &param0->haystack;
frost$core$String* $tmp47 = *$tmp46;
frost$core$String** $tmp48 = &param0->needle;
frost$core$String* $tmp49 = *$tmp48;
frost$core$String$Index $tmp50 = *(&local1);
frost$core$String$Index$nullable $tmp51 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp47, $tmp49, $tmp50);
frost$core$String$Index$nullable* $tmp52 = &param0->nextMatch;
*$tmp52 = $tmp51;
// line 244
frost$core$String$Index$nullable $tmp53 = *(&local0);
return ((frost$core$String$Index) $tmp53.value);

}
void frost$core$String$MatchIterator$cleanup(frost$core$String$MatchIterator* param0) {

// line 212
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp54 = &param0->haystack;
frost$core$String* $tmp55 = *$tmp54;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$String** $tmp56 = &param0->needle;
frost$core$String* $tmp57 = *$tmp56;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
return;

}

