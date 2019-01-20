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
#include "org/frostlang/frostc/expression/Binary/Operator.h"
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

typedef frost$core$String* (*$fn28)(frost$core$Object*);
typedef frost$core$Bit (*$fn90)(org$frostlang$frostc$expression$Binary$_Closure2*, org$frostlang$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn94)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn161)(frost$core$Object*);
typedef frost$core$Bit (*$fn227)(org$frostlang$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn231)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn272)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn276)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn281)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn300)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn395)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn399)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn404)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn417)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn421)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn426)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn509)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn525)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn541)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn552)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn565)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn576)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn586)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn595)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn606)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn620)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn634)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn648)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn662)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn680)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn693)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn706)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn719)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn732)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn736)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn740)(frost$core$Object*);
typedef frost$core$Bit (*$fn754)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn850)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn881)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn896)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn915)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1026)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1044)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1056)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1091)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$String* (*$fn1111)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1124)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1137)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn1144)(org$frostlang$frostc$Compiler$TypeContext*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79", 38, 8989498193344452911, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 151, -6743922220649796094, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x69\x6c\x65\x64\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x20\x63\x61\x73\x74\x20", 21, -924378024990471136, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x61\x74\x20", 4, 138031278, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 134, -8894870968915517948, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s554 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3482653484934746977, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3482653484934746977, NULL };
static frost$core$String $s743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s745 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27\x2c\x20", 40, -655368231937263126, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 18, -6918652954435975437, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s800 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x66\x6f\x6c\x64\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x6c\x65\x66\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x6f\x70\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x4f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x72\x69\x67\x68\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 270, -7377235757671843297, NULL };
static frost$core$String $s810 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s811 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s844 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s845 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s862 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s874 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s875 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s921 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s938 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s944 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s954 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s964 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s965 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 157, 133220657008473513, NULL };
static frost$core$String $s976 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s983 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s984 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1023 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1024 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1041 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1042 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1053 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1054 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1076 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1077 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1082 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1083 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1088 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1089 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27", 14, -1314037361094274531, NULL };
static frost$core$String $s1116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x6f\x6e\x20", 5, 14602569225, NULL };
static frost$core$String $s1121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static frost$core$String $s1134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1135 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6c\x65\x66\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x6f\x70\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x4f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x72\x69\x67\x68\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 360, -7109605302494915052, NULL };

frost$core$Bit org$frostlang$frostc$expression$Binary$$anonymous3$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

