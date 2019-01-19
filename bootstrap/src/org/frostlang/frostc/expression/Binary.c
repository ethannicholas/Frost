#include "org/frostlang/frostc/expression/Binary.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/expression/Binary/_Closure2.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/UInt64.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/Scanner.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/expression/And.h"
#include "org/frostlang/frostc/expression/Or.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Binary$class_type org$frostlang$frostc$expression$Binary$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Binary$cleanup} };

typedef frost$core$Bit (*$fn87)(org$frostlang$frostc$expression$Binary$_Closure2*, org$frostlang$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn91)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$core$Bit (*$fn221)(org$frostlang$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn225)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn266)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn270)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn275)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn294)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn389)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn393)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn398)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn411)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn415)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn420)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn503)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn519)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn535)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn546)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn559)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn570)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn580)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn589)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn600)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn614)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn628)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn642)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn656)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn674)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn687)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn700)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn713)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn726)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn730)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn745)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn841)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn872)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn887)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn906)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1017)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1035)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1047)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1082)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn1112)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1125)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn1132)(org$frostlang$frostc$Compiler$TypeContext*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79", 38, 8989498193344452911, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 151, -6743922220649796094, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x69\x6c\x65\x64\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x20\x63\x61\x73\x74\x20", 21, -924378024990471136, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x61\x74\x20", 4, 138031278, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 134, -8894870968915517948, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3482653484934746977, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3482653484934746977, NULL };
static frost$core$String $s734 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s736 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20", 20, -3867798768884550044, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27\x2c\x20\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 38, 4333428435750879609, NULL };
static frost$core$String $s790 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s791 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x66\x6f\x6c\x64\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x6c\x65\x66\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x6f\x70\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64\x2c\x20\x72\x69\x67\x68\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 261, -2917912697199849430, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s802 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s835 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s836 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s853 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s854 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s866 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s912 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s929 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s935 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s945 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s955 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s956 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 157, 133220657008473513, NULL };
static frost$core$String $s967 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s974 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s975 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1014 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1015 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1032 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1033 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1044 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1045 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1067 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1068 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1073 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1074 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1079 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1080 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1091 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1092 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27", 14, -1314037361094274531, NULL };
static frost$core$String $s1104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x6f\x6e\x20", 5, 14602569225, NULL };
static frost$core$String $s1109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static frost$core$String $s1122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6c\x65\x66\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x6f\x70\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64\x2c\x20\x72\x69\x67\x68\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 351, 1909353203051144099, NULL };

frost$core$Bit org$frostlang$frostc$expression$Binary$$anonymous3$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

