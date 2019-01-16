#include "org/pandalanguage/pandac/statement/Return.h"
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
#include "org/pandalanguage/pandac/lvalue/FieldLValue.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/IR/Statement.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"


static panda$core$String $s1;
org$pandalanguage$pandac$statement$Return$class_type org$pandalanguage$pandac$statement$Return$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$statement$Return$cleanup} };

typedef panda$core$Int64 (*$fn33)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn48)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn100)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn104)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn109)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn131)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$IR$Value* (*$fn150)(org$pandalanguage$pandac$lvalue$FieldLValue*);
typedef org$pandalanguage$pandac$Type* (*$fn218)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn233)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Bit (*$fn245)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn257)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn278)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x52\x65\x74\x75\x72\x6e", 41, 5007477578100624533, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x52\x65\x74\x75\x72\x6e\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x29", 210, 5706492515524526702, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20", 32, 131125242360168676, NULL };

void org$pandalanguage$pandac$statement$Return$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ASTNode* param2) {

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
panda$core$Int64 $tmp6 = (panda$core$Int64) {22};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s7, $tmp6, &$s8);
abort(); // unreachable
block1:;
// line 23
org$pandalanguage$pandac$IR** $tmp9 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp10 = *$tmp9;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
org$pandalanguage$pandac$IR* $tmp11 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
*(&local0) = $tmp10;
// line 24
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
// line 25
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
// line 26
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
// line 29
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
// line 30
org$pandalanguage$pandac$ClassDecl* $tmp62 = *(&local1);
org$pandalanguage$pandac$Type** $tmp63 = &$tmp62->type;
org$pandalanguage$pandac$Type* $tmp64 = *$tmp63;
org$pandalanguage$pandac$ClassDecl* $tmp65 = *(&local1);
org$pandalanguage$pandac$Type** $tmp66 = &$tmp65->rawSuper;
org$pandalanguage$pandac$Type* $tmp67 = *$tmp66;
panda$core$Bit $tmp68 = panda$core$Bit$init$builtin_bit($tmp67 != NULL);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp70 = (panda$core$Int64) {30};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block16:;
org$pandalanguage$pandac$Type* $tmp73 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param0, $tmp64, $tmp67);
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
org$pandalanguage$pandac$Type* $tmp74 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
*(&local6) = $tmp73;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing REF($133:org.pandalanguage.pandac.Type)
// line 31
org$pandalanguage$pandac$ASTNode* $tmp75 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp76 = (panda$core$Int64) {9};
org$pandalanguage$pandac$ASTNode* $tmp77 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp78 = (panda$core$Int64) {16};
org$pandalanguage$pandac$ASTNode* $tmp79 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp80 = (panda$core$Int64) {42};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp79, $tmp80, param1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp77, $tmp78, param1, $tmp79, &$s81);
org$pandalanguage$pandac$FixedArray* $tmp82 = (org$pandalanguage$pandac$FixedArray*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp82);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp75, $tmp76, param1, $tmp77, $tmp82);
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, $tmp75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// unreffing REF($153:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
// unreffing REF($149:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
// unreffing REF($147:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing REF($145:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$Type* $tmp83 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing supertype
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
goto block12;
block12:;
// line 35
panda$core$Bit* $tmp84 = &param0->inFieldCleanup;
panda$core$Bit $tmp85 = *$tmp84;
panda$core$Bit $tmp86 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp85);
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp88 = (panda$core$Int64) {35};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s89, $tmp88);
abort(); // unreachable
block18:;
// line 36
panda$core$Bit $tmp90 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp91 = &param0->inFieldCleanup;
*$tmp91 = $tmp90;
// line 37
org$pandalanguage$pandac$MethodDecl* $tmp92 = *(&local2);
panda$core$Weak** $tmp93 = &$tmp92->owner;
panda$core$Weak* $tmp94 = *$tmp93;
panda$core$Object* $tmp95 = panda$core$Weak$get$R$panda$core$Weak$T($tmp94);
panda$collections$Array** $tmp96 = &((org$pandalanguage$pandac$ClassDecl*) $tmp95)->fields;
panda$collections$Array* $tmp97 = *$tmp96;
ITable* $tmp98 = ((panda$collections$Iterable*) $tmp97)->$class->itable;
while ($tmp98->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[0];
panda$collections$Iterator* $tmp101 = $tmp99(((panda$collections$Iterable*) $tmp97));
goto block20;
block20:;
ITable* $tmp102 = $tmp101->$class->itable;
while ($tmp102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[0];
panda$core$Bit $tmp105 = $tmp103($tmp101);
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block22; else goto block21;
block21:;
*(&local7) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
ITable* $tmp107 = $tmp101->$class->itable;
while ($tmp107->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[1];
panda$core$Object* $tmp110 = $tmp108($tmp101);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp110)));
org$pandalanguage$pandac$FieldDecl* $tmp111 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
*(&local7) = ((org$pandalanguage$pandac$FieldDecl*) $tmp110);
// line 38
org$pandalanguage$pandac$FieldDecl* $tmp112 = *(&local7);
panda$core$Bit $tmp113 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(param0, $tmp112);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block25; else goto block26;
block25:;
org$pandalanguage$pandac$FieldDecl* $tmp115 = *(&local7);
org$pandalanguage$pandac$Annotations** $tmp116 = &$tmp115->annotations;
org$pandalanguage$pandac$Annotations* $tmp117 = *$tmp116;
panda$core$Bit $tmp118 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp117);
panda$core$Bit $tmp119 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp118);
*(&local10) = $tmp119;
goto block27;
block26:;
*(&local10) = $tmp113;
goto block27;
block27:;
panda$core$Bit $tmp120 = *(&local10);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$FieldDecl* $tmp122 = *(&local7);
org$pandalanguage$pandac$FieldDecl$Kind* $tmp123 = &$tmp122->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp124 = *$tmp123;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp125;
$tmp125 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp125->value = $tmp124;
panda$core$Int64 $tmp126 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp127 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp126);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp128;
$tmp128 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp128->value = $tmp127;
ITable* $tmp129 = ((panda$core$Equatable*) $tmp125)->$class->itable;
while ($tmp129->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp129 = $tmp129->next;
}
$fn131 $tmp130 = $tmp129->methods[1];
panda$core$Bit $tmp132 = $tmp130(((panda$core$Equatable*) $tmp125), ((panda$core$Equatable*) $tmp128));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp128)));
// unreffing REF($244:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp125)));
// unreffing REF($240:panda.core.Equatable<org.pandalanguage.pandac.FieldDecl.Kind>)
*(&local9) = $tmp132;
goto block30;
block29:;
*(&local9) = $tmp120;
goto block30;
block30:;
panda$core$Bit $tmp133 = *(&local9);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block31; else goto block32;
block31:;
org$pandalanguage$pandac$FieldDecl* $tmp135 = *(&local7);
org$pandalanguage$pandac$Type** $tmp136 = &$tmp135->type;
org$pandalanguage$pandac$Type* $tmp137 = *$tmp136;
panda$core$Bit $tmp138 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp137);
*(&local8) = $tmp138;
goto block33;
block32:;
*(&local8) = $tmp133;
goto block33;
block33:;
panda$core$Bit $tmp139 = *(&local8);
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block23; else goto block24;
block23:;
// line 40
org$pandalanguage$pandac$lvalue$FieldLValue* $tmp141 = (org$pandalanguage$pandac$lvalue$FieldLValue*) frostObjectAlloc(80, (panda$core$Class*) &org$pandalanguage$pandac$lvalue$FieldLValue$class);
org$pandalanguage$pandac$ASTNode* $tmp142 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp143 = (panda$core$Int64) {22};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp142, $tmp143, param1, &$s144);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp145 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp146 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp145, $tmp146);
org$pandalanguage$pandac$IR$Value* $tmp147 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp142, $tmp145);
org$pandalanguage$pandac$FieldDecl* $tmp148 = *(&local7);
org$pandalanguage$pandac$lvalue$FieldLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FieldDecl($tmp141, param0, param1, $tmp147, $tmp148);
$fn150 $tmp149 = ($fn150) $tmp141->$class->vtable[3];
org$pandalanguage$pandac$IR$Value* $tmp151 = $tmp149($tmp141);
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
org$pandalanguage$pandac$IR$Value* $tmp152 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
*(&local11) = $tmp151;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
// unreffing REF($283:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
// unreffing REF($279:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
// unreffing REF($276:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
// unreffing REF($273:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
// unreffing REF($272:org.pandalanguage.pandac.lvalue.FieldLValue)
// line 44
org$pandalanguage$pandac$IR$Value* $tmp153 = *(&local11);
panda$core$Bit $tmp154 = panda$core$Bit$init$builtin_bit($tmp153 == NULL);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block34; else goto block35;
block34:;
// line 45
org$pandalanguage$pandac$IR$Value* $tmp156 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
// unreffing load
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp110);
// unreffing REF($212:panda.collections.Iterator.T)
org$pandalanguage$pandac$FieldDecl* $tmp157 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
// unreffing f
*(&local7) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
// unreffing REF($201:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q($tmp95);
// unreffing REF($194:panda.core.Weak.T)
org$pandalanguage$pandac$MethodDecl* $tmp158 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
// unreffing currentMethod
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp159 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
// unreffing currentClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR* $tmp160 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp160));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block35:;
// line 47
org$pandalanguage$pandac$IR$Value* $tmp161 = *(&local11);
panda$core$Bit $tmp162 = panda$core$Bit$init$builtin_bit($tmp161 != NULL);
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp164 = (panda$core$Int64) {47};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s165, $tmp164, &$s166);
abort(); // unreachable
block36:;
org$pandalanguage$pandac$Compiler$compileUnref$org$pandalanguage$pandac$IR$Value(param0, $tmp161);
org$pandalanguage$pandac$IR$Value* $tmp167 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
// unreffing load
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block24;
block24:;
panda$core$Panda$unref$panda$core$Object$Q($tmp110);
// unreffing REF($212:panda.collections.Iterator.T)
org$pandalanguage$pandac$FieldDecl* $tmp168 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
// unreffing f
*(&local7) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block20;
block22:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
// unreffing REF($201:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q($tmp95);
// unreffing REF($194:panda.core.Weak.T)
// line 50
panda$core$Bit* $tmp169 = &param0->inFieldCleanup;
panda$core$Bit $tmp170 = *$tmp169;
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block38; else goto block39;
block39:;
panda$core$Int64 $tmp172 = (panda$core$Int64) {50};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s173, $tmp172);
abort(); // unreachable
block38:;
// line 51
panda$core$Bit $tmp174 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp175 = &param0->inFieldCleanup;
*$tmp175 = $tmp174;
goto block4;
block4:;
// line 53
panda$core$Bit $tmp176 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block40; else goto block42;
block40:;
// line 54
org$pandalanguage$pandac$MethodDecl* $tmp178 = *(&local2);
org$pandalanguage$pandac$Type** $tmp179 = &$tmp178->returnType;
org$pandalanguage$pandac$Type* $tmp180 = *$tmp179;
org$pandalanguage$pandac$Type* $tmp181 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp182 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp180, $tmp181);
bool $tmp183 = $tmp182.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
// unreffing REF($402:org.pandalanguage.pandac.Type)
if ($tmp183) goto block43; else goto block44;
block43:;
// line 55
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s184);
// line 56
org$pandalanguage$pandac$MethodDecl* $tmp185 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
// unreffing currentMethod
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp186 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
// unreffing currentClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR* $tmp187 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block44:;
// line 58
panda$core$Bit $tmp188 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block45; else goto block46;
block46:;
panda$core$Int64 $tmp190 = (panda$core$Int64) {58};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s191, $tmp190, &$s192);
abort(); // unreachable
block45:;
org$pandalanguage$pandac$Compiler$TypeContext* $tmp193 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp194 = (panda$core$Int64) {3};
org$pandalanguage$pandac$MethodDecl* $tmp195 = *(&local2);
org$pandalanguage$pandac$Type** $tmp196 = &$tmp195->returnType;
org$pandalanguage$pandac$Type* $tmp197 = *$tmp196;
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp193, $tmp194, $tmp197);
org$pandalanguage$pandac$IR$Value* $tmp198 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param2, $tmp193);
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
org$pandalanguage$pandac$IR$Value* $tmp199 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
*(&local12) = $tmp198;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
// unreffing REF($443:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
// unreffing REF($437:org.pandalanguage.pandac.Compiler.TypeContext)
// line 60
org$pandalanguage$pandac$IR$Value* $tmp200 = *(&local12);
panda$core$Bit $tmp201 = panda$core$Bit$init$builtin_bit($tmp200 == NULL);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block47; else goto block48;
block47:;
// line 61
org$pandalanguage$pandac$IR$Value* $tmp203 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
// unreffing compiled
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp204 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
// unreffing currentMethod
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp205 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
// unreffing currentClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR* $tmp206 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block48:;
// line 63
org$pandalanguage$pandac$IR$Value* $tmp207 = *(&local12);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
org$pandalanguage$pandac$IR$Value** $tmp208 = &param0->returnValue;
org$pandalanguage$pandac$IR$Value* $tmp209 = *$tmp208;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
org$pandalanguage$pandac$IR$Value** $tmp210 = &param0->returnValue;
*$tmp210 = $tmp207;
// line 64
org$pandalanguage$pandac$IR$Value* $tmp211 = *(&local12);
panda$core$Bit $tmp212 = panda$core$Bit$init$builtin_bit($tmp211 != NULL);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block51; else goto block52;
block52:;
panda$core$Int64 $tmp214 = (panda$core$Int64) {64};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s215, $tmp214, &$s216);
abort(); // unreachable
block51:;
$fn218 $tmp217 = ($fn218) $tmp211->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp219 = $tmp217($tmp211);
panda$core$Bit $tmp220 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp219);
bool $tmp221 = $tmp220.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
// unreffing REF($506:org.pandalanguage.pandac.Type)
if ($tmp221) goto block49; else goto block50;
block49:;
// line 65
org$pandalanguage$pandac$IR$Value* $tmp222 = *(&local12);
panda$core$Bit $tmp223 = panda$core$Bit$init$builtin_bit($tmp222 != NULL);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block53; else goto block54;
block54:;
panda$core$Int64 $tmp225 = (panda$core$Int64) {65};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s226, $tmp225, &$s227);
abort(); // unreachable
block53:;
org$pandalanguage$pandac$Compiler$compileRef$org$pandalanguage$pandac$IR$Value(param0, $tmp222);
goto block50;
block50:;
// line 67
org$pandalanguage$pandac$Compiler$leaveAllScopes(param0);
// line 68
org$pandalanguage$pandac$Compiler$compilePostconditions(param0);
// line 69
org$pandalanguage$pandac$IR* $tmp228 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp229 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp230 = (panda$core$Int64) {24};
org$pandalanguage$pandac$IR$Value* $tmp231 = *(&local12);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q($tmp229, $tmp230, param1, $tmp231);
$fn233 $tmp232 = ($fn233) $tmp228->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp234 = $tmp232($tmp228, $tmp229);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
// unreffing REF($531:org.pandalanguage.pandac.IR.Statement)
// line 70
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value** $tmp235 = &param0->returnValue;
org$pandalanguage$pandac$IR$Value* $tmp236 = *$tmp235;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
org$pandalanguage$pandac$IR$Value** $tmp237 = &param0->returnValue;
*$tmp237 = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp238 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
// unreffing compiled
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block41;
block42:;
// line 1
// line 73
org$pandalanguage$pandac$MethodDecl* $tmp239 = *(&local2);
org$pandalanguage$pandac$Type** $tmp240 = &$tmp239->returnType;
org$pandalanguage$pandac$Type* $tmp241 = *$tmp240;
org$pandalanguage$pandac$Type* $tmp242 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp243 = ((panda$core$Equatable*) $tmp241)->$class->itable;
while ($tmp243->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp243 = $tmp243->next;
}
$fn245 $tmp244 = $tmp243->methods[1];
panda$core$Bit $tmp246 = $tmp244(((panda$core$Equatable*) $tmp241), ((panda$core$Equatable*) $tmp242));
bool $tmp247 = $tmp246.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
// unreffing REF($562:org.pandalanguage.pandac.Type)
if ($tmp247) goto block55; else goto block56;
block55:;
// line 74
org$pandalanguage$pandac$MethodDecl* $tmp248 = *(&local2);
org$pandalanguage$pandac$MethodDecl$Kind* $tmp249 = &$tmp248->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp250 = *$tmp249;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp251;
$tmp251 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp251->value = $tmp250;
panda$core$Int64 $tmp252 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp253 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp252);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp254;
$tmp254 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp254->value = $tmp253;
ITable* $tmp255 = ((panda$core$Equatable*) $tmp251)->$class->itable;
while ($tmp255->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp255 = $tmp255->next;
}
$fn257 $tmp256 = $tmp255->methods[0];
panda$core$Bit $tmp258 = $tmp256(((panda$core$Equatable*) $tmp251), ((panda$core$Equatable*) $tmp254));
bool $tmp259 = $tmp258.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp254)));
// unreffing REF($579:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp251)));
// unreffing REF($575:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp259) goto block57; else goto block58;
block57:;
// line 75
org$pandalanguage$pandac$ASTNode* $tmp260 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp261 = (panda$core$Int64) {40};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp260, $tmp261, param1);
org$pandalanguage$pandac$statement$Return$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(param0, param1, $tmp260);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp260));
// unreffing REF($591:org.pandalanguage.pandac.ASTNode)
// line 76
org$pandalanguage$pandac$MethodDecl* $tmp262 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
// unreffing currentMethod
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp263 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
// unreffing currentClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR* $tmp264 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block58:;
// line 78
org$pandalanguage$pandac$MethodDecl* $tmp265 = *(&local2);
org$pandalanguage$pandac$Type** $tmp266 = &$tmp265->returnType;
org$pandalanguage$pandac$Type* $tmp267 = *$tmp266;
panda$core$String* $tmp268 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s269, ((panda$core$Object*) $tmp267));
panda$core$String* $tmp270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp268, &$s271);
panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s273, $tmp270);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp272);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
// unreffing REF($623:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
// unreffing REF($622:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
// unreffing REF($621:panda.core.String)
goto block56;
block56:;
// line 81
org$pandalanguage$pandac$Compiler$leaveAllScopes(param0);
// line 82
org$pandalanguage$pandac$Compiler$compilePostconditions(param0);
// line 83
org$pandalanguage$pandac$IR* $tmp274 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp275 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp276 = (panda$core$Int64) {24};
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q($tmp275, $tmp276, param1, ((org$pandalanguage$pandac$IR$Value*) NULL));
$fn278 $tmp277 = ($fn278) $tmp274->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp279 = $tmp277($tmp274, $tmp275);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
// unreffing REF($641:org.pandalanguage.pandac.IR.Statement)
goto block41;
block41:;
org$pandalanguage$pandac$MethodDecl* $tmp280 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp280));
// unreffing currentMethod
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp281 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
// unreffing currentClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR* $tmp282 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp282));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statement$Return$init(org$pandalanguage$pandac$statement$Return* param0) {

return;

}
void org$pandalanguage$pandac$statement$Return$cleanup(org$pandalanguage$pandac$statement$Return* param0) {

// line 19
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






