#include "org/pandalanguage/pandac/lvalue/LValue.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/ChoiceCase.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Equatable.h"
#include "org/pandalanguage/pandac/lvalue/IndexLValue.h"
#include "org/pandalanguage/pandac/lvalue/ChoiceFieldLValue.h"
#include "panda/collections/Stack.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "org/pandalanguage/pandac/lvalue/FieldLValue.h"
#include "org/pandalanguage/pandac/Variable/Storage.h"
#include "org/pandalanguage/pandac/lvalue/VariableLValue.h"
#include "org/pandalanguage/pandac/Annotations.h"


struct { panda$core$Class* cl; ITable* next; void* methods[3]; } org$pandalanguage$pandac$lvalue$LValue$_org$pandalanguage$pandac$lvalue$LValue = { (panda$core$Class*) &org$pandalanguage$pandac$lvalue$LValue$class, NULL, { NULL, NULL, NULL} };

static panda$core$String $s1;
org$pandalanguage$pandac$lvalue$LValue$class_type org$pandalanguage$pandac$lvalue$LValue$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$lvalue$LValue$_org$pandalanguage$pandac$lvalue$LValue, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, NULL, NULL} };

typedef panda$core$Bit (*$fn24)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn110)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn114)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn150)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Position (*$fn186)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn203)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn212)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn321)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 38, 296665589507882398, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x6f\x64\x69\x66\x79\x20\x76\x61\x6c\x75\x65\x20\x66\x69\x65\x6c\x64\x73\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 52, 2803094133346002974, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20", 31, -2978468964078965078, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x27", 18, 5927969463226965843, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x29", 33, 4023997240073892833, NULL };

