#include "org/frostlanguage/frostc/lvalue/LValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/parser/Token/Kind.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "org/frostlanguage/frostc/ChoiceCase.h"
#include "frost/core/Int64.h"
#include "org/frostlanguage/frostc/ClassDecl.h"
#include "org/frostlanguage/frostc/Symbol.h"
#include "org/frostlanguage/frostc/FieldDecl.h"
#include "org/frostlanguage/frostc/Variable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Equatable.h"
#include "org/frostlanguage/frostc/lvalue/IndexLValue.h"
#include "org/frostlanguage/frostc/lvalue/ChoiceFieldLValue.h"
#include "frost/collections/Stack.h"
#include "org/frostlanguage/frostc/MethodDecl.h"
#include "org/frostlanguage/frostc/MethodDecl/Kind.h"
#include "org/frostlanguage/frostc/Type.h"
#include "org/frostlanguage/frostc/SymbolTable.h"
#include "org/frostlanguage/frostc/Symbol/Kind.h"
#include "org/frostlanguage/frostc/lvalue/FieldLValue.h"
#include "org/frostlanguage/frostc/Variable/Storage.h"
#include "org/frostlanguage/frostc/lvalue/VariableLValue.h"
#include "org/frostlanguage/frostc/Annotations.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlanguage$frostc$lvalue$LValue$_org$frostlanguage$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlanguage$frostc$lvalue$LValue$class, NULL, { NULL, NULL, NULL} };

static frost$core$String $s1;
org$frostlanguage$frostc$lvalue$LValue$class_type org$frostlanguage$frostc$lvalue$LValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlanguage$frostc$lvalue$LValue$_org$frostlanguage$frostc$lvalue$LValue, { frost$core$Object$convert$R$frost$core$String, frost$core$Object$cleanup, NULL, NULL, NULL} };

