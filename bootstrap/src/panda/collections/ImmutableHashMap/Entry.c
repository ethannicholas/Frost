#include "panda/collections/ImmutableHashMap/Entry.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
panda$collections$ImmutableHashMap$Entry$class_type panda$collections$ImmutableHashMap$Entry$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$collections$ImmutableHashMap$Entry$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 40, -6387519024651096206, NULL };

void panda$collections$ImmutableHashMap$Entry$init$panda$collections$ImmutableHashMap$Entry$K$panda$collections$ImmutableHashMap$Entry$V(panda$collections$ImmutableHashMap$Entry* param0, panda$collections$Key* param1, panda$core$Object* param2) {

// line 27
panda$collections$Key** $tmp2 = &param0->key;
panda$collections$Key* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$collections$Key** $tmp4 = &param0->key;
*$tmp4 = param1;
// line 28
panda$core$Object** $tmp5 = &param0->value;
panda$core$Object* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q($tmp6);
panda$core$Panda$ref$panda$core$Object$Q(param2);
panda$core$Object** $tmp7 = &param0->value;
*$tmp7 = param2;
return;

}
void panda$collections$ImmutableHashMap$Entry$cleanup(panda$collections$ImmutableHashMap$Entry* param0) {

panda$collections$Key** $tmp8 = &param0->key;
panda$collections$Key* $tmp9 = *$tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$core$Object** $tmp10 = &param0->value;
panda$core$Object* $tmp11 = *$tmp10;
panda$core$Panda$unref$panda$core$Object$Q($tmp11);
panda$collections$ImmutableHashMap$Entry** $tmp12 = &param0->next;
panda$collections$ImmutableHashMap$Entry* $tmp13 = *$tmp12;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
return;

}

