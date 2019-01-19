#include "frost/core/String/UTF16Iterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Char16.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt16.h"

__attribute__((weak)) frost$core$Object* frost$core$String$UTF16Iterator$next$R$frost$core$Char16$shim(frost$core$String$UTF16Iterator* p0) {
    frost$core$Char16 result = frost$core$String$UTF16Iterator$next$R$frost$core$Char16(p0);

    frost$core$Char16$wrapper* $tmp2;
    $tmp2 = (frost$core$Char16$wrapper*) frostObjectAlloc(14, (frost$core$Class*) &frost$core$Char16$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$core$String$UTF16Iterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$core$String$UTF16Iterator$get_done$R$frost$core$Bit, frost$core$String$UTF16Iterator$next$R$frost$core$Char16$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$core$String$UTF16Iterator$class_type frost$core$String$UTF16Iterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$String$UTF16Iterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$String$UTF16Iterator$cleanup, frost$core$String$UTF16Iterator$get_done$R$frost$core$Bit, frost$core$String$UTF16Iterator$next$R$frost$core$Char16$shim} };

typedef frost$core$Bit (*$fn25)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x31\x36\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -7916280352140999823, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x31\x36\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 88, 4491651754945713955, NULL };

void frost$core$String$UTF16Iterator$init$frost$core$String(frost$core$String$UTF16Iterator* param0, frost$core$String* param1) {

// line 131
frost$core$Int64 $tmp3 = (frost$core$Int64) {0};
frost$core$Int64* $tmp4 = &param0->index;
*$tmp4 = $tmp3;
// line 136
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp5 = &param0->str;
frost$core$String* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$String** $tmp7 = &param0->str;
*$tmp7 = param1;
// line 137
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit(false);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp10 = (frost$core$Int64) {137};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s11, $tmp10, &$s12);
abort(); // unreachable
block1:;
return;

}
frost$core$Bit frost$core$String$UTF16Iterator$get_done$R$frost$core$Bit(frost$core$String$UTF16Iterator* param0) {

// line 142
frost$core$Int64* $tmp13 = &param0->index;
frost$core$Int64 $tmp14 = *$tmp13;
frost$core$String** $tmp15 = &param0->str;
frost$core$String* $tmp16 = *$tmp15;
frost$core$Int64* $tmp17 = &$tmp16->_length;
frost$core$Int64 $tmp18 = *$tmp17;
int64_t $tmp19 = $tmp14.value;
int64_t $tmp20 = $tmp18.value;
bool $tmp21 = $tmp19 >= $tmp20;
frost$core$Bit $tmp22 = (frost$core$Bit) {$tmp21};
return $tmp22;

}
frost$core$Char16 frost$core$String$UTF16Iterator$next$R$frost$core$Char16(frost$core$String$UTF16Iterator* param0) {

ITable* $tmp23 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp23 = $tmp23->next;
}
$fn25 $tmp24 = $tmp23->methods[0];
frost$core$Bit $tmp26 = $tmp24(((frost$collections$Iterator*) param0));
frost$core$Bit $tmp27 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp26);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp29 = (frost$core$Int64) {146};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s30, $tmp29, &$s31);
abort(); // unreachable
block1:;
// line 147
frost$core$Int64* $tmp32 = &param0->index;
frost$core$Int64 $tmp33 = *$tmp32;
frost$core$Int64 $tmp34 = (frost$core$Int64) {1};
int64_t $tmp35 = $tmp33.value;
int64_t $tmp36 = $tmp34.value;
int64_t $tmp37 = $tmp35 + $tmp36;
frost$core$Int64 $tmp38 = (frost$core$Int64) {$tmp37};
frost$core$Int64* $tmp39 = &param0->index;
*$tmp39 = $tmp38;
// line 148
frost$core$UInt16 $tmp40 = (frost$core$UInt16) {1};
frost$core$Char16 $tmp41 = frost$core$Char16$init$frost$core$UInt16($tmp40);
return $tmp41;

}
void frost$core$String$UTF16Iterator$cleanup(frost$core$String$UTF16Iterator* param0) {

// line 130
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp42 = &param0->str;
frost$core$String* $tmp43 = *$tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
return;

}

