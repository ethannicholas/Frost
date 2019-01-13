#include "org/pandalanguage/pandac/statements/Return.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/collections/Stack.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Weak.h"
#include "panda/core/Equatable.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "org/pandalanguage/pandac/Compiler/FieldLValue.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/IR/Statement.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"


static panda$core$String $s1;
org$pandalanguage$pandac$statements$Return$class_type org$pandalanguage$pandac$statements$Return$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$statements$Return$cleanup} };

typedef panda$core$Int64 (*$fn33)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn48)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn95)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn99)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn104)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn126)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$IR$Value* (*$fn145)(org$pandalanguage$pandac$Compiler$FieldLValue*);
typedef org$pandalanguage$pandac$Type* (*$fn198)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn208)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Bit (*$fn220)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn232)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn253)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x73\x2e\x52\x65\x74\x75\x72\x6e", 42, 7700504715955486216, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x70\x61\x6e\x64\x61", 12, 1309930555174270047, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x73\x2e\x52\x65\x74\x75\x72\x6e\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x29", 211, -5696862101377223579, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x70\x61\x6e\x64\x61", 12, 1309930555174270047, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x70\x61\x6e\x64\x61", 12, 1309930555174270047, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20", 32, 131125242360168676, NULL };

void org$pandalanguage$pandac$statements$Return$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ASTNode* param2) {

org$pandalanguage$pandac$IR* local0 = NULL;
org$pandalanguage$pandac$ClassDecl* local1 = NULL;
org$pandalanguage$pandac$MethodDecl* local2 = NULL;
panda$core$Bit local3;
panda$core$Bit local4;
panda$core$Bit local5;
org$pandalanguage$pandac$Type* local6 = NULL;
org$pandalanguage$pandac$FieldDecl* local7 = NULL;
panda$core$Bit local8;
panda$core$Bit local9;
panda$core$Bit local10;
org$pandalanguage$pandac$IR$Value* local11 = NULL;
org$pandalanguage$pandac$IR$Value* local12 = NULL;
org$pandalanguage$pandac$IR$Value** $tmp2 = &param0->returnValue;
org$pandalanguage$pandac$IR$Value* $tmp3 = *$tmp2;
panda$core$Bit $tmp4 = panda$core$Bit$init$builtin_bit($tmp3 == NULL);
bool $tmp5 = $tmp4.value;
if ($tmp5) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp6 = (panda$core$Int64) {21};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s7, $tmp6, &$s8);
abort(); // unreachable
block1:;
// line 22
org$pandalanguage$pandac$IR** $tmp9 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp10 = *$tmp9;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
org$pandalanguage$pandac$IR* $tmp11 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
*(&local0) = $tmp10;
// line 23
panda$collections$Stack** $tmp12 = &param0->currentClass;
panda$collections$Stack* $tmp13 = *$tmp12;
panda$core$Int64 $tmp14 = (panda$core$Int64) {0};
panda$core$Object* $tmp15 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp13, $tmp14);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp15)));
org$pandalanguage$pandac$ClassDecl* $tmp16 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) $tmp15);
panda$core$Panda$unref$panda$core$Object$Q($tmp15);
// unreffing REF($24:panda.collections.Stack.T)
// line 24
panda$collections$Stack** $tmp17 = &param0->currentMethod;
panda$collections$Stack* $tmp18 = *$tmp17;
panda$core$Int64 $tmp19 = (panda$core$Int64) {0};
panda$core$Object* $tmp20 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp18, $tmp19);
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp20)));
org$pandalanguage$pandac$MethodDecl* $tmp21 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) $tmp20);
panda$core$Panda$unref$panda$core$Object$Q($tmp20);
// unreffing REF($41:panda.collections.Stack.T)
// line 25
org$pandalanguage$pandac$MethodDecl* $tmp22 = *(&local2);
panda$core$String** $tmp23 = &((org$pandalanguage$pandac$Symbol*) $tmp22)->name;
panda$core$String* $tmp24 = *$tmp23;
panda$core$Bit $tmp25 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp24, &$s26);
bool $tmp27 = $tmp25.value;
if ($tmp27) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$MethodDecl* $tmp28 = *(&local2);
panda$collections$Array** $tmp29 = &$tmp28->parameters;
panda$collections$Array* $tmp30 = *$tmp29;
ITable* $tmp31 = ((panda$collections$CollectionView*) $tmp30)->$class->itable;
while ($tmp31->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp31 = $tmp31->next;
}
$fn33 $tmp32 = $tmp31->methods[0];
panda$core$Int64 $tmp34 = $tmp32(((panda$collections$CollectionView*) $tmp30));
panda$core$Int64 $tmp35 = (panda$core$Int64) {0};
panda$core$Bit $tmp36 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp34, $tmp35);
*(&local4) = $tmp36;
goto block7;
block6:;
*(&local4) = $tmp25;
goto block7;
block7:;
panda$core$Bit $tmp37 = *(&local4);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$MethodDecl* $tmp39 = *(&local2);
panda$core$Weak** $tmp40 = &$tmp39->owner;
panda$core$Weak* $tmp41 = *$tmp40;
panda$core$Object* $tmp42 = panda$core$Weak$get$R$panda$core$Weak$T($tmp41);
panda$core$String** $tmp43 = &((org$pandalanguage$pandac$ClassDecl*) $tmp42)->name;
panda$core$String* $tmp44 = *$tmp43;
ITable* $tmp46 = ((panda$core$Equatable*) $tmp44)->$class->itable;
while ($tmp46->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[1];
panda$core$Bit $tmp49 = $tmp47(((panda$core$Equatable*) $tmp44), ((panda$core$Equatable*) &$s45));
panda$core$Panda$unref$panda$core$Object$Q($tmp42);
// unreffing REF($80:panda.core.Weak.T)
*(&local3) = $tmp49;
goto block10;
block9:;
*(&local3) = $tmp37;
goto block10;
block10:;
panda$core$Bit $tmp50 = *(&local3);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block3; else goto block4;
block3:;
// line 28
org$pandalanguage$pandac$ClassDecl* $tmp52 = *(&local1);
org$pandalanguage$pandac$Type** $tmp53 = &$tmp52->rawSuper;
org$pandalanguage$pandac$Type* $tmp54 = *$tmp53;
panda$core$Bit $tmp55 = panda$core$Bit$init$builtin_bit($tmp54 != NULL);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block13; else goto block14;
block13:;
org$pandalanguage$pandac$ClassDecl* $tmp57 = *(&local1);
panda$core$Bit $tmp58 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(param0, $tmp57);
panda$core$Bit $tmp59 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp58);
*(&local5) = $tmp59;
goto block15;
block14:;
*(&local5) = $tmp55;
goto block15;
block15:;
panda$core$Bit $tmp60 = *(&local5);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block11; else goto block12;
block11:;
// line 29
org$pandalanguage$pandac$ClassDecl* $tmp62 = *(&local1);
org$pandalanguage$pandac$Type** $tmp63 = &$tmp62->type;
org$pandalanguage$pandac$Type* $tmp64 = *$tmp63;
org$pandalanguage$pandac$ClassDecl* $tmp65 = *(&local1);
org$pandalanguage$pandac$Type** $tmp66 = &$tmp65->rawSuper;
org$pandalanguage$pandac$Type* $tmp67 = *$tmp66;
org$pandalanguage$pandac$Type* $tmp68 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param0, $tmp64, $tmp67);
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
org$pandalanguage$pandac$Type* $tmp69 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
*(&local6) = $tmp68;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
// unreffing REF($126:org.pandalanguage.pandac.Type)
// line 30
org$pandalanguage$pandac$ASTNode* $tmp70 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp71 = (panda$core$Int64) {9};
org$pandalanguage$pandac$ASTNode* $tmp72 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp73 = (panda$core$Int64) {16};
org$pandalanguage$pandac$ASTNode* $tmp74 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp75 = (panda$core$Int64) {42};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp74, $tmp75, param1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp72, $tmp73, param1, $tmp74, &$s76);
org$pandalanguage$pandac$FixedArray* $tmp77 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp77);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp70, $tmp71, param1, $tmp72, $tmp77);
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, $tmp70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
// unreffing REF($146:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing REF($142:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing REF($140:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
// unreffing REF($138:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$Type* $tmp78 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
// unreffing supertype
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
goto block12;
block12:;
// line 34
panda$core$Bit* $tmp79 = &param0->inFieldCleanup;
panda$core$Bit $tmp80 = *$tmp79;
panda$core$Bit $tmp81 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp80);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp83 = (panda$core$Int64) {34};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s84, $tmp83);
abort(); // unreachable
block16:;
// line 35
panda$core$Bit $tmp85 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp86 = &param0->inFieldCleanup;
*$tmp86 = $tmp85;
// line 36
org$pandalanguage$pandac$MethodDecl* $tmp87 = *(&local2);
panda$core$Weak** $tmp88 = &$tmp87->owner;
panda$core$Weak* $tmp89 = *$tmp88;
panda$core$Object* $tmp90 = panda$core$Weak$get$R$panda$core$Weak$T($tmp89);
panda$collections$Array** $tmp91 = &((org$pandalanguage$pandac$ClassDecl*) $tmp90)->fields;
panda$collections$Array* $tmp92 = *$tmp91;
ITable* $tmp93 = ((panda$collections$Iterable*) $tmp92)->$class->itable;
while ($tmp93->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[0];
panda$collections$Iterator* $tmp96 = $tmp94(((panda$collections$Iterable*) $tmp92));
goto block18;
block18:;
ITable* $tmp97 = $tmp96->$class->itable;
while ($tmp97->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp97 = $tmp97->next;
}
$fn99 $tmp98 = $tmp97->methods[0];
panda$core$Bit $tmp100 = $tmp98($tmp96);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block20; else goto block19;
block19:;
*(&local7) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
ITable* $tmp102 = $tmp96->$class->itable;
while ($tmp102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[1];
panda$core$Object* $tmp105 = $tmp103($tmp96);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp105)));
org$pandalanguage$pandac$FieldDecl* $tmp106 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
*(&local7) = ((org$pandalanguage$pandac$FieldDecl*) $tmp105);
// line 37
org$pandalanguage$pandac$FieldDecl* $tmp107 = *(&local7);
panda$core$Bit $tmp108 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(param0, $tmp107);
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block23; else goto block24;
block23:;
org$pandalanguage$pandac$FieldDecl* $tmp110 = *(&local7);
org$pandalanguage$pandac$Annotations** $tmp111 = &$tmp110->annotations;
org$pandalanguage$pandac$Annotations* $tmp112 = *$tmp111;
panda$core$Bit $tmp113 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp112);
panda$core$Bit $tmp114 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp113);
*(&local10) = $tmp114;
goto block25;
block24:;
*(&local10) = $tmp108;
goto block25;
block25:;
panda$core$Bit $tmp115 = *(&local10);
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$FieldDecl* $tmp117 = *(&local7);
org$pandalanguage$pandac$FieldDecl$Kind* $tmp118 = &$tmp117->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp119 = *$tmp118;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp120;
$tmp120 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp120->value = $tmp119;
panda$core$Int64 $tmp121 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp122 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp121);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp123;
$tmp123 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp123->value = $tmp122;
ITable* $tmp124 = ((panda$core$Equatable*) $tmp120)->$class->itable;
while ($tmp124->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[1];
panda$core$Bit $tmp127 = $tmp125(((panda$core$Equatable*) $tmp120), ((panda$core$Equatable*) $tmp123));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp123)));
// unreffing REF($237:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp120)));
// unreffing REF($233:panda.core.Equatable<org.pandalanguage.pandac.FieldDecl.Kind>)
*(&local9) = $tmp127;
goto block28;
block27:;
*(&local9) = $tmp115;
goto block28;
block28:;
panda$core$Bit $tmp128 = *(&local9);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block29; else goto block30;
block29:;
org$pandalanguage$pandac$FieldDecl* $tmp130 = *(&local7);
org$pandalanguage$pandac$Type** $tmp131 = &$tmp130->type;
org$pandalanguage$pandac$Type* $tmp132 = *$tmp131;
panda$core$Bit $tmp133 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp132);
*(&local8) = $tmp133;
goto block31;
block30:;
*(&local8) = $tmp128;
goto block31;
block31:;
panda$core$Bit $tmp134 = *(&local8);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block21; else goto block22;
block21:;
// line 39
org$pandalanguage$pandac$Compiler$FieldLValue* $tmp136 = (org$pandalanguage$pandac$Compiler$FieldLValue*) pandaObjectAlloc(80, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$FieldLValue$class);
org$pandalanguage$pandac$ASTNode* $tmp137 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp138 = (panda$core$Int64) {22};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp137, $tmp138, param1, &$s139);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp140 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp141 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp140, $tmp141);
org$pandalanguage$pandac$IR$Value* $tmp142 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp137, $tmp140);
org$pandalanguage$pandac$FieldDecl* $tmp143 = *(&local7);
org$pandalanguage$pandac$Compiler$FieldLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FieldDecl($tmp136, param0, param1, $tmp142, $tmp143);
$fn145 $tmp144 = ($fn145) $tmp136->$class->vtable[3];
org$pandalanguage$pandac$IR$Value* $tmp146 = $tmp144($tmp136);
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
org$pandalanguage$pandac$IR$Value* $tmp147 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
*(&local11) = $tmp146;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
// unreffing REF($276:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
// unreffing REF($272:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
// unreffing REF($269:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
// unreffing REF($266:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing REF($265:org.pandalanguage.pandac.Compiler.FieldLValue)
// line 43
org$pandalanguage$pandac$IR$Value* $tmp148 = *(&local11);
panda$core$Bit $tmp149 = panda$core$Bit$init$builtin_bit($tmp148 == NULL);
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block32; else goto block33;
block32:;
// line 44
org$pandalanguage$pandac$IR$Value* $tmp151 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
// unreffing load
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp105);
// unreffing REF($205:panda.collections.Iterator.T)
org$pandalanguage$pandac$FieldDecl* $tmp152 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
// unreffing f
*(&local7) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
// unreffing REF($194:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q($tmp90);
// unreffing REF($187:panda.core.Weak.T)
org$pandalanguage$pandac$MethodDecl* $tmp153 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// unreffing currentMethod
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp154 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp154));
// unreffing currentClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR* $tmp155 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block33:;
// line 46
org$pandalanguage$pandac$IR$Value* $tmp156 = *(&local11);
org$pandalanguage$pandac$Compiler$compileUnref$org$pandalanguage$pandac$IR$Value(param0, $tmp156);
org$pandalanguage$pandac$IR$Value* $tmp157 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
// unreffing load
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block22;
block22:;
panda$core$Panda$unref$panda$core$Object$Q($tmp105);
// unreffing REF($205:panda.collections.Iterator.T)
org$pandalanguage$pandac$FieldDecl* $tmp158 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
// unreffing f
*(&local7) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block18;
block20:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
// unreffing REF($194:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q($tmp90);
// unreffing REF($187:panda.core.Weak.T)
// line 49
panda$core$Bit* $tmp159 = &param0->inFieldCleanup;
panda$core$Bit $tmp160 = *$tmp159;
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block34; else goto block35;
block35:;
panda$core$Int64 $tmp162 = (panda$core$Int64) {49};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s163, $tmp162);
abort(); // unreachable
block34:;
// line 50
panda$core$Bit $tmp164 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp165 = &param0->inFieldCleanup;
*$tmp165 = $tmp164;
goto block4;
block4:;
// line 52
panda$core$Bit $tmp166 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block36; else goto block38;
block36:;
// line 53
org$pandalanguage$pandac$MethodDecl* $tmp168 = *(&local2);
org$pandalanguage$pandac$Type** $tmp169 = &$tmp168->returnType;
org$pandalanguage$pandac$Type* $tmp170 = *$tmp169;
org$pandalanguage$pandac$Type* $tmp171 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp172 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp170, $tmp171);
bool $tmp173 = $tmp172.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
// unreffing REF($388:org.pandalanguage.pandac.Type)
if ($tmp173) goto block39; else goto block40;
block39:;
// line 54
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s174);
// line 55
org$pandalanguage$pandac$MethodDecl* $tmp175 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
// unreffing currentMethod
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp176 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
// unreffing currentClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR* $tmp177 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block40:;
// line 57
org$pandalanguage$pandac$Compiler$TypeContext* $tmp178 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp179 = (panda$core$Int64) {3};
org$pandalanguage$pandac$MethodDecl* $tmp180 = *(&local2);
org$pandalanguage$pandac$Type** $tmp181 = &$tmp180->returnType;
org$pandalanguage$pandac$Type* $tmp182 = *$tmp181;
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp178, $tmp179, $tmp182);
org$pandalanguage$pandac$IR$Value* $tmp183 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param2, $tmp178);
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
org$pandalanguage$pandac$IR$Value* $tmp184 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
*(&local12) = $tmp183;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
// unreffing REF($422:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
// unreffing REF($416:org.pandalanguage.pandac.Compiler.TypeContext)
// line 59
org$pandalanguage$pandac$IR$Value* $tmp185 = *(&local12);
panda$core$Bit $tmp186 = panda$core$Bit$init$builtin_bit($tmp185 == NULL);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block41; else goto block42;
block41:;
// line 60
org$pandalanguage$pandac$IR$Value* $tmp188 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
// unreffing compiled
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp189 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
// unreffing currentMethod
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp190 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
// unreffing currentClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR* $tmp191 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block42:;
// line 62
org$pandalanguage$pandac$IR$Value* $tmp192 = *(&local12);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
org$pandalanguage$pandac$IR$Value** $tmp193 = &param0->returnValue;
org$pandalanguage$pandac$IR$Value* $tmp194 = *$tmp193;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
org$pandalanguage$pandac$IR$Value** $tmp195 = &param0->returnValue;
*$tmp195 = $tmp192;
// line 63
org$pandalanguage$pandac$IR$Value* $tmp196 = *(&local12);
$fn198 $tmp197 = ($fn198) $tmp196->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp199 = $tmp197($tmp196);
panda$core$Bit $tmp200 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp199);
bool $tmp201 = $tmp200.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// unreffing REF($478:org.pandalanguage.pandac.Type)
if ($tmp201) goto block43; else goto block44;
block43:;
// line 64
org$pandalanguage$pandac$IR$Value* $tmp202 = *(&local12);
org$pandalanguage$pandac$Compiler$compileRef$org$pandalanguage$pandac$IR$Value(param0, $tmp202);
goto block44;
block44:;
// line 66
org$pandalanguage$pandac$Compiler$leaveAllScopes(param0);
// line 67
org$pandalanguage$pandac$Compiler$compilePostconditions(param0);
// line 68
org$pandalanguage$pandac$IR* $tmp203 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp204 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp205 = (panda$core$Int64) {24};
org$pandalanguage$pandac$IR$Value* $tmp206 = *(&local12);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q($tmp204, $tmp205, param1, $tmp206);
$fn208 $tmp207 = ($fn208) $tmp203->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp209 = $tmp207($tmp203, $tmp204);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
// unreffing REF($496:org.pandalanguage.pandac.IR.Statement)
// line 69
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value** $tmp210 = &param0->returnValue;
org$pandalanguage$pandac$IR$Value* $tmp211 = *$tmp210;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
org$pandalanguage$pandac$IR$Value** $tmp212 = &param0->returnValue;
*$tmp212 = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp213 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
// unreffing compiled
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block37;
block38:;
// line 1
// line 72
org$pandalanguage$pandac$MethodDecl* $tmp214 = *(&local2);
org$pandalanguage$pandac$Type** $tmp215 = &$tmp214->returnType;
org$pandalanguage$pandac$Type* $tmp216 = *$tmp215;
org$pandalanguage$pandac$Type* $tmp217 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp218 = ((panda$core$Equatable*) $tmp216)->$class->itable;
while ($tmp218->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp218 = $tmp218->next;
}
$fn220 $tmp219 = $tmp218->methods[1];
panda$core$Bit $tmp221 = $tmp219(((panda$core$Equatable*) $tmp216), ((panda$core$Equatable*) $tmp217));
bool $tmp222 = $tmp221.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
// unreffing REF($527:org.pandalanguage.pandac.Type)
if ($tmp222) goto block45; else goto block46;
block45:;
// line 73
org$pandalanguage$pandac$MethodDecl* $tmp223 = *(&local2);
org$pandalanguage$pandac$MethodDecl$Kind* $tmp224 = &$tmp223->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp225 = *$tmp224;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp226;
$tmp226 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp226->value = $tmp225;
panda$core$Int64 $tmp227 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp228 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp227);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp229;
$tmp229 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp229->value = $tmp228;
ITable* $tmp230 = ((panda$core$Equatable*) $tmp226)->$class->itable;
while ($tmp230->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp230 = $tmp230->next;
}
$fn232 $tmp231 = $tmp230->methods[0];
panda$core$Bit $tmp233 = $tmp231(((panda$core$Equatable*) $tmp226), ((panda$core$Equatable*) $tmp229));
bool $tmp234 = $tmp233.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp229)));
// unreffing REF($544:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp226)));
// unreffing REF($540:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp234) goto block47; else goto block48;
block47:;
// line 74
org$pandalanguage$pandac$ASTNode* $tmp235 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp236 = (panda$core$Int64) {40};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp235, $tmp236, param1);
org$pandalanguage$pandac$statements$Return$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(param0, param1, $tmp235);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
// unreffing REF($556:org.pandalanguage.pandac.ASTNode)
// line 75
org$pandalanguage$pandac$MethodDecl* $tmp237 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// unreffing currentMethod
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp238 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
// unreffing currentClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR* $tmp239 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block48:;
// line 77
org$pandalanguage$pandac$MethodDecl* $tmp240 = *(&local2);
org$pandalanguage$pandac$Type** $tmp241 = &$tmp240->returnType;
org$pandalanguage$pandac$Type* $tmp242 = *$tmp241;
panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s244, ((panda$core$Object*) $tmp242));
panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp243, &$s246);
panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s248, $tmp245);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp247);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
// unreffing REF($588:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
// unreffing REF($587:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
// unreffing REF($586:panda.core.String)
goto block46;
block46:;
// line 80
org$pandalanguage$pandac$Compiler$leaveAllScopes(param0);
// line 81
org$pandalanguage$pandac$Compiler$compilePostconditions(param0);
// line 82
org$pandalanguage$pandac$IR* $tmp249 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp250 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp251 = (panda$core$Int64) {24};
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q($tmp250, $tmp251, param1, ((org$pandalanguage$pandac$IR$Value*) NULL));
$fn253 $tmp252 = ($fn253) $tmp249->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp254 = $tmp252($tmp249, $tmp250);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
// unreffing REF($606:org.pandalanguage.pandac.IR.Statement)
goto block37;
block37:;
org$pandalanguage$pandac$MethodDecl* $tmp255 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
// unreffing currentMethod
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp256 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
// unreffing currentClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR* $tmp257 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statements$Return$init(org$pandalanguage$pandac$statements$Return* param0) {

return;

}
void org$pandalanguage$pandac$statements$Return$cleanup(org$pandalanguage$pandac$statements$Return* param0) {

// line 18
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






