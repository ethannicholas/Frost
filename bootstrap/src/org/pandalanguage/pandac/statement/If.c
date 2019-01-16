#include "org/pandalanguage/pandac/statement/If.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "org/pandalanguage/pandac/Compiler/AutoUnrefs.h"
#include "org/pandalanguage/pandac/Compiler/AutoScope.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/IR/Statement.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"


static panda$core$String $s1;
org$pandalanguage$pandac$statement$If$class_type org$pandalanguage$pandac$statement$If$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$statement$If$cleanup} };

typedef org$pandalanguage$pandac$IR$Block$ID (*$fn7)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn12)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn33)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn54)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn59)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$collections$Iterator* (*$fn64)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn68)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn73)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn81)(org$pandalanguage$pandac$IR*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn90)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn97)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$core$Bit (*$fn105)(org$pandalanguage$pandac$IR*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn114)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn119)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x66", 37, -178624230791147504, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x74\x72\x75\x65", 7, 219748631897488, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x65\x6e\x64", 6, 2175728875251, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x66\x61\x6c\x73\x65", 8, 22194610347195263, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x66\x2e\x66\x72\x6f\x73\x74", 8, 18763924379405580, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x66\x2e\x66\x72\x6f\x73\x74", 8, 18763924379405580, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };

void org$pandalanguage$pandac$statement$If$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ASTNode* param2, org$pandalanguage$pandac$FixedArray* param3, org$pandalanguage$pandac$ASTNode* param4) {

org$pandalanguage$pandac$IR* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
org$pandalanguage$pandac$IR$Block$ID local2;
org$pandalanguage$pandac$IR$Block$ID local3;
org$pandalanguage$pandac$IR$Block$ID local4;
org$pandalanguage$pandac$Compiler$AutoUnrefs* local5 = NULL;
org$pandalanguage$pandac$IR$Value* local6 = NULL;
org$pandalanguage$pandac$Compiler$AutoScope* local7 = NULL;
org$pandalanguage$pandac$ASTNode* local8 = NULL;
// line 17
org$pandalanguage$pandac$IR** $tmp2 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$IR* $tmp4 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 18
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 19
org$pandalanguage$pandac$IR* $tmp5 = *(&local0);
$fn7 $tmp6 = ($fn7) $tmp5->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp8 = $tmp6($tmp5, &$s9);
*(&local2) = $tmp8;
// line 20
// line 21
org$pandalanguage$pandac$IR* $tmp10 = *(&local0);
$fn12 $tmp11 = ($fn12) $tmp10->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp13 = $tmp11($tmp10, &$s14);
*(&local4) = $tmp13;
// line 1
// line 23
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp15 = (org$pandalanguage$pandac$Compiler$AutoUnrefs*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoUnrefs$class);
org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler($tmp15, param0);
*(&local5) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp16 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
*(&local5) = $tmp15;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
// unreffing REF($25:org.pandalanguage.pandac.Compiler.AutoUnrefs)
// line 24
org$pandalanguage$pandac$Compiler$TypeContext* $tmp17 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp18 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp19 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp17, $tmp18, $tmp19);
org$pandalanguage$pandac$IR$Value* $tmp20 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param2, $tmp17);
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
org$pandalanguage$pandac$IR$Value* $tmp21 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
*(&local6) = $tmp20;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($42:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
// unreffing REF($40:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// unreffing REF($38:org.pandalanguage.pandac.Compiler.TypeContext)
// line 25
org$pandalanguage$pandac$IR$Value* $tmp22 = *(&local6);
panda$core$Bit $tmp23 = panda$core$Bit$init$builtin_bit($tmp22 == NULL);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block1; else goto block2;
block1:;
// line 26
org$pandalanguage$pandac$IR$Value* $tmp25 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
// unreffing compiledTest
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp26 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
// unreffing unrefs
*(&local5) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp27 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing testBit
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp28 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block2:;
// line 28
panda$core$Bit $tmp29 = panda$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block3; else goto block5;
block3:;
// line 29
org$pandalanguage$pandac$IR* $tmp31 = *(&local0);
$fn33 $tmp32 = ($fn33) $tmp31->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp34 = $tmp32($tmp31, &$s35);
*(&local3) = $tmp34;
goto block4;
block5:;
// line 1
// line 32
org$pandalanguage$pandac$IR$Block$ID $tmp36 = *(&local4);
*(&local3) = $tmp36;
goto block4;
block4:;
// line 34
org$pandalanguage$pandac$IR$Value* $tmp37 = *(&local6);
panda$core$Bit $tmp38 = panda$core$Bit$init$builtin_bit($tmp37 != NULL);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp40 = (panda$core$Int64) {34};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s41, $tmp40, &$s42);
abort(); // unreachable
block6:;
org$pandalanguage$pandac$IR$Value* $tmp43 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp37);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
org$pandalanguage$pandac$IR$Value* $tmp44 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
*(&local1) = $tmp43;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing REF($113:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$IR$Value* $tmp45 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
// unreffing compiledTest
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp46 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// unreffing unrefs
*(&local5) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
// line 36
org$pandalanguage$pandac$IR* $tmp47 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp48 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp49 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp50 = *(&local1);
org$pandalanguage$pandac$IR$Block$ID $tmp51 = *(&local2);
org$pandalanguage$pandac$IR$Block$ID $tmp52 = *(&local3);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp48, $tmp49, param1, $tmp50, $tmp51, $tmp52);
$fn54 $tmp53 = ($fn54) $tmp47->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp55 = $tmp53($tmp47, $tmp48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
// unreffing REF($135:org.pandalanguage.pandac.IR.Statement)
// line 37
org$pandalanguage$pandac$IR* $tmp56 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp57 = *(&local2);
$fn59 $tmp58 = ($fn59) $tmp56->$class->vtable[4];
$tmp58($tmp56, $tmp57);
// line 1
// line 39
org$pandalanguage$pandac$Compiler$AutoScope* $tmp60 = (org$pandalanguage$pandac$Compiler$AutoScope*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler($tmp60, param0);
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
org$pandalanguage$pandac$Compiler$AutoScope* $tmp61 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
*(&local7) = $tmp60;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
// unreffing REF($153:org.pandalanguage.pandac.Compiler.AutoScope)
// line 40
ITable* $tmp62 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp62->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp62 = $tmp62->next;
}
$fn64 $tmp63 = $tmp62->methods[0];
panda$collections$Iterator* $tmp65 = $tmp63(((panda$collections$Iterable*) param3));
goto block8;
block8:;
ITable* $tmp66 = $tmp65->$class->itable;
while ($tmp66->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp66 = $tmp66->next;
}
$fn68 $tmp67 = $tmp66->methods[0];
panda$core$Bit $tmp69 = $tmp67($tmp65);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block10; else goto block9;
block9:;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp71 = $tmp65->$class->itable;
while ($tmp71->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp71 = $tmp71->next;
}
$fn73 $tmp72 = $tmp71->methods[1];
panda$core$Object* $tmp74 = $tmp72($tmp65);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp74)));
org$pandalanguage$pandac$ASTNode* $tmp75 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) $tmp74);
// line 41
org$pandalanguage$pandac$ASTNode* $tmp76 = *(&local8);
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, $tmp76);
panda$core$Panda$unref$panda$core$Object$Q($tmp74);
// unreffing REF($180:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp77 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
// unreffing s
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block10:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing REF($169:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$Compiler$AutoScope* $tmp78 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
// unreffing scope
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
// line 44
org$pandalanguage$pandac$IR* $tmp79 = *(&local0);
$fn81 $tmp80 = ($fn81) $tmp79->$class->vtable[5];
panda$core$Bit $tmp82 = $tmp80($tmp79);
panda$core$Bit $tmp83 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp82);
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block11; else goto block12;
block11:;
// line 45
org$pandalanguage$pandac$IR* $tmp85 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp86 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp87 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp88 = *(&local4);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp86, $tmp87, param1, $tmp88);
$fn90 $tmp89 = ($fn90) $tmp85->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp91 = $tmp89($tmp85, $tmp86);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
// unreffing REF($217:org.pandalanguage.pandac.IR.Statement)
goto block12;
block12:;
// line 47
panda$core$Bit $tmp92 = panda$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block13; else goto block14;
block13:;
// line 48
org$pandalanguage$pandac$IR* $tmp94 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp95 = *(&local3);
$fn97 $tmp96 = ($fn97) $tmp94->$class->vtable[4];
$tmp96($tmp94, $tmp95);
// line 49
panda$core$Bit $tmp98 = panda$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp100 = (panda$core$Int64) {49};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s101, $tmp100, &$s102);
abort(); // unreachable
block15:;
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, param4);
// line 50
org$pandalanguage$pandac$IR* $tmp103 = *(&local0);
$fn105 $tmp104 = ($fn105) $tmp103->$class->vtable[5];
panda$core$Bit $tmp106 = $tmp104($tmp103);
panda$core$Bit $tmp107 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp106);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block17; else goto block18;
block17:;
// line 51
org$pandalanguage$pandac$IR* $tmp109 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp110 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp111 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp112 = *(&local4);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp110, $tmp111, param1, $tmp112);
$fn114 $tmp113 = ($fn114) $tmp109->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp115 = $tmp113($tmp109, $tmp110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
// unreffing REF($256:org.pandalanguage.pandac.IR.Statement)
goto block18;
block18:;
goto block14;
block14:;
// line 54
org$pandalanguage$pandac$IR* $tmp116 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp117 = *(&local4);
$fn119 $tmp118 = ($fn119) $tmp116->$class->vtable[4];
$tmp118($tmp116, $tmp117);
org$pandalanguage$pandac$IR$Value* $tmp120 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
// unreffing testBit
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp121 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statement$If$init(org$pandalanguage$pandac$statement$If* param0) {

return;

}
void org$pandalanguage$pandac$statement$If$cleanup(org$pandalanguage$pandac$statement$If* param0) {

// line 13
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






