#include "org/pandalanguage/pandac/statement/Loop.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "org/pandalanguage/pandac/Compiler/AutoContext.h"
#include "org/pandalanguage/pandac/Compiler/AutoScope.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Compiler/EnclosingContext.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/IR/Statement.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Bit.h"


static panda$core$String $s1;
org$pandalanguage$pandac$statement$Loop$class_type org$pandalanguage$pandac$statement$Loop$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$statement$Loop$cleanup} };

typedef org$pandalanguage$pandac$IR$Block$ID (*$fn7)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn12)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn28)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn33)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$collections$Iterator* (*$fn36)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn40)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn45)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn54)(org$pandalanguage$pandac$IR*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn63)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn68)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4c\x6f\x6f\x70", 39, 4081884996753115715, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x62\x6f\x64\x79", 9, 2275190226471092905, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x65\x6e\x64", 8, 22526635905684886, NULL };

void org$pandalanguage$pandac$statement$Loop$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$FixedArray* param3) {

org$pandalanguage$pandac$IR* local0 = NULL;
org$pandalanguage$pandac$IR$Block$ID local1;
org$pandalanguage$pandac$IR$Block$ID local2;
org$pandalanguage$pandac$Compiler$AutoContext* local3 = NULL;
org$pandalanguage$pandac$Compiler$AutoScope* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
// line 17
org$pandalanguage$pandac$IR** $tmp2 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$IR* $tmp4 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 18
org$pandalanguage$pandac$IR* $tmp5 = *(&local0);
$fn7 $tmp6 = ($fn7) $tmp5->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp8 = $tmp6($tmp5, &$s9);
*(&local1) = $tmp8;
// line 19
org$pandalanguage$pandac$IR* $tmp10 = *(&local0);
$fn12 $tmp11 = ($fn12) $tmp10->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp13 = $tmp11($tmp10, &$s14);
*(&local2) = $tmp13;
// line 1
// line 21
org$pandalanguage$pandac$Compiler$AutoContext* $tmp15 = (org$pandalanguage$pandac$Compiler$AutoContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoContext$class);
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp16 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp17 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Block$ID $tmp18 = *(&local2);
org$pandalanguage$pandac$IR$Block$ID $tmp19 = *(&local1);
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp16, $tmp17, param2, $tmp18, $tmp19);
org$pandalanguage$pandac$Compiler$AutoContext$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Compiler$EnclosingContext($tmp15, param0, $tmp16);
*(&local3) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
org$pandalanguage$pandac$Compiler$AutoContext* $tmp20 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
*(&local3) = $tmp15;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
// unreffing REF($23:org.pandalanguage.pandac.Compiler.EnclosingContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
// unreffing REF($22:org.pandalanguage.pandac.Compiler.AutoContext)
// line 22
org$pandalanguage$pandac$Compiler$AutoScope* $tmp21 = (org$pandalanguage$pandac$Compiler$AutoScope*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler($tmp21, param0);
*(&local4) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
org$pandalanguage$pandac$Compiler$AutoScope* $tmp22 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
*(&local4) = $tmp21;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing REF($43:org.pandalanguage.pandac.Compiler.AutoScope)
// line 23
org$pandalanguage$pandac$IR* $tmp23 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp24 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp25 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp26 = *(&local1);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp24, $tmp25, param1, $tmp26);
$fn28 $tmp27 = ($fn28) $tmp23->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp29 = $tmp27($tmp23, $tmp24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
// unreffing REF($57:org.pandalanguage.pandac.IR.Statement)
// line 24
org$pandalanguage$pandac$IR* $tmp30 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp31 = *(&local1);
$fn33 $tmp32 = ($fn33) $tmp30->$class->vtable[4];
$tmp32($tmp30, $tmp31);
// line 25
ITable* $tmp34 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp34->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp34 = $tmp34->next;
}
$fn36 $tmp35 = $tmp34->methods[0];
panda$collections$Iterator* $tmp37 = $tmp35(((panda$collections$Iterable*) param3));
goto block1;
block1:;
ITable* $tmp38 = $tmp37->$class->itable;
while ($tmp38->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp38 = $tmp38->next;
}
$fn40 $tmp39 = $tmp38->methods[0];
panda$core$Bit $tmp41 = $tmp39($tmp37);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block3; else goto block2;
block2:;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp43 = $tmp37->$class->itable;
while ($tmp43->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[1];
panda$core$Object* $tmp46 = $tmp44($tmp37);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp46)));
org$pandalanguage$pandac$ASTNode* $tmp47 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) $tmp46);
// line 26
org$pandalanguage$pandac$ASTNode* $tmp48 = *(&local5);
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, $tmp48);
panda$core$Panda$unref$panda$core$Object$Q($tmp46);
// unreffing REF($86:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp49 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing s
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
// unreffing REF($75:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$Compiler$AutoScope* $tmp50 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// unreffing scope
*(&local4) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$Compiler$AutoContext* $tmp51 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing auto
*(&local3) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
// line 29
org$pandalanguage$pandac$IR* $tmp52 = *(&local0);
$fn54 $tmp53 = ($fn54) $tmp52->$class->vtable[5];
panda$core$Bit $tmp55 = $tmp53($tmp52);
panda$core$Bit $tmp56 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block4; else goto block5;
block4:;
// line 30
org$pandalanguage$pandac$IR* $tmp58 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp59 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp60 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp61 = *(&local1);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp59, $tmp60, param1, $tmp61);
$fn63 $tmp62 = ($fn63) $tmp58->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp64 = $tmp62($tmp58, $tmp59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// unreffing REF($128:org.pandalanguage.pandac.IR.Statement)
goto block5;
block5:;
// line 32
org$pandalanguage$pandac$IR* $tmp65 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp66 = *(&local2);
$fn68 $tmp67 = ($fn68) $tmp65->$class->vtable[4];
$tmp67($tmp65, $tmp66);
org$pandalanguage$pandac$IR* $tmp69 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statement$Loop$init(org$pandalanguage$pandac$statement$Loop* param0) {

return;

}
void org$pandalanguage$pandac$statement$Loop$cleanup(org$pandalanguage$pandac$statement$Loop* param0) {

// line 13
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






