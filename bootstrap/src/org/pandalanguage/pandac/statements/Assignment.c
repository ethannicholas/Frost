#include "org/pandalanguage/pandac/statements/Assignment.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/Compiler/LValue.h"
#include "panda/core/Bit.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/statements/Call.h"
#include "org/pandalanguage/pandac/Type.h"


static panda$core$String $s1;
org$pandalanguage$pandac$statements$Assignment$class_type org$pandalanguage$pandac$statements$Assignment$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$statements$Assignment$cleanup} };

typedef panda$core$Bit (*$fn12)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn37)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn82)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn90)(org$pandalanguage$pandac$Compiler$LValue*);
typedef org$pandalanguage$pandac$IR$Value* (*$fn99)(org$pandalanguage$pandac$Compiler$LValue*);
typedef org$pandalanguage$pandac$Type* (*$fn107)(org$pandalanguage$pandac$Compiler$LValue*);
typedef void (*$fn120)(org$pandalanguage$pandac$Compiler$LValue*, org$pandalanguage$pandac$IR$Value*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x73\x2e\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74", 46, -7240773869691005199, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 15, -6277848839784652004, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };

void org$pandalanguage$pandac$statements$Assignment$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ASTNode* param2, org$pandalanguage$pandac$parser$Token$Kind param3, org$pandalanguage$pandac$ASTNode* param4) {

org$pandalanguage$pandac$Position local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local2;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
panda$collections$Array* local4 = NULL;
org$pandalanguage$pandac$IR$Value* local5 = NULL;
org$pandalanguage$pandac$Compiler$LValue* local6 = NULL;
org$pandalanguage$pandac$IR$Value* local7 = NULL;
// line 14
panda$core$Bit $tmp2 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(param3);
panda$core$Bit $tmp3 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2);
bool $tmp4 = $tmp3.value;
if ($tmp4) goto block1; else goto block2;
block1:;
// line 15
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s5);
// line 16
return;
block2:;
// line 18
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp6;
$tmp6 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp6->value = param3;
panda$core$Int64 $tmp7 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp8 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp7);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp9;
$tmp9 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp9->value = $tmp8;
ITable* $tmp10 = ((panda$core$Equatable*) $tmp6)->$class->itable;
while ($tmp10->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
panda$core$Bit $tmp13 = $tmp11(((panda$core$Equatable*) $tmp6), ((panda$core$Equatable*) $tmp9));
bool $tmp14 = $tmp13.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp9)));
// unreffing REF($14:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp6)));
// unreffing REF($10:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp14) goto block3; else goto block4;
block3:;
// line 19
panda$core$Int64* $tmp15 = &param2->$rawValue;
panda$core$Int64 $tmp16 = *$tmp15;
panda$core$Int64 $tmp17 = (panda$core$Int64) {5};
panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp16, $tmp17);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block6; else goto block5;
block6:;
org$pandalanguage$pandac$Position* $tmp20 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp21 = *$tmp20;
*(&local0) = $tmp21;
org$pandalanguage$pandac$ASTNode** $tmp22 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp23 = *$tmp22;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
org$pandalanguage$pandac$ASTNode* $tmp24 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
*(&local1) = $tmp23;
org$pandalanguage$pandac$parser$Token$Kind* $tmp25 = (org$pandalanguage$pandac$parser$Token$Kind*) (param2->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp26 = *$tmp25;
*(&local2) = $tmp26;
org$pandalanguage$pandac$ASTNode** $tmp27 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp28 = *$tmp27;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
org$pandalanguage$pandac$ASTNode* $tmp29 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
*(&local3) = $tmp28;
// line 21
org$pandalanguage$pandac$parser$Token$Kind $tmp30 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp31;
$tmp31 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp31->value = $tmp30;
panda$core$Int64 $tmp32 = (panda$core$Int64) {102};
org$pandalanguage$pandac$parser$Token$Kind $tmp33 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp32);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp34;
$tmp34 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp34->value = $tmp33;
ITable* $tmp35 = ((panda$core$Equatable*) $tmp31)->$class->itable;
while ($tmp35->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp35 = $tmp35->next;
}
$fn37 $tmp36 = $tmp35->methods[0];
panda$core$Bit $tmp38 = $tmp36(((panda$core$Equatable*) $tmp31), ((panda$core$Equatable*) $tmp34));
bool $tmp39 = $tmp38.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp34)));
// unreffing REF($62:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp31)));
// unreffing REF($58:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp39) goto block7; else goto block8;
block7:;
// line 22
panda$collections$Array* $tmp40 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp40);
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
panda$collections$Array* $tmp41 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
*(&local4) = $tmp40;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
// unreffing REF($74:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 23
org$pandalanguage$pandac$ASTNode* $tmp42 = *(&local1);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp43 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp44 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp43, $tmp44);
org$pandalanguage$pandac$IR$Value* $tmp45 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp42, $tmp43);
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
org$pandalanguage$pandac$IR$Value* $tmp46 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
*(&local5) = $tmp45;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
// unreffing REF($92:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing REF($89:org.pandalanguage.pandac.Compiler.TypeContext)
// line 24
org$pandalanguage$pandac$IR$Value* $tmp47 = *(&local5);
panda$core$Bit $tmp48 = panda$core$Bit$init$builtin_bit($tmp47 == NULL);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block9; else goto block10;
block9:;
// line 25
org$pandalanguage$pandac$IR$Value* $tmp50 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// unreffing compiledBase
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp51 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing args
*(&local4) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp52 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing index
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp53 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return;
block10:;
// line 27
panda$collections$Array* $tmp54 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp55 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp54, ((panda$core$Object*) $tmp55));
// line 28
panda$collections$Array* $tmp56 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp56, ((panda$core$Object*) param4));
// line 29
org$pandalanguage$pandac$Position $tmp57 = *(&local0);
org$pandalanguage$pandac$IR$Value* $tmp58 = *(&local5);
panda$collections$Array* $tmp59 = *(&local4);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp60 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp61 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp60, $tmp61);
org$pandalanguage$pandac$IR$Value* $tmp62 = org$pandalanguage$pandac$statements$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp57, $tmp58, &$s63, ((panda$collections$ListView*) $tmp59), $tmp60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing REF($154:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
// unreffing REF($151:org.pandalanguage.pandac.Compiler.TypeContext)
// line 31
org$pandalanguage$pandac$IR$Value* $tmp64 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing compiledBase
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp65 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing args
*(&local4) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp66 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// unreffing index
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp67 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return;
block8:;
org$pandalanguage$pandac$ASTNode* $tmp68 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
// unreffing index
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp69 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block5:;
goto block4;
block4:;
// line 36
org$pandalanguage$pandac$Compiler$LValue* $tmp70 = org$pandalanguage$pandac$Compiler$compileLValue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Compiler$LValue$Q(param0, param2);
*(&local6) = ((org$pandalanguage$pandac$Compiler$LValue*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
org$pandalanguage$pandac$Compiler$LValue* $tmp71 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
*(&local6) = $tmp70;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
// unreffing REF($196:org.pandalanguage.pandac.Compiler.LValue?)
// line 37
org$pandalanguage$pandac$Compiler$LValue* $tmp72 = *(&local6);
panda$core$Bit $tmp73 = panda$core$Bit$init$builtin_bit($tmp72 == NULL);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block11; else goto block12;
block11:;
// line 38
org$pandalanguage$pandac$Compiler$LValue* $tmp75 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing left
*(&local6) = ((org$pandalanguage$pandac$Compiler$LValue*) NULL);
return;
block12:;
// line 40
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 41
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp76;
$tmp76 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp76->value = param3;
panda$core$Int64 $tmp77 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp78 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp77);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp79;
$tmp79 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp79->value = $tmp78;
ITable* $tmp80 = ((panda$core$Equatable*) $tmp76)->$class->itable;
while ($tmp80->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[0];
panda$core$Bit $tmp83 = $tmp81(((panda$core$Equatable*) $tmp76), ((panda$core$Equatable*) $tmp79));
bool $tmp84 = $tmp83.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp79)));
// unreffing REF($227:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp76)));
// unreffing REF($223:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp84) goto block13; else goto block15;
block13:;
// line 42
org$pandalanguage$pandac$Compiler$TypeContext* $tmp85 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp86 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Compiler$LValue* $tmp87 = *(&local6);
ITable* $tmp88 = $tmp87->$class->itable;
while ($tmp88->$class != (panda$core$Class*) &org$pandalanguage$pandac$Compiler$LValue$class) {
    $tmp88 = $tmp88->next;
}
$fn90 $tmp89 = $tmp88->methods[0];
org$pandalanguage$pandac$Type* $tmp91 = $tmp89($tmp87);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp85, $tmp86, $tmp91);
org$pandalanguage$pandac$IR$Value* $tmp92 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param4, $tmp85);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
org$pandalanguage$pandac$IR$Value* $tmp93 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
*(&local7) = $tmp92;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// unreffing REF($246:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
// unreffing REF($244:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// unreffing REF($239:org.pandalanguage.pandac.Compiler.TypeContext)
goto block14;
block15:;
// line 1
// line 45
org$pandalanguage$pandac$ASTNode* $tmp94 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp95 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Compiler$LValue* $tmp96 = *(&local6);
ITable* $tmp97 = $tmp96->$class->itable;
while ($tmp97->$class != (panda$core$Class*) &org$pandalanguage$pandac$Compiler$LValue$class) {
    $tmp97 = $tmp97->next;
}
$fn99 $tmp98 = $tmp97->methods[1];
org$pandalanguage$pandac$IR$Value* $tmp100 = $tmp98($tmp96);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp94, $tmp95, param1, $tmp100);
org$pandalanguage$pandac$parser$Token$Kind $tmp101 = org$pandalanguage$pandac$Compiler$removeAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Kind(param3);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp102 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp103 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Compiler$LValue* $tmp104 = *(&local6);
ITable* $tmp105 = $tmp104->$class->itable;
while ($tmp105->$class != (panda$core$Class*) &org$pandalanguage$pandac$Compiler$LValue$class) {
    $tmp105 = $tmp105->next;
}
$fn107 $tmp106 = $tmp105->methods[0];
org$pandalanguage$pandac$Type* $tmp108 = $tmp106($tmp104);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp102, $tmp103, $tmp108);
org$pandalanguage$pandac$IR$Value* $tmp109 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp94, $tmp101, param4, $tmp102);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
org$pandalanguage$pandac$IR$Value* $tmp110 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
*(&local7) = $tmp109;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
// unreffing REF($281:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// unreffing REF($279:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing REF($274:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
// unreffing REF($270:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// unreffing REF($265:org.pandalanguage.pandac.ASTNode)
goto block14;
block14:;
// line 51
org$pandalanguage$pandac$IR$Value* $tmp111 = *(&local7);
panda$core$Bit $tmp112 = panda$core$Bit$init$builtin_bit($tmp111 == NULL);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block16; else goto block17;
block16:;
// line 52
org$pandalanguage$pandac$IR$Value* $tmp114 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
// unreffing right
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$LValue* $tmp115 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
// unreffing left
*(&local6) = ((org$pandalanguage$pandac$Compiler$LValue*) NULL);
return;
block17:;
// line 54
org$pandalanguage$pandac$Compiler$LValue* $tmp116 = *(&local6);
org$pandalanguage$pandac$IR$Value* $tmp117 = *(&local7);
ITable* $tmp118 = $tmp116->$class->itable;
while ($tmp118->$class != (panda$core$Class*) &org$pandalanguage$pandac$Compiler$LValue$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[2];
$tmp119($tmp116, $tmp117);
org$pandalanguage$pandac$IR$Value* $tmp121 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
// unreffing right
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$LValue* $tmp122 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
// unreffing left
*(&local6) = ((org$pandalanguage$pandac$Compiler$LValue*) NULL);
return;

}
void org$pandalanguage$pandac$statements$Assignment$init(org$pandalanguage$pandac$statements$Assignment* param0) {

return;

}
void org$pandalanguage$pandac$statements$Assignment$cleanup(org$pandalanguage$pandac$statements$Assignment* param0) {

// line 10
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






