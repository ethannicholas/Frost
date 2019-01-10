#include "panda/core/String/UTF8Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Char8.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"

__attribute__((weak)) panda$core$Object* panda$core$String$UTF8Iterator$next$R$panda$core$Char8$shim(panda$core$String$UTF8Iterator* p0) {
    panda$core$Char8 result = panda$core$String$UTF8Iterator$next$R$panda$core$Char8(p0);

    panda$core$Char8$wrapper* $tmp2;
    $tmp2 = (panda$core$Char8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Char8$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[11]; } panda$core$String$UTF8Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$UTF8Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF8Iterator$next$R$panda$core$Char8$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T, panda$collections$Iterator$map$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$map$U$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$map$U$GT} };

static panda$core$String $s1;
panda$core$String$UTF8Iterator$class_type panda$core$String$UTF8Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF8Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$String$UTF8Iterator$cleanup, panda$core$String$UTF8Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF8Iterator$next$R$panda$core$Char8$shim} };

typedef panda$core$Bit (*$fn19)(panda$core$String$UTF8Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x38\x49\x74\x65\x72\x61\x74\x6f\x72", 30, -723788367184202580, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x38\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 86, -8406333299674390623, NULL };

void panda$core$String$UTF8Iterator$init$panda$core$String(panda$core$String$UTF8Iterator* param0, panda$core$String* param1) {

// line 109
panda$core$Int64 $tmp3 = (panda$core$Int64) {0};
panda$core$Int64* $tmp4 = &param0->index;
*$tmp4 = $tmp3;
// line 114
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String** $tmp5 = &param0->str;
panda$core$String* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$core$String** $tmp7 = &param0->str;
*$tmp7 = param1;
return;

}
panda$core$Bit panda$core$String$UTF8Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF8Iterator* param0) {

// line 119
panda$core$Int64* $tmp8 = &param0->index;
panda$core$Int64 $tmp9 = *$tmp8;
panda$core$String** $tmp10 = &param0->str;
panda$core$String* $tmp11 = *$tmp10;
panda$core$Int64* $tmp12 = &$tmp11->_length;
panda$core$Int64 $tmp13 = *$tmp12;
int64_t $tmp14 = $tmp9.value;
int64_t $tmp15 = $tmp13.value;
bool $tmp16 = $tmp14 >= $tmp15;
panda$core$Bit $tmp17 = (panda$core$Bit) {$tmp16};
return $tmp17;

}
panda$core$Char8 panda$core$String$UTF8Iterator$next$R$panda$core$Char8(panda$core$String$UTF8Iterator* param0) {

$fn19 $tmp18 = ($fn19) param0->$class->vtable[2];
panda$core$Bit $tmp20 = $tmp18(param0);
panda$core$Bit $tmp21 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp20);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp23 = (panda$core$Int64) {123};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s24, $tmp23, &$s25);
abort(); // unreachable
block1:;
// line 124
panda$core$Int64* $tmp26 = &param0->index;
panda$core$Int64 $tmp27 = *$tmp26;
panda$core$Int64 $tmp28 = (panda$core$Int64) {1};
int64_t $tmp29 = $tmp27.value;
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29 + $tmp30;
panda$core$Int64 $tmp32 = (panda$core$Int64) {$tmp31};
panda$core$Int64* $tmp33 = &param0->index;
*$tmp33 = $tmp32;
// line 125
panda$core$String** $tmp34 = &param0->str;
panda$core$String* $tmp35 = *$tmp34;
panda$core$Char8** $tmp36 = &$tmp35->data;
panda$core$Char8* $tmp37 = *$tmp36;
panda$core$Int64* $tmp38 = &param0->index;
panda$core$Int64 $tmp39 = *$tmp38;
panda$core$Int64 $tmp40 = (panda$core$Int64) {1};
int64_t $tmp41 = $tmp39.value;
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41 - $tmp42;
panda$core$Int64 $tmp44 = (panda$core$Int64) {$tmp43};
int64_t $tmp45 = $tmp44.value;
panda$core$Char8 $tmp46 = $tmp37[$tmp45];
return $tmp46;

}
void panda$core$String$UTF8Iterator$cleanup(panda$core$String$UTF8Iterator* param0) {

// line 108
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$String** $tmp47 = &param0->str;
panda$core$String* $tmp48 = *$tmp47;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
return;

}

