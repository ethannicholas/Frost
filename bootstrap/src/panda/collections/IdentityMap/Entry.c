#include "panda/collections/IdentityMap/Entry.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
panda$collections$IdentityMap$Entry$class_type panda$collections$IdentityMap$Entry$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$collections$IdentityMap$Entry$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 35, -2999533864682970592, NULL };

void panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V(panda$collections$IdentityMap$Entry* param0, panda$core$Object* param1, panda$core$Object* param2) {

// line 29
panda$core$Object** $tmp2 = &param0->key;
panda$core$Object* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q($tmp3);
panda$core$Panda$ref$panda$core$Object$Q(param1);
panda$core$Object** $tmp4 = &param0->key;
*$tmp4 = param1;
// line 30
panda$core$Object** $tmp5 = &param0->value;
panda$core$Object* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q($tmp6);
panda$core$Panda$ref$panda$core$Object$Q(param2);
panda$core$Object** $tmp7 = &param0->value;
*$tmp7 = param2;
return;

}
void panda$collections$IdentityMap$Entry$cleanup(panda$collections$IdentityMap$Entry* param0) {

// line 14
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$Object** $tmp8 = &param0->key;
panda$core$Object* $tmp9 = *$tmp8;
panda$core$Panda$unref$panda$core$Object$Q($tmp9);
panda$core$Object** $tmp10 = &param0->value;
panda$core$Object* $tmp11 = *$tmp10;
panda$core$Panda$unref$panda$core$Object$Q($tmp11);
panda$collections$IdentityMap$Entry** $tmp12 = &param0->next;
panda$collections$IdentityMap$Entry* $tmp13 = *$tmp12;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
return;

}