typedef frost$core$Bit (*$fn24)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn110)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlanguage$frostc$Position (*$fn114)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Type* (*$fn150)(org$frostlanguage$frostc$IR$Value*);
typedef org$frostlanguage$frostc$Position (*$fn186)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn203)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn212)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn321)(org$frostlanguage$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 38, 3494078054082696978, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x6f\x64\x69\x66\x79\x20\x76\x61\x6c\x75\x65\x20\x66\x69\x65\x6c\x64\x73\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 52, 2803094133346002974, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20", 31, -2978468964078965078, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x27", 18, 5927969463226965843, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x29", 33, 4023997240073892833, NULL };

org$frostlanguage$frostc$lvalue$LValue* org$frostlanguage$frostc$lvalue$LValue$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$lvalue$LValue$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$ASTNode* param1) {

org$frostlanguage$frostc$Position local0;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
org$frostlanguage$frostc$parser$Token$Kind local2;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
org$frostlanguage$frostc$IR$Value* local4 = NULL;
org$frostlanguage$frostc$Position local5;
org$frostlanguage$frostc$ASTNode* local6 = NULL;
org$frostlanguage$frostc$ChoiceCase* local7 = NULL;
frost$core$Int64 local8;
org$frostlanguage$frostc$IR$Value* local9 = NULL;
org$frostlanguage$frostc$ASTNode* local10 = NULL;
frost$core$String* local11 = NULL;
org$frostlanguage$frostc$IR$Value* local12 = NULL;
org$frostlanguage$frostc$ClassDecl* local13 = NULL;
org$frostlanguage$frostc$Symbol* local14 = NULL;
org$frostlanguage$frostc$FieldDecl* local15 = NULL;
org$frostlanguage$frostc$Position local16;
frost$core$String* local17 = NULL;
org$frostlanguage$frostc$Symbol* local18 = NULL;
org$frostlanguage$frostc$Variable* local19 = NULL;
org$frostlanguage$frostc$FieldDecl* local20 = NULL;
// line 32
frost$core$Int64* $tmp2 = &param1->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {5};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
org$frostlanguage$frostc$Position* $tmp7 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp8 = *$tmp7;
*(&local0) = $tmp8;
org$frostlanguage$frostc$ASTNode** $tmp9 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp10 = *$tmp9;
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlanguage$frostc$ASTNode* $tmp11 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
*(&local1) = $tmp10;
org$frostlanguage$frostc$parser$Token$Kind* $tmp12 = (org$frostlanguage$frostc$parser$Token$Kind*) (param1->$data + 24);
org$frostlanguage$frostc$parser$Token$Kind $tmp13 = *$tmp12;
*(&local2) = $tmp13;
org$frostlanguage$frostc$ASTNode** $tmp14 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 32);
org$frostlanguage$frostc$ASTNode* $tmp15 = *$tmp14;
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
org$frostlanguage$frostc$ASTNode* $tmp16 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local3) = $tmp15;
// line 34
org$frostlanguage$frostc$parser$Token$Kind $tmp17 = *(&local2);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp18;
$tmp18 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp18->value = $tmp17;
frost$core$Int64 $tmp19 = (frost$core$Int64) {102};
org$frostlanguage$frostc$parser$Token$Kind $tmp20 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp19);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp21;
$tmp21 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp21->value = $tmp20;
ITable* $tmp22 = ((frost$core$Equatable*) $tmp18)->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp22 = $tmp22->next;
}
$fn24 $tmp23 = $tmp22->methods[0];
frost$core$Bit $tmp25 = $tmp23(((frost$core$Equatable*) $tmp18), ((frost$core$Equatable*) $tmp21));
bool $tmp26 = $tmp25.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp21)));
// unreffing REF($37:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp18)));
// unreffing REF($33:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp26) goto block4; else goto block5;
block4:;
// line 35
org$frostlanguage$frostc$ASTNode* $tmp27 = *(&local1);
org$frostlanguage$frostc$IR$Value* $tmp28 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$IR$Value$Q(param0, $tmp27);
*(&local4) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
org$frostlanguage$frostc$IR$Value* $tmp29 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local4) = $tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing REF($50:org.frostlanguage.frostc.IR.Value?)
// line 36
org$frostlanguage$frostc$IR$Value* $tmp30 = *(&local4);
frost$core$Bit $tmp31 = frost$core$Bit$init$builtin_bit($tmp30 == NULL);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block6; else goto block7;
block6:;
// line 37
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$lvalue$LValue*) NULL)));
org$frostlanguage$frostc$IR$Value* $tmp33 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing target
*(&local4) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp34 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing right
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp35 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing left
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$lvalue$LValue*) NULL);
block7:;
// line 39
org$frostlanguage$frostc$lvalue$IndexLValue* $tmp36 = (org$frostlanguage$frostc$lvalue$IndexLValue*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$lvalue$IndexLValue$class);
org$frostlanguage$frostc$Position $tmp37 = *(&local0);
org$frostlanguage$frostc$IR$Value* $tmp38 = *(&local4);
org$frostlanguage$frostc$ASTNode* $tmp39 = *(&local3);
org$frostlanguage$frostc$lvalue$IndexLValue$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$ASTNode($tmp36, param0, $tmp37, $tmp38, $tmp39);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$lvalue$LValue*) $tmp36)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
// unreffing REF($87:org.frostlanguage.frostc.lvalue.IndexLValue)
org$frostlanguage$frostc$IR$Value* $tmp40 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// unreffing target
*(&local4) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp41 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// unreffing right
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp42 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// unreffing left
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$lvalue$LValue*) $tmp36);
block5:;
org$frostlanguage$frostc$ASTNode* $tmp43 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// unreffing right
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp44 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// unreffing left
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp45 = (frost$core$Int64) {11};
frost$core$Bit $tmp46 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp45);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block8; else goto block9;
block8:;
org$frostlanguage$frostc$Position* $tmp48 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp49 = *$tmp48;
*(&local5) = $tmp49;
org$frostlanguage$frostc$ASTNode** $tmp50 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp51 = *$tmp50;
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
org$frostlanguage$frostc$ASTNode* $tmp52 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local6) = $tmp51;
org$frostlanguage$frostc$ChoiceCase** $tmp53 = (org$frostlanguage$frostc$ChoiceCase**) (param1->$data + 24);
org$frostlanguage$frostc$ChoiceCase* $tmp54 = *$tmp53;
*(&local7) = ((org$frostlanguage$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
org$frostlanguage$frostc$ChoiceCase* $tmp55 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local7) = $tmp54;
frost$core$Int64* $tmp56 = (frost$core$Int64*) (param1->$data + 32);
frost$core$Int64 $tmp57 = *$tmp56;
*(&local8) = $tmp57;
// line 43
org$frostlanguage$frostc$ASTNode* $tmp58 = *(&local6);
org$frostlanguage$frostc$IR$Value* $tmp59 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$IR$Value$Q(param0, $tmp58);
*(&local9) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
org$frostlanguage$frostc$IR$Value* $tmp60 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local9) = $tmp59;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing REF($156:org.frostlanguage.frostc.IR.Value?)
// line 44
org$frostlanguage$frostc$IR$Value* $tmp61 = *(&local9);
frost$core$Bit $tmp62 = frost$core$Bit$init$builtin_bit($tmp61 == NULL);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block10; else goto block11;
block10:;
// line 45
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$lvalue$LValue*) NULL)));
org$frostlanguage$frostc$IR$Value* $tmp64 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing compiledBase
*(&local9) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$ChoiceCase* $tmp65 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing cc
*(&local7) = ((org$frostlanguage$frostc$ChoiceCase*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp66 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing base
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$lvalue$LValue*) NULL);
block11:;
// line 47
org$frostlanguage$frostc$lvalue$ChoiceFieldLValue* $tmp67 = (org$frostlanguage$frostc$lvalue$ChoiceFieldLValue*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$class);
org$frostlanguage$frostc$Position $tmp68 = *(&local5);
org$frostlanguage$frostc$IR$Value* $tmp69 = *(&local9);
org$frostlanguage$frostc$ChoiceCase* $tmp70 = *(&local7);
frost$core$Int64 $tmp71 = *(&local8);
org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$ChoiceCase$frost$core$Int64($tmp67, param0, $tmp68, $tmp69, $tmp70, $tmp71);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$lvalue$LValue*) $tmp67)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing REF($193:org.frostlanguage.frostc.lvalue.ChoiceFieldLValue)
org$frostlanguage$frostc$IR$Value* $tmp72 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing compiledBase
*(&local9) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$ChoiceCase* $tmp73 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing cc
*(&local7) = ((org$frostlanguage$frostc$ChoiceCase*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp74 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing base
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$lvalue$LValue*) $tmp67);
block9:;
frost$core$Int64 $tmp75 = (frost$core$Int64) {16};
frost$core$Bit $tmp76 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp75);
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block12; else goto block13;
block12:;
org$frostlanguage$frostc$Position* $tmp78 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp79 = *$tmp78;
org$frostlanguage$frostc$ASTNode** $tmp80 = (org$frostlanguage$frostc$ASTNode**) (param1->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp81 = *$tmp80;
*(&local10) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
org$frostlanguage$frostc$ASTNode* $tmp82 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local10) = $tmp81;
frost$core$String** $tmp83 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp84 = *$tmp83;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$String* $tmp85 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local11) = $tmp84;
// line 50
*(&local12) = ((org$frostlanguage$frostc$IR$Value*) NULL);
// line 51
org$frostlanguage$frostc$ASTNode* $tmp86 = *(&local10);
frost$core$Int64* $tmp87 = &$tmp86->$rawValue;
frost$core$Int64 $tmp88 = *$tmp87;
frost$core$Int64 $tmp89 = (frost$core$Int64) {40};
frost$core$Bit $tmp90 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp88, $tmp89);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block15; else goto block16;
block15:;
// line 53
frost$collections$Stack** $tmp92 = &param0->currentClass;
frost$collections$Stack* $tmp93 = *$tmp92;
frost$core$Int64 $tmp94 = (frost$core$Int64) {0};
frost$core$Object* $tmp95 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp93, $tmp94);
frost$core$Bit $tmp96 = org$frostlanguage$frostc$Compiler$isValue$org$frostlanguage$frostc$ClassDecl$Q$R$frost$core$Bit(param0, ((org$frostlanguage$frostc$ClassDecl*) $tmp95));
bool $tmp97 = $tmp96.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp95);
// unreffing REF($261:frost.collections.Stack.T)
if ($tmp97) goto block17; else goto block19;
block17:;
// line 54
frost$collections$Stack** $tmp98 = &param0->currentMethod;
frost$collections$Stack* $tmp99 = *$tmp98;
frost$core$Int64 $tmp100 = (frost$core$Int64) {0};
frost$core$Object* $tmp101 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp99, $tmp100);
org$frostlanguage$frostc$MethodDecl$Kind* $tmp102 = &((org$frostlanguage$frostc$MethodDecl*) $tmp101)->methodKind;
org$frostlanguage$frostc$MethodDecl$Kind $tmp103 = *$tmp102;
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp104;
$tmp104 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp104->value = $tmp103;
frost$core$Int64 $tmp105 = (frost$core$Int64) {2};
org$frostlanguage$frostc$MethodDecl$Kind $tmp106 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp105);
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp107;
$tmp107 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp107->value = $tmp106;
ITable* $tmp108 = ((frost$core$Equatable*) $tmp104)->$class->itable;
while ($tmp108->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp108 = $tmp108->next;
}
$fn110 $tmp109 = $tmp108->methods[1];
frost$core$Bit $tmp111 = $tmp109(((frost$core$Equatable*) $tmp104), ((frost$core$Equatable*) $tmp107));
bool $tmp112 = $tmp111.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp107)));
// unreffing REF($283:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp104)));
// unreffing REF($279:frost.core.Equatable<org.frostlanguage.frostc.MethodDecl.Kind>)
frost$core$Frost$unref$frost$core$Object$Q($tmp101);
// unreffing REF($275:frost.collections.Stack.T)
if ($tmp112) goto block20; else goto block21;
block20:;
// line 55
$fn114 $tmp113 = ($fn114) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp115 = $tmp113(param1);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp115, &$s116);
// line 57
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$lvalue$LValue*) NULL)));
org$frostlanguage$frostc$IR$Value* $tmp117 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// unreffing compiledBase
*(&local12) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$String* $tmp118 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp119 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// unreffing base
*(&local10) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$lvalue$LValue*) NULL);
block21:;
// line 59
org$frostlanguage$frostc$IR$Value* $tmp120 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp121 = (frost$core$Int64) {2};
frost$core$Int64 $tmp122 = (frost$core$Int64) {0};
frost$collections$Stack** $tmp123 = &param0->currentClass;
frost$collections$Stack* $tmp124 = *$tmp123;
frost$core$Int64 $tmp125 = (frost$core$Int64) {0};
frost$core$Object* $tmp126 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp124, $tmp125);
org$frostlanguage$frostc$Type** $tmp127 = &((org$frostlanguage$frostc$ClassDecl*) $tmp126)->type;
org$frostlanguage$frostc$Type* $tmp128 = *$tmp127;
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlanguage$frostc$Type($tmp120, $tmp121, $tmp122, $tmp128);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
org$frostlanguage$frostc$IR$Value* $tmp129 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
*(&local12) = $tmp120;
frost$core$Frost$unref$frost$core$Object$Q($tmp126);
// unreffing REF($328:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing REF($321:org.frostlanguage.frostc.IR.Value)
goto block18;
block19:;
// line 1
// line 62
org$frostlanguage$frostc$ASTNode* $tmp130 = *(&local10);
org$frostlanguage$frostc$IR$Value* $tmp131 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$IR$Value$Q(param0, $tmp130);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
org$frostlanguage$frostc$IR$Value* $tmp132 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local12) = $tmp131;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing REF($349:org.frostlanguage.frostc.IR.Value?)
// line 63
org$frostlanguage$frostc$IR$Value* $tmp133 = *(&local12);
frost$core$Bit $tmp134 = frost$core$Bit$init$builtin_bit(false);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block22; else goto block23;
block22:;
// line 64
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$lvalue$LValue*) NULL)));
org$frostlanguage$frostc$IR$Value* $tmp136 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// unreffing compiledBase
*(&local12) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$String* $tmp137 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp138 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
// unreffing base
*(&local10) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$lvalue$LValue*) NULL);
block23:;
goto block18;
block18:;
goto block14;
block16:;
// line 69
org$frostlanguage$frostc$ASTNode* $tmp139 = *(&local10);
org$frostlanguage$frostc$IR$Value* $tmp140 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$IR$Value$Q(param0, $tmp139);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
org$frostlanguage$frostc$IR$Value* $tmp141 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local12) = $tmp140;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
// unreffing REF($388:org.frostlanguage.frostc.IR.Value?)
// line 70
org$frostlanguage$frostc$IR$Value* $tmp142 = *(&local12);
frost$core$Bit $tmp143 = frost$core$Bit$init$builtin_bit(false);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block24; else goto block25;
block24:;
// line 71
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$lvalue$LValue*) NULL)));
org$frostlanguage$frostc$IR$Value* $tmp145 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing compiledBase
*(&local12) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$String* $tmp146 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp147 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// unreffing base
*(&local10) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$lvalue$LValue*) NULL);
block25:;
goto block14;
block14:;
// line 75
org$frostlanguage$frostc$IR$Value* $tmp148 = *(&local12);
$fn150 $tmp149 = ($fn150) $tmp148->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp151 = $tmp149($tmp148);
org$frostlanguage$frostc$ClassDecl* $tmp152 = org$frostlanguage$frostc$Compiler$getClass$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$ClassDecl$Q(param0, $tmp151);
*(&local13) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
org$frostlanguage$frostc$ClassDecl* $tmp153 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
*(&local13) = $tmp152;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// unreffing REF($428:org.frostlanguage.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
// unreffing REF($427:org.frostlanguage.frostc.Type)
// line 76
org$frostlanguage$frostc$ClassDecl* $tmp154 = *(&local13);
frost$core$Bit $tmp155 = frost$core$Bit$init$builtin_bit($tmp154 == NULL);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block26; else goto block27;
block26:;
// line 77
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$lvalue$LValue*) NULL)));
org$frostlanguage$frostc$ClassDecl* $tmp157 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// unreffing cl
*(&local13) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp158 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
// unreffing compiledBase
*(&local12) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$String* $tmp159 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp160 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
// unreffing base
*(&local10) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$lvalue$LValue*) NULL);
block27:;
// line 79
org$frostlanguage$frostc$ClassDecl* $tmp161 = *(&local13);
org$frostlanguage$frostc$SymbolTable* $tmp162 = org$frostlanguage$frostc$Compiler$getSymbolTable$org$frostlanguage$frostc$ClassDecl$R$org$frostlanguage$frostc$SymbolTable(param0, $tmp161);
frost$core$String* $tmp163 = *(&local11);
org$frostlanguage$frostc$Symbol* $tmp164 = org$frostlanguage$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlanguage$frostc$Symbol$Q($tmp162, $tmp163);
*(&local14) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
org$frostlanguage$frostc$Symbol* $tmp165 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
*(&local14) = $tmp164;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
// unreffing REF($477:org.frostlanguage.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
// unreffing REF($475:org.frostlanguage.frostc.SymbolTable)
// line 80
org$frostlanguage$frostc$Symbol* $tmp166 = *(&local14);
frost$core$Bit $tmp167 = frost$core$Bit$init$builtin_bit($tmp166 != NULL);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block28; else goto block29;
block28:;
// line 81
org$frostlanguage$frostc$Symbol* $tmp169 = *(&local14);
org$frostlanguage$frostc$Symbol$Kind* $tmp170 = &$tmp169->kind;
org$frostlanguage$frostc$Symbol$Kind $tmp171 = *$tmp170;
frost$core$Int64 $tmp172 = $tmp171.$rawValue;
frost$core$Int64 $tmp173 = (frost$core$Int64) {2};
frost$core$Bit $tmp174 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp172, $tmp173);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block31; else goto block32;
block31:;
// line 83
org$frostlanguage$frostc$Symbol* $tmp176 = *(&local14);
frost$core$Bit $tmp177 = org$frostlanguage$frostc$Compiler$resolve$org$frostlanguage$frostc$FieldDecl$R$frost$core$Bit(param0, ((org$frostlanguage$frostc$FieldDecl*) $tmp176));
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block33; else goto block34;
block33:;
// line 84
org$frostlanguage$frostc$Symbol* $tmp179 = *(&local14);
*(&local15) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FieldDecl*) $tmp179)));
org$frostlanguage$frostc$FieldDecl* $tmp180 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local15) = ((org$frostlanguage$frostc$FieldDecl*) $tmp179);
// line 85
org$frostlanguage$frostc$FieldDecl* $tmp181 = *(&local15);
frost$core$Bit $tmp182 = org$frostlanguage$frostc$Compiler$resolve$org$frostlanguage$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp181);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block35; else goto block36;
block35:;
// line 86
org$frostlanguage$frostc$lvalue$FieldLValue* $tmp184 = (org$frostlanguage$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlanguage$frostc$lvalue$FieldLValue$class);
$fn186 $tmp185 = ($fn186) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp187 = $tmp185(param1);
org$frostlanguage$frostc$IR$Value* $tmp188 = *(&local12);
org$frostlanguage$frostc$FieldDecl* $tmp189 = *(&local15);
org$frostlanguage$frostc$lvalue$FieldLValue$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$FieldDecl($tmp184, param0, $tmp187, $tmp188, $tmp189);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$lvalue$LValue*) $tmp184)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// unreffing REF($529:org.frostlanguage.frostc.lvalue.FieldLValue)
org$frostlanguage$frostc$FieldDecl* $tmp190 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
// unreffing f
*(&local15) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
org$frostlanguage$frostc$Symbol* $tmp191 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
// unreffing symbol
*(&local14) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp192 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
// unreffing cl
*(&local13) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp193 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// unreffing compiledBase
*(&local12) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$String* $tmp194 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp195 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// unreffing base
*(&local10) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$lvalue$LValue*) $tmp184);
block36:;
org$frostlanguage$frostc$FieldDecl* $tmp196 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing f
*(&local15) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
goto block34;
block34:;
// line 89
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$lvalue$LValue*) NULL)));
org$frostlanguage$frostc$Symbol* $tmp197 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
// unreffing symbol
*(&local14) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp198 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// unreffing cl
*(&local13) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp199 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
// unreffing compiledBase
*(&local12) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$String* $tmp200 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp201 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// unreffing base
*(&local10) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$lvalue$LValue*) NULL);
block32:;
// line 92
$fn203 $tmp202 = ($fn203) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp204 = $tmp202(param1);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp204, &$s205);
// line 93
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$lvalue$LValue*) NULL)));
org$frostlanguage$frostc$Symbol* $tmp206 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing symbol
*(&local14) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp207 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// unreffing cl
*(&local13) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp208 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
// unreffing compiledBase
*(&local12) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$String* $tmp209 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp210 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing base
*(&local10) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$lvalue$LValue*) NULL);
block30:;
goto block29;
block29:;
// line 97
$fn212 $tmp211 = ($fn212) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp213 = $tmp211(param1);
org$frostlanguage$frostc$ClassDecl* $tmp214 = *(&local13);
frost$core$String** $tmp215 = &$tmp214->name;
frost$core$String* $tmp216 = *$tmp215;
frost$core$String* $tmp217 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s218, $tmp216);
frost$core$String* $tmp219 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp217, &$s220);
frost$core$String* $tmp221 = *(&local11);
frost$core$String* $tmp222 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s223, $tmp221);
frost$core$String* $tmp224 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp222, &$s225);
frost$core$String* $tmp226 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp219, $tmp224);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp213, $tmp226);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// unreffing REF($654:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing REF($653:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($652:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing REF($650:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing REF($649:frost.core.String)
// line 99
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$lvalue$LValue*) NULL)));
org$frostlanguage$frostc$Symbol* $tmp227 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// unreffing symbol
*(&local14) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp228 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// unreffing cl
*(&local13) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp229 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
// unreffing compiledBase
*(&local12) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$String* $tmp230 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp231 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
// unreffing base
*(&local10) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$lvalue$LValue*) NULL);
block13:;
frost$core$Int64 $tmp232 = (frost$core$Int64) {22};
frost$core$Bit $tmp233 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp232);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block37; else goto block1;
block37:;
org$frostlanguage$frostc$Position* $tmp235 = (org$frostlanguage$frostc$Position*) (param1->$data + 0);
org$frostlanguage$frostc$Position $tmp236 = *$tmp235;
*(&local16) = $tmp236;
frost$core$String** $tmp237 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp238 = *$tmp237;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$String* $tmp239 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local17) = $tmp238;
// line 102
org$frostlanguage$frostc$SymbolTable** $tmp240 = &param0->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp241 = *$tmp240;
frost$core$String* $tmp242 = *(&local17);
org$frostlanguage$frostc$Symbol* $tmp243 = org$frostlanguage$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlanguage$frostc$Symbol$Q($tmp241, $tmp242);
*(&local18) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
org$frostlanguage$frostc$Symbol* $tmp244 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local18) = $tmp243;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// unreffing REF($720:org.frostlanguage.frostc.Symbol?)
// line 103
org$frostlanguage$frostc$Symbol* $tmp245 = *(&local18);
frost$core$Bit $tmp246 = frost$core$Bit$init$builtin_bit($tmp245 != NULL);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block38; else goto block39;
block38:;
// line 104
org$frostlanguage$frostc$Symbol* $tmp248 = *(&local18);
org$frostlanguage$frostc$Symbol$Kind* $tmp249 = &$tmp248->kind;
org$frostlanguage$frostc$Symbol$Kind $tmp250 = *$tmp249;
frost$core$Int64 $tmp251 = $tmp250.$rawValue;
frost$core$Int64 $tmp252 = (frost$core$Int64) {9};
frost$core$Bit $tmp253 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp251, $tmp252);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block41; else goto block42;
block41:;
// line 106
org$frostlanguage$frostc$Symbol* $tmp255 = *(&local18);
*(&local19) = ((org$frostlanguage$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Variable*) $tmp255)));
org$frostlanguage$frostc$Variable* $tmp256 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local19) = ((org$frostlanguage$frostc$Variable*) $tmp255);
// line 107
org$frostlanguage$frostc$Variable* $tmp257 = *(&local19);
org$frostlanguage$frostc$Variable$Storage** $tmp258 = &$tmp257->storage;
org$frostlanguage$frostc$Variable$Storage* $tmp259 = *$tmp258;
frost$core$Int64* $tmp260 = &$tmp259->$rawValue;
frost$core$Int64 $tmp261 = *$tmp260;
frost$core$Int64 $tmp262 = (frost$core$Int64) {0};
frost$core$Bit $tmp263 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp261, $tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block44; else goto block45;
block44:;
// line 109
org$frostlanguage$frostc$lvalue$VariableLValue* $tmp265 = (org$frostlanguage$frostc$lvalue$VariableLValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlanguage$frostc$lvalue$VariableLValue$class);
org$frostlanguage$frostc$Position $tmp266 = *(&local16);
org$frostlanguage$frostc$Symbol* $tmp267 = *(&local18);
org$frostlanguage$frostc$lvalue$VariableLValue$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Variable($tmp265, param0, $tmp266, ((org$frostlanguage$frostc$Variable*) $tmp267));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$lvalue$LValue*) $tmp265)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
// unreffing REF($768:org.frostlanguage.frostc.lvalue.VariableLValue)
org$frostlanguage$frostc$Variable* $tmp268 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// unreffing v
*(&local19) = ((org$frostlanguage$frostc$Variable*) NULL);
org$frostlanguage$frostc$Symbol* $tmp269 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing symbol
*(&local18) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$String* $tmp270 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// unreffing id
*(&local17) = ((frost$core$String*) NULL);
return ((org$frostlanguage$frostc$lvalue$LValue*) $tmp265);
block45:;
// line 112
org$frostlanguage$frostc$Position $tmp271 = *(&local16);
org$frostlanguage$frostc$Variable* $tmp272 = *(&local19);
frost$core$String** $tmp273 = &((org$frostlanguage$frostc$Symbol*) $tmp272)->name;
frost$core$String* $tmp274 = *$tmp273;
frost$core$String* $tmp275 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s276, $tmp274);
frost$core$String* $tmp277 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp275, &$s278);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp271, $tmp277);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
// unreffing REF($802:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// unreffing REF($801:frost.core.String)
goto block43;
block43:;
org$frostlanguage$frostc$Variable* $tmp279 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
// unreffing v
*(&local19) = ((org$frostlanguage$frostc$Variable*) NULL);
goto block40;
block42:;
frost$core$Int64 $tmp280 = (frost$core$Int64) {2};
frost$core$Bit $tmp281 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp251, $tmp280);
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block46; else goto block40;
block46:;
// line 117
org$frostlanguage$frostc$Symbol* $tmp283 = *(&local18);
*(&local20) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FieldDecl*) $tmp283)));
org$frostlanguage$frostc$FieldDecl* $tmp284 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local20) = ((org$frostlanguage$frostc$FieldDecl*) $tmp283);
// line 118
org$frostlanguage$frostc$FieldDecl* $tmp285 = *(&local20);
org$frostlanguage$frostc$Annotations** $tmp286 = &$tmp285->annotations;
org$frostlanguage$frostc$Annotations* $tmp287 = *$tmp286;
frost$core$Bit $tmp288 = org$frostlanguage$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp287);
frost$core$Bit $tmp289 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp288);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block47; else goto block48;
block47:;
// line 119
org$frostlanguage$frostc$ASTNode* $tmp291 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp292 = (frost$core$Int64) {16};
org$frostlanguage$frostc$Position $tmp293 = *(&local16);
org$frostlanguage$frostc$ASTNode* $tmp294 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp295 = (frost$core$Int64) {40};
org$frostlanguage$frostc$Position $tmp296 = *(&local16);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position($tmp294, $tmp295, $tmp296);
org$frostlanguage$frostc$FieldDecl* $tmp297 = *(&local20);
frost$core$String** $tmp298 = &((org$frostlanguage$frostc$Symbol*) $tmp297)->name;
frost$core$String* $tmp299 = *$tmp298;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$frost$core$String($tmp291, $tmp292, $tmp293, $tmp294, $tmp299);
org$frostlanguage$frostc$lvalue$LValue* $tmp300 = org$frostlanguage$frostc$lvalue$LValue$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$lvalue$LValue$Q(param0, $tmp291);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
// unreffing REF($852:org.frostlanguage.frostc.lvalue.LValue?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
// unreffing REF($843:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
// unreffing REF($840:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$FieldDecl* $tmp301 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
// unreffing f
*(&local20) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
org$frostlanguage$frostc$Symbol* $tmp302 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// unreffing symbol
*(&local18) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$String* $tmp303 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// unreffing id
*(&local17) = ((frost$core$String*) NULL);
return $tmp300;
block48:;
// line 122
org$frostlanguage$frostc$FieldDecl* $tmp304 = *(&local20);
frost$core$Bit $tmp305 = org$frostlanguage$frostc$Compiler$resolve$org$frostlanguage$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp304);
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block49; else goto block50;
block49:;
// line 123
org$frostlanguage$frostc$lvalue$FieldLValue* $tmp307 = (org$frostlanguage$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlanguage$frostc$lvalue$FieldLValue$class);
org$frostlanguage$frostc$Position $tmp308 = *(&local16);
org$frostlanguage$frostc$FieldDecl* $tmp309 = *(&local20);
org$frostlanguage$frostc$lvalue$FieldLValue$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$FieldDecl($tmp307, param0, $tmp308, ((org$frostlanguage$frostc$IR$Value*) NULL), $tmp309);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$lvalue$LValue*) $tmp307)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
// unreffing REF($886:org.frostlanguage.frostc.lvalue.FieldLValue)
org$frostlanguage$frostc$FieldDecl* $tmp310 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
// unreffing f
*(&local20) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
org$frostlanguage$frostc$Symbol* $tmp311 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
// unreffing symbol
*(&local18) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$String* $tmp312 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
// unreffing id
*(&local17) = ((frost$core$String*) NULL);
return ((org$frostlanguage$frostc$lvalue$LValue*) $tmp307);
block50:;
// line 125
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$lvalue$LValue*) NULL)));
org$frostlanguage$frostc$FieldDecl* $tmp313 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
// unreffing f
*(&local20) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
org$frostlanguage$frostc$Symbol* $tmp314 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
// unreffing symbol
*(&local18) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$String* $tmp315 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
// unreffing id
*(&local17) = ((frost$core$String*) NULL);
return ((org$frostlanguage$frostc$lvalue$LValue*) NULL);
block40:;
goto block39;
block39:;
// line 129
org$frostlanguage$frostc$Position $tmp316 = *(&local16);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp316, &$s317);
// line 130
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$lvalue$LValue*) NULL)));
org$frostlanguage$frostc$Symbol* $tmp318 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// unreffing symbol
*(&local18) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$String* $tmp319 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
// unreffing id
*(&local17) = ((frost$core$String*) NULL);
return ((org$frostlanguage$frostc$lvalue$LValue*) NULL);
block1:;
// line 133
$fn321 $tmp320 = ($fn321) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp322 = $tmp320(param1);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp322, &$s323);
// line 134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$lvalue$LValue*) NULL)));
return ((org$frostlanguage$frostc$lvalue$LValue*) NULL);

}