// line 88
org$frostlang$frostc$Annotations** $tmp2 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp3 = *$tmp2;
frost$core$Bit $tmp4 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3);
return $tmp4;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$parser$Token$Kind param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$Symbol* local2 = NULL;
frost$collections$Array* local3 = NULL;
frost$core$Bit local4;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$Pair* local6 = NULL;
org$frostlang$frostc$Pair* local7 = NULL;
org$frostlang$frostc$Type* local8 = NULL;
org$frostlang$frostc$ClassDecl* local9 = NULL;
frost$collections$Array* local10 = NULL;
frost$collections$Array* local11 = NULL;
org$frostlang$frostc$Pair* local12 = NULL;
org$frostlang$frostc$Pair* local13 = NULL;
// line 20
frost$core$Bit $tmp5 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(param1);
frost$core$Bit $tmp6 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp5);
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block2;
block1:;
// line 21
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
return ((org$frostlang$frostc$Pair*) NULL);
block2:;
// line 23
org$frostlang$frostc$ClassDecl* $tmp8 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
org$frostlang$frostc$ClassDecl* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local0) = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// unreffing REF($10:org.frostlang.frostc.ClassDecl?)
// line 24
org$frostlang$frostc$ClassDecl* $tmp10 = *(&local0);
frost$core$Bit $tmp11 = frost$core$Bit$init$builtin_bit($tmp10 == NULL);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block3; else goto block4;
block3:;
// line 25
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp13 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block4:;
// line 27
org$frostlang$frostc$IR$Value* $tmp14 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp15 = (frost$core$Int64) {7};
frost$core$Int64 $tmp16 = (frost$core$Int64) {18446744073709551615};
org$frostlang$frostc$IR$Statement$ID $tmp17 = org$frostlang$frostc$IR$Statement$ID$init$frost$core$Int64($tmp16);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp14, $tmp15, $tmp17, param1);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
org$frostlang$frostc$IR$Value* $tmp18 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local1) = $tmp14;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// unreffing REF($37:org.frostlang.frostc.IR.Value)
// line 28
org$frostlang$frostc$ClassDecl* $tmp19 = *(&local0);
frost$core$Bit $tmp20 = frost$core$Bit$init$builtin_bit($tmp19 != NULL);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp22 = (frost$core$Int64) {28};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block5:;
org$frostlang$frostc$SymbolTable* $tmp25 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp19);
frost$core$String* $tmp26 = org$frostlang$frostc$Compiler$operatorName$org$frostlang$frostc$parser$Token$Kind$R$frost$core$String(param2);
org$frostlang$frostc$Symbol* $tmp27 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp25, $tmp26);
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
org$frostlang$frostc$Symbol* $tmp28 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
*(&local2) = $tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing REF($64:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($63:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// unreffing REF($62:org.frostlang.frostc.SymbolTable)
// line 29
org$frostlang$frostc$Symbol* $tmp29 = *(&local2);
frost$core$Bit $tmp30 = frost$core$Bit$init$builtin_bit($tmp29 != NULL);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block7; else goto block8;
block7:;
// line 30
frost$collections$Array* $tmp32 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp33 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp32, $tmp33);
frost$collections$Array$add$frost$collections$Array$T($tmp32, ((frost$core$Object*) param3));
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$collections$Array* $tmp34 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
*(&local3) = $tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// unreffing REF($88:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 32
org$frostlang$frostc$Symbol* $tmp35 = *(&local2);
frost$core$Bit $tmp36 = frost$core$Bit$init$builtin_bit($tmp35 != NULL);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp38 = (frost$core$Int64) {32};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s39, $tmp38, &$s40);
abort(); // unreachable
block9:;
org$frostlang$frostc$Symbol$Kind* $tmp41 = &$tmp35->kind;
org$frostlang$frostc$Symbol$Kind $tmp42 = *$tmp41;
frost$core$Int64 $tmp43 = $tmp42.$rawValue;
frost$core$Int64 $tmp44 = (frost$core$Int64) {5};
frost$core$Bit $tmp45 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp44);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block12; else goto block13;
block12:;
// line 34
org$frostlang$frostc$Symbol* $tmp47 = *(&local2);
org$frostlang$frostc$Annotations** $tmp48 = &((org$frostlang$frostc$MethodDecl*) $tmp47)->annotations;
org$frostlang$frostc$Annotations* $tmp49 = *$tmp48;
frost$core$Bit $tmp50 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp49);
frost$core$Bit $tmp51 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp50);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block16; else goto block17;
block16:;
*(&local4) = $tmp51;
goto block18;
block17:;
frost$core$Bit $tmp53 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(param1);
*(&local4) = $tmp53;
goto block18;
block18:;
frost$core$Bit $tmp54 = *(&local4);
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block14; else goto block15;
block14:;
// line 35
frost$collections$Array* $tmp56 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp56);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$collections$Array* $tmp57 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local5) = $tmp56;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
// unreffing REF($140:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
// line 36
frost$collections$Array* $tmp58 = *(&local5);
org$frostlang$frostc$Symbol* $tmp59 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp58, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp59)));
// line 37
org$frostlang$frostc$Position $tmp60 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp61 = *(&local1);
frost$collections$Array* $tmp62 = *(&local5);
frost$collections$Array* $tmp63 = *(&local3);
org$frostlang$frostc$Pair* $tmp64 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp60, $tmp61, ((frost$collections$ListView*) $tmp62), ((frost$collections$ListView*) $tmp63), param4);
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
org$frostlang$frostc$Pair* $tmp65 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local6) = $tmp64;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing REF($168:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
// line 39
org$frostlang$frostc$Pair* $tmp66 = *(&local6);
frost$core$Bit $tmp67 = frost$core$Bit$init$builtin_bit($tmp66 != NULL);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block19; else goto block20;
block19:;
// line 40
org$frostlang$frostc$Pair* $tmp69 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
org$frostlang$frostc$Pair* $tmp70 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// unreffing result
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp71 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing list
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp72 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing args
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp73 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing methods
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp74 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing target
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp75 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp69;
block20:;
org$frostlang$frostc$Pair* $tmp76 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing result
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp77 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// unreffing list
*(&local5) = ((frost$collections$Array*) NULL);
goto block15;
block15:;
goto block11;
block13:;
frost$core$Int64 $tmp78 = (frost$core$Int64) {6};
frost$core$Bit $tmp79 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp78);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block21; else goto block22;
block21:;
// line 45
org$frostlang$frostc$Position $tmp81 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp82 = *(&local1);
org$frostlang$frostc$Symbol* $tmp83 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp84 = &((org$frostlang$frostc$Methods*) $tmp83)->methods;
org$frostlang$frostc$FixedArray* $tmp85 = *$tmp84;
org$frostlang$frostc$expression$Binary$_Closure2* $tmp86 = (org$frostlang$frostc$expression$Binary$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$_Closure2$class);
org$frostlang$frostc$expression$Binary$_Closure2$init$org$frostlang$frostc$Type($tmp86, param1);
frost$core$MutableMethod* $tmp88 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp88, ((frost$core$Int8*) org$frostlang$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$R$frost$core$Bit), ((frost$core$Object*) $tmp86));
ITable* $tmp89 = ((frost$collections$ListView*) $tmp85)->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[4];
frost$collections$ListView* $tmp92 = $tmp90(((frost$collections$ListView*) $tmp85), ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp88)));
frost$collections$Array* $tmp93 = *(&local3);
org$frostlang$frostc$Pair* $tmp94 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp81, $tmp82, $tmp92, ((frost$collections$ListView*) $tmp93), param4);
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
org$frostlang$frostc$Pair* $tmp95 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local7) = $tmp94;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($259:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing REF($255:frost.collections.ListView<frost.collections.ListView.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// unreffing REF($248:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// unreffing REF($245:org.frostlang.frostc.expression.Binary._Closure2)
// line 48
org$frostlang$frostc$Pair* $tmp96 = *(&local7);
frost$core$Bit $tmp97 = frost$core$Bit$init$builtin_bit($tmp96 != NULL);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block23; else goto block24;
block23:;
// line 49
org$frostlang$frostc$Pair* $tmp99 = *(&local7);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
org$frostlang$frostc$Pair* $tmp100 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// unreffing result
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp101 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing args
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp102 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing methods
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp103 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// unreffing target
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp104 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp99;
block24:;
org$frostlang$frostc$Pair* $tmp105 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// unreffing result
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
goto block11;
block22:;
// line 53
frost$core$Bit $tmp106 = frost$core$Bit$init$builtin_bit(false);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp108 = (frost$core$Int64) {53};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s109, $tmp108);
abort(); // unreachable
block25:;
goto block11;
block11:;
frost$collections$Array* $tmp110 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing args
*(&local3) = ((frost$collections$Array*) NULL);
goto block8;
block8:;
// line 59
org$frostlang$frostc$Type* $tmp111 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param3);
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
org$frostlang$frostc$Type* $tmp112 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
*(&local8) = $tmp111;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
// unreffing REF($336:org.frostlang.frostc.Type?)
// line 60
org$frostlang$frostc$Type* $tmp113 = *(&local8);
frost$core$Bit $tmp114 = frost$core$Bit$init$builtin_bit($tmp113 == NULL);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block27; else goto block28;
block27:;
// line 61
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp116 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
// unreffing rightType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp117 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// unreffing methods
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp118 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
// unreffing target
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp119 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block28:;
// line 63
org$frostlang$frostc$Type* $tmp120 = *(&local8);
frost$core$Bit $tmp121 = frost$core$Bit$init$builtin_bit($tmp120 != NULL);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp123 = (frost$core$Int64) {63};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s124, $tmp123, &$s125);
abort(); // unreachable
block31:;
frost$core$Bit $tmp126 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp120);
frost$core$Bit $tmp127 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp126);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block29; else goto block30;
block29:;
// line 64
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp129 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
// unreffing rightType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp130 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// unreffing methods
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp131 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing target
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp132 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block30:;
// line 66
org$frostlang$frostc$Type* $tmp133 = *(&local8);
frost$core$Bit $tmp134 = frost$core$Bit$init$builtin_bit($tmp133 != NULL);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp136 = (frost$core$Int64) {66};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s137, $tmp136, &$s138);
abort(); // unreachable
block33:;
org$frostlang$frostc$ClassDecl* $tmp139 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp133);
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
org$frostlang$frostc$ClassDecl* $tmp140 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local9) = $tmp139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
// unreffing REF($425:org.frostlang.frostc.ClassDecl?)
// line 67
org$frostlang$frostc$ClassDecl* $tmp141 = *(&local9);
frost$core$Bit $tmp142 = frost$core$Bit$init$builtin_bit($tmp141 == NULL);
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block35; else goto block36;
block35:;
// line 68
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp144 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// unreffing rightCl
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp145 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing rightType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp146 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
// unreffing methods
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp147 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// unreffing target
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp148 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block36:;
// line 70
org$frostlang$frostc$ClassDecl* $tmp149 = *(&local9);
frost$core$Bit $tmp150 = frost$core$Bit$init$builtin_bit($tmp149 != NULL);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp152 = (frost$core$Int64) {70};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s153, $tmp152, &$s154);
abort(); // unreachable
block37:;
org$frostlang$frostc$SymbolTable* $tmp155 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp149);
frost$core$String* $tmp156 = org$frostlang$frostc$Compiler$operatorName$org$frostlang$frostc$parser$Token$Kind$R$frost$core$String(param2);
org$frostlang$frostc$Symbol* $tmp157 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp155, $tmp156);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
org$frostlang$frostc$Symbol* $tmp158 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local2) = $tmp157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// unreffing REF($483:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// unreffing REF($482:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// unreffing REF($481:org.frostlang.frostc.SymbolTable)
// line 71
org$frostlang$frostc$Symbol* $tmp159 = *(&local2);
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit($tmp159 == NULL);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block39; else goto block40;
block39:;
// line 72
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp162 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
// unreffing rightCl
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp163 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
// unreffing rightType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp164 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
// unreffing methods
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp165 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
// unreffing target
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp166 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block40:;
// line 74
frost$collections$Array* $tmp167 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp168 = (frost$core$Int64) {2};
frost$collections$Array$init$frost$core$Int64($tmp167, $tmp168);
org$frostlang$frostc$ASTNode* $tmp169 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp170 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp171 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp172 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp169, $tmp170, $tmp171, $tmp172);
frost$collections$Array$add$frost$collections$Array$T($tmp167, ((frost$core$Object*) $tmp169));
frost$collections$Array$add$frost$collections$Array$T($tmp167, ((frost$core$Object*) param3));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$collections$Array* $tmp173 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
*(&local10) = $tmp167;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
// unreffing REF($540:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
// unreffing REF($535:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 75
org$frostlang$frostc$Symbol* $tmp174 = *(&local2);
frost$core$Bit $tmp175 = frost$core$Bit$init$builtin_bit($tmp174 != NULL);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp177 = (frost$core$Int64) {75};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s178, $tmp177, &$s179);
abort(); // unreachable
block41:;
org$frostlang$frostc$Symbol$Kind* $tmp180 = &$tmp174->kind;
org$frostlang$frostc$Symbol$Kind $tmp181 = *$tmp180;
frost$core$Int64 $tmp182 = $tmp181.$rawValue;
frost$core$Int64 $tmp183 = (frost$core$Int64) {5};
frost$core$Bit $tmp184 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp182, $tmp183);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block44; else goto block45;
block44:;
// line 77
org$frostlang$frostc$Symbol* $tmp186 = *(&local2);
org$frostlang$frostc$Annotations** $tmp187 = &((org$frostlang$frostc$MethodDecl*) $tmp186)->annotations;
org$frostlang$frostc$Annotations* $tmp188 = *$tmp187;
frost$core$Bit $tmp189 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp188);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block46; else goto block47;
block46:;
// line 78
frost$collections$Array* $tmp191 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp191);
*(&local11) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
frost$collections$Array* $tmp192 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local11) = $tmp191;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
// unreffing REF($589:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
// line 79
frost$collections$Array* $tmp193 = *(&local11);
org$frostlang$frostc$Symbol* $tmp194 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp193, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp194)));
// line 80
org$frostlang$frostc$Position $tmp195 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp196 = *(&local11);
frost$collections$Array* $tmp197 = *(&local10);
org$frostlang$frostc$Pair* $tmp198 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp195, ((org$frostlang$frostc$IR$Value*) NULL), ((frost$collections$ListView*) $tmp196), ((frost$collections$ListView*) $tmp197), param4);
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
org$frostlang$frostc$Pair* $tmp199 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local12) = $tmp198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// unreffing REF($615:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
// line 81
org$frostlang$frostc$Pair* $tmp200 = *(&local12);
frost$core$Bit $tmp201 = frost$core$Bit$init$builtin_bit($tmp200 != NULL);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block48; else goto block49;
block48:;
// line 82
org$frostlang$frostc$Pair* $tmp203 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
org$frostlang$frostc$Pair* $tmp204 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// unreffing result
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp205 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// unreffing list
*(&local11) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp206 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing args
*(&local10) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp207 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// unreffing rightCl
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp208 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
// unreffing rightType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp209 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
// unreffing methods
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp210 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing target
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp211 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp203;
block49:;
org$frostlang$frostc$Pair* $tmp212 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
// unreffing result
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp213 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
// unreffing list
*(&local11) = ((frost$collections$Array*) NULL);
goto block47;
block47:;
goto block43;
block45:;
frost$core$Int64 $tmp214 = (frost$core$Int64) {6};
frost$core$Bit $tmp215 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp182, $tmp214);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block50; else goto block51;
block50:;
// line 87
org$frostlang$frostc$Position $tmp217 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Symbol* $tmp218 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp219 = &((org$frostlang$frostc$Methods*) $tmp218)->methods;
org$frostlang$frostc$FixedArray* $tmp220 = *$tmp219;
frost$core$Method* $tmp222 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp222, ((frost$core$Int8*) org$frostlang$frostc$expression$Binary$$anonymous3$org$frostlang$frostc$MethodDecl$R$frost$core$Bit), ((frost$core$Immutable*) NULL));
ITable* $tmp223 = ((frost$collections$ListView*) $tmp220)->$class->itable;
while ($tmp223->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp223 = $tmp223->next;
}
$fn225 $tmp224 = $tmp223->methods[4];
frost$collections$ListView* $tmp226 = $tmp224(((frost$collections$ListView*) $tmp220), ((frost$core$MutableMethod*) $tmp222));
frost$collections$Array* $tmp227 = *(&local10);
org$frostlang$frostc$Pair* $tmp228 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp217, ((org$frostlang$frostc$IR$Value*) NULL), $tmp226, ((frost$collections$ListView*) $tmp227), param4);
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
org$frostlang$frostc$Pair* $tmp229 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local13) = $tmp228;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// unreffing REF($711:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// unreffing REF($707:frost.collections.ListView<frost.collections.ListView.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($701:frost.core.Method)
// line 89
org$frostlang$frostc$Pair* $tmp230 = *(&local13);
frost$core$Bit $tmp231 = frost$core$Bit$init$builtin_bit($tmp230 != NULL);
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block52; else goto block53;
block52:;
// line 90
org$frostlang$frostc$Pair* $tmp233 = *(&local13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
org$frostlang$frostc$Pair* $tmp234 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing result
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp235 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing args
*(&local10) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp236 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// unreffing rightCl
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp237 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing rightType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp238 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// unreffing methods
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp239 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing target
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp240 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp233;
block53:;
org$frostlang$frostc$Pair* $tmp241 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
// unreffing result
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
goto block43;
block51:;
// line 94
frost$core$Bit $tmp242 = frost$core$Bit$init$builtin_bit(false);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp244 = (frost$core$Int64) {94};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s245, $tmp244);
abort(); // unreachable
block54:;
goto block43;
block43:;
// line 97
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$Array* $tmp246 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// unreffing args
*(&local10) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp247 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// unreffing rightCl
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp248 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// unreffing rightType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp249 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
// unreffing methods
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp250 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// unreffing target
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp251 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$parser$Token$Kind param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

