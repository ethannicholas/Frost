#include "org/frostlang/frostc/lvalue/LValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/Variable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/lvalue/IndexLValue.h"
#include "org/frostlang/frostc/lvalue/ChoiceFieldLValue.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Compiler/InlineReturn.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/lvalue/FieldLValue.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/lvalue/VariableLValue.h"
#include "org/frostlang/frostc/Annotations.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$LValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { NULL, NULL, NULL} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$LValue$class_type org$frostlang$frostc$lvalue$LValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$LValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, NULL, NULL} };

typedef frost$core$Bit (*$fn29)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn123)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn137)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn152)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn171)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn200)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn214)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn229)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn248)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn272)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn276)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn286)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn290)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn295)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn348)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn362)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn377)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn396)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn431)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn445)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn460)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn479)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn522)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Position (*$fn561)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn578)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn587)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn721)(org$frostlang$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 34, -8655661972511047400, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x6f\x64\x69\x66\x79\x20\x76\x61\x6c\x75\x65\x20\x66\x69\x65\x6c\x64\x73\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 52, 2803094133346002974, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 5286731520298025154, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s580 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static frost$core$String $s593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20", 31, -2978468964078965078, NULL };
static frost$core$String $s598 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s660 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x27", 18, 5927969463226965843, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s717 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static frost$core$String $s723 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x29", 33, 4023997240073892833, NULL };

