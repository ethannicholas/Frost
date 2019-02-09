#include "org/frostlang/frostc/statement/Return.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/FieldDecl/Kind.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Compiler/InlineReturn.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/core/Frost.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Weak.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/lvalue/FieldLValue.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/collections/ListView.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Return$class_type org$frostlang$frostc$statement$Return$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Return$cleanup} };

typedef frost$core$Int64 (*$fn18)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn32)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn47)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn66)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn94)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn108)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn123)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn142)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn168)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn191)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn246)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn250)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn255)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn291)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Value* (*$fn318)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef frost$core$Bit (*$fn366)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn391)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn410)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn414)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn419)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn447)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn461)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn476)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn495)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn548)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn551)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn559)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$collections$Iterator* (*$fn567)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn571)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn576)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Type* (*$fn644)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn647)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn651)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn678)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn688)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn706)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn720)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn732)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn744)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn748)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn753)(frost$collections$Iterator*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn778)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$collections$Iterator* (*$fn784)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn788)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn793)(frost$collections$Iterator*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn839)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn846)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x52\x65\x74\x75\x72\x6e", 37, 6365785573033434727, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s503 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s562 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s659 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s703 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s735 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s737 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20", 32, 131125242360168676, NULL };

void org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$FieldDecl* local4 = NULL;
org$frostlang$frostc$FieldDecl$Kind local5;
org$frostlang$frostc$FieldDecl$Kind local6;
frost$core$Bit local7;
org$frostlang$frostc$IR$Value* local8 = NULL;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
frost$core$Bit local11;
org$frostlang$frostc$IR$Value* local12 = NULL;
frost$core$Bit local13;
org$frostlang$frostc$Compiler$EnclosingContext* local14 = NULL;
frost$core$Int64 local15;
frost$core$Int64 local16;
org$frostlang$frostc$Compiler$EnclosingContext* local17 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local18 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local19 = NULL;
org$frostlang$frostc$Compiler$InlineReturn* local20 = NULL;
org$frostlang$frostc$IR$Block$ID local21;
frost$core$Int64 local22;
frost$core$Int64 local23;
frost$core$Bit local24;
org$frostlang$frostc$Type$Kind local25;
org$frostlang$frostc$Type$Kind local26;
org$frostlang$frostc$MethodDecl$Kind local27;
org$frostlang$frostc$MethodDecl$Kind local28;
org$frostlang$frostc$Compiler$EnclosingContext* local29 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local30 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local31 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local32 = NULL;
org$frostlang$frostc$Compiler$InlineReturn* local33 = NULL;
org$frostlang$frostc$IR$Block$ID local34;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:24
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:25
frost$collections$Stack** $tmp5 = &param0->currentClass;
frost$collections$Stack* $tmp6 = *$tmp5;
frost$core$Int64 $tmp7 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Return.frost:25:50
frost$core$Int64 $tmp8 = (frost$core$Int64) {0};
int64_t $tmp9 = $tmp7.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 >= $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp14 = &$tmp6->contents;
frost$collections$Array* $tmp15 = *$tmp14;
ITable* $tmp16 = ((frost$collections$CollectionView*) $tmp15)->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[0];
frost$core$Int64 $tmp19 = $tmp17(((frost$collections$CollectionView*) $tmp15));
int64_t $tmp20 = $tmp7.value;
int64_t $tmp21 = $tmp19.value;
bool $tmp22 = $tmp20 < $tmp21;
frost$core$Bit $tmp23 = (frost$core$Bit) {$tmp22};
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp25 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s26, $tmp25, &$s27);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp28 = &$tmp6->contents;
frost$collections$Array* $tmp29 = *$tmp28;
ITable* $tmp30 = ((frost$collections$CollectionView*) $tmp29)->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp30 = $tmp30->next;
}
$fn32 $tmp31 = $tmp30->methods[0];
frost$core$Int64 $tmp33 = $tmp31(((frost$collections$CollectionView*) $tmp29));
int64_t $tmp34 = $tmp33.value;
int64_t $tmp35 = $tmp7.value;
bool $tmp36 = $tmp34 > $tmp35;
frost$core$Bit $tmp37 = (frost$core$Bit) {$tmp36};
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp39 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s40, $tmp39);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp41 = &$tmp6->contents;
frost$collections$Array* $tmp42 = *$tmp41;
frost$collections$Array** $tmp43 = &$tmp6->contents;
frost$collections$Array* $tmp44 = *$tmp43;
ITable* $tmp45 = ((frost$collections$CollectionView*) $tmp44)->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
$fn47 $tmp46 = $tmp45->methods[0];
frost$core$Int64 $tmp48 = $tmp46(((frost$collections$CollectionView*) $tmp44));
frost$core$Int64 $tmp49 = (frost$core$Int64) {1};
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49.value;
int64_t $tmp52 = $tmp50 - $tmp51;
frost$core$Int64 $tmp53 = (frost$core$Int64) {$tmp52};
int64_t $tmp54 = $tmp53.value;
int64_t $tmp55 = $tmp7.value;
int64_t $tmp56 = $tmp54 - $tmp55;
frost$core$Int64 $tmp57 = (frost$core$Int64) {$tmp56};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp58 = (frost$core$Int64) {0};
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58.value;
bool $tmp61 = $tmp59 >= $tmp60;
frost$core$Bit $tmp62 = (frost$core$Bit) {$tmp61};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block11; else goto block10;
block11:;
ITable* $tmp64 = ((frost$collections$CollectionView*) $tmp42)->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp64 = $tmp64->next;
}
$fn66 $tmp65 = $tmp64->methods[0];
frost$core$Int64 $tmp67 = $tmp65(((frost$collections$CollectionView*) $tmp42));
int64_t $tmp68 = $tmp57.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 < $tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp73 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s74, $tmp73, &$s75);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp76 = &$tmp42->data;
frost$core$Object** $tmp77 = *$tmp76;
int64_t $tmp78 = $tmp57.value;
frost$core$Object* $tmp79 = $tmp77[$tmp78];
frost$core$Frost$ref$frost$core$Object$Q($tmp79);
frost$core$Frost$ref$frost$core$Object$Q($tmp79);
frost$core$Frost$unref$frost$core$Object$Q($tmp79);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp79)));
org$frostlang$frostc$ClassDecl* $tmp80 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) $tmp79);
frost$core$Frost$unref$frost$core$Object$Q($tmp79);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:26
frost$collections$Stack** $tmp81 = &param0->currentMethod;
frost$collections$Stack* $tmp82 = *$tmp81;
frost$core$Int64 $tmp83 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Return.frost:26:52
frost$core$Int64 $tmp84 = (frost$core$Int64) {0};
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84.value;
bool $tmp87 = $tmp85 >= $tmp86;
frost$core$Bit $tmp88 = (frost$core$Bit) {$tmp87};
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block15; else goto block14;
block15:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp90 = &$tmp82->contents;
frost$collections$Array* $tmp91 = *$tmp90;
ITable* $tmp92 = ((frost$collections$CollectionView*) $tmp91)->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[0];
frost$core$Int64 $tmp95 = $tmp93(((frost$collections$CollectionView*) $tmp91));
int64_t $tmp96 = $tmp83.value;
int64_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 < $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp101 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s102, $tmp101, &$s103);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp104 = &$tmp82->contents;
frost$collections$Array* $tmp105 = *$tmp104;
ITable* $tmp106 = ((frost$collections$CollectionView*) $tmp105)->$class->itable;
while ($tmp106->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp106 = $tmp106->next;
}
$fn108 $tmp107 = $tmp106->methods[0];
frost$core$Int64 $tmp109 = $tmp107(((frost$collections$CollectionView*) $tmp105));
int64_t $tmp110 = $tmp109.value;
int64_t $tmp111 = $tmp83.value;
bool $tmp112 = $tmp110 > $tmp111;
frost$core$Bit $tmp113 = (frost$core$Bit) {$tmp112};
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp115 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s116, $tmp115);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp117 = &$tmp82->contents;
frost$collections$Array* $tmp118 = *$tmp117;
frost$collections$Array** $tmp119 = &$tmp82->contents;
frost$collections$Array* $tmp120 = *$tmp119;
ITable* $tmp121 = ((frost$collections$CollectionView*) $tmp120)->$class->itable;
while ($tmp121->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp121 = $tmp121->next;
}
$fn123 $tmp122 = $tmp121->methods[0];
frost$core$Int64 $tmp124 = $tmp122(((frost$collections$CollectionView*) $tmp120));
frost$core$Int64 $tmp125 = (frost$core$Int64) {1};
int64_t $tmp126 = $tmp124.value;
int64_t $tmp127 = $tmp125.value;
int64_t $tmp128 = $tmp126 - $tmp127;
frost$core$Int64 $tmp129 = (frost$core$Int64) {$tmp128};
int64_t $tmp130 = $tmp129.value;
int64_t $tmp131 = $tmp83.value;
int64_t $tmp132 = $tmp130 - $tmp131;
frost$core$Int64 $tmp133 = (frost$core$Int64) {$tmp132};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp134 = (frost$core$Int64) {0};
int64_t $tmp135 = $tmp133.value;
int64_t $tmp136 = $tmp134.value;
bool $tmp137 = $tmp135 >= $tmp136;
frost$core$Bit $tmp138 = (frost$core$Bit) {$tmp137};
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block22; else goto block21;
block22:;
ITable* $tmp140 = ((frost$collections$CollectionView*) $tmp118)->$class->itable;
while ($tmp140->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp140 = $tmp140->next;
}
$fn142 $tmp141 = $tmp140->methods[0];
frost$core$Int64 $tmp143 = $tmp141(((frost$collections$CollectionView*) $tmp118));
int64_t $tmp144 = $tmp133.value;
int64_t $tmp145 = $tmp143.value;
bool $tmp146 = $tmp144 < $tmp145;
frost$core$Bit $tmp147 = (frost$core$Bit) {$tmp146};
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp149 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s150, $tmp149, &$s151);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp152 = &$tmp118->data;
frost$core$Object** $tmp153 = *$tmp152;
int64_t $tmp154 = $tmp133.value;
frost$core$Object* $tmp155 = $tmp153[$tmp154];
frost$core$Frost$ref$frost$core$Object$Q($tmp155);
frost$core$Frost$ref$frost$core$Object$Q($tmp155);
frost$core$Frost$unref$frost$core$Object$Q($tmp155);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp155)));
org$frostlang$frostc$MethodDecl* $tmp156 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) $tmp155);
frost$core$Frost$unref$frost$core$Object$Q($tmp155);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:27
org$frostlang$frostc$MethodDecl* $tmp157 = *(&local2);
frost$core$String** $tmp158 = &((org$frostlang$frostc$Symbol*) $tmp157)->name;
frost$core$String* $tmp159 = *$tmp158;
frost$core$Bit $tmp160 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp159, &$s161);
bool $tmp162 = $tmp160.value;
if ($tmp162) goto block26; else goto block24;
block26:;
org$frostlang$frostc$MethodDecl* $tmp163 = *(&local2);
frost$collections$Array** $tmp164 = &$tmp163->parameters;
frost$collections$Array* $tmp165 = *$tmp164;
ITable* $tmp166 = ((frost$collections$CollectionView*) $tmp165)->$class->itable;
while ($tmp166->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[0];
frost$core$Int64 $tmp169 = $tmp167(((frost$collections$CollectionView*) $tmp165));
frost$core$Int64 $tmp170 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Return.frost:27:76
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp171 = $tmp169.value;
int64_t $tmp172 = $tmp170.value;
bool $tmp173 = $tmp171 == $tmp172;
frost$core$Bit $tmp174 = frost$core$Bit$init$builtin_bit($tmp173);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block25; else goto block24;
block25:;
org$frostlang$frostc$MethodDecl* $tmp176 = *(&local2);
frost$core$Weak** $tmp177 = &$tmp176->owner;
frost$core$Weak* $tmp178 = *$tmp177;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Return.frost:28:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp179 = &$tmp178->_valid;
frost$core$Bit $tmp180 = *$tmp179;
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp182 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s183, $tmp182);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp184 = &$tmp178->value;
frost$core$Object* $tmp185 = *$tmp184;
frost$core$Frost$ref$frost$core$Object$Q($tmp185);
frost$core$String** $tmp186 = &((org$frostlang$frostc$ClassDecl*) $tmp185)->name;
frost$core$String* $tmp187 = *$tmp186;
ITable* $tmp189 = ((frost$core$Equatable*) $tmp187)->$class->itable;
while ($tmp189->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp189 = $tmp189->next;
}
$fn191 $tmp190 = $tmp189->methods[1];
frost$core$Bit $tmp192 = $tmp190(((frost$core$Equatable*) $tmp187), ((frost$core$Equatable*) &$s188));
bool $tmp193 = $tmp192.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp185);
if ($tmp193) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:30
org$frostlang$frostc$ClassDecl* $tmp194 = *(&local1);
org$frostlang$frostc$Type** $tmp195 = &$tmp194->rawSuper;
org$frostlang$frostc$Type* $tmp196 = *$tmp195;
frost$core$Bit $tmp197 = frost$core$Bit$init$builtin_bit($tmp196 != NULL);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block34; else goto block33;
block34:;
org$frostlang$frostc$ClassDecl* $tmp199 = *(&local1);
frost$core$Bit $tmp200 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, $tmp199);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Return.frost:30:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp201 = $tmp200.value;
bool $tmp202 = !$tmp201;
frost$core$Bit $tmp203 = (frost$core$Bit) {$tmp202};
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:31
org$frostlang$frostc$ClassDecl* $tmp205 = *(&local1);
org$frostlang$frostc$Type** $tmp206 = &$tmp205->type;
org$frostlang$frostc$Type* $tmp207 = *$tmp206;
org$frostlang$frostc$ClassDecl* $tmp208 = *(&local1);
org$frostlang$frostc$Type** $tmp209 = &$tmp208->rawSuper;
org$frostlang$frostc$Type* $tmp210 = *$tmp209;
org$frostlang$frostc$Type* $tmp211 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp207, $tmp210);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
org$frostlang$frostc$Type* $tmp212 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local3) = $tmp211;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:32
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp213 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp214 = (frost$core$Int64) {9};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp215 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp216 = (frost$core$Int64) {16};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp217 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp218 = (frost$core$Int64) {41};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp217, $tmp218, param1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp215, $tmp216, param1, $tmp217, &$s219);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp220 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp220);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp213, $tmp214, param1, $tmp215, $tmp220);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp213);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
org$frostlang$frostc$Type* $tmp221 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block33;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:36
frost$core$Bit* $tmp222 = &param0->inFieldCleanup;
frost$core$Bit $tmp223 = *$tmp222;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Return.frost:36:20
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp224 = $tmp223.value;
bool $tmp225 = !$tmp224;
frost$core$Bit $tmp226 = (frost$core$Bit) {$tmp225};
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp228 = (frost$core$Int64) {36};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s229, $tmp228);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:37
frost$core$Bit $tmp230 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp231 = &param0->inFieldCleanup;
*$tmp231 = $tmp230;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:38
org$frostlang$frostc$MethodDecl* $tmp232 = *(&local2);
frost$core$Weak** $tmp233 = &$tmp232->owner;
frost$core$Weak* $tmp234 = *$tmp233;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Return.frost:38:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp235 = &$tmp234->_valid;
frost$core$Bit $tmp236 = *$tmp235;
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp238 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s239, $tmp238);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp240 = &$tmp234->value;
frost$core$Object* $tmp241 = *$tmp240;
frost$core$Frost$ref$frost$core$Object$Q($tmp241);
frost$collections$Array** $tmp242 = &((org$frostlang$frostc$ClassDecl*) $tmp241)->fields;
frost$collections$Array* $tmp243 = *$tmp242;
ITable* $tmp244 = ((frost$collections$Iterable*) $tmp243)->$class->itable;
while ($tmp244->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp244 = $tmp244->next;
}
$fn246 $tmp245 = $tmp244->methods[0];
frost$collections$Iterator* $tmp247 = $tmp245(((frost$collections$Iterable*) $tmp243));
goto block43;
block43:;
ITable* $tmp248 = $tmp247->$class->itable;
while ($tmp248->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp248 = $tmp248->next;
}
$fn250 $tmp249 = $tmp248->methods[0];
frost$core$Bit $tmp251 = $tmp249($tmp247);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block45; else goto block44;
block44:;
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp253 = $tmp247->$class->itable;
while ($tmp253->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp253 = $tmp253->next;
}
$fn255 $tmp254 = $tmp253->methods[1];
frost$core$Object* $tmp256 = $tmp254($tmp247);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp256)));
org$frostlang$frostc$FieldDecl* $tmp257 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) $tmp256);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:39
org$frostlang$frostc$FieldDecl* $tmp258 = *(&local4);
frost$core$Bit $tmp259 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp258);
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block50; else goto block47;
block50:;
org$frostlang$frostc$FieldDecl* $tmp261 = *(&local4);
org$frostlang$frostc$Annotations** $tmp262 = &$tmp261->annotations;
org$frostlang$frostc$Annotations* $tmp263 = *$tmp262;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Return.frost:39:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp264 = &$tmp263->flags;
frost$core$Int64 $tmp265 = *$tmp264;
frost$core$Int64 $tmp266 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp267 = $tmp265.value;
int64_t $tmp268 = $tmp266.value;
int64_t $tmp269 = $tmp267 & $tmp268;
frost$core$Int64 $tmp270 = frost$core$Int64$init$builtin_int64($tmp269);
frost$core$Int64 $tmp271 = (frost$core$Int64) {0};
int64_t $tmp272 = $tmp270.value;
int64_t $tmp273 = $tmp271.value;
bool $tmp274 = $tmp272 != $tmp273;
frost$core$Bit $tmp275 = (frost$core$Bit) {$tmp274};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Return.frost:39:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp276 = $tmp275.value;
bool $tmp277 = !$tmp276;
frost$core$Bit $tmp278 = (frost$core$Bit) {$tmp277};
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block49; else goto block47;
block49:;
org$frostlang$frostc$FieldDecl* $tmp280 = *(&local4);
org$frostlang$frostc$FieldDecl$Kind* $tmp281 = &$tmp280->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp282 = *$tmp281;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp283;
$tmp283 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp283->value = $tmp282;
frost$core$Int64 $tmp284 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Return.frost:40:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp285 = &(&local6)->$rawValue;
*$tmp285 = $tmp284;
org$frostlang$frostc$FieldDecl$Kind $tmp286 = *(&local6);
*(&local5) = $tmp286;
org$frostlang$frostc$FieldDecl$Kind $tmp287 = *(&local5);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp288;
$tmp288 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp288->value = $tmp287;
ITable* $tmp289 = ((frost$core$Equatable*) $tmp283)->$class->itable;
while ($tmp289->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp289 = $tmp289->next;
}
$fn291 $tmp290 = $tmp289->methods[1];
frost$core$Bit $tmp292 = $tmp290(((frost$core$Equatable*) $tmp283), ((frost$core$Equatable*) $tmp288));
bool $tmp293 = $tmp292.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp288)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp283)));
if ($tmp293) goto block48; else goto block47;
block48:;
org$frostlang$frostc$FieldDecl* $tmp294 = *(&local4);
org$frostlang$frostc$Type** $tmp295 = &$tmp294->type;
org$frostlang$frostc$Type* $tmp296 = *$tmp295;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:40:87
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:622
frost$core$Bit $tmp297 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp296);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:622:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp298 = $tmp297.value;
bool $tmp299 = !$tmp298;
frost$core$Bit $tmp300 = (frost$core$Bit) {$tmp299};
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:623
frost$core$Bit $tmp302 = frost$core$Bit$init$builtin_bit(false);
*(&local7) = $tmp302;
goto block55;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:625
frost$core$Bit $tmp303 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp296);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:625:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp304 = $tmp303.value;
bool $tmp305 = !$tmp304;
frost$core$Bit $tmp306 = (frost$core$Bit) {$tmp305};
*(&local7) = $tmp306;
goto block55;
block55:;
frost$core$Bit $tmp307 = *(&local7);
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:41
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$lvalue$FieldLValue));
org$frostlang$frostc$lvalue$FieldLValue* $tmp309 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp310 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp311 = (frost$core$Int64) {22};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp310, $tmp311, param1, &$s312);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp313 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp314 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp313, $tmp314);
org$frostlang$frostc$IR$Value* $tmp315 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp310, $tmp313);
org$frostlang$frostc$FieldDecl* $tmp316 = *(&local4);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp309, param0, param1, $tmp315, $tmp316);
$fn318 $tmp317 = ($fn318) $tmp309->$class->vtable[3];
org$frostlang$frostc$IR$Value* $tmp319 = $tmp317($tmp309);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
org$frostlang$frostc$IR$Value* $tmp320 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
*(&local8) = $tmp319;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:45
org$frostlang$frostc$IR$Value* $tmp321 = *(&local8);
frost$core$Bit $tmp322 = frost$core$Bit$init$builtin_bit($tmp321 == NULL);
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:46
org$frostlang$frostc$IR$Value* $tmp324 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp256);
org$frostlang$frostc$FieldDecl* $tmp325 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$core$Frost$unref$frost$core$Object$Q($tmp241);
org$frostlang$frostc$MethodDecl* $tmp326 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp327 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp328 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:48
org$frostlang$frostc$IR$Value* $tmp329 = *(&local8);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, $tmp329);
org$frostlang$frostc$IR$Value* $tmp330 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block47;
block47:;
frost$core$Frost$unref$frost$core$Object$Q($tmp256);
org$frostlang$frostc$FieldDecl* $tmp331 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block43;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$core$Frost$unref$frost$core$Object$Q($tmp241);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:51
frost$core$Bit* $tmp332 = &param0->inFieldCleanup;
frost$core$Bit $tmp333 = *$tmp332;
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp335 = (frost$core$Int64) {51};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s336, $tmp335);
abort(); // unreachable
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:52
frost$core$Bit $tmp337 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp338 = &param0->inFieldCleanup;
*$tmp338 = $tmp337;
goto block24;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:54
frost$core$Bit $tmp339 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block64; else goto block66;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:55
org$frostlang$frostc$MethodDecl* $tmp341 = *(&local2);
org$frostlang$frostc$Type** $tmp342 = &$tmp341->returnType;
org$frostlang$frostc$Type* $tmp343 = *$tmp342;
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Return.frost:55:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp344 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp345 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp346 = &(&local10)->$rawValue;
*$tmp346 = $tmp345;
org$frostlang$frostc$Type$Kind $tmp347 = *(&local10);
*(&local9) = $tmp347;
org$frostlang$frostc$Type$Kind $tmp348 = *(&local9);
org$frostlang$frostc$Position $tmp349 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp350 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp344, &$s351, $tmp348, $tmp349, $tmp350);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:55:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp352 = &((org$frostlang$frostc$Symbol*) $tmp343)->name;
frost$core$String* $tmp353 = *$tmp352;
frost$core$String** $tmp354 = &((org$frostlang$frostc$Symbol*) $tmp344)->name;
frost$core$String* $tmp355 = *$tmp354;
frost$core$Bit $tmp356 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp353, $tmp355);
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block72; else goto block73;
block72:;
org$frostlang$frostc$Type$Kind* $tmp358 = &$tmp343->typeKind;
org$frostlang$frostc$Type$Kind $tmp359 = *$tmp358;
org$frostlang$frostc$Type$Kind$wrapper* $tmp360;
$tmp360 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp360->value = $tmp359;
org$frostlang$frostc$Type$Kind* $tmp361 = &$tmp344->typeKind;
org$frostlang$frostc$Type$Kind $tmp362 = *$tmp361;
org$frostlang$frostc$Type$Kind$wrapper* $tmp363;
$tmp363 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp363->value = $tmp362;
ITable* $tmp364 = ((frost$core$Equatable*) $tmp360)->$class->itable;
while ($tmp364->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp364 = $tmp364->next;
}
$fn366 $tmp365 = $tmp364->methods[0];
frost$core$Bit $tmp367 = $tmp365(((frost$core$Equatable*) $tmp360), ((frost$core$Equatable*) $tmp363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp363)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp360)));
*(&local11) = $tmp367;
goto block74;
block73:;
*(&local11) = $tmp356;
goto block74;
block74:;
frost$core$Bit $tmp368 = *(&local11);
bool $tmp369 = $tmp368.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
if ($tmp369) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:56
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s370);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:57
org$frostlang$frostc$MethodDecl* $tmp371 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp372 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp373 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:59
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp374 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp375 = (frost$core$Int64) {3};
org$frostlang$frostc$MethodDecl* $tmp376 = *(&local2);
org$frostlang$frostc$Type** $tmp377 = &$tmp376->returnType;
org$frostlang$frostc$Type* $tmp378 = *$tmp377;
frost$core$Bit $tmp379 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp374, $tmp375, $tmp378, $tmp379);
org$frostlang$frostc$IR$Value* $tmp380 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp374);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
org$frostlang$frostc$IR$Value* $tmp381 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local12) = $tmp380;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:61
org$frostlang$frostc$IR$Value* $tmp382 = *(&local12);
frost$core$Bit $tmp383 = frost$core$Bit$init$builtin_bit($tmp382 == NULL);
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:62
org$frostlang$frostc$IR$Value* $tmp385 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp386 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp387 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp388 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:64
org$frostlang$frostc$IR$Value* $tmp389 = *(&local12);
$fn391 $tmp390 = ($fn391) $tmp389->$class->vtable[2];
org$frostlang$frostc$Type* $tmp392 = $tmp390($tmp389);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:64:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:622
frost$core$Bit $tmp393 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp392);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:622:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp394 = $tmp393.value;
bool $tmp395 = !$tmp394;
frost$core$Bit $tmp396 = (frost$core$Bit) {$tmp395};
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:623
frost$core$Bit $tmp398 = frost$core$Bit$init$builtin_bit(false);
*(&local13) = $tmp398;
goto block79;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:625
frost$core$Bit $tmp399 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp392);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:625:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp400 = $tmp399.value;
bool $tmp401 = !$tmp400;
frost$core$Bit $tmp402 = (frost$core$Bit) {$tmp401};
*(&local13) = $tmp402;
goto block79;
block79:;
frost$core$Bit $tmp403 = *(&local13);
bool $tmp404 = $tmp403.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
if ($tmp404) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:65
org$frostlang$frostc$IR$Value* $tmp405 = *(&local12);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp405);
goto block78;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:67
// begin inline call to method org.frostlang.frostc.Compiler.leaveAllScopes() from Return.frost:67:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5299
frost$collections$Stack** $tmp406 = &param0->enclosingContexts;
frost$collections$Stack* $tmp407 = *$tmp406;
ITable* $tmp408 = ((frost$collections$Iterable*) $tmp407)->$class->itable;
while ($tmp408->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp408 = $tmp408->next;
}
$fn410 $tmp409 = $tmp408->methods[0];
frost$collections$Iterator* $tmp411 = $tmp409(((frost$collections$Iterable*) $tmp407));
goto block85;
block85:;
ITable* $tmp412 = $tmp411->$class->itable;
while ($tmp412->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp412 = $tmp412->next;
}
$fn414 $tmp413 = $tmp412->methods[0];
frost$core$Bit $tmp415 = $tmp413($tmp411);
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block87; else goto block86;
block86:;
*(&local14) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp417 = $tmp411->$class->itable;
while ($tmp417->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp417 = $tmp417->next;
}
$fn419 $tmp418 = $tmp417->methods[1];
frost$core$Object* $tmp420 = $tmp418($tmp411);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp420)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp421 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local14) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp420);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5300
org$frostlang$frostc$Compiler$EnclosingContext* $tmp422 = *(&local14);
frost$core$Int64* $tmp423 = &$tmp422->$rawValue;
frost$core$Int64 $tmp424 = *$tmp423;
frost$core$Int64 $tmp425 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:5301:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp426 = $tmp424.value;
int64_t $tmp427 = $tmp425.value;
bool $tmp428 = $tmp426 == $tmp427;
frost$core$Bit $tmp429 = frost$core$Bit$init$builtin_bit($tmp428);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block89; else goto block88;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5302
frost$core$Frost$unref$frost$core$Object$Q($tmp420);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp431 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
*(&local14) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
goto block84;
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5305
org$frostlang$frostc$Compiler$EnclosingContext* $tmp432 = *(&local14);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext(param0, $tmp432);
frost$core$Frost$unref$frost$core$Object$Q($tmp420);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp433 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
*(&local14) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block85;
block87:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
goto block84;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:68
goto block91;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:69
frost$collections$Stack** $tmp434 = &param0->enclosingContexts;
frost$collections$Stack* $tmp435 = *$tmp434;
frost$core$Int64 $tmp436 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Return.frost:69:49
frost$core$Int64 $tmp437 = (frost$core$Int64) {0};
int64_t $tmp438 = $tmp436.value;
int64_t $tmp439 = $tmp437.value;
bool $tmp440 = $tmp438 >= $tmp439;
frost$core$Bit $tmp441 = (frost$core$Bit) {$tmp440};
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block96; else goto block95;
block96:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp443 = &$tmp435->contents;
frost$collections$Array* $tmp444 = *$tmp443;
ITable* $tmp445 = ((frost$collections$CollectionView*) $tmp444)->$class->itable;
while ($tmp445->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp445 = $tmp445->next;
}
$fn447 $tmp446 = $tmp445->methods[0];
frost$core$Int64 $tmp448 = $tmp446(((frost$collections$CollectionView*) $tmp444));
int64_t $tmp449 = $tmp436.value;
int64_t $tmp450 = $tmp448.value;
bool $tmp451 = $tmp449 < $tmp450;
frost$core$Bit $tmp452 = (frost$core$Bit) {$tmp451};
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block94; else goto block95;
block95:;
frost$core$Int64 $tmp454 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s455, $tmp454, &$s456);
abort(); // unreachable
block94:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp457 = &$tmp435->contents;
frost$collections$Array* $tmp458 = *$tmp457;
ITable* $tmp459 = ((frost$collections$CollectionView*) $tmp458)->$class->itable;
while ($tmp459->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp459 = $tmp459->next;
}
$fn461 $tmp460 = $tmp459->methods[0];
frost$core$Int64 $tmp462 = $tmp460(((frost$collections$CollectionView*) $tmp458));
int64_t $tmp463 = $tmp462.value;
int64_t $tmp464 = $tmp436.value;
bool $tmp465 = $tmp463 > $tmp464;
frost$core$Bit $tmp466 = (frost$core$Bit) {$tmp465};
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block98; else goto block99;
block99:;
frost$core$Int64 $tmp468 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s469, $tmp468);
abort(); // unreachable
block98:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp470 = &$tmp435->contents;
frost$collections$Array* $tmp471 = *$tmp470;
frost$collections$Array** $tmp472 = &$tmp435->contents;
frost$collections$Array* $tmp473 = *$tmp472;
ITable* $tmp474 = ((frost$collections$CollectionView*) $tmp473)->$class->itable;
while ($tmp474->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp474 = $tmp474->next;
}
$fn476 $tmp475 = $tmp474->methods[0];
frost$core$Int64 $tmp477 = $tmp475(((frost$collections$CollectionView*) $tmp473));
frost$core$Int64 $tmp478 = (frost$core$Int64) {1};
int64_t $tmp479 = $tmp477.value;
int64_t $tmp480 = $tmp478.value;
int64_t $tmp481 = $tmp479 - $tmp480;
frost$core$Int64 $tmp482 = (frost$core$Int64) {$tmp481};
int64_t $tmp483 = $tmp482.value;
int64_t $tmp484 = $tmp436.value;
int64_t $tmp485 = $tmp483 - $tmp484;
frost$core$Int64 $tmp486 = (frost$core$Int64) {$tmp485};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp487 = (frost$core$Int64) {0};
int64_t $tmp488 = $tmp486.value;
int64_t $tmp489 = $tmp487.value;
bool $tmp490 = $tmp488 >= $tmp489;
frost$core$Bit $tmp491 = (frost$core$Bit) {$tmp490};
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block103; else goto block102;
block103:;
ITable* $tmp493 = ((frost$collections$CollectionView*) $tmp471)->$class->itable;
while ($tmp493->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp493 = $tmp493->next;
}
$fn495 $tmp494 = $tmp493->methods[0];
frost$core$Int64 $tmp496 = $tmp494(((frost$collections$CollectionView*) $tmp471));
int64_t $tmp497 = $tmp486.value;
int64_t $tmp498 = $tmp496.value;
bool $tmp499 = $tmp497 < $tmp498;
frost$core$Bit $tmp500 = (frost$core$Bit) {$tmp499};
bool $tmp501 = $tmp500.value;
if ($tmp501) goto block101; else goto block102;
block102:;
frost$core$Int64 $tmp502 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s503, $tmp502, &$s504);
abort(); // unreachable
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp505 = &$tmp471->data;
frost$core$Object** $tmp506 = *$tmp505;
int64_t $tmp507 = $tmp486.value;
frost$core$Object* $tmp508 = $tmp506[$tmp507];
frost$core$Frost$ref$frost$core$Object$Q($tmp508);
frost$core$Frost$ref$frost$core$Object$Q($tmp508);
frost$core$Frost$unref$frost$core$Object$Q($tmp508);
frost$core$Int64* $tmp509 = &((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp508)->$rawValue;
frost$core$Int64 $tmp510 = *$tmp509;
frost$core$Int64 $tmp511 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Return.frost:70:51
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp512 = $tmp510.value;
int64_t $tmp513 = $tmp511.value;
bool $tmp514 = $tmp512 == $tmp513;
frost$core$Bit $tmp515 = frost$core$Bit$init$builtin_bit($tmp514);
bool $tmp516 = $tmp515.value;
if ($tmp516) goto block105; else goto block106;
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:71
frost$collections$Stack** $tmp517 = &param0->enclosingContexts;
frost$collections$Stack* $tmp518 = *$tmp517;
frost$core$Object* $tmp519 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp518);
frost$core$Frost$unref$frost$core$Object$Q($tmp519);
frost$core$Frost$unref$frost$core$Object$Q($tmp508);
goto block91;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:74
frost$core$Frost$unref$frost$core$Object$Q($tmp508);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:78
org$frostlang$frostc$Variable** $tmp520 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp521 = *$tmp520;
frost$core$Bit $tmp522 = frost$core$Bit$init$builtin_bit($tmp521 != NULL);
bool $tmp523 = $tmp522.value;
if ($tmp523) goto block108; else goto block110;
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:80
org$frostlang$frostc$Variable** $tmp524 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp525 = *$tmp524;
org$frostlang$frostc$Variable$Storage** $tmp526 = &$tmp525->storage;
org$frostlang$frostc$Variable$Storage* $tmp527 = *$tmp526;
frost$core$Int64* $tmp528 = &$tmp527->$rawValue;
frost$core$Int64 $tmp529 = *$tmp528;
frost$core$Int64 $tmp530 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Return.frost:81:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp531 = $tmp529.value;
int64_t $tmp532 = $tmp530.value;
bool $tmp533 = $tmp531 == $tmp532;
frost$core$Bit $tmp534 = frost$core$Bit$init$builtin_bit($tmp533);
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block112; else goto block113;
block112:;
frost$core$Int64* $tmp536 = (frost$core$Int64*) ($tmp527->$data + 0);
frost$core$Int64 $tmp537 = *$tmp536;
*(&local16) = $tmp537;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:82
frost$core$Int64 $tmp538 = *(&local16);
*(&local15) = $tmp538;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:88
org$frostlang$frostc$IR* $tmp539 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp540 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp541 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp542 = *(&local12);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp543 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp544 = (frost$core$Int64) {2};
frost$core$Int64 $tmp545 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp546 = *(&local12);
$fn548 $tmp547 = ($fn548) $tmp546->$class->vtable[2];
org$frostlang$frostc$Type* $tmp549 = $tmp547($tmp546);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp543, $tmp544, $tmp545, $tmp549);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp540, $tmp541, param1, $tmp542, $tmp543);
$fn551 $tmp550 = ($fn551) $tmp539->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp552 = $tmp550($tmp539, $tmp540);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:90
org$frostlang$frostc$IR* $tmp553 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp554 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp555 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID$nullable* $tmp556 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp557 = *$tmp556;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp554, $tmp555, param1, ((org$frostlang$frostc$IR$Block$ID) $tmp557.value));
$fn559 $tmp558 = ($fn559) $tmp553->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp560 = $tmp558($tmp553, $tmp554);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
goto block109;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:85
frost$core$Int64 $tmp561 = (frost$core$Int64) {85};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s562, $tmp561);
abort(); // unreachable
block110:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:93
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from Return.frost:93:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5705
frost$collections$Stack** $tmp563 = &param0->enclosingContexts;
frost$collections$Stack* $tmp564 = *$tmp563;
ITable* $tmp565 = ((frost$collections$Iterable*) $tmp564)->$class->itable;
while ($tmp565->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp565 = $tmp565->next;
}
$fn567 $tmp566 = $tmp565->methods[0];
frost$collections$Iterator* $tmp568 = $tmp566(((frost$collections$Iterable*) $tmp564));
goto block116;
block116:;
ITable* $tmp569 = $tmp568->$class->itable;
while ($tmp569->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp569 = $tmp569->next;
}
$fn571 $tmp570 = $tmp569->methods[0];
frost$core$Bit $tmp572 = $tmp570($tmp568);
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block118; else goto block117;
block117:;
*(&local18) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp574 = $tmp568->$class->itable;
while ($tmp574->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp574 = $tmp574->next;
}
$fn576 $tmp575 = $tmp574->methods[1];
frost$core$Object* $tmp577 = $tmp575($tmp568);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp577)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp578 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
*(&local18) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp577);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5706
org$frostlang$frostc$Compiler$EnclosingContext* $tmp579 = *(&local18);
frost$core$Int64* $tmp580 = &$tmp579->$rawValue;
frost$core$Int64 $tmp581 = *$tmp580;
frost$core$Int64 $tmp582 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:5707:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp583 = $tmp581.value;
int64_t $tmp584 = $tmp582.value;
bool $tmp585 = $tmp583 == $tmp584;
frost$core$Bit $tmp586 = frost$core$Bit$init$builtin_bit($tmp585);
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block120; else goto block119;
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5708
org$frostlang$frostc$Compiler$EnclosingContext* $tmp588 = *(&local18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
frost$core$Frost$unref$frost$core$Object$Q($tmp577);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp589 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
*(&local18) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
*(&local17) = $tmp588;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
goto block115;
block119:;
frost$core$Frost$unref$frost$core$Object$Q($tmp577);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp590 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
*(&local18) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block116;
block118:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5712
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
*(&local17) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
goto block115;
block115:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp591 = *(&local17);
*(&local19) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp592 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
*(&local19) = $tmp591;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:94
org$frostlang$frostc$Compiler$EnclosingContext* $tmp593 = *(&local19);
frost$core$Bit $tmp594 = frost$core$Bit$init$builtin_bit($tmp593 != NULL);
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block122; else goto block124;
block122:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:95
org$frostlang$frostc$Compiler$EnclosingContext* $tmp596 = *(&local19);
frost$core$Int64* $tmp597 = &$tmp596->$rawValue;
frost$core$Int64 $tmp598 = *$tmp597;
frost$core$Int64 $tmp599 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Return.frost:96:55
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp600 = $tmp598.value;
int64_t $tmp601 = $tmp599.value;
bool $tmp602 = $tmp600 == $tmp601;
frost$core$Bit $tmp603 = frost$core$Bit$init$builtin_bit($tmp602);
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block126; else goto block127;
block126:;
frost$collections$ListView** $tmp605 = (frost$collections$ListView**) ($tmp596->$data + 0);
frost$collections$ListView* $tmp606 = *$tmp605;
frost$core$Int64* $tmp607 = (frost$core$Int64*) ($tmp596->$data + 8);
frost$core$Int64 $tmp608 = *$tmp607;
org$frostlang$frostc$Compiler$InlineReturn** $tmp609 = (org$frostlang$frostc$Compiler$InlineReturn**) ($tmp596->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp610 = *$tmp609;
*(&local20) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
org$frostlang$frostc$Compiler$InlineReturn* $tmp611 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local20) = $tmp610;
org$frostlang$frostc$IR$Block$ID* $tmp612 = (org$frostlang$frostc$IR$Block$ID*) ($tmp596->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp613 = *$tmp612;
*(&local21) = $tmp613;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:98
org$frostlang$frostc$Compiler$InlineReturn* $tmp614 = *(&local20);
org$frostlang$frostc$Variable** $tmp615 = &$tmp614->variable;
org$frostlang$frostc$Variable* $tmp616 = *$tmp615;
frost$core$Bit $tmp617 = frost$core$Bit$init$builtin_bit($tmp616 != NULL);
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block129; else goto block131;
block129:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:99
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:100
org$frostlang$frostc$Compiler$InlineReturn* $tmp619 = *(&local20);
org$frostlang$frostc$Variable** $tmp620 = &$tmp619->variable;
org$frostlang$frostc$Variable* $tmp621 = *$tmp620;
org$frostlang$frostc$Variable$Storage** $tmp622 = &$tmp621->storage;
org$frostlang$frostc$Variable$Storage* $tmp623 = *$tmp622;
frost$core$Int64* $tmp624 = &$tmp623->$rawValue;
frost$core$Int64 $tmp625 = *$tmp624;
frost$core$Int64 $tmp626 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Return.frost:101:58
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp627 = $tmp625.value;
int64_t $tmp628 = $tmp626.value;
bool $tmp629 = $tmp627 == $tmp628;
frost$core$Bit $tmp630 = frost$core$Bit$init$builtin_bit($tmp629);
bool $tmp631 = $tmp630.value;
if ($tmp631) goto block133; else goto block134;
block133:;
frost$core$Int64* $tmp632 = (frost$core$Int64*) ($tmp623->$data + 0);
frost$core$Int64 $tmp633 = *$tmp632;
*(&local23) = $tmp633;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:102
frost$core$Int64 $tmp634 = *(&local23);
*(&local22) = $tmp634;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:108
org$frostlang$frostc$IR* $tmp635 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp636 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp637 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp638 = *(&local12);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp639 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp640 = (frost$core$Int64) {2};
frost$core$Int64 $tmp641 = *(&local22);
org$frostlang$frostc$IR$Value* $tmp642 = *(&local12);
$fn644 $tmp643 = ($fn644) $tmp642->$class->vtable[2];
org$frostlang$frostc$Type* $tmp645 = $tmp643($tmp642);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp639, $tmp640, $tmp641, $tmp645);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp636, $tmp637, param1, $tmp638, $tmp639);
$fn647 $tmp646 = ($fn647) $tmp635->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp648 = $tmp646($tmp635, $tmp636);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:110
org$frostlang$frostc$IR$Value* $tmp649 = *(&local12);
$fn651 $tmp650 = ($fn651) $tmp649->$class->vtable[2];
org$frostlang$frostc$Type* $tmp652 = $tmp650($tmp649);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:110:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:622
frost$core$Bit $tmp653 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp652);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:622:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp654 = $tmp653.value;
bool $tmp655 = !$tmp654;
frost$core$Bit $tmp656 = (frost$core$Bit) {$tmp655};
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block139; else goto block140;
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:105
frost$core$Int64 $tmp658 = (frost$core$Int64) {105};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s659, $tmp658);
abort(); // unreachable
block139:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:623
frost$core$Bit $tmp660 = frost$core$Bit$init$builtin_bit(false);
*(&local24) = $tmp660;
goto block138;
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:625
frost$core$Bit $tmp661 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp652);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:625:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp662 = $tmp661.value;
bool $tmp663 = !$tmp662;
frost$core$Bit $tmp664 = (frost$core$Bit) {$tmp663};
*(&local24) = $tmp664;
goto block138;
block138:;
frost$core$Bit $tmp665 = *(&local24);
bool $tmp666 = $tmp665.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
if ($tmp666) goto block136; else goto block137;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:111
org$frostlang$frostc$IR$Value* $tmp667 = *(&local12);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp667);
goto block137;
block137:;
goto block130;
block131:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:115
org$frostlang$frostc$Compiler$InlineReturn* $tmp668 = *(&local20);
org$frostlang$frostc$IR$Value* $tmp669 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
org$frostlang$frostc$IR$Value** $tmp670 = &$tmp668->value;
org$frostlang$frostc$IR$Value* $tmp671 = *$tmp670;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
org$frostlang$frostc$IR$Value** $tmp672 = &$tmp668->value;
*$tmp672 = $tmp669;
goto block130;
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:117
org$frostlang$frostc$IR* $tmp673 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp674 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp675 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp676 = *(&local21);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp674, $tmp675, param1, $tmp676);
$fn678 $tmp677 = ($fn678) $tmp673->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp679 = $tmp677($tmp673, $tmp674);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
org$frostlang$frostc$Compiler$InlineReturn* $tmp680 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
*(&local20) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
goto block123;
block127:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:120
frost$core$Int64 $tmp681 = (frost$core$Int64) {120};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s682, $tmp681);
abort(); // unreachable
block124:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:125
org$frostlang$frostc$IR* $tmp683 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp684 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp685 = (frost$core$Int64) {25};
org$frostlang$frostc$IR$Value* $tmp686 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q($tmp684, $tmp685, param1, $tmp686);
$fn688 $tmp687 = ($fn688) $tmp683->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp689 = $tmp687($tmp683, $tmp684);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
goto block123;
block123:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp690 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
*(&local19) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp691 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
*(&local17) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block109;
block109:;
org$frostlang$frostc$IR$Value* $tmp692 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block65;
block66:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:130
org$frostlang$frostc$MethodDecl* $tmp693 = *(&local2);
org$frostlang$frostc$Type** $tmp694 = &$tmp693->returnType;
org$frostlang$frostc$Type* $tmp695 = *$tmp694;
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Return.frost:130:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp696 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp697 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp698 = &(&local26)->$rawValue;
*$tmp698 = $tmp697;
org$frostlang$frostc$Type$Kind $tmp699 = *(&local26);
*(&local25) = $tmp699;
org$frostlang$frostc$Type$Kind $tmp700 = *(&local25);
org$frostlang$frostc$Position $tmp701 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp702 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp696, &$s703, $tmp700, $tmp701, $tmp702);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
ITable* $tmp704 = ((frost$core$Equatable*) $tmp695)->$class->itable;
while ($tmp704->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp704 = $tmp704->next;
}
$fn706 $tmp705 = $tmp704->methods[1];
frost$core$Bit $tmp707 = $tmp705(((frost$core$Equatable*) $tmp695), ((frost$core$Equatable*) $tmp696));
bool $tmp708 = $tmp707.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
if ($tmp708) goto block143; else goto block144;
block143:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:131
org$frostlang$frostc$MethodDecl* $tmp709 = *(&local2);
org$frostlang$frostc$MethodDecl$Kind* $tmp710 = &$tmp709->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp711 = *$tmp710;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp712;
$tmp712 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp712->value = $tmp711;
frost$core$Int64 $tmp713 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Return.frost:131:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp714 = &(&local28)->$rawValue;
*$tmp714 = $tmp713;
org$frostlang$frostc$MethodDecl$Kind $tmp715 = *(&local28);
*(&local27) = $tmp715;
org$frostlang$frostc$MethodDecl$Kind $tmp716 = *(&local27);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp717;
$tmp717 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp717->value = $tmp716;
ITable* $tmp718 = ((frost$core$Equatable*) $tmp712)->$class->itable;
while ($tmp718->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp718 = $tmp718->next;
}
$fn720 $tmp719 = $tmp718->methods[0];
frost$core$Bit $tmp721 = $tmp719(((frost$core$Equatable*) $tmp712), ((frost$core$Equatable*) $tmp717));
bool $tmp722 = $tmp721.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp717)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp712)));
if ($tmp722) goto block147; else goto block148;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:132
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp723 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp724 = (frost$core$Int64) {39};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp723, $tmp724, param1);
org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(param0, param1, $tmp723);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:133
org$frostlang$frostc$MethodDecl* $tmp725 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp726 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp727 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:135
org$frostlang$frostc$MethodDecl* $tmp728 = *(&local2);
org$frostlang$frostc$Type** $tmp729 = &$tmp728->returnType;
org$frostlang$frostc$Type* $tmp730 = *$tmp729;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Return.frost:136:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn732 $tmp731 = ($fn732) ((frost$core$Object*) $tmp730)->$class->vtable[0];
frost$core$String* $tmp733 = $tmp731(((frost$core$Object*) $tmp730));
frost$core$String* $tmp734 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s735, $tmp733);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$String* $tmp736 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp734, &$s737);
frost$core$String* $tmp738 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s739, $tmp736);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp738);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
goto block144;
block144:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:138
// begin inline call to method org.frostlang.frostc.Compiler.leaveAllScopes() from Return.frost:138:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5299
frost$collections$Stack** $tmp740 = &param0->enclosingContexts;
frost$collections$Stack* $tmp741 = *$tmp740;
ITable* $tmp742 = ((frost$collections$Iterable*) $tmp741)->$class->itable;
while ($tmp742->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp742 = $tmp742->next;
}
$fn744 $tmp743 = $tmp742->methods[0];
frost$collections$Iterator* $tmp745 = $tmp743(((frost$collections$Iterable*) $tmp741));
goto block152;
block152:;
ITable* $tmp746 = $tmp745->$class->itable;
while ($tmp746->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp746 = $tmp746->next;
}
$fn748 $tmp747 = $tmp746->methods[0];
frost$core$Bit $tmp749 = $tmp747($tmp745);
bool $tmp750 = $tmp749.value;
if ($tmp750) goto block154; else goto block153;
block153:;
*(&local29) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp751 = $tmp745->$class->itable;
while ($tmp751->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp751 = $tmp751->next;
}
$fn753 $tmp752 = $tmp751->methods[1];
frost$core$Object* $tmp754 = $tmp752($tmp745);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp754)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp755 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local29) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp754);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5300
org$frostlang$frostc$Compiler$EnclosingContext* $tmp756 = *(&local29);
frost$core$Int64* $tmp757 = &$tmp756->$rawValue;
frost$core$Int64 $tmp758 = *$tmp757;
frost$core$Int64 $tmp759 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:5301:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp760 = $tmp758.value;
int64_t $tmp761 = $tmp759.value;
bool $tmp762 = $tmp760 == $tmp761;
frost$core$Bit $tmp763 = frost$core$Bit$init$builtin_bit($tmp762);
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block156; else goto block155;
block156:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5302
frost$core$Frost$unref$frost$core$Object$Q($tmp754);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp765 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
*(&local29) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
goto block151;
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5305
org$frostlang$frostc$Compiler$EnclosingContext* $tmp766 = *(&local29);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext(param0, $tmp766);
frost$core$Frost$unref$frost$core$Object$Q($tmp754);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp767 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local29) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block152;
block154:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
goto block151;
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:139
org$frostlang$frostc$IR$Block$ID$nullable* $tmp768 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp769 = *$tmp768;
frost$core$Bit $tmp770 = frost$core$Bit$init$builtin_bit($tmp769.nonnull);
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block158; else goto block160;
block158:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:140
org$frostlang$frostc$IR* $tmp772 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp773 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp774 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID$nullable* $tmp775 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp776 = *$tmp775;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp773, $tmp774, param1, ((org$frostlang$frostc$IR$Block$ID) $tmp776.value));
$fn778 $tmp777 = ($fn778) $tmp772->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp779 = $tmp777($tmp772, $tmp773);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
goto block159;
block160:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:143
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from Return.frost:143:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5705
frost$collections$Stack** $tmp780 = &param0->enclosingContexts;
frost$collections$Stack* $tmp781 = *$tmp780;
ITable* $tmp782 = ((frost$collections$Iterable*) $tmp781)->$class->itable;
while ($tmp782->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp782 = $tmp782->next;
}
$fn784 $tmp783 = $tmp782->methods[0];
frost$collections$Iterator* $tmp785 = $tmp783(((frost$collections$Iterable*) $tmp781));
goto block162;
block162:;
ITable* $tmp786 = $tmp785->$class->itable;
while ($tmp786->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp786 = $tmp786->next;
}
$fn788 $tmp787 = $tmp786->methods[0];
frost$core$Bit $tmp789 = $tmp787($tmp785);
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block164; else goto block163;
block163:;
*(&local31) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp791 = $tmp785->$class->itable;
while ($tmp791->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp791 = $tmp791->next;
}
$fn793 $tmp792 = $tmp791->methods[1];
frost$core$Object* $tmp794 = $tmp792($tmp785);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp794)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp795 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
*(&local31) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp794);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5706
org$frostlang$frostc$Compiler$EnclosingContext* $tmp796 = *(&local31);
frost$core$Int64* $tmp797 = &$tmp796->$rawValue;
frost$core$Int64 $tmp798 = *$tmp797;
frost$core$Int64 $tmp799 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:5707:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp800 = $tmp798.value;
int64_t $tmp801 = $tmp799.value;
bool $tmp802 = $tmp800 == $tmp801;
frost$core$Bit $tmp803 = frost$core$Bit$init$builtin_bit($tmp802);
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block166; else goto block165;
block166:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5708
org$frostlang$frostc$Compiler$EnclosingContext* $tmp805 = *(&local31);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$core$Frost$unref$frost$core$Object$Q($tmp794);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp806 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
*(&local31) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
*(&local30) = $tmp805;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
goto block161;
block165:;
frost$core$Frost$unref$frost$core$Object$Q($tmp794);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp807 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
*(&local31) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block162;
block164:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5712
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
*(&local30) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
goto block161;
block161:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp808 = *(&local30);
*(&local32) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp809 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
*(&local32) = $tmp808;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:144
org$frostlang$frostc$Compiler$EnclosingContext* $tmp810 = *(&local32);
frost$core$Bit $tmp811 = frost$core$Bit$init$builtin_bit($tmp810 != NULL);
bool $tmp812 = $tmp811.value;
if ($tmp812) goto block168; else goto block170;
block168:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:145
org$frostlang$frostc$Compiler$EnclosingContext* $tmp813 = *(&local32);
frost$core$Int64* $tmp814 = &$tmp813->$rawValue;
frost$core$Int64 $tmp815 = *$tmp814;
frost$core$Int64 $tmp816 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Return.frost:146:55
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp817 = $tmp815.value;
int64_t $tmp818 = $tmp816.value;
bool $tmp819 = $tmp817 == $tmp818;
frost$core$Bit $tmp820 = frost$core$Bit$init$builtin_bit($tmp819);
bool $tmp821 = $tmp820.value;
if ($tmp821) goto block172; else goto block171;
block172:;
frost$collections$ListView** $tmp822 = (frost$collections$ListView**) ($tmp813->$data + 0);
frost$collections$ListView* $tmp823 = *$tmp822;
frost$core$Int64* $tmp824 = (frost$core$Int64*) ($tmp813->$data + 8);
frost$core$Int64 $tmp825 = *$tmp824;
org$frostlang$frostc$Compiler$InlineReturn** $tmp826 = (org$frostlang$frostc$Compiler$InlineReturn**) ($tmp813->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp827 = *$tmp826;
*(&local33) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
org$frostlang$frostc$Compiler$InlineReturn* $tmp828 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
*(&local33) = $tmp827;
org$frostlang$frostc$IR$Block$ID* $tmp829 = (org$frostlang$frostc$IR$Block$ID*) ($tmp813->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp830 = *$tmp829;
*(&local34) = $tmp830;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:148
org$frostlang$frostc$IR$Block$ID $tmp831 = *(&local34);
frost$core$Bit $tmp832 = frost$core$Bit$init$builtin_bit(true);
bool $tmp833 = $tmp832.value;
if ($tmp833) goto block174; else goto block175;
block174:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:149
org$frostlang$frostc$IR* $tmp834 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp835 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp836 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp837 = *(&local34);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp835, $tmp836, param1, $tmp837);
$fn839 $tmp838 = ($fn839) $tmp834->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp840 = $tmp838($tmp834, $tmp835);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
goto block175;
block175:;
org$frostlang$frostc$Compiler$InlineReturn* $tmp841 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
*(&local33) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
goto block171;
block171:;
goto block169;
block170:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:155
org$frostlang$frostc$IR* $tmp842 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp843 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp844 = (frost$core$Int64) {25};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q($tmp843, $tmp844, param1, ((org$frostlang$frostc$IR$Value*) NULL));
$fn846 $tmp845 = ($fn846) $tmp842->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp847 = $tmp845($tmp842, $tmp843);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
goto block169;
block169:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp848 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
*(&local32) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp849 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
*(&local30) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block159;
block159:;
goto block65;
block65:;
org$frostlang$frostc$MethodDecl* $tmp850 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp851 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp852 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$Return$init(org$frostlang$frostc$statement$Return* param0) {

return;

}
void org$frostlang$frostc$statement$Return$cleanup(org$frostlang$frostc$statement$Return* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:21
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

