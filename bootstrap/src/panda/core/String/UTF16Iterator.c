#include "panda/core/String/UTF16Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Char16.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt16.h"

__attribute__((weak)) panda$core$Object* panda$core$String$UTF16Iterator$next$R$panda$core$Char16$shim(panda$core$String$UTF16Iterator* p0) {
    panda$core$Char16 result = panda$core$String$UTF16Iterator$next$R$panda$core$Char16(p0);

    panda$core$Char16$wrapper* $tmp2;
    $tmp2 = (panda$core$Char16$wrapper*) pandaObjectAlloc(14, (panda$core$Class*) &panda$core$Char16$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$core$String$UTF16Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$UTF16Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF16Iterator$next$R$panda$core$Char16$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$core$String$UTF16Iterator$class_type panda$core$String$UTF16Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF16Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$String$UTF16Iterator$cleanup, panda$core$String$UTF16Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF16Iterator$next$R$panda$core$Char16$shim} };

typedef panda$core$Bit (*$fn24)(panda$core$String$UTF16Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x31\x36\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -7181782867719721369, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x31\x36\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 88, -1176098188237070089, NULL };

void panda$core$String$UTF16Iterator$init$panda$core$String(panda$core$String$UTF16Iterator* param0, panda$core$String* param1) {

// line 131
panda$core$Int64 $tmp3 = (panda$core$Int64) {0};
panda$core$Int64* $tmp4 = &param0->index;
*$tmp4 = $tmp3;
// line 136
panda$core$String** $tmp5 = &param0->str;
panda$core$String* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String** $tmp7 = &param0->str;
*$tmp7 = param1;
// line 137
panda$core$Bit $tmp8 = panda$core$Bit$init$builtin_bit(false);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp10 = (panda$core$Int64) {137};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s11, $tmp10, &$s12);
abort(); // unreachable
block1:;
return;

}
panda$core$Bit panda$core$String$UTF16Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF16Iterator* param0) {

// line 142
panda$core$Int64* $tmp13 = &param0->index;
panda$core$Int64 $tmp14 = *$tmp13;
panda$core$String** $tmp15 = &param0->str;
panda$core$String* $tmp16 = *$tmp15;
panda$core$Int64* $tmp17 = &$tmp16->_length;
panda$core$Int64 $tmp18 = *$tmp17;
int64_t $tmp19 = $tmp14.value;
int64_t $tmp20 = $tmp18.value;
bool $tmp21 = $tmp19 >= $tmp20;
panda$core$Bit $tmp22 = (panda$core$Bit) {$tmp21};
return $tmp22;

}
panda$core$Char16 panda$core$String$UTF16Iterator$next$R$panda$core$Char16(panda$core$String$UTF16Iterator* param0) {

$fn24 $tmp23 = ($fn24) param0->$class->vtable[2];
panda$core$Bit $tmp25 = $tmp23(param0);
panda$core$Bit $tmp26 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp25);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp28 = (panda$core$Int64) {146};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s29, $tmp28, &$s30);
abort(); // unreachable
block1:;
// line 147
panda$core$Int64* $tmp31 = &param0->index;
panda$core$Int64 $tmp32 = *$tmp31;
panda$core$Int64 $tmp33 = (panda$core$Int64) {1};
int64_t $tmp34 = $tmp32.value;
int64_t $tmp35 = $tmp33.value;
int64_t $tmp36 = $tmp34 + $tmp35;
panda$core$Int64 $tmp37 = (panda$core$Int64) {$tmp36};
panda$core$Int64* $tmp38 = &param0->index;
*$tmp38 = $tmp37;
// line 148
panda$core$UInt16 $tmp39 = (panda$core$UInt16) {1};
panda$core$Char16 $tmp40 = panda$core$Char16$init$panda$core$UInt16($tmp39);
return $tmp40;

}
void panda$core$String$UTF16Iterator$cleanup(panda$core$String$UTF16Iterator* param0) {

panda$core$String** $tmp41 = &param0->str;
panda$core$String* $tmp42 = *$tmp41;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
return;

}

