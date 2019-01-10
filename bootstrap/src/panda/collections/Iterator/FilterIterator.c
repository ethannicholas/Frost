#include "panda/collections/Iterator/FilterIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"

__attribute__((weak)) panda$core$Object* panda$collections$Iterator$FilterIterator$next$R$panda$collections$Iterator$FilterIterator$T$shim(panda$collections$Iterator$FilterIterator* p0) {
    panda$core$Object* result = panda$collections$Iterator$FilterIterator$next$R$panda$collections$Iterator$FilterIterator$T(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[11]; } panda$collections$Iterator$FilterIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$Iterator$FilterIterator$get_done$R$panda$core$Bit, panda$collections$Iterator$FilterIterator$next$R$panda$collections$Iterator$FilterIterator$T$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T, panda$collections$Iterator$map$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$map$U$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$map$U$GT} };

static panda$core$String $s1;
panda$collections$Iterator$FilterIterator$class_type panda$collections$Iterator$FilterIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Iterator$FilterIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$Iterator$FilterIterator$cleanup, panda$collections$Iterator$FilterIterator$getNext, panda$collections$Iterator$FilterIterator$get_done$R$panda$core$Bit, panda$collections$Iterator$FilterIterator$next$R$panda$collections$Iterator$FilterIterator$T$shim} };

typedef void (*$fn9)(panda$collections$Iterator$FilterIterator*);
typedef panda$core$Bit (*$fn14)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn23)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn37)(panda$core$Object*);
typedef panda$core$Bit (*$fn39)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn47)(panda$collections$Iterator$FilterIterator*);
typedef void (*$fn58)(panda$collections$Iterator$FilterIterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x46\x69\x6c\x74\x65\x72\x49\x74\x65\x72\x61\x74\x6f\x72", 41, 7769725683637530640, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x46\x69\x6c\x74\x65\x72\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x46\x69\x6c\x74\x65\x72\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 124, -6681978521071191293, NULL };

void panda$collections$Iterator$FilterIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$FilterIterator$T$GT$$LPpanda$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPpanda$core$Bit$RP(panda$collections$Iterator$FilterIterator* param0, panda$collections$Iterator* param1, panda$core$MutableMethod* param2) {

// line 18
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$collections$Iterator** $tmp2 = &param0->base;
panda$collections$Iterator* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$collections$Iterator** $tmp4 = &param0->base;
*$tmp4 = param1;
// line 19
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$MutableMethod** $tmp5 = &param0->filter;
panda$core$MutableMethod* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$core$MutableMethod** $tmp7 = &param0->filter;
*$tmp7 = param2;
// line 20
$fn9 $tmp8 = ($fn9) param0->$class->vtable[2];
$tmp8(param0);
return;

}
void panda$collections$Iterator$FilterIterator$getNext(panda$collections$Iterator$FilterIterator* param0) {

panda$core$Bit local0;
// line 24
goto block1;
block1:;
// line 25
panda$collections$Iterator** $tmp10 = &param0->base;
panda$collections$Iterator* $tmp11 = *$tmp10;
ITable* $tmp12 = $tmp11->$class->itable;
while ($tmp12->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
panda$core$Bit $tmp15 = $tmp13($tmp11);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block4; else goto block5;
block4:;
// line 26
panda$core$Bit $tmp17 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp18 = &param0->_done;
*$tmp18 = $tmp17;
// line 27
return;
block5:;
// line 29
panda$collections$Iterator** $tmp19 = &param0->base;
panda$collections$Iterator* $tmp20 = *$tmp19;
ITable* $tmp21 = $tmp20->$class->itable;
while ($tmp21->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp21 = $tmp21->next;
}
$fn23 $tmp22 = $tmp21->methods[1];
panda$core$Object* $tmp24 = $tmp22($tmp20);
panda$core$Panda$ref$panda$core$Object$Q($tmp24);
panda$core$Object** $tmp25 = &param0->nextValue;
panda$core$Object* $tmp26 = *$tmp25;
panda$core$Panda$unref$panda$core$Object$Q($tmp26);
panda$core$Object** $tmp27 = &param0->nextValue;
*$tmp27 = $tmp24;
panda$core$Panda$unref$panda$core$Object$Q($tmp24);
// unreffing REF($25:panda.collections.Iterator.T)
goto block2;
block2:;
panda$core$MutableMethod** $tmp28 = &param0->filter;
panda$core$MutableMethod* $tmp29 = *$tmp28;
panda$core$Object** $tmp30 = &param0->nextValue;
panda$core$Object* $tmp31 = *$tmp30;
panda$core$Int8** $tmp32 = &$tmp29->pointer;
panda$core$Int8* $tmp33 = *$tmp32;
panda$core$Object** $tmp34 = &$tmp29->target;
panda$core$Object* $tmp35 = *$tmp34;
bool $tmp36 = $tmp35 != ((panda$core$Object*) NULL);
if ($tmp36) goto block6; else goto block7;
block7:;
panda$core$Bit $tmp38 = (($fn37) $tmp33)($tmp31);
*(&local0) = $tmp38;
goto block8;
block6:;
panda$core$Bit $tmp40 = (($fn39) $tmp33)($tmp35, $tmp31);
*(&local0) = $tmp40;
goto block8;
block8:;
panda$core$Bit $tmp41 = *(&local0);
panda$core$Bit $tmp42 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp41);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block1; else goto block3;
block3:;
return;

}
panda$core$Bit panda$collections$Iterator$FilterIterator$get_done$R$panda$core$Bit(panda$collections$Iterator$FilterIterator* param0) {

// line 36
panda$core$Bit* $tmp44 = &param0->_done;
panda$core$Bit $tmp45 = *$tmp44;
return $tmp45;

}
panda$core$Object* panda$collections$Iterator$FilterIterator$next$R$panda$collections$Iterator$FilterIterator$T(panda$collections$Iterator$FilterIterator* param0) {

panda$core$Object* local0 = NULL;
$fn47 $tmp46 = ($fn47) param0->$class->vtable[3];
panda$core$Bit $tmp48 = $tmp46(param0);
panda$core$Bit $tmp49 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp48);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp51 = (panda$core$Int64) {40};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s52, $tmp51, &$s53);
abort(); // unreachable
block1:;
// line 41
panda$core$Object** $tmp54 = &param0->nextValue;
panda$core$Object* $tmp55 = *$tmp54;
*(&local0) = ((panda$core$Object*) NULL);
panda$core$Panda$ref$panda$core$Object$Q($tmp55);
panda$core$Object* $tmp56 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp56);
*(&local0) = $tmp55;
// line 42
$fn58 $tmp57 = ($fn58) param0->$class->vtable[2];
$tmp57(param0);
// line 43
panda$core$Object* $tmp59 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q($tmp59);
panda$core$Object* $tmp60 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp60);
// unreffing result
*(&local0) = ((panda$core$Object*) NULL);
return $tmp59;

}
void panda$collections$Iterator$FilterIterator$cleanup(panda$collections$Iterator$FilterIterator* param0) {

// line 8
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$Iterator** $tmp61 = &param0->base;
panda$collections$Iterator* $tmp62 = *$tmp61;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
panda$core$MutableMethod** $tmp63 = &param0->filter;
panda$core$MutableMethod* $tmp64 = *$tmp63;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
panda$core$Object** $tmp65 = &param0->nextValue;
panda$core$Object* $tmp66 = *$tmp65;
panda$core$Panda$unref$panda$core$Object$Q($tmp66);
return;

}

