#include "org/pandalanguage/pandac/Compiler/BinaryKey.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"

__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$Compiler$BinaryKey$$EQ$org$pandalanguage$pandac$Compiler$BinaryKey$R$panda$core$Bit$shim(org$pandalanguage$pandac$Compiler$BinaryKey* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$Compiler$BinaryKey$$EQ$org$pandalanguage$pandac$Compiler$BinaryKey$R$panda$core$Bit(p0, ((org$pandalanguage$pandac$Compiler$BinaryKey*) p1));

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Compiler$BinaryKey$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$Compiler$BinaryKey$$EQ$org$pandalanguage$pandac$Compiler$BinaryKey$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$BinaryKey$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &org$pandalanguage$pandac$Compiler$BinaryKey$_panda$core$Equatable, { org$pandalanguage$pandac$Compiler$BinaryKey$get_hash$R$panda$core$Int64} };

static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$BinaryKey$class_type org$pandalanguage$pandac$Compiler$BinaryKey$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$BinaryKey$_panda$collections$Key, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$BinaryKey$cleanup, org$pandalanguage$pandac$Compiler$BinaryKey$$EQ$org$pandalanguage$pandac$Compiler$BinaryKey$R$panda$core$Bit$shim, org$pandalanguage$pandac$Compiler$BinaryKey$get_hash$R$panda$core$Int64} };

typedef panda$core$Bit (*$fn24)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x42\x69\x6e\x61\x72\x79\x4b\x65\x79", 43, -1253858179971132871, NULL };

void org$pandalanguage$pandac$Compiler$BinaryKey$init$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Compiler$BinaryKey* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$parser$Token$Kind param2, org$pandalanguage$pandac$ASTNode* param3) {

// line 294
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$ASTNode** $tmp2 = &param0->left;
org$pandalanguage$pandac$ASTNode* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$ASTNode** $tmp4 = &param0->left;
*$tmp4 = param1;
// line 295
org$pandalanguage$pandac$parser$Token$Kind* $tmp5 = &param0->op;
*$tmp5 = param2;
// line 296
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp6 = &param0->right;
org$pandalanguage$pandac$ASTNode* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
org$pandalanguage$pandac$ASTNode** $tmp8 = &param0->right;
*$tmp8 = param3;
return;

}
panda$core$Bit org$pandalanguage$pandac$Compiler$BinaryKey$$EQ$org$pandalanguage$pandac$Compiler$BinaryKey$R$panda$core$Bit(org$pandalanguage$pandac$Compiler$BinaryKey* param0, org$pandalanguage$pandac$Compiler$BinaryKey* param1) {

panda$core$Bit local0;
panda$core$Bit local1;
// line 301
org$pandalanguage$pandac$ASTNode** $tmp9 = &param0->left;
org$pandalanguage$pandac$ASTNode* $tmp10 = *$tmp9;
org$pandalanguage$pandac$ASTNode** $tmp11 = &param1->left;
org$pandalanguage$pandac$ASTNode* $tmp12 = *$tmp11;
bool $tmp13 = $tmp10 == $tmp12;
panda$core$Bit $tmp14 = panda$core$Bit$init$builtin_bit($tmp13);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$parser$Token$Kind* $tmp16 = &param0->op;
org$pandalanguage$pandac$parser$Token$Kind $tmp17 = *$tmp16;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp18;
$tmp18 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp18->value = $tmp17;
org$pandalanguage$pandac$parser$Token$Kind* $tmp19 = &param1->op;
org$pandalanguage$pandac$parser$Token$Kind $tmp20 = *$tmp19;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp21;
$tmp21 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp21->value = $tmp20;
ITable* $tmp22 = ((panda$core$Equatable*) $tmp18)->$class->itable;
while ($tmp22->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp22 = $tmp22->next;
}
$fn24 $tmp23 = $tmp22->methods[0];
panda$core$Bit $tmp25 = $tmp23(((panda$core$Equatable*) $tmp18), ((panda$core$Equatable*) $tmp21));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp21)));
// unreffing REF($15:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp18)));
// unreffing REF($11:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
*(&local1) = $tmp25;
goto block3;
block2:;
*(&local1) = $tmp14;
goto block3;
block3:;
panda$core$Bit $tmp26 = *(&local1);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$ASTNode** $tmp28 = &param0->right;
org$pandalanguage$pandac$ASTNode* $tmp29 = *$tmp28;
org$pandalanguage$pandac$ASTNode** $tmp30 = &param1->right;
org$pandalanguage$pandac$ASTNode* $tmp31 = *$tmp30;
bool $tmp32 = $tmp29 == $tmp31;
panda$core$Bit $tmp33 = panda$core$Bit$init$builtin_bit($tmp32);
*(&local0) = $tmp33;
goto block6;
block5:;
*(&local0) = $tmp26;
goto block6;
block6:;
panda$core$Bit $tmp34 = *(&local0);
return $tmp34;

}
panda$core$Int64 org$pandalanguage$pandac$Compiler$BinaryKey$get_hash$R$panda$core$Int64(org$pandalanguage$pandac$Compiler$BinaryKey* param0) {

// line 306
org$pandalanguage$pandac$ASTNode** $tmp35 = &param0->left;
org$pandalanguage$pandac$ASTNode* $tmp36 = *$tmp35;
panda$core$Int64 $tmp37;
panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(&$tmp37, ((panda$core$Object*) $tmp36));
org$pandalanguage$pandac$ASTNode** $tmp38 = &param0->right;
org$pandalanguage$pandac$ASTNode* $tmp39 = *$tmp38;
panda$core$Int64 $tmp40;
panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(&$tmp40, ((panda$core$Object*) $tmp39));
panda$core$Int64 $tmp41 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp37, $tmp40);
return $tmp41;

}
void org$pandalanguage$pandac$Compiler$BinaryKey$cleanup(org$pandalanguage$pandac$Compiler$BinaryKey* param0) {

// line 286
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$ASTNode** $tmp42 = &param0->left;
org$pandalanguage$pandac$ASTNode* $tmp43 = *$tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
org$pandalanguage$pandac$ASTNode** $tmp44 = &param0->right;
org$pandalanguage$pandac$ASTNode* $tmp45 = *$tmp44;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
return;

}

