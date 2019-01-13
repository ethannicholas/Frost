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
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn49)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn54)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$collections$Iterator* (*$fn59)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn63)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn68)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn76)(org$pandalanguage$pandac$IR*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn85)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn92)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$core$Bit (*$fn95)(org$pandalanguage$pandac$IR*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn104)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn109)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x66", 37, -178624230791147504, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x74\x72\x75\x65", 7, 219748631897488, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x65\x6e\x64", 6, 2175728875251, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x66\x61\x6c\x73\x65", 8, 22194610347195263, NULL };

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
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp15 = (org$pandalanguage$pandac$Compiler$AutoUnrefs*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoUnrefs$class);
org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler($tmp15, param0);
*(&local5) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp16 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
*(&local5) = $tmp15;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
// unreffing REF($25:org.pandalanguage.pandac.Compiler.AutoUnrefs)
// line 24
org$pandalanguage$pandac$Compiler$TypeContext* $tmp17 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
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
org$pandalanguage$pandac$IR$Value* $tmp38 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp37);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
org$pandalanguage$pandac$IR$Value* $tmp39 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
*(&local1) = $tmp38;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
// unreffing REF($106:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$IR$Value* $tmp40 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
// unreffing compiledTest
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp41 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing unrefs
*(&local5) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
// line 36
org$pandalanguage$pandac$IR* $tmp42 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp43 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp44 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp45 = *(&local1);
org$pandalanguage$pandac$IR$Block$ID $tmp46 = *(&local2);
org$pandalanguage$pandac$IR$Block$ID $tmp47 = *(&local3);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp43, $tmp44, param1, $tmp45, $tmp46, $tmp47);
$fn49 $tmp48 = ($fn49) $tmp42->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp50 = $tmp48($tmp42, $tmp43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing REF($128:org.pandalanguage.pandac.IR.Statement)
// line 37
org$pandalanguage$pandac$IR* $tmp51 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp52 = *(&local2);
$fn54 $tmp53 = ($fn54) $tmp51->$class->vtable[4];
$tmp53($tmp51, $tmp52);
// line 1
// line 39
org$pandalanguage$pandac$Compiler$AutoScope* $tmp55 = (org$pandalanguage$pandac$Compiler$AutoScope*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler($tmp55, param0);
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
org$pandalanguage$pandac$Compiler$AutoScope* $tmp56 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
*(&local7) = $tmp55;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing REF($146:org.pandalanguage.pandac.Compiler.AutoScope)
// line 40
ITable* $tmp57 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp57->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[0];
panda$collections$Iterator* $tmp60 = $tmp58(((panda$collections$Iterable*) param3));
goto block6;
block6:;
ITable* $tmp61 = $tmp60->$class->itable;
while ($tmp61->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[0];
panda$core$Bit $tmp64 = $tmp62($tmp60);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block8; else goto block7;
block7:;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp66 = $tmp60->$class->itable;
while ($tmp66->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp66 = $tmp66->next;
}
$fn68 $tmp67 = $tmp66->methods[1];
panda$core$Object* $tmp69 = $tmp67($tmp60);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp69)));
org$pandalanguage$pandac$ASTNode* $tmp70 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) $tmp69);
// line 41
org$pandalanguage$pandac$ASTNode* $tmp71 = *(&local8);
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, $tmp71);
panda$core$Panda$unref$panda$core$Object$Q($tmp69);
// unreffing REF($173:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp72 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing s
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
// unreffing REF($162:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$Compiler$AutoScope* $tmp73 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing scope
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
// line 44
org$pandalanguage$pandac$IR* $tmp74 = *(&local0);
$fn76 $tmp75 = ($fn76) $tmp74->$class->vtable[5];
panda$core$Bit $tmp77 = $tmp75($tmp74);
panda$core$Bit $tmp78 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp77);
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block9; else goto block10;
block9:;
// line 45
org$pandalanguage$pandac$IR* $tmp80 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp81 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp82 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp83 = *(&local4);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp81, $tmp82, param1, $tmp83);
$fn85 $tmp84 = ($fn85) $tmp80->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp86 = $tmp84($tmp80, $tmp81);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
// unreffing REF($210:org.pandalanguage.pandac.IR.Statement)
goto block10;
block10:;
// line 47
panda$core$Bit $tmp87 = panda$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block11; else goto block12;
block11:;
// line 48
org$pandalanguage$pandac$IR* $tmp89 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp90 = *(&local3);
$fn92 $tmp91 = ($fn92) $tmp89->$class->vtable[4];
$tmp91($tmp89, $tmp90);
// line 49
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, param4);
// line 50
org$pandalanguage$pandac$IR* $tmp93 = *(&local0);
$fn95 $tmp94 = ($fn95) $tmp93->$class->vtable[5];
panda$core$Bit $tmp96 = $tmp94($tmp93);
panda$core$Bit $tmp97 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp96);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block13; else goto block14;
block13:;
// line 51
org$pandalanguage$pandac$IR* $tmp99 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp100 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp101 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp102 = *(&local4);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp100, $tmp101, param1, $tmp102);
$fn104 $tmp103 = ($fn104) $tmp99->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp105 = $tmp103($tmp99, $tmp100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
// unreffing REF($242:org.pandalanguage.pandac.IR.Statement)
goto block14;
block14:;
goto block12;
block12:;
// line 54
org$pandalanguage$pandac$IR* $tmp106 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp107 = *(&local4);
$fn109 $tmp108 = ($fn109) $tmp106->$class->vtable[4];
$tmp108($tmp106, $tmp107);
org$pandalanguage$pandac$IR$Value* $tmp110 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
// unreffing testBit
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp111 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
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