// line 255
org$frostlang$frostc$Annotations** $tmp2 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp3 = *$tmp2;
frost$core$Bit $tmp4 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3);
return $tmp4;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

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
// line 187
frost$core$Bit $tmp5 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(param1);
frost$core$Bit $tmp6 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp5);
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block2;
block1:;
// line 188
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
return ((org$frostlang$frostc$Pair*) NULL);
block2:;
// line 190
org$frostlang$frostc$ClassDecl* $tmp8 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
org$frostlang$frostc$ClassDecl* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local0) = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// unreffing REF($10:org.frostlang.frostc.ClassDecl?)
// line 191
org$frostlang$frostc$ClassDecl* $tmp10 = *(&local0);
frost$core$Bit $tmp11 = frost$core$Bit$init$builtin_bit($tmp10 == NULL);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block3; else goto block4;
block3:;
// line 192
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp13 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block4:;
// line 194
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
// line 195
org$frostlang$frostc$ClassDecl* $tmp19 = *(&local0);
frost$core$Bit $tmp20 = frost$core$Bit$init$builtin_bit($tmp19 != NULL);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp22 = (frost$core$Int64) {195};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block5:;
org$frostlang$frostc$SymbolTable* $tmp25 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp19);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp26;
$tmp26 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp26->value = param2;
$fn28 $tmp27 = ($fn28) ((frost$core$Object*) $tmp26)->$class->vtable[0];
frost$core$String* $tmp29 = $tmp27(((frost$core$Object*) $tmp26));
org$frostlang$frostc$Symbol* $tmp30 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp25, $tmp29);
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
org$frostlang$frostc$Symbol* $tmp31 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
*(&local2) = $tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// unreffing REF($66:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing REF($65:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($63:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// unreffing REF($62:org.frostlang.frostc.SymbolTable)
// line 196
org$frostlang$frostc$Symbol* $tmp32 = *(&local2);
frost$core$Bit $tmp33 = frost$core$Bit$init$builtin_bit($tmp32 != NULL);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block7; else goto block8;
block7:;
// line 197
frost$collections$Array* $tmp35 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp36 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp35, $tmp36);
frost$collections$Array$add$frost$collections$Array$T($tmp35, ((frost$core$Object*) param3));
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$collections$Array* $tmp37 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
*(&local3) = $tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing REF($93:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 199
org$frostlang$frostc$Symbol* $tmp38 = *(&local2);
frost$core$Bit $tmp39 = frost$core$Bit$init$builtin_bit($tmp38 != NULL);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp41 = (frost$core$Int64) {199};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s42, $tmp41, &$s43);
abort(); // unreachable
block9:;
org$frostlang$frostc$Symbol$Kind* $tmp44 = &$tmp38->kind;
org$frostlang$frostc$Symbol$Kind $tmp45 = *$tmp44;
frost$core$Int64 $tmp46 = $tmp45.$rawValue;
frost$core$Int64 $tmp47 = (frost$core$Int64) {5};
frost$core$Bit $tmp48 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp46, $tmp47);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block12; else goto block13;
block12:;
// line 201
org$frostlang$frostc$Symbol* $tmp50 = *(&local2);
org$frostlang$frostc$Annotations** $tmp51 = &((org$frostlang$frostc$MethodDecl*) $tmp50)->annotations;
org$frostlang$frostc$Annotations* $tmp52 = *$tmp51;
frost$core$Bit $tmp53 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp52);
frost$core$Bit $tmp54 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp53);
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block16; else goto block17;
block16:;
*(&local4) = $tmp54;
goto block18;
block17:;
frost$core$Bit $tmp56 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(param1);
*(&local4) = $tmp56;
goto block18;
block18:;
frost$core$Bit $tmp57 = *(&local4);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block14; else goto block15;
block14:;
// line 202
frost$collections$Array* $tmp59 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp59);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$collections$Array* $tmp60 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local5) = $tmp59;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing REF($145:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
// line 203
frost$collections$Array* $tmp61 = *(&local5);
org$frostlang$frostc$Symbol* $tmp62 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp61, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp62)));
// line 204
org$frostlang$frostc$Position $tmp63 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp64 = *(&local1);
frost$collections$Array* $tmp65 = *(&local5);
frost$collections$Array* $tmp66 = *(&local3);
org$frostlang$frostc$Pair* $tmp67 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp63, $tmp64, ((frost$collections$ListView*) $tmp65), ((frost$collections$ListView*) $tmp66), param4);
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
org$frostlang$frostc$Pair* $tmp68 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local6) = $tmp67;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing REF($173:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
// line 206
org$frostlang$frostc$Pair* $tmp69 = *(&local6);
frost$core$Bit $tmp70 = frost$core$Bit$init$builtin_bit($tmp69 != NULL);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block19; else goto block20;
block19:;
// line 207
org$frostlang$frostc$Pair* $tmp72 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
org$frostlang$frostc$Pair* $tmp73 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing result
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp74 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing list
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp75 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing args
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp76 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing methods
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp77 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// unreffing target
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp78 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp72;
block20:;
org$frostlang$frostc$Pair* $tmp79 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// unreffing result
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp80 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
// unreffing list
*(&local5) = ((frost$collections$Array*) NULL);
goto block15;
block15:;
goto block11;
block13:;
frost$core$Int64 $tmp81 = (frost$core$Int64) {6};
frost$core$Bit $tmp82 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp46, $tmp81);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block21; else goto block22;
block21:;
// line 212
org$frostlang$frostc$Position $tmp84 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp85 = *(&local1);
org$frostlang$frostc$Symbol* $tmp86 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp87 = &((org$frostlang$frostc$Methods*) $tmp86)->methods;
org$frostlang$frostc$FixedArray* $tmp88 = *$tmp87;
org$frostlang$frostc$expression$Binary$_Closure2* $tmp89 = (org$frostlang$frostc$expression$Binary$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$_Closure2$class);
org$frostlang$frostc$expression$Binary$_Closure2$init$org$frostlang$frostc$Type($tmp89, param1);
frost$core$MutableMethod* $tmp91 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp91, ((frost$core$Int8*) org$frostlang$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$R$frost$core$Bit), ((frost$core$Object*) $tmp89));
ITable* $tmp92 = ((frost$collections$ListView*) $tmp88)->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[4];
frost$collections$ListView* $tmp95 = $tmp93(((frost$collections$ListView*) $tmp88), ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp91)));
frost$collections$Array* $tmp96 = *(&local3);
org$frostlang$frostc$Pair* $tmp97 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp84, $tmp85, $tmp95, ((frost$collections$ListView*) $tmp96), param4);
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
org$frostlang$frostc$Pair* $tmp98 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local7) = $tmp97;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// unreffing REF($264:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// unreffing REF($260:frost.collections.ListView<frost.collections.ListView.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing REF($253:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// unreffing REF($250:org.frostlang.frostc.expression.Binary._Closure2)
// line 215
org$frostlang$frostc$Pair* $tmp99 = *(&local7);
frost$core$Bit $tmp100 = frost$core$Bit$init$builtin_bit($tmp99 != NULL);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block23; else goto block24;
block23:;
// line 216
org$frostlang$frostc$Pair* $tmp102 = *(&local7);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
org$frostlang$frostc$Pair* $tmp103 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// unreffing result
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp104 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// unreffing args
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp105 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// unreffing methods
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp106 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// unreffing target
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp107 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp102;
block24:;
org$frostlang$frostc$Pair* $tmp108 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing result
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
goto block11;
block22:;
// line 220
frost$core$Bit $tmp109 = frost$core$Bit$init$builtin_bit(false);
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp111 = (frost$core$Int64) {220};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s112, $tmp111);
abort(); // unreachable
block25:;
goto block11;
block11:;
frost$collections$Array* $tmp113 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// unreffing args
*(&local3) = ((frost$collections$Array*) NULL);
goto block8;
block8:;
// line 226
org$frostlang$frostc$Type* $tmp114 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param3);
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
org$frostlang$frostc$Type* $tmp115 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local8) = $tmp114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
// unreffing REF($341:org.frostlang.frostc.Type?)
// line 227
org$frostlang$frostc$Type* $tmp116 = *(&local8);
frost$core$Bit $tmp117 = frost$core$Bit$init$builtin_bit($tmp116 == NULL);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block27; else goto block28;
block27:;
// line 228
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp119 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// unreffing rightType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp120 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing methods
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp121 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing target
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp122 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block28:;
// line 230
org$frostlang$frostc$Type* $tmp123 = *(&local8);
frost$core$Bit $tmp124 = frost$core$Bit$init$builtin_bit($tmp123 != NULL);
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp126 = (frost$core$Int64) {230};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s127, $tmp126, &$s128);
abort(); // unreachable
block31:;
frost$core$Bit $tmp129 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp123);
frost$core$Bit $tmp130 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp129);
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block29; else goto block30;
block29:;
// line 231
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp132 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// unreffing rightType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp133 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// unreffing methods
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp134 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// unreffing target
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp135 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block30:;
// line 233
org$frostlang$frostc$Type* $tmp136 = *(&local8);
frost$core$Bit $tmp137 = frost$core$Bit$init$builtin_bit($tmp136 != NULL);
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp139 = (frost$core$Int64) {233};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s140, $tmp139, &$s141);
abort(); // unreachable
block33:;
org$frostlang$frostc$ClassDecl* $tmp142 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp136);
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
org$frostlang$frostc$ClassDecl* $tmp143 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local9) = $tmp142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// unreffing REF($430:org.frostlang.frostc.ClassDecl?)
// line 234
org$frostlang$frostc$ClassDecl* $tmp144 = *(&local9);
frost$core$Bit $tmp145 = frost$core$Bit$init$builtin_bit($tmp144 == NULL);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block35; else goto block36;
block35:;
// line 235
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp147 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// unreffing rightCl
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp148 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// unreffing rightType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp149 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// unreffing methods
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp150 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
// unreffing target
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp151 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block36:;
// line 237
org$frostlang$frostc$ClassDecl* $tmp152 = *(&local9);
frost$core$Bit $tmp153 = frost$core$Bit$init$builtin_bit($tmp152 != NULL);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp155 = (frost$core$Int64) {237};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s156, $tmp155, &$s157);
abort(); // unreachable
block37:;
org$frostlang$frostc$SymbolTable* $tmp158 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp152);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp159;
$tmp159 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp159->value = param2;
$fn161 $tmp160 = ($fn161) ((frost$core$Object*) $tmp159)->$class->vtable[0];
frost$core$String* $tmp162 = $tmp160(((frost$core$Object*) $tmp159));
org$frostlang$frostc$Symbol* $tmp163 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp158, $tmp162);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
org$frostlang$frostc$Symbol* $tmp164 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
*(&local2) = $tmp163;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
// unreffing REF($490:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
// unreffing REF($489:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
// unreffing REF($487:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
// unreffing REF($486:org.frostlang.frostc.SymbolTable)
// line 238
org$frostlang$frostc$Symbol* $tmp165 = *(&local2);
frost$core$Bit $tmp166 = frost$core$Bit$init$builtin_bit($tmp165 == NULL);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block39; else goto block40;
block39:;
// line 239
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp168 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
// unreffing rightCl
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp169 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
// unreffing rightType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp170 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
// unreffing methods
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp171 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
// unreffing target
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp172 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block40:;
// line 241
frost$collections$Array* $tmp173 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp174 = (frost$core$Int64) {2};
frost$collections$Array$init$frost$core$Int64($tmp173, $tmp174);
org$frostlang$frostc$ASTNode* $tmp175 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp176 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp177 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp178 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp175, $tmp176, $tmp177, $tmp178);
frost$collections$Array$add$frost$collections$Array$T($tmp173, ((frost$core$Object*) $tmp175));
frost$collections$Array$add$frost$collections$Array$T($tmp173, ((frost$core$Object*) param3));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$collections$Array* $tmp179 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local10) = $tmp173;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// unreffing REF($550:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
// unreffing REF($545:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 242
org$frostlang$frostc$Symbol* $tmp180 = *(&local2);
frost$core$Bit $tmp181 = frost$core$Bit$init$builtin_bit($tmp180 != NULL);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp183 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s184, $tmp183, &$s185);
abort(); // unreachable
block41:;
org$frostlang$frostc$Symbol$Kind* $tmp186 = &$tmp180->kind;
org$frostlang$frostc$Symbol$Kind $tmp187 = *$tmp186;
frost$core$Int64 $tmp188 = $tmp187.$rawValue;
frost$core$Int64 $tmp189 = (frost$core$Int64) {5};
frost$core$Bit $tmp190 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp189);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block44; else goto block45;
block44:;
// line 244
org$frostlang$frostc$Symbol* $tmp192 = *(&local2);
org$frostlang$frostc$Annotations** $tmp193 = &((org$frostlang$frostc$MethodDecl*) $tmp192)->annotations;
org$frostlang$frostc$Annotations* $tmp194 = *$tmp193;
frost$core$Bit $tmp195 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp194);
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block46; else goto block47;
block46:;
// line 245
frost$collections$Array* $tmp197 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp197);
*(&local11) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$collections$Array* $tmp198 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local11) = $tmp197;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
// unreffing REF($599:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
// line 246
frost$collections$Array* $tmp199 = *(&local11);
org$frostlang$frostc$Symbol* $tmp200 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp199, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp200)));
// line 247
org$frostlang$frostc$Position $tmp201 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp202 = *(&local11);
frost$collections$Array* $tmp203 = *(&local10);
org$frostlang$frostc$Pair* $tmp204 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp201, ((org$frostlang$frostc$IR$Value*) NULL), ((frost$collections$ListView*) $tmp202), ((frost$collections$ListView*) $tmp203), param4);
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
org$frostlang$frostc$Pair* $tmp205 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local12) = $tmp204;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// unreffing REF($625:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
// line 248
org$frostlang$frostc$Pair* $tmp206 = *(&local12);
frost$core$Bit $tmp207 = frost$core$Bit$init$builtin_bit($tmp206 != NULL);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block48; else goto block49;
block48:;
// line 249
org$frostlang$frostc$Pair* $tmp209 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
org$frostlang$frostc$Pair* $tmp210 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing result
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp211 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// unreffing list
*(&local11) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp212 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
// unreffing args
*(&local10) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp213 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
// unreffing rightCl
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp214 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// unreffing rightType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp215 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
// unreffing methods
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp216 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// unreffing target
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp217 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp209;
block49:;
org$frostlang$frostc$Pair* $tmp218 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
// unreffing result
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp219 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing list
*(&local11) = ((frost$collections$Array*) NULL);
goto block47;
block47:;
goto block43;
block45:;
frost$core$Int64 $tmp220 = (frost$core$Int64) {6};
frost$core$Bit $tmp221 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp220);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block50; else goto block51;
block50:;
// line 254
org$frostlang$frostc$Position $tmp223 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Symbol* $tmp224 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp225 = &((org$frostlang$frostc$Methods*) $tmp224)->methods;
org$frostlang$frostc$FixedArray* $tmp226 = *$tmp225;
frost$core$Method* $tmp228 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp228, ((frost$core$Int8*) org$frostlang$frostc$expression$Binary$$anonymous3$org$frostlang$frostc$MethodDecl$R$frost$core$Bit), ((frost$core$Immutable*) NULL));
ITable* $tmp229 = ((frost$collections$ListView*) $tmp226)->$class->itable;
while ($tmp229->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp229 = $tmp229->next;
}
$fn231 $tmp230 = $tmp229->methods[4];
frost$collections$ListView* $tmp232 = $tmp230(((frost$collections$ListView*) $tmp226), ((frost$core$MutableMethod*) $tmp228));
frost$collections$Array* $tmp233 = *(&local10);
org$frostlang$frostc$Pair* $tmp234 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp223, ((org$frostlang$frostc$IR$Value*) NULL), $tmp232, ((frost$collections$ListView*) $tmp233), param4);
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
org$frostlang$frostc$Pair* $tmp235 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local13) = $tmp234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing REF($721:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
// unreffing REF($717:frost.collections.ListView<frost.collections.ListView.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// unreffing REF($711:frost.core.Method)
// line 256
org$frostlang$frostc$Pair* $tmp236 = *(&local13);
frost$core$Bit $tmp237 = frost$core$Bit$init$builtin_bit($tmp236 != NULL);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block52; else goto block53;
block52:;
// line 257
org$frostlang$frostc$Pair* $tmp239 = *(&local13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
org$frostlang$frostc$Pair* $tmp240 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing result
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp241 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
// unreffing args
*(&local10) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp242 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// unreffing rightCl
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp243 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// unreffing rightType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp244 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
// unreffing methods
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp245 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// unreffing target
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp246 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp239;
block53:;
org$frostlang$frostc$Pair* $tmp247 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// unreffing result
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
goto block43;
block51:;
// line 261
frost$core$Bit $tmp248 = frost$core$Bit$init$builtin_bit(false);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp250 = (frost$core$Int64) {261};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s251, $tmp250);
abort(); // unreachable
block54:;
goto block43;
block43:;
// line 264
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$Array* $tmp252 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing args
*(&local10) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp253 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// unreffing rightCl
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp254 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
// unreffing rightType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp255 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// unreffing methods
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp256 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// unreffing target
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp257 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing leftCl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

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
// line 270
frost$collections$CollectionView* $tmp258 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1);
*(&local0) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$collections$CollectionView* $tmp259 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local0) = $tmp258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing REF($1:frost.collections.CollectionView<org.frostlang.frostc.Type>?)
// line 271
frost$collections$CollectionView* $tmp260 = *(&local0);
frost$core$Bit $tmp261 = frost$core$Bit$init$builtin_bit($tmp260 != NULL);
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block1; else goto block2;
block1:;
// line 272
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Pair* $tmp263 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
// line 273
frost$collections$CollectionView* $tmp264 = *(&local0);
frost$core$Bit $tmp265 = frost$core$Bit$init$builtin_bit($tmp264 != NULL);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp267 = (frost$core$Int64) {273};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s268, $tmp267, &$s269);
abort(); // unreachable
block3:;
ITable* $tmp270 = ((frost$collections$Iterable*) $tmp264)->$class->itable;
while ($tmp270->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp270 = $tmp270->next;
}
$fn272 $tmp271 = $tmp270->methods[0];
frost$collections$Iterator* $tmp273 = $tmp271(((frost$collections$Iterable*) $tmp264));
goto block5;
block5:;
ITable* $tmp274 = $tmp273->$class->itable;
while ($tmp274->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp274 = $tmp274->next;
}
$fn276 $tmp275 = $tmp274->methods[0];
frost$core$Bit $tmp277 = $tmp275($tmp273);
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block7; else goto block6;
block6:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp279 = $tmp273->$class->itable;
while ($tmp279->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp279 = $tmp279->next;
}
$fn281 $tmp280 = $tmp279->methods[1];
frost$core$Object* $tmp282 = $tmp280($tmp273);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp282)));
org$frostlang$frostc$Type* $tmp283 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp282);
// line 274
org$frostlang$frostc$Type* $tmp284 = *(&local2);
org$frostlang$frostc$Pair* $tmp285 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, param1, $tmp284);
*(&local3) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
org$frostlang$frostc$Pair* $tmp286 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local3) = $tmp285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// unreffing REF($59:org.frostlang.frostc.Pair<org.frostlang.frostc.Type, frost.core.Int64>?)
// line 275
org$frostlang$frostc$Pair* $tmp287 = *(&local3);
frost$core$Bit $tmp288 = frost$core$Bit$init$builtin_bit($tmp287 != NULL);
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp290 = (frost$core$Int64) {275};
frost$core$String* $tmp291 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s292, ((frost$core$Object*) param1));
frost$core$String* $tmp293 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp291, &$s294);
org$frostlang$frostc$Type* $tmp295 = *(&local2);
frost$core$String* $tmp296 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp293, ((frost$core$Object*) $tmp295));
frost$core$String* $tmp297 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp296, &$s298);
$fn300 $tmp299 = ($fn300) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp301 = $tmp299(param1);
org$frostlang$frostc$Position$wrapper* $tmp302;
$tmp302 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp302->value = $tmp301;
frost$core$String* $tmp303 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp297, ((frost$core$Object*) $tmp302));
frost$core$String* $tmp304 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp303, &$s305);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s306, $tmp290, $tmp304);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// unreffing REF($88:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// unreffing REF($87:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// unreffing REF($86:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
// unreffing REF($83:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// unreffing REF($82:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// unreffing REF($79:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
// unreffing REF($78:frost.core.String)
abort(); // unreachable
block8:;
// line 277
org$frostlang$frostc$Type* $tmp307 = *(&local2);
org$frostlang$frostc$Pair* $tmp308 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp307, param2, param3, param4);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
org$frostlang$frostc$Pair* $tmp309 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local4) = $tmp308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// unreffing REF($114:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
// line 278
org$frostlang$frostc$Pair* $tmp310 = *(&local4);
frost$core$Bit $tmp311 = frost$core$Bit$init$builtin_bit($tmp310 != NULL);
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block10; else goto block11;
block10:;
// line 279
org$frostlang$frostc$Pair* $tmp313 = *(&local4);
frost$core$Bit $tmp314 = frost$core$Bit$init$builtin_bit($tmp313 != NULL);
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp316 = (frost$core$Int64) {279};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s317, $tmp316, &$s318);
abort(); // unreachable
block12:;
frost$core$Object** $tmp319 = &$tmp313->second;
frost$core$Object* $tmp320 = *$tmp319;
org$frostlang$frostc$Pair* $tmp321 = *(&local3);
frost$core$Bit $tmp322 = frost$core$Bit$init$builtin_bit($tmp321 != NULL);
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp324 = (frost$core$Int64) {279};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s325, $tmp324, &$s326);
abort(); // unreachable
block14:;
frost$core$Object** $tmp327 = &$tmp321->second;
frost$core$Object* $tmp328 = *$tmp327;
int64_t $tmp329 = ((frost$core$Int64$wrapper*) $tmp320)->value.value;
int64_t $tmp330 = ((frost$core$Int64$wrapper*) $tmp328)->value.value;
int64_t $tmp331 = $tmp329 + $tmp330;
frost$core$Int64 $tmp332 = (frost$core$Int64) {$tmp331};
*(&local5) = $tmp332;
// line 280
org$frostlang$frostc$Pair* $tmp333 = *(&local1);
frost$core$Bit $tmp334 = frost$core$Bit$init$builtin_bit($tmp333 == NULL);
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block18; else goto block19;
block18:;
*(&local6) = $tmp334;
goto block20;
block19:;
frost$core$Int64 $tmp336 = *(&local5);
org$frostlang$frostc$Pair* $tmp337 = *(&local1);
frost$core$Bit $tmp338 = frost$core$Bit$init$builtin_bit($tmp337 != NULL);
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp340 = (frost$core$Int64) {280};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s341, $tmp340, &$s342);
abort(); // unreachable
block21:;
frost$core$Object** $tmp343 = &$tmp337->second;
frost$core$Object* $tmp344 = *$tmp343;
int64_t $tmp345 = $tmp336.value;
int64_t $tmp346 = ((frost$core$Int64$wrapper*) $tmp344)->value.value;
bool $tmp347 = $tmp345 < $tmp346;
frost$core$Bit $tmp348 = (frost$core$Bit) {$tmp347};
*(&local6) = $tmp348;
goto block20;
block20:;
frost$core$Bit $tmp349 = *(&local6);
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block16; else goto block23;
block16:;
// line 281
org$frostlang$frostc$Pair* $tmp351 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$Pair* $tmp352 = *(&local4);
frost$core$Bit $tmp353 = frost$core$Bit$init$builtin_bit($tmp352 != NULL);
bool $tmp354 = $tmp353.value;
if ($tmp354) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp355 = (frost$core$Int64) {281};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s356, $tmp355, &$s357);
abort(); // unreachable
block24:;
frost$core$Object** $tmp358 = &$tmp352->first;
frost$core$Object* $tmp359 = *$tmp358;
frost$core$Int64 $tmp360 = *(&local5);
frost$core$Int64$wrapper* $tmp361;
$tmp361 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp361->value = $tmp360;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp351, ((frost$core$Object*) ((frost$collections$ListView*) $tmp359)), ((frost$core$Object*) $tmp361));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
org$frostlang$frostc$Pair* $tmp362 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local1) = $tmp351;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// unreffing REF($208:org.frostlang.frostc.Pair.B)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
// unreffing REF($192:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>)
goto block17;
block23:;
// line 283
frost$core$Int64 $tmp363 = *(&local5);
org$frostlang$frostc$Pair* $tmp364 = *(&local1);
frost$core$Bit $tmp365 = frost$core$Bit$init$builtin_bit($tmp364 != NULL);
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp367 = (frost$core$Int64) {283};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s368, $tmp367, &$s369);
abort(); // unreachable
block28:;
frost$core$Object** $tmp370 = &$tmp364->second;
frost$core$Object* $tmp371 = *$tmp370;
frost$core$Bit $tmp372 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp363, ((frost$core$Int64$wrapper*) $tmp371)->value);
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block26; else goto block27;
block26:;
// line 284
frost$collections$Array* $tmp374 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp374);
*(&local7) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$collections$Array* $tmp375 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
*(&local7) = $tmp374;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
// unreffing REF($242:frost.collections.Array<org.frostlang.frostc.MethodRef>)
// line 285
frost$collections$Array* $tmp376 = *(&local7);
org$frostlang$frostc$Pair* $tmp377 = *(&local1);
frost$core$Bit $tmp378 = frost$core$Bit$init$builtin_bit($tmp377 != NULL);
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp380 = (frost$core$Int64) {285};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s381, $tmp380, &$s382);
abort(); // unreachable
block30:;
frost$core$Object** $tmp383 = &$tmp377->first;
frost$core$Object* $tmp384 = *$tmp383;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp376, ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp384)));
// line 286
org$frostlang$frostc$Pair* $tmp385 = *(&local4);
frost$core$Bit $tmp386 = frost$core$Bit$init$builtin_bit($tmp385 != NULL);
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp388 = (frost$core$Int64) {286};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s389, $tmp388, &$s390);
abort(); // unreachable
block32:;
frost$core$Object** $tmp391 = &$tmp385->first;
frost$core$Object* $tmp392 = *$tmp391;
ITable* $tmp393 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp392))->$class->itable;
while ($tmp393->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp393 = $tmp393->next;
}
$fn395 $tmp394 = $tmp393->methods[0];
frost$collections$Iterator* $tmp396 = $tmp394(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp392)));
goto block34;
block34:;
ITable* $tmp397 = $tmp396->$class->itable;
while ($tmp397->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp397 = $tmp397->next;
}
$fn399 $tmp398 = $tmp397->methods[0];
frost$core$Bit $tmp400 = $tmp398($tmp396);
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block36; else goto block35;
block35:;
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
ITable* $tmp402 = $tmp396->$class->itable;
while ($tmp402->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp402 = $tmp402->next;
}
$fn404 $tmp403 = $tmp402->methods[1];
frost$core$Object* $tmp405 = $tmp403($tmp396);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodRef*) $tmp405)));
org$frostlang$frostc$MethodRef* $tmp406 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
*(&local8) = ((org$frostlang$frostc$MethodRef*) $tmp405);
// line 287
org$frostlang$frostc$Pair* $tmp407 = *(&local1);
frost$core$Bit $tmp408 = frost$core$Bit$init$builtin_bit($tmp407 != NULL);
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp410 = (frost$core$Int64) {287};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s411, $tmp410, &$s412);
abort(); // unreachable
block37:;
frost$core$Object** $tmp413 = &$tmp407->first;
frost$core$Object* $tmp414 = *$tmp413;
ITable* $tmp415 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp414))->$class->itable;
while ($tmp415->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp415 = $tmp415->next;
}
$fn417 $tmp416 = $tmp415->methods[0];
frost$collections$Iterator* $tmp418 = $tmp416(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp414)));
goto block39;
block39:;
ITable* $tmp419 = $tmp418->$class->itable;
while ($tmp419->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp419 = $tmp419->next;
}
$fn421 $tmp420 = $tmp419->methods[0];
frost$core$Bit $tmp422 = $tmp420($tmp418);
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block41; else goto block40;
block40:;
*(&local9) = ((org$frostlang$frostc$MethodRef*) NULL);
ITable* $tmp424 = $tmp418->$class->itable;
while ($tmp424->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp424 = $tmp424->next;
}
$fn426 $tmp425 = $tmp424->methods[1];
frost$core$Object* $tmp427 = $tmp425($tmp418);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodRef*) $tmp427)));
org$frostlang$frostc$MethodRef* $tmp428 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local9) = ((org$frostlang$frostc$MethodRef*) $tmp427);
// line 288
org$frostlang$frostc$MethodRef* $tmp429 = *(&local9);
org$frostlang$frostc$MethodDecl** $tmp430 = &$tmp429->value;
org$frostlang$frostc$MethodDecl* $tmp431 = *$tmp430;
org$frostlang$frostc$MethodRef* $tmp432 = *(&local8);
org$frostlang$frostc$MethodDecl** $tmp433 = &$tmp432->value;
org$frostlang$frostc$MethodDecl* $tmp434 = *$tmp433;
bool $tmp435 = $tmp431 == $tmp434;
frost$core$Bit $tmp436 = frost$core$Bit$init$builtin_bit($tmp435);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block42; else goto block43;
block42:;
// line 289
frost$core$Frost$unref$frost$core$Object$Q($tmp427);
// unreffing REF($335:frost.collections.Iterator.T)
org$frostlang$frostc$MethodRef* $tmp438 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
// unreffing old
*(&local9) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
// unreffing REF($324:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q($tmp405);
// unreffing REF($300:frost.collections.Iterator.T)
org$frostlang$frostc$MethodRef* $tmp439 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
// unreffing op
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block34;
block43:;
frost$core$Frost$unref$frost$core$Object$Q($tmp427);
// unreffing REF($335:frost.collections.Iterator.T)
org$frostlang$frostc$MethodRef* $tmp440 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
// unreffing old
*(&local9) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block39;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
// unreffing REF($324:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 292
frost$collections$Array* $tmp441 = *(&local7);
org$frostlang$frostc$MethodRef* $tmp442 = *(&local8);
frost$collections$Array$add$frost$collections$Array$T($tmp441, ((frost$core$Object*) $tmp442));
frost$core$Frost$unref$frost$core$Object$Q($tmp405);
// unreffing REF($300:frost.collections.Iterator.T)
org$frostlang$frostc$MethodRef* $tmp443 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
// unreffing op
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block34;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
// unreffing REF($289:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 294
org$frostlang$frostc$Pair* $tmp444 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Array* $tmp445 = *(&local7);
frost$core$Int64 $tmp446 = *(&local5);
frost$core$Int64$wrapper* $tmp447;
$tmp447 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp447->value = $tmp446;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp444, ((frost$core$Object*) ((frost$collections$ListView*) $tmp445)), ((frost$core$Object*) $tmp447));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
org$frostlang$frostc$Pair* $tmp448 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
*(&local1) = $tmp444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
// unreffing REF($412:org.frostlang.frostc.Pair.B)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// unreffing REF($406:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>)
frost$collections$Array* $tmp449 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
// unreffing a
*(&local7) = ((frost$collections$Array*) NULL);
goto block27;
block27:;
goto block17;
block17:;
goto block11;
block11:;
org$frostlang$frostc$Pair* $tmp450 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
// unreffing ops
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Pair* $tmp451 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
// unreffing compilerCost
*(&local3) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp282);
// unreffing REF($49:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp452 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
// unreffing t
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// unreffing REF($38:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 298
org$frostlang$frostc$Pair* $tmp453 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
org$frostlang$frostc$Pair* $tmp454 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// unreffing best
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$CollectionView* $tmp455 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
// unreffing leftTypes
*(&local0) = ((frost$collections$CollectionView*) NULL);
return $tmp453;
block2:;
// line 300
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$CollectionView* $tmp456 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
// unreffing leftTypes
*(&local0) = ((frost$collections$CollectionView*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$foldInts$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

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
// line 305
// line 306
// line 308
frost$core$Int64* $tmp457 = &param1->$rawValue;
frost$core$Int64 $tmp458 = *$tmp457;
frost$core$Int64 $tmp459 = (frost$core$Int64) {25};
frost$core$Bit $tmp460 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp458, $tmp459);
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp462 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp463 = *$tmp462;
frost$core$UInt64* $tmp464 = (frost$core$UInt64*) (param1->$data + 16);
frost$core$UInt64 $tmp465 = *$tmp464;
*(&local2) = $tmp465;
// line 310
frost$core$UInt64 $tmp466 = *(&local2);
frost$core$Int64 $tmp467 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp468 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp467);
uint64_t $tmp469 = $tmp466.value;
uint64_t $tmp470 = $tmp468.value;
bool $tmp471 = $tmp469 > $tmp470;
frost$core$Bit $tmp472 = (frost$core$Bit) {$tmp471};
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block4; else goto block5;
block4:;
// line 311
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 313
frost$core$UInt64 $tmp474 = *(&local2);
frost$core$Int64 $tmp475 = frost$core$UInt64$get_asInt64$R$frost$core$Int64($tmp474);
*(&local0) = $tmp475;
goto block1;
block3:;
// line 316
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block1:;
// line 319
frost$core$Int64* $tmp476 = &param3->$rawValue;
frost$core$Int64 $tmp477 = *$tmp476;
frost$core$Int64 $tmp478 = (frost$core$Int64) {25};
frost$core$Bit $tmp479 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp477, $tmp478);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp481 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp482 = *$tmp481;
frost$core$UInt64* $tmp483 = (frost$core$UInt64*) (param3->$data + 16);
frost$core$UInt64 $tmp484 = *$tmp483;
*(&local3) = $tmp484;
// line 321
frost$core$UInt64 $tmp485 = *(&local3);
frost$core$Int64 $tmp486 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp487 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp486);
uint64_t $tmp488 = $tmp485.value;
uint64_t $tmp489 = $tmp487.value;
bool $tmp490 = $tmp488 > $tmp489;
frost$core$Bit $tmp491 = (frost$core$Bit) {$tmp490};
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block9; else goto block10;
block9:;
// line 322
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 324
frost$core$UInt64 $tmp493 = *(&local3);
frost$core$Int64 $tmp494 = frost$core$UInt64$get_asInt64$R$frost$core$Int64($tmp493);
*(&local1) = $tmp494;
goto block6;
block8:;
// line 327
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 330
frost$core$Int64 $tmp495 = param2.$rawValue;
frost$core$Int64 $tmp496 = (frost$core$Int64) {0};
frost$core$Bit $tmp497 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp495, $tmp496);
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block12; else goto block13;
block12:;
// line 332
frost$core$Int64 $tmp499 = *(&local0);
frost$core$Int64 $tmp500 = *(&local1);
int64_t $tmp501 = $tmp499.value;
int64_t $tmp502 = $tmp500.value;
int64_t $tmp503 = $tmp501 + $tmp502;
frost$core$Int64 $tmp504 = (frost$core$Int64) {$tmp503};
frost$core$UInt64 $tmp505 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp504);
*(&local4) = $tmp505;
// line 333
org$frostlang$frostc$ASTNode* $tmp506 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp507 = (frost$core$Int64) {25};
$fn509 $tmp508 = ($fn509) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp510 = $tmp508(param1);
frost$core$UInt64 $tmp511 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp506, $tmp507, $tmp510, $tmp511);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
// unreffing REF($88:org.frostlang.frostc.ASTNode)
return $tmp506;
block13:;
frost$core$Int64 $tmp512 = (frost$core$Int64) {1};
frost$core$Bit $tmp513 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp495, $tmp512);
bool $tmp514 = $tmp513.value;
if ($tmp514) goto block14; else goto block15;
block14:;
// line 336
frost$core$Int64 $tmp515 = *(&local0);
frost$core$Int64 $tmp516 = *(&local1);
int64_t $tmp517 = $tmp515.value;
int64_t $tmp518 = $tmp516.value;
int64_t $tmp519 = $tmp517 - $tmp518;
frost$core$Int64 $tmp520 = (frost$core$Int64) {$tmp519};
frost$core$UInt64 $tmp521 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp520);
*(&local5) = $tmp521;
// line 337
org$frostlang$frostc$ASTNode* $tmp522 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp523 = (frost$core$Int64) {25};
$fn525 $tmp524 = ($fn525) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp526 = $tmp524(param1);
frost$core$UInt64 $tmp527 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp522, $tmp523, $tmp526, $tmp527);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
// unreffing REF($115:org.frostlang.frostc.ASTNode)
return $tmp522;
block15:;
frost$core$Int64 $tmp528 = (frost$core$Int64) {2};
frost$core$Bit $tmp529 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp495, $tmp528);
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block16; else goto block17;
block16:;
// line 340
frost$core$Int64 $tmp531 = *(&local0);
frost$core$Int64 $tmp532 = *(&local1);
int64_t $tmp533 = $tmp531.value;
int64_t $tmp534 = $tmp532.value;
int64_t $tmp535 = $tmp533 * $tmp534;
frost$core$Int64 $tmp536 = (frost$core$Int64) {$tmp535};
frost$core$UInt64 $tmp537 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp536);
*(&local6) = $tmp537;
// line 341
org$frostlang$frostc$ASTNode* $tmp538 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp539 = (frost$core$Int64) {25};
$fn541 $tmp540 = ($fn541) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp542 = $tmp540(param1);
frost$core$UInt64 $tmp543 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp538, $tmp539, $tmp542, $tmp543);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
// unreffing REF($142:org.frostlang.frostc.ASTNode)
return $tmp538;
block17:;
frost$core$Int64 $tmp544 = (frost$core$Int64) {4};
frost$core$Bit $tmp545 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp495, $tmp544);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block18; else goto block19;
block18:;
// line 344
frost$core$Int64 $tmp547 = *(&local1);
frost$core$Int64 $tmp548 = (frost$core$Int64) {0};
frost$core$Bit $tmp549 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp547, $tmp548);
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block20; else goto block21;
block20:;
// line 345
$fn552 $tmp551 = ($fn552) param3->$class->vtable[2];
org$frostlang$frostc$Position $tmp553 = $tmp551(param3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp553, &$s554);
// line 346
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 348
frost$core$Int64 $tmp555 = *(&local0);
frost$core$Int64 $tmp556 = *(&local1);
int64_t $tmp557 = $tmp555.value;
int64_t $tmp558 = $tmp556.value;
int64_t $tmp559 = $tmp557 / $tmp558;
frost$core$Int64 $tmp560 = (frost$core$Int64) {$tmp559};
frost$core$UInt64 $tmp561 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp560);
*(&local7) = $tmp561;
// line 349
org$frostlang$frostc$ASTNode* $tmp562 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp563 = (frost$core$Int64) {25};
$fn565 $tmp564 = ($fn565) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp566 = $tmp564(param1);
frost$core$UInt64 $tmp567 = *(&local7);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp562, $tmp563, $tmp566, $tmp567);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
// unreffing REF($183:org.frostlang.frostc.ASTNode)
return $tmp562;
block19:;
frost$core$Int64 $tmp568 = (frost$core$Int64) {5};
frost$core$Bit $tmp569 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp495, $tmp568);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block22; else goto block23;
block22:;
// line 352
frost$core$Int64 $tmp571 = *(&local1);
frost$core$Int64 $tmp572 = (frost$core$Int64) {0};
frost$core$Bit $tmp573 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp571, $tmp572);
bool $tmp574 = $tmp573.value;
if ($tmp574) goto block24; else goto block25;
block24:;
// line 353
$fn576 $tmp575 = ($fn576) param3->$class->vtable[2];
org$frostlang$frostc$Position $tmp577 = $tmp575(param3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp577, &$s578);
// line 354
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 356
frost$core$Int64 $tmp579 = *(&local0);
frost$core$Int64 $tmp580 = *(&local1);
frost$core$Int64 $tmp581 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp579, $tmp580);
frost$core$UInt64 $tmp582 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp581);
*(&local8) = $tmp582;
// line 357
org$frostlang$frostc$ASTNode* $tmp583 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp584 = (frost$core$Int64) {25};
$fn586 $tmp585 = ($fn586) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp587 = $tmp585(param1);
frost$core$UInt64 $tmp588 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp583, $tmp584, $tmp587, $tmp588);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
// unreffing REF($221:org.frostlang.frostc.ASTNode)
return $tmp583;
block23:;
frost$core$Int64 $tmp589 = (frost$core$Int64) {6};
frost$core$Bit $tmp590 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp495, $tmp589);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block26; else goto block27;
block26:;
// line 360
org$frostlang$frostc$ASTNode* $tmp592 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp593 = (frost$core$Int64) {6};
$fn595 $tmp594 = ($fn595) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp596 = $tmp594(param1);
frost$core$Int64 $tmp597 = *(&local0);
frost$core$Int64 $tmp598 = *(&local1);
frost$core$Bit $tmp599 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp597, $tmp598);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp592, $tmp593, $tmp596, $tmp599);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
// unreffing REF($239:org.frostlang.frostc.ASTNode)
return $tmp592;
block27:;
frost$core$Int64 $tmp600 = (frost$core$Int64) {7};
frost$core$Bit $tmp601 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp495, $tmp600);
bool $tmp602 = $tmp601.value;
if ($tmp602) goto block28; else goto block29;
block28:;
// line 363
org$frostlang$frostc$ASTNode* $tmp603 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp604 = (frost$core$Int64) {6};
$fn606 $tmp605 = ($fn606) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp607 = $tmp605(param1);
frost$core$Int64 $tmp608 = *(&local0);
frost$core$Int64 $tmp609 = *(&local1);
int64_t $tmp610 = $tmp608.value;
int64_t $tmp611 = $tmp609.value;
bool $tmp612 = $tmp610 != $tmp611;
frost$core$Bit $tmp613 = (frost$core$Bit) {$tmp612};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp603, $tmp604, $tmp607, $tmp613);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
// unreffing REF($259:org.frostlang.frostc.ASTNode)
return $tmp603;
block29:;
frost$core$Int64 $tmp614 = (frost$core$Int64) {9};
frost$core$Bit $tmp615 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp495, $tmp614);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block30; else goto block31;
block30:;
// line 366
org$frostlang$frostc$ASTNode* $tmp617 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp618 = (frost$core$Int64) {6};
$fn620 $tmp619 = ($fn620) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp621 = $tmp619(param1);
frost$core$Int64 $tmp622 = *(&local0);
frost$core$Int64 $tmp623 = *(&local1);
int64_t $tmp624 = $tmp622.value;
int64_t $tmp625 = $tmp623.value;
bool $tmp626 = $tmp624 < $tmp625;
frost$core$Bit $tmp627 = (frost$core$Bit) {$tmp626};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp617, $tmp618, $tmp621, $tmp627);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
// unreffing REF($282:org.frostlang.frostc.ASTNode)
return $tmp617;
block31:;
frost$core$Int64 $tmp628 = (frost$core$Int64) {8};
frost$core$Bit $tmp629 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp495, $tmp628);
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block32; else goto block33;
block32:;
// line 369
org$frostlang$frostc$ASTNode* $tmp631 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp632 = (frost$core$Int64) {6};
$fn634 $tmp633 = ($fn634) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp635 = $tmp633(param1);
frost$core$Int64 $tmp636 = *(&local0);
frost$core$Int64 $tmp637 = *(&local1);
int64_t $tmp638 = $tmp636.value;
int64_t $tmp639 = $tmp637.value;
bool $tmp640 = $tmp638 > $tmp639;
frost$core$Bit $tmp641 = (frost$core$Bit) {$tmp640};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp631, $tmp632, $tmp635, $tmp641);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
// unreffing REF($305:org.frostlang.frostc.ASTNode)
return $tmp631;
block33:;
frost$core$Int64 $tmp642 = (frost$core$Int64) {11};
frost$core$Bit $tmp643 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp495, $tmp642);
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block34; else goto block35;
block34:;
// line 372
org$frostlang$frostc$ASTNode* $tmp645 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp646 = (frost$core$Int64) {6};
$fn648 $tmp647 = ($fn648) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp649 = $tmp647(param1);
frost$core$Int64 $tmp650 = *(&local0);
frost$core$Int64 $tmp651 = *(&local1);
int64_t $tmp652 = $tmp650.value;
int64_t $tmp653 = $tmp651.value;
bool $tmp654 = $tmp652 <= $tmp653;
frost$core$Bit $tmp655 = (frost$core$Bit) {$tmp654};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp645, $tmp646, $tmp649, $tmp655);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
// unreffing REF($328:org.frostlang.frostc.ASTNode)
return $tmp645;
block35:;
frost$core$Int64 $tmp656 = (frost$core$Int64) {10};
frost$core$Bit $tmp657 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp495, $tmp656);
bool $tmp658 = $tmp657.value;
if ($tmp658) goto block36; else goto block37;
block36:;
// line 375
org$frostlang$frostc$ASTNode* $tmp659 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp660 = (frost$core$Int64) {6};
$fn662 $tmp661 = ($fn662) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp663 = $tmp661(param1);
frost$core$Int64 $tmp664 = *(&local0);
frost$core$Int64 $tmp665 = *(&local1);
int64_t $tmp666 = $tmp664.value;
int64_t $tmp667 = $tmp665.value;
bool $tmp668 = $tmp666 >= $tmp667;
frost$core$Bit $tmp669 = (frost$core$Bit) {$tmp668};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp659, $tmp660, $tmp663, $tmp669);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
// unreffing REF($351:org.frostlang.frostc.ASTNode)
return $tmp659;
block37:;
frost$core$Int64 $tmp670 = (frost$core$Int64) {15};
frost$core$Bit $tmp671 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp495, $tmp670);
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block38; else goto block39;
block38:;
// line 378
frost$core$Int64 $tmp673 = *(&local0);
frost$core$Int64 $tmp674 = *(&local1);
frost$core$Int64 $tmp675 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp673, $tmp674);
frost$core$UInt64 $tmp676 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp675);
*(&local9) = $tmp676;
// line 379
org$frostlang$frostc$ASTNode* $tmp677 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp678 = (frost$core$Int64) {25};
$fn680 $tmp679 = ($fn680) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp681 = $tmp679(param1);
frost$core$UInt64 $tmp682 = *(&local9);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp677, $tmp678, $tmp681, $tmp682);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
// unreffing REF($380:org.frostlang.frostc.ASTNode)
return $tmp677;
block39:;
frost$core$Int64 $tmp683 = (frost$core$Int64) {13};
frost$core$Bit $tmp684 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp495, $tmp683);
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block40; else goto block41;
block40:;
// line 382
frost$core$Int64 $tmp686 = *(&local0);
frost$core$Int64 $tmp687 = *(&local1);
frost$core$Int64 $tmp688 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp686, $tmp687);
frost$core$UInt64 $tmp689 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp688);
*(&local10) = $tmp689;
// line 383
org$frostlang$frostc$ASTNode* $tmp690 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp691 = (frost$core$Int64) {25};
$fn693 $tmp692 = ($fn693) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp694 = $tmp692(param1);
frost$core$UInt64 $tmp695 = *(&local10);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp690, $tmp691, $tmp694, $tmp695);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
// unreffing REF($404:org.frostlang.frostc.ASTNode)
return $tmp690;
block41:;
frost$core$Int64 $tmp696 = (frost$core$Int64) {17};
frost$core$Bit $tmp697 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp495, $tmp696);
bool $tmp698 = $tmp697.value;
if ($tmp698) goto block42; else goto block43;
block42:;
// line 386
frost$core$Int64 $tmp699 = *(&local0);
frost$core$Int64 $tmp700 = *(&local1);
frost$core$Int64 $tmp701 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp699, $tmp700);
frost$core$UInt64 $tmp702 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp701);
*(&local11) = $tmp702;
// line 387
org$frostlang$frostc$ASTNode* $tmp703 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp704 = (frost$core$Int64) {25};
$fn706 $tmp705 = ($fn706) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp707 = $tmp705(param1);
frost$core$UInt64 $tmp708 = *(&local11);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp703, $tmp704, $tmp707, $tmp708);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
// unreffing REF($428:org.frostlang.frostc.ASTNode)
return $tmp703;
block43:;
frost$core$Int64 $tmp709 = (frost$core$Int64) {18};
frost$core$Bit $tmp710 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp495, $tmp709);
bool $tmp711 = $tmp710.value;
if ($tmp711) goto block44; else goto block45;
block44:;
// line 390
frost$core$Int64 $tmp712 = *(&local0);
frost$core$Int64 $tmp713 = *(&local1);
frost$core$Int64 $tmp714 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp712, $tmp713);
frost$core$UInt64 $tmp715 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp714);
*(&local12) = $tmp715;
// line 391
org$frostlang$frostc$ASTNode* $tmp716 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp717 = (frost$core$Int64) {25};
$fn719 $tmp718 = ($fn719) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp720 = $tmp718(param1);
frost$core$UInt64 $tmp721 = *(&local12);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp716, $tmp717, $tmp720, $tmp721);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
// unreffing REF($452:org.frostlang.frostc.ASTNode)
return $tmp716;
block45:;
frost$core$Int64 $tmp722 = (frost$core$Int64) {19};
frost$core$Bit $tmp723 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp495, $tmp722);
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block46; else goto block11;
block46:;
// line 394
frost$core$Int64 $tmp725 = *(&local0);
frost$core$Int64 $tmp726 = *(&local1);
frost$core$Int64 $tmp727 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp725, $tmp726);
frost$core$UInt64 $tmp728 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp727);
*(&local13) = $tmp728;
// line 395
org$frostlang$frostc$ASTNode* $tmp729 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp730 = (frost$core$Int64) {25};
$fn732 $tmp731 = ($fn732) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp733 = $tmp731(param1);
frost$core$UInt64 $tmp734 = *(&local13);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp729, $tmp730, $tmp733, $tmp734);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
// unreffing REF($476:org.frostlang.frostc.ASTNode)
return $tmp729;
block11:;
// line 398
$fn736 $tmp735 = ($fn736) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp737 = $tmp735(param1);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp738;
$tmp738 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp738->value = param2;
$fn740 $tmp739 = ($fn740) ((frost$core$Object*) $tmp738)->$class->vtable[0];
frost$core$String* $tmp741 = $tmp739(((frost$core$Object*) $tmp738));
frost$core$String* $tmp742 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s743, $tmp741);
frost$core$String* $tmp744 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp742, &$s745);
frost$core$String* $tmp746 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp744, &$s747);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp737, $tmp746);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
// unreffing REF($497:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
// unreffing REF($496:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
// unreffing REF($495:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
// unreffing REF($494:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
// unreffing REF($492:frost.core.Object)
// line 400
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$foldStrings$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

