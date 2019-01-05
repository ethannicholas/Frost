#include "org/pandalanguage/pandac/Main/Arguments.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/collections/CollectionView.h"
#include "panda/io/Console.h"
#include "panda/io/OutputStream.h"
#include "panda/core/UInt8.h"
#include "panda/core/System.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Main$Arguments$class_type org$pandalanguage$pandac$Main$Arguments$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$Arguments$cleanup, org$pandalanguage$pandac$Main$Arguments$get_done$R$panda$core$Bit, org$pandalanguage$pandac$Main$Arguments$next$R$panda$core$String, org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn13)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn17)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Object* (*$fn42)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn45)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn59)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn68)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn76)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn79)(org$pandalanguage$pandac$Main$Arguments*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x41\x72\x67\x75\x6d\x65\x6e\x74\x73", 39, 4637500274244339259, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x66\x74\x65\x72\x20", 7, 142212394496195, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };

void org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main$Arguments* param0, panda$collections$ListView* param1) {

// line 32
panda$core$Int64 $tmp2 = (panda$core$Int64) {1};
panda$core$Int64* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// line 35
panda$collections$ListView** $tmp4 = &param0->args;
panda$collections$ListView* $tmp5 = *$tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$collections$ListView** $tmp6 = &param0->args;
*$tmp6 = param1;
return;

}
panda$core$Bit org$pandalanguage$pandac$Main$Arguments$get_done$R$panda$core$Bit(org$pandalanguage$pandac$Main$Arguments* param0) {

// line 39
panda$core$Int64* $tmp7 = &param0->index;
panda$core$Int64 $tmp8 = *$tmp7;
panda$collections$ListView** $tmp9 = &param0->args;
panda$collections$ListView* $tmp10 = *$tmp9;
ITable* $tmp11 = ((panda$collections$CollectionView*) $tmp10)->$class->itable;
while ($tmp11->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
panda$core$Int64 $tmp14 = $tmp12(((panda$collections$CollectionView*) $tmp10));
panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp8, $tmp14);
return $tmp15;

}
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* param0) {

// line 43
$fn17 $tmp16 = ($fn17) param0->$class->vtable[2];
panda$core$Bit $tmp18 = $tmp16(param0);
panda$core$Bit $tmp19 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp18);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp21 = (panda$core$Int64) {43};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s22, $tmp21);
abort(); // unreachable
block1:;
// line 44
panda$core$Int64* $tmp23 = &param0->index;
panda$core$Int64 $tmp24 = *$tmp23;
panda$core$Int64 $tmp25 = (panda$core$Int64) {1};
int64_t $tmp26 = $tmp24.value;
int64_t $tmp27 = $tmp25.value;
int64_t $tmp28 = $tmp26 + $tmp27;
panda$core$Int64 $tmp29 = (panda$core$Int64) {$tmp28};
panda$core$Int64* $tmp30 = &param0->index;
*$tmp30 = $tmp29;
// line 45
panda$collections$ListView** $tmp31 = &param0->args;
panda$collections$ListView* $tmp32 = *$tmp31;
panda$core$Int64* $tmp33 = &param0->index;
panda$core$Int64 $tmp34 = *$tmp33;
panda$core$Int64 $tmp35 = (panda$core$Int64) {1};
int64_t $tmp36 = $tmp34.value;
int64_t $tmp37 = $tmp35.value;
int64_t $tmp38 = $tmp36 - $tmp37;
panda$core$Int64 $tmp39 = (panda$core$Int64) {$tmp38};
ITable* $tmp40 = $tmp32->$class->itable;
while ($tmp40->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp40 = $tmp40->next;
}
$fn42 $tmp41 = $tmp40->methods[0];
panda$core$Object* $tmp43 = $tmp41($tmp32, $tmp39);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp43)));
panda$core$Panda$unref$panda$core$Object$Q($tmp43);
// unreffing REF($31:panda.collections.ListView.T)
return ((panda$core$String*) $tmp43);

}
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* param0, panda$core$String* param1) {

// line 49
$fn45 $tmp44 = ($fn45) param0->$class->vtable[2];
panda$core$Bit $tmp46 = $tmp44(param0);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block1; else goto block2;
block1:;
// line 50
panda$io$OutputStream* $tmp48 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$String* $tmp49 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s50, param1);
panda$core$String* $tmp51 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp49, &$s52);
panda$collections$ListView** $tmp53 = &param0->args;
panda$collections$ListView* $tmp54 = *$tmp53;
panda$collections$ListView** $tmp55 = &param0->args;
panda$collections$ListView* $tmp56 = *$tmp55;
ITable* $tmp57 = ((panda$collections$CollectionView*) $tmp56)->$class->itable;
while ($tmp57->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[0];
panda$core$Int64 $tmp60 = $tmp58(((panda$collections$CollectionView*) $tmp56));
panda$core$Int64 $tmp61 = (panda$core$Int64) {1};
int64_t $tmp62 = $tmp60.value;
int64_t $tmp63 = $tmp61.value;
int64_t $tmp64 = $tmp62 - $tmp63;
panda$core$Int64 $tmp65 = (panda$core$Int64) {$tmp64};
ITable* $tmp66 = $tmp54->$class->itable;
while ($tmp66->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp66 = $tmp66->next;
}
$fn68 $tmp67 = $tmp66->methods[0];
panda$core$Object* $tmp69 = $tmp67($tmp54, $tmp65);
panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s71, ((panda$core$String*) $tmp69));
panda$core$String* $tmp72 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp70, &$s73);
panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp51, $tmp72);
$fn76 $tmp75 = ($fn76) $tmp48->$class->vtable[19];
$tmp75($tmp48, $tmp74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing REF($27:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing REF($26:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
// unreffing REF($25:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp69);
// unreffing REF($23:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
// unreffing REF($6:panda.io.OutputStream)
// line 52
panda$core$UInt8 $tmp77 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp77);
goto block2;
block2:;
// line 54
$fn79 $tmp78 = ($fn79) param0->$class->vtable[3];
panda$core$String* $tmp80 = $tmp78(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
// unreffing REF($57:panda.core.String)
return $tmp80;

}
void org$pandalanguage$pandac$Main$Arguments$cleanup(org$pandalanguage$pandac$Main$Arguments* param0) {

// line 27
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$ListView** $tmp81 = &param0->args;
panda$collections$ListView* $tmp82 = *$tmp81;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
return;

}