org$pandalanguage$pandac$lvalue$LValue* org$pandalanguage$pandac$lvalue$LValue$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$lvalue$LValue$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$ASTNode* param1) {

org$pandalanguage$pandac$Position local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local2;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$IR$Value* local4 = NULL;
org$pandalanguage$pandac$Position local5;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
org$pandalanguage$pandac$ChoiceCase* local7 = NULL;
panda$core$Int64 local8;
org$pandalanguage$pandac$IR$Value* local9 = NULL;
org$pandalanguage$pandac$ASTNode* local10 = NULL;
panda$core$String* local11 = NULL;
org$pandalanguage$pandac$IR$Value* local12 = NULL;
org$pandalanguage$pandac$ClassDecl* local13 = NULL;
org$pandalanguage$pandac$Symbol* local14 = NULL;
org$pandalanguage$pandac$FieldDecl* local15 = NULL;
org$pandalanguage$pandac$Position local16;
panda$core$String* local17 = NULL;
org$pandalanguage$pandac$Symbol* local18 = NULL;
org$pandalanguage$pandac$Variable* local19 = NULL;
org$pandalanguage$pandac$FieldDecl* local20 = NULL;
// line 32
panda$core$Int64* $tmp2 = &param1->$rawValue;
panda$core$Int64 $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = (panda$core$Int64) {5};
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp7 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp8 = *$tmp7;
*(&local0) = $tmp8;
org$pandalanguage$pandac$ASTNode** $tmp9 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp10 = *$tmp9;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
org$pandalanguage$pandac$ASTNode* $tmp11 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
*(&local1) = $tmp10;
org$pandalanguage$pandac$parser$Token$Kind* $tmp12 = (org$pandalanguage$pandac$parser$Token$Kind*) (param1->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp13 = *$tmp12;
*(&local2) = $tmp13;
org$pandalanguage$pandac$ASTNode** $tmp14 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp15 = *$tmp14;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
org$pandalanguage$pandac$ASTNode* $tmp16 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
*(&local3) = $tmp15;
// line 34
org$pandalanguage$pandac$parser$Token$Kind $tmp17 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp18;
$tmp18 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp18->value = $tmp17;
panda$core$Int64 $tmp19 = (panda$core$Int64) {102};
org$pandalanguage$pandac$parser$Token$Kind $tmp20 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp19);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp21;
$tmp21 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp21->value = $tmp20;
ITable* $tmp22 = ((panda$core$Equatable*) $tmp18)->$class->itable;
while ($tmp22->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp22 = $tmp22->next;
}
$fn24 $tmp23 = $tmp22->methods[0];
panda$core$Bit $tmp25 = $tmp23(((panda$core$Equatable*) $tmp18), ((panda$core$Equatable*) $tmp21));
bool $tmp26 = $tmp25.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp21)));
// unreffing REF($37:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp18)));
// unreffing REF($33:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp26) goto block4; else goto block5;
block4:;
// line 35
org$pandalanguage$pandac$ASTNode* $tmp27 = *(&local1);
org$pandalanguage$pandac$IR$Value* $tmp28 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp27);
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
org$pandalanguage$pandac$IR$Value* $tmp29 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
*(&local4) = $tmp28;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
// unreffing REF($50:org.pandalanguage.pandac.IR.Value?)
// line 36
org$pandalanguage$pandac$IR$Value* $tmp30 = *(&local4);
panda$core$Bit $tmp31 = panda$core$Bit$init$builtin_bit($tmp30 == NULL);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block6; else goto block7;
block6:;
// line 37
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp33 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing target
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp34 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp35 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing left
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block7:;
// line 39
org$pandalanguage$pandac$lvalue$IndexLValue* $tmp36 = (org$pandalanguage$pandac$lvalue$IndexLValue*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$lvalue$IndexLValue$class);
org$pandalanguage$pandac$Position $tmp37 = *(&local0);
org$pandalanguage$pandac$IR$Value* $tmp38 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp39 = *(&local3);
org$pandalanguage$pandac$lvalue$IndexLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ASTNode($tmp36, param0, $tmp37, $tmp38, $tmp39);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) $tmp36)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
// unreffing REF($87:org.pandalanguage.pandac.lvalue.IndexLValue)
org$pandalanguage$pandac$IR$Value* $tmp40 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
// unreffing target
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp41 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp42 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
// unreffing left
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) $tmp36);
block5:;
org$pandalanguage$pandac$ASTNode* $tmp43 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp44 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// unreffing left
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp45 = (panda$core$Int64) {11};
panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp45);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp48 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp49 = *$tmp48;
*(&local5) = $tmp49;
org$pandalanguage$pandac$ASTNode** $tmp50 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp51 = *$tmp50;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
org$pandalanguage$pandac$ASTNode* $tmp52 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
*(&local6) = $tmp51;
org$pandalanguage$pandac$ChoiceCase** $tmp53 = (org$pandalanguage$pandac$ChoiceCase**) (param1->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp54 = *$tmp53;
*(&local7) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
org$pandalanguage$pandac$ChoiceCase* $tmp55 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
*(&local7) = $tmp54;
panda$core$Int64* $tmp56 = (panda$core$Int64*) (param1->$data + 32);
panda$core$Int64 $tmp57 = *$tmp56;
*(&local8) = $tmp57;
// line 43
org$pandalanguage$pandac$ASTNode* $tmp58 = *(&local6);
org$pandalanguage$pandac$IR$Value* $tmp59 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp58);
*(&local9) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
org$pandalanguage$pandac$IR$Value* $tmp60 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
*(&local9) = $tmp59;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// unreffing REF($156:org.pandalanguage.pandac.IR.Value?)
// line 44
org$pandalanguage$pandac$IR$Value* $tmp61 = *(&local9);
panda$core$Bit $tmp62 = panda$core$Bit$init$builtin_bit($tmp61 == NULL);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block10; else goto block11;
block10:;
// line 45
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp64 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing compiledBase
*(&local9) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ChoiceCase* $tmp65 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing cc
*(&local7) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp66 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// unreffing base
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block11:;
// line 47
org$pandalanguage$pandac$lvalue$ChoiceFieldLValue* $tmp67 = (org$pandalanguage$pandac$lvalue$ChoiceFieldLValue*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$class);
org$pandalanguage$pandac$Position $tmp68 = *(&local5);
org$pandalanguage$pandac$IR$Value* $tmp69 = *(&local9);
org$pandalanguage$pandac$ChoiceCase* $tmp70 = *(&local7);
panda$core$Int64 $tmp71 = *(&local8);
org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64($tmp67, param0, $tmp68, $tmp69, $tmp70, $tmp71);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) $tmp67)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing REF($193:org.pandalanguage.pandac.lvalue.ChoiceFieldLValue)
org$pandalanguage$pandac$IR$Value* $tmp72 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing compiledBase
*(&local9) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ChoiceCase* $tmp73 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing cc
*(&local7) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp74 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing base
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) $tmp67);
block9:;
panda$core$Int64 $tmp75 = (panda$core$Int64) {16};
panda$core$Bit $tmp76 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp75);
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp78 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp79 = *$tmp78;
org$pandalanguage$pandac$ASTNode** $tmp80 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp81 = *$tmp80;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
org$pandalanguage$pandac$ASTNode* $tmp82 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
*(&local10) = $tmp81;
panda$core$String** $tmp83 = (panda$core$String**) (param1->$data + 24);
panda$core$String* $tmp84 = *$tmp83;
*(&local11) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
panda$core$String* $tmp85 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
*(&local11) = $tmp84;
// line 50
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 51
org$pandalanguage$pandac$ASTNode* $tmp86 = *(&local10);
panda$core$Int64* $tmp87 = &$tmp86->$rawValue;
panda$core$Int64 $tmp88 = *$tmp87;
panda$core$Int64 $tmp89 = (panda$core$Int64) {40};
panda$core$Bit $tmp90 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp88, $tmp89);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block15; else goto block16;
block15:;
// line 53
panda$collections$Stack** $tmp92 = &param0->currentClass;
panda$collections$Stack* $tmp93 = *$tmp92;
panda$core$Int64 $tmp94 = (panda$core$Int64) {0};
panda$core$Object* $tmp95 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp93, $tmp94);
panda$core$Bit $tmp96 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp95));
bool $tmp97 = $tmp96.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp95);
// unreffing REF($261:panda.collections.Stack.T)
if ($tmp97) goto block17; else goto block19;
block17:;
// line 54
panda$collections$Stack** $tmp98 = &param0->currentMethod;
panda$collections$Stack* $tmp99 = *$tmp98;
panda$core$Int64 $tmp100 = (panda$core$Int64) {0};
panda$core$Object* $tmp101 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp99, $tmp100);
org$pandalanguage$pandac$MethodDecl$Kind* $tmp102 = &((org$pandalanguage$pandac$MethodDecl*) $tmp101)->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp103 = *$tmp102;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp104;
$tmp104 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp104->value = $tmp103;
panda$core$Int64 $tmp105 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp106 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp105);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp107;
$tmp107 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp107->value = $tmp106;
ITable* $tmp108 = ((panda$core$Equatable*) $tmp104)->$class->itable;
while ($tmp108->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp108 = $tmp108->next;
}
$fn110 $tmp109 = $tmp108->methods[1];
panda$core$Bit $tmp111 = $tmp109(((panda$core$Equatable*) $tmp104), ((panda$core$Equatable*) $tmp107));
bool $tmp112 = $tmp111.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp107)));
// unreffing REF($283:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp104)));
// unreffing REF($279:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
panda$core$Panda$unref$panda$core$Object$Q($tmp101);
// unreffing REF($275:panda.collections.Stack.T)
if ($tmp112) goto block20; else goto block21;
block20:;
// line 55
$fn114 $tmp113 = ($fn114) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp115 = $tmp113(param1);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp115, &$s116);
// line 57
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp117 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
// unreffing compiledBase
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$String* $tmp118 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp119 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp119));
// unreffing base
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block21:;
// line 59
org$pandalanguage$pandac$IR$Value* $tmp120 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp121 = (panda$core$Int64) {2};
panda$core$Int64 $tmp122 = (panda$core$Int64) {0};
panda$collections$Stack** $tmp123 = &param0->currentClass;
panda$collections$Stack* $tmp124 = *$tmp123;
panda$core$Int64 $tmp125 = (panda$core$Int64) {0};
panda$core$Object* $tmp126 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp124, $tmp125);
org$pandalanguage$pandac$Type** $tmp127 = &((org$pandalanguage$pandac$ClassDecl*) $tmp126)->type;
org$pandalanguage$pandac$Type* $tmp128 = *$tmp127;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp120, $tmp121, $tmp122, $tmp128);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
org$pandalanguage$pandac$IR$Value* $tmp129 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
*(&local12) = $tmp120;
panda$core$Panda$unref$panda$core$Object$Q($tmp126);
// unreffing REF($328:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
// unreffing REF($321:org.pandalanguage.pandac.IR.Value)
goto block18;
block19:;
// line 1
// line 62
org$pandalanguage$pandac$ASTNode* $tmp130 = *(&local10);
org$pandalanguage$pandac$IR$Value* $tmp131 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp130);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
org$pandalanguage$pandac$IR$Value* $tmp132 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
*(&local12) = $tmp131;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing REF($349:org.pandalanguage.pandac.IR.Value?)
// line 63
org$pandalanguage$pandac$IR$Value* $tmp133 = *(&local12);
panda$core$Bit $tmp134 = panda$core$Bit$init$builtin_bit(false);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block22; else goto block23;
block22:;
// line 64
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp136 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing compiledBase
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$String* $tmp137 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp138 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
// unreffing base
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block23:;
goto block18;
block18:;
goto block14;
block16:;
// line 69
org$pandalanguage$pandac$ASTNode* $tmp139 = *(&local10);
org$pandalanguage$pandac$IR$Value* $tmp140 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp139);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
org$pandalanguage$pandac$IR$Value* $tmp141 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
*(&local12) = $tmp140;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
// unreffing REF($388:org.pandalanguage.pandac.IR.Value?)
// line 70
org$pandalanguage$pandac$IR$Value* $tmp142 = *(&local12);
panda$core$Bit $tmp143 = panda$core$Bit$init$builtin_bit(false);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block24; else goto block25;
block24:;
// line 71
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp145 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
// unreffing compiledBase
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$String* $tmp146 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp147 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
// unreffing base
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block25:;
goto block14;
block14:;
// line 75
org$pandalanguage$pandac$IR$Value* $tmp148 = *(&local12);
$fn150 $tmp149 = ($fn150) $tmp148->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp151 = $tmp149($tmp148);
org$pandalanguage$pandac$ClassDecl* $tmp152 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp151);
*(&local13) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
org$pandalanguage$pandac$ClassDecl* $tmp153 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
*(&local13) = $tmp152;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
// unreffing REF($428:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
// unreffing REF($427:org.pandalanguage.pandac.Type)
// line 76
org$pandalanguage$pandac$ClassDecl* $tmp154 = *(&local13);
panda$core$Bit $tmp155 = panda$core$Bit$init$builtin_bit($tmp154 == NULL);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block26; else goto block27;
block26:;
// line 77
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp157 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
// unreffing cl
*(&local13) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp158 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
// unreffing compiledBase
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$String* $tmp159 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp160 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp160));
// unreffing base
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block27:;
// line 79
org$pandalanguage$pandac$ClassDecl* $tmp161 = *(&local13);
org$pandalanguage$pandac$SymbolTable* $tmp162 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp161);
panda$core$String* $tmp163 = *(&local11);
org$pandalanguage$pandac$Symbol* $tmp164 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp162, $tmp163);
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
org$pandalanguage$pandac$Symbol* $tmp165 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
*(&local14) = $tmp164;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
// unreffing REF($477:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
// unreffing REF($475:org.pandalanguage.pandac.SymbolTable)
// line 80
org$pandalanguage$pandac$Symbol* $tmp166 = *(&local14);
panda$core$Bit $tmp167 = panda$core$Bit$init$builtin_bit($tmp166 != NULL);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block28; else goto block29;
block28:;
// line 81
org$pandalanguage$pandac$Symbol* $tmp169 = *(&local14);
org$pandalanguage$pandac$Symbol$Kind* $tmp170 = &$tmp169->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp171 = *$tmp170;
panda$core$Int64 $tmp172 = $tmp171.$rawValue;
panda$core$Int64 $tmp173 = (panda$core$Int64) {2};
panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp172, $tmp173);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block31; else goto block32;
block31:;
// line 83
org$pandalanguage$pandac$Symbol* $tmp176 = *(&local14);
panda$core$Bit $tmp177 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(param0, ((org$pandalanguage$pandac$FieldDecl*) $tmp176));
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block33; else goto block34;
block33:;
// line 84
org$pandalanguage$pandac$Symbol* $tmp179 = *(&local14);
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp179)));
org$pandalanguage$pandac$FieldDecl* $tmp180 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) $tmp179);
// line 85
org$pandalanguage$pandac$FieldDecl* $tmp181 = *(&local15);
panda$core$Bit $tmp182 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(param0, $tmp181);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block35; else goto block36;
block35:;
// line 86
org$pandalanguage$pandac$lvalue$FieldLValue* $tmp184 = (org$pandalanguage$pandac$lvalue$FieldLValue*) pandaObjectAlloc(80, (panda$core$Class*) &org$pandalanguage$pandac$lvalue$FieldLValue$class);
$fn186 $tmp185 = ($fn186) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp187 = $tmp185(param1);
org$pandalanguage$pandac$IR$Value* $tmp188 = *(&local12);
org$pandalanguage$pandac$FieldDecl* $tmp189 = *(&local15);
org$pandalanguage$pandac$lvalue$FieldLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FieldDecl($tmp184, param0, $tmp187, $tmp188, $tmp189);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) $tmp184)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
// unreffing REF($529:org.pandalanguage.pandac.lvalue.FieldLValue)
org$pandalanguage$pandac$FieldDecl* $tmp190 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
// unreffing f
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$Symbol* $tmp191 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
// unreffing symbol
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp192 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
// unreffing cl
*(&local13) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp193 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
// unreffing compiledBase
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$String* $tmp194 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp195 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// unreffing base
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) $tmp184);
block36:;
org$pandalanguage$pandac$FieldDecl* $tmp196 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// unreffing f
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block34;
block34:;
// line 89
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp197 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
// unreffing symbol
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp198 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
// unreffing cl
*(&local13) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp199 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// unreffing compiledBase
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$String* $tmp200 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp201 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
// unreffing base
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block32:;
// line 92
$fn203 $tmp202 = ($fn203) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp204 = $tmp202(param1);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp204, &$s205);
// line 93
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp206 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
// unreffing symbol
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp207 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
// unreffing cl
*(&local13) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp208 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
// unreffing compiledBase
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$String* $tmp209 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp210 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
// unreffing base
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block30:;
goto block29;
block29:;
// line 97
$fn212 $tmp211 = ($fn212) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp213 = $tmp211(param1);
org$pandalanguage$pandac$ClassDecl* $tmp214 = *(&local13);
panda$core$String** $tmp215 = &$tmp214->name;
panda$core$String* $tmp216 = *$tmp215;
panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s218, $tmp216);
panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp217, &$s220);
panda$core$String* $tmp221 = *(&local11);
panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s223, $tmp221);
panda$core$String* $tmp224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp222, &$s225);
panda$core$String* $tmp226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp219, $tmp224);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp213, $tmp226);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
// unreffing REF($654:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
// unreffing REF($653:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
// unreffing REF($652:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
// unreffing REF($650:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
// unreffing REF($649:panda.core.String)
// line 99
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp227 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
// unreffing symbol
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp228 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp228));
// unreffing cl
*(&local13) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp229 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
// unreffing compiledBase
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$String* $tmp230 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp231 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
// unreffing base
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block13:;
panda$core$Int64 $tmp232 = (panda$core$Int64) {22};
panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp232);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block37; else goto block1;
block37:;
org$pandalanguage$pandac$Position* $tmp235 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp236 = *$tmp235;
*(&local16) = $tmp236;
panda$core$String** $tmp237 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp238 = *$tmp237;
*(&local17) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
panda$core$String* $tmp239 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
*(&local17) = $tmp238;
// line 102
org$pandalanguage$pandac$SymbolTable** $tmp240 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp241 = *$tmp240;
panda$core$String* $tmp242 = *(&local17);
org$pandalanguage$pandac$Symbol* $tmp243 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp241, $tmp242);
*(&local18) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
org$pandalanguage$pandac$Symbol* $tmp244 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp244));
*(&local18) = $tmp243;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
// unreffing REF($720:org.pandalanguage.pandac.Symbol?)
// line 103
org$pandalanguage$pandac$Symbol* $tmp245 = *(&local18);
panda$core$Bit $tmp246 = panda$core$Bit$init$builtin_bit($tmp245 != NULL);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block38; else goto block39;
block38:;
// line 104
org$pandalanguage$pandac$Symbol* $tmp248 = *(&local18);
org$pandalanguage$pandac$Symbol$Kind* $tmp249 = &$tmp248->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp250 = *$tmp249;
panda$core$Int64 $tmp251 = $tmp250.$rawValue;
panda$core$Int64 $tmp252 = (panda$core$Int64) {9};
panda$core$Bit $tmp253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp251, $tmp252);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block41; else goto block42;
block41:;
// line 106
org$pandalanguage$pandac$Symbol* $tmp255 = *(&local18);
*(&local19) = ((org$pandalanguage$pandac$Variable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Variable*) $tmp255)));
org$pandalanguage$pandac$Variable* $tmp256 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
*(&local19) = ((org$pandalanguage$pandac$Variable*) $tmp255);
// line 107
org$pandalanguage$pandac$Variable* $tmp257 = *(&local19);
org$pandalanguage$pandac$Variable$Storage** $tmp258 = &$tmp257->storage;
org$pandalanguage$pandac$Variable$Storage* $tmp259 = *$tmp258;
panda$core$Int64* $tmp260 = &$tmp259->$rawValue;
panda$core$Int64 $tmp261 = *$tmp260;
panda$core$Int64 $tmp262 = (panda$core$Int64) {0};
panda$core$Bit $tmp263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp261, $tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block44; else goto block45;
block44:;
// line 109
org$pandalanguage$pandac$lvalue$VariableLValue* $tmp265 = (org$pandalanguage$pandac$lvalue$VariableLValue*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$lvalue$VariableLValue$class);
org$pandalanguage$pandac$Position $tmp266 = *(&local16);
org$pandalanguage$pandac$Symbol* $tmp267 = *(&local18);
org$pandalanguage$pandac$lvalue$VariableLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable($tmp265, param0, $tmp266, ((org$pandalanguage$pandac$Variable*) $tmp267));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) $tmp265)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
// unreffing REF($768:org.pandalanguage.pandac.lvalue.VariableLValue)
org$pandalanguage$pandac$Variable* $tmp268 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
// unreffing v
*(&local19) = ((org$pandalanguage$pandac$Variable*) NULL);
org$pandalanguage$pandac$Symbol* $tmp269 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
// unreffing symbol
*(&local18) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp270 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
// unreffing id
*(&local17) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) $tmp265);
block45:;
// line 112
org$pandalanguage$pandac$Position $tmp271 = *(&local16);
org$pandalanguage$pandac$Variable* $tmp272 = *(&local19);
panda$core$String** $tmp273 = &((org$pandalanguage$pandac$Symbol*) $tmp272)->name;
panda$core$String* $tmp274 = *$tmp273;
panda$core$String* $tmp275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s276, $tmp274);
panda$core$String* $tmp277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp275, &$s278);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp271, $tmp277);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
// unreffing REF($802:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
// unreffing REF($801:panda.core.String)
goto block43;
block43:;
org$pandalanguage$pandac$Variable* $tmp279 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
// unreffing v
*(&local19) = ((org$pandalanguage$pandac$Variable*) NULL);
goto block40;
block42:;
panda$core$Int64 $tmp280 = (panda$core$Int64) {2};
panda$core$Bit $tmp281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp251, $tmp280);
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block46; else goto block40;
block46:;
// line 117
org$pandalanguage$pandac$Symbol* $tmp283 = *(&local18);
*(&local20) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp283)));
org$pandalanguage$pandac$FieldDecl* $tmp284 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
*(&local20) = ((org$pandalanguage$pandac$FieldDecl*) $tmp283);
// line 118
org$pandalanguage$pandac$FieldDecl* $tmp285 = *(&local20);
org$pandalanguage$pandac$Annotations** $tmp286 = &$tmp285->annotations;
org$pandalanguage$pandac$Annotations* $tmp287 = *$tmp286;
panda$core$Bit $tmp288 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp287);
panda$core$Bit $tmp289 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp288);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block47; else goto block48;
block47:;
// line 119
org$pandalanguage$pandac$ASTNode* $tmp291 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp292 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Position $tmp293 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp294 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp295 = (panda$core$Int64) {40};
org$pandalanguage$pandac$Position $tmp296 = *(&local16);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp294, $tmp295, $tmp296);
org$pandalanguage$pandac$FieldDecl* $tmp297 = *(&local20);
panda$core$String** $tmp298 = &((org$pandalanguage$pandac$Symbol*) $tmp297)->name;
panda$core$String* $tmp299 = *$tmp298;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp291, $tmp292, $tmp293, $tmp294, $tmp299);
org$pandalanguage$pandac$lvalue$LValue* $tmp300 = org$pandalanguage$pandac$lvalue$LValue$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$lvalue$LValue$Q(param0, $tmp291);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp300));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp300));
// unreffing REF($852:org.pandalanguage.pandac.lvalue.LValue?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
// unreffing REF($843:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp291));
// unreffing REF($840:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FieldDecl* $tmp301 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
// unreffing f
*(&local20) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$Symbol* $tmp302 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
// unreffing symbol
*(&local18) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp303 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
// unreffing id
*(&local17) = ((panda$core$String*) NULL);
return $tmp300;
block48:;
// line 122
org$pandalanguage$pandac$FieldDecl* $tmp304 = *(&local20);
panda$core$Bit $tmp305 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(param0, $tmp304);
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block49; else goto block50;
block49:;
// line 123
org$pandalanguage$pandac$lvalue$FieldLValue* $tmp307 = (org$pandalanguage$pandac$lvalue$FieldLValue*) pandaObjectAlloc(80, (panda$core$Class*) &org$pandalanguage$pandac$lvalue$FieldLValue$class);
org$pandalanguage$pandac$Position $tmp308 = *(&local16);
org$pandalanguage$pandac$FieldDecl* $tmp309 = *(&local20);
org$pandalanguage$pandac$lvalue$FieldLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FieldDecl($tmp307, param0, $tmp308, ((org$pandalanguage$pandac$IR$Value*) NULL), $tmp309);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) $tmp307)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
// unreffing REF($886:org.pandalanguage.pandac.lvalue.FieldLValue)
org$pandalanguage$pandac$FieldDecl* $tmp310 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp310));
// unreffing f
*(&local20) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$Symbol* $tmp311 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
// unreffing symbol
*(&local18) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp312 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
// unreffing id
*(&local17) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) $tmp307);
block50:;
// line 125
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$FieldDecl* $tmp313 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
// unreffing f
*(&local20) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$Symbol* $tmp314 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
// unreffing symbol
*(&local18) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp315 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
// unreffing id
*(&local17) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block40:;
goto block39;
block39:;
// line 129
org$pandalanguage$pandac$Position $tmp316 = *(&local16);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp316, &$s317);
// line 130
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp318 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
// unreffing symbol
*(&local18) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp319 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp319));
// unreffing id
*(&local17) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block1:;
// line 133
$fn321 $tmp320 = ($fn321) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp322 = $tmp320(param1);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp322, &$s323);
// line 134
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);

}






