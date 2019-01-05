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

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$Stack$StackIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit, panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$Stack$StackIterator$class_type panda$collections$Stack$StackIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Stack$StackIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$Stack$StackIterator$cleanup, panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit, panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T$shim} };

typedef panda$core$Bit (*$fn17)(panda$collections$Stack$StackIterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x53\x74\x61\x63\x6b\x49\x74\x65\x72\x61\x74\x6f\x72", 37, 4888538230325112768, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x53\x74\x61\x63\x6b\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x53\x74\x61\x63\x6b\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 116, 2142613279611990419, NULL };

void panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT(panda$collections$Stack$StackIterator* param0, panda$collections$Stack* param1) {

// line 14
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
panda$core$Int64* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// line 17
panda$collections$Stack** $tmp4 = &param0->stack;
panda$collections$Stack* $tmp5 = *$tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
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
$fn17 $tmp16 = ($fn17) param0->$class->vtable[2];
panda$core$Bit $tmp18 = $tmp16(param0);
panda$core$Bit $tmp19 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp18);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp21 = (panda$core$Int64) {26};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block1:;
// line 27
panda$collections$Stack** $tmp24 = &param0->stack;
panda$collections$Stack* $tmp25 = *$tmp24;
panda$core$Int64* $tmp26 = &param0->index;
panda$core$Int64 $tmp27 = *$tmp26;
panda$core$Object* $tmp28 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp25, $tmp27);
*(&local0) = ((panda$core$Object*) NULL);
panda$core$Object* $tmp29 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp29);
panda$core$Panda$ref$panda$core$Object$Q($tmp28);
*(&local0) = $tmp28;
// line 28
panda$core$Int64* $tmp30 = &param0->index;
panda$core$Int64 $tmp31 = *$tmp30;
panda$core$Int64 $tmp32 = (panda$core$Int64) {1};
int64_t $tmp33 = $tmp31.value;
int64_t $tmp34 = $tmp32.value;
int64_t $tmp35 = $tmp33 + $tmp34;
panda$core$Int64 $tmp36 = (panda$core$Int64) {$tmp35};
panda$core$Int64* $tmp37 = &param0->index;
*$tmp37 = $tmp36;
// line 29
panda$core$Object* $tmp38 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q($tmp38);
panda$core$Object* $tmp39 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp39);
// unreffing result
*(&local0) = ((panda$core$Object*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp28);
// unreffing REF($17:panda.collections.Stack.T)
return $tmp38;

}
void panda$collections$Stack$StackIterator$cleanup(panda$collections$Stack$StackIterator* param0) {

// line 11
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$Stack** $tmp40 = &param0->stack;
panda$collections$Stack* $tmp41 = *$tmp40;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
return;

}






