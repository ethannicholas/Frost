#include "org/pandalanguage/pandac/statement/Do.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/ASTNode.h"
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
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/Type.h"


static panda$core$String $s1;
org$pandalanguage$pandac$statement$Do$class_type org$pandalanguage$pandac$statement$Do$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$statement$Do$cleanup} };

typedef org$pandalanguage$pandac$IR$Block$ID (*$fn7)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn12)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn17)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn33)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn38)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$collections$Iterator* (*$fn41)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn45)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn50)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn59)(org$pandalanguage$pandac$IR*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn68)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn73)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn100)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn105)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x44\x6f", 37, -178624230791148000, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x62\x6f\x64\x79", 7, 214535603471274, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x74\x65\x73\x74", 7, 214535621916192, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x65\x6e\x64", 6, 2124114916355, NULL };

void org$pandalanguage$pandac$statement$Do$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$FixedArray* param3, org$pandalanguage$pandac$ASTNode* param4) {

org$pandalanguage$pandac$IR* local0 = NULL;
org$pandalanguage$pandac$IR$Block$ID local1;
org$pandalanguage$pandac$IR$Block$ID local2;
org$pandalanguage$pandac$IR$Block$ID local3;
org$pandalanguage$pandac$Compiler$AutoContext* local4 = NULL;
org$pandalanguage$pandac$Compiler$AutoScope* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
org$pandalanguage$pandac$IR$Value* local7 = NULL;
org$pandalanguage$pandac$Compiler$AutoUnrefs* local8 = NULL;
org$pandalanguage$pandac$IR$Value* local9 = NULL;
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
org$pandalanguage$pandac$IR$Block$ID $tmp24 = *(&local2);
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
ITable* $tmp39 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp39->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp39 = $tmp39->next;
}
$fn41 $tmp40 = $tmp39->methods[0];
panda$collections$Iterator* $tmp42 = $tmp40(((panda$collections$Iterable*) param3));
goto block1;
block1:;
ITable* $tmp43 = $tmp42->$class->itable;
while ($tmp43->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[0];
panda$core$Bit $tmp46 = $tmp44($tmp42);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block3; else goto block2;
block2:;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp48 = $tmp42->$class->itable;
while ($tmp48->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp48 = $tmp48->next;
}
$fn50 $tmp49 = $tmp48->methods[1];
panda$core$Object* $tmp51 = $tmp49($tmp42);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp51)));
org$pandalanguage$pandac$ASTNode* $tmp52 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) $tmp51);
// line 29
org$pandalanguage$pandac$ASTNode* $tmp53 = *(&local6);
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, $tmp53);
panda$core$Panda$unref$panda$core$Object$Q($tmp51);
// unreffing REF($91:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp54 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
// unreffing s
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
// unreffing REF($80:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$Compiler$AutoScope* $tmp55 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing scope
*(&local5) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$Compiler$AutoContext* $tmp56 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
// unreffing context
*(&local4) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
// line 32
org$pandalanguage$pandac$IR* $tmp57 = *(&local0);
$fn59 $tmp58 = ($fn59) $tmp57->$class->vtable[5];
panda$core$Bit $tmp60 = $tmp58($tmp57);
panda$core$Bit $tmp61 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp60);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block4; else goto block5;
block4:;
// line 33
org$pandalanguage$pandac$IR* $tmp63 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp64 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp65 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp66 = *(&local2);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp64, $tmp65, param1, $tmp66);
$fn68 $tmp67 = ($fn68) $tmp63->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp69 = $tmp67($tmp63, $tmp64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing REF($133:org.pandalanguage.pandac.IR.Statement)
goto block5;
block5:;
// line 35
org$pandalanguage$pandac$IR* $tmp70 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp71 = *(&local2);
$fn73 $tmp72 = ($fn73) $tmp70->$class->vtable[4];
$tmp72($tmp70, $tmp71);
// line 36
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 1
// line 38
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp74 = (org$pandalanguage$pandac$Compiler$AutoUnrefs*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoUnrefs$class);
org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler($tmp74, param0);
*(&local8) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp75 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
*(&local8) = $tmp74;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing REF($152:org.pandalanguage.pandac.Compiler.AutoUnrefs)
// line 39
org$pandalanguage$pandac$Compiler$TypeContext* $tmp76 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp77 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp78 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp76, $tmp77, $tmp78);
org$pandalanguage$pandac$IR$Value* $tmp79 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param4, $tmp76);
*(&local9) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
org$pandalanguage$pandac$IR$Value* $tmp80 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
*(&local9) = $tmp79;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
// unreffing REF($169:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
// unreffing REF($167:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
// unreffing REF($165:org.pandalanguage.pandac.Compiler.TypeContext)
// line 40
org$pandalanguage$pandac$IR$Value* $tmp81 = *(&local9);
panda$core$Bit $tmp82 = panda$core$Bit$init$builtin_bit($tmp81 == NULL);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block6; else goto block7;
block6:;
// line 41
org$pandalanguage$pandac$IR$Value* $tmp84 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing compiledTest
*(&local9) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp85 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// unreffing unrefs
*(&local8) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp86 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
// unreffing testBit
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp87 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block7:;
// line 43
org$pandalanguage$pandac$IR$Value* $tmp88 = *(&local9);
org$pandalanguage$pandac$IR$Value* $tmp89 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp88);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
org$pandalanguage$pandac$IR$Value* $tmp90 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
*(&local7) = $tmp89;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
// unreffing REF($217:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$IR$Value* $tmp91 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
// unreffing compiledTest
*(&local9) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp92 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// unreffing unrefs
*(&local8) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
// line 45
org$pandalanguage$pandac$IR* $tmp93 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp94 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp95 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp96 = *(&local7);
org$pandalanguage$pandac$IR$Block$ID $tmp97 = *(&local1);
org$pandalanguage$pandac$IR$Block$ID $tmp98 = *(&local3);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp94, $tmp95, param1, $tmp96, $tmp97, $tmp98);
$fn100 $tmp99 = ($fn100) $tmp93->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp101 = $tmp99($tmp93, $tmp94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// unreffing REF($240:org.pandalanguage.pandac.IR.Statement)
// line 46
org$pandalanguage$pandac$IR* $tmp102 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp103 = *(&local3);
$fn105 $tmp104 = ($fn105) $tmp102->$class->vtable[4];
$tmp104($tmp102, $tmp103);
org$pandalanguage$pandac$IR$Value* $tmp106 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
// unreffing testBit
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp107 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statement$Do$init(org$pandalanguage$pandac$statement$Do* param0) {

return;

}
void org$pandalanguage$pandac$statement$Do$cleanup(org$pandalanguage$pandac$statement$Do* param0) {

// line 15
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






