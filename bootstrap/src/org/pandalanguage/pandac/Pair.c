#include "org/pandalanguage/pandac/Pair.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Pair$class_type org$pandalanguage$pandac$Pair$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$Pair$convert$R$panda$core$String, org$pandalanguage$pandac$Pair$cleanup} };

typedef panda$core$String* (*$fn15)(panda$core$Object*);
typedef panda$core$String* (*$fn28)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72", 29, -3248623696870598334, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B(org$pandalanguage$pandac$Pair* param0, panda$core$Object* param1, panda$core$Object* param2) {

// line 9
panda$core$Object** $tmp2 = &param0->first;
panda$core$Object* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q($tmp3);
panda$core$Panda$ref$panda$core$Object$Q(param1);
panda$core$Object** $tmp4 = &param0->first;
*$tmp4 = param1;
// line 10
panda$core$Object** $tmp5 = &param0->second;
panda$core$Object* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q($tmp6);
panda$core$Panda$ref$panda$core$Object$Q(param2);
panda$core$Object** $tmp7 = &param0->second;
*$tmp7 = param2;
return;

}
panda$core$String* org$pandalanguage$pandac$Pair$convert$R$panda$core$String(org$pandalanguage$pandac$Pair* param0) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 15
*(&local0) = ((panda$core$String*) NULL);
// line 16
panda$core$Object** $tmp8 = &param0->first;
panda$core$Object* $tmp9 = *$tmp8;
panda$core$Bit $tmp10 = panda$core$Bit$init$builtin_bit(true);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block3;
block1:;
// line 17
panda$core$Object** $tmp12 = &param0->first;
panda$core$Object* $tmp13 = *$tmp12;
$fn15 $tmp14 = ($fn15) $tmp13->$class->vtable[0];
panda$core$String* $tmp16 = $tmp14($tmp13);
panda$core$String* $tmp17 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
*(&local0) = $tmp16;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
// unreffing REF($15:panda.core.String)
goto block2;
block3:;
// line 1
// line 20
panda$core$String* $tmp18 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s19));
*(&local0) = &$s20;
goto block2;
block2:;
// line 22
*(&local1) = ((panda$core$String*) NULL);
// line 23
panda$core$Object** $tmp21 = &param0->second;
panda$core$Object* $tmp22 = *$tmp21;
panda$core$Bit $tmp23 = panda$core$Bit$init$builtin_bit(true);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block4; else goto block6;
block4:;
// line 24
panda$core$Object** $tmp25 = &param0->second;
panda$core$Object* $tmp26 = *$tmp25;
$fn28 $tmp27 = ($fn28) $tmp26->$class->vtable[0];
panda$core$String* $tmp29 = $tmp27($tmp26);
panda$core$String* $tmp30 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
*(&local1) = $tmp29;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// unreffing REF($50:panda.core.String)
goto block5;
block6:;
// line 1
// line 27
panda$core$String* $tmp31 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s32));
*(&local1) = &$s33;
goto block5;
block5:;
// line 29
panda$core$String* $tmp34 = *(&local0);
panda$core$String* $tmp35 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s36, $tmp34);
panda$core$String* $tmp37 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp35, &$s38);
panda$core$String* $tmp39 = *(&local1);
panda$core$String* $tmp40 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp37, $tmp39);
panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp40, &$s42);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing REF($76:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
// unreffing REF($75:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
// unreffing REF($73:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing REF($72:panda.core.String)
panda$core$String* $tmp43 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing secondString
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp44 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// unreffing firstString
*(&local0) = ((panda$core$String*) NULL);
return $tmp41;

}
void org$pandalanguage$pandac$Pair$cleanup(org$pandalanguage$pandac$Pair* param0) {

// line 4
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$Object** $tmp45 = &param0->first;
panda$core$Object* $tmp46 = *$tmp45;
panda$core$Panda$unref$panda$core$Object$Q($tmp46);
panda$core$Object** $tmp47 = &param0->second;
panda$core$Object* $tmp48 = *$tmp47;
panda$core$Panda$unref$panda$core$Object$Q($tmp48);
return;

}






