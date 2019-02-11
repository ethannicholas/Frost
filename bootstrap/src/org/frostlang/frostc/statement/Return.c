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
#include "org/frostlang/frostc/Type/Kind.h"
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
typedef frost$core$Bit (*$fn360)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn385)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn404)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn408)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn413)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn441)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn455)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn470)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn489)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn542)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn545)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn553)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$collections$Iterator* (*$fn561)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn565)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn570)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Type* (*$fn638)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn641)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn645)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn672)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn682)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn694)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn708)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn720)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn732)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn736)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn741)(frost$collections$Iterator*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn766)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$collections$Iterator* (*$fn772)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn776)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn781)(frost$collections$Iterator*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn827)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn834)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

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
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s556 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s723 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s725 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s727 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20", 32, 131125242360168676, NULL };

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
frost$core$Bit local9;
org$frostlang$frostc$IR$Value* local10 = NULL;
frost$core$Bit local11;
org$frostlang$frostc$Compiler$EnclosingContext* local12 = NULL;
frost$core$Int64 local13;
frost$core$Int64 local14;
org$frostlang$frostc$Compiler$EnclosingContext* local15 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local16 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local17 = NULL;
org$frostlang$frostc$Compiler$InlineReturn* local18 = NULL;
org$frostlang$frostc$IR$Block$ID local19;
frost$core$Int64 local20;
frost$core$Int64 local21;
frost$core$Bit local22;
org$frostlang$frostc$MethodDecl$Kind local23;
org$frostlang$frostc$MethodDecl$Kind local24;
org$frostlang$frostc$Compiler$EnclosingContext* local25 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local26 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local27 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local28 = NULL;
org$frostlang$frostc$Compiler$InlineReturn* local29 = NULL;
org$frostlang$frostc$IR$Block$ID local30;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:722
frost$core$Bit $tmp297 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp296);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:722:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp298 = $tmp297.value;
bool $tmp299 = !$tmp298;
frost$core$Bit $tmp300 = (frost$core$Bit) {$tmp299};
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:723
frost$core$Bit $tmp302 = frost$core$Bit$init$builtin_bit(false);
*(&local7) = $tmp302;
goto block55;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:725
frost$core$Bit $tmp303 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp296);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:725:16
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
org$frostlang$frostc$Type** $tmp344 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp345 = *$tmp344;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:55:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp346 = &((org$frostlang$frostc$Symbol*) $tmp343)->name;
frost$core$String* $tmp347 = *$tmp346;
frost$core$String** $tmp348 = &((org$frostlang$frostc$Symbol*) $tmp345)->name;
frost$core$String* $tmp349 = *$tmp348;
frost$core$Bit $tmp350 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp347, $tmp349);
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block70; else goto block71;
block70:;
org$frostlang$frostc$Type$Kind* $tmp352 = &$tmp343->typeKind;
org$frostlang$frostc$Type$Kind $tmp353 = *$tmp352;
org$frostlang$frostc$Type$Kind$wrapper* $tmp354;
$tmp354 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp354->value = $tmp353;
org$frostlang$frostc$Type$Kind* $tmp355 = &$tmp345->typeKind;
org$frostlang$frostc$Type$Kind $tmp356 = *$tmp355;
org$frostlang$frostc$Type$Kind$wrapper* $tmp357;
$tmp357 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp357->value = $tmp356;
ITable* $tmp358 = ((frost$core$Equatable*) $tmp354)->$class->itable;
while ($tmp358->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp358 = $tmp358->next;
}
$fn360 $tmp359 = $tmp358->methods[0];
frost$core$Bit $tmp361 = $tmp359(((frost$core$Equatable*) $tmp354), ((frost$core$Equatable*) $tmp357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp357)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp354)));
*(&local9) = $tmp361;
goto block72;
block71:;
*(&local9) = $tmp350;
goto block72;
block72:;
frost$core$Bit $tmp362 = *(&local9);
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:56
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s364);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:57
org$frostlang$frostc$MethodDecl* $tmp365 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp366 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp367 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:59
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp368 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp369 = (frost$core$Int64) {3};
org$frostlang$frostc$MethodDecl* $tmp370 = *(&local2);
org$frostlang$frostc$Type** $tmp371 = &$tmp370->returnType;
org$frostlang$frostc$Type* $tmp372 = *$tmp371;
frost$core$Bit $tmp373 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp368, $tmp369, $tmp372, $tmp373);
org$frostlang$frostc$IR$Value* $tmp374 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp368);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
org$frostlang$frostc$IR$Value* $tmp375 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
*(&local10) = $tmp374;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:61
org$frostlang$frostc$IR$Value* $tmp376 = *(&local10);
frost$core$Bit $tmp377 = frost$core$Bit$init$builtin_bit($tmp376 == NULL);
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:62
org$frostlang$frostc$IR$Value* $tmp379 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp380 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp381 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp382 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:64
org$frostlang$frostc$IR$Value* $tmp383 = *(&local10);
$fn385 $tmp384 = ($fn385) $tmp383->$class->vtable[2];
org$frostlang$frostc$Type* $tmp386 = $tmp384($tmp383);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:64:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:722
frost$core$Bit $tmp387 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp386);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:722:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp388 = $tmp387.value;
bool $tmp389 = !$tmp388;
frost$core$Bit $tmp390 = (frost$core$Bit) {$tmp389};
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block78; else goto block79;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:723
frost$core$Bit $tmp392 = frost$core$Bit$init$builtin_bit(false);
*(&local11) = $tmp392;
goto block77;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:725
frost$core$Bit $tmp393 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp386);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:725:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp394 = $tmp393.value;
bool $tmp395 = !$tmp394;
frost$core$Bit $tmp396 = (frost$core$Bit) {$tmp395};
*(&local11) = $tmp396;
goto block77;
block77:;
frost$core$Bit $tmp397 = *(&local11);
bool $tmp398 = $tmp397.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
if ($tmp398) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:65
org$frostlang$frostc$IR$Value* $tmp399 = *(&local10);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp399);
goto block76;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:67
// begin inline call to method org.frostlang.frostc.Compiler.leaveAllScopes() from Return.frost:67:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5404
frost$collections$Stack** $tmp400 = &param0->enclosingContexts;
frost$collections$Stack* $tmp401 = *$tmp400;
ITable* $tmp402 = ((frost$collections$Iterable*) $tmp401)->$class->itable;
while ($tmp402->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp402 = $tmp402->next;
}
$fn404 $tmp403 = $tmp402->methods[0];
frost$collections$Iterator* $tmp405 = $tmp403(((frost$collections$Iterable*) $tmp401));
goto block83;
block83:;
ITable* $tmp406 = $tmp405->$class->itable;
while ($tmp406->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp406 = $tmp406->next;
}
$fn408 $tmp407 = $tmp406->methods[0];
frost$core$Bit $tmp409 = $tmp407($tmp405);
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block85; else goto block84;
block84:;
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp411 = $tmp405->$class->itable;
while ($tmp411->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp411 = $tmp411->next;
}
$fn413 $tmp412 = $tmp411->methods[1];
frost$core$Object* $tmp414 = $tmp412($tmp405);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp414)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp415 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp414);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5405
org$frostlang$frostc$Compiler$EnclosingContext* $tmp416 = *(&local12);
frost$core$Int64* $tmp417 = &$tmp416->$rawValue;
frost$core$Int64 $tmp418 = *$tmp417;
frost$core$Int64 $tmp419 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:5406:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp420 = $tmp418.value;
int64_t $tmp421 = $tmp419.value;
bool $tmp422 = $tmp420 == $tmp421;
frost$core$Bit $tmp423 = frost$core$Bit$init$builtin_bit($tmp422);
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block87; else goto block86;
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5407
frost$core$Frost$unref$frost$core$Object$Q($tmp414);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp425 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
goto block82;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5410
org$frostlang$frostc$Compiler$EnclosingContext* $tmp426 = *(&local12);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext(param0, $tmp426);
frost$core$Frost$unref$frost$core$Object$Q($tmp414);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp427 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block83;
block85:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
goto block82;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:68
goto block89;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:69
frost$collections$Stack** $tmp428 = &param0->enclosingContexts;
frost$collections$Stack* $tmp429 = *$tmp428;
frost$core$Int64 $tmp430 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Return.frost:69:49
frost$core$Int64 $tmp431 = (frost$core$Int64) {0};
int64_t $tmp432 = $tmp430.value;
int64_t $tmp433 = $tmp431.value;
bool $tmp434 = $tmp432 >= $tmp433;
frost$core$Bit $tmp435 = (frost$core$Bit) {$tmp434};
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block94; else goto block93;
block94:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp437 = &$tmp429->contents;
frost$collections$Array* $tmp438 = *$tmp437;
ITable* $tmp439 = ((frost$collections$CollectionView*) $tmp438)->$class->itable;
while ($tmp439->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp439 = $tmp439->next;
}
$fn441 $tmp440 = $tmp439->methods[0];
frost$core$Int64 $tmp442 = $tmp440(((frost$collections$CollectionView*) $tmp438));
int64_t $tmp443 = $tmp430.value;
int64_t $tmp444 = $tmp442.value;
bool $tmp445 = $tmp443 < $tmp444;
frost$core$Bit $tmp446 = (frost$core$Bit) {$tmp445};
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp448 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s449, $tmp448, &$s450);
abort(); // unreachable
block92:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp451 = &$tmp429->contents;
frost$collections$Array* $tmp452 = *$tmp451;
ITable* $tmp453 = ((frost$collections$CollectionView*) $tmp452)->$class->itable;
while ($tmp453->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp453 = $tmp453->next;
}
$fn455 $tmp454 = $tmp453->methods[0];
frost$core$Int64 $tmp456 = $tmp454(((frost$collections$CollectionView*) $tmp452));
int64_t $tmp457 = $tmp456.value;
int64_t $tmp458 = $tmp430.value;
bool $tmp459 = $tmp457 > $tmp458;
frost$core$Bit $tmp460 = (frost$core$Bit) {$tmp459};
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block96; else goto block97;
block97:;
frost$core$Int64 $tmp462 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s463, $tmp462);
abort(); // unreachable
block96:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp464 = &$tmp429->contents;
frost$collections$Array* $tmp465 = *$tmp464;
frost$collections$Array** $tmp466 = &$tmp429->contents;
frost$collections$Array* $tmp467 = *$tmp466;
ITable* $tmp468 = ((frost$collections$CollectionView*) $tmp467)->$class->itable;
while ($tmp468->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp468 = $tmp468->next;
}
$fn470 $tmp469 = $tmp468->methods[0];
frost$core$Int64 $tmp471 = $tmp469(((frost$collections$CollectionView*) $tmp467));
frost$core$Int64 $tmp472 = (frost$core$Int64) {1};
int64_t $tmp473 = $tmp471.value;
int64_t $tmp474 = $tmp472.value;
int64_t $tmp475 = $tmp473 - $tmp474;
frost$core$Int64 $tmp476 = (frost$core$Int64) {$tmp475};
int64_t $tmp477 = $tmp476.value;
int64_t $tmp478 = $tmp430.value;
int64_t $tmp479 = $tmp477 - $tmp478;
frost$core$Int64 $tmp480 = (frost$core$Int64) {$tmp479};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp481 = (frost$core$Int64) {0};
int64_t $tmp482 = $tmp480.value;
int64_t $tmp483 = $tmp481.value;
bool $tmp484 = $tmp482 >= $tmp483;
frost$core$Bit $tmp485 = (frost$core$Bit) {$tmp484};
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block101; else goto block100;
block101:;
ITable* $tmp487 = ((frost$collections$CollectionView*) $tmp465)->$class->itable;
while ($tmp487->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp487 = $tmp487->next;
}
$fn489 $tmp488 = $tmp487->methods[0];
frost$core$Int64 $tmp490 = $tmp488(((frost$collections$CollectionView*) $tmp465));
int64_t $tmp491 = $tmp480.value;
int64_t $tmp492 = $tmp490.value;
bool $tmp493 = $tmp491 < $tmp492;
frost$core$Bit $tmp494 = (frost$core$Bit) {$tmp493};
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block99; else goto block100;
block100:;
frost$core$Int64 $tmp496 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s497, $tmp496, &$s498);
abort(); // unreachable
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp499 = &$tmp465->data;
frost$core$Object** $tmp500 = *$tmp499;
int64_t $tmp501 = $tmp480.value;
frost$core$Object* $tmp502 = $tmp500[$tmp501];
frost$core$Frost$ref$frost$core$Object$Q($tmp502);
frost$core$Frost$ref$frost$core$Object$Q($tmp502);
frost$core$Frost$unref$frost$core$Object$Q($tmp502);
frost$core$Int64* $tmp503 = &((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp502)->$rawValue;
frost$core$Int64 $tmp504 = *$tmp503;
frost$core$Int64 $tmp505 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Return.frost:70:51
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp506 = $tmp504.value;
int64_t $tmp507 = $tmp505.value;
bool $tmp508 = $tmp506 == $tmp507;
frost$core$Bit $tmp509 = frost$core$Bit$init$builtin_bit($tmp508);
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block103; else goto block104;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:71
frost$collections$Stack** $tmp511 = &param0->enclosingContexts;
frost$collections$Stack* $tmp512 = *$tmp511;
frost$core$Object* $tmp513 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp512);
frost$core$Frost$unref$frost$core$Object$Q($tmp513);
frost$core$Frost$unref$frost$core$Object$Q($tmp502);
goto block89;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:74
frost$core$Frost$unref$frost$core$Object$Q($tmp502);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:78
org$frostlang$frostc$Variable** $tmp514 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp515 = *$tmp514;
frost$core$Bit $tmp516 = frost$core$Bit$init$builtin_bit($tmp515 != NULL);
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block106; else goto block108;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:80
org$frostlang$frostc$Variable** $tmp518 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp519 = *$tmp518;
org$frostlang$frostc$Variable$Storage** $tmp520 = &$tmp519->storage;
org$frostlang$frostc$Variable$Storage* $tmp521 = *$tmp520;
frost$core$Int64* $tmp522 = &$tmp521->$rawValue;
frost$core$Int64 $tmp523 = *$tmp522;
frost$core$Int64 $tmp524 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Return.frost:81:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp525 = $tmp523.value;
int64_t $tmp526 = $tmp524.value;
bool $tmp527 = $tmp525 == $tmp526;
frost$core$Bit $tmp528 = frost$core$Bit$init$builtin_bit($tmp527);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block110; else goto block111;
block110:;
frost$core$Int64* $tmp530 = (frost$core$Int64*) ($tmp521->$data + 0);
frost$core$Int64 $tmp531 = *$tmp530;
*(&local14) = $tmp531;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:82
frost$core$Int64 $tmp532 = *(&local14);
*(&local13) = $tmp532;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:88
org$frostlang$frostc$IR* $tmp533 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp534 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp535 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp536 = *(&local10);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp537 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp538 = (frost$core$Int64) {2};
frost$core$Int64 $tmp539 = *(&local13);
org$frostlang$frostc$IR$Value* $tmp540 = *(&local10);
$fn542 $tmp541 = ($fn542) $tmp540->$class->vtable[2];
org$frostlang$frostc$Type* $tmp543 = $tmp541($tmp540);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp537, $tmp538, $tmp539, $tmp543);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp534, $tmp535, param1, $tmp536, $tmp537);
$fn545 $tmp544 = ($fn545) $tmp533->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp546 = $tmp544($tmp533, $tmp534);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:90
org$frostlang$frostc$IR* $tmp547 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp548 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp549 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID$nullable* $tmp550 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp551 = *$tmp550;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp548, $tmp549, param1, ((org$frostlang$frostc$IR$Block$ID) $tmp551.value));
$fn553 $tmp552 = ($fn553) $tmp547->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp554 = $tmp552($tmp547, $tmp548);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
goto block107;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:85
frost$core$Int64 $tmp555 = (frost$core$Int64) {85};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s556, $tmp555);
abort(); // unreachable
block108:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:93
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from Return.frost:93:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5810
frost$collections$Stack** $tmp557 = &param0->enclosingContexts;
frost$collections$Stack* $tmp558 = *$tmp557;
ITable* $tmp559 = ((frost$collections$Iterable*) $tmp558)->$class->itable;
while ($tmp559->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp559 = $tmp559->next;
}
$fn561 $tmp560 = $tmp559->methods[0];
frost$collections$Iterator* $tmp562 = $tmp560(((frost$collections$Iterable*) $tmp558));
goto block114;
block114:;
ITable* $tmp563 = $tmp562->$class->itable;
while ($tmp563->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp563 = $tmp563->next;
}
$fn565 $tmp564 = $tmp563->methods[0];
frost$core$Bit $tmp566 = $tmp564($tmp562);
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block116; else goto block115;
block115:;
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp568 = $tmp562->$class->itable;
while ($tmp568->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp568 = $tmp568->next;
}
$fn570 $tmp569 = $tmp568->methods[1];
frost$core$Object* $tmp571 = $tmp569($tmp562);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp571)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp572 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp571);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5811
org$frostlang$frostc$Compiler$EnclosingContext* $tmp573 = *(&local16);
frost$core$Int64* $tmp574 = &$tmp573->$rawValue;
frost$core$Int64 $tmp575 = *$tmp574;
frost$core$Int64 $tmp576 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:5812:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp577 = $tmp575.value;
int64_t $tmp578 = $tmp576.value;
bool $tmp579 = $tmp577 == $tmp578;
frost$core$Bit $tmp580 = frost$core$Bit$init$builtin_bit($tmp579);
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block118; else goto block117;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5813
org$frostlang$frostc$Compiler$EnclosingContext* $tmp582 = *(&local16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
frost$core$Frost$unref$frost$core$Object$Q($tmp571);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp583 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
*(&local15) = $tmp582;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
goto block113;
block117:;
frost$core$Frost$unref$frost$core$Object$Q($tmp571);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp584 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block114;
block116:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5817
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
*(&local15) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
goto block113;
block113:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp585 = *(&local15);
*(&local17) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp586 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
*(&local17) = $tmp585;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:94
org$frostlang$frostc$Compiler$EnclosingContext* $tmp587 = *(&local17);
frost$core$Bit $tmp588 = frost$core$Bit$init$builtin_bit($tmp587 != NULL);
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block120; else goto block122;
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:95
org$frostlang$frostc$Compiler$EnclosingContext* $tmp590 = *(&local17);
frost$core$Int64* $tmp591 = &$tmp590->$rawValue;
frost$core$Int64 $tmp592 = *$tmp591;
frost$core$Int64 $tmp593 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Return.frost:96:55
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp594 = $tmp592.value;
int64_t $tmp595 = $tmp593.value;
bool $tmp596 = $tmp594 == $tmp595;
frost$core$Bit $tmp597 = frost$core$Bit$init$builtin_bit($tmp596);
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block124; else goto block125;
block124:;
frost$collections$ListView** $tmp599 = (frost$collections$ListView**) ($tmp590->$data + 0);
frost$collections$ListView* $tmp600 = *$tmp599;
frost$core$Int64* $tmp601 = (frost$core$Int64*) ($tmp590->$data + 8);
frost$core$Int64 $tmp602 = *$tmp601;
org$frostlang$frostc$Compiler$InlineReturn** $tmp603 = (org$frostlang$frostc$Compiler$InlineReturn**) ($tmp590->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp604 = *$tmp603;
*(&local18) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
org$frostlang$frostc$Compiler$InlineReturn* $tmp605 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local18) = $tmp604;
org$frostlang$frostc$IR$Block$ID* $tmp606 = (org$frostlang$frostc$IR$Block$ID*) ($tmp590->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp607 = *$tmp606;
*(&local19) = $tmp607;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:98
org$frostlang$frostc$Compiler$InlineReturn* $tmp608 = *(&local18);
org$frostlang$frostc$Variable** $tmp609 = &$tmp608->variable;
org$frostlang$frostc$Variable* $tmp610 = *$tmp609;
frost$core$Bit $tmp611 = frost$core$Bit$init$builtin_bit($tmp610 != NULL);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block127; else goto block129;
block127:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:99
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:100
org$frostlang$frostc$Compiler$InlineReturn* $tmp613 = *(&local18);
org$frostlang$frostc$Variable** $tmp614 = &$tmp613->variable;
org$frostlang$frostc$Variable* $tmp615 = *$tmp614;
org$frostlang$frostc$Variable$Storage** $tmp616 = &$tmp615->storage;
org$frostlang$frostc$Variable$Storage* $tmp617 = *$tmp616;
frost$core$Int64* $tmp618 = &$tmp617->$rawValue;
frost$core$Int64 $tmp619 = *$tmp618;
frost$core$Int64 $tmp620 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Return.frost:101:58
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp621 = $tmp619.value;
int64_t $tmp622 = $tmp620.value;
bool $tmp623 = $tmp621 == $tmp622;
frost$core$Bit $tmp624 = frost$core$Bit$init$builtin_bit($tmp623);
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block131; else goto block132;
block131:;
frost$core$Int64* $tmp626 = (frost$core$Int64*) ($tmp617->$data + 0);
frost$core$Int64 $tmp627 = *$tmp626;
*(&local21) = $tmp627;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:102
frost$core$Int64 $tmp628 = *(&local21);
*(&local20) = $tmp628;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:108
org$frostlang$frostc$IR* $tmp629 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp630 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp631 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp632 = *(&local10);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp633 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp634 = (frost$core$Int64) {2};
frost$core$Int64 $tmp635 = *(&local20);
org$frostlang$frostc$IR$Value* $tmp636 = *(&local10);
$fn638 $tmp637 = ($fn638) $tmp636->$class->vtable[2];
org$frostlang$frostc$Type* $tmp639 = $tmp637($tmp636);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp633, $tmp634, $tmp635, $tmp639);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp630, $tmp631, param1, $tmp632, $tmp633);
$fn641 $tmp640 = ($fn641) $tmp629->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp642 = $tmp640($tmp629, $tmp630);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:110
org$frostlang$frostc$IR$Value* $tmp643 = *(&local10);
$fn645 $tmp644 = ($fn645) $tmp643->$class->vtable[2];
org$frostlang$frostc$Type* $tmp646 = $tmp644($tmp643);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:110:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:722
frost$core$Bit $tmp647 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp646);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:722:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp648 = $tmp647.value;
bool $tmp649 = !$tmp648;
frost$core$Bit $tmp650 = (frost$core$Bit) {$tmp649};
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block137; else goto block138;
block132:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:105
frost$core$Int64 $tmp652 = (frost$core$Int64) {105};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s653, $tmp652);
abort(); // unreachable
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:723
frost$core$Bit $tmp654 = frost$core$Bit$init$builtin_bit(false);
*(&local22) = $tmp654;
goto block136;
block138:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:725
frost$core$Bit $tmp655 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp646);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:725:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp656 = $tmp655.value;
bool $tmp657 = !$tmp656;
frost$core$Bit $tmp658 = (frost$core$Bit) {$tmp657};
*(&local22) = $tmp658;
goto block136;
block136:;
frost$core$Bit $tmp659 = *(&local22);
bool $tmp660 = $tmp659.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
if ($tmp660) goto block134; else goto block135;
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:111
org$frostlang$frostc$IR$Value* $tmp661 = *(&local10);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp661);
goto block135;
block135:;
goto block128;
block129:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:115
org$frostlang$frostc$Compiler$InlineReturn* $tmp662 = *(&local18);
org$frostlang$frostc$IR$Value* $tmp663 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
org$frostlang$frostc$IR$Value** $tmp664 = &$tmp662->value;
org$frostlang$frostc$IR$Value* $tmp665 = *$tmp664;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
org$frostlang$frostc$IR$Value** $tmp666 = &$tmp662->value;
*$tmp666 = $tmp663;
goto block128;
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:117
org$frostlang$frostc$IR* $tmp667 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp668 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp669 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp670 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp668, $tmp669, param1, $tmp670);
$fn672 $tmp671 = ($fn672) $tmp667->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp673 = $tmp671($tmp667, $tmp668);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
org$frostlang$frostc$Compiler$InlineReturn* $tmp674 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
*(&local18) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
goto block121;
block125:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:120
frost$core$Int64 $tmp675 = (frost$core$Int64) {120};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s676, $tmp675);
abort(); // unreachable
block122:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:125
org$frostlang$frostc$IR* $tmp677 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp678 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp679 = (frost$core$Int64) {25};
org$frostlang$frostc$IR$Value* $tmp680 = *(&local10);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q($tmp678, $tmp679, param1, $tmp680);
$fn682 $tmp681 = ($fn682) $tmp677->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp683 = $tmp681($tmp677, $tmp678);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
goto block121;
block121:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp684 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
*(&local17) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp685 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
*(&local15) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block107;
block107:;
org$frostlang$frostc$IR$Value* $tmp686 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block65;
block66:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:130
org$frostlang$frostc$MethodDecl* $tmp687 = *(&local2);
org$frostlang$frostc$Type** $tmp688 = &$tmp687->returnType;
org$frostlang$frostc$Type* $tmp689 = *$tmp688;
org$frostlang$frostc$Type** $tmp690 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp691 = *$tmp690;
ITable* $tmp692 = ((frost$core$Equatable*) $tmp689)->$class->itable;
while ($tmp692->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp692 = $tmp692->next;
}
$fn694 $tmp693 = $tmp692->methods[1];
frost$core$Bit $tmp695 = $tmp693(((frost$core$Equatable*) $tmp689), ((frost$core$Equatable*) $tmp691));
bool $tmp696 = $tmp695.value;
if ($tmp696) goto block141; else goto block142;
block141:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:131
org$frostlang$frostc$MethodDecl* $tmp697 = *(&local2);
org$frostlang$frostc$MethodDecl$Kind* $tmp698 = &$tmp697->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp699 = *$tmp698;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp700;
$tmp700 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp700->value = $tmp699;
frost$core$Int64 $tmp701 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Return.frost:131:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp702 = &(&local24)->$rawValue;
*$tmp702 = $tmp701;
org$frostlang$frostc$MethodDecl$Kind $tmp703 = *(&local24);
*(&local23) = $tmp703;
org$frostlang$frostc$MethodDecl$Kind $tmp704 = *(&local23);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp705;
$tmp705 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp705->value = $tmp704;
ITable* $tmp706 = ((frost$core$Equatable*) $tmp700)->$class->itable;
while ($tmp706->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp706 = $tmp706->next;
}
$fn708 $tmp707 = $tmp706->methods[0];
frost$core$Bit $tmp709 = $tmp707(((frost$core$Equatable*) $tmp700), ((frost$core$Equatable*) $tmp705));
bool $tmp710 = $tmp709.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp705)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp700)));
if ($tmp710) goto block143; else goto block144;
block143:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:132
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp711 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp712 = (frost$core$Int64) {39};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp711, $tmp712, param1);
org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(param0, param1, $tmp711);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:133
org$frostlang$frostc$MethodDecl* $tmp713 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp714 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp715 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block144:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:135
org$frostlang$frostc$MethodDecl* $tmp716 = *(&local2);
org$frostlang$frostc$Type** $tmp717 = &$tmp716->returnType;
org$frostlang$frostc$Type* $tmp718 = *$tmp717;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Return.frost:136:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn720 $tmp719 = ($fn720) ((frost$core$Object*) $tmp718)->$class->vtable[0];
frost$core$String* $tmp721 = $tmp719(((frost$core$Object*) $tmp718));
frost$core$String* $tmp722 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s723, $tmp721);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
frost$core$String* $tmp724 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp722, &$s725);
frost$core$String* $tmp726 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s727, $tmp724);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp726);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
goto block142;
block142:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:138
// begin inline call to method org.frostlang.frostc.Compiler.leaveAllScopes() from Return.frost:138:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5404
frost$collections$Stack** $tmp728 = &param0->enclosingContexts;
frost$collections$Stack* $tmp729 = *$tmp728;
ITable* $tmp730 = ((frost$collections$Iterable*) $tmp729)->$class->itable;
while ($tmp730->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp730 = $tmp730->next;
}
$fn732 $tmp731 = $tmp730->methods[0];
frost$collections$Iterator* $tmp733 = $tmp731(((frost$collections$Iterable*) $tmp729));
goto block148;
block148:;
ITable* $tmp734 = $tmp733->$class->itable;
while ($tmp734->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp734 = $tmp734->next;
}
$fn736 $tmp735 = $tmp734->methods[0];
frost$core$Bit $tmp737 = $tmp735($tmp733);
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block150; else goto block149;
block149:;
*(&local25) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp739 = $tmp733->$class->itable;
while ($tmp739->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp739 = $tmp739->next;
}
$fn741 $tmp740 = $tmp739->methods[1];
frost$core$Object* $tmp742 = $tmp740($tmp733);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp742)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp743 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local25) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp742);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5405
org$frostlang$frostc$Compiler$EnclosingContext* $tmp744 = *(&local25);
frost$core$Int64* $tmp745 = &$tmp744->$rawValue;
frost$core$Int64 $tmp746 = *$tmp745;
frost$core$Int64 $tmp747 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:5406:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp748 = $tmp746.value;
int64_t $tmp749 = $tmp747.value;
bool $tmp750 = $tmp748 == $tmp749;
frost$core$Bit $tmp751 = frost$core$Bit$init$builtin_bit($tmp750);
bool $tmp752 = $tmp751.value;
if ($tmp752) goto block152; else goto block151;
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5407
frost$core$Frost$unref$frost$core$Object$Q($tmp742);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp753 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local25) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
goto block147;
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5410
org$frostlang$frostc$Compiler$EnclosingContext* $tmp754 = *(&local25);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext(param0, $tmp754);
frost$core$Frost$unref$frost$core$Object$Q($tmp742);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp755 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local25) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block148;
block150:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
goto block147;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:139
org$frostlang$frostc$IR$Block$ID$nullable* $tmp756 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp757 = *$tmp756;
frost$core$Bit $tmp758 = frost$core$Bit$init$builtin_bit($tmp757.nonnull);
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block154; else goto block156;
block154:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:140
org$frostlang$frostc$IR* $tmp760 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp761 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp762 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID$nullable* $tmp763 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp764 = *$tmp763;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp761, $tmp762, param1, ((org$frostlang$frostc$IR$Block$ID) $tmp764.value));
$fn766 $tmp765 = ($fn766) $tmp760->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp767 = $tmp765($tmp760, $tmp761);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
goto block155;
block156:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:143
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from Return.frost:143:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5810
frost$collections$Stack** $tmp768 = &param0->enclosingContexts;
frost$collections$Stack* $tmp769 = *$tmp768;
ITable* $tmp770 = ((frost$collections$Iterable*) $tmp769)->$class->itable;
while ($tmp770->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp770 = $tmp770->next;
}
$fn772 $tmp771 = $tmp770->methods[0];
frost$collections$Iterator* $tmp773 = $tmp771(((frost$collections$Iterable*) $tmp769));
goto block158;
block158:;
ITable* $tmp774 = $tmp773->$class->itable;
while ($tmp774->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp774 = $tmp774->next;
}
$fn776 $tmp775 = $tmp774->methods[0];
frost$core$Bit $tmp777 = $tmp775($tmp773);
bool $tmp778 = $tmp777.value;
if ($tmp778) goto block160; else goto block159;
block159:;
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp779 = $tmp773->$class->itable;
while ($tmp779->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp779 = $tmp779->next;
}
$fn781 $tmp780 = $tmp779->methods[1];
frost$core$Object* $tmp782 = $tmp780($tmp773);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp782)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp783 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp782);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5811
org$frostlang$frostc$Compiler$EnclosingContext* $tmp784 = *(&local27);
frost$core$Int64* $tmp785 = &$tmp784->$rawValue;
frost$core$Int64 $tmp786 = *$tmp785;
frost$core$Int64 $tmp787 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:5812:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp788 = $tmp786.value;
int64_t $tmp789 = $tmp787.value;
bool $tmp790 = $tmp788 == $tmp789;
frost$core$Bit $tmp791 = frost$core$Bit$init$builtin_bit($tmp790);
bool $tmp792 = $tmp791.value;
if ($tmp792) goto block162; else goto block161;
block162:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5813
org$frostlang$frostc$Compiler$EnclosingContext* $tmp793 = *(&local27);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
frost$core$Frost$unref$frost$core$Object$Q($tmp782);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp794 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
*(&local26) = $tmp793;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
goto block157;
block161:;
frost$core$Frost$unref$frost$core$Object$Q($tmp782);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp795 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block158;
block160:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5817
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
*(&local26) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
goto block157;
block157:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp796 = *(&local26);
*(&local28) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp797 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
*(&local28) = $tmp796;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:144
org$frostlang$frostc$Compiler$EnclosingContext* $tmp798 = *(&local28);
frost$core$Bit $tmp799 = frost$core$Bit$init$builtin_bit($tmp798 != NULL);
bool $tmp800 = $tmp799.value;
if ($tmp800) goto block164; else goto block166;
block164:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:145
org$frostlang$frostc$Compiler$EnclosingContext* $tmp801 = *(&local28);
frost$core$Int64* $tmp802 = &$tmp801->$rawValue;
frost$core$Int64 $tmp803 = *$tmp802;
frost$core$Int64 $tmp804 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Return.frost:146:55
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp805 = $tmp803.value;
int64_t $tmp806 = $tmp804.value;
bool $tmp807 = $tmp805 == $tmp806;
frost$core$Bit $tmp808 = frost$core$Bit$init$builtin_bit($tmp807);
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block168; else goto block167;
block168:;
frost$collections$ListView** $tmp810 = (frost$collections$ListView**) ($tmp801->$data + 0);
frost$collections$ListView* $tmp811 = *$tmp810;
frost$core$Int64* $tmp812 = (frost$core$Int64*) ($tmp801->$data + 8);
frost$core$Int64 $tmp813 = *$tmp812;
org$frostlang$frostc$Compiler$InlineReturn** $tmp814 = (org$frostlang$frostc$Compiler$InlineReturn**) ($tmp801->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp815 = *$tmp814;
*(&local29) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
org$frostlang$frostc$Compiler$InlineReturn* $tmp816 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
*(&local29) = $tmp815;
org$frostlang$frostc$IR$Block$ID* $tmp817 = (org$frostlang$frostc$IR$Block$ID*) ($tmp801->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp818 = *$tmp817;
*(&local30) = $tmp818;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:148
org$frostlang$frostc$IR$Block$ID $tmp819 = *(&local30);
frost$core$Bit $tmp820 = frost$core$Bit$init$builtin_bit(true);
bool $tmp821 = $tmp820.value;
if ($tmp821) goto block170; else goto block171;
block170:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:149
org$frostlang$frostc$IR* $tmp822 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp823 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp824 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp825 = *(&local30);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp823, $tmp824, param1, $tmp825);
$fn827 $tmp826 = ($fn827) $tmp822->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp828 = $tmp826($tmp822, $tmp823);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
goto block171;
block171:;
org$frostlang$frostc$Compiler$InlineReturn* $tmp829 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
*(&local29) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
goto block167;
block167:;
goto block165;
block166:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:155
org$frostlang$frostc$IR* $tmp830 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp831 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp832 = (frost$core$Int64) {25};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q($tmp831, $tmp832, param1, ((org$frostlang$frostc$IR$Value*) NULL));
$fn834 $tmp833 = ($fn834) $tmp830->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp835 = $tmp833($tmp830, $tmp831);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
goto block165;
block165:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp836 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local28) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp837 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local26) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block155;
block155:;
goto block65;
block65:;
org$frostlang$frostc$MethodDecl* $tmp838 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp839 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp840 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
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

