#include "panda/collections/Iterator/MapIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"

__attribute__((weak)) panda$core$Object* panda$collections$Iterator$MapIterator$next$R$panda$collections$Iterator$MapIterator$U$shim(panda$collections$Iterator$MapIterator* p0) {
    panda$core$Object* result = panda$collections$Iterator$MapIterator$next$R$panda$collections$Iterator$MapIterator$U(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[11]; } panda$collections$Iterator$MapIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$Iterator$MapIterator$get_done$R$panda$core$Bit, panda$collections$Iterator$MapIterator$next$R$panda$collections$Iterator$MapIterator$U$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T, panda$collections$Iterator$map$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$map$U$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$map$U$GT} };

static panda$core$String $s1;
panda$collections$Iterator$MapIterator$class_type panda$collections$Iterator$MapIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Iterator$MapIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$Iterator$MapIterator$cleanup, panda$collections$Iterator$MapIterator$get_done$R$panda$core$Bit, panda$collections$Iterator$MapIterator$next$R$panda$collections$Iterator$MapIterator$U$shim} };

typedef panda$core$Bit (*$fn12)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn15)(panda$collections$Iterator$MapIterator*);
typedef panda$core$Object* (*$fn28)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn35)(panda$core$Object*);
typedef panda$core$Object* (*$fn37)(panda$core$Object*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4d\x61\x70\x49\x74\x65\x72\x61\x74\x6f\x72", 38, 4149355405313038472, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4d\x61\x70\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4d\x61\x70\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x55", 118, -5032961925365850048, NULL };

void panda$collections$Iterator$MapIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$MapIterator$T$GT$$LPpanda$collections$Iterator$MapIterator$T$RP$EQ$GT$LPpanda$collections$Iterator$MapIterator$U$RP(panda$collections$Iterator$MapIterator* param0, panda$collections$Iterator* param1, panda$core$MutableMethod* param2) {

// line 120
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$collections$Iterator** $tmp2 = &param0->base;
panda$collections$Iterator* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$collections$Iterator** $tmp4 = &param0->base;
*$tmp4 = param1;
// line 121
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$MutableMethod** $tmp5 = &param0->map;
panda$core$MutableMethod* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$core$MutableMethod** $tmp7 = &param0->map;
*$tmp7 = param2;
return;

}
panda$core$Bit panda$collections$Iterator$MapIterator$get_done$R$panda$core$Bit(panda$collections$Iterator$MapIterator* param0) {

// line 126
panda$collections$Iterator** $tmp8 = &param0->base;
panda$collections$Iterator* $tmp9 = *$tmp8;
ITable* $tmp10 = $tmp9->$class->itable;
while ($tmp10->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
panda$core$Bit $tmp13 = $tmp11($tmp9);
return $tmp13;

}
panda$core$Object* panda$collections$Iterator$MapIterator$next$R$panda$collections$Iterator$MapIterator$U(panda$collections$Iterator$MapIterator* param0) {

panda$core$Object* local0 = NULL;
$fn15 $tmp14 = ($fn15) param0->$class->vtable[2];
panda$core$Bit $tmp16 = $tmp14(param0);
panda$core$Bit $tmp17 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp16);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp19 = (panda$core$Int64) {130};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s20, $tmp19, &$s21);
abort(); // unreachable
block1:;
// line 131
panda$core$MutableMethod** $tmp22 = &param0->map;
panda$core$MutableMethod* $tmp23 = *$tmp22;
panda$collections$Iterator** $tmp24 = &param0->base;
panda$collections$Iterator* $tmp25 = *$tmp24;
ITable* $tmp26 = $tmp25->$class->itable;
while ($tmp26->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp26 = $tmp26->next;
}
$fn28 $tmp27 = $tmp26->methods[1];
panda$core$Object* $tmp29 = $tmp27($tmp25);
panda$core$Int8** $tmp30 = &$tmp23->pointer;
panda$core$Int8* $tmp31 = *$tmp30;
panda$core$Object** $tmp32 = &$tmp23->target;
panda$core$Object* $tmp33 = *$tmp32;
bool $tmp34 = $tmp33 != ((panda$core$Object*) NULL);
if ($tmp34) goto block3; else goto block4;
block4:;
panda$core$Object* $tmp36 = (($fn35) $tmp31)($tmp29);
*(&local0) = $tmp36;
goto block5;
block3:;
panda$core$Object* $tmp38 = (($fn37) $tmp31)($tmp33, $tmp29);
*(&local0) = $tmp38;
goto block5;
block5:;
panda$core$Object* $tmp39 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q($tmp39);
panda$core$Panda$unref$panda$core$Object$Q($tmp39);
// unreffing REF($35:panda.collections.Iterator.MapIterator.U)
panda$core$Panda$unref$panda$core$Object$Q($tmp29);
// unreffing REF($18:panda.collections.Iterator.T)
return $tmp39;

}
void panda$collections$Iterator$MapIterator$cleanup(panda$collections$Iterator$MapIterator* param0) {

// line 114
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$Iterator** $tmp40 = &param0->base;
panda$collections$Iterator* $tmp41 = *$tmp40;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
panda$core$MutableMethod** $tmp42 = &param0->map;
panda$core$MutableMethod* $tmp43 = *$tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
return;

}





