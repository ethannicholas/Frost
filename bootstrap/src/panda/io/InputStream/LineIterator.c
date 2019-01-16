#include "panda/io/InputStream/LineIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/io/InputStream.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"

__attribute__((weak)) panda$core$Object* panda$io$InputStream$LineIterator$next$R$panda$core$String$shim(panda$io$InputStream$LineIterator* p0) {
    panda$core$String* result = panda$io$InputStream$LineIterator$next$R$panda$core$String(p0);

    return ((panda$core$Object*) result);
}

struct { panda$core$Class* cl; ITable* next; void* methods[11]; } panda$io$InputStream$LineIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$io$InputStream$LineIterator$get_done$R$panda$core$Bit, panda$io$InputStream$LineIterator$next$R$panda$core$String$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T, panda$collections$Iterator$map$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$map$U$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$map$U$GT} };

static panda$core$String $s1;
panda$io$InputStream$LineIterator$class_type panda$io$InputStream$LineIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$io$InputStream$LineIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$io$InputStream$LineIterator$cleanup, panda$io$InputStream$LineIterator$get_done$R$panda$core$Bit, panda$io$InputStream$LineIterator$next$R$panda$core$String$shim, panda$io$InputStream$LineIterator$readNext} };

typedef void (*$fn6)(panda$io$InputStream$LineIterator*);
typedef panda$core$Bit (*$fn12)(panda$collections$Iterator*);
typedef void (*$fn29)(panda$io$InputStream$LineIterator*);
typedef panda$core$String* (*$fn40)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x4c\x69\x6e\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 33, -4146794243265748747, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x4c\x69\x6e\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 90, -3022453931518810697, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };

void panda$io$InputStream$LineIterator$init$panda$io$InputStream(panda$io$InputStream$LineIterator* param0, panda$io$InputStream* param1) {

// line 22
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$InputStream** $tmp2 = &param0->input;
panda$io$InputStream* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$io$InputStream** $tmp4 = &param0->input;
*$tmp4 = param1;
// line 23
$fn6 $tmp5 = ($fn6) param0->$class->vtable[4];
$tmp5(param0);
return;

}
panda$core$Bit panda$io$InputStream$LineIterator$get_done$R$panda$core$Bit(panda$io$InputStream$LineIterator* param0) {

// line 28
panda$core$String** $tmp7 = &param0->_next;
panda$core$String* $tmp8 = *$tmp7;
panda$core$Bit $tmp9 = panda$core$Bit$init$builtin_bit($tmp8 == NULL);
return $tmp9;

}
panda$core$String* panda$io$InputStream$LineIterator$next$R$panda$core$String(panda$io$InputStream$LineIterator* param0) {

panda$core$String* local0 = NULL;
ITable* $tmp10 = ((panda$collections$Iterator*) param0)->$class->itable;
while ($tmp10->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
panda$core$Bit $tmp13 = $tmp11(((panda$collections$Iterator*) param0));
panda$core$Bit $tmp14 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp13);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp16 = (panda$core$Int64) {32};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s17, $tmp16, &$s18);
abort(); // unreachable
block1:;
// line 33
panda$core$String** $tmp19 = &param0->_next;
panda$core$String* $tmp20 = *$tmp19;
panda$core$Bit $tmp21 = panda$core$Bit$init$builtin_bit($tmp20 != NULL);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp23 = (panda$core$Int64) {33};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s24, $tmp23);
abort(); // unreachable
block3:;
// line 34
panda$core$String** $tmp25 = &param0->_next;
panda$core$String* $tmp26 = *$tmp25;
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
panda$core$String* $tmp27 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
*(&local0) = $tmp26;
// line 35
$fn29 $tmp28 = ($fn29) param0->$class->vtable[4];
$tmp28(param0);
// line 36
panda$core$String* $tmp30 = *(&local0);
panda$core$Bit $tmp31 = panda$core$Bit$init$builtin_bit($tmp30 != NULL);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp33 = (panda$core$Int64) {36};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s34, $tmp33, &$s35);
abort(); // unreachable
block5:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$core$String* $tmp36 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp30;

}
void panda$io$InputStream$LineIterator$readNext(panda$io$InputStream$LineIterator* param0) {

// line 40
panda$io$InputStream** $tmp37 = &param0->input;
panda$io$InputStream* $tmp38 = *$tmp37;
$fn40 $tmp39 = ($fn40) $tmp38->$class->vtable[15];
panda$core$String* $tmp41 = $tmp39($tmp38);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
panda$core$String** $tmp42 = &param0->_next;
panda$core$String* $tmp43 = *$tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$core$String** $tmp44 = &param0->_next;
*$tmp44 = $tmp41;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing REF($4:panda.core.String?)
return;

}
void panda$io$InputStream$LineIterator$cleanup(panda$io$InputStream$LineIterator* param0) {

// line 17
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$io$InputStream** $tmp45 = &param0->input;
panda$io$InputStream* $tmp46 = *$tmp45;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
panda$core$String** $tmp47 = &param0->_next;
panda$core$String* $tmp48 = *$tmp47;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
return;

}






