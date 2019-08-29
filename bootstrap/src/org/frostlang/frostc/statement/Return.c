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
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Compiler/InlineReturn.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/core/Frost.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
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

typedef frost$core$Int (*$fn18)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn32)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn47)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn66)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn95)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn109)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn124)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn143)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn170)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn193)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn248)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn252)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn257)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn293)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Value* (*$fn320)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef frost$core$Bit (*$fn362)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn387)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn406)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn410)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn415)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn443)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn457)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn472)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn491)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn545)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn548)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn556)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$collections$Iterator* (*$fn564)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn568)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn573)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Type* (*$fn641)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn644)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn648)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn675)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn685)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn697)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn711)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn723)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn735)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn739)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn744)(frost$collections$Iterator*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn769)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$collections$Iterator* (*$fn775)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn779)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn784)(frost$collections$Iterator*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn830)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn837)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x52\x65\x74\x75\x72\x6e", 37, 4852820752230860395, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -5865721028201646545, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s559 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s656 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s679 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s726 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s728 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20", 32, 1290914291935992386, NULL };

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
frost$core$Int local13;
frost$core$Int local14;
org$frostlang$frostc$Compiler$EnclosingContext* local15 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local16 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local17 = NULL;
org$frostlang$frostc$Compiler$InlineReturn* local18 = NULL;
org$frostlang$frostc$IR$Block$ID local19;
frost$core$Int local20;
frost$core$Int local21;
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
frost$core$Int $tmp7 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Return.frost:25:50
frost$core$Int $tmp8 = (frost$core$Int) {0u};
int64_t $tmp9 = $tmp7.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 >= $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp14 = &$tmp6->contents;
frost$collections$Array* $tmp15 = *$tmp14;
ITable* $tmp16 = ((frost$collections$CollectionView*) $tmp15)->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[0];
frost$core$Int $tmp19 = $tmp17(((frost$collections$CollectionView*) $tmp15));
int64_t $tmp20 = $tmp7.value;
int64_t $tmp21 = $tmp19.value;
bool $tmp22 = $tmp20 < $tmp21;
frost$core$Bit $tmp23 = (frost$core$Bit) {$tmp22};
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block2; else goto block3;
block3:;
frost$core$Int $tmp25 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, $tmp25, &$s27);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp28 = &$tmp6->contents;
frost$collections$Array* $tmp29 = *$tmp28;
ITable* $tmp30 = ((frost$collections$CollectionView*) $tmp29)->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp30 = $tmp30->next;
}
$fn32 $tmp31 = $tmp30->methods[0];
frost$core$Int $tmp33 = $tmp31(((frost$collections$CollectionView*) $tmp29));
int64_t $tmp34 = $tmp33.value;
int64_t $tmp35 = $tmp7.value;
bool $tmp36 = $tmp34 > $tmp35;
frost$core$Bit $tmp37 = (frost$core$Bit) {$tmp36};
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block6; else goto block7;
block7:;
frost$core$Int $tmp39 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s40, $tmp39);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp41 = &$tmp6->contents;
frost$collections$Array* $tmp42 = *$tmp41;
frost$collections$Array** $tmp43 = &$tmp6->contents;
frost$collections$Array* $tmp44 = *$tmp43;
ITable* $tmp45 = ((frost$collections$CollectionView*) $tmp44)->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
$fn47 $tmp46 = $tmp45->methods[0];
frost$core$Int $tmp48 = $tmp46(((frost$collections$CollectionView*) $tmp44));
frost$core$Int $tmp49 = (frost$core$Int) {1u};
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49.value;
int64_t $tmp52 = $tmp50 - $tmp51;
frost$core$Int $tmp53 = (frost$core$Int) {$tmp52};
int64_t $tmp54 = $tmp53.value;
int64_t $tmp55 = $tmp7.value;
int64_t $tmp56 = $tmp54 - $tmp55;
frost$core$Int $tmp57 = (frost$core$Int) {$tmp56};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp58 = (frost$core$Int) {0u};
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
frost$core$Int $tmp67 = $tmp65(((frost$collections$CollectionView*) $tmp42));
int64_t $tmp68 = $tmp57.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 < $tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block9; else goto block10;
block10:;
frost$core$Int $tmp73 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s74, $tmp73, &$s75);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp76 = &$tmp42->data;
frost$core$Object** $tmp77 = *$tmp76;
frost$core$Int64 $tmp78 = frost$core$Int64$init$frost$core$Int($tmp57);
int64_t $tmp79 = $tmp78.value;
frost$core$Object* $tmp80 = $tmp77[$tmp79];
frost$core$Frost$ref$frost$core$Object$Q($tmp80);
frost$core$Frost$ref$frost$core$Object$Q($tmp80);
frost$core$Frost$unref$frost$core$Object$Q($tmp80);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp80)));
org$frostlang$frostc$ClassDecl* $tmp81 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) $tmp80);
frost$core$Frost$unref$frost$core$Object$Q($tmp80);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:26
frost$collections$Stack** $tmp82 = &param0->currentMethod;
frost$collections$Stack* $tmp83 = *$tmp82;
frost$core$Int $tmp84 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Return.frost:26:52
frost$core$Int $tmp85 = (frost$core$Int) {0u};
int64_t $tmp86 = $tmp84.value;
int64_t $tmp87 = $tmp85.value;
bool $tmp88 = $tmp86 >= $tmp87;
frost$core$Bit $tmp89 = (frost$core$Bit) {$tmp88};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block15; else goto block14;
block15:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp91 = &$tmp83->contents;
frost$collections$Array* $tmp92 = *$tmp91;
ITable* $tmp93 = ((frost$collections$CollectionView*) $tmp92)->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[0];
frost$core$Int $tmp96 = $tmp94(((frost$collections$CollectionView*) $tmp92));
int64_t $tmp97 = $tmp84.value;
int64_t $tmp98 = $tmp96.value;
bool $tmp99 = $tmp97 < $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block13; else goto block14;
block14:;
frost$core$Int $tmp102 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s103, $tmp102, &$s104);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp105 = &$tmp83->contents;
frost$collections$Array* $tmp106 = *$tmp105;
ITable* $tmp107 = ((frost$collections$CollectionView*) $tmp106)->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[0];
frost$core$Int $tmp110 = $tmp108(((frost$collections$CollectionView*) $tmp106));
int64_t $tmp111 = $tmp110.value;
int64_t $tmp112 = $tmp84.value;
bool $tmp113 = $tmp111 > $tmp112;
frost$core$Bit $tmp114 = (frost$core$Bit) {$tmp113};
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block17; else goto block18;
block18:;
frost$core$Int $tmp116 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s117, $tmp116);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp118 = &$tmp83->contents;
frost$collections$Array* $tmp119 = *$tmp118;
frost$collections$Array** $tmp120 = &$tmp83->contents;
frost$collections$Array* $tmp121 = *$tmp120;
ITable* $tmp122 = ((frost$collections$CollectionView*) $tmp121)->$class->itable;
while ($tmp122->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp122 = $tmp122->next;
}
$fn124 $tmp123 = $tmp122->methods[0];
frost$core$Int $tmp125 = $tmp123(((frost$collections$CollectionView*) $tmp121));
frost$core$Int $tmp126 = (frost$core$Int) {1u};
int64_t $tmp127 = $tmp125.value;
int64_t $tmp128 = $tmp126.value;
int64_t $tmp129 = $tmp127 - $tmp128;
frost$core$Int $tmp130 = (frost$core$Int) {$tmp129};
int64_t $tmp131 = $tmp130.value;
int64_t $tmp132 = $tmp84.value;
int64_t $tmp133 = $tmp131 - $tmp132;
frost$core$Int $tmp134 = (frost$core$Int) {$tmp133};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp135 = (frost$core$Int) {0u};
int64_t $tmp136 = $tmp134.value;
int64_t $tmp137 = $tmp135.value;
bool $tmp138 = $tmp136 >= $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block22; else goto block21;
block22:;
ITable* $tmp141 = ((frost$collections$CollectionView*) $tmp119)->$class->itable;
while ($tmp141->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp141 = $tmp141->next;
}
$fn143 $tmp142 = $tmp141->methods[0];
frost$core$Int $tmp144 = $tmp142(((frost$collections$CollectionView*) $tmp119));
int64_t $tmp145 = $tmp134.value;
int64_t $tmp146 = $tmp144.value;
bool $tmp147 = $tmp145 < $tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block20; else goto block21;
block21:;
frost$core$Int $tmp150 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s151, $tmp150, &$s152);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp153 = &$tmp119->data;
frost$core$Object** $tmp154 = *$tmp153;
frost$core$Int64 $tmp155 = frost$core$Int64$init$frost$core$Int($tmp134);
int64_t $tmp156 = $tmp155.value;
frost$core$Object* $tmp157 = $tmp154[$tmp156];
frost$core$Frost$ref$frost$core$Object$Q($tmp157);
frost$core$Frost$ref$frost$core$Object$Q($tmp157);
frost$core$Frost$unref$frost$core$Object$Q($tmp157);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp157)));
org$frostlang$frostc$MethodDecl* $tmp158 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) $tmp157);
frost$core$Frost$unref$frost$core$Object$Q($tmp157);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:27
org$frostlang$frostc$MethodDecl* $tmp159 = *(&local2);
frost$core$String** $tmp160 = &((org$frostlang$frostc$Symbol*) $tmp159)->name;
frost$core$String* $tmp161 = *$tmp160;
frost$core$Bit $tmp162 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp161, &$s163);
bool $tmp164 = $tmp162.value;
if ($tmp164) goto block26; else goto block24;
block26:;
org$frostlang$frostc$MethodDecl* $tmp165 = *(&local2);
frost$collections$Array** $tmp166 = &$tmp165->parameters;
frost$collections$Array* $tmp167 = *$tmp166;
ITable* $tmp168 = ((frost$collections$CollectionView*) $tmp167)->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[0];
frost$core$Int $tmp171 = $tmp169(((frost$collections$CollectionView*) $tmp167));
frost$core$Int $tmp172 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:27:76
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp173 = $tmp171.value;
int64_t $tmp174 = $tmp172.value;
bool $tmp175 = $tmp173 == $tmp174;
frost$core$Bit $tmp176 = (frost$core$Bit) {$tmp175};
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block25; else goto block24;
block25:;
org$frostlang$frostc$MethodDecl* $tmp178 = *(&local2);
frost$core$Weak** $tmp179 = &$tmp178->owner;
frost$core$Weak* $tmp180 = *$tmp179;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Return.frost:28:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp181 = &$tmp180->_valid;
frost$core$Bit $tmp182 = *$tmp181;
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block30; else goto block31;
block31:;
frost$core$Int $tmp184 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s185, $tmp184);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp186 = &$tmp180->value;
frost$core$Object* $tmp187 = *$tmp186;
frost$core$Frost$ref$frost$core$Object$Q($tmp187);
frost$core$String** $tmp188 = &((org$frostlang$frostc$ClassDecl*) $tmp187)->name;
frost$core$String* $tmp189 = *$tmp188;
ITable* $tmp191 = ((frost$core$Equatable*) $tmp189)->$class->itable;
while ($tmp191->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp191 = $tmp191->next;
}
$fn193 $tmp192 = $tmp191->methods[1];
frost$core$Bit $tmp194 = $tmp192(((frost$core$Equatable*) $tmp189), ((frost$core$Equatable*) &$s190));
bool $tmp195 = $tmp194.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp187);
if ($tmp195) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:30
org$frostlang$frostc$ClassDecl* $tmp196 = *(&local1);
org$frostlang$frostc$Type** $tmp197 = &$tmp196->rawSuper;
org$frostlang$frostc$Type* $tmp198 = *$tmp197;
frost$core$Bit $tmp199 = (frost$core$Bit) {$tmp198 != NULL};
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block34; else goto block33;
block34:;
org$frostlang$frostc$ClassDecl* $tmp201 = *(&local1);
frost$core$Bit $tmp202 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, $tmp201);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Return.frost:30:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp203 = $tmp202.value;
bool $tmp204 = !$tmp203;
frost$core$Bit $tmp205 = (frost$core$Bit) {$tmp204};
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:31
org$frostlang$frostc$ClassDecl* $tmp207 = *(&local1);
org$frostlang$frostc$Type** $tmp208 = &$tmp207->type;
org$frostlang$frostc$Type* $tmp209 = *$tmp208;
org$frostlang$frostc$ClassDecl* $tmp210 = *(&local1);
org$frostlang$frostc$Type** $tmp211 = &$tmp210->rawSuper;
org$frostlang$frostc$Type* $tmp212 = *$tmp211;
org$frostlang$frostc$Type* $tmp213 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp209, $tmp212);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
org$frostlang$frostc$Type* $tmp214 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
*(&local3) = $tmp213;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:32
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp215 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp216 = (frost$core$Int) {9u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp217 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp218 = (frost$core$Int) {16u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp219 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp220 = (frost$core$Int) {41u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position($tmp219, $tmp220, param1);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp217, $tmp218, param1, $tmp219, &$s221);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp222 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp222);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp215, $tmp216, param1, $tmp217, $tmp222);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp215);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
org$frostlang$frostc$Type* $tmp223 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block33;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:36
frost$core$Bit* $tmp224 = &param0->inFieldCleanup;
frost$core$Bit $tmp225 = *$tmp224;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Return.frost:36:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp226 = $tmp225.value;
bool $tmp227 = !$tmp226;
frost$core$Bit $tmp228 = (frost$core$Bit) {$tmp227};
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block37; else goto block38;
block38:;
frost$core$Int $tmp230 = (frost$core$Int) {36u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s231, $tmp230);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:37
frost$core$Bit $tmp232 = (frost$core$Bit) {true};
frost$core$Bit* $tmp233 = &param0->inFieldCleanup;
*$tmp233 = $tmp232;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:38
org$frostlang$frostc$MethodDecl* $tmp234 = *(&local2);
frost$core$Weak** $tmp235 = &$tmp234->owner;
frost$core$Weak* $tmp236 = *$tmp235;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Return.frost:38:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp237 = &$tmp236->_valid;
frost$core$Bit $tmp238 = *$tmp237;
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block41; else goto block42;
block42:;
frost$core$Int $tmp240 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s241, $tmp240);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp242 = &$tmp236->value;
frost$core$Object* $tmp243 = *$tmp242;
frost$core$Frost$ref$frost$core$Object$Q($tmp243);
frost$collections$Array** $tmp244 = &((org$frostlang$frostc$ClassDecl*) $tmp243)->fields;
frost$collections$Array* $tmp245 = *$tmp244;
ITable* $tmp246 = ((frost$collections$Iterable*) $tmp245)->$class->itable;
while ($tmp246->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp246 = $tmp246->next;
}
$fn248 $tmp247 = $tmp246->methods[0];
frost$collections$Iterator* $tmp249 = $tmp247(((frost$collections$Iterable*) $tmp245));
goto block43;
block43:;
ITable* $tmp250 = $tmp249->$class->itable;
while ($tmp250->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp250 = $tmp250->next;
}
$fn252 $tmp251 = $tmp250->methods[0];
frost$core$Bit $tmp253 = $tmp251($tmp249);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block45; else goto block44;
block44:;
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp255 = $tmp249->$class->itable;
while ($tmp255->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp255 = $tmp255->next;
}
$fn257 $tmp256 = $tmp255->methods[1];
frost$core$Object* $tmp258 = $tmp256($tmp249);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp258)));
org$frostlang$frostc$FieldDecl* $tmp259 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) $tmp258);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:39
org$frostlang$frostc$FieldDecl* $tmp260 = *(&local4);
frost$core$Bit $tmp261 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp260);
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block50; else goto block47;
block50:;
org$frostlang$frostc$FieldDecl* $tmp263 = *(&local4);
org$frostlang$frostc$Annotations** $tmp264 = &$tmp263->annotations;
org$frostlang$frostc$Annotations* $tmp265 = *$tmp264;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Return.frost:39:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp266 = &$tmp265->flags;
frost$core$Int $tmp267 = *$tmp266;
frost$core$Int $tmp268 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp269 = $tmp267.value;
int64_t $tmp270 = $tmp268.value;
int64_t $tmp271 = $tmp269 & $tmp270;
frost$core$Int $tmp272 = (frost$core$Int) {$tmp271};
frost$core$Int $tmp273 = (frost$core$Int) {0u};
int64_t $tmp274 = $tmp272.value;
int64_t $tmp275 = $tmp273.value;
bool $tmp276 = $tmp274 != $tmp275;
frost$core$Bit $tmp277 = (frost$core$Bit) {$tmp276};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Return.frost:39:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp278 = $tmp277.value;
bool $tmp279 = !$tmp278;
frost$core$Bit $tmp280 = (frost$core$Bit) {$tmp279};
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block49; else goto block47;
block49:;
org$frostlang$frostc$FieldDecl* $tmp282 = *(&local4);
org$frostlang$frostc$FieldDecl$Kind* $tmp283 = &$tmp282->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp284 = *$tmp283;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp285;
$tmp285 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp285->value = $tmp284;
frost$core$Int $tmp286 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Return.frost:40:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp287 = &(&local6)->$rawValue;
*$tmp287 = $tmp286;
org$frostlang$frostc$FieldDecl$Kind $tmp288 = *(&local6);
*(&local5) = $tmp288;
org$frostlang$frostc$FieldDecl$Kind $tmp289 = *(&local5);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp290;
$tmp290 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp290->value = $tmp289;
ITable* $tmp291 = ((frost$core$Equatable*) $tmp285)->$class->itable;
while ($tmp291->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp291 = $tmp291->next;
}
$fn293 $tmp292 = $tmp291->methods[1];
frost$core$Bit $tmp294 = $tmp292(((frost$core$Equatable*) $tmp285), ((frost$core$Equatable*) $tmp290));
bool $tmp295 = $tmp294.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp290)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp285)));
if ($tmp295) goto block48; else goto block47;
block48:;
org$frostlang$frostc$FieldDecl* $tmp296 = *(&local4);
org$frostlang$frostc$Type** $tmp297 = &$tmp296->type;
org$frostlang$frostc$Type* $tmp298 = *$tmp297;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:40:87
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:736
frost$core$Bit $tmp299 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp298);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:736:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp300 = $tmp299.value;
bool $tmp301 = !$tmp300;
frost$core$Bit $tmp302 = (frost$core$Bit) {$tmp301};
bool $tmp303 = $tmp302.value;
if ($tmp303) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:737
frost$core$Bit $tmp304 = (frost$core$Bit) {false};
*(&local7) = $tmp304;
goto block55;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:739
frost$core$Bit $tmp305 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp298);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:739:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp306 = $tmp305.value;
bool $tmp307 = !$tmp306;
frost$core$Bit $tmp308 = (frost$core$Bit) {$tmp307};
*(&local7) = $tmp308;
goto block55;
block55:;
frost$core$Bit $tmp309 = *(&local7);
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:41
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$lvalue$FieldLValue));
org$frostlang$frostc$lvalue$FieldLValue* $tmp311 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp312 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp313 = (frost$core$Int) {22u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp312, $tmp313, param1, &$s314);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp315 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp316 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp315, $tmp316);
org$frostlang$frostc$IR$Value* $tmp317 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp312, $tmp315);
org$frostlang$frostc$FieldDecl* $tmp318 = *(&local4);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp311, param0, param1, $tmp317, $tmp318);
$fn320 $tmp319 = ($fn320) $tmp311->$class->vtable[3];
org$frostlang$frostc$IR$Value* $tmp321 = $tmp319($tmp311);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
org$frostlang$frostc$IR$Value* $tmp322 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local8) = $tmp321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:45
org$frostlang$frostc$IR$Value* $tmp323 = *(&local8);
frost$core$Bit $tmp324 = (frost$core$Bit) {$tmp323 == NULL};
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:46
org$frostlang$frostc$IR$Value* $tmp326 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp258);
org$frostlang$frostc$FieldDecl* $tmp327 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$Frost$unref$frost$core$Object$Q($tmp243);
org$frostlang$frostc$MethodDecl* $tmp328 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp329 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp330 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:48
org$frostlang$frostc$IR$Value* $tmp331 = *(&local8);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, $tmp331);
org$frostlang$frostc$IR$Value* $tmp332 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block47;
block47:;
frost$core$Frost$unref$frost$core$Object$Q($tmp258);
org$frostlang$frostc$FieldDecl* $tmp333 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block43;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$Frost$unref$frost$core$Object$Q($tmp243);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:51
frost$core$Bit* $tmp334 = &param0->inFieldCleanup;
frost$core$Bit $tmp335 = *$tmp334;
bool $tmp336 = $tmp335.value;
if ($tmp336) goto block62; else goto block63;
block63:;
frost$core$Int $tmp337 = (frost$core$Int) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s338, $tmp337);
abort(); // unreachable
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:52
frost$core$Bit $tmp339 = (frost$core$Bit) {false};
frost$core$Bit* $tmp340 = &param0->inFieldCleanup;
*$tmp340 = $tmp339;
goto block24;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:54
frost$core$Bit $tmp341 = (frost$core$Bit) {param2 != NULL};
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block64; else goto block66;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:55
org$frostlang$frostc$MethodDecl* $tmp343 = *(&local2);
org$frostlang$frostc$Type** $tmp344 = &$tmp343->returnType;
org$frostlang$frostc$Type* $tmp345 = *$tmp344;
org$frostlang$frostc$Type** $tmp346 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp347 = *$tmp346;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:55:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp348 = &((org$frostlang$frostc$Symbol*) $tmp345)->name;
frost$core$String* $tmp349 = *$tmp348;
frost$core$String** $tmp350 = &((org$frostlang$frostc$Symbol*) $tmp347)->name;
frost$core$String* $tmp351 = *$tmp350;
frost$core$Bit $tmp352 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp349, $tmp351);
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block70; else goto block71;
block70:;
org$frostlang$frostc$Type$Kind* $tmp354 = &$tmp345->typeKind;
org$frostlang$frostc$Type$Kind $tmp355 = *$tmp354;
org$frostlang$frostc$Type$Kind$wrapper* $tmp356;
$tmp356 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp356->value = $tmp355;
org$frostlang$frostc$Type$Kind* $tmp357 = &$tmp347->typeKind;
org$frostlang$frostc$Type$Kind $tmp358 = *$tmp357;
org$frostlang$frostc$Type$Kind$wrapper* $tmp359;
$tmp359 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp359->value = $tmp358;
ITable* $tmp360 = ((frost$core$Equatable*) $tmp356)->$class->itable;
while ($tmp360->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp360 = $tmp360->next;
}
$fn362 $tmp361 = $tmp360->methods[0];
frost$core$Bit $tmp363 = $tmp361(((frost$core$Equatable*) $tmp356), ((frost$core$Equatable*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp359)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp356)));
*(&local9) = $tmp363;
goto block72;
block71:;
*(&local9) = $tmp352;
goto block72;
block72:;
frost$core$Bit $tmp364 = *(&local9);
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:56
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s366);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:57
org$frostlang$frostc$MethodDecl* $tmp367 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp368 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp369 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:59
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp370 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp371 = (frost$core$Int) {3u};
org$frostlang$frostc$MethodDecl* $tmp372 = *(&local2);
org$frostlang$frostc$Type** $tmp373 = &$tmp372->returnType;
org$frostlang$frostc$Type* $tmp374 = *$tmp373;
frost$core$Bit $tmp375 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp370, $tmp371, $tmp374, $tmp375);
org$frostlang$frostc$IR$Value* $tmp376 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp370);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
org$frostlang$frostc$IR$Value* $tmp377 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
*(&local10) = $tmp376;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:61
org$frostlang$frostc$IR$Value* $tmp378 = *(&local10);
frost$core$Bit $tmp379 = (frost$core$Bit) {$tmp378 == NULL};
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:62
org$frostlang$frostc$IR$Value* $tmp381 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp382 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp383 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp384 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:64
org$frostlang$frostc$IR$Value* $tmp385 = *(&local10);
$fn387 $tmp386 = ($fn387) $tmp385->$class->vtable[2];
org$frostlang$frostc$Type* $tmp388 = $tmp386($tmp385);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:64:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:736
frost$core$Bit $tmp389 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp388);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:736:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp390 = $tmp389.value;
bool $tmp391 = !$tmp390;
frost$core$Bit $tmp392 = (frost$core$Bit) {$tmp391};
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block78; else goto block79;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:737
frost$core$Bit $tmp394 = (frost$core$Bit) {false};
*(&local11) = $tmp394;
goto block77;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:739
frost$core$Bit $tmp395 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp388);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:739:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp396 = $tmp395.value;
bool $tmp397 = !$tmp396;
frost$core$Bit $tmp398 = (frost$core$Bit) {$tmp397};
*(&local11) = $tmp398;
goto block77;
block77:;
frost$core$Bit $tmp399 = *(&local11);
bool $tmp400 = $tmp399.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
if ($tmp400) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:65
org$frostlang$frostc$IR$Value* $tmp401 = *(&local10);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp401);
goto block76;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:67
// begin inline call to method org.frostlang.frostc.Compiler.leaveAllScopes() from Return.frost:67:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5434
frost$collections$Stack** $tmp402 = &param0->enclosingContexts;
frost$collections$Stack* $tmp403 = *$tmp402;
ITable* $tmp404 = ((frost$collections$Iterable*) $tmp403)->$class->itable;
while ($tmp404->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp404 = $tmp404->next;
}
$fn406 $tmp405 = $tmp404->methods[0];
frost$collections$Iterator* $tmp407 = $tmp405(((frost$collections$Iterable*) $tmp403));
goto block83;
block83:;
ITable* $tmp408 = $tmp407->$class->itable;
while ($tmp408->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp408 = $tmp408->next;
}
$fn410 $tmp409 = $tmp408->methods[0];
frost$core$Bit $tmp411 = $tmp409($tmp407);
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block85; else goto block84;
block84:;
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp413 = $tmp407->$class->itable;
while ($tmp413->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp413 = $tmp413->next;
}
$fn415 $tmp414 = $tmp413->methods[1];
frost$core$Object* $tmp416 = $tmp414($tmp407);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp416)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp417 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp416);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5435
org$frostlang$frostc$Compiler$EnclosingContext* $tmp418 = *(&local12);
frost$core$Int* $tmp419 = &$tmp418->$rawValue;
frost$core$Int $tmp420 = *$tmp419;
frost$core$Int $tmp421 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5436:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp422 = $tmp420.value;
int64_t $tmp423 = $tmp421.value;
bool $tmp424 = $tmp422 == $tmp423;
frost$core$Bit $tmp425 = (frost$core$Bit) {$tmp424};
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block87; else goto block86;
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5437
frost$core$Frost$unref$frost$core$Object$Q($tmp416);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp427 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
goto block82;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5440
org$frostlang$frostc$Compiler$EnclosingContext* $tmp428 = *(&local12);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext(param0, $tmp428);
frost$core$Frost$unref$frost$core$Object$Q($tmp416);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp429 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block83;
block85:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
goto block82;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:68
goto block89;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:69
frost$collections$Stack** $tmp430 = &param0->enclosingContexts;
frost$collections$Stack* $tmp431 = *$tmp430;
frost$core$Int $tmp432 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Return.frost:69:49
frost$core$Int $tmp433 = (frost$core$Int) {0u};
int64_t $tmp434 = $tmp432.value;
int64_t $tmp435 = $tmp433.value;
bool $tmp436 = $tmp434 >= $tmp435;
frost$core$Bit $tmp437 = (frost$core$Bit) {$tmp436};
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block94; else goto block93;
block94:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp439 = &$tmp431->contents;
frost$collections$Array* $tmp440 = *$tmp439;
ITable* $tmp441 = ((frost$collections$CollectionView*) $tmp440)->$class->itable;
while ($tmp441->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp441 = $tmp441->next;
}
$fn443 $tmp442 = $tmp441->methods[0];
frost$core$Int $tmp444 = $tmp442(((frost$collections$CollectionView*) $tmp440));
int64_t $tmp445 = $tmp432.value;
int64_t $tmp446 = $tmp444.value;
bool $tmp447 = $tmp445 < $tmp446;
frost$core$Bit $tmp448 = (frost$core$Bit) {$tmp447};
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block92; else goto block93;
block93:;
frost$core$Int $tmp450 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s451, $tmp450, &$s452);
abort(); // unreachable
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp453 = &$tmp431->contents;
frost$collections$Array* $tmp454 = *$tmp453;
ITable* $tmp455 = ((frost$collections$CollectionView*) $tmp454)->$class->itable;
while ($tmp455->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp455 = $tmp455->next;
}
$fn457 $tmp456 = $tmp455->methods[0];
frost$core$Int $tmp458 = $tmp456(((frost$collections$CollectionView*) $tmp454));
int64_t $tmp459 = $tmp458.value;
int64_t $tmp460 = $tmp432.value;
bool $tmp461 = $tmp459 > $tmp460;
frost$core$Bit $tmp462 = (frost$core$Bit) {$tmp461};
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block96; else goto block97;
block97:;
frost$core$Int $tmp464 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s465, $tmp464);
abort(); // unreachable
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp466 = &$tmp431->contents;
frost$collections$Array* $tmp467 = *$tmp466;
frost$collections$Array** $tmp468 = &$tmp431->contents;
frost$collections$Array* $tmp469 = *$tmp468;
ITable* $tmp470 = ((frost$collections$CollectionView*) $tmp469)->$class->itable;
while ($tmp470->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp470 = $tmp470->next;
}
$fn472 $tmp471 = $tmp470->methods[0];
frost$core$Int $tmp473 = $tmp471(((frost$collections$CollectionView*) $tmp469));
frost$core$Int $tmp474 = (frost$core$Int) {1u};
int64_t $tmp475 = $tmp473.value;
int64_t $tmp476 = $tmp474.value;
int64_t $tmp477 = $tmp475 - $tmp476;
frost$core$Int $tmp478 = (frost$core$Int) {$tmp477};
int64_t $tmp479 = $tmp478.value;
int64_t $tmp480 = $tmp432.value;
int64_t $tmp481 = $tmp479 - $tmp480;
frost$core$Int $tmp482 = (frost$core$Int) {$tmp481};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp483 = (frost$core$Int) {0u};
int64_t $tmp484 = $tmp482.value;
int64_t $tmp485 = $tmp483.value;
bool $tmp486 = $tmp484 >= $tmp485;
frost$core$Bit $tmp487 = (frost$core$Bit) {$tmp486};
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block101; else goto block100;
block101:;
ITable* $tmp489 = ((frost$collections$CollectionView*) $tmp467)->$class->itable;
while ($tmp489->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp489 = $tmp489->next;
}
$fn491 $tmp490 = $tmp489->methods[0];
frost$core$Int $tmp492 = $tmp490(((frost$collections$CollectionView*) $tmp467));
int64_t $tmp493 = $tmp482.value;
int64_t $tmp494 = $tmp492.value;
bool $tmp495 = $tmp493 < $tmp494;
frost$core$Bit $tmp496 = (frost$core$Bit) {$tmp495};
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block99; else goto block100;
block100:;
frost$core$Int $tmp498 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s499, $tmp498, &$s500);
abort(); // unreachable
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp501 = &$tmp467->data;
frost$core$Object** $tmp502 = *$tmp501;
frost$core$Int64 $tmp503 = frost$core$Int64$init$frost$core$Int($tmp482);
int64_t $tmp504 = $tmp503.value;
frost$core$Object* $tmp505 = $tmp502[$tmp504];
frost$core$Frost$ref$frost$core$Object$Q($tmp505);
frost$core$Frost$ref$frost$core$Object$Q($tmp505);
frost$core$Frost$unref$frost$core$Object$Q($tmp505);
frost$core$Int* $tmp506 = &((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp505)->$rawValue;
frost$core$Int $tmp507 = *$tmp506;
frost$core$Int $tmp508 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:70:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp509 = $tmp507.value;
int64_t $tmp510 = $tmp508.value;
bool $tmp511 = $tmp509 == $tmp510;
frost$core$Bit $tmp512 = (frost$core$Bit) {$tmp511};
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block103; else goto block104;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:71
frost$collections$Stack** $tmp514 = &param0->enclosingContexts;
frost$collections$Stack* $tmp515 = *$tmp514;
frost$core$Object* $tmp516 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp515);
frost$core$Frost$unref$frost$core$Object$Q($tmp516);
frost$core$Frost$unref$frost$core$Object$Q($tmp505);
goto block89;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:74
frost$core$Frost$unref$frost$core$Object$Q($tmp505);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:78
org$frostlang$frostc$Variable** $tmp517 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp518 = *$tmp517;
frost$core$Bit $tmp519 = (frost$core$Bit) {$tmp518 != NULL};
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block106; else goto block108;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:80
org$frostlang$frostc$Variable** $tmp521 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp522 = *$tmp521;
org$frostlang$frostc$Variable$Storage** $tmp523 = &$tmp522->storage;
org$frostlang$frostc$Variable$Storage* $tmp524 = *$tmp523;
frost$core$Int* $tmp525 = &$tmp524->$rawValue;
frost$core$Int $tmp526 = *$tmp525;
frost$core$Int $tmp527 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:81:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp528 = $tmp526.value;
int64_t $tmp529 = $tmp527.value;
bool $tmp530 = $tmp528 == $tmp529;
frost$core$Bit $tmp531 = (frost$core$Bit) {$tmp530};
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block110; else goto block111;
block110:;
frost$core$Int* $tmp533 = (frost$core$Int*) ($tmp524->$data + 0);
frost$core$Int $tmp534 = *$tmp533;
*(&local14) = $tmp534;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:82
frost$core$Int $tmp535 = *(&local14);
*(&local13) = $tmp535;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:88
org$frostlang$frostc$IR* $tmp536 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp537 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp538 = (frost$core$Int) {27u};
org$frostlang$frostc$IR$Value* $tmp539 = *(&local10);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp540 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp541 = (frost$core$Int) {2u};
frost$core$Int $tmp542 = *(&local13);
org$frostlang$frostc$IR$Value* $tmp543 = *(&local10);
$fn545 $tmp544 = ($fn545) $tmp543->$class->vtable[2];
org$frostlang$frostc$Type* $tmp546 = $tmp544($tmp543);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp540, $tmp541, $tmp542, $tmp546);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp537, $tmp538, param1, $tmp539, $tmp540);
$fn548 $tmp547 = ($fn548) $tmp536->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp549 = $tmp547($tmp536, $tmp537);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:90
org$frostlang$frostc$IR* $tmp550 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp551 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp552 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID$nullable* $tmp553 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp554 = *$tmp553;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp551, $tmp552, param1, ((org$frostlang$frostc$IR$Block$ID) $tmp554.value));
$fn556 $tmp555 = ($fn556) $tmp550->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp557 = $tmp555($tmp550, $tmp551);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
goto block107;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:85
frost$core$Int $tmp558 = (frost$core$Int) {85u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s559, $tmp558);
abort(); // unreachable
block108:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:93
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from Return.frost:93:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5849
frost$collections$Stack** $tmp560 = &param0->enclosingContexts;
frost$collections$Stack* $tmp561 = *$tmp560;
ITable* $tmp562 = ((frost$collections$Iterable*) $tmp561)->$class->itable;
while ($tmp562->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp562 = $tmp562->next;
}
$fn564 $tmp563 = $tmp562->methods[0];
frost$collections$Iterator* $tmp565 = $tmp563(((frost$collections$Iterable*) $tmp561));
goto block114;
block114:;
ITable* $tmp566 = $tmp565->$class->itable;
while ($tmp566->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp566 = $tmp566->next;
}
$fn568 $tmp567 = $tmp566->methods[0];
frost$core$Bit $tmp569 = $tmp567($tmp565);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block116; else goto block115;
block115:;
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp571 = $tmp565->$class->itable;
while ($tmp571->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp571 = $tmp571->next;
}
$fn573 $tmp572 = $tmp571->methods[1];
frost$core$Object* $tmp574 = $tmp572($tmp565);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp574)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp575 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp574);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5850
org$frostlang$frostc$Compiler$EnclosingContext* $tmp576 = *(&local16);
frost$core$Int* $tmp577 = &$tmp576->$rawValue;
frost$core$Int $tmp578 = *$tmp577;
frost$core$Int $tmp579 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5851:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp580 = $tmp578.value;
int64_t $tmp581 = $tmp579.value;
bool $tmp582 = $tmp580 == $tmp581;
frost$core$Bit $tmp583 = (frost$core$Bit) {$tmp582};
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block118; else goto block117;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5852
org$frostlang$frostc$Compiler$EnclosingContext* $tmp585 = *(&local16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$Frost$unref$frost$core$Object$Q($tmp574);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp586 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local15) = $tmp585;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
goto block113;
block117:;
frost$core$Frost$unref$frost$core$Object$Q($tmp574);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp587 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block114;
block116:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5856
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
*(&local15) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
goto block113;
block113:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp588 = *(&local15);
*(&local17) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp589 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
*(&local17) = $tmp588;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:94
org$frostlang$frostc$Compiler$EnclosingContext* $tmp590 = *(&local17);
frost$core$Bit $tmp591 = (frost$core$Bit) {$tmp590 != NULL};
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block120; else goto block122;
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:95
org$frostlang$frostc$Compiler$EnclosingContext* $tmp593 = *(&local17);
frost$core$Int* $tmp594 = &$tmp593->$rawValue;
frost$core$Int $tmp595 = *$tmp594;
frost$core$Int $tmp596 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:96:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp597 = $tmp595.value;
int64_t $tmp598 = $tmp596.value;
bool $tmp599 = $tmp597 == $tmp598;
frost$core$Bit $tmp600 = (frost$core$Bit) {$tmp599};
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block124; else goto block125;
block124:;
frost$collections$ListView** $tmp602 = (frost$collections$ListView**) ($tmp593->$data + 0);
frost$collections$ListView* $tmp603 = *$tmp602;
frost$core$Int* $tmp604 = (frost$core$Int*) ($tmp593->$data + 8);
frost$core$Int $tmp605 = *$tmp604;
org$frostlang$frostc$Compiler$InlineReturn** $tmp606 = (org$frostlang$frostc$Compiler$InlineReturn**) ($tmp593->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp607 = *$tmp606;
*(&local18) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
org$frostlang$frostc$Compiler$InlineReturn* $tmp608 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local18) = $tmp607;
org$frostlang$frostc$IR$Block$ID* $tmp609 = (org$frostlang$frostc$IR$Block$ID*) ($tmp593->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp610 = *$tmp609;
*(&local19) = $tmp610;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:98
org$frostlang$frostc$Compiler$InlineReturn* $tmp611 = *(&local18);
org$frostlang$frostc$Variable** $tmp612 = &$tmp611->variable;
org$frostlang$frostc$Variable* $tmp613 = *$tmp612;
frost$core$Bit $tmp614 = (frost$core$Bit) {$tmp613 != NULL};
bool $tmp615 = $tmp614.value;
if ($tmp615) goto block127; else goto block129;
block127:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:99
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:100
org$frostlang$frostc$Compiler$InlineReturn* $tmp616 = *(&local18);
org$frostlang$frostc$Variable** $tmp617 = &$tmp616->variable;
org$frostlang$frostc$Variable* $tmp618 = *$tmp617;
org$frostlang$frostc$Variable$Storage** $tmp619 = &$tmp618->storage;
org$frostlang$frostc$Variable$Storage* $tmp620 = *$tmp619;
frost$core$Int* $tmp621 = &$tmp620->$rawValue;
frost$core$Int $tmp622 = *$tmp621;
frost$core$Int $tmp623 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:101:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp624 = $tmp622.value;
int64_t $tmp625 = $tmp623.value;
bool $tmp626 = $tmp624 == $tmp625;
frost$core$Bit $tmp627 = (frost$core$Bit) {$tmp626};
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block131; else goto block132;
block131:;
frost$core$Int* $tmp629 = (frost$core$Int*) ($tmp620->$data + 0);
frost$core$Int $tmp630 = *$tmp629;
*(&local21) = $tmp630;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:102
frost$core$Int $tmp631 = *(&local21);
*(&local20) = $tmp631;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:108
org$frostlang$frostc$IR* $tmp632 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp633 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp634 = (frost$core$Int) {27u};
org$frostlang$frostc$IR$Value* $tmp635 = *(&local10);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp636 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp637 = (frost$core$Int) {2u};
frost$core$Int $tmp638 = *(&local20);
org$frostlang$frostc$IR$Value* $tmp639 = *(&local10);
$fn641 $tmp640 = ($fn641) $tmp639->$class->vtable[2];
org$frostlang$frostc$Type* $tmp642 = $tmp640($tmp639);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp636, $tmp637, $tmp638, $tmp642);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp633, $tmp634, param1, $tmp635, $tmp636);
$fn644 $tmp643 = ($fn644) $tmp632->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp645 = $tmp643($tmp632, $tmp633);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:110
org$frostlang$frostc$IR$Value* $tmp646 = *(&local10);
$fn648 $tmp647 = ($fn648) $tmp646->$class->vtable[2];
org$frostlang$frostc$Type* $tmp649 = $tmp647($tmp646);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:110:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:736
frost$core$Bit $tmp650 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp649);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:736:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp651 = $tmp650.value;
bool $tmp652 = !$tmp651;
frost$core$Bit $tmp653 = (frost$core$Bit) {$tmp652};
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block137; else goto block138;
block132:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:105
frost$core$Int $tmp655 = (frost$core$Int) {105u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s656, $tmp655);
abort(); // unreachable
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:737
frost$core$Bit $tmp657 = (frost$core$Bit) {false};
*(&local22) = $tmp657;
goto block136;
block138:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:739
frost$core$Bit $tmp658 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp649);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:739:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp659 = $tmp658.value;
bool $tmp660 = !$tmp659;
frost$core$Bit $tmp661 = (frost$core$Bit) {$tmp660};
*(&local22) = $tmp661;
goto block136;
block136:;
frost$core$Bit $tmp662 = *(&local22);
bool $tmp663 = $tmp662.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
if ($tmp663) goto block134; else goto block135;
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:111
org$frostlang$frostc$IR$Value* $tmp664 = *(&local10);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp664);
goto block135;
block135:;
goto block128;
block129:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:115
org$frostlang$frostc$Compiler$InlineReturn* $tmp665 = *(&local18);
org$frostlang$frostc$IR$Value* $tmp666 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
org$frostlang$frostc$IR$Value** $tmp667 = &$tmp665->value;
org$frostlang$frostc$IR$Value* $tmp668 = *$tmp667;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
org$frostlang$frostc$IR$Value** $tmp669 = &$tmp665->value;
*$tmp669 = $tmp666;
goto block128;
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:117
org$frostlang$frostc$IR* $tmp670 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp671 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp672 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp673 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp671, $tmp672, param1, $tmp673);
$fn675 $tmp674 = ($fn675) $tmp670->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp676 = $tmp674($tmp670, $tmp671);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
org$frostlang$frostc$Compiler$InlineReturn* $tmp677 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
*(&local18) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
goto block121;
block125:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:120
frost$core$Int $tmp678 = (frost$core$Int) {120u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s679, $tmp678);
abort(); // unreachable
block122:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:125
org$frostlang$frostc$IR* $tmp680 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp681 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp682 = (frost$core$Int) {25u};
org$frostlang$frostc$IR$Value* $tmp683 = *(&local10);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q($tmp681, $tmp682, param1, $tmp683);
$fn685 $tmp684 = ($fn685) $tmp680->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp686 = $tmp684($tmp680, $tmp681);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
goto block121;
block121:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp687 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
*(&local17) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp688 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
*(&local15) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block107;
block107:;
org$frostlang$frostc$IR$Value* $tmp689 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block65;
block66:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:130
org$frostlang$frostc$MethodDecl* $tmp690 = *(&local2);
org$frostlang$frostc$Type** $tmp691 = &$tmp690->returnType;
org$frostlang$frostc$Type* $tmp692 = *$tmp691;
org$frostlang$frostc$Type** $tmp693 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp694 = *$tmp693;
ITable* $tmp695 = ((frost$core$Equatable*) $tmp692)->$class->itable;
while ($tmp695->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp695 = $tmp695->next;
}
$fn697 $tmp696 = $tmp695->methods[1];
frost$core$Bit $tmp698 = $tmp696(((frost$core$Equatable*) $tmp692), ((frost$core$Equatable*) $tmp694));
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block141; else goto block142;
block141:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:131
org$frostlang$frostc$MethodDecl* $tmp700 = *(&local2);
org$frostlang$frostc$MethodDecl$Kind* $tmp701 = &$tmp700->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp702 = *$tmp701;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp703;
$tmp703 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp703->value = $tmp702;
frost$core$Int $tmp704 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Return.frost:131:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp705 = &(&local24)->$rawValue;
*$tmp705 = $tmp704;
org$frostlang$frostc$MethodDecl$Kind $tmp706 = *(&local24);
*(&local23) = $tmp706;
org$frostlang$frostc$MethodDecl$Kind $tmp707 = *(&local23);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp708;
$tmp708 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp708->value = $tmp707;
ITable* $tmp709 = ((frost$core$Equatable*) $tmp703)->$class->itable;
while ($tmp709->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp709 = $tmp709->next;
}
$fn711 $tmp710 = $tmp709->methods[0];
frost$core$Bit $tmp712 = $tmp710(((frost$core$Equatable*) $tmp703), ((frost$core$Equatable*) $tmp708));
bool $tmp713 = $tmp712.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp708)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp703)));
if ($tmp713) goto block143; else goto block144;
block143:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:132
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp714 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp715 = (frost$core$Int) {39u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position($tmp714, $tmp715, param1);
org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(param0, param1, $tmp714);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:133
org$frostlang$frostc$MethodDecl* $tmp716 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp717 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp718 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block144:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:135
org$frostlang$frostc$MethodDecl* $tmp719 = *(&local2);
org$frostlang$frostc$Type** $tmp720 = &$tmp719->returnType;
org$frostlang$frostc$Type* $tmp721 = *$tmp720;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Return.frost:136:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn723 $tmp722 = ($fn723) ((frost$core$Object*) $tmp721)->$class->vtable[0];
frost$core$String* $tmp724 = $tmp722(((frost$core$Object*) $tmp721));
frost$core$String* $tmp725 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s726, $tmp724);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
frost$core$String* $tmp727 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp725, &$s728);
frost$core$String* $tmp729 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s730, $tmp727);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp729);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
goto block142;
block142:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:138
// begin inline call to method org.frostlang.frostc.Compiler.leaveAllScopes() from Return.frost:138:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5434
frost$collections$Stack** $tmp731 = &param0->enclosingContexts;
frost$collections$Stack* $tmp732 = *$tmp731;
ITable* $tmp733 = ((frost$collections$Iterable*) $tmp732)->$class->itable;
while ($tmp733->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp733 = $tmp733->next;
}
$fn735 $tmp734 = $tmp733->methods[0];
frost$collections$Iterator* $tmp736 = $tmp734(((frost$collections$Iterable*) $tmp732));
goto block148;
block148:;
ITable* $tmp737 = $tmp736->$class->itable;
while ($tmp737->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp737 = $tmp737->next;
}
$fn739 $tmp738 = $tmp737->methods[0];
frost$core$Bit $tmp740 = $tmp738($tmp736);
bool $tmp741 = $tmp740.value;
if ($tmp741) goto block150; else goto block149;
block149:;
*(&local25) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp742 = $tmp736->$class->itable;
while ($tmp742->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp742 = $tmp742->next;
}
$fn744 $tmp743 = $tmp742->methods[1];
frost$core$Object* $tmp745 = $tmp743($tmp736);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp745)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp746 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
*(&local25) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp745);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5435
org$frostlang$frostc$Compiler$EnclosingContext* $tmp747 = *(&local25);
frost$core$Int* $tmp748 = &$tmp747->$rawValue;
frost$core$Int $tmp749 = *$tmp748;
frost$core$Int $tmp750 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5436:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp751 = $tmp749.value;
int64_t $tmp752 = $tmp750.value;
bool $tmp753 = $tmp751 == $tmp752;
frost$core$Bit $tmp754 = (frost$core$Bit) {$tmp753};
bool $tmp755 = $tmp754.value;
if ($tmp755) goto block152; else goto block151;
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5437
frost$core$Frost$unref$frost$core$Object$Q($tmp745);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp756 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local25) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
goto block147;
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5440
org$frostlang$frostc$Compiler$EnclosingContext* $tmp757 = *(&local25);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext(param0, $tmp757);
frost$core$Frost$unref$frost$core$Object$Q($tmp745);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp758 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
*(&local25) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block148;
block150:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
goto block147;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:139
org$frostlang$frostc$IR$Block$ID$nullable* $tmp759 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp760 = *$tmp759;
frost$core$Bit $tmp761 = (frost$core$Bit) {$tmp760.nonnull};
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block154; else goto block156;
block154:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:140
org$frostlang$frostc$IR* $tmp763 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp764 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp765 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID$nullable* $tmp766 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp767 = *$tmp766;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp764, $tmp765, param1, ((org$frostlang$frostc$IR$Block$ID) $tmp767.value));
$fn769 $tmp768 = ($fn769) $tmp763->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp770 = $tmp768($tmp763, $tmp764);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
goto block155;
block156:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:143
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from Return.frost:143:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5849
frost$collections$Stack** $tmp771 = &param0->enclosingContexts;
frost$collections$Stack* $tmp772 = *$tmp771;
ITable* $tmp773 = ((frost$collections$Iterable*) $tmp772)->$class->itable;
while ($tmp773->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp773 = $tmp773->next;
}
$fn775 $tmp774 = $tmp773->methods[0];
frost$collections$Iterator* $tmp776 = $tmp774(((frost$collections$Iterable*) $tmp772));
goto block158;
block158:;
ITable* $tmp777 = $tmp776->$class->itable;
while ($tmp777->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp777 = $tmp777->next;
}
$fn779 $tmp778 = $tmp777->methods[0];
frost$core$Bit $tmp780 = $tmp778($tmp776);
bool $tmp781 = $tmp780.value;
if ($tmp781) goto block160; else goto block159;
block159:;
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp782 = $tmp776->$class->itable;
while ($tmp782->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp782 = $tmp782->next;
}
$fn784 $tmp783 = $tmp782->methods[1];
frost$core$Object* $tmp785 = $tmp783($tmp776);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp785)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp786 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp785);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5850
org$frostlang$frostc$Compiler$EnclosingContext* $tmp787 = *(&local27);
frost$core$Int* $tmp788 = &$tmp787->$rawValue;
frost$core$Int $tmp789 = *$tmp788;
frost$core$Int $tmp790 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5851:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp791 = $tmp789.value;
int64_t $tmp792 = $tmp790.value;
bool $tmp793 = $tmp791 == $tmp792;
frost$core$Bit $tmp794 = (frost$core$Bit) {$tmp793};
bool $tmp795 = $tmp794.value;
if ($tmp795) goto block162; else goto block161;
block162:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5852
org$frostlang$frostc$Compiler$EnclosingContext* $tmp796 = *(&local27);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
frost$core$Frost$unref$frost$core$Object$Q($tmp785);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp797 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
*(&local26) = $tmp796;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
goto block157;
block161:;
frost$core$Frost$unref$frost$core$Object$Q($tmp785);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp798 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block158;
block160:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5856
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
*(&local26) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
goto block157;
block157:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp799 = *(&local26);
*(&local28) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp800 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
*(&local28) = $tmp799;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:144
org$frostlang$frostc$Compiler$EnclosingContext* $tmp801 = *(&local28);
frost$core$Bit $tmp802 = (frost$core$Bit) {$tmp801 != NULL};
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block164; else goto block166;
block164:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:145
org$frostlang$frostc$Compiler$EnclosingContext* $tmp804 = *(&local28);
frost$core$Int* $tmp805 = &$tmp804->$rawValue;
frost$core$Int $tmp806 = *$tmp805;
frost$core$Int $tmp807 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:146:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp808 = $tmp806.value;
int64_t $tmp809 = $tmp807.value;
bool $tmp810 = $tmp808 == $tmp809;
frost$core$Bit $tmp811 = (frost$core$Bit) {$tmp810};
bool $tmp812 = $tmp811.value;
if ($tmp812) goto block168; else goto block167;
block168:;
frost$collections$ListView** $tmp813 = (frost$collections$ListView**) ($tmp804->$data + 0);
frost$collections$ListView* $tmp814 = *$tmp813;
frost$core$Int* $tmp815 = (frost$core$Int*) ($tmp804->$data + 8);
frost$core$Int $tmp816 = *$tmp815;
org$frostlang$frostc$Compiler$InlineReturn** $tmp817 = (org$frostlang$frostc$Compiler$InlineReturn**) ($tmp804->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp818 = *$tmp817;
*(&local29) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
org$frostlang$frostc$Compiler$InlineReturn* $tmp819 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
*(&local29) = $tmp818;
org$frostlang$frostc$IR$Block$ID* $tmp820 = (org$frostlang$frostc$IR$Block$ID*) ($tmp804->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp821 = *$tmp820;
*(&local30) = $tmp821;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:148
org$frostlang$frostc$IR$Block$ID $tmp822 = *(&local30);
frost$core$Bit $tmp823 = (frost$core$Bit) {true};
bool $tmp824 = $tmp823.value;
if ($tmp824) goto block170; else goto block171;
block170:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:149
org$frostlang$frostc$IR* $tmp825 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp826 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp827 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp828 = *(&local30);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp826, $tmp827, param1, $tmp828);
$fn830 $tmp829 = ($fn830) $tmp825->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp831 = $tmp829($tmp825, $tmp826);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
goto block171;
block171:;
org$frostlang$frostc$Compiler$InlineReturn* $tmp832 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local29) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
goto block167;
block167:;
goto block165;
block166:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:155
org$frostlang$frostc$IR* $tmp833 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp834 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp835 = (frost$core$Int) {25u};
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q($tmp834, $tmp835, param1, ((org$frostlang$frostc$IR$Value*) NULL));
$fn837 $tmp836 = ($fn837) $tmp833->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp838 = $tmp836($tmp833, $tmp834);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
goto block165;
block165:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp839 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local28) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp840 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
*(&local26) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block155;
block155:;
goto block65;
block65:;
org$frostlang$frostc$MethodDecl* $tmp841 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp842 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp843 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
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

