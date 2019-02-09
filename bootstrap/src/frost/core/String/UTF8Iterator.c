#include "frost/core/String/UTF8Iterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Char8.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"

__attribute__((weak)) frost$core$Object* frost$core$String$UTF8Iterator$next$R$frost$core$Char8$shim(frost$core$String$UTF8Iterator* p0) {
    frost$core$Char8 result = frost$core$String$UTF8Iterator$next$R$frost$core$Char8(p0);

    frost$core$Char8$wrapper* $tmp2;
    $tmp2 = (frost$core$Char8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Char8$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$core$String$UTF8Iterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$core$String$UTF8Iterator$get_done$R$frost$core$Bit, frost$core$String$UTF8Iterator$next$R$frost$core$Char8$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$core$String$UTF8Iterator$class_type frost$core$String$UTF8Iterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$String$UTF8Iterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$String$UTF8Iterator$cleanup, frost$core$String$UTF8Iterator$get_done$R$frost$core$Bit, frost$core$String$UTF8Iterator$next$R$frost$core$Char8$shim} };

typedef frost$core$Bit (*$fn20)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x38\x49\x74\x65\x72\x61\x74\x6f\x72", 30, -6575573593353776146, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x38\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 86, 4434778151421720981, NULL };

void frost$core$String$UTF8Iterator$init$frost$core$String(frost$core$String$UTF8Iterator* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:109
frost$core$Int64 $tmp3 = (frost$core$Int64) {0};
frost$core$Int64* $tmp4 = &param0->index;
*$tmp4 = $tmp3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:114
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp5 = &param0->str;
frost$core$String* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$String** $tmp7 = &param0->str;
*$tmp7 = param1;
return;

}
frost$core$Bit frost$core$String$UTF8Iterator$get_done$R$frost$core$Bit(frost$core$String$UTF8Iterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:119
frost$core$Int64* $tmp8 = &param0->index;
frost$core$Int64 $tmp9 = *$tmp8;
frost$core$String** $tmp10 = &param0->str;
frost$core$String* $tmp11 = *$tmp10;
frost$core$Int64* $tmp12 = &$tmp11->_length;
frost$core$Int64 $tmp13 = *$tmp12;
int64_t $tmp14 = $tmp9.value;
int64_t $tmp15 = $tmp13.value;
bool $tmp16 = $tmp14 >= $tmp15;
frost$core$Bit $tmp17 = (frost$core$Bit) {$tmp16};
return $tmp17;

}
frost$core$Char8 frost$core$String$UTF8Iterator$next$R$frost$core$Char8(frost$core$String$UTF8Iterator* param0) {

ITable* $tmp18 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp18 = $tmp18->next;
}
$fn20 $tmp19 = $tmp18->methods[0];
frost$core$Bit $tmp21 = $tmp19(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.stub:47:6
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp22 = $tmp21.value;
bool $tmp23 = !$tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp26 = (frost$core$Int64) {123};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s27, $tmp26, &$s28);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:124
frost$core$Int64* $tmp29 = &param0->index;
frost$core$Int64 $tmp30 = *$tmp29;
frost$core$Int64 $tmp31 = (frost$core$Int64) {1};
int64_t $tmp32 = $tmp30.value;
int64_t $tmp33 = $tmp31.value;
int64_t $tmp34 = $tmp32 + $tmp33;
frost$core$Int64 $tmp35 = (frost$core$Int64) {$tmp34};
frost$core$Int64* $tmp36 = &param0->index;
*$tmp36 = $tmp35;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:125
frost$core$String** $tmp37 = &param0->str;
frost$core$String* $tmp38 = *$tmp37;
frost$core$Char8** $tmp39 = &$tmp38->data;
frost$core$Char8* $tmp40 = *$tmp39;
frost$core$Int64* $tmp41 = &param0->index;
frost$core$Int64 $tmp42 = *$tmp41;
frost$core$Int64 $tmp43 = (frost$core$Int64) {1};
int64_t $tmp44 = $tmp42.value;
int64_t $tmp45 = $tmp43.value;
int64_t $tmp46 = $tmp44 - $tmp45;
frost$core$Int64 $tmp47 = (frost$core$Int64) {$tmp46};
int64_t $tmp48 = $tmp47.value;
frost$core$Char8 $tmp49 = $tmp40[$tmp48];
return $tmp49;

}
void frost$core$String$UTF8Iterator$cleanup(frost$core$String$UTF8Iterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:108
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp50 = &param0->str;
frost$core$String* $tmp51 = *$tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
return;

}