org$frostlang$frostc$Position local0;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 407
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp748;
$tmp748 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp748->value = param2;
frost$core$Int64 $tmp749 = (frost$core$Int64) {0};
org$frostlang$frostc$expression$Binary$Operator $tmp750 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp749);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp751;
$tmp751 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp751->value = $tmp750;
ITable* $tmp752 = ((frost$core$Equatable*) $tmp748)->$class->itable;
while ($tmp752->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp752 = $tmp752->next;
}
$fn754 $tmp753 = $tmp752->methods[1];
frost$core$Bit $tmp755 = $tmp753(((frost$core$Equatable*) $tmp748), ((frost$core$Equatable*) $tmp751));
bool $tmp756 = $tmp755.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp751)));
// unreffing REF($5:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp748)));
// unreffing REF($1:frost.core.Equatable<org.frostlang.frostc.expression.Binary.Operator>)
if ($tmp756) goto block1; else goto block2;
block1:;
// line 408
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 410
frost$core$Int64* $tmp757 = &param1->$rawValue;
frost$core$Int64 $tmp758 = *$tmp757;
frost$core$Int64 $tmp759 = (frost$core$Int64) {40};
frost$core$Bit $tmp760 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp758, $tmp759);
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block4; else goto block3;
block4:;
org$frostlang$frostc$Position* $tmp762 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp763 = *$tmp762;
*(&local0) = $tmp763;
frost$core$String** $tmp764 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp765 = *$tmp764;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$core$String* $tmp766 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
*(&local1) = $tmp765;
// line 412
frost$core$Int64* $tmp767 = &param3->$rawValue;
frost$core$Int64 $tmp768 = *$tmp767;
frost$core$Int64 $tmp769 = (frost$core$Int64) {40};
frost$core$Bit $tmp770 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp768, $tmp769);
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Position* $tmp772 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp773 = *$tmp772;
frost$core$String** $tmp774 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp775 = *$tmp774;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
frost$core$String* $tmp776 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
*(&local2) = $tmp775;
// line 414
org$frostlang$frostc$ASTNode* $tmp777 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp778 = (frost$core$Int64) {40};
org$frostlang$frostc$Position $tmp779 = *(&local0);
frost$core$String* $tmp780 = *(&local1);
frost$core$String* $tmp781 = *(&local2);
frost$core$String* $tmp782 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp780, $tmp781);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp777, $tmp778, $tmp779, $tmp782);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
// unreffing REF($63:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
// unreffing REF($58:org.frostlang.frostc.ASTNode)
frost$core$String* $tmp783 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
// unreffing s2
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp784 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
// unreffing s1
*(&local1) = ((frost$core$String*) NULL);
return $tmp777;
block5:;
frost$core$String* $tmp785 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
// unreffing s1
*(&local1) = ((frost$core$String*) NULL);
goto block3;
block3:;
// line 419
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

