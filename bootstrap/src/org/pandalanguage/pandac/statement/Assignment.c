#include "org/pandalanguage/pandac/statement/Assignment.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/lvalue/LValue.h"
#include "panda/core/Bit.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/expression/Call.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/expression/Binary.h"


static panda$core$String $s1;
org$pandalanguage$pandac$statement$Assignment$class_type org$pandalanguage$pandac$statement$Assignment$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$statement$Assignment$cleanup} };

typedef panda$core$Bit (*$fn12)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn37)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn87)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn100)(org$pandalanguage$pandac$lvalue$LValue*);
typedef org$pandalanguage$pandac$IR$Value* (*$fn114)(org$pandalanguage$pandac$lvalue$LValue*);
typedef org$pandalanguage$pandac$Type* (*$fn132)(org$pandalanguage$pandac$lvalue$LValue*);
typedef void (*$fn155)(org$pandalanguage$pandac$lvalue$LValue*, org$pandalanguage$pandac$IR$Value*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74", 45, 3068460707609025198, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 15, -6277848839784652004, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 2397797701155234970, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 2397797701155234970, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x27", 115, -466079998634983925, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 2397797701155234970, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x27", 115, -466079998634983925, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 2397797701155234970, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 2397797701155234970, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x27", 115, -466079998634983925, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 2397797701155234970, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x27", 115, -466079998634983925, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 2397797701155234970, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };

void org$pandalanguage$pandac$statement$Assignment$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ASTNode* param2, org$pandalanguage$pandac$parser$Token$Kind param3, org$pandalanguage$pandac$ASTNode* param4) {

org$pandalanguage$pandac$Position local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local2;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
panda$collections$Array* local4 = NULL;
org$pandalanguage$pandac$IR$Value* local5 = NULL;
org$pandalanguage$pandac$lvalue$LValue* local6 = NULL;
org$pandalanguage$pandac$IR$Value* local7 = NULL;
// line 17
panda$core$Bit $tmp2 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(param3);
panda$core$Bit $tmp3 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2);
bool $tmp4 = $tmp3.value;
if ($tmp4) goto block1; else goto block2;
block1:;
// line 18
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s5);
// line 19
return;
block2:;
// line 21
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp6;
$tmp6 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp6->value = param3;
panda$core$Int64 $tmp7 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp8 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp7);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp9;
$tmp9 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
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
// line 22
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
// line 24
org$pandalanguage$pandac$parser$Token$Kind $tmp30 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp31;
$tmp31 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp31->value = $tmp30;
panda$core$Int64 $tmp32 = (panda$core$Int64) {102};
org$pandalanguage$pandac$parser$Token$Kind $tmp33 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp32);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp34;
$tmp34 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
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
// line 25
panda$collections$Array* $tmp40 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp40);
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
panda$collections$Array* $tmp41 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
*(&local4) = $tmp40;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
// unreffing REF($74:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 26
org$pandalanguage$pandac$ASTNode* $tmp42 = *(&local1);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp43 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
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
// line 27
org$pandalanguage$pandac$IR$Value* $tmp47 = *(&local5);
panda$core$Bit $tmp48 = panda$core$Bit$init$builtin_bit($tmp47 == NULL);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block9; else goto block10;
block9:;
// line 28
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
// line 30
panda$collections$Array* $tmp54 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp55 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp54, ((panda$core$Object*) $tmp55));
// line 31
panda$collections$Array* $tmp56 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp56, ((panda$core$Object*) param4));
// line 32
org$pandalanguage$pandac$Position $tmp57 = *(&local0);
org$pandalanguage$pandac$IR$Value* $tmp58 = *(&local5);
panda$core$Bit $tmp59 = panda$core$Bit$init$builtin_bit($tmp58 != NULL);
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp61 = (panda$core$Int64) {32};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s62, $tmp61, &$s63);
abort(); // unreachable
block11:;
panda$collections$Array* $tmp64 = *(&local4);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp65 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp66 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp65, $tmp66);
org$pandalanguage$pandac$IR$Value* $tmp67 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp57, $tmp58, &$s68, ((panda$collections$ListView*) $tmp64), $tmp65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing REF($161:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing REF($158:org.pandalanguage.pandac.Compiler.TypeContext)
// line 34
org$pandalanguage$pandac$IR$Value* $tmp69 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing compiledBase
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp70 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
// unreffing args
*(&local4) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp71 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
// unreffing index
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp72 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return;
block8:;
org$pandalanguage$pandac$ASTNode* $tmp73 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing index
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp74 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block5:;
goto block4;
block4:;
// line 39
org$pandalanguage$pandac$lvalue$LValue* $tmp75 = org$pandalanguage$pandac$lvalue$LValue$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$lvalue$LValue$Q(param0, param2);
*(&local6) = ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
org$pandalanguage$pandac$lvalue$LValue* $tmp76 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
*(&local6) = $tmp75;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing REF($203:org.pandalanguage.pandac.lvalue.LValue?)
// line 40
org$pandalanguage$pandac$lvalue$LValue* $tmp77 = *(&local6);
panda$core$Bit $tmp78 = panda$core$Bit$init$builtin_bit($tmp77 == NULL);
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block13; else goto block14;
block13:;
// line 41
org$pandalanguage$pandac$lvalue$LValue* $tmp80 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
// unreffing left
*(&local6) = ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
return;
block14:;
// line 43
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 44
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp81;
$tmp81 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp81->value = param3;
panda$core$Int64 $tmp82 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp83 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp82);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp84;
$tmp84 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp84->value = $tmp83;
ITable* $tmp85 = ((panda$core$Equatable*) $tmp81)->$class->itable;
while ($tmp85->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp85 = $tmp85->next;
}
$fn87 $tmp86 = $tmp85->methods[0];
panda$core$Bit $tmp88 = $tmp86(((panda$core$Equatable*) $tmp81), ((panda$core$Equatable*) $tmp84));
bool $tmp89 = $tmp88.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp84)));
// unreffing REF($234:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp81)));
// unreffing REF($230:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp89) goto block15; else goto block17;
block15:;
// line 45
org$pandalanguage$pandac$Compiler$TypeContext* $tmp90 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp91 = (panda$core$Int64) {3};
org$pandalanguage$pandac$lvalue$LValue* $tmp92 = *(&local6);
panda$core$Bit $tmp93 = panda$core$Bit$init$builtin_bit($tmp92 != NULL);
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp95 = (panda$core$Int64) {45};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s96, $tmp95, &$s97);
abort(); // unreachable
block18:;
ITable* $tmp98 = $tmp92->$class->itable;
while ($tmp98->$class != (panda$core$Class*) &org$pandalanguage$pandac$lvalue$LValue$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[0];
org$pandalanguage$pandac$Type* $tmp101 = $tmp99($tmp92);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp90, $tmp91, $tmp101);
org$pandalanguage$pandac$IR$Value* $tmp102 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param4, $tmp90);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
org$pandalanguage$pandac$IR$Value* $tmp103 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
*(&local7) = $tmp102;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing REF($260:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
// unreffing REF($258:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing REF($246:org.pandalanguage.pandac.Compiler.TypeContext)
goto block16;
block17:;
// line 1
// line 48
org$pandalanguage$pandac$ASTNode* $tmp104 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp105 = (panda$core$Int64) {26};
org$pandalanguage$pandac$lvalue$LValue* $tmp106 = *(&local6);
panda$core$Bit $tmp107 = panda$core$Bit$init$builtin_bit($tmp106 != NULL);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp109 = (panda$core$Int64) {49};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s110, $tmp109, &$s111);
abort(); // unreachable
block20:;
ITable* $tmp112 = $tmp106->$class->itable;
while ($tmp112->$class != (panda$core$Class*) &org$pandalanguage$pandac$lvalue$LValue$class) {
    $tmp112 = $tmp112->next;
}
$fn114 $tmp113 = $tmp112->methods[1];
org$pandalanguage$pandac$IR$Value* $tmp115 = $tmp113($tmp106);
panda$core$Bit $tmp116 = panda$core$Bit$init$builtin_bit($tmp115 != NULL);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp118 = (panda$core$Int64) {49};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s119, $tmp118, &$s120);
abort(); // unreachable
block22:;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp104, $tmp105, param1, $tmp115);
org$pandalanguage$pandac$parser$Token$Kind $tmp121 = org$pandalanguage$pandac$Compiler$removeAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Kind(param3);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp122 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp123 = (panda$core$Int64) {3};
org$pandalanguage$pandac$lvalue$LValue* $tmp124 = *(&local6);
panda$core$Bit $tmp125 = panda$core$Bit$init$builtin_bit($tmp124 != NULL);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp127 = (panda$core$Int64) {52};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s128, $tmp127, &$s129);
abort(); // unreachable
block24:;
ITable* $tmp130 = $tmp124->$class->itable;
while ($tmp130->$class != (panda$core$Class*) &org$pandalanguage$pandac$lvalue$LValue$class) {
    $tmp130 = $tmp130->next;
}
$fn132 $tmp131 = $tmp130->methods[0];
org$pandalanguage$pandac$Type* $tmp133 = $tmp131($tmp124);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp122, $tmp123, $tmp133);
org$pandalanguage$pandac$IR$Value* $tmp134 = org$pandalanguage$pandac$expression$Binary$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp104, $tmp121, param4, $tmp122);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
org$pandalanguage$pandac$IR$Value* $tmp135 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
*(&local7) = $tmp134;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
// unreffing REF($316:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
// unreffing REF($314:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
// unreffing REF($302:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
// unreffing REF($291:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
// unreffing REF($279:org.pandalanguage.pandac.ASTNode)
goto block16;
block16:;
// line 54
org$pandalanguage$pandac$IR$Value* $tmp136 = *(&local7);
panda$core$Bit $tmp137 = panda$core$Bit$init$builtin_bit($tmp136 == NULL);
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block26; else goto block27;
block26:;
// line 55
org$pandalanguage$pandac$IR$Value* $tmp139 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
// unreffing right
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$lvalue$LValue* $tmp140 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
// unreffing left
*(&local6) = ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
return;
block27:;
// line 57
org$pandalanguage$pandac$lvalue$LValue* $tmp141 = *(&local6);
panda$core$Bit $tmp142 = panda$core$Bit$init$builtin_bit($tmp141 != NULL);
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp144 = (panda$core$Int64) {57};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s145, $tmp144, &$s146);
abort(); // unreachable
block28:;
org$pandalanguage$pandac$IR$Value* $tmp147 = *(&local7);
panda$core$Bit $tmp148 = panda$core$Bit$init$builtin_bit($tmp147 != NULL);
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block30; else goto block31;
block31:;
panda$core$Int64 $tmp150 = (panda$core$Int64) {57};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s151, $tmp150, &$s152);
abort(); // unreachable
block30:;
ITable* $tmp153 = $tmp141->$class->itable;
while ($tmp153->$class != (panda$core$Class*) &org$pandalanguage$pandac$lvalue$LValue$class) {
    $tmp153 = $tmp153->next;
}
$fn155 $tmp154 = $tmp153->methods[2];
$tmp154($tmp141, $tmp147);
org$pandalanguage$pandac$IR$Value* $tmp156 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
// unreffing right
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$lvalue$LValue* $tmp157 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
// unreffing left
*(&local6) = ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
return;

}
void org$pandalanguage$pandac$statement$Assignment$init(org$pandalanguage$pandac$statement$Assignment* param0) {

return;

}
void org$pandalanguage$pandac$statement$Assignment$cleanup(org$pandalanguage$pandac$statement$Assignment* param0) {

// line 13
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






