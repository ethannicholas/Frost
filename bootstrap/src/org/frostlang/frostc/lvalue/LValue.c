#include "org/frostlang/frostc/lvalue/LValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/Variable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/lvalue/IndexLValue.h"
#include "org/frostlang/frostc/lvalue/ChoiceFieldLValue.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/lvalue/FieldLValue.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/lvalue/VariableLValue.h"
#include "org/frostlang/frostc/Annotations.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$LValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { NULL, NULL, NULL} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$LValue$class_type org$frostlang$frostc$lvalue$LValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$LValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, NULL, NULL} };

typedef frost$core$Bit (*$fn24)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn120)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn124)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Type* (*$fn165)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Position (*$fn211)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn228)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn237)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn356)(org$frostlang$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 34, -8655661972511047400, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x6f\x64\x69\x66\x79\x20\x76\x61\x6c\x75\x65\x20\x66\x69\x65\x6c\x64\x73\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 52, 2803094133346002974, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20", 31, -2978468964078965078, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x27", 18, 5927969463226965843, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x29", 33, 4023997240073892833, NULL };

org$frostlang$frostc$lvalue$LValue* org$frostlang$frostc$lvalue$LValue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$lvalue$LValue$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1) {

org$frostlang$frostc$Position local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$parser$Token$Kind local2;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$Position local5;
org$frostlang$frostc$ASTNode* local6 = NULL;
org$frostlang$frostc$ChoiceCase* local7 = NULL;
frost$core$Int64 local8;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$ASTNode* local10 = NULL;
frost$core$String* local11 = NULL;
org$frostlang$frostc$IR$Value* local12 = NULL;
org$frostlang$frostc$ClassDecl* local13 = NULL;
org$frostlang$frostc$Symbol* local14 = NULL;
org$frostlang$frostc$FieldDecl* local15 = NULL;
org$frostlang$frostc$Position local16;
frost$core$String* local17 = NULL;
org$frostlang$frostc$Symbol* local18 = NULL;
org$frostlang$frostc$Variable* local19 = NULL;
org$frostlang$frostc$FieldDecl* local20 = NULL;
// line 32
frost$core$Int64* $tmp2 = &param1->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {5};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp7 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp8 = *$tmp7;
*(&local0) = $tmp8;
org$frostlang$frostc$ASTNode** $tmp9 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp10 = *$tmp9;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlang$frostc$ASTNode* $tmp11 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
*(&local1) = $tmp10;
org$frostlang$frostc$parser$Token$Kind* $tmp12 = (org$frostlang$frostc$parser$Token$Kind*) (param1->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp13 = *$tmp12;
*(&local2) = $tmp13;
org$frostlang$frostc$ASTNode** $tmp14 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp15 = *$tmp14;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
org$frostlang$frostc$ASTNode* $tmp16 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local3) = $tmp15;
// line 34
org$frostlang$frostc$parser$Token$Kind $tmp17 = *(&local2);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp18;
$tmp18 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp18->value = $tmp17;
frost$core$Int64 $tmp19 = (frost$core$Int64) {105};
org$frostlang$frostc$parser$Token$Kind $tmp20 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp19);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp21;
$tmp21 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
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
// unreffing REF($33:frost.core.Equatable<org.frostlang.frostc.parser.Token.Kind>)
if ($tmp26) goto block4; else goto block5;
block4:;
// line 35
org$frostlang$frostc$ASTNode* $tmp27 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp28 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp27);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
org$frostlang$frostc$IR$Value* $tmp29 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local4) = $tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing REF($50:org.frostlang.frostc.IR.Value?)
// line 36
org$frostlang$frostc$IR$Value* $tmp30 = *(&local4);
frost$core$Bit $tmp31 = frost$core$Bit$init$builtin_bit($tmp30 == NULL);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block6; else goto block7;
block6:;
// line 37
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp33 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing target
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp34 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing right
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp35 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing left
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block7:;
// line 39
org$frostlang$frostc$lvalue$IndexLValue* $tmp36 = (org$frostlang$frostc$lvalue$IndexLValue*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$lvalue$IndexLValue$class);
org$frostlang$frostc$Position $tmp37 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp38 = *(&local4);
frost$core$Bit $tmp39 = frost$core$Bit$init$builtin_bit($tmp38 != NULL);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp41 = (frost$core$Int64) {39};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s42, $tmp41, &$s43);
abort(); // unreachable
block8:;
org$frostlang$frostc$ASTNode* $tmp44 = *(&local3);
org$frostlang$frostc$lvalue$IndexLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ASTNode($tmp36, param0, $tmp37, $tmp38, $tmp44);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp36)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
// unreffing REF($87:org.frostlang.frostc.lvalue.IndexLValue)
org$frostlang$frostc$IR$Value* $tmp45 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// unreffing target
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp46 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// unreffing right
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp47 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// unreffing left
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp36);
block5:;
org$frostlang$frostc$ASTNode* $tmp48 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// unreffing right
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp49 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing left
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp50 = (frost$core$Int64) {11};
frost$core$Bit $tmp51 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp50);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp53 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp54 = *$tmp53;
*(&local5) = $tmp54;
org$frostlang$frostc$ASTNode** $tmp55 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp56 = *$tmp55;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
org$frostlang$frostc$ASTNode* $tmp57 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local6) = $tmp56;
org$frostlang$frostc$ChoiceCase** $tmp58 = (org$frostlang$frostc$ChoiceCase**) (param1->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp59 = *$tmp58;
*(&local7) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
org$frostlang$frostc$ChoiceCase* $tmp60 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local7) = $tmp59;
frost$core$Int64* $tmp61 = (frost$core$Int64*) (param1->$data + 32);
frost$core$Int64 $tmp62 = *$tmp61;
*(&local8) = $tmp62;
// line 43
org$frostlang$frostc$ASTNode* $tmp63 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp64 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp63);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
org$frostlang$frostc$IR$Value* $tmp65 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local9) = $tmp64;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing REF($163:org.frostlang.frostc.IR.Value?)
// line 44
org$frostlang$frostc$IR$Value* $tmp66 = *(&local9);
frost$core$Bit $tmp67 = frost$core$Bit$init$builtin_bit($tmp66 == NULL);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block12; else goto block13;
block12:;
// line 45
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp69 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing compiledBase
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ChoiceCase* $tmp70 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// unreffing cc
*(&local7) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp71 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing base
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block13:;
// line 47
org$frostlang$frostc$lvalue$ChoiceFieldLValue* $tmp72 = (org$frostlang$frostc$lvalue$ChoiceFieldLValue*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$lvalue$ChoiceFieldLValue$class);
org$frostlang$frostc$Position $tmp73 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp74 = *(&local9);
frost$core$Bit $tmp75 = frost$core$Bit$init$builtin_bit($tmp74 != NULL);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp77 = (frost$core$Int64) {47};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s78, $tmp77, &$s79);
abort(); // unreachable
block14:;
org$frostlang$frostc$ChoiceCase* $tmp80 = *(&local7);
frost$core$Int64 $tmp81 = *(&local8);
org$frostlang$frostc$lvalue$ChoiceFieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp72, param0, $tmp73, $tmp74, $tmp80, $tmp81);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp72)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing REF($200:org.frostlang.frostc.lvalue.ChoiceFieldLValue)
org$frostlang$frostc$IR$Value* $tmp82 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// unreffing compiledBase
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ChoiceCase* $tmp83 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing cc
*(&local7) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp84 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// unreffing base
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp72);
block11:;
frost$core$Int64 $tmp85 = (frost$core$Int64) {16};
frost$core$Bit $tmp86 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp85);
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp88 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp89 = *$tmp88;
org$frostlang$frostc$ASTNode** $tmp90 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp91 = *$tmp90;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
org$frostlang$frostc$ASTNode* $tmp92 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local10) = $tmp91;
frost$core$String** $tmp93 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp94 = *$tmp93;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$String* $tmp95 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local11) = $tmp94;
// line 50
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 51
org$frostlang$frostc$ASTNode* $tmp96 = *(&local10);
frost$core$Int64* $tmp97 = &$tmp96->$rawValue;
frost$core$Int64 $tmp98 = *$tmp97;
frost$core$Int64 $tmp99 = (frost$core$Int64) {40};
frost$core$Bit $tmp100 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp98, $tmp99);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block19; else goto block20;
block19:;
// line 53
frost$collections$Stack** $tmp102 = &param0->currentClass;
frost$collections$Stack* $tmp103 = *$tmp102;
frost$core$Int64 $tmp104 = (frost$core$Int64) {0};
frost$core$Object* $tmp105 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp103, $tmp104);
frost$core$Bit $tmp106 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp105));
bool $tmp107 = $tmp106.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp105);
// unreffing REF($275:frost.collections.Stack.T)
if ($tmp107) goto block21; else goto block23;
block21:;
// line 54
frost$collections$Stack** $tmp108 = &param0->currentMethod;
frost$collections$Stack* $tmp109 = *$tmp108;
frost$core$Int64 $tmp110 = (frost$core$Int64) {0};
frost$core$Object* $tmp111 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp109, $tmp110);
org$frostlang$frostc$MethodDecl$Kind* $tmp112 = &((org$frostlang$frostc$MethodDecl*) $tmp111)->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp113 = *$tmp112;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp114;
$tmp114 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp114->value = $tmp113;
frost$core$Int64 $tmp115 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp116 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp115);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp117;
$tmp117 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp117->value = $tmp116;
ITable* $tmp118 = ((frost$core$Equatable*) $tmp114)->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
frost$core$Bit $tmp121 = $tmp119(((frost$core$Equatable*) $tmp114), ((frost$core$Equatable*) $tmp117));
bool $tmp122 = $tmp121.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp117)));
// unreffing REF($297:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp114)));
// unreffing REF($293:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
frost$core$Frost$unref$frost$core$Object$Q($tmp111);
// unreffing REF($289:frost.collections.Stack.T)
if ($tmp122) goto block24; else goto block25;
block24:;
// line 55
$fn124 $tmp123 = ($fn124) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp125 = $tmp123(param1);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp125, &$s126);
// line 57
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp127 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// unreffing compiledBase
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp128 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp129 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
// unreffing base
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block25:;
// line 59
org$frostlang$frostc$IR$Value* $tmp130 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp131 = (frost$core$Int64) {2};
frost$core$Int64 $tmp132 = (frost$core$Int64) {0};
frost$collections$Stack** $tmp133 = &param0->currentClass;
frost$collections$Stack* $tmp134 = *$tmp133;
frost$core$Int64 $tmp135 = (frost$core$Int64) {0};
frost$core$Object* $tmp136 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp134, $tmp135);
org$frostlang$frostc$Type** $tmp137 = &((org$frostlang$frostc$ClassDecl*) $tmp136)->type;
org$frostlang$frostc$Type* $tmp138 = *$tmp137;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp130, $tmp131, $tmp132, $tmp138);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
org$frostlang$frostc$IR$Value* $tmp139 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local12) = $tmp130;
frost$core$Frost$unref$frost$core$Object$Q($tmp136);
// unreffing REF($342:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// unreffing REF($335:org.frostlang.frostc.IR.Value)
goto block22;
block23:;
// line 1
// line 62
org$frostlang$frostc$ASTNode* $tmp140 = *(&local10);
org$frostlang$frostc$IR$Value* $tmp141 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp140);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
org$frostlang$frostc$IR$Value* $tmp142 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local12) = $tmp141;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
// unreffing REF($364:org.frostlang.frostc.IR.Value?)
// line 63
org$frostlang$frostc$IR$Value* $tmp143 = *(&local12);
frost$core$Bit $tmp144 = frost$core$Bit$init$builtin_bit($tmp143 == NULL);
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block26; else goto block27;
block26:;
// line 64
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp146 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
// unreffing compiledBase
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp147 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp148 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// unreffing base
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block27:;
goto block22;
block22:;
goto block18;
block20:;
// line 69
org$frostlang$frostc$ASTNode* $tmp149 = *(&local10);
org$frostlang$frostc$IR$Value* $tmp150 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp149);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
org$frostlang$frostc$IR$Value* $tmp151 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
*(&local12) = $tmp150;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
// unreffing REF($403:org.frostlang.frostc.IR.Value?)
// line 70
org$frostlang$frostc$IR$Value* $tmp152 = *(&local12);
frost$core$Bit $tmp153 = frost$core$Bit$init$builtin_bit($tmp152 == NULL);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block28; else goto block29;
block28:;
// line 71
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp155 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// unreffing compiledBase
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp156 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp157 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// unreffing base
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block29:;
goto block18;
block18:;
// line 75
org$frostlang$frostc$IR$Value* $tmp158 = *(&local12);
frost$core$Bit $tmp159 = frost$core$Bit$init$builtin_bit($tmp158 != NULL);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp161 = (frost$core$Int64) {75};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s162, $tmp161, &$s163);
abort(); // unreachable
block30:;
$fn165 $tmp164 = ($fn165) $tmp158->$class->vtable[2];
org$frostlang$frostc$Type* $tmp166 = $tmp164($tmp158);
org$frostlang$frostc$ClassDecl* $tmp167 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp166);
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
org$frostlang$frostc$ClassDecl* $tmp168 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local13) = $tmp167;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
// unreffing REF($451:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
// unreffing REF($450:org.frostlang.frostc.Type)
// line 76
org$frostlang$frostc$ClassDecl* $tmp169 = *(&local13);
frost$core$Bit $tmp170 = frost$core$Bit$init$builtin_bit($tmp169 == NULL);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block32; else goto block33;
block32:;
// line 77
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp172 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
// unreffing cl
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp173 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
// unreffing compiledBase
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp174 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp175 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// unreffing base
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block33:;
// line 79
org$frostlang$frostc$ClassDecl* $tmp176 = *(&local13);
frost$core$Bit $tmp177 = frost$core$Bit$init$builtin_bit($tmp176 != NULL);
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp179 = (frost$core$Int64) {79};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s180, $tmp179, &$s181);
abort(); // unreachable
block34:;
org$frostlang$frostc$SymbolTable* $tmp182 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp176);
frost$core$String* $tmp183 = *(&local11);
org$frostlang$frostc$Symbol* $tmp184 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp182, $tmp183);
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
org$frostlang$frostc$Symbol* $tmp185 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local14) = $tmp184;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// unreffing REF($507:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// unreffing REF($505:org.frostlang.frostc.SymbolTable)
// line 80
org$frostlang$frostc$Symbol* $tmp186 = *(&local14);
frost$core$Bit $tmp187 = frost$core$Bit$init$builtin_bit($tmp186 != NULL);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block36; else goto block37;
block36:;
// line 81
org$frostlang$frostc$Symbol* $tmp189 = *(&local14);
frost$core$Bit $tmp190 = frost$core$Bit$init$builtin_bit($tmp189 != NULL);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp192 = (frost$core$Int64) {81};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s193, $tmp192, &$s194);
abort(); // unreachable
block38:;
org$frostlang$frostc$Symbol$Kind* $tmp195 = &$tmp189->kind;
org$frostlang$frostc$Symbol$Kind $tmp196 = *$tmp195;
frost$core$Int64 $tmp197 = $tmp196.$rawValue;
frost$core$Int64 $tmp198 = (frost$core$Int64) {2};
frost$core$Bit $tmp199 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp197, $tmp198);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block41; else goto block42;
block41:;
// line 83
org$frostlang$frostc$Symbol* $tmp201 = *(&local14);
frost$core$Bit $tmp202 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$FieldDecl*) $tmp201));
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block43; else goto block44;
block43:;
// line 84
org$frostlang$frostc$Symbol* $tmp204 = *(&local14);
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp204)));
org$frostlang$frostc$FieldDecl* $tmp205 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) $tmp204);
// line 85
org$frostlang$frostc$FieldDecl* $tmp206 = *(&local15);
frost$core$Bit $tmp207 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp206);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block45; else goto block46;
block45:;
// line 86
org$frostlang$frostc$lvalue$FieldLValue* $tmp209 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
$fn211 $tmp210 = ($fn211) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp212 = $tmp210(param1);
org$frostlang$frostc$IR$Value* $tmp213 = *(&local12);
org$frostlang$frostc$FieldDecl* $tmp214 = *(&local15);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp209, param0, $tmp212, $tmp213, $tmp214);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp209)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
// unreffing REF($566:org.frostlang.frostc.lvalue.FieldLValue)
org$frostlang$frostc$FieldDecl* $tmp215 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
// unreffing f
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp216 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// unreffing symbol
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp217 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing cl
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp218 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
// unreffing compiledBase
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp219 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp220 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// unreffing base
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp209);
block46:;
org$frostlang$frostc$FieldDecl* $tmp221 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// unreffing f
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block44;
block44:;
// line 89
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp222 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing symbol
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp223 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// unreffing cl
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp224 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing compiledBase
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp225 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp226 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// unreffing base
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block42:;
// line 92
$fn228 $tmp227 = ($fn228) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp229 = $tmp227(param1);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp229, &$s230);
// line 93
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp231 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
// unreffing symbol
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp232 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
// unreffing cl
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp233 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
// unreffing compiledBase
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp234 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp235 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing base
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block40:;
goto block37;
block37:;
// line 97
$fn237 $tmp236 = ($fn237) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp238 = $tmp236(param1);
org$frostlang$frostc$ClassDecl* $tmp239 = *(&local13);
frost$core$Bit $tmp240 = frost$core$Bit$init$builtin_bit($tmp239 != NULL);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp242 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s243, $tmp242, &$s244);
abort(); // unreachable
block47:;
frost$core$String** $tmp245 = &$tmp239->name;
frost$core$String* $tmp246 = *$tmp245;
frost$core$String* $tmp247 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s248, $tmp246);
frost$core$String* $tmp249 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp247, &$s250);
frost$core$String* $tmp251 = *(&local11);
frost$core$String* $tmp252 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s253, $tmp251);
frost$core$String* $tmp254 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp252, &$s255);
frost$core$String* $tmp256 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp249, $tmp254);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp238, $tmp256);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// unreffing REF($697:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
// unreffing REF($696:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing REF($695:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
// unreffing REF($693:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// unreffing REF($692:frost.core.String)
// line 99
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp257 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing symbol
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp258 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing cl
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp259 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// unreffing compiledBase
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp260 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp261 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// unreffing base
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block17:;
frost$core$Int64 $tmp262 = (frost$core$Int64) {22};
frost$core$Bit $tmp263 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block49; else goto block1;
block49:;
org$frostlang$frostc$Position* $tmp265 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp266 = *$tmp265;
*(&local16) = $tmp266;
frost$core$String** $tmp267 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp268 = *$tmp267;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$String* $tmp269 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local17) = $tmp268;
// line 102
org$frostlang$frostc$SymbolTable** $tmp270 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp271 = *$tmp270;
frost$core$String* $tmp272 = *(&local17);
org$frostlang$frostc$Symbol* $tmp273 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp271, $tmp272);
*(&local18) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
org$frostlang$frostc$Symbol* $tmp274 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local18) = $tmp273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// unreffing REF($763:org.frostlang.frostc.Symbol?)
// line 103
org$frostlang$frostc$Symbol* $tmp275 = *(&local18);
frost$core$Bit $tmp276 = frost$core$Bit$init$builtin_bit($tmp275 != NULL);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block50; else goto block51;
block50:;
// line 104
org$frostlang$frostc$Symbol* $tmp278 = *(&local18);
frost$core$Bit $tmp279 = frost$core$Bit$init$builtin_bit($tmp278 != NULL);
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block52; else goto block53;
block53:;
frost$core$Int64 $tmp281 = (frost$core$Int64) {104};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s282, $tmp281, &$s283);
abort(); // unreachable
block52:;
org$frostlang$frostc$Symbol$Kind* $tmp284 = &$tmp278->kind;
org$frostlang$frostc$Symbol$Kind $tmp285 = *$tmp284;
frost$core$Int64 $tmp286 = $tmp285.$rawValue;
frost$core$Int64 $tmp287 = (frost$core$Int64) {9};
frost$core$Bit $tmp288 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp286, $tmp287);
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block55; else goto block56;
block55:;
// line 106
org$frostlang$frostc$Symbol* $tmp290 = *(&local18);
*(&local19) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Variable*) $tmp290)));
org$frostlang$frostc$Variable* $tmp291 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local19) = ((org$frostlang$frostc$Variable*) $tmp290);
// line 107
org$frostlang$frostc$Variable* $tmp292 = *(&local19);
org$frostlang$frostc$Variable$Storage** $tmp293 = &$tmp292->storage;
org$frostlang$frostc$Variable$Storage* $tmp294 = *$tmp293;
frost$core$Int64* $tmp295 = &$tmp294->$rawValue;
frost$core$Int64 $tmp296 = *$tmp295;
frost$core$Int64 $tmp297 = (frost$core$Int64) {0};
frost$core$Bit $tmp298 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp296, $tmp297);
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block58; else goto block59;
block58:;
// line 109
org$frostlang$frostc$lvalue$VariableLValue* $tmp300 = (org$frostlang$frostc$lvalue$VariableLValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$lvalue$VariableLValue$class);
org$frostlang$frostc$Position $tmp301 = *(&local16);
org$frostlang$frostc$Symbol* $tmp302 = *(&local18);
org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable($tmp300, param0, $tmp301, ((org$frostlang$frostc$Variable*) $tmp302));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp300)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
// unreffing REF($818:org.frostlang.frostc.lvalue.VariableLValue)
org$frostlang$frostc$Variable* $tmp303 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// unreffing v
*(&local19) = ((org$frostlang$frostc$Variable*) NULL);
org$frostlang$frostc$Symbol* $tmp304 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// unreffing symbol
*(&local18) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp305 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
// unreffing id
*(&local17) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp300);
block59:;
// line 112
org$frostlang$frostc$Position $tmp306 = *(&local16);
org$frostlang$frostc$Variable* $tmp307 = *(&local19);
frost$core$String** $tmp308 = &((org$frostlang$frostc$Symbol*) $tmp307)->name;
frost$core$String* $tmp309 = *$tmp308;
frost$core$String* $tmp310 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s311, $tmp309);
frost$core$String* $tmp312 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp310, &$s313);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp306, $tmp312);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
// unreffing REF($852:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
// unreffing REF($851:frost.core.String)
goto block57;
block57:;
org$frostlang$frostc$Variable* $tmp314 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
// unreffing v
*(&local19) = ((org$frostlang$frostc$Variable*) NULL);
goto block54;
block56:;
frost$core$Int64 $tmp315 = (frost$core$Int64) {2};
frost$core$Bit $tmp316 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp286, $tmp315);
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block60; else goto block54;
block60:;
// line 117
org$frostlang$frostc$Symbol* $tmp318 = *(&local18);
*(&local20) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp318)));
org$frostlang$frostc$FieldDecl* $tmp319 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local20) = ((org$frostlang$frostc$FieldDecl*) $tmp318);
// line 118
org$frostlang$frostc$FieldDecl* $tmp320 = *(&local20);
org$frostlang$frostc$Annotations** $tmp321 = &$tmp320->annotations;
org$frostlang$frostc$Annotations* $tmp322 = *$tmp321;
frost$core$Bit $tmp323 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp322);
frost$core$Bit $tmp324 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp323);
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block61; else goto block62;
block61:;
// line 119
org$frostlang$frostc$ASTNode* $tmp326 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp327 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp328 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp329 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp330 = (frost$core$Int64) {40};
org$frostlang$frostc$Position $tmp331 = *(&local16);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp329, $tmp330, $tmp331);
org$frostlang$frostc$FieldDecl* $tmp332 = *(&local20);
frost$core$String** $tmp333 = &((org$frostlang$frostc$Symbol*) $tmp332)->name;
frost$core$String* $tmp334 = *$tmp333;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp326, $tmp327, $tmp328, $tmp329, $tmp334);
org$frostlang$frostc$lvalue$LValue* $tmp335 = org$frostlang$frostc$lvalue$LValue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$lvalue$LValue$Q(param0, $tmp326);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
// unreffing REF($902:org.frostlang.frostc.lvalue.LValue?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
// unreffing REF($893:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
// unreffing REF($890:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$FieldDecl* $tmp336 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
// unreffing f
*(&local20) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp337 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing symbol
*(&local18) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp338 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// unreffing id
*(&local17) = ((frost$core$String*) NULL);
return $tmp335;
block62:;
// line 122
org$frostlang$frostc$FieldDecl* $tmp339 = *(&local20);
frost$core$Bit $tmp340 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp339);
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block63; else goto block64;
block63:;
// line 123
org$frostlang$frostc$lvalue$FieldLValue* $tmp342 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
org$frostlang$frostc$Position $tmp343 = *(&local16);
org$frostlang$frostc$FieldDecl* $tmp344 = *(&local20);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp342, param0, $tmp343, ((org$frostlang$frostc$IR$Value*) NULL), $tmp344);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp342)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// unreffing REF($936:org.frostlang.frostc.lvalue.FieldLValue)
org$frostlang$frostc$FieldDecl* $tmp345 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// unreffing f
*(&local20) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp346 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
// unreffing symbol
*(&local18) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp347 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// unreffing id
*(&local17) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp342);
block64:;
// line 125
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$FieldDecl* $tmp348 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
// unreffing f
*(&local20) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp349 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
// unreffing symbol
*(&local18) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp350 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
// unreffing id
*(&local17) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block54:;
goto block51;
block51:;
// line 129
org$frostlang$frostc$Position $tmp351 = *(&local16);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp351, &$s352);
// line 130
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp353 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
// unreffing symbol
*(&local18) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp354 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
// unreffing id
*(&local17) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block1:;
// line 133
$fn356 $tmp355 = ($fn356) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp357 = $tmp355(param1);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp357, &$s358);
// line 134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
return ((org$frostlang$frostc$lvalue$LValue*) NULL);

}