// line 424
frost$core$Int64* $tmp786 = &param1->$rawValue;
frost$core$Int64 $tmp787 = *$tmp786;
frost$core$Int64 $tmp788 = (frost$core$Int64) {25};
frost$core$Bit $tmp789 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp787, $tmp788);
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block2; else goto block3;
block2:;
// line 426
org$frostlang$frostc$ASTNode* $tmp791 = org$frostlang$frostc$expression$Binary$foldInts$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
// unreffing REF($8:org.frostlang.frostc.ASTNode?)
return $tmp791;
block3:;
frost$core$Int64 $tmp792 = (frost$core$Int64) {40};
frost$core$Bit $tmp793 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp787, $tmp792);
bool $tmp794 = $tmp793.value;
if ($tmp794) goto block4; else goto block5;
block4:;
// line 429
org$frostlang$frostc$ASTNode* $tmp795 = org$frostlang$frostc$expression$Binary$foldStrings$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
// unreffing REF($20:org.frostlang.frostc.ASTNode?)
return $tmp795;
block5:;
// line 432
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block1:;
frost$core$Bit $tmp796 = frost$core$Bit$init$builtin_bit(false);
bool $tmp797 = $tmp796.value;
if ($tmp797) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp798 = (frost$core$Int64) {423};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s799, $tmp798, &$s800);
abort(); // unreachable
block6:;
abort(); // unreachable

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$expression$Binary$Operator param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$Compiler$TypeContext* param5) {

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
// line 440
org$frostlang$frostc$ASTNode* $tmp801 = org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param2, param3, param4);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
org$frostlang$frostc$ASTNode* $tmp802 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
*(&local0) = $tmp801;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
// unreffing REF($1:org.frostlang.frostc.ASTNode?)
// line 441
org$frostlang$frostc$ASTNode* $tmp803 = *(&local0);
frost$core$Bit $tmp804 = frost$core$Bit$init$builtin_bit($tmp803 != NULL);
bool $tmp805 = $tmp804.value;
if ($tmp805) goto block1; else goto block2;
block1:;
// line 442
org$frostlang$frostc$ASTNode* $tmp806 = *(&local0);
frost$core$Bit $tmp807 = frost$core$Bit$init$builtin_bit($tmp806 != NULL);
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp809 = (frost$core$Int64) {442};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s810, $tmp809, &$s811);
abort(); // unreachable
block3:;
org$frostlang$frostc$IR$Value* $tmp812 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp806, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
// unreffing REF($28:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$ASTNode* $tmp813 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp812;
block2:;
// line 444
frost$core$Int64 $tmp814 = param3.$rawValue;
frost$core$Int64 $tmp815 = (frost$core$Int64) {23};
frost$core$Bit $tmp816 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp814, $tmp815);
bool $tmp817 = $tmp816.value;
if ($tmp817) goto block6; else goto block7;
block6:;
// line 446
org$frostlang$frostc$Scanner** $tmp818 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp819 = *$tmp818;
org$frostlang$frostc$Type* $tmp820 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp819, param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
org$frostlang$frostc$Type* $tmp821 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
*(&local1) = $tmp820;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
// unreffing REF($49:org.frostlang.frostc.Type)
// line 447
org$frostlang$frostc$Type* $tmp822 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp823 = org$frostlang$frostc$Compiler$compileCast$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp822);
org$frostlang$frostc$IR$Value* $tmp824 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp823, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
// unreffing REF($63:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
// unreffing REF($62:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$Type* $tmp825 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
// unreffing target
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp826 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp824;
block7:;
frost$core$Int64 $tmp827 = (frost$core$Int64) {21};
frost$core$Bit $tmp828 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp814, $tmp827);
bool $tmp829 = $tmp828.value;
if ($tmp829) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp830 = (frost$core$Int64) {22};
frost$core$Bit $tmp831 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp814, $tmp830);
bool $tmp832 = $tmp831.value;
if ($tmp832) goto block8; else goto block10;
block8:;
// line 450
org$frostlang$frostc$IR$Value* $tmp833 = org$frostlang$frostc$Compiler$compileIdentityComparison$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
// unreffing REF($92:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$ASTNode* $tmp834 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp833;
block10:;
// line 453
org$frostlang$frostc$Pair* $tmp835 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param2, param3, param4, param5);
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
org$frostlang$frostc$Pair* $tmp836 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local2) = $tmp835;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
// unreffing REF($105:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
// line 454
org$frostlang$frostc$Pair* $tmp837 = *(&local2);
frost$core$Bit $tmp838 = frost$core$Bit$init$builtin_bit($tmp837 != NULL);
bool $tmp839 = $tmp838.value;
if ($tmp839) goto block11; else goto block12;
block11:;
// line 455
org$frostlang$frostc$Pair* $tmp840 = *(&local2);
frost$core$Bit $tmp841 = frost$core$Bit$init$builtin_bit($tmp840 != NULL);
bool $tmp842 = $tmp841.value;
if ($tmp842) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp843 = (frost$core$Int64) {455};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s844, $tmp843, &$s845);
abort(); // unreachable
block15:;
frost$core$Object** $tmp846 = &$tmp840->first;
frost$core$Object* $tmp847 = *$tmp846;
ITable* $tmp848 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp847))->$class->itable;
while ($tmp848->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp848 = $tmp848->next;
}
$fn850 $tmp849 = $tmp848->methods[0];
frost$core$Int64 $tmp851 = $tmp849(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp847)));
frost$core$Int64 $tmp852 = (frost$core$Int64) {1};
int64_t $tmp853 = $tmp851.value;
int64_t $tmp854 = $tmp852.value;
bool $tmp855 = $tmp853 > $tmp854;
frost$core$Bit $tmp856 = (frost$core$Bit) {$tmp855};
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block13; else goto block14;
block13:;
// line 456
org$frostlang$frostc$Pair* $tmp858 = *(&local2);
frost$core$Bit $tmp859 = frost$core$Bit$init$builtin_bit($tmp858 != NULL);
bool $tmp860 = $tmp859.value;
if ($tmp860) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp861 = (frost$core$Int64) {456};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s862, $tmp861, &$s863);
abort(); // unreachable
block17:;
frost$core$Object** $tmp864 = &$tmp858->first;
frost$core$Object* $tmp865 = *$tmp864;
frost$collections$Array* $tmp866 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp867 = (frost$core$Int64) {2};
frost$collections$Array$init$frost$core$Int64($tmp866, $tmp867);
frost$collections$Array$add$frost$collections$Array$T($tmp866, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp866, ((frost$core$Object*) param4));
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp865), ((frost$collections$ListView*) $tmp866), param5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
// unreffing REF($158:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 457
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp868 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp869 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block14:;
// line 459
org$frostlang$frostc$Pair* $tmp870 = *(&local2);
frost$core$Bit $tmp871 = frost$core$Bit$init$builtin_bit($tmp870 != NULL);
bool $tmp872 = $tmp871.value;
if ($tmp872) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp873 = (frost$core$Int64) {459};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s874, $tmp873, &$s875);
abort(); // unreachable
block19:;
frost$core$Object** $tmp876 = &$tmp870->first;
frost$core$Object* $tmp877 = *$tmp876;
frost$core$Int64 $tmp878 = (frost$core$Int64) {0};
ITable* $tmp879 = ((frost$collections$ListView*) $tmp877)->$class->itable;
while ($tmp879->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp879 = $tmp879->next;
}
$fn881 $tmp880 = $tmp879->methods[0];
frost$core$Object* $tmp882 = $tmp880(((frost$collections$ListView*) $tmp877), $tmp878);
org$frostlang$frostc$MethodDecl** $tmp883 = &((org$frostlang$frostc$MethodRef*) $tmp882)->value;
org$frostlang$frostc$MethodDecl* $tmp884 = *$tmp883;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
org$frostlang$frostc$MethodDecl* $tmp885 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
*(&local3) = $tmp884;
frost$core$Frost$unref$frost$core$Object$Q($tmp882);
// unreffing REF($203:frost.collections.ListView.T)
// line 460
org$frostlang$frostc$MethodDecl* $tmp886 = *(&local3);
org$frostlang$frostc$Annotations** $tmp887 = &$tmp886->annotations;
org$frostlang$frostc$Annotations* $tmp888 = *$tmp887;
frost$core$Bit $tmp889 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp888);
bool $tmp890 = $tmp889.value;
if ($tmp890) goto block21; else goto block22;
block21:;
// line 461
org$frostlang$frostc$MethodDecl* $tmp891 = *(&local3);
frost$collections$Array** $tmp892 = &$tmp891->parameters;
frost$collections$Array* $tmp893 = *$tmp892;
ITable* $tmp894 = ((frost$collections$CollectionView*) $tmp893)->$class->itable;
while ($tmp894->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp894 = $tmp894->next;
}
$fn896 $tmp895 = $tmp894->methods[0];
frost$core$Int64 $tmp897 = $tmp895(((frost$collections$CollectionView*) $tmp893));
frost$core$Int64 $tmp898 = (frost$core$Int64) {2};
frost$core$Bit $tmp899 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp897, $tmp898);
bool $tmp900 = $tmp899.value;
if ($tmp900) goto block23; else goto block24;
block23:;
// line 462
org$frostlang$frostc$IR$Value* $tmp901 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp902 = (frost$core$Int64) {9};
org$frostlang$frostc$MethodDecl* $tmp903 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl($tmp901, $tmp902, ((org$frostlang$frostc$IR$Value*) NULL), $tmp903);
frost$collections$Array* $tmp904 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp905 = (frost$core$Int64) {2};
frost$collections$Array$init$frost$core$Int64($tmp904, $tmp905);
frost$collections$Array$add$frost$collections$Array$T($tmp904, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp904, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp906 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp901, ((frost$collections$ListView*) $tmp904), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
// unreffing REF($251:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
// unreffing REF($240:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
// unreffing REF($236:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$MethodDecl* $tmp907 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
// unreffing m
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp908 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp909 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp906;
block24:;
// line 465
org$frostlang$frostc$MethodDecl* $tmp910 = *(&local3);
frost$collections$Array** $tmp911 = &$tmp910->parameters;
frost$collections$Array* $tmp912 = *$tmp911;
ITable* $tmp913 = ((frost$collections$CollectionView*) $tmp912)->$class->itable;
while ($tmp913->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp913 = $tmp913->next;
}
$fn915 $tmp914 = $tmp913->methods[0];
frost$core$Int64 $tmp916 = $tmp914(((frost$collections$CollectionView*) $tmp912));
frost$core$Int64 $tmp917 = (frost$core$Int64) {1};
frost$core$Bit $tmp918 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp916, $tmp917);
bool $tmp919 = $tmp918.value;
if ($tmp919) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp920 = (frost$core$Int64) {465};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s921, $tmp920);
abort(); // unreachable
block25:;
// line 466
org$frostlang$frostc$IR$Value* $tmp922 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp923 = (frost$core$Int64) {9};
org$frostlang$frostc$MethodDecl* $tmp924 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl($tmp922, $tmp923, ((org$frostlang$frostc$IR$Value*) NULL), $tmp924);
frost$collections$Array* $tmp925 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp926 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp925, $tmp926);
frost$collections$Array$add$frost$collections$Array$T($tmp925, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp927 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp922, ((frost$collections$ListView*) $tmp925), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
// unreffing REF($306:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
// unreffing REF($298:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
// unreffing REF($294:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$MethodDecl* $tmp928 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
// unreffing m
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp929 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp930 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp927;
block22:;
// line 469
org$frostlang$frostc$MethodDecl* $tmp931 = *(&local3);
frost$core$Weak** $tmp932 = &$tmp931->owner;
frost$core$Weak* $tmp933 = *$tmp932;
frost$core$Object* $tmp934 = frost$core$Weak$get$R$frost$core$Weak$T($tmp933);
frost$core$String** $tmp935 = &((org$frostlang$frostc$ClassDecl*) $tmp934)->name;
frost$core$String* $tmp936 = *$tmp935;
frost$core$Bit $tmp937 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp936, &$s938);
bool $tmp939 = $tmp937.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp934);
// unreffing REF($339:frost.core.Weak.T)
if ($tmp939) goto block27; else goto block28;
block27:;
// line 470
org$frostlang$frostc$MethodDecl* $tmp940 = *(&local3);
frost$core$String** $tmp941 = &((org$frostlang$frostc$Symbol*) $tmp940)->name;
frost$core$String* $tmp942 = *$tmp941;
frost$core$Bit $tmp943 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp942, &$s944);
bool $tmp945 = $tmp943.value;
if ($tmp945) goto block29; else goto block30;
block29:;
// line 471
org$frostlang$frostc$IR$Value* $tmp946 = org$frostlang$frostc$expression$And$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
// unreffing REF($358:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$MethodDecl* $tmp947 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
// unreffing m
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp948 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp949 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp946;
block30:;
// line 473
org$frostlang$frostc$MethodDecl* $tmp950 = *(&local3);
frost$core$String** $tmp951 = &((org$frostlang$frostc$Symbol*) $tmp950)->name;
frost$core$String* $tmp952 = *$tmp951;
frost$core$Bit $tmp953 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp952, &$s954);
bool $tmp955 = $tmp953.value;
if ($tmp955) goto block31; else goto block32;
block31:;
// line 474
org$frostlang$frostc$IR$Value* $tmp956 = org$frostlang$frostc$expression$Or$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
// unreffing REF($389:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$MethodDecl* $tmp957 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// unreffing m
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp958 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp959 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp956;
block32:;
goto block28;
block28:;
// line 477
frost$collections$CollectionView* $tmp960 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param2);
frost$core$Bit $tmp961 = frost$core$Bit$init$builtin_bit($tmp960 != NULL);
bool $tmp962 = $tmp961.value;
if ($tmp962) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp963 = (frost$core$Int64) {477};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s964, $tmp963, &$s965);
abort(); // unreachable
block33:;
org$frostlang$frostc$MethodDecl* $tmp966 = *(&local3);
frost$core$Weak** $tmp967 = &$tmp966->owner;
frost$core$Weak* $tmp968 = *$tmp967;
frost$core$Object* $tmp969 = frost$core$Weak$get$R$frost$core$Weak$T($tmp968);
org$frostlang$frostc$Type* $tmp970 = org$frostlang$frostc$Compiler$findType$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp960, ((org$frostlang$frostc$ClassDecl*) $tmp969));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
org$frostlang$frostc$Type* $tmp971 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
*(&local4) = $tmp970;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
// unreffing REF($428:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q($tmp969);
// unreffing REF($426:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
// unreffing REF($413:frost.collections.CollectionView<org.frostlang.frostc.Type>?)
// line 478
org$frostlang$frostc$Type* $tmp972 = *(&local4);
frost$core$Bit $tmp973 = frost$core$Bit$init$builtin_bit($tmp972 != NULL);
bool $tmp974 = $tmp973.value;
if ($tmp974) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp975 = (frost$core$Int64) {478};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s976, $tmp975);
abort(); // unreachable
block35:;
// line 479
org$frostlang$frostc$Compiler$TypeContext* $tmp977 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp978 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp979 = *(&local4);
frost$core$Bit $tmp980 = frost$core$Bit$init$builtin_bit($tmp979 != NULL);
bool $tmp981 = $tmp980.value;
if ($tmp981) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp982 = (frost$core$Int64) {479};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s983, $tmp982, &$s984);
abort(); // unreachable
block37:;
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp977, $tmp978, $tmp979);
org$frostlang$frostc$IR$Value* $tmp985 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp977);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
org$frostlang$frostc$IR$Value* $tmp986 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
*(&local5) = $tmp985;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
// unreffing REF($467:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
// unreffing REF($455:org.frostlang.frostc.Compiler.TypeContext)
// line 480
org$frostlang$frostc$IR$Value* $tmp987 = *(&local5);
frost$core$Bit $tmp988 = frost$core$Bit$init$builtin_bit($tmp987 == NULL);
bool $tmp989 = $tmp988.value;
if ($tmp989) goto block39; else goto block40;
block39:;
// line 481
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp990 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
// unreffing target
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp991 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
// unreffing found
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp992 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
// unreffing m
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp993 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp994 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block40:;
// line 483
org$frostlang$frostc$IR$Value* $tmp995 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp996 = (frost$core$Int64) {9};
org$frostlang$frostc$IR$Value* $tmp997 = *(&local5);
org$frostlang$frostc$MethodDecl* $tmp998 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl($tmp995, $tmp996, $tmp997, $tmp998);
frost$collections$Array* $tmp999 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1000 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp999, $tmp1000);
frost$collections$Array$add$frost$collections$Array$T($tmp999, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp1001 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp995, ((frost$collections$ListView*) $tmp999), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
// unreffing REF($530:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
// unreffing REF($522:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
// unreffing REF($517:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$IR$Value* $tmp1002 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
// unreffing target
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1003 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
// unreffing found
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1004 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
// unreffing m
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1005 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1006 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1001;
block12:;
// line 486
org$frostlang$frostc$Compiler$TypeContext* $tmp1007 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1008 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1007, $tmp1008);
org$frostlang$frostc$IR$Value* $tmp1009 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp1007);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
org$frostlang$frostc$IR$Value* $tmp1010 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
*(&local6) = $tmp1009;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
// unreffing REF($572:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
// unreffing REF($569:org.frostlang.frostc.Compiler.TypeContext)
// line 487
org$frostlang$frostc$IR$Value* $tmp1011 = *(&local6);
frost$core$Bit $tmp1012 = frost$core$Bit$init$builtin_bit($tmp1011 == NULL);
bool $tmp1013 = $tmp1012.value;
if ($tmp1013) goto block41; else goto block42;
block41:;
// line 488
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1014 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
// unreffing compiledLeft
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1015 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1016 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block42:;
// line 490
org$frostlang$frostc$Compiler$TypeContext* $tmp1017 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1018 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp1019 = *(&local6);
frost$core$Bit $tmp1020 = frost$core$Bit$init$builtin_bit($tmp1019 != NULL);
bool $tmp1021 = $tmp1020.value;
if ($tmp1021) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp1022 = (frost$core$Int64) {491};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1023, $tmp1022, &$s1024);
abort(); // unreachable
block43:;
$fn1026 $tmp1025 = ($fn1026) $tmp1019->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1027 = $tmp1025($tmp1019);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1017, $tmp1018, $tmp1027);
org$frostlang$frostc$IR$Value* $tmp1028 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1017);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
org$frostlang$frostc$IR$Value* $tmp1029 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
*(&local7) = $tmp1028;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
// unreffing REF($626:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
// unreffing REF($624:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
// unreffing REF($612:org.frostlang.frostc.Compiler.TypeContext)
// line 492
org$frostlang$frostc$IR$Value* $tmp1030 = *(&local7);
frost$core$Bit $tmp1031 = frost$core$Bit$init$builtin_bit($tmp1030 == NULL);
bool $tmp1032 = $tmp1031.value;
if ($tmp1032) goto block45; else goto block46;
block45:;
// line 493
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1033 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
// unreffing compiledRight
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1034 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
// unreffing compiledLeft
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1035 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1036 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block46:;
// line 495
org$frostlang$frostc$IR$Value* $tmp1037 = *(&local6);
frost$core$Bit $tmp1038 = frost$core$Bit$init$builtin_bit($tmp1037 != NULL);
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp1040 = (frost$core$Int64) {495};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1041, $tmp1040, &$s1042);
abort(); // unreachable
block49:;
$fn1044 $tmp1043 = ($fn1044) $tmp1037->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1045 = $tmp1043($tmp1037);
org$frostlang$frostc$Type* $tmp1046 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1047 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1045, $tmp1046);
bool $tmp1048 = $tmp1047.value;
if ($tmp1048) goto block51; else goto block52;
block51:;
*(&local8) = $tmp1047;
goto block53;
block52:;
org$frostlang$frostc$IR$Value* $tmp1049 = *(&local6);
frost$core$Bit $tmp1050 = frost$core$Bit$init$builtin_bit($tmp1049 != NULL);
bool $tmp1051 = $tmp1050.value;
if ($tmp1051) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp1052 = (frost$core$Int64) {496};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1053, $tmp1052, &$s1054);
abort(); // unreachable
block54:;
$fn1056 $tmp1055 = ($fn1056) $tmp1049->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1057 = $tmp1055($tmp1049);
frost$core$Bit $tmp1058 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp1057);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
// unreffing REF($701:org.frostlang.frostc.Type)
*(&local8) = $tmp1058;
goto block53;
block53:;
frost$core$Bit $tmp1059 = *(&local8);
bool $tmp1060 = $tmp1059.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
// unreffing REF($685:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
// unreffing REF($684:org.frostlang.frostc.Type)
if ($tmp1060) goto block47; else goto block48;
block47:;
// line 497
org$frostlang$frostc$ASTNode* $tmp1061 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1062 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp1061, $tmp1062, param1, param2, param3, param4);
org$frostlang$frostc$Type* $tmp1063 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp1061);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
org$frostlang$frostc$Type* $tmp1064 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
*(&local9) = $tmp1063;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
// unreffing REF($721:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
// unreffing REF($718:org.frostlang.frostc.ASTNode)
// line 499
org$frostlang$frostc$Type* $tmp1065 = *(&local9);
frost$core$Bit $tmp1066 = frost$core$Bit$init$builtin_bit($tmp1065 != NULL);
bool $tmp1067 = $tmp1066.value;
if ($tmp1067) goto block56; else goto block57;
block56:;
// line 500
org$frostlang$frostc$IR** $tmp1068 = &param0->ir;
org$frostlang$frostc$IR* $tmp1069 = *$tmp1068;
org$frostlang$frostc$IR$Statement* $tmp1070 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1071 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp1072 = *(&local6);
frost$core$Bit $tmp1073 = frost$core$Bit$init$builtin_bit($tmp1072 != NULL);
bool $tmp1074 = $tmp1073.value;
if ($tmp1074) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp1075 = (frost$core$Int64) {500};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1076, $tmp1075, &$s1077);
abort(); // unreachable
block58:;
org$frostlang$frostc$IR$Value* $tmp1078 = *(&local7);
frost$core$Bit $tmp1079 = frost$core$Bit$init$builtin_bit($tmp1078 != NULL);
bool $tmp1080 = $tmp1079.value;
if ($tmp1080) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp1081 = (frost$core$Int64) {501};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1082, $tmp1081, &$s1083);
abort(); // unreachable
block60:;
org$frostlang$frostc$Type* $tmp1084 = *(&local9);
frost$core$Bit $tmp1085 = frost$core$Bit$init$builtin_bit($tmp1084 != NULL);
bool $tmp1086 = $tmp1085.value;
if ($tmp1086) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp1087 = (frost$core$Int64) {501};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1088, $tmp1087, &$s1089);
abort(); // unreachable
block62:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp1070, $tmp1071, param1, $tmp1072, param3, $tmp1078, $tmp1084);
$fn1091 $tmp1090 = ($fn1091) $tmp1069->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1092 = $tmp1090($tmp1069, $tmp1070);
*(&local10) = $tmp1092;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
// unreffing REF($744:org.frostlang.frostc.IR.Statement)
// line 502
org$frostlang$frostc$IR$Value* $tmp1093 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1094 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1095 = *(&local10);
org$frostlang$frostc$Type* $tmp1096 = *(&local9);
frost$core$Bit $tmp1097 = frost$core$Bit$init$builtin_bit($tmp1096 != NULL);
bool $tmp1098 = $tmp1097.value;
if ($tmp1098) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp1099 = (frost$core$Int64) {502};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1100, $tmp1099, &$s1101);
abort(); // unreachable
block64:;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1093, $tmp1094, $tmp1095, $tmp1096);
org$frostlang$frostc$IR$Value* $tmp1102 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1093, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
// unreffing REF($795:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
// unreffing REF($781:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$Type* $tmp1103 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
// unreffing resultType
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1104 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
// unreffing compiledRight
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1105 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
// unreffing compiledLeft
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1106 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1107 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1102;
block57:;
org$frostlang$frostc$Type* $tmp1108 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
// unreffing resultType
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block48;
block48:;
// line 505
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1109;
$tmp1109 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1109->value = param3;
$fn1111 $tmp1110 = ($fn1111) ((frost$core$Object*) $tmp1109)->$class->vtable[0];
frost$core$String* $tmp1112 = $tmp1110(((frost$core$Object*) $tmp1109));
frost$core$String* $tmp1113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1114, $tmp1112);
frost$core$String* $tmp1115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1113, &$s1116);
org$frostlang$frostc$IR$Value* $tmp1117 = *(&local6);
frost$core$Bit $tmp1118 = frost$core$Bit$init$builtin_bit($tmp1117 != NULL);
bool $tmp1119 = $tmp1118.value;
if ($tmp1119) goto block66; else goto block67;
block67:;
frost$core$Int64 $tmp1120 = (frost$core$Int64) {506};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1121, $tmp1120, &$s1122);
abort(); // unreachable
block66:;
$fn1124 $tmp1123 = ($fn1124) $tmp1117->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1125 = $tmp1123($tmp1117);
frost$core$String* $tmp1126 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1127, ((frost$core$Object*) $tmp1125));
frost$core$String* $tmp1128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1126, &$s1129);
org$frostlang$frostc$IR$Value* $tmp1130 = *(&local7);
frost$core$Bit $tmp1131 = frost$core$Bit$init$builtin_bit($tmp1130 != NULL);
bool $tmp1132 = $tmp1131.value;
if ($tmp1132) goto block68; else goto block69;
block69:;
frost$core$Int64 $tmp1133 = (frost$core$Int64) {506};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1134, $tmp1133, &$s1135);
abort(); // unreachable
block68:;
$fn1137 $tmp1136 = ($fn1137) $tmp1130->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1138 = $tmp1136($tmp1130);
frost$core$String* $tmp1139 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1128, ((frost$core$Object*) $tmp1138));
frost$core$String* $tmp1140 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1139, &$s1141);
frost$core$String* $tmp1142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1115, $tmp1140);
$fn1144 $tmp1143 = ($fn1144) param5->$class->vtable[2];
frost$core$String* $tmp1145 = $tmp1143(param5);
frost$core$String* $tmp1146 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1142, $tmp1145);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
// unreffing REF($873:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
// unreffing REF($872:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
// unreffing REF($870:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
// unreffing REF($869:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
// unreffing REF($868:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
// unreffing REF($866:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
// unreffing REF($855:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
// unreffing REF($854:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
// unreffing REF($852:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
// unreffing REF($841:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
// unreffing REF($840:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
// unreffing REF($839:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
// unreffing REF($837:frost.core.Object)
// line 508
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1147 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
// unreffing compiledRight
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1148 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
// unreffing compiledLeft
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1149 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
// unreffing matches
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1150 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
// unreffing folded
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block5:;
frost$core$Bit $tmp1151 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1152 = $tmp1151.value;
if ($tmp1152) goto block70; else goto block71;
block71:;
frost$core$Int64 $tmp1153 = (frost$core$Int64) {438};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1154, $tmp1153, &$s1155);
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

