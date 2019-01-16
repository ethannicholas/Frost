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
typedef panda$core$Bit (*$fn120)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn124)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn170)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Position (*$fn216)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn233)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn242)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn361)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 38, 296665589507882398, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x6f\x64\x69\x66\x79\x20\x76\x61\x6c\x75\x65\x20\x66\x69\x65\x6c\x64\x73\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 52, 2803094133346002974, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20", 31, -2978468964078965078, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x27", 18, 5927969463226965843, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x29", 33, 4023997240073892833, NULL };

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
$tmp18 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp18->value = $tmp17;
panda$core$Int64 $tmp19 = (panda$core$Int64) {102};
org$pandalanguage$pandac$parser$Token$Kind $tmp20 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp19);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp21;
$tmp21 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
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
org$pandalanguage$pandac$lvalue$IndexLValue* $tmp36 = (org$pandalanguage$pandac$lvalue$IndexLValue*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$lvalue$IndexLValue$class);
org$pandalanguage$pandac$Position $tmp37 = *(&local0);
org$pandalanguage$pandac$IR$Value* $tmp38 = *(&local4);
panda$core$Bit $tmp39 = panda$core$Bit$init$builtin_bit($tmp38 != NULL);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp41 = (panda$core$Int64) {39};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s42, $tmp41, &$s43);
abort(); // unreachable
block8:;
org$pandalanguage$pandac$ASTNode* $tmp44 = *(&local3);
org$pandalanguage$pandac$lvalue$IndexLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ASTNode($tmp36, param0, $tmp37, $tmp38, $tmp44);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) $tmp36)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
// unreffing REF($87:org.pandalanguage.pandac.lvalue.IndexLValue)
org$pandalanguage$pandac$IR$Value* $tmp45 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
// unreffing target
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp46 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp47 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing left
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) $tmp36);
block5:;
org$pandalanguage$pandac$ASTNode* $tmp48 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp49 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing left
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp50 = (panda$core$Int64) {11};
panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp50);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp53 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp54 = *$tmp53;
*(&local5) = $tmp54;
org$pandalanguage$pandac$ASTNode** $tmp55 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp56 = *$tmp55;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
org$pandalanguage$pandac$ASTNode* $tmp57 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
*(&local6) = $tmp56;
org$pandalanguage$pandac$ChoiceCase** $tmp58 = (org$pandalanguage$pandac$ChoiceCase**) (param1->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp59 = *$tmp58;
*(&local7) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
org$pandalanguage$pandac$ChoiceCase* $tmp60 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
*(&local7) = $tmp59;
panda$core$Int64* $tmp61 = (panda$core$Int64*) (param1->$data + 32);
panda$core$Int64 $tmp62 = *$tmp61;
*(&local8) = $tmp62;
// line 43
org$pandalanguage$pandac$ASTNode* $tmp63 = *(&local6);
org$pandalanguage$pandac$IR$Value* $tmp64 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp63);
*(&local9) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
org$pandalanguage$pandac$IR$Value* $tmp65 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
*(&local9) = $tmp64;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing REF($163:org.pandalanguage.pandac.IR.Value?)
// line 44
org$pandalanguage$pandac$IR$Value* $tmp66 = *(&local9);
panda$core$Bit $tmp67 = panda$core$Bit$init$builtin_bit($tmp66 == NULL);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block12; else goto block13;
block12:;
// line 45
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp69 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing compiledBase
*(&local9) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ChoiceCase* $tmp70 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
// unreffing cc
*(&local7) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp71 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
// unreffing base
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block13:;
// line 47
org$pandalanguage$pandac$lvalue$ChoiceFieldLValue* $tmp72 = (org$pandalanguage$pandac$lvalue$ChoiceFieldLValue*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$class);
org$pandalanguage$pandac$Position $tmp73 = *(&local5);
org$pandalanguage$pandac$IR$Value* $tmp74 = *(&local9);
panda$core$Bit $tmp75 = panda$core$Bit$init$builtin_bit($tmp74 != NULL);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp77 = (panda$core$Int64) {47};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s78, $tmp77, &$s79);
abort(); // unreachable
block14:;
org$pandalanguage$pandac$ChoiceCase* $tmp80 = *(&local7);
panda$core$Int64 $tmp81 = *(&local8);
org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64($tmp72, param0, $tmp73, $tmp74, $tmp80, $tmp81);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) $tmp72)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing REF($200:org.pandalanguage.pandac.lvalue.ChoiceFieldLValue)
org$pandalanguage$pandac$IR$Value* $tmp82 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// unreffing compiledBase
*(&local9) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ChoiceCase* $tmp83 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing cc
*(&local7) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp84 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing base
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) $tmp72);
block11:;
panda$core$Int64 $tmp85 = (panda$core$Int64) {16};
panda$core$Bit $tmp86 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp85);
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp88 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp89 = *$tmp88;
org$pandalanguage$pandac$ASTNode** $tmp90 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp91 = *$tmp90;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
org$pandalanguage$pandac$ASTNode* $tmp92 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
*(&local10) = $tmp91;
panda$core$String** $tmp93 = (panda$core$String**) (param1->$data + 24);
panda$core$String* $tmp94 = *$tmp93;
*(&local11) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
panda$core$String* $tmp95 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
*(&local11) = $tmp94;
// line 50
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 51
org$pandalanguage$pandac$ASTNode* $tmp96 = *(&local10);
panda$core$Int64* $tmp97 = &$tmp96->$rawValue;
panda$core$Int64 $tmp98 = *$tmp97;
panda$core$Int64 $tmp99 = (panda$core$Int64) {40};
panda$core$Bit $tmp100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp98, $tmp99);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block19; else goto block20;
block19:;
// line 53
panda$collections$Stack** $tmp102 = &param0->currentClass;
panda$collections$Stack* $tmp103 = *$tmp102;
panda$core$Int64 $tmp104 = (panda$core$Int64) {0};
panda$core$Object* $tmp105 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp103, $tmp104);
panda$core$Bit $tmp106 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp105));
bool $tmp107 = $tmp106.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp105);
// unreffing REF($275:panda.collections.Stack.T)
if ($tmp107) goto block21; else goto block23;
block21:;
// line 54
panda$collections$Stack** $tmp108 = &param0->currentMethod;
panda$collections$Stack* $tmp109 = *$tmp108;
panda$core$Int64 $tmp110 = (panda$core$Int64) {0};
panda$core$Object* $tmp111 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp109, $tmp110);
org$pandalanguage$pandac$MethodDecl$Kind* $tmp112 = &((org$pandalanguage$pandac$MethodDecl*) $tmp111)->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp113 = *$tmp112;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp114;
$tmp114 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp114->value = $tmp113;
panda$core$Int64 $tmp115 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp116 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp115);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp117;
$tmp117 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp117->value = $tmp116;
ITable* $tmp118 = ((panda$core$Equatable*) $tmp114)->$class->itable;
while ($tmp118->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
panda$core$Bit $tmp121 = $tmp119(((panda$core$Equatable*) $tmp114), ((panda$core$Equatable*) $tmp117));
bool $tmp122 = $tmp121.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp117)));
// unreffing REF($297:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp114)));
// unreffing REF($293:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
panda$core$Panda$unref$panda$core$Object$Q($tmp111);
// unreffing REF($289:panda.collections.Stack.T)
if ($tmp122) goto block24; else goto block25;
block24:;
// line 55
$fn124 $tmp123 = ($fn124) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp125 = $tmp123(param1);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp125, &$s126);
// line 57
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp127 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
// unreffing compiledBase
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$String* $tmp128 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp129 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
// unreffing base
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block25:;
// line 59
org$pandalanguage$pandac$IR$Value* $tmp130 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp131 = (panda$core$Int64) {2};
panda$core$Int64 $tmp132 = (panda$core$Int64) {0};
panda$collections$Stack** $tmp133 = &param0->currentClass;
panda$collections$Stack* $tmp134 = *$tmp133;
panda$core$Int64 $tmp135 = (panda$core$Int64) {0};
panda$core$Object* $tmp136 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp134, $tmp135);
org$pandalanguage$pandac$Type** $tmp137 = &((org$pandalanguage$pandac$ClassDecl*) $tmp136)->type;
org$pandalanguage$pandac$Type* $tmp138 = *$tmp137;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp130, $tmp131, $tmp132, $tmp138);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
org$pandalanguage$pandac$IR$Value* $tmp139 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
*(&local12) = $tmp130;
panda$core$Panda$unref$panda$core$Object$Q($tmp136);
// unreffing REF($342:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
// unreffing REF($335:org.pandalanguage.pandac.IR.Value)
goto block22;
block23:;
// line 1
// line 62
org$pandalanguage$pandac$ASTNode* $tmp140 = *(&local10);
org$pandalanguage$pandac$IR$Value* $tmp141 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp140);
panda$core$Bit $tmp142 = panda$core$Bit$init$builtin_bit($tmp141 != NULL);
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp144 = (panda$core$Int64) {62};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s145, $tmp144, &$s146);
abort(); // unreachable
block26:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
org$pandalanguage$pandac$IR$Value* $tmp147 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
*(&local12) = $tmp141;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
// unreffing REF($363:org.pandalanguage.pandac.IR.Value?)
// line 63
org$pandalanguage$pandac$IR$Value* $tmp148 = *(&local12);
panda$core$Bit $tmp149 = panda$core$Bit$init$builtin_bit(false);
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block28; else goto block29;
block28:;
// line 64
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp151 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
// unreffing compiledBase
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$String* $tmp152 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp153 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// unreffing base
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block29:;
goto block22;
block22:;
goto block18;
block20:;
// line 69
org$pandalanguage$pandac$ASTNode* $tmp154 = *(&local10);
org$pandalanguage$pandac$IR$Value* $tmp155 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp154);
panda$core$Bit $tmp156 = panda$core$Bit$init$builtin_bit($tmp155 != NULL);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block30; else goto block31;
block31:;
panda$core$Int64 $tmp158 = (panda$core$Int64) {69};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s159, $tmp158, &$s160);
abort(); // unreachable
block30:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
org$pandalanguage$pandac$IR$Value* $tmp161 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
*(&local12) = $tmp155;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
// unreffing REF($409:org.pandalanguage.pandac.IR.Value?)
// line 70
org$pandalanguage$pandac$IR$Value* $tmp162 = *(&local12);
panda$core$Bit $tmp163 = panda$core$Bit$init$builtin_bit(false);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block32; else goto block33;
block32:;
// line 71
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp165 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
// unreffing compiledBase
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$String* $tmp166 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp167 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
// unreffing base
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block33:;
goto block18;
block18:;
// line 75
org$pandalanguage$pandac$IR$Value* $tmp168 = *(&local12);
$fn170 $tmp169 = ($fn170) $tmp168->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp171 = $tmp169($tmp168);
org$pandalanguage$pandac$ClassDecl* $tmp172 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp171);
*(&local13) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
org$pandalanguage$pandac$ClassDecl* $tmp173 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
*(&local13) = $tmp172;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
// unreffing REF($456:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
// unreffing REF($455:org.pandalanguage.pandac.Type)
// line 76
org$pandalanguage$pandac$ClassDecl* $tmp174 = *(&local13);
panda$core$Bit $tmp175 = panda$core$Bit$init$builtin_bit($tmp174 == NULL);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block34; else goto block35;
block34:;
// line 77
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp177 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
// unreffing cl
*(&local13) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp178 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
// unreffing compiledBase
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$String* $tmp179 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp180 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
// unreffing base
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block35:;
// line 79
org$pandalanguage$pandac$ClassDecl* $tmp181 = *(&local13);
panda$core$Bit $tmp182 = panda$core$Bit$init$builtin_bit($tmp181 != NULL);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp184 = (panda$core$Int64) {79};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s185, $tmp184, &$s186);
abort(); // unreachable
block36:;
org$pandalanguage$pandac$SymbolTable* $tmp187 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp181);
panda$core$String* $tmp188 = *(&local11);
org$pandalanguage$pandac$Symbol* $tmp189 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp187, $tmp188);
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
org$pandalanguage$pandac$Symbol* $tmp190 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
*(&local14) = $tmp189;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
// unreffing REF($512:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
// unreffing REF($510:org.pandalanguage.pandac.SymbolTable)
// line 80
org$pandalanguage$pandac$Symbol* $tmp191 = *(&local14);
panda$core$Bit $tmp192 = panda$core$Bit$init$builtin_bit($tmp191 != NULL);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block38; else goto block39;
block38:;
// line 81
org$pandalanguage$pandac$Symbol* $tmp194 = *(&local14);
panda$core$Bit $tmp195 = panda$core$Bit$init$builtin_bit($tmp194 != NULL);
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block40; else goto block41;
block41:;
panda$core$Int64 $tmp197 = (panda$core$Int64) {81};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s198, $tmp197, &$s199);
abort(); // unreachable
block40:;
org$pandalanguage$pandac$Symbol$Kind* $tmp200 = &$tmp194->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp201 = *$tmp200;
panda$core$Int64 $tmp202 = $tmp201.$rawValue;
panda$core$Int64 $tmp203 = (panda$core$Int64) {2};
panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp202, $tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block43; else goto block44;
block43:;
// line 83
org$pandalanguage$pandac$Symbol* $tmp206 = *(&local14);
panda$core$Bit $tmp207 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(param0, ((org$pandalanguage$pandac$FieldDecl*) $tmp206));
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block45; else goto block46;
block45:;
// line 84
org$pandalanguage$pandac$Symbol* $tmp209 = *(&local14);
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp209)));
org$pandalanguage$pandac$FieldDecl* $tmp210 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) $tmp209);
// line 85
org$pandalanguage$pandac$FieldDecl* $tmp211 = *(&local15);
panda$core$Bit $tmp212 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(param0, $tmp211);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block47; else goto block48;
block47:;
// line 86
org$pandalanguage$pandac$lvalue$FieldLValue* $tmp214 = (org$pandalanguage$pandac$lvalue$FieldLValue*) frostObjectAlloc(80, (panda$core$Class*) &org$pandalanguage$pandac$lvalue$FieldLValue$class);
$fn216 $tmp215 = ($fn216) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp217 = $tmp215(param1);
org$pandalanguage$pandac$IR$Value* $tmp218 = *(&local12);
org$pandalanguage$pandac$FieldDecl* $tmp219 = *(&local15);
org$pandalanguage$pandac$lvalue$FieldLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FieldDecl($tmp214, param0, $tmp217, $tmp218, $tmp219);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) $tmp214)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
// unreffing REF($571:org.pandalanguage.pandac.lvalue.FieldLValue)
org$pandalanguage$pandac$FieldDecl* $tmp220 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
// unreffing f
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$Symbol* $tmp221 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
// unreffing symbol
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp222 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
// unreffing cl
*(&local13) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp223 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
// unreffing compiledBase
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$String* $tmp224 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp225 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
// unreffing base
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) $tmp214);
block48:;
org$pandalanguage$pandac$FieldDecl* $tmp226 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
// unreffing f
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block46;
block46:;
// line 89
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
block44:;
// line 92
$fn233 $tmp232 = ($fn233) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp234 = $tmp232(param1);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp234, &$s235);
// line 93
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp236 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
// unreffing symbol
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp237 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// unreffing cl
*(&local13) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp238 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
// unreffing compiledBase
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$String* $tmp239 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp240 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// unreffing base
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block42:;
goto block39;
block39:;
// line 97
$fn242 $tmp241 = ($fn242) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp243 = $tmp241(param1);
org$pandalanguage$pandac$ClassDecl* $tmp244 = *(&local13);
panda$core$Bit $tmp245 = panda$core$Bit$init$builtin_bit($tmp244 != NULL);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block49; else goto block50;
block50:;
panda$core$Int64 $tmp247 = (panda$core$Int64) {97};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s248, $tmp247, &$s249);
abort(); // unreachable
block49:;
panda$core$String** $tmp250 = &$tmp244->name;
panda$core$String* $tmp251 = *$tmp250;
panda$core$String* $tmp252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s253, $tmp251);
panda$core$String* $tmp254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp252, &$s255);
panda$core$String* $tmp256 = *(&local11);
panda$core$String* $tmp257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s258, $tmp256);
panda$core$String* $tmp259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp257, &$s260);
panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp254, $tmp259);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp243, $tmp261);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
// unreffing REF($703:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp259));
// unreffing REF($702:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
// unreffing REF($701:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
// unreffing REF($699:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
// unreffing REF($698:panda.core.String)
// line 99
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp262 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
// unreffing symbol
*(&local14) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp263 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
// unreffing cl
*(&local13) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp264 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
// unreffing compiledBase
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$String* $tmp265 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp266 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
// unreffing base
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block17:;
panda$core$Int64 $tmp267 = (panda$core$Int64) {22};
panda$core$Bit $tmp268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp267);
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block51; else goto block1;
block51:;
org$pandalanguage$pandac$Position* $tmp270 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp271 = *$tmp270;
*(&local16) = $tmp271;
panda$core$String** $tmp272 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp273 = *$tmp272;
*(&local17) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
panda$core$String* $tmp274 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
*(&local17) = $tmp273;
// line 102
org$pandalanguage$pandac$SymbolTable** $tmp275 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp276 = *$tmp275;
panda$core$String* $tmp277 = *(&local17);
org$pandalanguage$pandac$Symbol* $tmp278 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp276, $tmp277);
*(&local18) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
org$pandalanguage$pandac$Symbol* $tmp279 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
*(&local18) = $tmp278;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
// unreffing REF($769:org.pandalanguage.pandac.Symbol?)
// line 103
org$pandalanguage$pandac$Symbol* $tmp280 = *(&local18);
panda$core$Bit $tmp281 = panda$core$Bit$init$builtin_bit($tmp280 != NULL);
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block52; else goto block53;
block52:;
// line 104
org$pandalanguage$pandac$Symbol* $tmp283 = *(&local18);
panda$core$Bit $tmp284 = panda$core$Bit$init$builtin_bit($tmp283 != NULL);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp286 = (panda$core$Int64) {104};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s287, $tmp286, &$s288);
abort(); // unreachable
block54:;
org$pandalanguage$pandac$Symbol$Kind* $tmp289 = &$tmp283->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp290 = *$tmp289;
panda$core$Int64 $tmp291 = $tmp290.$rawValue;
panda$core$Int64 $tmp292 = (panda$core$Int64) {9};
panda$core$Bit $tmp293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp291, $tmp292);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block57; else goto block58;
block57:;
// line 106
org$pandalanguage$pandac$Symbol* $tmp295 = *(&local18);
*(&local19) = ((org$pandalanguage$pandac$Variable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Variable*) $tmp295)));
org$pandalanguage$pandac$Variable* $tmp296 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
*(&local19) = ((org$pandalanguage$pandac$Variable*) $tmp295);
// line 107
org$pandalanguage$pandac$Variable* $tmp297 = *(&local19);
org$pandalanguage$pandac$Variable$Storage** $tmp298 = &$tmp297->storage;
org$pandalanguage$pandac$Variable$Storage* $tmp299 = *$tmp298;
panda$core$Int64* $tmp300 = &$tmp299->$rawValue;
panda$core$Int64 $tmp301 = *$tmp300;
panda$core$Int64 $tmp302 = (panda$core$Int64) {0};
panda$core$Bit $tmp303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp301, $tmp302);
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block60; else goto block61;
block60:;
// line 109
org$pandalanguage$pandac$lvalue$VariableLValue* $tmp305 = (org$pandalanguage$pandac$lvalue$VariableLValue*) frostObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$lvalue$VariableLValue$class);
org$pandalanguage$pandac$Position $tmp306 = *(&local16);
org$pandalanguage$pandac$Symbol* $tmp307 = *(&local18);
org$pandalanguage$pandac$lvalue$VariableLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable($tmp305, param0, $tmp306, ((org$pandalanguage$pandac$Variable*) $tmp307));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) $tmp305)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
// unreffing REF($824:org.pandalanguage.pandac.lvalue.VariableLValue)
org$pandalanguage$pandac$Variable* $tmp308 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
// unreffing v
*(&local19) = ((org$pandalanguage$pandac$Variable*) NULL);
org$pandalanguage$pandac$Symbol* $tmp309 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
// unreffing symbol
*(&local18) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp310 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp310));
// unreffing id
*(&local17) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) $tmp305);
block61:;
// line 112
org$pandalanguage$pandac$Position $tmp311 = *(&local16);
org$pandalanguage$pandac$Variable* $tmp312 = *(&local19);
panda$core$String** $tmp313 = &((org$pandalanguage$pandac$Symbol*) $tmp312)->name;
panda$core$String* $tmp314 = *$tmp313;
panda$core$String* $tmp315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s316, $tmp314);
panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp315, &$s318);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp311, $tmp317);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
// unreffing REF($858:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
// unreffing REF($857:panda.core.String)
goto block59;
block59:;
org$pandalanguage$pandac$Variable* $tmp319 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp319));
// unreffing v
*(&local19) = ((org$pandalanguage$pandac$Variable*) NULL);
goto block56;
block58:;
panda$core$Int64 $tmp320 = (panda$core$Int64) {2};
panda$core$Bit $tmp321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp291, $tmp320);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block62; else goto block56;
block62:;
// line 117
org$pandalanguage$pandac$Symbol* $tmp323 = *(&local18);
*(&local20) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp323)));
org$pandalanguage$pandac$FieldDecl* $tmp324 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
*(&local20) = ((org$pandalanguage$pandac$FieldDecl*) $tmp323);
// line 118
org$pandalanguage$pandac$FieldDecl* $tmp325 = *(&local20);
org$pandalanguage$pandac$Annotations** $tmp326 = &$tmp325->annotations;
org$pandalanguage$pandac$Annotations* $tmp327 = *$tmp326;
panda$core$Bit $tmp328 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp327);
panda$core$Bit $tmp329 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp328);
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block63; else goto block64;
block63:;
// line 119
org$pandalanguage$pandac$ASTNode* $tmp331 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp332 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Position $tmp333 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp334 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp335 = (panda$core$Int64) {40};
org$pandalanguage$pandac$Position $tmp336 = *(&local16);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp334, $tmp335, $tmp336);
org$pandalanguage$pandac$FieldDecl* $tmp337 = *(&local20);
panda$core$String** $tmp338 = &((org$pandalanguage$pandac$Symbol*) $tmp337)->name;
panda$core$String* $tmp339 = *$tmp338;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp331, $tmp332, $tmp333, $tmp334, $tmp339);
org$pandalanguage$pandac$lvalue$LValue* $tmp340 = org$pandalanguage$pandac$lvalue$LValue$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$lvalue$LValue$Q(param0, $tmp331);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
// unreffing REF($908:org.pandalanguage.pandac.lvalue.LValue?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
// unreffing REF($899:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
// unreffing REF($896:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FieldDecl* $tmp341 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp341));
// unreffing f
*(&local20) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$Symbol* $tmp342 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
// unreffing symbol
*(&local18) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp343 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
// unreffing id
*(&local17) = ((panda$core$String*) NULL);
return $tmp340;
block64:;
// line 122
org$pandalanguage$pandac$FieldDecl* $tmp344 = *(&local20);
panda$core$Bit $tmp345 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(param0, $tmp344);
bool $tmp346 = $tmp345.value;
if ($tmp346) goto block65; else goto block66;
block65:;
// line 123
org$pandalanguage$pandac$lvalue$FieldLValue* $tmp347 = (org$pandalanguage$pandac$lvalue$FieldLValue*) frostObjectAlloc(80, (panda$core$Class*) &org$pandalanguage$pandac$lvalue$FieldLValue$class);
org$pandalanguage$pandac$Position $tmp348 = *(&local16);
org$pandalanguage$pandac$FieldDecl* $tmp349 = *(&local20);
org$pandalanguage$pandac$lvalue$FieldLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FieldDecl($tmp347, param0, $tmp348, ((org$pandalanguage$pandac$IR$Value*) NULL), $tmp349);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) $tmp347)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
// unreffing REF($942:org.pandalanguage.pandac.lvalue.FieldLValue)
org$pandalanguage$pandac$FieldDecl* $tmp350 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
// unreffing f
*(&local20) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$Symbol* $tmp351 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp351));
// unreffing symbol
*(&local18) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp352 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
// unreffing id
*(&local17) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) $tmp347);
block66:;
// line 125
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$FieldDecl* $tmp353 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
// unreffing f
*(&local20) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$Symbol* $tmp354 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
// unreffing symbol
*(&local18) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp355 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp355));
// unreffing id
*(&local17) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block56:;
goto block53;
block53:;
// line 129
org$pandalanguage$pandac$Position $tmp356 = *(&local16);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp356, &$s357);
// line 130
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp358 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
// unreffing symbol
*(&local18) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp359 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
// unreffing id
*(&local17) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);
block1:;
// line 133
$fn361 $tmp360 = ($fn361) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp362 = $tmp360(param1);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp362, &$s363);
// line 134
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$lvalue$LValue*) NULL)));
return ((org$pandalanguage$pandac$lvalue$LValue*) NULL);

}






