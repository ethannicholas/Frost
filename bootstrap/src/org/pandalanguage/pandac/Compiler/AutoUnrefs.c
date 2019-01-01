#include "org/pandalanguage/pandac/Compiler/AutoUnrefs.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/IR.h"
#include "panda/core/Bit.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$AutoUnrefs$class_type org$pandalanguage$pandac$Compiler$AutoUnrefs$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$AutoUnrefs$cleanup} };

typedef panda$core$Bit (*$fn19)(org$pandalanguage$pandac$IR*);
typedef panda$collections$Iterator* (*$fn29)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn33)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn38)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x55\x6e\x72\x65\x66\x73", 44, 1524447707469423667, NULL };

void org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Compiler$AutoUnrefs* param0, org$pandalanguage$pandac$Compiler* param1) {

// line 179
org$pandalanguage$pandac$Compiler** $tmp2 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 180
panda$collections$Array** $tmp5 = &param1->statementUnrefs;
panda$collections$Array* $tmp6 = *$tmp5;
panda$collections$Array** $tmp7 = &param0->old;
panda$collections$Array* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$collections$Array** $tmp9 = &param0->old;
*$tmp9 = $tmp6;
// line 181
panda$collections$Array* $tmp10 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp10);
panda$collections$Array** $tmp11 = &param1->statementUnrefs;
panda$collections$Array* $tmp12 = *$tmp11;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$collections$Array** $tmp13 = &param1->statementUnrefs;
*$tmp13 = $tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
return;

}
void org$pandalanguage$pandac$Compiler$AutoUnrefs$cleanup(org$pandalanguage$pandac$Compiler$AutoUnrefs* param0) {

org$pandalanguage$pandac$IR$Value* local0 = NULL;
// line 186
org$pandalanguage$pandac$Compiler** $tmp14 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp15 = *$tmp14;
org$pandalanguage$pandac$IR** $tmp16 = &$tmp15->ir;
org$pandalanguage$pandac$IR* $tmp17 = *$tmp16;
$fn19 $tmp18 = ($fn19) $tmp17->$class->vtable[5];
panda$core$Bit $tmp20 = $tmp18($tmp17);
panda$core$Bit $tmp21 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp20);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block1:;
// line 187
org$pandalanguage$pandac$Compiler** $tmp23 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp24 = *$tmp23;
panda$collections$Array** $tmp25 = &$tmp24->statementUnrefs;
panda$collections$Array* $tmp26 = *$tmp25;
ITable* $tmp27 = ((panda$collections$Iterable*) $tmp26)->$class->itable;
while ($tmp27->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp27 = $tmp27->next;
}
$fn29 $tmp28 = $tmp27->methods[0];
panda$collections$Iterator* $tmp30 = $tmp28(((panda$collections$Iterable*) $tmp26));
goto block3;
block3:;
ITable* $tmp31 = $tmp30->$class->itable;
while ($tmp31->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp31 = $tmp31->next;
}
$fn33 $tmp32 = $tmp31->methods[0];
panda$core$Bit $tmp34 = $tmp32($tmp30);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block5; else goto block4;
block4:;
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
ITable* $tmp36 = $tmp30->$class->itable;
while ($tmp36->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp36 = $tmp36->next;
}
$fn38 $tmp37 = $tmp36->methods[1];
panda$core$Object* $tmp39 = $tmp37($tmp30);
panda$core$Panda$unref$panda$core$Object$Q($tmp39);
org$pandalanguage$pandac$IR$Value* $tmp40 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) $tmp39)));
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) $tmp39);
// line 188
org$pandalanguage$pandac$Compiler** $tmp41 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp42 = *$tmp41;
org$pandalanguage$pandac$IR$Value* $tmp43 = *(&local0);
org$pandalanguage$pandac$Compiler$compileUnref$org$pandalanguage$pandac$IR$Value($tmp42, $tmp43);
org$pandalanguage$pandac$IR$Value* $tmp44 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// unreffing v
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
goto block2;
block2:;
// line 191
org$pandalanguage$pandac$Compiler** $tmp45 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp46 = *$tmp45;
panda$collections$Array** $tmp47 = &param0->old;
panda$collections$Array* $tmp48 = *$tmp47;
panda$collections$Array** $tmp49 = &$tmp46->statementUnrefs;
panda$collections$Array* $tmp50 = *$tmp49;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
panda$collections$Array** $tmp51 = &$tmp46->statementUnrefs;
*$tmp51 = $tmp48;
org$pandalanguage$pandac$Compiler** $tmp52 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp53 = *$tmp52;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
panda$collections$Array** $tmp54 = &param0->old;
panda$collections$Array* $tmp55 = *$tmp54;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
return;

}

