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
org$frostlang$frostc$lvalue$LValue$class_type org$frostlang$frostc$lvalue$LValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$LValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$convert$R$frost$core$String, frost$core$Object$cleanup, NULL, NULL, NULL} };

typedef frost$core$Bit (*$fn24)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn120)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn124)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Type* (*$fn170)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Position (*$fn216)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn233)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn242)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn361)(org$frostlang$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 34, -8655661972511047400, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x6f\x64\x69\x66\x79\x20\x76\x61\x6c\x75\x65\x20\x66\x69\x65\x6c\x64\x73\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 52, 2803094133346002974, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20", 31, -2978468964078965078, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x27", 18, 5927969463226965843, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x29", 33, 4023997240073892833, NULL };

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
frost$core$Int64 $tmp19 = (frost$core$Int64) {102};
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
frost$core$Bit $tmp142 = frost$core$Bit$init$builtin_bit($tmp141 != NULL);
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp144 = (frost$core$Int64) {62};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s145, $tmp144, &$s146);
abort(); // unreachable
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
org$frostlang$frostc$IR$Value* $tmp147 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
*(&local12) = $tmp141;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
// unreffing REF($363:org.frostlang.frostc.IR.Value?)
// line 63
org$frostlang$frostc$IR$Value* $tmp148 = *(&local12);
frost$core$Bit $tmp149 = frost$core$Bit$init$builtin_bit(false);
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block28; else goto block29;
block28:;
// line 64
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp151 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
// unreffing compiledBase
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp152 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp153 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing base
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block29:;
goto block22;
block22:;
goto block18;
block20:;
// line 69
org$frostlang$frostc$ASTNode* $tmp154 = *(&local10);
org$frostlang$frostc$IR$Value* $tmp155 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp154);
frost$core$Bit $tmp156 = frost$core$Bit$init$builtin_bit($tmp155 != NULL);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp158 = (frost$core$Int64) {69};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s159, $tmp158, &$s160);
abort(); // unreachable
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
org$frostlang$frostc$IR$Value* $tmp161 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local12) = $tmp155;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// unreffing REF($409:org.frostlang.frostc.IR.Value?)
// line 70
org$frostlang$frostc$IR$Value* $tmp162 = *(&local12);
frost$core$Bit $tmp163 = frost$core$Bit$init$builtin_bit(false);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block32; else goto block33;
block32:;
// line 71
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp165 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
// unreffing compiledBase
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp166 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp167 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
// unreffing base
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block33:;
goto block18;
block18:;
// line 75
org$frostlang$frostc$IR$Value* $tmp168 = *(&local12);
$fn170 $tmp169 = ($fn170) $tmp168->$class->vtable[2];
org$frostlang$frostc$Type* $tmp171 = $tmp169($tmp168);
org$frostlang$frostc$ClassDecl* $tmp172 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp171);
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
org$frostlang$frostc$ClassDecl* $tmp173 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
*(&local13) = $tmp172;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
// unreffing REF($456:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
// unreffing REF($455:org.frostlang.frostc.Type)
// line 76
org$frostlang$frostc$ClassDecl* $tmp174 = *(&local13);
frost$core$Bit $tmp175 = frost$core$Bit$init$builtin_bit($tmp174 == NULL);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block34; else goto block35;
block34:;
// line 77
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp177 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// unreffing cl
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp178 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
// unreffing compiledBase
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp179 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp180 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
// unreffing base
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block35:;
// line 79
org$frostlang$frostc$ClassDecl* $tmp181 = *(&local13);
frost$core$Bit $tmp182 = frost$core$Bit$init$builtin_bit($tmp181 != NULL);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp184 = (frost$core$Int64) {79};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s185, $tmp184, &$s186);
abort(); // unreachable
block36:;
org$frostlang$frostc$SymbolTable* $tmp187 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp181);
frost$core$String* $tmp188 = *(&local11);
org$frostlang$frostc$Symbol* $tmp189 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp187, $tmp188);
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
org$frostlang$frostc$Symbol* $tmp190 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local14) = $tmp189;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
// unreffing REF($512:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
// unreffing REF($510:org.frostlang.frostc.SymbolTable)
// line 80
org$frostlang$frostc$Symbol* $tmp191 = *(&local14);
frost$core$Bit $tmp192 = frost$core$Bit$init$builtin_bit($tmp191 != NULL);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block38; else goto block39;
block38:;
// line 81
org$frostlang$frostc$Symbol* $tmp194 = *(&local14);
frost$core$Bit $tmp195 = frost$core$Bit$init$builtin_bit($tmp194 != NULL);
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp197 = (frost$core$Int64) {81};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s198, $tmp197, &$s199);
abort(); // unreachable
block40:;
org$frostlang$frostc$Symbol$Kind* $tmp200 = &$tmp194->kind;
org$frostlang$frostc$Symbol$Kind $tmp201 = *$tmp200;
frost$core$Int64 $tmp202 = $tmp201.$rawValue;
frost$core$Int64 $tmp203 = (frost$core$Int64) {2};
frost$core$Bit $tmp204 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp202, $tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block43; else goto block44;
block43:;
// line 83
org$frostlang$frostc$Symbol* $tmp206 = *(&local14);
frost$core$Bit $tmp207 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$FieldDecl*) $tmp206));
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block45; else goto block46;
block45:;
// line 84
org$frostlang$frostc$Symbol* $tmp209 = *(&local14);
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp209)));
org$frostlang$frostc$FieldDecl* $tmp210 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) $tmp209);
// line 85
org$frostlang$frostc$FieldDecl* $tmp211 = *(&local15);
frost$core$Bit $tmp212 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp211);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block47; else goto block48;
block47:;
// line 86
org$frostlang$frostc$lvalue$FieldLValue* $tmp214 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
$fn216 $tmp215 = ($fn216) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp217 = $tmp215(param1);
org$frostlang$frostc$IR$Value* $tmp218 = *(&local12);
org$frostlang$frostc$FieldDecl* $tmp219 = *(&local15);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp214, param0, $tmp217, $tmp218, $tmp219);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp214)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// unreffing REF($571:org.frostlang.frostc.lvalue.FieldLValue)
org$frostlang$frostc$FieldDecl* $tmp220 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// unreffing f
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp221 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// unreffing symbol
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp222 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing cl
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp223 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// unreffing compiledBase
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp224 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp225 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// unreffing base
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp214);
block48:;
org$frostlang$frostc$FieldDecl* $tmp226 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// unreffing f
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block46;
block46:;
// line 89
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp227 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// unreffing symbol
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp228 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// unreffing cl
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp229 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
// unreffing compiledBase
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp230 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp231 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
// unreffing base
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block44:;
// line 92
$fn233 $tmp232 = ($fn233) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp234 = $tmp232(param1);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp234, &$s235);
// line 93
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp236 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// unreffing symbol
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp237 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing cl
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp238 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// unreffing compiledBase
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp239 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp240 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing base
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block42:;
goto block39;
block39:;
// line 97
$fn242 $tmp241 = ($fn242) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp243 = $tmp241(param1);
org$frostlang$frostc$ClassDecl* $tmp244 = *(&local13);
frost$core$Bit $tmp245 = frost$core$Bit$init$builtin_bit($tmp244 != NULL);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp247 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s248, $tmp247, &$s249);
abort(); // unreachable
block49:;
frost$core$String** $tmp250 = &$tmp244->name;
frost$core$String* $tmp251 = *$tmp250;
frost$core$String* $tmp252 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s253, $tmp251);
frost$core$String* $tmp254 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp252, &$s255);
frost$core$String* $tmp256 = *(&local11);
frost$core$String* $tmp257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s258, $tmp256);
frost$core$String* $tmp259 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp257, &$s260);
frost$core$String* $tmp261 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp254, $tmp259);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp243, $tmp261);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// unreffing REF($703:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// unreffing REF($702:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing REF($701:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
// unreffing REF($699:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing REF($698:frost.core.String)
// line 99
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp262 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
// unreffing symbol
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp263 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// unreffing cl
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp264 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// unreffing compiledBase
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp265 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp266 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// unreffing base
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block17:;
frost$core$Int64 $tmp267 = (frost$core$Int64) {22};
frost$core$Bit $tmp268 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp267);
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block51; else goto block1;
block51:;
org$frostlang$frostc$Position* $tmp270 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp271 = *$tmp270;
*(&local16) = $tmp271;
frost$core$String** $tmp272 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp273 = *$tmp272;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$String* $tmp274 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local17) = $tmp273;
// line 102
org$frostlang$frostc$SymbolTable** $tmp275 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp276 = *$tmp275;
frost$core$String* $tmp277 = *(&local17);
org$frostlang$frostc$Symbol* $tmp278 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp276, $tmp277);
*(&local18) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
org$frostlang$frostc$Symbol* $tmp279 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local18) = $tmp278;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
// unreffing REF($769:org.frostlang.frostc.Symbol?)
// line 103
org$frostlang$frostc$Symbol* $tmp280 = *(&local18);
frost$core$Bit $tmp281 = frost$core$Bit$init$builtin_bit($tmp280 != NULL);
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block52; else goto block53;
block52:;
// line 104
org$frostlang$frostc$Symbol* $tmp283 = *(&local18);
frost$core$Bit $tmp284 = frost$core$Bit$init$builtin_bit($tmp283 != NULL);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp286 = (frost$core$Int64) {104};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s287, $tmp286, &$s288);
abort(); // unreachable
block54:;
org$frostlang$frostc$Symbol$Kind* $tmp289 = &$tmp283->kind;
org$frostlang$frostc$Symbol$Kind $tmp290 = *$tmp289;
frost$core$Int64 $tmp291 = $tmp290.$rawValue;
frost$core$Int64 $tmp292 = (frost$core$Int64) {9};
frost$core$Bit $tmp293 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp291, $tmp292);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block57; else goto block58;
block57:;
// line 106
org$frostlang$frostc$Symbol* $tmp295 = *(&local18);
*(&local19) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Variable*) $tmp295)));
org$frostlang$frostc$Variable* $tmp296 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
*(&local19) = ((org$frostlang$frostc$Variable*) $tmp295);
// line 107
org$frostlang$frostc$Variable* $tmp297 = *(&local19);
org$frostlang$frostc$Variable$Storage** $tmp298 = &$tmp297->storage;
org$frostlang$frostc$Variable$Storage* $tmp299 = *$tmp298;
frost$core$Int64* $tmp300 = &$tmp299->$rawValue;
frost$core$Int64 $tmp301 = *$tmp300;
frost$core$Int64 $tmp302 = (frost$core$Int64) {0};
frost$core$Bit $tmp303 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp301, $tmp302);
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block60; else goto block61;
block60:;
// line 109
org$frostlang$frostc$lvalue$VariableLValue* $tmp305 = (org$frostlang$frostc$lvalue$VariableLValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$lvalue$VariableLValue$class);
org$frostlang$frostc$Position $tmp306 = *(&local16);
org$frostlang$frostc$Symbol* $tmp307 = *(&local18);
org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable($tmp305, param0, $tmp306, ((org$frostlang$frostc$Variable*) $tmp307));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp305)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
// unreffing REF($824:org.frostlang.frostc.lvalue.VariableLValue)
org$frostlang$frostc$Variable* $tmp308 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// unreffing v
*(&local19) = ((org$frostlang$frostc$Variable*) NULL);
org$frostlang$frostc$Symbol* $tmp309 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// unreffing symbol
*(&local18) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp310 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
// unreffing id
*(&local17) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp305);
block61:;
// line 112
org$frostlang$frostc$Position $tmp311 = *(&local16);
org$frostlang$frostc$Variable* $tmp312 = *(&local19);
frost$core$String** $tmp313 = &((org$frostlang$frostc$Symbol*) $tmp312)->name;
frost$core$String* $tmp314 = *$tmp313;
frost$core$String* $tmp315 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s316, $tmp314);
frost$core$String* $tmp317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp315, &$s318);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp311, $tmp317);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
// unreffing REF($858:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
// unreffing REF($857:frost.core.String)
goto block59;
block59:;
org$frostlang$frostc$Variable* $tmp319 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
// unreffing v
*(&local19) = ((org$frostlang$frostc$Variable*) NULL);
goto block56;
block58:;
frost$core$Int64 $tmp320 = (frost$core$Int64) {2};
frost$core$Bit $tmp321 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp291, $tmp320);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block62; else goto block56;
block62:;
// line 117
org$frostlang$frostc$Symbol* $tmp323 = *(&local18);
*(&local20) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp323)));
org$frostlang$frostc$FieldDecl* $tmp324 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local20) = ((org$frostlang$frostc$FieldDecl*) $tmp323);
// line 118
org$frostlang$frostc$FieldDecl* $tmp325 = *(&local20);
org$frostlang$frostc$Annotations** $tmp326 = &$tmp325->annotations;
org$frostlang$frostc$Annotations* $tmp327 = *$tmp326;
frost$core$Bit $tmp328 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp327);
frost$core$Bit $tmp329 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp328);
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block63; else goto block64;
block63:;
// line 119
org$frostlang$frostc$ASTNode* $tmp331 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp332 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp333 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp334 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp335 = (frost$core$Int64) {40};
org$frostlang$frostc$Position $tmp336 = *(&local16);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp334, $tmp335, $tmp336);
org$frostlang$frostc$FieldDecl* $tmp337 = *(&local20);
frost$core$String** $tmp338 = &((org$frostlang$frostc$Symbol*) $tmp337)->name;
frost$core$String* $tmp339 = *$tmp338;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp331, $tmp332, $tmp333, $tmp334, $tmp339);
org$frostlang$frostc$lvalue$LValue* $tmp340 = org$frostlang$frostc$lvalue$LValue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$lvalue$LValue$Q(param0, $tmp331);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
// unreffing REF($908:org.frostlang.frostc.lvalue.LValue?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
// unreffing REF($899:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// unreffing REF($896:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$FieldDecl* $tmp341 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
// unreffing f
*(&local20) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp342 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// unreffing symbol
*(&local18) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp343 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
// unreffing id
*(&local17) = ((frost$core$String*) NULL);
return $tmp340;
block64:;
// line 122
org$frostlang$frostc$FieldDecl* $tmp344 = *(&local20);
frost$core$Bit $tmp345 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp344);
bool $tmp346 = $tmp345.value;
if ($tmp346) goto block65; else goto block66;
block65:;
// line 123
org$frostlang$frostc$lvalue$FieldLValue* $tmp347 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
org$frostlang$frostc$Position $tmp348 = *(&local16);
org$frostlang$frostc$FieldDecl* $tmp349 = *(&local20);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp347, param0, $tmp348, ((org$frostlang$frostc$IR$Value*) NULL), $tmp349);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp347)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// unreffing REF($942:org.frostlang.frostc.lvalue.FieldLValue)
org$frostlang$frostc$FieldDecl* $tmp350 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
// unreffing f
*(&local20) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp351 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
// unreffing symbol
*(&local18) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp352 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
// unreffing id
*(&local17) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp347);
block66:;
// line 125
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$FieldDecl* $tmp353 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
// unreffing f
*(&local20) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp354 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
// unreffing symbol
*(&local18) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp355 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
// unreffing id
*(&local17) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block56:;
goto block53;
block53:;
// line 129
org$frostlang$frostc$Position $tmp356 = *(&local16);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp356, &$s357);
// line 130
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp358 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
// unreffing symbol
*(&local18) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp359 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
// unreffing id
*(&local17) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block1:;
// line 133
$fn361 $tmp360 = ($fn361) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp362 = $tmp360(param1);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp362, &$s363);
// line 134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
return ((org$frostlang$frostc$lvalue$LValue*) NULL);

}






