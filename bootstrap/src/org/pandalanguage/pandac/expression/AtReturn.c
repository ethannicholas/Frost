#include "org/pandalanguage/pandac/expression/AtReturn.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "panda/collections/Stack.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/IR/Block.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"


static panda$core$String $s1;
org$pandalanguage$pandac$expression$AtReturn$class_type org$pandalanguage$pandac$expression$AtReturn$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$expression$AtReturn$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x74\x52\x65\x74\x75\x72\x6e", 44, -740151228237373671, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x69\x6e\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x68\x69\x63\x68\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 64, -680571356522878436, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x74\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 14, 6130248956606714618, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x27", 111, 4636820193334808557, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x69\x6e\x73\x69\x64\x65\x20\x40\x70\x72\x65", 30, 1873157491258318016, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e", 45, -1772045534974692195, NULL };

org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$AtReturn$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$Compiler$TypeContext* param2) {

// line 13
panda$collections$Stack** $tmp2 = &param0->currentMethod;
panda$collections$Stack* $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
panda$core$Object* $tmp5 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp3, $tmp4);
org$pandalanguage$pandac$Type** $tmp6 = &((org$pandalanguage$pandac$MethodDecl*) $tmp5)->returnType;
org$pandalanguage$pandac$Type* $tmp7 = *$tmp6;
org$pandalanguage$pandac$Type* $tmp8 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp9 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp7, $tmp8);
bool $tmp10 = $tmp9.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
// unreffing REF($9:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp5);
// unreffing REF($5:panda.collections.Stack.T)
if ($tmp10) goto block1; else goto block2;
block1:;
// line 14
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s11);
// line 16
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block2:;
// line 18
org$pandalanguage$pandac$IR** $tmp12 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp13 = *$tmp12;
org$pandalanguage$pandac$IR$Block** $tmp14 = &$tmp13->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp15 = *$tmp14;
org$pandalanguage$pandac$IR$Block$ID* $tmp16 = &$tmp15->id;
org$pandalanguage$pandac$IR$Block$ID $tmp17 = *$tmp16;
org$pandalanguage$pandac$IR$Block$ID$nullable* $tmp18 = &param0->atPreBlock;
org$pandalanguage$pandac$IR$Block$ID$nullable $tmp19 = *$tmp18;
panda$core$Bit $tmp20 = panda$core$Bit$init$builtin_bit($tmp19.nonnull);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp22 = (panda$core$Int64) {18};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block5:;
panda$core$Bit $tmp25 = org$pandalanguage$pandac$IR$Block$ID$$EQ$org$pandalanguage$pandac$IR$Block$ID$R$panda$core$Bit($tmp17, ((org$pandalanguage$pandac$IR$Block$ID) $tmp19.value));
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block3; else goto block4;
block3:;
// line 19
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s27);
// line 20
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block4:;
// line 22
org$pandalanguage$pandac$IR$Value** $tmp28 = &param0->returnValue;
org$pandalanguage$pandac$IR$Value* $tmp29 = *$tmp28;
panda$core$Bit $tmp30 = panda$core$Bit$init$builtin_bit($tmp29 == NULL);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block7; else goto block8;
block7:;
// line 23
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s32);
// line 24
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block8:;
// line 26
org$pandalanguage$pandac$IR$Value** $tmp33 = &param0->returnValue;
org$pandalanguage$pandac$IR$Value* $tmp34 = *$tmp33;
org$pandalanguage$pandac$IR$Value* $tmp35 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp34, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing REF($67:org.pandalanguage.pandac.IR.Value?)
return $tmp35;

}
void org$pandalanguage$pandac$expression$AtReturn$init(org$pandalanguage$pandac$expression$AtReturn* param0) {

return;

}
void org$pandalanguage$pandac$expression$AtReturn$cleanup(org$pandalanguage$pandac$expression$AtReturn* param0) {

// line 10
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






