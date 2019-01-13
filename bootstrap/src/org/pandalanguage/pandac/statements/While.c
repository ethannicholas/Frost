#include "org/pandalanguage/pandac/statements/While.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "org/pandalanguage/pandac/Compiler/AutoContext.h"
#include "org/pandalanguage/pandac/Compiler/AutoScope.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/Compiler/AutoUnrefs.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Compiler/EnclosingContext.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/IR/Statement.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Bit.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"


static panda$core$String $s1;
org$pandalanguage$pandac$statements$While$class_type org$pandalanguage$pandac$statements$While$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$statements$While$cleanup} };

typedef org$pandalanguage$pandac$IR$Block$ID (*$fn7)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn12)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn17)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn33)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn38)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn67)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn72)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$collections$Iterator* (*$fn75)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn79)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn84)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn94)(org$pandalanguage$pandac$IR*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn103)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn108)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x73\x2e\x57\x68\x69\x6c\x65", 41, 5007550443158065713, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x74\x65\x73\x74", 10, 1940631136532459410, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x62\x6f\x64\x79", 10, 1940631136514014492, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x65\x6e\x64", 9, 2393547565294467981, NULL };

void org$pandalanguage$pandac$statements$While$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4) {

org$pandalanguage$pandac$IR* local0 = NULL;
org$pandalanguage$pandac$IR$Block$ID local1;
org$pandalanguage$pandac$IR$Block$ID local2;
org$pandalanguage$pandac$IR$Block$ID local3;
org$pandalanguage$pandac$Compiler$AutoContext* local4 = NULL;
org$pandalanguage$pandac$Compiler$AutoScope* local5 = NULL;
org$pandalanguage$pandac$IR$Value* local6 = NULL;
org$pandalanguage$pandac$Compiler$AutoUnrefs* local7 = NULL;
org$pandalanguage$pandac$IR$Value* local8 = NULL;
org$pandalanguage$pandac$ASTNode* local9 = NULL;
// line 19
org$pandalanguage$pandac$IR** $tmp2 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$IR* $tmp4 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 20
org$pandalanguage$pandac$IR* $tmp5 = *(&local0);
$fn7 $tmp6 = ($fn7) $tmp5->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp8 = $tmp6($tmp5, &$s9);
*(&local1) = $tmp8;
// line 21
org$pandalanguage$pandac$IR* $tmp10 = *(&local0);
$fn12 $tmp11 = ($fn12) $tmp10->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp13 = $tmp11($tmp10, &$s14);
*(&local2) = $tmp13;
// line 22
org$pandalanguage$pandac$IR* $tmp15 = *(&local0);
$fn17 $tmp16 = ($fn17) $tmp15->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp18 = $tmp16($tmp15, &$s19);
*(&local3) = $tmp18;
// line 1
// line 24
org$pandalanguage$pandac$Compiler$AutoContext* $tmp20 = (org$pandalanguage$pandac$Compiler$AutoContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoContext$class);
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp21 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp22 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Block$ID $tmp23 = *(&local3);
org$pandalanguage$pandac$IR$Block$ID $tmp24 = *(&local1);
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp21, $tmp22, param2, $tmp23, $tmp24);
org$pandalanguage$pandac$Compiler$AutoContext$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Compiler$EnclosingContext($tmp20, param0, $tmp21);
*(&local4) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
org$pandalanguage$pandac$Compiler$AutoContext* $tmp25 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
*(&local4) = $tmp20;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing REF($28:org.pandalanguage.pandac.Compiler.EnclosingContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($27:org.pandalanguage.pandac.Compiler.AutoContext)
// line 25
org$pandalanguage$pandac$Compiler$AutoScope* $tmp26 = (org$pandalanguage$pandac$Compiler$AutoScope*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler($tmp26, param0);
*(&local5) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
org$pandalanguage$pandac$Compiler$AutoScope* $tmp27 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
*(&local5) = $tmp26;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
// unreffing REF($48:org.pandalanguage.pandac.Compiler.AutoScope)
// line 26
org$pandalanguage$pandac$IR* $tmp28 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp29 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp30 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp31 = *(&local1);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp29, $tmp30, param1, $tmp31);
$fn33 $tmp32 = ($fn33) $tmp28->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp34 = $tmp32($tmp28, $tmp29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// unreffing REF($62:org.pandalanguage.pandac.IR.Statement)
// line 27
org$pandalanguage$pandac$IR* $tmp35 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp36 = *(&local1);
$fn38 $tmp37 = ($fn38) $tmp35->$class->vtable[4];
$tmp37($tmp35, $tmp36);
// line 28
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 1
// line 30
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp39 = (org$pandalanguage$pandac$Compiler$AutoUnrefs*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoUnrefs$class);
org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler($tmp39, param0);
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp40 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
*(&local7) = $tmp39;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
// unreffing REF($80:org.pandalanguage.pandac.Compiler.AutoUnrefs)
// line 31
org$pandalanguage$pandac$Compiler$TypeContext* $tmp41 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp42 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp43 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp41, $tmp42, $tmp43);
org$pandalanguage$pandac$IR$Value* $tmp44 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param3, $tmp41);
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
org$pandalanguage$pandac$IR$Value* $tmp45 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
*(&local8) = $tmp44;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// unreffing REF($97:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing REF($95:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing REF($93:org.pandalanguage.pandac.Compiler.TypeContext)
// line 32
org$pandalanguage$pandac$IR$Value* $tmp46 = *(&local8);
panda$core$Bit $tmp47 = panda$core$Bit$init$builtin_bit($tmp46 == NULL);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block1; else goto block2;
block1:;
// line 33
org$pandalanguage$pandac$IR$Value* $tmp49 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing compiledTest
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp50 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// unreffing unrefs
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp51 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing testBit
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp52 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing scope
*(&local5) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$Compiler$AutoContext* $tmp53 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
// unreffing context
*(&local4) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
org$pandalanguage$pandac$IR* $tmp54 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block2:;
// line 35
org$pandalanguage$pandac$IR$Value* $tmp55 = *(&local8);
org$pandalanguage$pandac$IR$Value* $tmp56 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp55);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
org$pandalanguage$pandac$IR$Value* $tmp57 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
*(&local6) = $tmp56;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
// unreffing REF($155:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$IR$Value* $tmp58 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
// unreffing compiledTest
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp59 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// unreffing unrefs
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
// line 37
org$pandalanguage$pandac$IR* $tmp60 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp61 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp62 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp63 = *(&local6);
org$pandalanguage$pandac$IR$Block$ID $tmp64 = *(&local2);
org$pandalanguage$pandac$IR$Block$ID $tmp65 = *(&local3);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp61, $tmp62, param1, $tmp63, $tmp64, $tmp65);
$fn67 $tmp66 = ($fn67) $tmp60->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp68 = $tmp66($tmp60, $tmp61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
// unreffing REF($177:org.pandalanguage.pandac.IR.Statement)
// line 38
org$pandalanguage$pandac$IR* $tmp69 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp70 = *(&local2);
$fn72 $tmp71 = ($fn72) $tmp69->$class->vtable[4];
$tmp71($tmp69, $tmp70);
// line 39
ITable* $tmp73 = ((panda$collections$Iterable*) param4)->$class->itable;
while ($tmp73->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp73 = $tmp73->next;
}
$fn75 $tmp74 = $tmp73->methods[0];
panda$collections$Iterator* $tmp76 = $tmp74(((panda$collections$Iterable*) param4));
goto block3;
block3:;
ITable* $tmp77 = $tmp76->$class->itable;
while ($tmp77->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp77 = $tmp77->next;
}
$fn79 $tmp78 = $tmp77->methods[0];
panda$core$Bit $tmp80 = $tmp78($tmp76);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block5; else goto block4;
block4:;
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp82 = $tmp76->$class->itable;
while ($tmp82->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp82 = $tmp82->next;
}
$fn84 $tmp83 = $tmp82->methods[1];
panda$core$Object* $tmp85 = $tmp83($tmp76);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp85)));
org$pandalanguage$pandac$ASTNode* $tmp86 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) $tmp85);
// line 40
org$pandalanguage$pandac$ASTNode* $tmp87 = *(&local9);
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, $tmp87);
panda$core$Panda$unref$panda$core$Object$Q($tmp85);
// unreffing REF($208:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp88 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
// unreffing s
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
// unreffing REF($197:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$IR$Value* $tmp89 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
// unreffing testBit
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp90 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing scope
*(&local5) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$Compiler$AutoContext* $tmp91 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
// unreffing context
*(&local4) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
// line 43
org$pandalanguage$pandac$IR* $tmp92 = *(&local0);
$fn94 $tmp93 = ($fn94) $tmp92->$class->vtable[5];
panda$core$Bit $tmp95 = $tmp93($tmp92);
panda$core$Bit $tmp96 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp95);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block6; else goto block7;
block6:;
// line 44
org$pandalanguage$pandac$IR* $tmp98 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp99 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp100 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp101 = *(&local1);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp99, $tmp100, param1, $tmp101);
$fn103 $tmp102 = ($fn103) $tmp98->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp104 = $tmp102($tmp98, $tmp99);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
// unreffing REF($255:org.pandalanguage.pandac.IR.Statement)
goto block7;
block7:;
// line 46
org$pandalanguage$pandac$IR* $tmp105 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp106 = *(&local3);
$fn108 $tmp107 = ($fn108) $tmp105->$class->vtable[4];
$tmp107($tmp105, $tmp106);
org$pandalanguage$pandac$IR* $tmp109 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statements$While$init(org$pandalanguage$pandac$statements$While* param0) {

return;

}
void org$pandalanguage$pandac$statements$While$cleanup(org$pandalanguage$pandac$statements$While* param0) {

// line 15
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