frost$collections$CollectionView* local0 = NULL;
org$frostlang$frostc$Pair* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Pair* local3 = NULL;
org$frostlang$frostc$Pair* local4 = NULL;
frost$core$Int64 local5;
frost$core$Bit local6;
frost$collections$Array* local7 = NULL;
org$frostlang$frostc$MethodRef* local8 = NULL;
org$frostlang$frostc$MethodRef* local9 = NULL;
// line 103
frost$collections$CollectionView* $tmp252 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1);
*(&local0) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$collections$CollectionView* $tmp253 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
*(&local0) = $tmp252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing REF($1:frost.collections.CollectionView<org.frostlang.frostc.Type>?)
// line 104
frost$collections$CollectionView* $tmp254 = *(&local0);
frost$core$Bit $tmp255 = frost$core$Bit$init$builtin_bit($tmp254 != NULL);
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block1; else goto block2;
block1:;
// line 105
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Pair* $tmp257 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
// line 106
frost$collections$CollectionView* $tmp258 = *(&local0);
frost$core$Bit $tmp259 = frost$core$Bit$init$builtin_bit($tmp258 != NULL);
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp261 = (frost$core$Int64) {106};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s262, $tmp261, &$s263);
abort(); // unreachable
block3:;
ITable* $tmp264 = ((frost$collections$Iterable*) $tmp258)->$class->itable;
while ($tmp264->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp264 = $tmp264->next;
}
$fn266 $tmp265 = $tmp264->methods[0];
frost$collections$Iterator* $tmp267 = $tmp265(((frost$collections$Iterable*) $tmp258));
goto block5;
block5:;
ITable* $tmp268 = $tmp267->$class->itable;
while ($tmp268->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp268 = $tmp268->next;
}
$fn270 $tmp269 = $tmp268->methods[0];
frost$core$Bit $tmp271 = $tmp269($tmp267);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block7; else goto block6;
block6:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp273 = $tmp267->$class->itable;
while ($tmp273->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp273 = $tmp273->next;
}
$fn275 $tmp274 = $tmp273->methods[1];
frost$core$Object* $tmp276 = $tmp274($tmp267);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp276)));
org$frostlang$frostc$Type* $tmp277 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp276);
// line 107
org$frostlang$frostc$Type* $tmp278 = *(&local2);
org$frostlang$frostc$Pair* $tmp279 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, param1, $tmp278);
*(&local3) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
org$frostlang$frostc$Pair* $tmp280 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local3) = $tmp279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
// unreffing REF($59:org.frostlang.frostc.Pair<org.frostlang.frostc.Type, frost.core.Int64>?)
// line 108
org$frostlang$frostc$Pair* $tmp281 = *(&local3);
frost$core$Bit $tmp282 = frost$core$Bit$init$builtin_bit($tmp281 != NULL);
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp284 = (frost$core$Int64) {108};
frost$core$String* $tmp285 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s286, ((frost$core$Object*) param1));
frost$core$String* $tmp287 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp285, &$s288);
org$frostlang$frostc$Type* $tmp289 = *(&local2);
frost$core$String* $tmp290 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp287, ((frost$core$Object*) $tmp289));
frost$core$String* $tmp291 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp290, &$s292);
$fn294 $tmp293 = ($fn294) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp295 = $tmp293(param1);
org$frostlang$frostc$Position$wrapper* $tmp296;
$tmp296 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp296->value = $tmp295;
frost$core$String* $tmp297 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp291, ((frost$core$Object*) $tmp296));
frost$core$String* $tmp298 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp297, &$s299);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s300, $tmp284, $tmp298);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
// unreffing REF($88:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
// unreffing REF($87:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// unreffing REF($86:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
// unreffing REF($83:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
// unreffing REF($82:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
// unreffing REF($79:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// unreffing REF($78:frost.core.String)
abort(); // unreachable
block8:;
// line 110
org$frostlang$frostc$Type* $tmp301 = *(&local2);
org$frostlang$frostc$Pair* $tmp302 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp301, param2, param3, param4);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
org$frostlang$frostc$Pair* $tmp303 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local4) = $tmp302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// unreffing REF($114:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
// line 111
org$frostlang$frostc$Pair* $tmp304 = *(&local4);
frost$core$Bit $tmp305 = frost$core$Bit$init$builtin_bit($tmp304 != NULL);
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block10; else goto block11;
block10:;
// line 112
org$frostlang$frostc$Pair* $tmp307 = *(&local4);
frost$core$Bit $tmp308 = frost$core$Bit$init$builtin_bit($tmp307 != NULL);
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp310 = (frost$core$Int64) {112};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s311, $tmp310, &$s312);
abort(); // unreachable
block12:;
frost$core$Object** $tmp313 = &$tmp307->second;
frost$core$Object* $tmp314 = *$tmp313;
org$frostlang$frostc$Pair* $tmp315 = *(&local3);
frost$core$Bit $tmp316 = frost$core$Bit$init$builtin_bit($tmp315 != NULL);
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp318 = (frost$core$Int64) {112};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s319, $tmp318, &$s320);
abort(); // unreachable
block14:;
frost$core$Object** $tmp321 = &$tmp315->second;
frost$core$Object* $tmp322 = *$tmp321;
int64_t $tmp323 = ((frost$core$Int64$wrapper*) $tmp314)->value.value;
int64_t $tmp324 = ((frost$core$Int64$wrapper*) $tmp322)->value.value;
int64_t $tmp325 = $tmp323 + $tmp324;
frost$core$Int64 $tmp326 = (frost$core$Int64) {$tmp325};
*(&local5) = $tmp326;
// line 113
org$frostlang$frostc$Pair* $tmp327 = *(&local1);
frost$core$Bit $tmp328 = frost$core$Bit$init$builtin_bit($tmp327 == NULL);
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block18; else goto block19;
block18:;
*(&local6) = $tmp328;
goto block20;
block19:;
frost$core$Int64 $tmp330 = *(&local5);
org$frostlang$frostc$Pair* $tmp331 = *(&local1);
frost$core$Bit $tmp332 = frost$core$Bit$init$builtin_bit($tmp331 != NULL);
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp334 = (frost$core$Int64) {113};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s335, $tmp334, &$s336);
abort(); // unreachable
block21:;
frost$core$Object** $tmp337 = &$tmp331->second;
frost$core$Object* $tmp338 = *$tmp337;
int64_t $tmp339 = $tmp330.value;
int64_t $tmp340 = ((frost$core$Int64$wrapper*) $tmp338)->value.value;
bool $tmp341 = $tmp339 < $tmp340;
frost$core$Bit $tmp342 = (frost$core$Bit) {$tmp341};
*(&local6) = $tmp342;
goto block20;
block20:;
frost$core$Bit $tmp343 = *(&local6);
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block16; else goto block23;
block16:;
// line 114
org$frostlang$frostc$Pair* $tmp345 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$Pair* $tmp346 = *(&local4);
frost$core$Bit $tmp347 = frost$core$Bit$init$builtin_bit($tmp346 != NULL);
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp349 = (frost$core$Int64) {114};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s350, $tmp349, &$s351);
abort(); // unreachable
block24:;
frost$core$Object** $tmp352 = &$tmp346->first;
frost$core$Object* $tmp353 = *$tmp352;
frost$core$Int64 $tmp354 = *(&local5);
frost$core$Int64$wrapper* $tmp355;
$tmp355 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp355->value = $tmp354;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp345, ((frost$core$Object*) ((frost$collections$ListView*) $tmp353)), ((frost$core$Object*) $tmp355));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
org$frostlang$frostc$Pair* $tmp356 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local1) = $tmp345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
// unreffing REF($208:org.frostlang.frostc.Pair.B)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// unreffing REF($192:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>)
goto block17;
block23:;
// line 116
frost$core$Int64 $tmp357 = *(&local5);
org$frostlang$frostc$Pair* $tmp358 = *(&local1);
frost$core$Bit $tmp359 = frost$core$Bit$init$builtin_bit($tmp358 != NULL);
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp361 = (frost$core$Int64) {116};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s362, $tmp361, &$s363);
abort(); // unreachable
block28:;
frost$core$Object** $tmp364 = &$tmp358->second;
frost$core$Object* $tmp365 = *$tmp364;
frost$core$Bit $tmp366 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp357, ((frost$core$Int64$wrapper*) $tmp365)->value);
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block26; else goto block27;
block26:;
// line 117
frost$collections$Array* $tmp368 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp368);
*(&local7) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$collections$Array* $tmp369 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
*(&local7) = $tmp368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// unreffing REF($242:frost.collections.Array<org.frostlang.frostc.MethodRef>)
// line 118
frost$collections$Array* $tmp370 = *(&local7);
org$frostlang$frostc$Pair* $tmp371 = *(&local1);
frost$core$Bit $tmp372 = frost$core$Bit$init$builtin_bit($tmp371 != NULL);
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp374 = (frost$core$Int64) {118};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s375, $tmp374, &$s376);
abort(); // unreachable
block30:;
frost$core$Object** $tmp377 = &$tmp371->first;
frost$core$Object* $tmp378 = *$tmp377;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp370, ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp378)));
// line 119
org$frostlang$frostc$Pair* $tmp379 = *(&local4);
frost$core$Bit $tmp380 = frost$core$Bit$init$builtin_bit($tmp379 != NULL);
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp382 = (frost$core$Int64) {119};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s383, $tmp382, &$s384);
abort(); // unreachable
block32:;
frost$core$Object** $tmp385 = &$tmp379->first;
frost$core$Object* $tmp386 = *$tmp385;
ITable* $tmp387 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp386))->$class->itable;
while ($tmp387->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp387 = $tmp387->next;
}
$fn389 $tmp388 = $tmp387->methods[0];
frost$collections$Iterator* $tmp390 = $tmp388(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp386)));
goto block34;
block34:;
ITable* $tmp391 = $tmp390->$class->itable;
while ($tmp391->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp391 = $tmp391->next;
}
$fn393 $tmp392 = $tmp391->methods[0];
frost$core$Bit $tmp394 = $tmp392($tmp390);
bool $tmp395 = $tmp394.value;
if ($tmp395) goto block36; else goto block35;
block35:;
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
ITable* $tmp396 = $tmp390->$class->itable;
while ($tmp396->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp396 = $tmp396->next;
}
$fn398 $tmp397 = $tmp396->methods[1];
frost$core$Object* $tmp399 = $tmp397($tmp390);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodRef*) $tmp399)));
org$frostlang$frostc$MethodRef* $tmp400 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local8) = ((org$frostlang$frostc$MethodRef*) $tmp399);
// line 120
org$frostlang$frostc$Pair* $tmp401 = *(&local1);
frost$core$Bit $tmp402 = frost$core$Bit$init$builtin_bit($tmp401 != NULL);
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp404 = (frost$core$Int64) {120};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s405, $tmp404, &$s406);
abort(); // unreachable
block37:;
frost$core$Object** $tmp407 = &$tmp401->first;
frost$core$Object* $tmp408 = *$tmp407;
ITable* $tmp409 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp408))->$class->itable;
while ($tmp409->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp409 = $tmp409->next;
}
$fn411 $tmp410 = $tmp409->methods[0];
frost$collections$Iterator* $tmp412 = $tmp410(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp408)));
goto block39;
block39:;
ITable* $tmp413 = $tmp412->$class->itable;
while ($tmp413->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp413 = $tmp413->next;
}
$fn415 $tmp414 = $tmp413->methods[0];
frost$core$Bit $tmp416 = $tmp414($tmp412);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block41; else goto block40;
block40:;
*(&local9) = ((org$frostlang$frostc$MethodRef*) NULL);
ITable* $tmp418 = $tmp412->$class->itable;
while ($tmp418->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp418 = $tmp418->next;
}
$fn420 $tmp419 = $tmp418->methods[1];
frost$core$Object* $tmp421 = $tmp419($tmp412);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodRef*) $tmp421)));
org$frostlang$frostc$MethodRef* $tmp422 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
*(&local9) = ((org$frostlang$frostc$MethodRef*) $tmp421);
// line 121
org$frostlang$frostc$MethodRef* $tmp423 = *(&local9);
org$frostlang$frostc$MethodDecl** $tmp424 = &$tmp423->value;
org$frostlang$frostc$MethodDecl* $tmp425 = *$tmp424;
org$frostlang$frostc$MethodRef* $tmp426 = *(&local8);
org$frostlang$frostc$MethodDecl** $tmp427 = &$tmp426->value;
org$frostlang$frostc$MethodDecl* $tmp428 = *$tmp427;
bool $tmp429 = $tmp425 == $tmp428;
frost$core$Bit $tmp430 = frost$core$Bit$init$builtin_bit($tmp429);
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block42; else goto block43;
block42:;
// line 122
frost$core$Frost$unref$frost$core$Object$Q($tmp421);
// unreffing REF($335:frost.collections.Iterator.T)
org$frostlang$frostc$MethodRef* $tmp432 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
// unreffing old
*(&local9) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
// unreffing REF($324:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q($tmp399);
// unreffing REF($300:frost.collections.Iterator.T)
org$frostlang$frostc$MethodRef* $tmp433 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
// unreffing op
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block34;
block43:;
frost$core$Frost$unref$frost$core$Object$Q($tmp421);
// unreffing REF($335:frost.collections.Iterator.T)
org$frostlang$frostc$MethodRef* $tmp434 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
// unreffing old
*(&local9) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block39;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
// unreffing REF($324:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 125
frost$collections$Array* $tmp435 = *(&local7);
org$frostlang$frostc$MethodRef* $tmp436 = *(&local8);
frost$collections$Array$add$frost$collections$Array$T($tmp435, ((frost$core$Object*) $tmp436));
frost$core$Frost$unref$frost$core$Object$Q($tmp399);
// unreffing REF($300:frost.collections.Iterator.T)
org$frostlang$frostc$MethodRef* $tmp437 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
// unreffing op
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block34;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
// unreffing REF($289:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 127
org$frostlang$frostc$Pair* $tmp438 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Array* $tmp439 = *(&local7);
frost$core$Int64 $tmp440 = *(&local5);
frost$core$Int64$wrapper* $tmp441;
$tmp441 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp441->value = $tmp440;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp438, ((frost$core$Object*) ((frost$collections$ListView*) $tmp439)), ((frost$core$Object*) $tmp441));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
org$frostlang$frostc$Pair* $tmp442 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
*(&local1) = $tmp438;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
// unreffing REF($412:org.frostlang.frostc.Pair.B)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
// unreffing REF($406:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>)
frost$collections$Array* $tmp443 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
// unreffing a
*(&local7) = ((frost$collections$Array*) NULL);
goto block27;
block27:;
goto block17;
block17:;
goto block11;
block11:;
org$frostlang$frostc$Pair* $tmp444 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// unreffing ops
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Pair* $tmp445 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
// unreffing compilerCost
*(&local3) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp276);
// unreffing REF($49:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp446 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
// unreffing t
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// unreffing REF($38:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 131
org$frostlang$frostc$Pair* $tmp447 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
org$frostlang$frostc$Pair* $tmp448 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
// unreffing best
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$CollectionView* $tmp449 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
// unreffing leftTypes
*(&local0) = ((frost$collections$CollectionView*) NULL);
return $tmp447;
block2:;
// line 133
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$CollectionView* $tmp450 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
// unreffing leftTypes
*(&local0) = ((frost$collections$CollectionView*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$foldInts$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$parser$Token$Kind param2, org$frostlang$frostc$ASTNode* param3) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$UInt64 local2;
frost$core$UInt64 local3;
frost$core$UInt64 local4;
frost$core$UInt64 local5;
frost$core$UInt64 local6;
frost$core$UInt64 local7;
frost$core$UInt64 local8;
frost$core$UInt64 local9;
frost$core$UInt64 local10;
frost$core$UInt64 local11;
frost$core$UInt64 local12;
frost$core$UInt64 local13;
// line 138
// line 139
// line 141
frost$core$Int64* $tmp451 = &param1->$rawValue;
frost$core$Int64 $tmp452 = *$tmp451;
frost$core$Int64 $tmp453 = (frost$core$Int64) {25};
frost$core$Bit $tmp454 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp452, $tmp453);
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp456 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp457 = *$tmp456;
frost$core$UInt64* $tmp458 = (frost$core$UInt64*) (param1->$data + 16);
frost$core$UInt64 $tmp459 = *$tmp458;
*(&local2) = $tmp459;
// line 143
frost$core$UInt64 $tmp460 = *(&local2);
frost$core$Int64 $tmp461 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp462 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp461);
uint64_t $tmp463 = $tmp460.value;
uint64_t $tmp464 = $tmp462.value;
bool $tmp465 = $tmp463 > $tmp464;
frost$core$Bit $tmp466 = (frost$core$Bit) {$tmp465};
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block4; else goto block5;
block4:;
// line 144
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 146
frost$core$UInt64 $tmp468 = *(&local2);
frost$core$Int64 $tmp469 = frost$core$UInt64$get_asInt64$R$frost$core$Int64($tmp468);
*(&local0) = $tmp469;
goto block1;
block3:;
// line 149
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block1:;
// line 152
frost$core$Int64* $tmp470 = &param3->$rawValue;
frost$core$Int64 $tmp471 = *$tmp470;
frost$core$Int64 $tmp472 = (frost$core$Int64) {25};
frost$core$Bit $tmp473 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp471, $tmp472);
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp475 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp476 = *$tmp475;
frost$core$UInt64* $tmp477 = (frost$core$UInt64*) (param3->$data + 16);
frost$core$UInt64 $tmp478 = *$tmp477;
*(&local3) = $tmp478;
// line 154
frost$core$UInt64 $tmp479 = *(&local3);
frost$core$Int64 $tmp480 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp481 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp480);
uint64_t $tmp482 = $tmp479.value;
uint64_t $tmp483 = $tmp481.value;
bool $tmp484 = $tmp482 > $tmp483;
frost$core$Bit $tmp485 = (frost$core$Bit) {$tmp484};
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block9; else goto block10;
block9:;
// line 155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 157
frost$core$UInt64 $tmp487 = *(&local3);
frost$core$Int64 $tmp488 = frost$core$UInt64$get_asInt64$R$frost$core$Int64($tmp487);
*(&local1) = $tmp488;
goto block6;
block8:;
// line 160
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 163
frost$core$Int64 $tmp489 = param2.$rawValue;
frost$core$Int64 $tmp490 = (frost$core$Int64) {55};
frost$core$Bit $tmp491 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp489, $tmp490);
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block12; else goto block13;
block12:;
// line 165
frost$core$Int64 $tmp493 = *(&local0);
frost$core$Int64 $tmp494 = *(&local1);
int64_t $tmp495 = $tmp493.value;
int64_t $tmp496 = $tmp494.value;
int64_t $tmp497 = $tmp495 + $tmp496;
frost$core$Int64 $tmp498 = (frost$core$Int64) {$tmp497};
frost$core$UInt64 $tmp499 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp498);
*(&local4) = $tmp499;
// line 166
org$frostlang$frostc$ASTNode* $tmp500 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp501 = (frost$core$Int64) {25};
$fn503 $tmp502 = ($fn503) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp504 = $tmp502(param1);
frost$core$UInt64 $tmp505 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp500, $tmp501, $tmp504, $tmp505);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
// unreffing REF($88:org.frostlang.frostc.ASTNode)
return $tmp500;
block13:;
frost$core$Int64 $tmp506 = (frost$core$Int64) {56};
frost$core$Bit $tmp507 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp489, $tmp506);
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block14; else goto block15;
block14:;
// line 169
frost$core$Int64 $tmp509 = *(&local0);
frost$core$Int64 $tmp510 = *(&local1);
int64_t $tmp511 = $tmp509.value;
int64_t $tmp512 = $tmp510.value;
int64_t $tmp513 = $tmp511 - $tmp512;
frost$core$Int64 $tmp514 = (frost$core$Int64) {$tmp513};
frost$core$UInt64 $tmp515 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp514);
*(&local5) = $tmp515;
// line 170
org$frostlang$frostc$ASTNode* $tmp516 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp517 = (frost$core$Int64) {25};
$fn519 $tmp518 = ($fn519) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp520 = $tmp518(param1);
frost$core$UInt64 $tmp521 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp516, $tmp517, $tmp520, $tmp521);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
// unreffing REF($115:org.frostlang.frostc.ASTNode)
return $tmp516;
block15:;
frost$core$Int64 $tmp522 = (frost$core$Int64) {57};
frost$core$Bit $tmp523 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp489, $tmp522);
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block16; else goto block17;
block16:;
// line 173
frost$core$Int64 $tmp525 = *(&local0);
frost$core$Int64 $tmp526 = *(&local1);
int64_t $tmp527 = $tmp525.value;
int64_t $tmp528 = $tmp526.value;
int64_t $tmp529 = $tmp527 * $tmp528;
frost$core$Int64 $tmp530 = (frost$core$Int64) {$tmp529};
frost$core$UInt64 $tmp531 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp530);
*(&local6) = $tmp531;
// line 174
org$frostlang$frostc$ASTNode* $tmp532 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp533 = (frost$core$Int64) {25};
$fn535 $tmp534 = ($fn535) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp536 = $tmp534(param1);
frost$core$UInt64 $tmp537 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp532, $tmp533, $tmp536, $tmp537);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
// unreffing REF($142:org.frostlang.frostc.ASTNode)
return $tmp532;
block17:;
frost$core$Int64 $tmp538 = (frost$core$Int64) {59};
frost$core$Bit $tmp539 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp489, $tmp538);
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block18; else goto block19;
block18:;
// line 177
frost$core$Int64 $tmp541 = *(&local1);
frost$core$Int64 $tmp542 = (frost$core$Int64) {0};
frost$core$Bit $tmp543 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp541, $tmp542);
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block20; else goto block21;
block20:;
// line 178
$fn546 $tmp545 = ($fn546) param3->$class->vtable[2];
org$frostlang$frostc$Position $tmp547 = $tmp545(param3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp547, &$s548);
// line 179
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 181
frost$core$Int64 $tmp549 = *(&local0);
frost$core$Int64 $tmp550 = *(&local1);
int64_t $tmp551 = $tmp549.value;
int64_t $tmp552 = $tmp550.value;
int64_t $tmp553 = $tmp551 / $tmp552;
frost$core$Int64 $tmp554 = (frost$core$Int64) {$tmp553};
frost$core$UInt64 $tmp555 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp554);
*(&local7) = $tmp555;
// line 182
org$frostlang$frostc$ASTNode* $tmp556 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp557 = (frost$core$Int64) {25};
$fn559 $tmp558 = ($fn559) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp560 = $tmp558(param1);
frost$core$UInt64 $tmp561 = *(&local7);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp556, $tmp557, $tmp560, $tmp561);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
// unreffing REF($183:org.frostlang.frostc.ASTNode)
return $tmp556;
block19:;
frost$core$Int64 $tmp562 = (frost$core$Int64) {60};
frost$core$Bit $tmp563 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp489, $tmp562);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block22; else goto block23;
block22:;
// line 185
frost$core$Int64 $tmp565 = *(&local1);
frost$core$Int64 $tmp566 = (frost$core$Int64) {0};
frost$core$Bit $tmp567 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp565, $tmp566);
bool $tmp568 = $tmp567.value;
if ($tmp568) goto block24; else goto block25;
block24:;
// line 186
$fn570 $tmp569 = ($fn570) param3->$class->vtable[2];
org$frostlang$frostc$Position $tmp571 = $tmp569(param3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp571, &$s572);
// line 187
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 189
frost$core$Int64 $tmp573 = *(&local0);
frost$core$Int64 $tmp574 = *(&local1);
frost$core$Int64 $tmp575 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp573, $tmp574);
frost$core$UInt64 $tmp576 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp575);
*(&local8) = $tmp576;
// line 190
org$frostlang$frostc$ASTNode* $tmp577 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp578 = (frost$core$Int64) {25};
$fn580 $tmp579 = ($fn580) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp581 = $tmp579(param1);
frost$core$UInt64 $tmp582 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp577, $tmp578, $tmp581, $tmp582);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
// unreffing REF($221:org.frostlang.frostc.ASTNode)
return $tmp577;
block23:;
frost$core$Int64 $tmp583 = (frost$core$Int64) {62};
frost$core$Bit $tmp584 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp489, $tmp583);
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block26; else goto block27;
block26:;
// line 193
org$frostlang$frostc$ASTNode* $tmp586 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp587 = (frost$core$Int64) {6};
$fn589 $tmp588 = ($fn589) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp590 = $tmp588(param1);
frost$core$Int64 $tmp591 = *(&local0);
frost$core$Int64 $tmp592 = *(&local1);
frost$core$Bit $tmp593 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp591, $tmp592);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp586, $tmp587, $tmp590, $tmp593);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
// unreffing REF($239:org.frostlang.frostc.ASTNode)
return $tmp586;
block27:;
frost$core$Int64 $tmp594 = (frost$core$Int64) {63};
frost$core$Bit $tmp595 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp489, $tmp594);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block28; else goto block29;
block28:;
// line 196
org$frostlang$frostc$ASTNode* $tmp597 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp598 = (frost$core$Int64) {6};
$fn600 $tmp599 = ($fn600) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp601 = $tmp599(param1);
frost$core$Int64 $tmp602 = *(&local0);
frost$core$Int64 $tmp603 = *(&local1);
int64_t $tmp604 = $tmp602.value;
int64_t $tmp605 = $tmp603.value;
bool $tmp606 = $tmp604 != $tmp605;
frost$core$Bit $tmp607 = (frost$core$Bit) {$tmp606};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp597, $tmp598, $tmp601, $tmp607);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
// unreffing REF($259:org.frostlang.frostc.ASTNode)
return $tmp597;
block29:;
frost$core$Int64 $tmp608 = (frost$core$Int64) {66};
frost$core$Bit $tmp609 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp489, $tmp608);
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block30; else goto block31;
block30:;
// line 199
org$frostlang$frostc$ASTNode* $tmp611 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp612 = (frost$core$Int64) {6};
$fn614 $tmp613 = ($fn614) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp615 = $tmp613(param1);
frost$core$Int64 $tmp616 = *(&local0);
frost$core$Int64 $tmp617 = *(&local1);
int64_t $tmp618 = $tmp616.value;
int64_t $tmp619 = $tmp617.value;
bool $tmp620 = $tmp618 < $tmp619;
frost$core$Bit $tmp621 = (frost$core$Bit) {$tmp620};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp611, $tmp612, $tmp615, $tmp621);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
// unreffing REF($282:org.frostlang.frostc.ASTNode)
return $tmp611;
block31:;
frost$core$Int64 $tmp622 = (frost$core$Int64) {67};
frost$core$Bit $tmp623 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp489, $tmp622);
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block32; else goto block33;
block32:;
// line 202
org$frostlang$frostc$ASTNode* $tmp625 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp626 = (frost$core$Int64) {6};
$fn628 $tmp627 = ($fn628) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp629 = $tmp627(param1);
frost$core$Int64 $tmp630 = *(&local0);
frost$core$Int64 $tmp631 = *(&local1);
int64_t $tmp632 = $tmp630.value;
int64_t $tmp633 = $tmp631.value;
bool $tmp634 = $tmp632 > $tmp633;
frost$core$Bit $tmp635 = (frost$core$Bit) {$tmp634};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp625, $tmp626, $tmp629, $tmp635);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
// unreffing REF($305:org.frostlang.frostc.ASTNode)
return $tmp625;
block33:;
frost$core$Int64 $tmp636 = (frost$core$Int64) {68};
frost$core$Bit $tmp637 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp489, $tmp636);
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block34; else goto block35;
block34:;
// line 205
org$frostlang$frostc$ASTNode* $tmp639 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp640 = (frost$core$Int64) {6};
$fn642 $tmp641 = ($fn642) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp643 = $tmp641(param1);
frost$core$Int64 $tmp644 = *(&local0);
frost$core$Int64 $tmp645 = *(&local1);
int64_t $tmp646 = $tmp644.value;
int64_t $tmp647 = $tmp645.value;
bool $tmp648 = $tmp646 <= $tmp647;
frost$core$Bit $tmp649 = (frost$core$Bit) {$tmp648};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp639, $tmp640, $tmp643, $tmp649);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
// unreffing REF($328:org.frostlang.frostc.ASTNode)
return $tmp639;
block35:;
frost$core$Int64 $tmp650 = (frost$core$Int64) {69};
frost$core$Bit $tmp651 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp489, $tmp650);
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block36; else goto block37;
block36:;
// line 208
org$frostlang$frostc$ASTNode* $tmp653 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp654 = (frost$core$Int64) {6};
$fn656 $tmp655 = ($fn656) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp657 = $tmp655(param1);
frost$core$Int64 $tmp658 = *(&local0);
frost$core$Int64 $tmp659 = *(&local1);
int64_t $tmp660 = $tmp658.value;
int64_t $tmp661 = $tmp659.value;
bool $tmp662 = $tmp660 >= $tmp661;
frost$core$Bit $tmp663 = (frost$core$Bit) {$tmp662};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp653, $tmp654, $tmp657, $tmp663);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
// unreffing REF($351:org.frostlang.frostc.ASTNode)
return $tmp653;
block37:;
frost$core$Int64 $tmp664 = (frost$core$Int64) {71};
frost$core$Bit $tmp665 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp489, $tmp664);
bool $tmp666 = $tmp665.value;
if ($tmp666) goto block38; else goto block39;
block38:;
// line 211
frost$core$Int64 $tmp667 = *(&local0);
frost$core$Int64 $tmp668 = *(&local1);
frost$core$Int64 $tmp669 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp667, $tmp668);
frost$core$UInt64 $tmp670 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp669);
*(&local9) = $tmp670;
// line 212
org$frostlang$frostc$ASTNode* $tmp671 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp672 = (frost$core$Int64) {25};
$fn674 $tmp673 = ($fn674) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp675 = $tmp673(param1);
frost$core$UInt64 $tmp676 = *(&local9);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp671, $tmp672, $tmp675, $tmp676);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
// unreffing REF($380:org.frostlang.frostc.ASTNode)
return $tmp671;
block39:;
frost$core$Int64 $tmp677 = (frost$core$Int64) {73};
frost$core$Bit $tmp678 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp489, $tmp677);
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block40; else goto block41;
block40:;
// line 215
frost$core$Int64 $tmp680 = *(&local0);
frost$core$Int64 $tmp681 = *(&local1);
frost$core$Int64 $tmp682 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp680, $tmp681);
frost$core$UInt64 $tmp683 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp682);
*(&local10) = $tmp683;
// line 216
org$frostlang$frostc$ASTNode* $tmp684 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp685 = (frost$core$Int64) {25};
$fn687 $tmp686 = ($fn687) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp688 = $tmp686(param1);
frost$core$UInt64 $tmp689 = *(&local10);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp684, $tmp685, $tmp688, $tmp689);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
// unreffing REF($404:org.frostlang.frostc.ASTNode)
return $tmp684;
block41:;
frost$core$Int64 $tmp690 = (frost$core$Int64) {75};
frost$core$Bit $tmp691 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp489, $tmp690);
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block42; else goto block43;
block42:;
// line 219
frost$core$Int64 $tmp693 = *(&local0);
frost$core$Int64 $tmp694 = *(&local1);
frost$core$Int64 $tmp695 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp693, $tmp694);
frost$core$UInt64 $tmp696 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp695);
*(&local11) = $tmp696;
// line 220
org$frostlang$frostc$ASTNode* $tmp697 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp698 = (frost$core$Int64) {25};
$fn700 $tmp699 = ($fn700) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp701 = $tmp699(param1);
frost$core$UInt64 $tmp702 = *(&local11);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp697, $tmp698, $tmp701, $tmp702);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
// unreffing REF($428:org.frostlang.frostc.ASTNode)
return $tmp697;
block43:;
frost$core$Int64 $tmp703 = (frost$core$Int64) {76};
frost$core$Bit $tmp704 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp489, $tmp703);
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block44; else goto block45;
block44:;
// line 223
frost$core$Int64 $tmp706 = *(&local0);
frost$core$Int64 $tmp707 = *(&local1);
frost$core$Int64 $tmp708 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp706, $tmp707);
frost$core$UInt64 $tmp709 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp708);
*(&local12) = $tmp709;
// line 224
org$frostlang$frostc$ASTNode* $tmp710 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp711 = (frost$core$Int64) {25};
$fn713 $tmp712 = ($fn713) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp714 = $tmp712(param1);
frost$core$UInt64 $tmp715 = *(&local12);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp710, $tmp711, $tmp714, $tmp715);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
// unreffing REF($452:org.frostlang.frostc.ASTNode)
return $tmp710;
block45:;
frost$core$Int64 $tmp716 = (frost$core$Int64) {1};
frost$core$Bit $tmp717 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp489, $tmp716);
bool $tmp718 = $tmp717.value;
if ($tmp718) goto block46; else goto block11;
block46:;
// line 227
frost$core$Int64 $tmp719 = *(&local0);
frost$core$Int64 $tmp720 = *(&local1);
frost$core$Int64 $tmp721 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp719, $tmp720);
frost$core$UInt64 $tmp722 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp721);
*(&local13) = $tmp722;
// line 228
org$frostlang$frostc$ASTNode* $tmp723 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp724 = (frost$core$Int64) {25};
$fn726 $tmp725 = ($fn726) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp727 = $tmp725(param1);
frost$core$UInt64 $tmp728 = *(&local13);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp723, $tmp724, $tmp727, $tmp728);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// unreffing REF($476:org.frostlang.frostc.ASTNode)
return $tmp723;
block11:;
// line 231
$fn730 $tmp729 = ($fn730) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp731 = $tmp729(param1);
frost$core$String* $tmp732 = org$frostlang$frostc$Compiler$operatorName$org$frostlang$frostc$parser$Token$Kind$R$frost$core$String(param2);
frost$core$String* $tmp733 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s734, $tmp732);
frost$core$String* $tmp735 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp733, &$s736);
frost$core$String* $tmp737 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp735, &$s738);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp731, $tmp737);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
// unreffing REF($495:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
// unreffing REF($494:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
// unreffing REF($493:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
// unreffing REF($492:frost.core.String)
// line 233
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$foldStrings$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$parser$Token$Kind param2, org$frostlang$frostc$ASTNode* param3) {

org$frostlang$frostc$Position local0;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 240
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp739;
$tmp739 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp739->value = param2;
frost$core$Int64 $tmp740 = (frost$core$Int64) {55};
org$frostlang$frostc$parser$Token$Kind $tmp741 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp740);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp742;
$tmp742 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp742->value = $tmp741;
ITable* $tmp743 = ((frost$core$Equatable*) $tmp739)->$class->itable;
while ($tmp743->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp743 = $tmp743->next;
}
$fn745 $tmp744 = $tmp743->methods[1];
frost$core$Bit $tmp746 = $tmp744(((frost$core$Equatable*) $tmp739), ((frost$core$Equatable*) $tmp742));
bool $tmp747 = $tmp746.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp742)));
// unreffing REF($5:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp739)));
// unreffing REF($1:frost.core.Equatable<org.frostlang.frostc.parser.Token.Kind>)
if ($tmp747) goto block1; else goto block2;
block1:;
// line 241
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 243
frost$core$Int64* $tmp748 = &param1->$rawValue;
frost$core$Int64 $tmp749 = *$tmp748;
frost$core$Int64 $tmp750 = (frost$core$Int64) {41};
frost$core$Bit $tmp751 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp749, $tmp750);
bool $tmp752 = $tmp751.value;
if ($tmp752) goto block4; else goto block3;
block4:;
org$frostlang$frostc$Position* $tmp753 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp754 = *$tmp753;
*(&local0) = $tmp754;
frost$core$String** $tmp755 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp756 = *$tmp755;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$String* $tmp757 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
*(&local1) = $tmp756;
// line 245
frost$core$Int64* $tmp758 = &param3->$rawValue;
frost$core$Int64 $tmp759 = *$tmp758;
frost$core$Int64 $tmp760 = (frost$core$Int64) {41};
frost$core$Bit $tmp761 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp759, $tmp760);
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Position* $tmp763 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp764 = *$tmp763;
frost$core$String** $tmp765 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp766 = *$tmp765;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$String* $tmp767 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local2) = $tmp766;
// line 247
org$frostlang$frostc$ASTNode* $tmp768 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp769 = (frost$core$Int64) {41};
org$frostlang$frostc$Position $tmp770 = *(&local0);
frost$core$String* $tmp771 = *(&local1);
frost$core$String* $tmp772 = *(&local2);
frost$core$String* $tmp773 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp771, $tmp772);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp768, $tmp769, $tmp770, $tmp773);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
// unreffing REF($63:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
// unreffing REF($58:org.frostlang.frostc.ASTNode)
frost$core$String* $tmp774 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
// unreffing s2
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp775 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
// unreffing s1
*(&local1) = ((frost$core$String*) NULL);
return $tmp768;
block5:;
frost$core$String* $tmp776 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
// unreffing s1
*(&local1) = ((frost$core$String*) NULL);
goto block3;
block3:;
// line 252
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$parser$Token$Kind param2, org$frostlang$frostc$ASTNode* param3) {

// line 257
frost$core$Int64* $tmp777 = &param1->$rawValue;
frost$core$Int64 $tmp778 = *$tmp777;
frost$core$Int64 $tmp779 = (frost$core$Int64) {25};
frost$core$Bit $tmp780 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp778, $tmp779);
bool $tmp781 = $tmp780.value;
if ($tmp781) goto block2; else goto block3;
block2:;
// line 259
org$frostlang$frostc$ASTNode* $tmp782 = org$frostlang$frostc$expression$Binary$foldInts$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
// unreffing REF($8:org.frostlang.frostc.ASTNode?)
return $tmp782;
block3:;
frost$core$Int64 $tmp783 = (frost$core$Int64) {41};
frost$core$Bit $tmp784 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp778, $tmp783);
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block4; else goto block5;
block4:;
// line 262
org$frostlang$frostc$ASTNode* $tmp786 = org$frostlang$frostc$expression$Binary$foldStrings$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
// unreffing REF($20:org.frostlang.frostc.ASTNode?)
return $tmp786;
block5:;
// line 265
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block1:;
frost$core$Bit $tmp787 = frost$core$Bit$init$builtin_bit(false);
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp789 = (frost$core$Int64) {256};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s790, $tmp789, &$s791);
abort(); // unreachable
block6:;
abort(); // unreachable

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$parser$Token$Kind param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$Compiler$TypeContext* param5) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Pair* local2 = NULL;
org$frostlang$frostc$MethodDecl* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$IR$Value* local7 = NULL;
frost$core$Bit local8;
org$frostlang$frostc$Type* local9 = NULL;
org$frostlang$frostc$IR$Statement$ID local10;
// line 273
org$frostlang$frostc$ASTNode* $tmp792 = org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param2, param3, param4);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
org$frostlang$frostc$ASTNode* $tmp793 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
*(&local0) = $tmp792;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
// unreffing REF($1:org.frostlang.frostc.ASTNode?)
// line 274
org$frostlang$frostc$ASTNode* $tmp794 = *(&local0);
frost$core$Bit $tmp795 = frost$core$Bit$init$builtin_bit($tmp794 != NULL);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block1; else goto block2;
block1:;
// line 275
org$frostlang$frostc$ASTNode* $tmp797 = *(&local0);
frost$core$Bit $tmp798 = frost$core$Bit$init$builtin_bit($tmp797 != NULL);
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp800 = (frost$core$Int64) {275};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s801, $tmp800, &$s802);
abort(); // unreachable
block3:;
org$frostlang$frostc$IR$Value* $tmp803 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp797, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
// unreffing REF($28:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$ASTNode* $tmp804 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp803;
block2:;
// line 277
frost$core$Int64 $tmp805 = param3.$rawValue;
frost$core$Int64 $tmp806 = (frost$core$Int64) {93};
frost$core$Bit $tmp807 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp805, $tmp806);
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block6; else goto block7;
block6:;
// line 279
org$frostlang$frostc$Scanner** $tmp809 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp810 = *$tmp809;
org$frostlang$frostc$Type* $tmp811 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp810, param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
org$frostlang$frostc$Type* $tmp812 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
*(&local1) = $tmp811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
// unreffing REF($49:org.frostlang.frostc.Type)
// line 280
org$frostlang$frostc$Type* $tmp813 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp814 = org$frostlang$frostc$Compiler$compileCast$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp813);
org$frostlang$frostc$IR$Value* $tmp815 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp814, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
// unreffing REF($63:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
// unreffing REF($62:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$Type* $tmp816 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
// unreffing target
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp817 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp815;
block7:;
frost$core$Int64 $tmp818 = (frost$core$Int64) {64};
frost$core$Bit $tmp819 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp805, $tmp818);
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp821 = (frost$core$Int64) {65};
frost$core$Bit $tmp822 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp805, $tmp821);
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block8; else goto block10;
block8:;
// line 283
org$frostlang$frostc$IR$Value* $tmp824 = org$frostlang$frostc$Compiler$compileIdentityComparison$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
// unreffing REF($92:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$ASTNode* $tmp825 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp824;
block10:;
// line 286
org$frostlang$frostc$Pair* $tmp826 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param2, param3, param4, param5);
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
org$frostlang$frostc$Pair* $tmp827 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
*(&local2) = $tmp826;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
// unreffing REF($105:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
// line 287
org$frostlang$frostc$Pair* $tmp828 = *(&local2);
frost$core$Bit $tmp829 = frost$core$Bit$init$builtin_bit($tmp828 != NULL);
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block11; else goto block12;
block11:;
// line 288
org$frostlang$frostc$Pair* $tmp831 = *(&local2);
frost$core$Bit $tmp832 = frost$core$Bit$init$builtin_bit($tmp831 != NULL);
bool $tmp833 = $tmp832.value;
if ($tmp833) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp834 = (frost$core$Int64) {288};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s835, $tmp834, &$s836);
abort(); // unreachable
block15:;
frost$core$Object** $tmp837 = &$tmp831->first;
frost$core$Object* $tmp838 = *$tmp837;
ITable* $tmp839 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp838))->$class->itable;
while ($tmp839->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp839 = $tmp839->next;
}
$fn841 $tmp840 = $tmp839->methods[0];
frost$core$Int64 $tmp842 = $tmp840(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp838)));
frost$core$Int64 $tmp843 = (frost$core$Int64) {1};
int64_t $tmp844 = $tmp842.value;
int64_t $tmp845 = $tmp843.value;
bool $tmp846 = $tmp844 > $tmp845;
frost$core$Bit $tmp847 = (frost$core$Bit) {$tmp846};
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block13; else goto block14;
block13:;
// line 289
org$frostlang$frostc$Pair* $tmp849 = *(&local2);
frost$core$Bit $tmp850 = frost$core$Bit$init$builtin_bit($tmp849 != NULL);
bool $tmp851 = $tmp850.value;
if ($tmp851) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp852 = (frost$core$Int64) {289};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s853, $tmp852, &$s854);
abort(); // unreachable
block17:;
frost$core$Object** $tmp855 = &$tmp849->first;
frost$core$Object* $tmp856 = *$tmp855;
frost$collections$Array* $tmp857 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp858 = (frost$core$Int64) {2};
frost$collections$Array$init$frost$core$Int64($tmp857, $tmp858);
frost$collections$Array$add$frost$collections$Array$T($tmp857, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp857, ((frost$core$Object*) param4));
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp856), ((frost$collections$ListView*) $tmp857), param5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
// unreffing REF($158:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 290
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp859 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp860 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block14:;
// line 292
org$frostlang$frostc$Pair* $tmp861 = *(&local2);
frost$core$Bit $tmp862 = frost$core$Bit$init$builtin_bit($tmp861 != NULL);
bool $tmp863 = $tmp862.value;
if ($tmp863) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp864 = (frost$core$Int64) {292};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s865, $tmp864, &$s866);
abort(); // unreachable
block19:;
frost$core$Object** $tmp867 = &$tmp861->first;
frost$core$Object* $tmp868 = *$tmp867;
frost$core$Int64 $tmp869 = (frost$core$Int64) {0};
ITable* $tmp870 = ((frost$collections$ListView*) $tmp868)->$class->itable;
while ($tmp870->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp870 = $tmp870->next;
}
$fn872 $tmp871 = $tmp870->methods[0];
frost$core$Object* $tmp873 = $tmp871(((frost$collections$ListView*) $tmp868), $tmp869);
org$frostlang$frostc$MethodDecl** $tmp874 = &((org$frostlang$frostc$MethodRef*) $tmp873)->value;
org$frostlang$frostc$MethodDecl* $tmp875 = *$tmp874;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
org$frostlang$frostc$MethodDecl* $tmp876 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
*(&local3) = $tmp875;
frost$core$Frost$unref$frost$core$Object$Q($tmp873);
// unreffing REF($203:frost.collections.ListView.T)
// line 293
org$frostlang$frostc$MethodDecl* $tmp877 = *(&local3);
org$frostlang$frostc$Annotations** $tmp878 = &$tmp877->annotations;
org$frostlang$frostc$Annotations* $tmp879 = *$tmp878;
frost$core$Bit $tmp880 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp879);
bool $tmp881 = $tmp880.value;
if ($tmp881) goto block21; else goto block22;
block21:;
// line 294
org$frostlang$frostc$MethodDecl* $tmp882 = *(&local3);
frost$collections$Array** $tmp883 = &$tmp882->parameters;
frost$collections$Array* $tmp884 = *$tmp883;
ITable* $tmp885 = ((frost$collections$CollectionView*) $tmp884)->$class->itable;
while ($tmp885->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp885 = $tmp885->next;
}
$fn887 $tmp886 = $tmp885->methods[0];
frost$core$Int64 $tmp888 = $tmp886(((frost$collections$CollectionView*) $tmp884));
frost$core$Int64 $tmp889 = (frost$core$Int64) {2};
frost$core$Bit $tmp890 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp888, $tmp889);
bool $tmp891 = $tmp890.value;
if ($tmp891) goto block23; else goto block24;
block23:;
// line 295
org$frostlang$frostc$IR$Value* $tmp892 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp893 = (frost$core$Int64) {9};
org$frostlang$frostc$MethodDecl* $tmp894 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl($tmp892, $tmp893, ((org$frostlang$frostc$IR$Value*) NULL), $tmp894);
frost$collections$Array* $tmp895 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp896 = (frost$core$Int64) {2};
frost$collections$Array$init$frost$core$Int64($tmp895, $tmp896);
frost$collections$Array$add$frost$collections$Array$T($tmp895, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp895, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp897 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp892, ((frost$collections$ListView*) $tmp895), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
// unreffing REF($251:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
// unreffing REF($240:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
// unreffing REF($236:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$MethodDecl* $tmp898 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
// unreffing m
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp899 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp900 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp897;
block24:;
// line 298
org$frostlang$frostc$MethodDecl* $tmp901 = *(&local3);
frost$collections$Array** $tmp902 = &$tmp901->parameters;
frost$collections$Array* $tmp903 = *$tmp902;
ITable* $tmp904 = ((frost$collections$CollectionView*) $tmp903)->$class->itable;
while ($tmp904->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp904 = $tmp904->next;
}
$fn906 $tmp905 = $tmp904->methods[0];
frost$core$Int64 $tmp907 = $tmp905(((frost$collections$CollectionView*) $tmp903));
frost$core$Int64 $tmp908 = (frost$core$Int64) {1};
frost$core$Bit $tmp909 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp907, $tmp908);
bool $tmp910 = $tmp909.value;
if ($tmp910) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp911 = (frost$core$Int64) {298};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s912, $tmp911);
abort(); // unreachable
block25:;
// line 299
org$frostlang$frostc$IR$Value* $tmp913 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp914 = (frost$core$Int64) {9};
org$frostlang$frostc$MethodDecl* $tmp915 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl($tmp913, $tmp914, ((org$frostlang$frostc$IR$Value*) NULL), $tmp915);
frost$collections$Array* $tmp916 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp917 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp916, $tmp917);
frost$collections$Array$add$frost$collections$Array$T($tmp916, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp918 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp913, ((frost$collections$ListView*) $tmp916), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
// unreffing REF($306:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
// unreffing REF($298:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
// unreffing REF($294:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$MethodDecl* $tmp919 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
// unreffing m
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp920 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp921 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp918;
block22:;
// line 302
org$frostlang$frostc$MethodDecl* $tmp922 = *(&local3);
frost$core$Weak** $tmp923 = &$tmp922->owner;
frost$core$Weak* $tmp924 = *$tmp923;
frost$core$Object* $tmp925 = frost$core$Weak$get$R$frost$core$Weak$T($tmp924);
frost$core$String** $tmp926 = &((org$frostlang$frostc$ClassDecl*) $tmp925)->name;
frost$core$String* $tmp927 = *$tmp926;
frost$core$Bit $tmp928 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp927, &$s929);
bool $tmp930 = $tmp928.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp925);
// unreffing REF($339:frost.core.Weak.T)
if ($tmp930) goto block27; else goto block28;
block27:;
// line 303
org$frostlang$frostc$MethodDecl* $tmp931 = *(&local3);
frost$core$String** $tmp932 = &((org$frostlang$frostc$Symbol*) $tmp931)->name;
frost$core$String* $tmp933 = *$tmp932;
frost$core$Bit $tmp934 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp933, &$s935);
bool $tmp936 = $tmp934.value;
if ($tmp936) goto block29; else goto block30;
block29:;
// line 304
org$frostlang$frostc$IR$Value* $tmp937 = org$frostlang$frostc$expression$And$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
// unreffing REF($358:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$MethodDecl* $tmp938 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
// unreffing m
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp939 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp940 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp937;
block30:;
// line 306
org$frostlang$frostc$MethodDecl* $tmp941 = *(&local3);
frost$core$String** $tmp942 = &((org$frostlang$frostc$Symbol*) $tmp941)->name;
frost$core$String* $tmp943 = *$tmp942;
frost$core$Bit $tmp944 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp943, &$s945);
bool $tmp946 = $tmp944.value;
if ($tmp946) goto block31; else goto block32;
block31:;
// line 307
org$frostlang$frostc$IR$Value* $tmp947 = org$frostlang$frostc$expression$Or$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
// unreffing REF($389:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$MethodDecl* $tmp948 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
// unreffing m
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp949 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp950 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp947;
block32:;
goto block28;
block28:;
// line 310
frost$collections$CollectionView* $tmp951 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param2);
frost$core$Bit $tmp952 = frost$core$Bit$init$builtin_bit($tmp951 != NULL);
bool $tmp953 = $tmp952.value;
if ($tmp953) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp954 = (frost$core$Int64) {310};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s955, $tmp954, &$s956);
abort(); // unreachable
block33:;
org$frostlang$frostc$MethodDecl* $tmp957 = *(&local3);
frost$core$Weak** $tmp958 = &$tmp957->owner;
frost$core$Weak* $tmp959 = *$tmp958;
frost$core$Object* $tmp960 = frost$core$Weak$get$R$frost$core$Weak$T($tmp959);
org$frostlang$frostc$Type* $tmp961 = org$frostlang$frostc$Compiler$findType$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp951, ((org$frostlang$frostc$ClassDecl*) $tmp960));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
org$frostlang$frostc$Type* $tmp962 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
*(&local4) = $tmp961;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
// unreffing REF($428:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q($tmp960);
// unreffing REF($426:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
// unreffing REF($413:frost.collections.CollectionView<org.frostlang.frostc.Type>?)
// line 311
org$frostlang$frostc$Type* $tmp963 = *(&local4);
frost$core$Bit $tmp964 = frost$core$Bit$init$builtin_bit($tmp963 != NULL);
bool $tmp965 = $tmp964.value;
if ($tmp965) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp966 = (frost$core$Int64) {311};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s967, $tmp966);
abort(); // unreachable
block35:;
// line 312
org$frostlang$frostc$Compiler$TypeContext* $tmp968 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp969 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp970 = *(&local4);
frost$core$Bit $tmp971 = frost$core$Bit$init$builtin_bit($tmp970 != NULL);
bool $tmp972 = $tmp971.value;
if ($tmp972) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp973 = (frost$core$Int64) {312};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s974, $tmp973, &$s975);
abort(); // unreachable
block37:;
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp968, $tmp969, $tmp970);
org$frostlang$frostc$IR$Value* $tmp976 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp968);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
org$frostlang$frostc$IR$Value* $tmp977 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
*(&local5) = $tmp976;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
// unreffing REF($467:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
// unreffing REF($455:org.frostlang.frostc.Compiler.TypeContext)
// line 313
org$frostlang$frostc$IR$Value* $tmp978 = *(&local5);
frost$core$Bit $tmp979 = frost$core$Bit$init$builtin_bit($tmp978 == NULL);
bool $tmp980 = $tmp979.value;
if ($tmp980) goto block39; else goto block40;
block39:;
// line 314
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp981 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
// unreffing target
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp982 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
// unreffing found
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp983 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
// unreffing m
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp984 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp985 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block40:;
// line 316
org$frostlang$frostc$IR$Value* $tmp986 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp987 = (frost$core$Int64) {9};
org$frostlang$frostc$IR$Value* $tmp988 = *(&local5);
org$frostlang$frostc$MethodDecl* $tmp989 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl($tmp986, $tmp987, $tmp988, $tmp989);
frost$collections$Array* $tmp990 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp991 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp990, $tmp991);
frost$collections$Array$add$frost$collections$Array$T($tmp990, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp992 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp986, ((frost$collections$ListView*) $tmp990), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
// unreffing REF($530:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
// unreffing REF($522:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
// unreffing REF($517:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$IR$Value* $tmp993 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
// unreffing target
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp994 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
// unreffing found
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp995 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
// unreffing m
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp996 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp997 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp992;
block12:;
// line 319
org$frostlang$frostc$Compiler$TypeContext* $tmp998 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp999 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp998, $tmp999);
org$frostlang$frostc$IR$Value* $tmp1000 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp998);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
org$frostlang$frostc$IR$Value* $tmp1001 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
*(&local6) = $tmp1000;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
// unreffing REF($572:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
// unreffing REF($569:org.frostlang.frostc.Compiler.TypeContext)
// line 320
org$frostlang$frostc$IR$Value* $tmp1002 = *(&local6);
frost$core$Bit $tmp1003 = frost$core$Bit$init$builtin_bit($tmp1002 == NULL);
bool $tmp1004 = $tmp1003.value;
if ($tmp1004) goto block41; else goto block42;
block41:;
// line 321
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1005 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
// unreffing compiledLeft
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1006 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1007 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block42:;
// line 323
org$frostlang$frostc$Compiler$TypeContext* $tmp1008 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1009 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp1010 = *(&local6);
frost$core$Bit $tmp1011 = frost$core$Bit$init$builtin_bit($tmp1010 != NULL);
bool $tmp1012 = $tmp1011.value;
if ($tmp1012) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp1013 = (frost$core$Int64) {324};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1014, $tmp1013, &$s1015);
abort(); // unreachable
block43:;
$fn1017 $tmp1016 = ($fn1017) $tmp1010->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1018 = $tmp1016($tmp1010);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1008, $tmp1009, $tmp1018);
org$frostlang$frostc$IR$Value* $tmp1019 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1008);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
org$frostlang$frostc$IR$Value* $tmp1020 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
*(&local7) = $tmp1019;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
// unreffing REF($626:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
// unreffing REF($624:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
// unreffing REF($612:org.frostlang.frostc.Compiler.TypeContext)
// line 325
org$frostlang$frostc$IR$Value* $tmp1021 = *(&local7);
frost$core$Bit $tmp1022 = frost$core$Bit$init$builtin_bit($tmp1021 == NULL);
bool $tmp1023 = $tmp1022.value;
if ($tmp1023) goto block45; else goto block46;
block45:;
// line 326
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1024 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
// unreffing compiledRight
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1025 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
// unreffing compiledLeft
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1026 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1027 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block46:;
// line 328
org$frostlang$frostc$IR$Value* $tmp1028 = *(&local6);
frost$core$Bit $tmp1029 = frost$core$Bit$init$builtin_bit($tmp1028 != NULL);
bool $tmp1030 = $tmp1029.value;
if ($tmp1030) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp1031 = (frost$core$Int64) {328};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1032, $tmp1031, &$s1033);
abort(); // unreachable
block49:;
$fn1035 $tmp1034 = ($fn1035) $tmp1028->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1036 = $tmp1034($tmp1028);
org$frostlang$frostc$Type* $tmp1037 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1038 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1036, $tmp1037);
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block51; else goto block52;
block51:;
*(&local8) = $tmp1038;
goto block53;
block52:;
org$frostlang$frostc$IR$Value* $tmp1040 = *(&local6);
frost$core$Bit $tmp1041 = frost$core$Bit$init$builtin_bit($tmp1040 != NULL);
bool $tmp1042 = $tmp1041.value;
if ($tmp1042) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp1043 = (frost$core$Int64) {329};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1044, $tmp1043, &$s1045);
abort(); // unreachable
block54:;
$fn1047 $tmp1046 = ($fn1047) $tmp1040->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1048 = $tmp1046($tmp1040);
frost$core$Bit $tmp1049 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp1048);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
// unreffing REF($701:org.frostlang.frostc.Type)
*(&local8) = $tmp1049;
goto block53;
block53:;
frost$core$Bit $tmp1050 = *(&local8);
bool $tmp1051 = $tmp1050.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
// unreffing REF($685:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
// unreffing REF($684:org.frostlang.frostc.Type)
if ($tmp1051) goto block47; else goto block48;
block47:;
// line 330
org$frostlang$frostc$ASTNode* $tmp1052 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1053 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode($tmp1052, $tmp1053, param1, param2, param3, param4);
org$frostlang$frostc$Type* $tmp1054 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp1052);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
org$frostlang$frostc$Type* $tmp1055 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
*(&local9) = $tmp1054;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
// unreffing REF($721:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
// unreffing REF($718:org.frostlang.frostc.ASTNode)
// line 332
org$frostlang$frostc$Type* $tmp1056 = *(&local9);
frost$core$Bit $tmp1057 = frost$core$Bit$init$builtin_bit($tmp1056 != NULL);
bool $tmp1058 = $tmp1057.value;
if ($tmp1058) goto block56; else goto block57;
block56:;
// line 333
org$frostlang$frostc$IR** $tmp1059 = &param0->ir;
org$frostlang$frostc$IR* $tmp1060 = *$tmp1059;
org$frostlang$frostc$IR$Statement* $tmp1061 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1062 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp1063 = *(&local6);
frost$core$Bit $tmp1064 = frost$core$Bit$init$builtin_bit($tmp1063 != NULL);
bool $tmp1065 = $tmp1064.value;
if ($tmp1065) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp1066 = (frost$core$Int64) {333};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1067, $tmp1066, &$s1068);
abort(); // unreachable
block58:;
org$frostlang$frostc$IR$Value* $tmp1069 = *(&local7);
frost$core$Bit $tmp1070 = frost$core$Bit$init$builtin_bit($tmp1069 != NULL);
bool $tmp1071 = $tmp1070.value;
if ($tmp1071) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp1072 = (frost$core$Int64) {334};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1073, $tmp1072, &$s1074);
abort(); // unreachable
block60:;
org$frostlang$frostc$Type* $tmp1075 = *(&local9);
frost$core$Bit $tmp1076 = frost$core$Bit$init$builtin_bit($tmp1075 != NULL);
bool $tmp1077 = $tmp1076.value;
if ($tmp1077) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp1078 = (frost$core$Int64) {334};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1079, $tmp1078, &$s1080);
abort(); // unreachable
block62:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp1061, $tmp1062, param1, $tmp1063, param3, $tmp1069, $tmp1075);
$fn1082 $tmp1081 = ($fn1082) $tmp1060->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1083 = $tmp1081($tmp1060, $tmp1061);
*(&local10) = $tmp1083;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
// unreffing REF($744:org.frostlang.frostc.IR.Statement)
// line 335
org$frostlang$frostc$IR$Value* $tmp1084 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1085 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1086 = *(&local10);
org$frostlang$frostc$Type* $tmp1087 = *(&local9);
frost$core$Bit $tmp1088 = frost$core$Bit$init$builtin_bit($tmp1087 != NULL);
bool $tmp1089 = $tmp1088.value;
if ($tmp1089) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp1090 = (frost$core$Int64) {335};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1091, $tmp1090, &$s1092);
abort(); // unreachable
block64:;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1084, $tmp1085, $tmp1086, $tmp1087);
org$frostlang$frostc$IR$Value* $tmp1093 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1084, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
// unreffing REF($795:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
// unreffing REF($781:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$Type* $tmp1094 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
// unreffing resultType
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1095 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
// unreffing compiledRight
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1096 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
// unreffing compiledLeft
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1097 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1098 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1093;
block57:;
org$frostlang$frostc$Type* $tmp1099 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
// unreffing resultType
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block48;
block48:;
// line 338
frost$core$String* $tmp1100 = org$frostlang$frostc$Compiler$operatorName$org$frostlang$frostc$parser$Token$Kind$R$frost$core$String(param3);
frost$core$String* $tmp1101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1102, $tmp1100);
frost$core$String* $tmp1103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1101, &$s1104);
org$frostlang$frostc$IR$Value* $tmp1105 = *(&local6);
frost$core$Bit $tmp1106 = frost$core$Bit$init$builtin_bit($tmp1105 != NULL);
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block66; else goto block67;
block67:;
frost$core$Int64 $tmp1108 = (frost$core$Int64) {339};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1109, $tmp1108, &$s1110);
abort(); // unreachable
block66:;
$fn1112 $tmp1111 = ($fn1112) $tmp1105->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1113 = $tmp1111($tmp1105);
frost$core$String* $tmp1114 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1115, ((frost$core$Object*) $tmp1113));
frost$core$String* $tmp1116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1114, &$s1117);
org$frostlang$frostc$IR$Value* $tmp1118 = *(&local7);
frost$core$Bit $tmp1119 = frost$core$Bit$init$builtin_bit($tmp1118 != NULL);
bool $tmp1120 = $tmp1119.value;
if ($tmp1120) goto block68; else goto block69;
block69:;
frost$core$Int64 $tmp1121 = (frost$core$Int64) {339};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1122, $tmp1121, &$s1123);
abort(); // unreachable
block68:;
$fn1125 $tmp1124 = ($fn1125) $tmp1118->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1126 = $tmp1124($tmp1118);
frost$core$String* $tmp1127 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1116, ((frost$core$Object*) $tmp1126));
frost$core$String* $tmp1128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1127, &$s1129);
frost$core$String* $tmp1130 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1103, $tmp1128);
$fn1132 $tmp1131 = ($fn1132) param5->$class->vtable[2];
frost$core$String* $tmp1133 = $tmp1131(param5);
frost$core$String* $tmp1134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1130, $tmp1133);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
// unreffing REF($871:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
// unreffing REF($870:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
// unreffing REF($868:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
// unreffing REF($867:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
// unreffing REF($866:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
// unreffing REF($864:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
// unreffing REF($853:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
// unreffing REF($852:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
// unreffing REF($850:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
// unreffing REF($839:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
// unreffing REF($838:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
// unreffing REF($837:frost.core.String)
// line 341
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1135 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
// unreffing compiledRight
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1136 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
// unreffing compiledLeft
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1137 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1138 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block5:;
frost$core$Bit $tmp1139 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1140 = $tmp1139.value;
if ($tmp1140) goto block70; else goto block71;
block71:;
frost$core$Int64 $tmp1141 = (frost$core$Int64) {271};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1142, $tmp1141, &$s1143);
abort(); // unreachable
block70:;
abort(); // unreachable

}
void org$frostlang$frostc$expression$Binary$init(org$frostlang$frostc$expression$Binary* param0) {

return;

}
void org$frostlang$frostc$expression$Binary$cleanup(org$frostlang$frostc$expression$Binary* param0) {

// line 16
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

