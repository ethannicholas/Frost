#include "org/pandalanguage/pandac/expression/AtPre.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/IR/Block.h"
#include "panda/core/Int64.h"


static panda$core$String $s1;
org$pandalanguage$pandac$expression$AtPre$class_type org$pandalanguage$pandac$expression$AtPre$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$expression$AtPre$cleanup} };

typedef void (*$fn42)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef void (*$fn48)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x74\x50\x72\x65", 41, 1835594454938582452, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x77\x69\x74\x68\x69\x6e\x20\x61\x20\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e", 44, 1718773409211881634, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x74\x50\x72\x65\x2e\x66\x72\x6f\x73\x74", 11, -717428910631359935, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x27", 111, 4636820193334808557, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x70\x72\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x40\x70\x72\x65", 27, 7493574264664769467, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x74\x50\x72\x65\x2e\x66\x72\x6f\x73\x74", 11, -717428910631359935, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x27", 111, 4636820193334808557, NULL };

org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$AtPre$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ASTNode* param2, org$pandalanguage$pandac$Compiler$TypeContext* param3) {

org$pandalanguage$pandac$IR* local0 = NULL;
org$pandalanguage$pandac$IR$Block$ID local1;
org$pandalanguage$pandac$IR$Value* local2 = NULL;
// line 12
org$pandalanguage$pandac$IR** $tmp2 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$IR* $tmp4 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 13
org$pandalanguage$pandac$IR$Block$ID$nullable* $tmp5 = &param0->atPreBlock;
org$pandalanguage$pandac$IR$Block$ID$nullable $tmp6 = *$tmp5;
panda$core$Bit $tmp7 = panda$core$Bit$init$builtin_bit(!$tmp6.nonnull);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
// line 14
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s9);
// line 15
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR* $tmp10 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block2:;
// line 17
org$pandalanguage$pandac$IR** $tmp11 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp12 = *$tmp11;
org$pandalanguage$pandac$IR$Block** $tmp13 = &$tmp12->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp14 = *$tmp13;
org$pandalanguage$pandac$IR$Block$ID* $tmp15 = &$tmp14->id;
org$pandalanguage$pandac$IR$Block$ID $tmp16 = *$tmp15;
org$pandalanguage$pandac$IR$Block$ID$nullable* $tmp17 = &param0->atPreBlock;
org$pandalanguage$pandac$IR$Block$ID$nullable $tmp18 = *$tmp17;
panda$core$Bit $tmp19 = panda$core$Bit$init$builtin_bit($tmp18.nonnull);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp21 = (panda$core$Int64) {17};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block5:;
panda$core$Bit $tmp24 = org$pandalanguage$pandac$IR$Block$ID$$EQ$org$pandalanguage$pandac$IR$Block$ID$R$panda$core$Bit($tmp16, ((org$pandalanguage$pandac$IR$Block$ID) $tmp18.value));
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block3; else goto block4;
block3:;
// line 18
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s26);
// line 19
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR* $tmp27 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block4:;
// line 21
org$pandalanguage$pandac$IR* $tmp28 = *(&local0);
org$pandalanguage$pandac$IR$Block** $tmp29 = &$tmp28->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp30 = *$tmp29;
org$pandalanguage$pandac$IR$Block$ID* $tmp31 = &$tmp30->id;
org$pandalanguage$pandac$IR$Block$ID $tmp32 = *$tmp31;
*(&local1) = $tmp32;
// line 22
org$pandalanguage$pandac$IR* $tmp33 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID$nullable* $tmp34 = &param0->atPreBlock;
org$pandalanguage$pandac$IR$Block$ID$nullable $tmp35 = *$tmp34;
panda$core$Bit $tmp36 = panda$core$Bit$init$builtin_bit($tmp35.nonnull);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp38 = (panda$core$Int64) {22};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s39, $tmp38, &$s40);
abort(); // unreachable
block7:;
$fn42 $tmp41 = ($fn42) $tmp33->$class->vtable[4];
$tmp41($tmp33, ((org$pandalanguage$pandac$IR$Block$ID) $tmp35.value));
// line 23
org$pandalanguage$pandac$IR$Value* $tmp43 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param2, param3);
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
org$pandalanguage$pandac$IR$Value* $tmp44 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
*(&local2) = $tmp43;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing REF($81:org.pandalanguage.pandac.IR.Value?)
// line 24
org$pandalanguage$pandac$IR* $tmp45 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp46 = *(&local1);
$fn48 $tmp47 = ($fn48) $tmp45->$class->vtable[4];
$tmp47($tmp45, $tmp46);
// line 25
org$pandalanguage$pandac$IR$Value* $tmp49 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
org$pandalanguage$pandac$IR$Value* $tmp50 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// unreffing result
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp51 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp49;

}
void org$pandalanguage$pandac$expression$AtPre$init(org$pandalanguage$pandac$expression$AtPre* param0) {

return;

}
void org$pandalanguage$pandac$expression$AtPre$cleanup(org$pandalanguage$pandac$expression$AtPre* param0) {

// line 9
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






