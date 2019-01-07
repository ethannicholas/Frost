#include "org/pandalanguage/pandac/Compiler/IndexLValue.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler/LValue.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/core/Bit.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/FixedArray.h"


struct { panda$core$Class* cl; ITable* next; void* methods[3]; } org$pandalanguage$pandac$Compiler$IndexLValue$_org$pandalanguage$pandac$Compiler$LValue = { (panda$core$Class*) &org$pandalanguage$pandac$Compiler$LValue$class, NULL, { org$pandalanguage$pandac$Compiler$IndexLValue$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$IndexLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q, org$pandalanguage$pandac$Compiler$IndexLValue$compileStore$org$pandalanguage$pandac$IR$Value} };

static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$IndexLValue$class_type org$pandalanguage$pandac$Compiler$IndexLValue$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$IndexLValue$_org$pandalanguage$pandac$Compiler$LValue, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$IndexLValue$cleanup, org$pandalanguage$pandac$Compiler$IndexLValue$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$IndexLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q, org$pandalanguage$pandac$Compiler$IndexLValue$compileStore$org$pandalanguage$pandac$IR$Value} };

typedef panda$core$Int64 (*$fn38)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn48)(panda$collections$Iterable*);
typedef panda$core$Object* (*$fn52)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn64)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Int64 (*$fn82)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn101)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn119)(org$pandalanguage$pandac$Compiler$IndexLValue*);
typedef org$pandalanguage$pandac$Type* (*$fn154)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn179)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn186)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Int64 (*$fn247)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn266)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn283)(org$pandalanguage$pandac$Compiler$IndexLValue*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65", 45, -3180838668458515176, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x70\x61\x6e\x64\x61", 14, -3408958965109419534, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x70\x61\x6e\x64\x61", 14, -3408958965109419534, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27\x5b\x5d\x3a\x3d\x27\x20\x6f\x6e\x20\x27", 24, -3727949445279175429, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x70\x61\x6e\x64\x61", 14, -3408958965109419534, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x70\x61\x6e\x64\x61", 14, -3408958965109419534, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };

