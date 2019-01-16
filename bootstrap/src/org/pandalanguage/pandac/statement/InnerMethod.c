#include "org/pandalanguage/pandac/statement/InnerMethod.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/expression/Closure.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "panda/collections/Array.h"


static panda$core$String $s1;
org$pandalanguage$pandac$statement$InnerMethod$class_type org$pandalanguage$pandac$statement$InnerMethod$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$statement$InnerMethod$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x6e\x6e\x65\x72\x4d\x65\x74\x68\x6f\x64", 46, 7497624356291048042, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x6e\x65\x72\x4d\x65\x74\x68\x6f\x64\x2e\x66\x72\x6f\x73\x74", 17, -392801564661498586, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };

void org$pandalanguage$pandac$statement$InnerMethod$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$MethodDecl$Kind param2, panda$core$String* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$ASTNode* param5, org$pandalanguage$pandac$FixedArray* param6) {

org$pandalanguage$pandac$IR$Value* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 17
org$pandalanguage$pandac$Compiler$TypeContext* $tmp2 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp3 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp2, $tmp3);
org$pandalanguage$pandac$IR$Value* $tmp4 = org$pandalanguage$pandac$expression$Closure$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$MethodDecl$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, param4, param5, param6, $tmp2);
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
org$pandalanguage$pandac$IR$Value* $tmp5 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
*(&local0) = $tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
// unreffing REF($4:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:org.pandalanguage.pandac.Compiler.TypeContext)
// line 19
org$pandalanguage$pandac$IR$Value* $tmp6 = *(&local0);
panda$core$Bit $tmp7 = panda$core$Bit$init$builtin_bit($tmp6 == NULL);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
// line 20
org$pandalanguage$pandac$IR$Value* $tmp9 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
// unreffing methodRef
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block2:;
// line 22
org$pandalanguage$pandac$ASTNode* $tmp10 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp11 = (panda$core$Int64) {14};
org$pandalanguage$pandac$ASTNode* $tmp12 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp13 = (panda$core$Int64) {22};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp12, $tmp13, param1, param3);
org$pandalanguage$pandac$ASTNode* $tmp14 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp15 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp16 = *(&local0);
panda$core$Bit $tmp17 = panda$core$Bit$init$builtin_bit($tmp16 != NULL);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp19 = (panda$core$Int64) {23};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s20, $tmp19, &$s21);
abort(); // unreachable
block3:;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp14, $tmp15, param1, $tmp16);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp10, $tmp11, param1, $tmp12, $tmp14);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
org$pandalanguage$pandac$ASTNode* $tmp22 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
*(&local1) = $tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
// unreffing REF($37:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// unreffing REF($34:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
// unreffing REF($32:org.pandalanguage.pandac.ASTNode)
// line 24
org$pandalanguage$pandac$ASTNode* $tmp23 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp24 = (panda$core$Int64) {50};
panda$core$Int64 $tmp25 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Variable$Kind $tmp26 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp25);
panda$collections$Array* $tmp27 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp28 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp27, $tmp28);
org$pandalanguage$pandac$ASTNode* $tmp29 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp27, ((panda$core$Object*) $tmp29));
org$pandalanguage$pandac$FixedArray* $tmp30 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp27);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp23, $tmp24, param1, $tmp26, $tmp30);
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, $tmp23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing REF($81:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing REF($72:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// unreffing REF($68:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp31 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
// unreffing decl
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp32 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
// unreffing methodRef
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;

}
void org$pandalanguage$pandac$statement$InnerMethod$init(org$pandalanguage$pandac$statement$InnerMethod* param0) {

return;

}
void org$pandalanguage$pandac$statement$InnerMethod$cleanup(org$pandalanguage$pandac$statement$InnerMethod* param0) {

// line 12
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






