#include "panda/collections/CollectionWriter.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"


struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$CollectionWriter$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, NULL, { NULL, panda$collections$CollectionWriter$addAll$panda$collections$CollectionView$LTpanda$collections$CollectionWriter$T$GT, NULL} };

static panda$core$String $s1;
panda$collections$CollectionWriter$class_type panda$collections$CollectionWriter$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$CollectionWriter$_panda$collections$CollectionWriter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$collections$CollectionWriter$addAll$panda$collections$CollectionView$LTpanda$collections$CollectionWriter$T$GT, NULL} };

typedef panda$collections$Iterator* (*$fn4)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn8)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn13)(panda$collections$Iterator*);
typedef void (*$fn19)(panda$collections$CollectionWriter*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x57\x72\x69\x74\x65\x72", 34, -9068070593840742067, NULL };

void panda$collections$CollectionWriter$addAll$panda$collections$CollectionView$LTpanda$collections$CollectionWriter$T$GT(panda$collections$CollectionWriter* param0, panda$collections$CollectionView* param1) {

panda$core$Object* local0 = NULL;
// line 27
ITable* $tmp2 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp2->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2 = $tmp2->next;
}
$fn4 $tmp3 = $tmp2->methods[0];
panda$collections$Iterator* $tmp5 = $tmp3(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp6 = $tmp5->$class->itable;
while ($tmp6->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp6 = $tmp6->next;
}
$fn8 $tmp7 = $tmp6->methods[0];
panda$core$Bit $tmp9 = $tmp7($tmp5);
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block3; else goto block2;
block2:;
*(&local0) = ((panda$core$Object*) NULL);
ITable* $tmp11 = $tmp5->$class->itable;
while ($tmp11->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[1];
panda$core$Object* $tmp14 = $tmp12($tmp5);
panda$core$Object* $tmp15 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp15);
panda$core$Panda$ref$panda$core$Object$Q($tmp14);
*(&local0) = $tmp14;
// line 28
panda$core$Object* $tmp16 = *(&local0);
ITable* $tmp17 = param0->$class->itable;
while ($tmp17->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[0];
$tmp18(param0, $tmp16);
panda$core$Panda$unref$panda$core$Object$Q($tmp14);
panda$core$Object* $tmp20 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp20);
// unreffing v
*(&local0) = ((panda$core$Object*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
return;

}






