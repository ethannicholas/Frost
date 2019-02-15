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

typedef frost$core$Bit (*$fn21)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -2195058790848912080, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 94, 4224316421190324854, NULL };

void frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit(frost$core$String$MatchIterator* param0, frost$core$String* param1, frost$core$String* param2, frost$core$Bit param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:222
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp3 = &param0->haystack;
frost$core$String* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$core$String** $tmp5 = &param0->haystack;
*$tmp5 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:223
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp6 = &param0->needle;
frost$core$String* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$String** $tmp8 = &param0->needle;
*$tmp8 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:224
frost$core$Bit* $tmp9 = &param0->allowOverlaps;
frost$core$Bit $tmp10 = *$tmp9;
frost$core$Bit* $tmp11 = &param0->allowOverlaps;
*$tmp11 = $tmp10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:225
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:225:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:978:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int64 $tmp12 = (frost$core$Int64) {0u};
frost$core$String$Index $tmp13 = frost$core$String$Index$init$frost$core$Int64($tmp12);
frost$core$String$Index$nullable $tmp14 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param1, param2, $tmp13);
frost$core$String$Index$nullable* $tmp15 = &param0->nextMatch;
*$tmp15 = $tmp14;
return;

}
frost$core$Bit frost$core$String$MatchIterator$get_done$R$frost$core$Bit(frost$core$String$MatchIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:230
frost$core$String$Index$nullable* $tmp16 = &param0->nextMatch;
frost$core$String$Index$nullable $tmp17 = *$tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {!$tmp17.nonnull};
return $tmp18;

}
frost$core$String$Index frost$core$String$MatchIterator$next$R$frost$core$String$Index(frost$core$String$MatchIterator* param0) {

frost$core$String$Index$nullable local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
ITable* $tmp19 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
$fn21 $tmp20 = $tmp19->methods[0];
frost$core$Bit $tmp22 = $tmp20(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.stub:47:6
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp23 = $tmp22.value;
bool $tmp24 = !$tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp27 = (frost$core$Int64) {234u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s28, $tmp27, &$s29);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:235
frost$core$String$Index$nullable* $tmp30 = &param0->nextMatch;
frost$core$String$Index$nullable $tmp31 = *$tmp30;
*(&local0) = $tmp31;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:236
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:237
frost$core$Bit* $tmp32 = &param0->allowOverlaps;
frost$core$Bit $tmp33 = *$tmp32;
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:238
frost$core$String** $tmp35 = &param0->haystack;
frost$core$String* $tmp36 = *$tmp35;
frost$core$String$Index $tmp37 = *(&local1);
frost$core$String$Index $tmp38 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp36, $tmp37);
*(&local1) = $tmp38;
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:241
frost$core$String$Index$nullable* $tmp39 = &param0->nextMatch;
frost$core$String$Index$nullable $tmp40 = *$tmp39;
frost$core$Int64 $tmp41 = ((frost$core$String$Index) $tmp40.value).value;
frost$core$String** $tmp42 = &param0->needle;
frost$core$String* $tmp43 = *$tmp42;
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int64 from String.frost:241:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:492
frost$core$Int64* $tmp44 = &$tmp43->_length;
frost$core$Int64 $tmp45 = *$tmp44;
int64_t $tmp46 = $tmp41.value;
int64_t $tmp47 = $tmp45.value;
int64_t $tmp48 = $tmp46 + $tmp47;
frost$core$Int64 $tmp49 = (frost$core$Int64) {$tmp48};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:241:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int64* $tmp50 = &(&local3)->value;
*$tmp50 = $tmp49;
frost$core$String$Index $tmp51 = *(&local3);
*(&local2) = $tmp51;
frost$core$String$Index $tmp52 = *(&local2);
*(&local1) = $tmp52;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:243
frost$core$String** $tmp53 = &param0->haystack;
frost$core$String* $tmp54 = *$tmp53;
frost$core$String** $tmp55 = &param0->needle;
frost$core$String* $tmp56 = *$tmp55;
frost$core$String$Index $tmp57 = *(&local1);
frost$core$String$Index$nullable $tmp58 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp54, $tmp56, $tmp57);
frost$core$String$Index$nullable* $tmp59 = &param0->nextMatch;
*$tmp59 = $tmp58;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:244
frost$core$String$Index$nullable $tmp60 = *(&local0);
return ((frost$core$String$Index) $tmp60.value);

}
void frost$core$String$MatchIterator$cleanup(frost$core$String$MatchIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:212
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp61 = &param0->haystack;
frost$core$String* $tmp62 = *$tmp61;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$String** $tmp63 = &param0->needle;
frost$core$String* $tmp64 = *$tmp63;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
return;

}

