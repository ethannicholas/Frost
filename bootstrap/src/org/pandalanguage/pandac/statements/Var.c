#include "org/pandalanguage/pandac/statements/Var.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"


static panda$core$String $s1;
org$pandalanguage$pandac$statements$Var$class_type org$pandalanguage$pandac$statements$Var$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$statements$Var$cleanup} };

typedef panda$collections$Iterator* (*$fn4)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn8)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn13)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x73\x2e\x56\x61\x72", 39, 4081885003902117917, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x56\x61\x72\x2e\x70\x61\x6e\x64\x61", 9, 2035463260957575760, NULL };

void org$pandalanguage$pandac$statements$Var$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$Variable$Kind param2, org$pandalanguage$pandac$FixedArray* param3) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$Position local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 13
ITable* $tmp2 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp2->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2 = $tmp2->next;
}
$fn4 $tmp3 = $tmp2->methods[0];
panda$collections$Iterator* $tmp5 = $tmp3(((panda$collections$Iterable*) param3));
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
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp11 = $tmp5->$class->itable;
while ($tmp11->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[1];
panda$core$Object* $tmp14 = $tmp12($tmp5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp14)));
org$pandalanguage$pandac$ASTNode* $tmp15 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) $tmp14);
// line 14
org$pandalanguage$pandac$ASTNode* $tmp16 = *(&local0);
panda$core$Int64* $tmp17 = &$tmp16->$rawValue;
panda$core$Int64 $tmp18 = *$tmp17;
panda$core$Int64 $tmp19 = (panda$core$Int64) {14};
panda$core$Bit $tmp20 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp18, $tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp22 = (org$pandalanguage$pandac$Position*) ($tmp16->$data + 0);
org$pandalanguage$pandac$Position $tmp23 = *$tmp22;
*(&local1) = $tmp23;
org$pandalanguage$pandac$ASTNode** $tmp24 = (org$pandalanguage$pandac$ASTNode**) ($tmp16->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp25 = *$tmp24;
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
org$pandalanguage$pandac$ASTNode* $tmp26 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
*(&local2) = $tmp25;
org$pandalanguage$pandac$ASTNode** $tmp27 = (org$pandalanguage$pandac$ASTNode**) ($tmp16->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp28 = *$tmp27;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
org$pandalanguage$pandac$ASTNode* $tmp29 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
*(&local3) = $tmp28;
// line 16
org$pandalanguage$pandac$Position $tmp30 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp31 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp32 = *(&local3);
org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$Variable$Kind(param0, $tmp30, $tmp31, $tmp32, param2);
org$pandalanguage$pandac$ASTNode* $tmp33 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing rawValue
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp34 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing target
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block6:;
// line 19
panda$core$Bit $tmp35 = panda$core$Bit$init$builtin_bit(false);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp37 = (panda$core$Int64) {19};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s38, $tmp37);
abort(); // unreachable
block7:;
goto block4;
block4:;
panda$core$Panda$unref$panda$core$Object$Q($tmp14);
// unreffing REF($15:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp39 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
// unreffing decl
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
// unreffing REF($4:panda.collections.Iterator<panda.collections.Iterable.T>)
return;

}
void org$pandalanguage$pandac$statements$Var$init(org$pandalanguage$pandac$statements$Var* param0) {

return;

}
void org$pandalanguage$pandac$statements$Var$cleanup(org$pandalanguage$pandac$statements$Var* param0) {

// line 9
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