org$frostlang$frostc$lvalue$LValue* org$frostlang$frostc$lvalue$LValue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$lvalue$LValue$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1) {

org$frostlang$frostc$Position local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$expression$Binary$Operator local2;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$expression$Binary$Operator local4;
org$frostlang$frostc$expression$Binary$Operator local5;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$Position local7;
org$frostlang$frostc$ASTNode* local8 = NULL;
org$frostlang$frostc$ChoiceCase* local9 = NULL;
frost$core$Int64 local10;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$ASTNode* local12 = NULL;
frost$core$String* local13 = NULL;
org$frostlang$frostc$IR$Value* local14 = NULL;
org$frostlang$frostc$MethodDecl$Kind local15;
org$frostlang$frostc$MethodDecl$Kind local16;
org$frostlang$frostc$Compiler$EnclosingContext* local17 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local18 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local19 = NULL;
frost$core$Int64 local20;
org$frostlang$frostc$ClassDecl* local21 = NULL;
org$frostlang$frostc$Symbol* local22 = NULL;
org$frostlang$frostc$FieldDecl* local23 = NULL;
org$frostlang$frostc$Position local24;
frost$core$String* local25 = NULL;
org$frostlang$frostc$Symbol* local26 = NULL;
org$frostlang$frostc$Variable* local27 = NULL;
org$frostlang$frostc$FieldDecl* local28 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:32
frost$core$Int64* $tmp2 = &param1->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:33:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp10 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp11 = *$tmp10;
*(&local0) = $tmp11;
org$frostlang$frostc$ASTNode** $tmp12 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp13 = *$tmp12;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
org$frostlang$frostc$ASTNode* $tmp14 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
*(&local1) = $tmp13;
org$frostlang$frostc$expression$Binary$Operator* $tmp15 = (org$frostlang$frostc$expression$Binary$Operator*) (param1->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp16 = *$tmp15;
*(&local2) = $tmp16;
org$frostlang$frostc$ASTNode** $tmp17 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp18 = *$tmp17;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
org$frostlang$frostc$ASTNode* $tmp19 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
*(&local3) = $tmp18;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:34
org$frostlang$frostc$expression$Binary$Operator $tmp20 = *(&local2);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp21;
$tmp21 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp21->value = $tmp20;
frost$core$Int64 $tmp22 = (frost$core$Int64) {20};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from LValue.frost:34:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp23 = &(&local5)->$rawValue;
*$tmp23 = $tmp22;
org$frostlang$frostc$expression$Binary$Operator $tmp24 = *(&local5);
*(&local4) = $tmp24;
org$frostlang$frostc$expression$Binary$Operator $tmp25 = *(&local4);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp26;
$tmp26 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp26->value = $tmp25;
ITable* $tmp27 = ((frost$core$Equatable*) $tmp21)->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp27 = $tmp27->next;
}
$fn29 $tmp28 = $tmp27->methods[0];
frost$core$Bit $tmp30 = $tmp28(((frost$core$Equatable*) $tmp21), ((frost$core$Equatable*) $tmp26));
bool $tmp31 = $tmp30.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp26)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp21)));
if ($tmp31) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:35
org$frostlang$frostc$ASTNode* $tmp32 = *(&local1);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from LValue.frost:35:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5081
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp33 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp34 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp33, $tmp34);
org$frostlang$frostc$IR$Value* $tmp35 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp32, $tmp33);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
org$frostlang$frostc$IR$Value* $tmp36 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local6) = $tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:36
org$frostlang$frostc$IR$Value* $tmp37 = *(&local6);
frost$core$Bit $tmp38 = frost$core$Bit$init$builtin_bit($tmp37 == NULL);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:37
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp40 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp41 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp42 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:39
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$lvalue$IndexLValue));
org$frostlang$frostc$lvalue$IndexLValue* $tmp43 = (org$frostlang$frostc$lvalue$IndexLValue*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$lvalue$IndexLValue$class);
org$frostlang$frostc$Position $tmp44 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp45 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp46 = *(&local3);
org$frostlang$frostc$lvalue$IndexLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ASTNode($tmp43, param0, $tmp44, $tmp45, $tmp46);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp43)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
org$frostlang$frostc$IR$Value* $tmp47 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp48 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp49 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp43);
block6:;
org$frostlang$frostc$ASTNode* $tmp50 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp51 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp52 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:42:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp53 = $tmp3.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 == $tmp54;
frost$core$Bit $tmp56 = frost$core$Bit$init$builtin_bit($tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp58 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp59 = *$tmp58;
*(&local7) = $tmp59;
org$frostlang$frostc$ASTNode** $tmp60 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp61 = *$tmp60;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
org$frostlang$frostc$ASTNode* $tmp62 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local8) = $tmp61;
org$frostlang$frostc$ChoiceCase** $tmp63 = (org$frostlang$frostc$ChoiceCase**) (param1->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp64 = *$tmp63;
*(&local9) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
org$frostlang$frostc$ChoiceCase* $tmp65 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local9) = $tmp64;
frost$core$Int64* $tmp66 = (frost$core$Int64*) (param1->$data + 40);
frost$core$Int64 $tmp67 = *$tmp66;
*(&local10) = $tmp67;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:43
org$frostlang$frostc$ASTNode* $tmp68 = *(&local8);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from LValue.frost:43:63
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5081
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp69 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp70 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp69, $tmp70);
org$frostlang$frostc$IR$Value* $tmp71 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp68, $tmp69);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
org$frostlang$frostc$IR$Value* $tmp72 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local11) = $tmp71;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:44
org$frostlang$frostc$IR$Value* $tmp73 = *(&local11);
frost$core$Bit $tmp74 = frost$core$Bit$init$builtin_bit($tmp73 == NULL);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:45
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp76 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ChoiceCase* $tmp77 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local9) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp78 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:47
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$lvalue$ChoiceFieldLValue));
org$frostlang$frostc$lvalue$ChoiceFieldLValue* $tmp79 = (org$frostlang$frostc$lvalue$ChoiceFieldLValue*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$lvalue$ChoiceFieldLValue$class);
org$frostlang$frostc$Position $tmp80 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp81 = *(&local11);
org$frostlang$frostc$ChoiceCase* $tmp82 = *(&local9);
frost$core$Int64 $tmp83 = *(&local10);
org$frostlang$frostc$lvalue$ChoiceFieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp79, param0, $tmp80, $tmp81, $tmp82, $tmp83);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp79)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
org$frostlang$frostc$IR$Value* $tmp84 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ChoiceCase* $tmp85 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local9) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp86 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp79);
block12:;
frost$core$Int64 $tmp87 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:49:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp88 = $tmp3.value;
int64_t $tmp89 = $tmp87.value;
bool $tmp90 = $tmp88 == $tmp89;
frost$core$Bit $tmp91 = frost$core$Bit$init$builtin_bit($tmp90);
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp93 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp94 = *$tmp93;
org$frostlang$frostc$ASTNode** $tmp95 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp96 = *$tmp95;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
org$frostlang$frostc$ASTNode* $tmp97 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
*(&local12) = $tmp96;
frost$core$String** $tmp98 = (frost$core$String**) (param1->$data + 32);
frost$core$String* $tmp99 = *$tmp98;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$String* $tmp100 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local13) = $tmp99;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:50
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:51
org$frostlang$frostc$ASTNode* $tmp101 = *(&local12);
frost$core$Int64* $tmp102 = &$tmp101->$rawValue;
frost$core$Int64 $tmp103 = *$tmp102;
frost$core$Int64 $tmp104 = (frost$core$Int64) {39};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:52:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp105 = $tmp103.value;
int64_t $tmp106 = $tmp104.value;
bool $tmp107 = $tmp105 == $tmp106;
frost$core$Bit $tmp108 = frost$core$Bit$init$builtin_bit($tmp107);
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:53
frost$collections$Stack** $tmp110 = &param0->currentClass;
frost$collections$Stack* $tmp111 = *$tmp110;
frost$core$Int64 $tmp112 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from LValue.frost:53:66
frost$core$Int64 $tmp113 = (frost$core$Int64) {0};
int64_t $tmp114 = $tmp112.value;
int64_t $tmp115 = $tmp113.value;
bool $tmp116 = $tmp114 >= $tmp115;
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block30; else goto block29;
block30:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp119 = &$tmp111->contents;
frost$collections$Array* $tmp120 = *$tmp119;
ITable* $tmp121 = ((frost$collections$CollectionView*) $tmp120)->$class->itable;
while ($tmp121->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp121 = $tmp121->next;
}
$fn123 $tmp122 = $tmp121->methods[0];
frost$core$Int64 $tmp124 = $tmp122(((frost$collections$CollectionView*) $tmp120));
int64_t $tmp125 = $tmp112.value;
int64_t $tmp126 = $tmp124.value;
bool $tmp127 = $tmp125 < $tmp126;
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp130 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s131, $tmp130, &$s132);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp133 = &$tmp111->contents;
frost$collections$Array* $tmp134 = *$tmp133;
ITable* $tmp135 = ((frost$collections$CollectionView*) $tmp134)->$class->itable;
while ($tmp135->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp135 = $tmp135->next;
}
$fn137 $tmp136 = $tmp135->methods[0];
frost$core$Int64 $tmp138 = $tmp136(((frost$collections$CollectionView*) $tmp134));
int64_t $tmp139 = $tmp138.value;
int64_t $tmp140 = $tmp112.value;
bool $tmp141 = $tmp139 > $tmp140;
frost$core$Bit $tmp142 = (frost$core$Bit) {$tmp141};
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp144 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s145, $tmp144);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp146 = &$tmp111->contents;
frost$collections$Array* $tmp147 = *$tmp146;
frost$collections$Array** $tmp148 = &$tmp111->contents;
frost$collections$Array* $tmp149 = *$tmp148;
ITable* $tmp150 = ((frost$collections$CollectionView*) $tmp149)->$class->itable;
while ($tmp150->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp150 = $tmp150->next;
}
$fn152 $tmp151 = $tmp150->methods[0];
frost$core$Int64 $tmp153 = $tmp151(((frost$collections$CollectionView*) $tmp149));
frost$core$Int64 $tmp154 = (frost$core$Int64) {1};
int64_t $tmp155 = $tmp153.value;
int64_t $tmp156 = $tmp154.value;
int64_t $tmp157 = $tmp155 - $tmp156;
frost$core$Int64 $tmp158 = (frost$core$Int64) {$tmp157};
int64_t $tmp159 = $tmp158.value;
int64_t $tmp160 = $tmp112.value;
int64_t $tmp161 = $tmp159 - $tmp160;
frost$core$Int64 $tmp162 = (frost$core$Int64) {$tmp161};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp163 = (frost$core$Int64) {0};
int64_t $tmp164 = $tmp162.value;
int64_t $tmp165 = $tmp163.value;
bool $tmp166 = $tmp164 >= $tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block37; else goto block36;
block37:;
ITable* $tmp169 = ((frost$collections$CollectionView*) $tmp147)->$class->itable;
while ($tmp169->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp169 = $tmp169->next;
}
$fn171 $tmp170 = $tmp169->methods[0];
frost$core$Int64 $tmp172 = $tmp170(((frost$collections$CollectionView*) $tmp147));
int64_t $tmp173 = $tmp162.value;
int64_t $tmp174 = $tmp172.value;
bool $tmp175 = $tmp173 < $tmp174;
frost$core$Bit $tmp176 = (frost$core$Bit) {$tmp175};
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp178 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s179, $tmp178, &$s180);
abort(); // unreachable
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp181 = &$tmp147->data;
frost$core$Object** $tmp182 = *$tmp181;
int64_t $tmp183 = $tmp162.value;
frost$core$Object* $tmp184 = $tmp182[$tmp183];
frost$core$Frost$ref$frost$core$Object$Q($tmp184);
frost$core$Frost$ref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Bit $tmp185 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp184));
bool $tmp186 = $tmp185.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
if ($tmp186) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:54
frost$collections$Stack** $tmp187 = &param0->currentMethod;
frost$collections$Stack* $tmp188 = *$tmp187;
frost$core$Int64 $tmp189 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from LValue.frost:54:54
frost$core$Int64 $tmp190 = (frost$core$Int64) {0};
int64_t $tmp191 = $tmp189.value;
int64_t $tmp192 = $tmp190.value;
bool $tmp193 = $tmp191 >= $tmp192;
frost$core$Bit $tmp194 = (frost$core$Bit) {$tmp193};
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block43; else goto block42;
block43:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp196 = &$tmp188->contents;
frost$collections$Array* $tmp197 = *$tmp196;
ITable* $tmp198 = ((frost$collections$CollectionView*) $tmp197)->$class->itable;
while ($tmp198->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp198 = $tmp198->next;
}
$fn200 $tmp199 = $tmp198->methods[0];
frost$core$Int64 $tmp201 = $tmp199(((frost$collections$CollectionView*) $tmp197));
int64_t $tmp202 = $tmp189.value;
int64_t $tmp203 = $tmp201.value;
bool $tmp204 = $tmp202 < $tmp203;
frost$core$Bit $tmp205 = (frost$core$Bit) {$tmp204};
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp207 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s208, $tmp207, &$s209);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp210 = &$tmp188->contents;
frost$collections$Array* $tmp211 = *$tmp210;
ITable* $tmp212 = ((frost$collections$CollectionView*) $tmp211)->$class->itable;
while ($tmp212->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp212 = $tmp212->next;
}
$fn214 $tmp213 = $tmp212->methods[0];
frost$core$Int64 $tmp215 = $tmp213(((frost$collections$CollectionView*) $tmp211));
int64_t $tmp216 = $tmp215.value;
int64_t $tmp217 = $tmp189.value;
bool $tmp218 = $tmp216 > $tmp217;
frost$core$Bit $tmp219 = (frost$core$Bit) {$tmp218};
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp221 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s222, $tmp221);
abort(); // unreachable
block45:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp223 = &$tmp188->contents;
frost$collections$Array* $tmp224 = *$tmp223;
frost$collections$Array** $tmp225 = &$tmp188->contents;
frost$collections$Array* $tmp226 = *$tmp225;
ITable* $tmp227 = ((frost$collections$CollectionView*) $tmp226)->$class->itable;
while ($tmp227->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp227 = $tmp227->next;
}
$fn229 $tmp228 = $tmp227->methods[0];
frost$core$Int64 $tmp230 = $tmp228(((frost$collections$CollectionView*) $tmp226));
frost$core$Int64 $tmp231 = (frost$core$Int64) {1};
int64_t $tmp232 = $tmp230.value;
int64_t $tmp233 = $tmp231.value;
int64_t $tmp234 = $tmp232 - $tmp233;
frost$core$Int64 $tmp235 = (frost$core$Int64) {$tmp234};
int64_t $tmp236 = $tmp235.value;
int64_t $tmp237 = $tmp189.value;
int64_t $tmp238 = $tmp236 - $tmp237;
frost$core$Int64 $tmp239 = (frost$core$Int64) {$tmp238};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp240 = (frost$core$Int64) {0};
int64_t $tmp241 = $tmp239.value;
int64_t $tmp242 = $tmp240.value;
bool $tmp243 = $tmp241 >= $tmp242;
frost$core$Bit $tmp244 = (frost$core$Bit) {$tmp243};
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block50; else goto block49;
block50:;
ITable* $tmp246 = ((frost$collections$CollectionView*) $tmp224)->$class->itable;
while ($tmp246->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp246 = $tmp246->next;
}
$fn248 $tmp247 = $tmp246->methods[0];
frost$core$Int64 $tmp249 = $tmp247(((frost$collections$CollectionView*) $tmp224));
int64_t $tmp250 = $tmp239.value;
int64_t $tmp251 = $tmp249.value;
bool $tmp252 = $tmp250 < $tmp251;
frost$core$Bit $tmp253 = (frost$core$Bit) {$tmp252};
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block48; else goto block49;
block49:;
frost$core$Int64 $tmp255 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s256, $tmp255, &$s257);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp258 = &$tmp224->data;
frost$core$Object** $tmp259 = *$tmp258;
int64_t $tmp260 = $tmp239.value;
frost$core$Object* $tmp261 = $tmp259[$tmp260];
frost$core$Frost$ref$frost$core$Object$Q($tmp261);
frost$core$Frost$ref$frost$core$Object$Q($tmp261);
frost$core$Frost$unref$frost$core$Object$Q($tmp261);
org$frostlang$frostc$MethodDecl$Kind* $tmp262 = &((org$frostlang$frostc$MethodDecl*) $tmp261)->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp263 = *$tmp262;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp264;
$tmp264 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp264->value = $tmp263;
frost$core$Int64 $tmp265 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from LValue.frost:54:87
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp266 = &(&local16)->$rawValue;
*$tmp266 = $tmp265;
org$frostlang$frostc$MethodDecl$Kind $tmp267 = *(&local16);
*(&local15) = $tmp267;
org$frostlang$frostc$MethodDecl$Kind $tmp268 = *(&local15);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp269;
$tmp269 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp269->value = $tmp268;
ITable* $tmp270 = ((frost$core$Equatable*) $tmp264)->$class->itable;
while ($tmp270->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp270 = $tmp270->next;
}
$fn272 $tmp271 = $tmp270->methods[1];
frost$core$Bit $tmp273 = $tmp271(((frost$core$Equatable*) $tmp264), ((frost$core$Equatable*) $tmp269));
bool $tmp274 = $tmp273.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp269)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp264)));
frost$core$Frost$unref$frost$core$Object$Q($tmp261);
if ($tmp274) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:55
$fn276 $tmp275 = ($fn276) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp277 = $tmp275(param1);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp277, &$s278);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:57
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp279 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp280 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp281 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:59
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from LValue.frost:59:68
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5810
frost$collections$Stack** $tmp282 = &param0->enclosingContexts;
frost$collections$Stack* $tmp283 = *$tmp282;
ITable* $tmp284 = ((frost$collections$Iterable*) $tmp283)->$class->itable;
while ($tmp284->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp284 = $tmp284->next;
}
$fn286 $tmp285 = $tmp284->methods[0];
frost$collections$Iterator* $tmp287 = $tmp285(((frost$collections$Iterable*) $tmp283));
goto block53;
block53:;
ITable* $tmp288 = $tmp287->$class->itable;
while ($tmp288->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp288 = $tmp288->next;
}
$fn290 $tmp289 = $tmp288->methods[0];
frost$core$Bit $tmp291 = $tmp289($tmp287);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block55; else goto block54;
block54:;
*(&local18) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp293 = $tmp287->$class->itable;
while ($tmp293->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp293 = $tmp293->next;
}
$fn295 $tmp294 = $tmp293->methods[1];
frost$core$Object* $tmp296 = $tmp294($tmp287);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp296)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp297 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local18) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp296);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5811
org$frostlang$frostc$Compiler$EnclosingContext* $tmp298 = *(&local18);
frost$core$Int64* $tmp299 = &$tmp298->$rawValue;
frost$core$Int64 $tmp300 = *$tmp299;
frost$core$Int64 $tmp301 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:5812:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp302 = $tmp300.value;
int64_t $tmp303 = $tmp301.value;
bool $tmp304 = $tmp302 == $tmp303;
frost$core$Bit $tmp305 = frost$core$Bit$init$builtin_bit($tmp304);
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block57; else goto block56;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5813
org$frostlang$frostc$Compiler$EnclosingContext* $tmp307 = *(&local18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$Frost$unref$frost$core$Object$Q($tmp296);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp308 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local18) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local17) = $tmp307;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
goto block52;
block56:;
frost$core$Frost$unref$frost$core$Object$Q($tmp296);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp309 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local18) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block53;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5817
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
*(&local17) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
goto block52;
block52:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp310 = *(&local17);
*(&local19) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp311 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local19) = $tmp310;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:60
org$frostlang$frostc$Compiler$EnclosingContext* $tmp312 = *(&local19);
frost$core$Bit $tmp313 = frost$core$Bit$init$builtin_bit($tmp312 != NULL);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block59; else goto block61;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:61
org$frostlang$frostc$Compiler$EnclosingContext* $tmp315 = *(&local19);
frost$core$Int64* $tmp316 = &$tmp315->$rawValue;
frost$core$Int64 $tmp317 = *$tmp316;
frost$core$Int64 $tmp318 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:62:67
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp319 = $tmp317.value;
int64_t $tmp320 = $tmp318.value;
bool $tmp321 = $tmp319 == $tmp320;
frost$core$Bit $tmp322 = frost$core$Bit$init$builtin_bit($tmp321);
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block63; else goto block64;
block63:;
frost$collections$ListView** $tmp324 = (frost$collections$ListView**) ($tmp315->$data + 0);
frost$collections$ListView* $tmp325 = *$tmp324;
frost$core$Int64* $tmp326 = (frost$core$Int64*) ($tmp315->$data + 8);
frost$core$Int64 $tmp327 = *$tmp326;
*(&local20) = $tmp327;
org$frostlang$frostc$Compiler$InlineReturn** $tmp328 = (org$frostlang$frostc$Compiler$InlineReturn**) ($tmp315->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp329 = *$tmp328;
org$frostlang$frostc$IR$Block$ID* $tmp330 = (org$frostlang$frostc$IR$Block$ID*) ($tmp315->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp331 = *$tmp330;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:64
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp332 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp333 = (frost$core$Int64) {2};
frost$core$Int64 $tmp334 = *(&local20);
frost$collections$Stack** $tmp335 = &param0->currentClass;
frost$collections$Stack* $tmp336 = *$tmp335;
frost$core$Int64 $tmp337 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from LValue.frost:65:70
frost$core$Int64 $tmp338 = (frost$core$Int64) {0};
int64_t $tmp339 = $tmp337.value;
int64_t $tmp340 = $tmp338.value;
bool $tmp341 = $tmp339 >= $tmp340;
frost$core$Bit $tmp342 = (frost$core$Bit) {$tmp341};
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block69; else goto block68;
block69:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp344 = &$tmp336->contents;
frost$collections$Array* $tmp345 = *$tmp344;
ITable* $tmp346 = ((frost$collections$CollectionView*) $tmp345)->$class->itable;
while ($tmp346->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp346 = $tmp346->next;
}
$fn348 $tmp347 = $tmp346->methods[0];
frost$core$Int64 $tmp349 = $tmp347(((frost$collections$CollectionView*) $tmp345));
int64_t $tmp350 = $tmp337.value;
int64_t $tmp351 = $tmp349.value;
bool $tmp352 = $tmp350 < $tmp351;
frost$core$Bit $tmp353 = (frost$core$Bit) {$tmp352};
bool $tmp354 = $tmp353.value;
if ($tmp354) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp355 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s356, $tmp355, &$s357);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp358 = &$tmp336->contents;
frost$collections$Array* $tmp359 = *$tmp358;
ITable* $tmp360 = ((frost$collections$CollectionView*) $tmp359)->$class->itable;
while ($tmp360->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp360 = $tmp360->next;
}
$fn362 $tmp361 = $tmp360->methods[0];
frost$core$Int64 $tmp363 = $tmp361(((frost$collections$CollectionView*) $tmp359));
int64_t $tmp364 = $tmp363.value;
int64_t $tmp365 = $tmp337.value;
bool $tmp366 = $tmp364 > $tmp365;
frost$core$Bit $tmp367 = (frost$core$Bit) {$tmp366};
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block71; else goto block72;
block72:;
frost$core$Int64 $tmp369 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s370, $tmp369);
abort(); // unreachable
block71:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp371 = &$tmp336->contents;
frost$collections$Array* $tmp372 = *$tmp371;
frost$collections$Array** $tmp373 = &$tmp336->contents;
frost$collections$Array* $tmp374 = *$tmp373;
ITable* $tmp375 = ((frost$collections$CollectionView*) $tmp374)->$class->itable;
while ($tmp375->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp375 = $tmp375->next;
}
$fn377 $tmp376 = $tmp375->methods[0];
frost$core$Int64 $tmp378 = $tmp376(((frost$collections$CollectionView*) $tmp374));
frost$core$Int64 $tmp379 = (frost$core$Int64) {1};
int64_t $tmp380 = $tmp378.value;
int64_t $tmp381 = $tmp379.value;
int64_t $tmp382 = $tmp380 - $tmp381;
frost$core$Int64 $tmp383 = (frost$core$Int64) {$tmp382};
int64_t $tmp384 = $tmp383.value;
int64_t $tmp385 = $tmp337.value;
int64_t $tmp386 = $tmp384 - $tmp385;
frost$core$Int64 $tmp387 = (frost$core$Int64) {$tmp386};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp388 = (frost$core$Int64) {0};
int64_t $tmp389 = $tmp387.value;
int64_t $tmp390 = $tmp388.value;
bool $tmp391 = $tmp389 >= $tmp390;
frost$core$Bit $tmp392 = (frost$core$Bit) {$tmp391};
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block76; else goto block75;
block76:;
ITable* $tmp394 = ((frost$collections$CollectionView*) $tmp372)->$class->itable;
while ($tmp394->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp394 = $tmp394->next;
}
$fn396 $tmp395 = $tmp394->methods[0];
frost$core$Int64 $tmp397 = $tmp395(((frost$collections$CollectionView*) $tmp372));
int64_t $tmp398 = $tmp387.value;
int64_t $tmp399 = $tmp397.value;
bool $tmp400 = $tmp398 < $tmp399;
frost$core$Bit $tmp401 = (frost$core$Bit) {$tmp400};
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block74; else goto block75;
block75:;
frost$core$Int64 $tmp403 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s404, $tmp403, &$s405);
abort(); // unreachable
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp406 = &$tmp372->data;
frost$core$Object** $tmp407 = *$tmp406;
int64_t $tmp408 = $tmp387.value;
frost$core$Object* $tmp409 = $tmp407[$tmp408];
frost$core$Frost$ref$frost$core$Object$Q($tmp409);
frost$core$Frost$ref$frost$core$Object$Q($tmp409);
frost$core$Frost$unref$frost$core$Object$Q($tmp409);
org$frostlang$frostc$Type** $tmp410 = &((org$frostlang$frostc$ClassDecl*) $tmp409)->type;
org$frostlang$frostc$Type* $tmp411 = *$tmp410;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp332, $tmp333, $tmp334, $tmp411);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
org$frostlang$frostc$IR$Value* $tmp412 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local14) = $tmp332;
frost$core$Frost$unref$frost$core$Object$Q($tmp409);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
goto block60;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:68
frost$core$Int64 $tmp413 = (frost$core$Int64) {68};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s414, $tmp413);
abort(); // unreachable
block61:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:73
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp415 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp416 = (frost$core$Int64) {2};
frost$core$Int64 $tmp417 = (frost$core$Int64) {0};
frost$collections$Stack** $tmp418 = &param0->currentClass;
frost$collections$Stack* $tmp419 = *$tmp418;
frost$core$Int64 $tmp420 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from LValue.frost:73:88
frost$core$Int64 $tmp421 = (frost$core$Int64) {0};
int64_t $tmp422 = $tmp420.value;
int64_t $tmp423 = $tmp421.value;
bool $tmp424 = $tmp422 >= $tmp423;
frost$core$Bit $tmp425 = (frost$core$Bit) {$tmp424};
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block80; else goto block79;
block80:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp427 = &$tmp419->contents;
frost$collections$Array* $tmp428 = *$tmp427;
ITable* $tmp429 = ((frost$collections$CollectionView*) $tmp428)->$class->itable;
while ($tmp429->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp429 = $tmp429->next;
}
$fn431 $tmp430 = $tmp429->methods[0];
frost$core$Int64 $tmp432 = $tmp430(((frost$collections$CollectionView*) $tmp428));
int64_t $tmp433 = $tmp420.value;
int64_t $tmp434 = $tmp432.value;
bool $tmp435 = $tmp433 < $tmp434;
frost$core$Bit $tmp436 = (frost$core$Bit) {$tmp435};
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block78; else goto block79;
block79:;
frost$core$Int64 $tmp438 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s439, $tmp438, &$s440);
abort(); // unreachable
block78:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp441 = &$tmp419->contents;
frost$collections$Array* $tmp442 = *$tmp441;
ITable* $tmp443 = ((frost$collections$CollectionView*) $tmp442)->$class->itable;
while ($tmp443->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp443 = $tmp443->next;
}
$fn445 $tmp444 = $tmp443->methods[0];
frost$core$Int64 $tmp446 = $tmp444(((frost$collections$CollectionView*) $tmp442));
int64_t $tmp447 = $tmp446.value;
int64_t $tmp448 = $tmp420.value;
bool $tmp449 = $tmp447 > $tmp448;
frost$core$Bit $tmp450 = (frost$core$Bit) {$tmp449};
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block82; else goto block83;
block83:;
frost$core$Int64 $tmp452 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s453, $tmp452);
abort(); // unreachable
block82:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp454 = &$tmp419->contents;
frost$collections$Array* $tmp455 = *$tmp454;
frost$collections$Array** $tmp456 = &$tmp419->contents;
frost$collections$Array* $tmp457 = *$tmp456;
ITable* $tmp458 = ((frost$collections$CollectionView*) $tmp457)->$class->itable;
while ($tmp458->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp458 = $tmp458->next;
}
$fn460 $tmp459 = $tmp458->methods[0];
frost$core$Int64 $tmp461 = $tmp459(((frost$collections$CollectionView*) $tmp457));
frost$core$Int64 $tmp462 = (frost$core$Int64) {1};
int64_t $tmp463 = $tmp461.value;
int64_t $tmp464 = $tmp462.value;
int64_t $tmp465 = $tmp463 - $tmp464;
frost$core$Int64 $tmp466 = (frost$core$Int64) {$tmp465};
int64_t $tmp467 = $tmp466.value;
int64_t $tmp468 = $tmp420.value;
int64_t $tmp469 = $tmp467 - $tmp468;
frost$core$Int64 $tmp470 = (frost$core$Int64) {$tmp469};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp471 = (frost$core$Int64) {0};
int64_t $tmp472 = $tmp470.value;
int64_t $tmp473 = $tmp471.value;
bool $tmp474 = $tmp472 >= $tmp473;
frost$core$Bit $tmp475 = (frost$core$Bit) {$tmp474};
bool $tmp476 = $tmp475.value;
if ($tmp476) goto block87; else goto block86;
block87:;
ITable* $tmp477 = ((frost$collections$CollectionView*) $tmp455)->$class->itable;
while ($tmp477->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp477 = $tmp477->next;
}
$fn479 $tmp478 = $tmp477->methods[0];
frost$core$Int64 $tmp480 = $tmp478(((frost$collections$CollectionView*) $tmp455));
int64_t $tmp481 = $tmp470.value;
int64_t $tmp482 = $tmp480.value;
bool $tmp483 = $tmp481 < $tmp482;
frost$core$Bit $tmp484 = (frost$core$Bit) {$tmp483};
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block85; else goto block86;
block86:;
frost$core$Int64 $tmp486 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s487, $tmp486, &$s488);
abort(); // unreachable
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp489 = &$tmp455->data;
frost$core$Object** $tmp490 = *$tmp489;
int64_t $tmp491 = $tmp470.value;
frost$core$Object* $tmp492 = $tmp490[$tmp491];
frost$core$Frost$ref$frost$core$Object$Q($tmp492);
frost$core$Frost$ref$frost$core$Object$Q($tmp492);
frost$core$Frost$unref$frost$core$Object$Q($tmp492);
org$frostlang$frostc$Type** $tmp493 = &((org$frostlang$frostc$ClassDecl*) $tmp492)->type;
org$frostlang$frostc$Type* $tmp494 = *$tmp493;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp415, $tmp416, $tmp417, $tmp494);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
org$frostlang$frostc$IR$Value* $tmp495 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
*(&local14) = $tmp415;
frost$core$Frost$unref$frost$core$Object$Q($tmp492);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
goto block60;
block60:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp496 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
*(&local19) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp497 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
*(&local17) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block25;
block26:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:77
org$frostlang$frostc$ASTNode* $tmp498 = *(&local12);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from LValue.frost:77:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5081
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp499 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp500 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp499, $tmp500);
org$frostlang$frostc$IR$Value* $tmp501 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp498, $tmp499);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
org$frostlang$frostc$IR$Value* $tmp502 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local14) = $tmp501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:78
org$frostlang$frostc$IR$Value* $tmp503 = *(&local14);
frost$core$Bit $tmp504 = frost$core$Bit$init$builtin_bit($tmp503 == NULL);
bool $tmp505 = $tmp504.value;
if ($tmp505) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:79
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp506 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp507 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp508 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block90:;
goto block25;
block25:;
goto block20;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:84
org$frostlang$frostc$ASTNode* $tmp509 = *(&local12);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from LValue.frost:84:67
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5081
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp510 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp511 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp510, $tmp511);
org$frostlang$frostc$IR$Value* $tmp512 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp509, $tmp510);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
org$frostlang$frostc$IR$Value* $tmp513 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local14) = $tmp512;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:85
org$frostlang$frostc$IR$Value* $tmp514 = *(&local14);
frost$core$Bit $tmp515 = frost$core$Bit$init$builtin_bit($tmp514 == NULL);
bool $tmp516 = $tmp515.value;
if ($tmp516) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:86
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp517 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp518 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp519 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block93:;
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:90
org$frostlang$frostc$IR$Value* $tmp520 = *(&local14);
$fn522 $tmp521 = ($fn522) $tmp520->$class->vtable[2];
org$frostlang$frostc$Type* $tmp523 = $tmp521($tmp520);
org$frostlang$frostc$ClassDecl* $tmp524 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp523);
*(&local21) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
org$frostlang$frostc$ClassDecl* $tmp525 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
*(&local21) = $tmp524;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:91
org$frostlang$frostc$ClassDecl* $tmp526 = *(&local21);
frost$core$Bit $tmp527 = frost$core$Bit$init$builtin_bit($tmp526 == NULL);
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block94; else goto block95;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:92
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp529 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local21) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp530 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp531 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp532 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:94
org$frostlang$frostc$ClassDecl* $tmp533 = *(&local21);
org$frostlang$frostc$SymbolTable* $tmp534 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp533);
frost$core$String* $tmp535 = *(&local13);
org$frostlang$frostc$Symbol* $tmp536 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp534, $tmp535);
*(&local22) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
org$frostlang$frostc$Symbol* $tmp537 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
*(&local22) = $tmp536;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:95
org$frostlang$frostc$Symbol* $tmp538 = *(&local22);
frost$core$Bit $tmp539 = frost$core$Bit$init$builtin_bit($tmp538 != NULL);
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block96; else goto block97;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:96
org$frostlang$frostc$Symbol* $tmp541 = *(&local22);
org$frostlang$frostc$Symbol$Kind* $tmp542 = &$tmp541->kind;
org$frostlang$frostc$Symbol$Kind $tmp543 = *$tmp542;
frost$core$Int64 $tmp544 = $tmp543.$rawValue;
frost$core$Int64 $tmp545 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:97:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp546 = $tmp544.value;
int64_t $tmp547 = $tmp545.value;
bool $tmp548 = $tmp546 == $tmp547;
frost$core$Bit $tmp549 = frost$core$Bit$init$builtin_bit($tmp548);
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block99; else goto block100;
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:98
org$frostlang$frostc$Symbol* $tmp551 = *(&local22);
frost$core$Bit $tmp552 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$FieldDecl*) $tmp551));
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block102; else goto block103;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:99
org$frostlang$frostc$Symbol* $tmp554 = *(&local22);
*(&local23) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp554)));
org$frostlang$frostc$FieldDecl* $tmp555 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local23) = ((org$frostlang$frostc$FieldDecl*) $tmp554);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:100
org$frostlang$frostc$FieldDecl* $tmp556 = *(&local23);
frost$core$Bit $tmp557 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp556);
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:101
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$lvalue$FieldLValue));
org$frostlang$frostc$lvalue$FieldLValue* $tmp559 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
$fn561 $tmp560 = ($fn561) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp562 = $tmp560(param1);
org$frostlang$frostc$IR$Value* $tmp563 = *(&local14);
org$frostlang$frostc$FieldDecl* $tmp564 = *(&local23);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp559, param0, $tmp562, $tmp563, $tmp564);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp559)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
org$frostlang$frostc$FieldDecl* $tmp565 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local23) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp566 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
*(&local22) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp567 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local21) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp568 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp569 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp570 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp559);
block105:;
org$frostlang$frostc$FieldDecl* $tmp571 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
*(&local23) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block103;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:104
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp572 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local22) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp573 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
*(&local21) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp574 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp575 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp576 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:107
$fn578 $tmp577 = ($fn578) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp579 = $tmp577(param1);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp579, &$s580);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:108
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp581 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
*(&local22) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp582 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
*(&local21) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp583 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp584 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp585 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block98:;
goto block97;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:112
$fn587 $tmp586 = ($fn587) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp588 = $tmp586(param1);
org$frostlang$frostc$ClassDecl* $tmp589 = *(&local21);
frost$core$String** $tmp590 = &$tmp589->name;
frost$core$String* $tmp591 = *$tmp590;
frost$core$String* $tmp592 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s593, $tmp591);
frost$core$String* $tmp594 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp592, &$s595);
frost$core$String* $tmp596 = *(&local13);
frost$core$String* $tmp597 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s598, $tmp596);
frost$core$String* $tmp599 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp597, &$s600);
frost$core$String* $tmp601 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp594, $tmp599);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp588, $tmp601);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:114
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp602 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local22) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp603 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
*(&local21) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp604 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp605 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp606 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block18:;
frost$core$Int64 $tmp607 = (frost$core$Int64) {22};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp608 = $tmp3.value;
int64_t $tmp609 = $tmp607.value;
bool $tmp610 = $tmp608 == $tmp609;
frost$core$Bit $tmp611 = frost$core$Bit$init$builtin_bit($tmp610);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block106; else goto block1;
block106:;
org$frostlang$frostc$Position* $tmp613 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp614 = *$tmp613;
*(&local24) = $tmp614;
frost$core$String** $tmp615 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp616 = *$tmp615;
*(&local25) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
frost$core$String* $tmp617 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local25) = $tmp616;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:117
org$frostlang$frostc$SymbolTable** $tmp618 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp619 = *$tmp618;
frost$core$String* $tmp620 = *(&local25);
org$frostlang$frostc$Symbol* $tmp621 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp619, $tmp620);
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
org$frostlang$frostc$Symbol* $tmp622 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
*(&local26) = $tmp621;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:118
org$frostlang$frostc$Symbol* $tmp623 = *(&local26);
frost$core$Bit $tmp624 = frost$core$Bit$init$builtin_bit($tmp623 != NULL);
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block108; else goto block109;
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:119
org$frostlang$frostc$Symbol* $tmp626 = *(&local26);
org$frostlang$frostc$Symbol$Kind* $tmp627 = &$tmp626->kind;
org$frostlang$frostc$Symbol$Kind $tmp628 = *$tmp627;
frost$core$Int64 $tmp629 = $tmp628.$rawValue;
frost$core$Int64 $tmp630 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:120:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp631 = $tmp629.value;
int64_t $tmp632 = $tmp630.value;
bool $tmp633 = $tmp631 == $tmp632;
frost$core$Bit $tmp634 = frost$core$Bit$init$builtin_bit($tmp633);
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block111; else goto block112;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:121
org$frostlang$frostc$Symbol* $tmp636 = *(&local26);
*(&local27) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Variable*) $tmp636)));
org$frostlang$frostc$Variable* $tmp637 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
*(&local27) = ((org$frostlang$frostc$Variable*) $tmp636);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:122
org$frostlang$frostc$Variable* $tmp638 = *(&local27);
org$frostlang$frostc$Variable$Storage** $tmp639 = &$tmp638->storage;
org$frostlang$frostc$Variable$Storage* $tmp640 = *$tmp639;
frost$core$Int64* $tmp641 = &$tmp640->$rawValue;
frost$core$Int64 $tmp642 = *$tmp641;
frost$core$Int64 $tmp643 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:123:54
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp644 = $tmp642.value;
int64_t $tmp645 = $tmp643.value;
bool $tmp646 = $tmp644 == $tmp645;
frost$core$Bit $tmp647 = frost$core$Bit$init$builtin_bit($tmp646);
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block115; else goto block116;
block115:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:124
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$lvalue$VariableLValue));
org$frostlang$frostc$lvalue$VariableLValue* $tmp649 = (org$frostlang$frostc$lvalue$VariableLValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$lvalue$VariableLValue$class);
org$frostlang$frostc$Position $tmp650 = *(&local24);
org$frostlang$frostc$Symbol* $tmp651 = *(&local26);
org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable($tmp649, param0, $tmp650, ((org$frostlang$frostc$Variable*) $tmp651));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp649)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
org$frostlang$frostc$Variable* $tmp652 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local27) = ((org$frostlang$frostc$Variable*) NULL);
org$frostlang$frostc$Symbol* $tmp653 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp654 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local25) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp649);
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:127
org$frostlang$frostc$Position $tmp655 = *(&local24);
org$frostlang$frostc$Variable* $tmp656 = *(&local27);
frost$core$String** $tmp657 = &((org$frostlang$frostc$Symbol*) $tmp656)->name;
frost$core$String* $tmp658 = *$tmp657;
frost$core$String* $tmp659 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s660, $tmp658);
frost$core$String* $tmp661 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp659, &$s662);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp655, $tmp661);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
org$frostlang$frostc$Variable* $tmp663 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local27) = ((org$frostlang$frostc$Variable*) NULL);
goto block110;
block112:;
frost$core$Int64 $tmp664 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:131:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp665 = $tmp629.value;
int64_t $tmp666 = $tmp664.value;
bool $tmp667 = $tmp665 == $tmp666;
frost$core$Bit $tmp668 = frost$core$Bit$init$builtin_bit($tmp667);
bool $tmp669 = $tmp668.value;
if ($tmp669) goto block118; else goto block110;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:132
org$frostlang$frostc$Symbol* $tmp670 = *(&local26);
*(&local28) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp670)));
org$frostlang$frostc$FieldDecl* $tmp671 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
*(&local28) = ((org$frostlang$frostc$FieldDecl*) $tmp670);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:133
org$frostlang$frostc$FieldDecl* $tmp672 = *(&local28);
org$frostlang$frostc$Annotations** $tmp673 = &$tmp672->annotations;
org$frostlang$frostc$Annotations* $tmp674 = *$tmp673;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from LValue.frost:133:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp675 = &$tmp674->flags;
frost$core$Int64 $tmp676 = *$tmp675;
frost$core$Int64 $tmp677 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp678 = $tmp676.value;
int64_t $tmp679 = $tmp677.value;
int64_t $tmp680 = $tmp678 & $tmp679;
frost$core$Int64 $tmp681 = frost$core$Int64$init$builtin_int64($tmp680);
frost$core$Int64 $tmp682 = (frost$core$Int64) {0};
int64_t $tmp683 = $tmp681.value;
int64_t $tmp684 = $tmp682.value;
bool $tmp685 = $tmp683 != $tmp684;
frost$core$Bit $tmp686 = (frost$core$Bit) {$tmp685};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from LValue.frost:133:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp687 = $tmp686.value;
bool $tmp688 = !$tmp687;
frost$core$Bit $tmp689 = (frost$core$Bit) {$tmp688};
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block120; else goto block121;
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:134
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp691 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp692 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp693 = *(&local24);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp694 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp695 = (frost$core$Int64) {39};
org$frostlang$frostc$Position $tmp696 = *(&local24);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp694, $tmp695, $tmp696);
org$frostlang$frostc$FieldDecl* $tmp697 = *(&local28);
frost$core$String** $tmp698 = &((org$frostlang$frostc$Symbol*) $tmp697)->name;
frost$core$String* $tmp699 = *$tmp698;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp691, $tmp692, $tmp693, $tmp694, $tmp699);
org$frostlang$frostc$lvalue$LValue* $tmp700 = org$frostlang$frostc$lvalue$LValue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$lvalue$LValue$Q(param0, $tmp691);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
org$frostlang$frostc$FieldDecl* $tmp701 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
*(&local28) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp702 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp703 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
*(&local25) = ((frost$core$String*) NULL);
return $tmp700;
block121:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:137
org$frostlang$frostc$FieldDecl* $tmp704 = *(&local28);
frost$core$Bit $tmp705 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp704);
bool $tmp706 = $tmp705.value;
if ($tmp706) goto block125; else goto block126;
block125:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:138
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$lvalue$FieldLValue));
org$frostlang$frostc$lvalue$FieldLValue* $tmp707 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
org$frostlang$frostc$Position $tmp708 = *(&local24);
org$frostlang$frostc$FieldDecl* $tmp709 = *(&local28);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp707, param0, $tmp708, ((org$frostlang$frostc$IR$Value*) NULL), $tmp709);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp707)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
org$frostlang$frostc$FieldDecl* $tmp710 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
*(&local28) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp711 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp712 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local25) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp707);
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:140
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$FieldDecl* $tmp713 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
*(&local28) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp714 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp715 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
*(&local25) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block110:;
goto block109;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:144
org$frostlang$frostc$Position $tmp716 = *(&local24);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp716, &$s717);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:145
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp718 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp719 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local25) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:148
$fn721 $tmp720 = ($fn721) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp722 = $tmp720(param1);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp722, &$s723);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:149
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
return ((org$frostlang$frostc$lvalue$LValue*) NULL);

}

