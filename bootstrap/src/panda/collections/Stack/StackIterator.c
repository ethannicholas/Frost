#include "panda/collections/Stack/StackIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Stack.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"

__attribute__((weak)) panda$core$Object* panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T$shim(panda$collections$Stack$StackIterator* p0) {
    panda$core$Object* result = panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[11]; } panda$collections$Stack$StackIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit, panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T, panda$collections$Iterator$map$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$map$U$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$map$U$GT} };

static panda$core$String $s1;
panda$collections$Stack$StackIterator$class_type panda$collections$Stack$StackIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Stack$StackIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$Stack$StackIterator$cleanup, panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit, panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T$shim} };

typedef panda$core$Bit (*$fn18)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x53\x74\x61\x63\x6b\x49\x74\x65\x72\x61\x74\x6f\x72", 37, 4888538230325112768, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4463479325045299737, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x53\x74\x61\x63\x6b\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x53\x74\x61\x63\x6b\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 116, 2142613279611990419, NULL };

void panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT(panda$collections$Stack$StackIterator* param0, panda$collections$Stack* param1) {

// line 14
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
panda$core$Int64* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// line 17
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$collections$Stack** $tmp4 = &param0->stack;
panda$collections$Stack* $tmp5 = *$tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$collections$Stack** $tmp6 = &param0->stack;
*$tmp6 = param1;
return;

}
panda$core$Bit panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit(panda$collections$Stack$StackIterator* param0) {

// line 22
panda$core$Int64* $tmp7 = &param0->index;
panda$core$Int64 $tmp8 = *$tmp7;
panda$collections$Stack** $tmp9 = &param0->stack;
panda$collections$Stack* $tmp10 = *$tmp9;
panda$core$Int64 $tmp11 = panda$collections$Stack$get_count$R$panda$core$Int64($tmp10);
int64_t $tmp12 = $tmp8.value;
int64_t $tmp13 = $tmp11.value;
bool $tmp14 = $tmp12 >= $tmp13;
panda$core$Bit $tmp15 = (panda$core$Bit) {$tmp14};
return $tmp15;

}
panda$core$Object* panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T(panda$collections$Stack$StackIterator* param0) {

panda$core$Object* local0 = NULL;
ITable* $tmp16 = ((panda$collections$Iterator*) param0)->$class->itable;
while ($tmp16->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[0];
panda$core$Bit $tmp19 = $tmp17(((panda$collections$Iterator*) param0));
panda$core$Bit $tmp20 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp22 = (panda$core$Int64) {26};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block1:;
// line 27
panda$collections$Stack** $tmp25 = &param0->stack;
panda$collections$Stack* $tmp26 = *$tmp25;
panda$core$Int64* $tmp27 = &param0->index;
panda$core$Int64 $tmp28 = *$tmp27;
panda$core$Object* $tmp29 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp26, $tmp28);
*(&local0) = ((panda$core$Object*) NULL);
panda$core$Panda$ref$panda$core$Object$Q($tmp29);
panda$core$Object* $tmp30 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp30);
*(&local0) = $tmp29;
panda$core$Panda$unref$panda$core$Object$Q($tmp29);
// unreffing REF($17:panda.collections.Stack.T)
// line 28
panda$core$Int64* $tmp31 = &param0->index;
panda$core$Int64 $tmp32 = *$tmp31;
panda$core$Int64 $tmp33 = (panda$core$Int64) {1};
int64_t $tmp34 = $tmp32.value;
int64_t $tmp35 = $tmp33.value;
int64_t $tmp36 = $tmp34 + $tmp35;
panda$core$Int64 $tmp37 = (panda$core$Int64) {$tmp36};
panda$core$Int64* $tmp38 = &param0->index;
*$tmp38 = $tmp37;
// line 29
panda$core$Object* $tmp39 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q($tmp39);
panda$core$Object* $tmp40 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp40);
// unreffing result
*(&local0) = ((panda$core$Object*) NULL);
return $tmp39;

}
void panda$collections$Stack$StackIterator$cleanup(panda$collections$Stack$StackIterator* param0) {

// line 11
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$Stack** $tmp41 = &param0->stack;
panda$collections$Stack* $tmp42 = *$tmp41;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
return;

}






