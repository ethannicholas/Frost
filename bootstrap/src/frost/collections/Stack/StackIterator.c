#include "frost/collections/Stack/StackIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"

__attribute__((weak)) frost$core$Object* frost$collections$Stack$StackIterator$next$R$frost$collections$Stack$StackIterator$T$shim(frost$collections$Stack$StackIterator* p0) {
    frost$core$Object* result = frost$collections$Stack$StackIterator$next$R$frost$collections$Stack$StackIterator$T(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$Stack$StackIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$Stack$StackIterator$get_done$R$frost$core$Bit, frost$collections$Stack$StackIterator$next$R$frost$collections$Stack$StackIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Stack$StackIterator$class_type frost$collections$Stack$StackIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Stack$StackIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$Stack$StackIterator$cleanup, frost$collections$Stack$StackIterator$get_done$R$frost$core$Bit, frost$collections$Stack$StackIterator$next$R$frost$collections$Stack$StackIterator$T$shim} };

typedef frost$core$Bit (*$fn18)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x53\x74\x61\x63\x6b\x49\x74\x65\x72\x61\x74\x6f\x72", 37, -4653137888355725414, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4463479325045299737, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x53\x74\x61\x63\x6b\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x53\x74\x61\x63\x6b\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 116, -4994321975475337297, NULL };

void frost$collections$Stack$StackIterator$init$frost$collections$Stack$LTfrost$collections$Stack$StackIterator$T$GT(frost$collections$Stack$StackIterator* param0, frost$collections$Stack* param1) {

// line 14
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// line 17
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$Stack** $tmp4 = &param0->stack;
frost$collections$Stack* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$Stack** $tmp6 = &param0->stack;
*$tmp6 = param1;
return;

}
frost$core$Bit frost$collections$Stack$StackIterator$get_done$R$frost$core$Bit(frost$collections$Stack$StackIterator* param0) {

// line 22
frost$core$Int64* $tmp7 = &param0->index;
frost$core$Int64 $tmp8 = *$tmp7;
frost$collections$Stack** $tmp9 = &param0->stack;
frost$collections$Stack* $tmp10 = *$tmp9;
frost$core$Int64 $tmp11 = frost$collections$Stack$get_count$R$frost$core$Int64($tmp10);
int64_t $tmp12 = $tmp8.value;
int64_t $tmp13 = $tmp11.value;
bool $tmp14 = $tmp12 >= $tmp13;
frost$core$Bit $tmp15 = (frost$core$Bit) {$tmp14};
return $tmp15;

}
frost$core$Object* frost$collections$Stack$StackIterator$next$R$frost$collections$Stack$StackIterator$T(frost$collections$Stack$StackIterator* param0) {

frost$core$Object* local0 = NULL;
ITable* $tmp16 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[0];
frost$core$Bit $tmp19 = $tmp17(((frost$collections$Iterator*) param0));
frost$core$Bit $tmp20 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp22 = (frost$core$Int64) {26};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block1:;
// line 27
frost$collections$Stack** $tmp25 = &param0->stack;
frost$collections$Stack* $tmp26 = *$tmp25;
frost$core$Int64* $tmp27 = &param0->index;
frost$core$Int64 $tmp28 = *$tmp27;
frost$core$Object* $tmp29 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp26, $tmp28);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp29);
frost$core$Object* $tmp30 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp30);
*(&local0) = $tmp29;
frost$core$Frost$unref$frost$core$Object$Q($tmp29);
// line 28
frost$core$Int64* $tmp31 = &param0->index;
frost$core$Int64 $tmp32 = *$tmp31;
frost$core$Int64 $tmp33 = (frost$core$Int64) {1};
int64_t $tmp34 = $tmp32.value;
int64_t $tmp35 = $tmp33.value;
int64_t $tmp36 = $tmp34 + $tmp35;
frost$core$Int64 $tmp37 = (frost$core$Int64) {$tmp36};
frost$core$Int64* $tmp38 = &param0->index;
*$tmp38 = $tmp37;
// line 29
frost$core$Object* $tmp39 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp39);
frost$core$Object* $tmp40 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp40);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp39;

}
void frost$collections$Stack$StackIterator$cleanup(frost$collections$Stack$StackIterator* param0) {

// line 11
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Stack** $tmp41 = &param0->stack;
frost$collections$Stack* $tmp42 = *$tmp41;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
return;

}