void org$pandalanguage$pandac$Compiler$IndexLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Compiler$IndexLValue* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6310
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Compiler** $tmp2 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 6311
org$pandalanguage$pandac$Position* $tmp5 = &param0->position;
*$tmp5 = param2;
// line 6312
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp6 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
org$pandalanguage$pandac$IR$Value** $tmp8 = &param0->target;
*$tmp8 = param3;
// line 6313
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp9 = &param0->rawIndex;
org$pandalanguage$pandac$ASTNode* $tmp10 = *$tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
org$pandalanguage$pandac$ASTNode** $tmp11 = &param0->rawIndex;
*$tmp11 = param4;
return;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$IndexLValue$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler$IndexLValue* param0) {

panda$collections$CollectionView* local0 = NULL;
// line 6318
org$pandalanguage$pandac$Compiler** $tmp12 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp13 = *$tmp12;
org$pandalanguage$pandac$ASTNode* $tmp14 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp15 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Position* $tmp16 = &param0->position;
org$pandalanguage$pandac$Position $tmp17 = *$tmp16;
org$pandalanguage$pandac$ASTNode* $tmp18 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp19 = (panda$core$Int64) {24};
org$pandalanguage$pandac$Position* $tmp20 = &param0->position;
org$pandalanguage$pandac$Position $tmp21 = *$tmp20;
org$pandalanguage$pandac$IR$Value** $tmp22 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp23 = *$tmp22;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp18, $tmp19, $tmp21, $tmp23);
panda$core$Int64 $tmp24 = (panda$core$Int64) {102};
org$pandalanguage$pandac$parser$Token$Kind $tmp25 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp24);
org$pandalanguage$pandac$ASTNode** $tmp26 = &param0->rawIndex;
org$pandalanguage$pandac$ASTNode* $tmp27 = *$tmp26;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp14, $tmp15, $tmp17, $tmp18, $tmp25, $tmp27);
panda$collections$CollectionView* $tmp28 = org$pandalanguage$pandac$Compiler$possibleTypes$org$pandalanguage$pandac$ASTNode$R$panda$collections$CollectionView$LTorg$pandalanguage$pandac$Type$GT$Q($tmp13, $tmp14);
*(&local0) = ((panda$collections$CollectionView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
panda$collections$CollectionView* $tmp29 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
*(&local0) = $tmp28;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
// unreffing REF($19:panda.collections.CollectionView<org.pandalanguage.pandac.Type>?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
// unreffing REF($7:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
// unreffing REF($3:org.pandalanguage.pandac.ASTNode)
// line 6320
panda$collections$CollectionView* $tmp30 = *(&local0);
panda$core$Bit $tmp31 = panda$core$Bit$init$builtin_bit($tmp30 == NULL);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block1; else goto block2;
block1:;
// line 6321
org$pandalanguage$pandac$Type* $tmp33 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing REF($43:org.pandalanguage.pandac.Type)
panda$collections$CollectionView* $tmp34 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing types
*(&local0) = ((panda$collections$CollectionView*) NULL);
return $tmp33;
block2:;
// line 6323
panda$collections$CollectionView* $tmp35 = *(&local0);
ITable* $tmp36 = $tmp35->$class->itable;
while ($tmp36->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp36 = $tmp36->next;
}
$fn38 $tmp37 = $tmp36->methods[0];
panda$core$Int64 $tmp39 = $tmp37($tmp35);
panda$core$Int64 $tmp40 = (panda$core$Int64) {1};
panda$core$Bit $tmp41 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp39, $tmp40);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp43 = (panda$core$Int64) {6323};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s44, $tmp43);
abort(); // unreachable
block3:;
// line 6324
panda$collections$CollectionView* $tmp45 = *(&local0);
ITable* $tmp46 = ((panda$collections$Iterable*) $tmp45)->$class->itable;
while ($tmp46->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[0];
panda$collections$Iterator* $tmp49 = $tmp47(((panda$collections$Iterable*) $tmp45));
ITable* $tmp50 = $tmp49->$class->itable;
while ($tmp50->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp50 = $tmp50->next;
}
$fn52 $tmp51 = $tmp50->methods[1];
panda$core$Object* $tmp53 = $tmp51($tmp49);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp53)));
panda$core$Panda$unref$panda$core$Object$Q($tmp53);
// unreffing REF($75:panda.collections.Iterator.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing REF($71:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$collections$CollectionView* $tmp54 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
// unreffing types
*(&local0) = ((panda$collections$CollectionView*) NULL);
return ((org$pandalanguage$pandac$Type*) $tmp53);

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$Compiler$IndexLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler$IndexLValue* param0) {

org$pandalanguage$pandac$Pair* local0 = NULL;
// line 6329
org$pandalanguage$pandac$IR$Value** $tmp55 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp56 = *$tmp55;
panda$core$Bit $tmp57 = panda$core$Bit$init$builtin_bit($tmp56 == NULL);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block1; else goto block2;
block1:;
// line 6330
org$pandalanguage$pandac$Compiler** $tmp59 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp60 = *$tmp59;
org$pandalanguage$pandac$IR$Value** $tmp61 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp62 = *$tmp61;
$fn64 $tmp63 = ($fn64) $tmp62->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp65 = $tmp63($tmp62);
panda$core$Int64 $tmp66 = (panda$core$Int64) {102};
org$pandalanguage$pandac$parser$Token$Kind $tmp67 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp66);
org$pandalanguage$pandac$ASTNode** $tmp68 = &param0->rawIndex;
org$pandalanguage$pandac$ASTNode* $tmp69 = *$tmp68;
org$pandalanguage$pandac$Compiler$TypeContext* $tmp70 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp71 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp70, $tmp71);
org$pandalanguage$pandac$Pair* $tmp72 = org$pandalanguage$pandac$Compiler$findOverloadedOperator$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q($tmp60, $tmp65, $tmp67, $tmp69, $tmp70);
*(&local0) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
org$pandalanguage$pandac$Pair* $tmp73 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
*(&local0) = $tmp72;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing REF($21:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
// unreffing REF($18:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing REF($13:org.pandalanguage.pandac.Type)
// line 6332
org$pandalanguage$pandac$Pair* $tmp74 = *(&local0);
panda$core$Bit $tmp75 = panda$core$Bit$init$builtin_bit($tmp74 != NULL);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block3; else goto block4;
block3:;
// line 6333
org$pandalanguage$pandac$Pair* $tmp77 = *(&local0);
panda$core$Object** $tmp78 = &$tmp77->first;
panda$core$Object* $tmp79 = *$tmp78;
ITable* $tmp80 = ((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp79))->$class->itable;
while ($tmp80->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[0];
panda$core$Int64 $tmp83 = $tmp81(((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp79)));
panda$core$Int64 $tmp84 = (panda$core$Int64) {1};
panda$core$Bit $tmp85 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp83, $tmp84);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp87 = (panda$core$Int64) {6333};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s88, $tmp87);
abort(); // unreachable
block5:;
// line 6334
org$pandalanguage$pandac$Compiler** $tmp89 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp90 = *$tmp89;
org$pandalanguage$pandac$ASTNode** $tmp91 = &param0->rawIndex;
org$pandalanguage$pandac$ASTNode* $tmp92 = *$tmp91;
org$pandalanguage$pandac$Compiler$TypeContext* $tmp93 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp94 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Pair* $tmp95 = *(&local0);
panda$core$Object** $tmp96 = &$tmp95->first;
panda$core$Object* $tmp97 = *$tmp96;
panda$core$Int64 $tmp98 = (panda$core$Int64) {0};
ITable* $tmp99 = ((panda$collections$ListView*) $tmp97)->$class->itable;
while ($tmp99->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp99 = $tmp99->next;
}
$fn101 $tmp100 = $tmp99->methods[0];
panda$core$Object* $tmp102 = $tmp100(((panda$collections$ListView*) $tmp97), $tmp98);
panda$core$Int64 $tmp103 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp104 = org$pandalanguage$pandac$MethodRef$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp102), $tmp103);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp93, $tmp94, $tmp104);
org$pandalanguage$pandac$IR$Value* $tmp105 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp90, $tmp92, $tmp93);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
org$pandalanguage$pandac$IR$Value** $tmp106 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp107 = *$tmp106;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
org$pandalanguage$pandac$IR$Value** $tmp108 = &param0->index;
*$tmp108 = $tmp105;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
// unreffing REF($80:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
// unreffing REF($78:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp102);
// unreffing REF($75:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
// unreffing REF($65:org.pandalanguage.pandac.Compiler.TypeContext)
goto block4;
block4:;
org$pandalanguage$pandac$Pair* $tmp109 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
// unreffing m
*(&local0) = ((org$pandalanguage$pandac$Pair*) NULL);
goto block2;
block2:;
// line 6338
org$pandalanguage$pandac$IR$Value** $tmp110 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp111 = *$tmp110;
panda$core$Bit $tmp112 = panda$core$Bit$init$builtin_bit($tmp111 == NULL);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block7; else goto block8;
block7:;
// line 6339
org$pandalanguage$pandac$IR$Value* $tmp114 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp115 = (panda$core$Int64) {7};
panda$core$Int64 $tmp116 = (panda$core$Int64) {18446744073709551615};
org$pandalanguage$pandac$IR$Statement$ID $tmp117 = org$pandalanguage$pandac$IR$Statement$ID$init$panda$core$Int64($tmp116);
$fn119 $tmp118 = ($fn119) param0->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp120 = $tmp118(param0);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp114, $tmp115, $tmp117, $tmp120);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
org$pandalanguage$pandac$IR$Value** $tmp121 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp122 = *$tmp121;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
org$pandalanguage$pandac$IR$Value** $tmp123 = &param0->index;
*$tmp123 = $tmp114;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
// unreffing REF($121:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
// unreffing REF($116:org.pandalanguage.pandac.IR.Value)
// line 6340
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block8:;
// line 6342
org$pandalanguage$pandac$Compiler** $tmp124 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp125 = *$tmp124;
org$pandalanguage$pandac$Position* $tmp126 = &param0->position;
org$pandalanguage$pandac$Position $tmp127 = *$tmp126;
org$pandalanguage$pandac$ASTNode* $tmp128 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp129 = (panda$core$Int64) {24};
org$pandalanguage$pandac$Position* $tmp130 = &param0->position;
org$pandalanguage$pandac$Position $tmp131 = *$tmp130;
org$pandalanguage$pandac$IR$Value** $tmp132 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp133 = *$tmp132;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp128, $tmp129, $tmp131, $tmp133);
panda$core$Int64 $tmp134 = (panda$core$Int64) {102};
org$pandalanguage$pandac$parser$Token$Kind $tmp135 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp134);
org$pandalanguage$pandac$ASTNode* $tmp136 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp137 = (panda$core$Int64) {24};
org$pandalanguage$pandac$Position* $tmp138 = &param0->position;
org$pandalanguage$pandac$Position $tmp139 = *$tmp138;
org$pandalanguage$pandac$IR$Value** $tmp140 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp141 = *$tmp140;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp136, $tmp137, $tmp139, $tmp141);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp142 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp143 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp142, $tmp143);
org$pandalanguage$pandac$IR$Value* $tmp144 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp125, $tmp127, $tmp128, $tmp135, $tmp136, $tmp142);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
// unreffing REF($167:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
// unreffing REF($164:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing REF($156:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing REF($147:org.pandalanguage.pandac.ASTNode)
return $tmp144;

}
void org$pandalanguage$pandac$Compiler$IndexLValue$compileStore$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$Compiler$IndexLValue* param0, org$pandalanguage$pandac$IR$Value* param1) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
org$pandalanguage$pandac$Symbol* local1 = NULL;
panda$collections$ListView* local2 = NULL;
panda$collections$Array* local3 = NULL;
org$pandalanguage$pandac$Pair* local4 = NULL;
panda$collections$Array* local5 = NULL;
// line 6349
org$pandalanguage$pandac$IR$Value** $tmp145 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp146 = *$tmp145;
panda$core$Bit $tmp147 = panda$core$Bit$init$builtin_bit($tmp146 == NULL);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block1; else goto block2;
block1:;
// line 6350
org$pandalanguage$pandac$Compiler** $tmp149 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp150 = *$tmp149;
org$pandalanguage$pandac$IR$Value** $tmp151 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp152 = *$tmp151;
$fn154 $tmp153 = ($fn154) $tmp152->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp155 = $tmp153($tmp152);
org$pandalanguage$pandac$ClassDecl* $tmp156 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q($tmp150, $tmp155);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
org$pandalanguage$pandac$ClassDecl* $tmp157 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
*(&local0) = $tmp156;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
// unreffing REF($14:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
// unreffing REF($13:org.pandalanguage.pandac.Type)
// line 6351
org$pandalanguage$pandac$ClassDecl* $tmp158 = *(&local0);
panda$core$Bit $tmp159 = panda$core$Bit$init$builtin_bit($tmp158 == NULL);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block3; else goto block4;
block3:;
// line 6352
org$pandalanguage$pandac$ClassDecl* $tmp161 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return;
block4:;
// line 6354
org$pandalanguage$pandac$Compiler** $tmp162 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp163 = *$tmp162;
org$pandalanguage$pandac$ClassDecl* $tmp164 = *(&local0);
org$pandalanguage$pandac$SymbolTable* $tmp165 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable($tmp163, $tmp164);
org$pandalanguage$pandac$Symbol* $tmp166 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp165, &$s167);
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
org$pandalanguage$pandac$Symbol* $tmp168 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
*(&local1) = $tmp166;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
// unreffing REF($47:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
// unreffing REF($46:org.pandalanguage.pandac.SymbolTable)
// line 6355
org$pandalanguage$pandac$Symbol* $tmp169 = *(&local1);
panda$core$Bit $tmp170 = panda$core$Bit$init$builtin_bit($tmp169 == NULL);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block5; else goto block6;
block5:;
// line 6356
org$pandalanguage$pandac$Compiler** $tmp172 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp173 = *$tmp172;
org$pandalanguage$pandac$Position* $tmp174 = &param0->position;
org$pandalanguage$pandac$Position $tmp175 = *$tmp174;
org$pandalanguage$pandac$IR$Value** $tmp176 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp177 = *$tmp176;
$fn179 $tmp178 = ($fn179) $tmp177->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp180 = $tmp178($tmp177);
panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s182, ((panda$core$Object*) $tmp180));
panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp181, &$s184);
$fn186 $tmp185 = ($fn186) param1->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp187 = $tmp185(param1);
panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s189, ((panda$core$Object*) $tmp187));
panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp188, &$s191);
panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp183, $tmp190);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String($tmp173, $tmp175, $tmp192);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
// unreffing REF($84:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
// unreffing REF($83:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
// unreffing REF($82:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
// unreffing REF($80:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
// unreffing REF($78:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
// unreffing REF($77:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
// unreffing REF($75:org.pandalanguage.pandac.Type)
// line 6358
org$pandalanguage$pandac$Symbol* $tmp193 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
// unreffing assignment
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp194 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return;
block6:;
// line 6360
*(&local2) = ((panda$collections$ListView*) NULL);
// line 6361
org$pandalanguage$pandac$Symbol* $tmp195 = *(&local1);
org$pandalanguage$pandac$Symbol$Kind* $tmp196 = &$tmp195->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp197 = *$tmp196;
panda$core$Int64 $tmp198 = $tmp197.$rawValue;
panda$core$Int64 $tmp199 = (panda$core$Int64) {4};
panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp198, $tmp199);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block8; else goto block9;
block8:;
// line 6363
panda$collections$Array* $tmp202 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp202);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp202)));
panda$collections$ListView* $tmp203 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
*(&local2) = ((panda$collections$ListView*) $tmp202);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
// unreffing REF($132:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 6364
panda$collections$ListView* $tmp204 = *(&local2);
org$pandalanguage$pandac$Symbol* $tmp205 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T(((panda$collections$Array*) $tmp204), ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp205)));
goto block7;
block9:;
panda$core$Int64 $tmp206 = (panda$core$Int64) {5};
panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp198, $tmp206);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block10; else goto block11;
block10:;
// line 6367
org$pandalanguage$pandac$Symbol* $tmp209 = *(&local1);
org$pandalanguage$pandac$FixedArray** $tmp210 = &((org$pandalanguage$pandac$Methods*) $tmp209)->methods;
org$pandalanguage$pandac$FixedArray* $tmp211 = *$tmp210;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp211)));
panda$collections$ListView* $tmp212 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
*(&local2) = ((panda$collections$ListView*) $tmp211);
goto block7;
block11:;
// line 6370
panda$core$Bit $tmp213 = panda$core$Bit$init$builtin_bit(false);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp215 = (panda$core$Int64) {6370};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s216, $tmp215);
abort(); // unreachable
block12:;
goto block7;
block7:;
// line 6373
panda$collections$Array* $tmp217 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp217);
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
panda$collections$Array* $tmp218 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
*(&local3) = $tmp217;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
// unreffing REF($180:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 6374
panda$collections$Array* $tmp219 = *(&local3);
org$pandalanguage$pandac$ASTNode** $tmp220 = &param0->rawIndex;
org$pandalanguage$pandac$ASTNode* $tmp221 = *$tmp220;
panda$collections$Array$add$panda$collections$Array$T($tmp219, ((panda$core$Object*) $tmp221));
// line 6375
panda$collections$Array* $tmp222 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp223 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp224 = (panda$core$Int64) {24};
org$pandalanguage$pandac$Position* $tmp225 = &param0->position;
org$pandalanguage$pandac$Position $tmp226 = *$tmp225;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp223, $tmp224, $tmp226, param1);
panda$collections$Array$add$panda$collections$Array$T($tmp222, ((panda$core$Object*) $tmp223));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
// unreffing REF($203:org.pandalanguage.pandac.ASTNode)
// line 6376
org$pandalanguage$pandac$Compiler** $tmp227 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp228 = *$tmp227;
org$pandalanguage$pandac$Position* $tmp229 = &param0->position;
org$pandalanguage$pandac$Position $tmp230 = *$tmp229;
org$pandalanguage$pandac$IR$Value** $tmp231 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp232 = *$tmp231;
panda$collections$ListView* $tmp233 = *(&local2);
panda$collections$Array* $tmp234 = *(&local3);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp235 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp236 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp235, $tmp236);
org$pandalanguage$pandac$Pair* $tmp237 = org$pandalanguage$pandac$Compiler$findBestMethod$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q($tmp228, $tmp230, $tmp232, $tmp233, ((panda$collections$ListView*) $tmp234), $tmp235);
*(&local4) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
org$pandalanguage$pandac$Pair* $tmp238 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
*(&local4) = $tmp237;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// unreffing REF($227:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
// unreffing REF($224:org.pandalanguage.pandac.Compiler.TypeContext)
// line 6378
org$pandalanguage$pandac$Pair* $tmp239 = *(&local4);
panda$core$Bit $tmp240 = panda$core$Bit$init$builtin_bit($tmp239 != NULL);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block14; else goto block15;
block14:;
// line 6379
org$pandalanguage$pandac$Pair* $tmp242 = *(&local4);
panda$core$Object** $tmp243 = &$tmp242->first;
panda$core$Object* $tmp244 = *$tmp243;
ITable* $tmp245 = ((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp244))->$class->itable;
while ($tmp245->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp245 = $tmp245->next;
}
$fn247 $tmp246 = $tmp245->methods[0];
panda$core$Int64 $tmp248 = $tmp246(((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp244)));
panda$core$Int64 $tmp249 = (panda$core$Int64) {1};
panda$core$Bit $tmp250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp248, $tmp249);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp252 = (panda$core$Int64) {6379};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s253, $tmp252);
abort(); // unreachable
block16:;
// line 6380
org$pandalanguage$pandac$Compiler** $tmp254 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp255 = *$tmp254;
org$pandalanguage$pandac$ASTNode** $tmp256 = &param0->rawIndex;
org$pandalanguage$pandac$ASTNode* $tmp257 = *$tmp256;
org$pandalanguage$pandac$Compiler$TypeContext* $tmp258 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp259 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Pair* $tmp260 = *(&local4);
panda$core$Object** $tmp261 = &$tmp260->first;
panda$core$Object* $tmp262 = *$tmp261;
panda$core$Int64 $tmp263 = (panda$core$Int64) {0};
ITable* $tmp264 = ((panda$collections$ListView*) $tmp262)->$class->itable;
while ($tmp264->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp264 = $tmp264->next;
}
$fn266 $tmp265 = $tmp264->methods[0];
panda$core$Object* $tmp267 = $tmp265(((panda$collections$ListView*) $tmp262), $tmp263);
panda$core$Int64 $tmp268 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp269 = org$pandalanguage$pandac$MethodRef$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp267), $tmp268);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp258, $tmp259, $tmp269);
org$pandalanguage$pandac$IR$Value* $tmp270 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp255, $tmp257, $tmp258);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
org$pandalanguage$pandac$IR$Value** $tmp271 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp272 = *$tmp271;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
org$pandalanguage$pandac$IR$Value** $tmp273 = &param0->index;
*$tmp273 = $tmp270;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
// unreffing REF($283:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
// unreffing REF($281:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp267);
// unreffing REF($278:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
// unreffing REF($268:org.pandalanguage.pandac.Compiler.TypeContext)
goto block15;
block15:;
// line 6383
org$pandalanguage$pandac$IR$Value** $tmp274 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp275 = *$tmp274;
panda$core$Bit $tmp276 = panda$core$Bit$init$builtin_bit($tmp275 == NULL);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block18; else goto block19;
block18:;
// line 6385
org$pandalanguage$pandac$IR$Value* $tmp278 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp279 = (panda$core$Int64) {7};
panda$core$Int64 $tmp280 = (panda$core$Int64) {18446744073709551615};
org$pandalanguage$pandac$IR$Statement$ID $tmp281 = org$pandalanguage$pandac$IR$Statement$ID$init$panda$core$Int64($tmp280);
$fn283 $tmp282 = ($fn283) param0->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp284 = $tmp282(param0);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp278, $tmp279, $tmp281, $tmp284);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
org$pandalanguage$pandac$IR$Value** $tmp285 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp286 = *$tmp285;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp286));
org$pandalanguage$pandac$IR$Value** $tmp287 = &param0->index;
*$tmp287 = $tmp278;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
// unreffing REF($318:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
// unreffing REF($313:org.pandalanguage.pandac.IR.Value)
goto block19;
block19:;
org$pandalanguage$pandac$Pair* $tmp288 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
// unreffing m
*(&local4) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$Array* $tmp289 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
// unreffing args
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp290 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
// unreffing methods
*(&local2) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$Symbol* $tmp291 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp291));
// unreffing assignment
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp292 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp292));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block2;
block2:;
// line 6388
panda$collections$Array* $tmp293 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp293);
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
panda$collections$Array* $tmp294 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
*(&local5) = $tmp293;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
// unreffing REF($363:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 6389
panda$collections$Array* $tmp295 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp296 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp297 = (panda$core$Int64) {24};
org$pandalanguage$pandac$Position* $tmp298 = &param0->position;
org$pandalanguage$pandac$Position $tmp299 = *$tmp298;
org$pandalanguage$pandac$IR$Value** $tmp300 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp301 = *$tmp300;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp296, $tmp297, $tmp299, $tmp301);
panda$collections$Array$add$panda$collections$Array$T($tmp295, ((panda$core$Object*) $tmp296));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
// unreffing REF($379:org.pandalanguage.pandac.ASTNode)
// line 6390
panda$collections$Array* $tmp302 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp303 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp304 = (panda$core$Int64) {24};
org$pandalanguage$pandac$Position* $tmp305 = &param0->position;
org$pandalanguage$pandac$Position $tmp306 = *$tmp305;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp303, $tmp304, $tmp306, param1);
panda$collections$Array$add$panda$collections$Array$T($tmp302, ((panda$core$Object*) $tmp303));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
// unreffing REF($395:org.pandalanguage.pandac.ASTNode)
// line 6391
org$pandalanguage$pandac$Compiler** $tmp307 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp308 = *$tmp307;
org$pandalanguage$pandac$Position* $tmp309 = &param0->position;
org$pandalanguage$pandac$Position $tmp310 = *$tmp309;
org$pandalanguage$pandac$IR$Value** $tmp311 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp312 = *$tmp311;
panda$collections$Array* $tmp313 = *(&local5);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp314 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp315 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp314, $tmp315);
org$pandalanguage$pandac$IR$Value* $tmp316 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp308, $tmp310, $tmp312, &$s317, ((panda$collections$ListView*) $tmp313), $tmp314);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp316));
// unreffing REF($417:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
// unreffing REF($414:org.pandalanguage.pandac.Compiler.TypeContext)
panda$collections$Array* $tmp318 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
// unreffing args
*(&local5) = ((panda$collections$Array*) NULL);
return;

}
void org$pandalanguage$pandac$Compiler$IndexLValue$cleanup(org$pandalanguage$pandac$Compiler$IndexLValue* param0) {

// line 6296
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$Compiler** $tmp319 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp320 = *$tmp319;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
org$pandalanguage$pandac$IR$Value** $tmp321 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp322 = *$tmp321;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
org$pandalanguage$pandac$ASTNode** $tmp323 = &param0->rawIndex;
org$pandalanguage$pandac$ASTNode* $tmp324 = *$tmp323;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
org$pandalanguage$pandac$IR$Value** $tmp325 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp326 = *$tmp325;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
return;

}

