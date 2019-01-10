#include "panda/core/String/UTF8List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Char8.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/String/UTF8Iterator.h"

__attribute__((weak)) panda$collections$Iterator* panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT$shim(panda$core$String$UTF8List* p0) {
    panda$collections$Iterator* result = panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Object* panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8$shim(panda$core$String$UTF8List* p0, panda$core$Int64 p1) {
    panda$core$Char8 result = panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8(p0, p1);

    panda$core$Char8$wrapper* $tmp2;
    $tmp2 = (panda$core$Char8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Char8$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$core$String$UTF8List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$String$UTF8List$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$UTF8List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$String$UTF8List$_panda$collections$CollectionView, { panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$core$String$UTF8List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$String$UTF8List$_panda$collections$Iterable, { panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sorted$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

static panda$core$String $s1;
panda$core$String$UTF8List$class_type panda$core$String$UTF8List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF8List$_panda$collections$ListView, { panda$core$Object$convert$R$panda$core$String, panda$core$String$UTF8List$cleanup, panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8$shim, panda$core$String$UTF8List$get_count$R$panda$core$Int64, panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT$shim} };

typedef panda$core$Int64 (*$fn14)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x38\x4c\x69\x73\x74", 26, 3665319702853686154, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x38\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 104, 2901433878021835353, NULL };

void panda$core$String$UTF8List$init$panda$core$String(panda$core$String$UTF8List* param0, panda$core$String* param1) {

// line 88
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String** $tmp3 = &param0->str;
panda$core$String* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$String** $tmp5 = &param0->str;
*$tmp5 = param1;
return;

}
panda$core$Char8 panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8(panda$core$String$UTF8List* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp6 = (panda$core$Int64) {0};
int64_t $tmp7 = param1.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 >= $tmp8;
panda$core$Bit $tmp10 = (panda$core$Bit) {$tmp9};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
ITable* $tmp12 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp12->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
panda$core$Int64 $tmp15 = $tmp13(((panda$collections$CollectionView*) param0));
int64_t $tmp16 = param1.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 < $tmp17;
panda$core$Bit $tmp19 = (panda$core$Bit) {$tmp18};
*(&local0) = $tmp19;
goto block3;
block2:;
*(&local0) = $tmp10;
goto block3;
block3:;
panda$core$Bit $tmp20 = *(&local0);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp22 = (panda$core$Int64) {92};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block4:;
// line 93
panda$core$String** $tmp25 = &param0->str;
panda$core$String* $tmp26 = *$tmp25;
panda$core$Char8** $tmp27 = &$tmp26->data;
panda$core$Char8* $tmp28 = *$tmp27;
int64_t $tmp29 = param1.value;
panda$core$Char8 $tmp30 = $tmp28[$tmp29];
return $tmp30;

}
panda$core$Int64 panda$core$String$UTF8List$get_count$R$panda$core$Int64(panda$core$String$UTF8List* param0) {

// line 98
panda$core$String** $tmp31 = &param0->str;
panda$core$String* $tmp32 = *$tmp31;
panda$core$Int64* $tmp33 = &$tmp32->_length;
panda$core$Int64 $tmp34 = *$tmp33;
return $tmp34;

}
panda$collections$Iterator* panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT(panda$core$String$UTF8List* param0) {

// line 103
panda$core$String$UTF8Iterator* $tmp35 = (panda$core$String$UTF8Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF8Iterator$class);
panda$core$String** $tmp36 = &param0->str;
panda$core$String* $tmp37 = *$tmp36;
panda$core$String$UTF8Iterator$init$panda$core$String($tmp35, $tmp37);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp35)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing REF($1:panda.core.String.UTF8Iterator)
return ((panda$collections$Iterator*) $tmp35);

}
void panda$core$String$UTF8List$cleanup(panda$core$String$UTF8List* param0) {

// line 84
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$String** $tmp38 = &param0->str;
panda$core$String* $tmp39 = *$tmp38;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
return;

}

