#include "org/frostlang/frostc/expression/Closure.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Bit.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/Compiler/Capture.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/io/File.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/MapView.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/FieldDecl/Kind.h"
#include "frost/collections/Key.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "org/frostlang/frostc/Pair.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Scanner.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "frost/collections/HashSet.h"
#include "frost/core/MutableString.h"
#include "frost/threads/MessageQueue.h"
#include "frost/collections/IdentityMap.h"
#include "frost/core/Immutable.h"
#include "org/frostlang/frostc/Compiler/Error.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Map.h"
#include "org/frostlang/frostc/expression/Call.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Closure$class_type org$frostlang$frostc$expression$Closure$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$expression$Closure$cleanup} };

typedef frost$collections$Iterator* (*$fn79)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn83)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn88)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn124)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn170)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn174)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn179)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn330)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn334)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn339)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn432)(frost$core$Object*);
typedef frost$core$Int64 (*$fn473)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn496)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn718)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn741)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn851)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn873)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn877)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn882)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn946)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn950)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn976)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn980)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn985)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1065)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1126)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn1140)(frost$collections$MapView*);
typedef frost$collections$Array* (*$fn1144)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1155)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn1159)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1164)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65", 39, 4048859009194802747, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6e\x6f\x6e\x2d\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x20\x6f\x77\x6e\x65\x72\x20\x66\x6f\x72\x20", 27, -299203061613670049, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65\x2e\x63\x61\x70\x74\x75\x72\x65\x64\x53\x65\x6c\x66\x54\x79\x70\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 156, 2378318348361048543, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65", 9, 1602056911729632975, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s533 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s624 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 134, -8894870968915517948, NULL };
static frost$core$String $s649 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s650 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s665 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s729 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static frost$core$String $s731 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x6c\x61\x6d\x62\x64\x61\x20\x77\x69\x74\x68\x20\x77\x72\x6f\x6e\x67\x20", 31, -8865909723025372911, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 20, 4248843021992149759, NULL };
static frost$core$String $s790 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s847 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s848 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 123, -3024892062547601733, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x65\x72\x72\x6f\x72", 12, -6960542561056411676, NULL };
static frost$core$String $s869 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s870 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 144, 8764710235555727599, NULL };
static frost$core$String $s888 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x77\x68\x65\x6e\x20\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x64\x20\x61\x73\x20\x27", 26, 7783089566661782278, NULL };
static frost$core$String $s890 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a", 2, 14198, NULL };
static frost$core$String $s906 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x72\x65\x63\x65\x69\x76\x65\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 51, 8939304453205542054, NULL };
static frost$core$String $s908 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20", 6, 1410335929809, NULL };
static frost$core$String $s911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x20", 5, 22706926183, NULL };
static frost$core$String $s913 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s915 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s923 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, 1205436084705178767, NULL };
static frost$core$String $s925 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s942 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s943 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 117, -9183381928165602112, NULL };
static frost$core$String $s954 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x74\x79\x70\x65\x20\x77\x61\x73\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x61\x6e\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x63\x6f\x6e\x74\x65\x78\x74", 67, -43704296328153041, NULL };
static frost$core$String $s968 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 10, 3323213258965972710, NULL };
static frost$core$String $s970 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1024 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1025 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1032 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1041 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1042 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1048 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1049 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1068 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static frost$core$String $s1200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s1243 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };

org$frostlang$frostc$Type* org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 26
frost$collections$Stack** $tmp2 = &param0->currentClass;
frost$collections$Stack* $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Object* $tmp5 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp3, $tmp4);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp5)));
org$frostlang$frostc$ClassDecl* $tmp6 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp5);
frost$core$Frost$unref$frost$core$Object$Q($tmp5);
// unreffing REF($5:frost.collections.Stack.T)
// line 27
goto block1;
block1:;
// line 28
org$frostlang$frostc$ClassDecl* $tmp7 = *(&local0);
org$frostlang$frostc$Annotations** $tmp8 = &$tmp7->annotations;
org$frostlang$frostc$Annotations* $tmp9 = *$tmp8;
frost$core$Bit $tmp10 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit($tmp9);
frost$core$Bit $tmp11 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp10);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block3; else goto block4;
block3:;
// line 29
org$frostlang$frostc$ClassDecl* $tmp13 = *(&local0);
org$frostlang$frostc$Type** $tmp14 = &$tmp13->type;
org$frostlang$frostc$Type* $tmp15 = *$tmp14;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
org$frostlang$frostc$ClassDecl* $tmp16 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// unreffing cl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp15;
block4:;
// line 31
org$frostlang$frostc$ClassDecl* $tmp17 = *(&local0);
frost$core$Weak** $tmp18 = &$tmp17->owner;
frost$core$Weak* $tmp19 = *$tmp18;
frost$core$Object* $tmp20 = frost$core$Weak$get$R$frost$core$Weak$T($tmp19);
frost$core$Bit $tmp21 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$ClassDecl*) $tmp20) != NULL);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp23 = (frost$core$Int64) {31};
frost$collections$Stack** $tmp24 = &param0->currentClass;
frost$collections$Stack* $tmp25 = *$tmp24;
frost$core$Int64 $tmp26 = (frost$core$Int64) {0};
frost$core$Object* $tmp27 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp25, $tmp26);
frost$core$String** $tmp28 = &((org$frostlang$frostc$ClassDecl*) $tmp27)->name;
frost$core$String* $tmp29 = *$tmp28;
frost$core$String* $tmp30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s31, $tmp29);
frost$core$String* $tmp32 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp30, &$s33);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s34, $tmp23, $tmp32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// unreffing REF($60:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// unreffing REF($59:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp27);
// unreffing REF($55:frost.collections.Stack.T)
abort(); // unreachable
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp20);
// unreffing REF($44:frost.core.Weak.T)
// line 32
org$frostlang$frostc$ClassDecl* $tmp35 = *(&local0);
frost$core$Weak** $tmp36 = &$tmp35->owner;
frost$core$Weak* $tmp37 = *$tmp36;
frost$core$Object* $tmp38 = frost$core$Weak$get$R$frost$core$Weak$T($tmp37);
frost$core$Bit $tmp39 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$ClassDecl*) $tmp38) != NULL);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp41 = (frost$core$Int64) {32};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s42, $tmp41, &$s43);
abort(); // unreachable
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp38)));
org$frostlang$frostc$ClassDecl* $tmp44 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp38);
frost$core$Frost$unref$frost$core$Object$Q($tmp38);
// unreffing REF($80:frost.core.Weak.T)
goto block1;
block2:;
frost$core$Bit $tmp45 = frost$core$Bit$init$builtin_bit(false);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp47 = (frost$core$Int64) {25};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s48, $tmp47, &$s49);
abort(); // unreachable
block9:;
abort(); // unreachable

}
org$frostlang$frostc$ClassDecl* org$frostlang$frostc$expression$Closure$createClosureClass$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlang$frostc$Compiler$Capture$GT$R$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodDecl* param1, frost$collections$CollectionView* param2) {

org$frostlang$frostc$Position local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$Compiler$Capture* local2 = NULL;
org$frostlang$frostc$Variable* local3 = NULL;
org$frostlang$frostc$ClassDecl* local4 = NULL;
frost$collections$Array* local5 = NULL;
frost$collections$Array* local6 = NULL;
org$frostlang$frostc$Compiler$Capture* local7 = NULL;
org$frostlang$frostc$Variable* local8 = NULL;
org$frostlang$frostc$FieldDecl* local9 = NULL;
org$frostlang$frostc$MethodDecl* local10 = NULL;
org$frostlang$frostc$MethodDecl* local11 = NULL;
org$frostlang$frostc$Compiler$Capture* local12 = NULL;
org$frostlang$frostc$Variable* local13 = NULL;
org$frostlang$frostc$FieldDecl* local14 = NULL;
org$frostlang$frostc$FieldDecl* local15 = NULL;
org$frostlang$frostc$FieldDecl* local16 = NULL;
org$frostlang$frostc$FieldDecl* local17 = NULL;
// line 39
org$frostlang$frostc$Position* $tmp50 = &((org$frostlang$frostc$Symbol*) param1)->position;
org$frostlang$frostc$Position $tmp51 = *$tmp50;
*(&local0) = $tmp51;
// line 40
org$frostlang$frostc$Annotations* $tmp52 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp53 = (frost$core$Int64) {0};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp52, $tmp53);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
org$frostlang$frostc$Annotations** $tmp54 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp55 = *$tmp54;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
org$frostlang$frostc$Annotations** $tmp56 = &param1->annotations;
*$tmp56 = $tmp52;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// unreffing REF($6:org.frostlang.frostc.Annotations)
// line 41
frost$core$Int64* $tmp57 = &param0->closureCount;
frost$core$Int64 $tmp58 = *$tmp57;
frost$core$Int64 $tmp59 = (frost$core$Int64) {1};
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60 + $tmp61;
frost$core$Int64 $tmp63 = (frost$core$Int64) {$tmp62};
frost$core$Int64* $tmp64 = &param0->closureCount;
*$tmp64 = $tmp63;
// line 42
frost$collections$Array* $tmp65 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp65);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$collections$Array* $tmp66 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local1) = $tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing REF($31:frost.collections.Array<org.frostlang.frostc.Type>)
// line 43
frost$collections$Stack** $tmp67 = &param0->currentClass;
frost$collections$Stack* $tmp68 = *$tmp67;
frost$core$Int64 $tmp69 = (frost$core$Int64) {0};
frost$core$Object* $tmp70 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp68, $tmp69);
org$frostlang$frostc$Type** $tmp71 = &((org$frostlang$frostc$ClassDecl*) $tmp70)->type;
org$frostlang$frostc$Type* $tmp72 = *$tmp71;
frost$core$Bit $tmp73 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp72);
bool $tmp74 = $tmp73.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp70);
// unreffing REF($49:frost.collections.Stack.T)
if ($tmp74) goto block1; else goto block2;
block1:;
// line 44
frost$collections$Array* $tmp75 = *(&local1);
org$frostlang$frostc$Type* $tmp76 = org$frostlang$frostc$Type$Immutable$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp75, ((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing REF($62:org.frostlang.frostc.Type)
// line 45
ITable* $tmp77 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp77->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp77 = $tmp77->next;
}
$fn79 $tmp78 = $tmp77->methods[0];
frost$collections$Iterator* $tmp80 = $tmp78(((frost$collections$Iterable*) param2));
goto block3;
block3:;
ITable* $tmp81 = $tmp80->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[0];
frost$core$Bit $tmp84 = $tmp82($tmp80);
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block5; else goto block4;
block4:;
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp86 = $tmp80->$class->itable;
while ($tmp86->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp86 = $tmp86->next;
}
$fn88 $tmp87 = $tmp86->methods[1];
frost$core$Object* $tmp89 = $tmp87($tmp80);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp89)));
org$frostlang$frostc$Compiler$Capture* $tmp90 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) $tmp89);
// line 46
org$frostlang$frostc$Compiler$Capture* $tmp91 = *(&local2);
frost$core$Int64* $tmp92 = &$tmp91->$rawValue;
frost$core$Int64 $tmp93 = *$tmp92;
frost$core$Int64 $tmp94 = (frost$core$Int64) {0};
frost$core$Bit $tmp95 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp93, $tmp94);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Variable** $tmp97 = (org$frostlang$frostc$Variable**) ($tmp91->$data + 0);
org$frostlang$frostc$Variable* $tmp98 = *$tmp97;
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
org$frostlang$frostc$Variable* $tmp99 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local3) = $tmp98;
// line 48
org$frostlang$frostc$Variable* $tmp100 = *(&local3);
org$frostlang$frostc$Type** $tmp101 = &$tmp100->type;
org$frostlang$frostc$Type* $tmp102 = *$tmp101;
frost$core$Bit $tmp103 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp102);
frost$core$Bit $tmp104 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block9; else goto block10;
block9:;
// line 49
frost$collections$Array* $tmp106 = *(&local1);
frost$collections$Array$clear($tmp106);
// line 50
org$frostlang$frostc$Variable* $tmp107 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// unreffing v
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp89);
// unreffing REF($83:frost.collections.Iterator.T)
org$frostlang$frostc$Compiler$Capture* $tmp108 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing c
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block5;
block10:;
org$frostlang$frostc$Variable* $tmp109 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
// unreffing v
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
goto block6;
block8:;
frost$core$Int64 $tmp110 = (frost$core$Int64) {2};
frost$core$Bit $tmp111 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp93, $tmp110);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block11; else goto block12;
block11:;
// line 54
org$frostlang$frostc$Type* $tmp113 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
frost$core$Bit $tmp114 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp113);
frost$core$Bit $tmp115 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp114);
bool $tmp116 = $tmp115.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// unreffing REF($146:org.frostlang.frostc.Type)
if ($tmp116) goto block13; else goto block14;
block13:;
// line 55
frost$collections$Array* $tmp117 = *(&local1);
frost$collections$Array$clear($tmp117);
// line 56
frost$core$Frost$unref$frost$core$Object$Q($tmp89);
// unreffing REF($83:frost.collections.Iterator.T)
org$frostlang$frostc$Compiler$Capture* $tmp118 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
// unreffing c
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block5;
block14:;
goto block6;
block12:;
// line 60
frost$core$Bit $tmp119 = frost$core$Bit$init$builtin_bit(false);
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp121 = (frost$core$Int64) {60};
org$frostlang$frostc$Compiler$Capture* $tmp122 = *(&local2);
$fn124 $tmp123 = ($fn124) ((frost$core$Object*) $tmp122)->$class->vtable[0];
frost$core$String* $tmp125 = $tmp123(((frost$core$Object*) $tmp122));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s126, $tmp121, $tmp125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// unreffing REF($177:frost.core.String)
abort(); // unreachable
block15:;
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp89);
// unreffing REF($83:frost.collections.Iterator.T)
org$frostlang$frostc$Compiler$Capture* $tmp127 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// unreffing c
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
// unreffing REF($72:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block2;
block2:;
// line 65
org$frostlang$frostc$ClassDecl* $tmp128 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$collections$Stack** $tmp129 = &param0->currentClass;
frost$collections$Stack* $tmp130 = *$tmp129;
frost$core$Int64 $tmp131 = (frost$core$Int64) {0};
frost$core$Object* $tmp132 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp130, $tmp131);
frost$io$File** $tmp133 = &((org$frostlang$frostc$ClassDecl*) $tmp132)->source;
frost$io$File* $tmp134 = *$tmp133;
org$frostlang$frostc$Position $tmp135 = *(&local0);
frost$collections$HashMap* $tmp136 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp136);
org$frostlang$frostc$Annotations* $tmp137 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp138 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp137, $tmp138);
frost$core$Int64 $tmp139 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp140 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp139);
frost$collections$Stack** $tmp141 = &param0->currentClass;
frost$collections$Stack* $tmp142 = *$tmp141;
frost$core$Int64 $tmp143 = (frost$core$Int64) {0};
frost$core$Object* $tmp144 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp142, $tmp143);
frost$core$String** $tmp145 = &((org$frostlang$frostc$ClassDecl*) $tmp144)->name;
frost$core$String* $tmp146 = *$tmp145;
frost$core$String* $tmp147 = frost$core$String$convert$R$frost$core$String($tmp146);
frost$core$String* $tmp148 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp147, &$s149);
frost$core$Int64* $tmp150 = &param0->closureCount;
frost$core$Int64 $tmp151 = *$tmp150;
frost$core$Int64$wrapper* $tmp152;
$tmp152 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp152->value = $tmp151;
frost$core$String* $tmp153 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp148, ((frost$core$Object*) $tmp152));
frost$core$String* $tmp154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp153, &$s155);
frost$collections$Array* $tmp156 = *(&local1);
frost$collections$Array* $tmp157 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp157);
org$frostlang$frostc$SymbolTable** $tmp158 = &param0->root;
org$frostlang$frostc$SymbolTable* $tmp159 = *$tmp158;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp128, $tmp134, $tmp135, ((frost$collections$MapView*) $tmp136), ((frost$core$String*) NULL), $tmp137, $tmp140, $tmp154, ((frost$collections$ListView*) $tmp156), $tmp157, $tmp159);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
org$frostlang$frostc$ClassDecl* $tmp160 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
*(&local4) = $tmp128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// unreffing REF($234:frost.collections.Array<org.frostlang.frostc.ClassDecl.GenericParameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
// unreffing REF($231:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing REF($230:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// unreffing REF($229:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// unreffing REF($226:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// unreffing REF($225:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp144);
// unreffing REF($221:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
// unreffing REF($212:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// unreffing REF($208:frost.collections.HashMap<frost.core.String, frost.core.String>)
frost$core$Frost$unref$frost$core$Object$Q($tmp132);
// unreffing REF($203:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing REF($198:org.frostlang.frostc.ClassDecl)
// line 69
org$frostlang$frostc$ClassDecl* $tmp161 = *(&local4);
frost$core$Bit $tmp162 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp163 = &$tmp161->external;
*$tmp163 = $tmp162;
// line 72
frost$collections$Array* $tmp164 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp164);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$collections$Array* $tmp165 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
*(&local5) = $tmp164;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
// unreffing REF($286:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 73
frost$collections$Array* $tmp166 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp166);
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
frost$collections$Array* $tmp167 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local6) = $tmp166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
// unreffing REF($300:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
// line 74
ITable* $tmp168 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[0];
frost$collections$Iterator* $tmp171 = $tmp169(((frost$collections$Iterable*) param2));
goto block17;
block17:;
ITable* $tmp172 = $tmp171->$class->itable;
while ($tmp172->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp172 = $tmp172->next;
}
$fn174 $tmp173 = $tmp172->methods[0];
frost$core$Bit $tmp175 = $tmp173($tmp171);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block19; else goto block18;
block18:;
*(&local7) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp177 = $tmp171->$class->itable;
while ($tmp177->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp177 = $tmp177->next;
}
$fn179 $tmp178 = $tmp177->methods[1];
frost$core$Object* $tmp180 = $tmp178($tmp171);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp180)));
org$frostlang$frostc$Compiler$Capture* $tmp181 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local7) = ((org$frostlang$frostc$Compiler$Capture*) $tmp180);
// line 75
org$frostlang$frostc$Compiler$Capture* $tmp182 = *(&local7);
frost$core$Int64* $tmp183 = &$tmp182->$rawValue;
frost$core$Int64 $tmp184 = *$tmp183;
frost$core$Int64 $tmp185 = (frost$core$Int64) {0};
frost$core$Bit $tmp186 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp184, $tmp185);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block21; else goto block22;
block21:;
org$frostlang$frostc$Variable** $tmp188 = (org$frostlang$frostc$Variable**) ($tmp182->$data + 0);
org$frostlang$frostc$Variable* $tmp189 = *$tmp188;
*(&local8) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
org$frostlang$frostc$Variable* $tmp190 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local8) = $tmp189;
// line 77
frost$collections$Array* $tmp191 = *(&local6);
org$frostlang$frostc$MethodDecl$Parameter* $tmp192 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$Variable* $tmp193 = *(&local8);
frost$core$String** $tmp194 = &((org$frostlang$frostc$Symbol*) $tmp193)->name;
frost$core$String* $tmp195 = *$tmp194;
org$frostlang$frostc$Variable* $tmp196 = *(&local8);
org$frostlang$frostc$Type** $tmp197 = &$tmp196->type;
org$frostlang$frostc$Type* $tmp198 = *$tmp197;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp192, $tmp195, $tmp198);
frost$collections$Array$add$frost$collections$Array$T($tmp191, ((frost$core$Object*) $tmp192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
// unreffing REF($356:org.frostlang.frostc.MethodDecl.Parameter)
// line 79
frost$collections$Array* $tmp199 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp200 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp201 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp202 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp203 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp204 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp205 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp206 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp207 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp208 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp206, $tmp207, $tmp208, &$s209);
org$frostlang$frostc$Variable* $tmp210 = *(&local8);
frost$core$String** $tmp211 = &((org$frostlang$frostc$Symbol*) $tmp210)->name;
frost$core$String* $tmp212 = *$tmp211;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp203, $tmp204, $tmp205, $tmp206, $tmp212);
frost$core$Int64 $tmp213 = (frost$core$Int64) {74};
org$frostlang$frostc$parser$Token$Kind $tmp214 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp213);
org$frostlang$frostc$ASTNode* $tmp215 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp216 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp217 = *(&local0);
org$frostlang$frostc$Variable* $tmp218 = *(&local8);
frost$core$String** $tmp219 = &((org$frostlang$frostc$Symbol*) $tmp218)->name;
frost$core$String* $tmp220 = *$tmp219;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp215, $tmp216, $tmp217, $tmp220);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode($tmp200, $tmp201, $tmp202, $tmp203, $tmp214, $tmp215);
frost$collections$Array$add$frost$collections$Array$T($tmp199, ((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
// unreffing REF($390:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing REF($379:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
// unreffing REF($376:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
// unreffing REF($373:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$Variable* $tmp221 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// unreffing v
*(&local8) = ((org$frostlang$frostc$Variable*) NULL);
goto block20;
block22:;
frost$core$Int64 $tmp222 = (frost$core$Int64) {1};
frost$core$Bit $tmp223 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp184, $tmp222);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block23; else goto block24;
block23:;
org$frostlang$frostc$FieldDecl** $tmp225 = (org$frostlang$frostc$FieldDecl**) ($tmp182->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp226 = *$tmp225;
*(&local9) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
org$frostlang$frostc$FieldDecl* $tmp227 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local9) = $tmp226;
// line 85
frost$collections$Array* $tmp228 = *(&local6);
org$frostlang$frostc$MethodDecl$Parameter* $tmp229 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$FieldDecl* $tmp230 = *(&local9);
frost$core$String** $tmp231 = &((org$frostlang$frostc$Symbol*) $tmp230)->name;
frost$core$String* $tmp232 = *$tmp231;
org$frostlang$frostc$FieldDecl* $tmp233 = *(&local9);
org$frostlang$frostc$Type** $tmp234 = &$tmp233->type;
org$frostlang$frostc$Type* $tmp235 = *$tmp234;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp229, $tmp232, $tmp235);
frost$collections$Array$add$frost$collections$Array$T($tmp228, ((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
// unreffing REF($435:org.frostlang.frostc.MethodDecl.Parameter)
// line 87
frost$collections$Array* $tmp236 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp237 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp238 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp239 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp240 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp241 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp242 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp243 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp244 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp245 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp243, $tmp244, $tmp245, &$s246);
org$frostlang$frostc$FieldDecl* $tmp247 = *(&local9);
frost$core$String** $tmp248 = &((org$frostlang$frostc$Symbol*) $tmp247)->name;
frost$core$String* $tmp249 = *$tmp248;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp240, $tmp241, $tmp242, $tmp243, $tmp249);
frost$core$Int64 $tmp250 = (frost$core$Int64) {74};
org$frostlang$frostc$parser$Token$Kind $tmp251 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp250);
org$frostlang$frostc$ASTNode* $tmp252 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp253 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp254 = *(&local0);
org$frostlang$frostc$FieldDecl* $tmp255 = *(&local9);
frost$core$String** $tmp256 = &((org$frostlang$frostc$Symbol*) $tmp255)->name;
frost$core$String* $tmp257 = *$tmp256;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp252, $tmp253, $tmp254, $tmp257);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode($tmp237, $tmp238, $tmp239, $tmp240, $tmp251, $tmp252);
frost$collections$Array$add$frost$collections$Array$T($tmp236, ((frost$core$Object*) $tmp237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing REF($469:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// unreffing REF($458:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing REF($455:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing REF($452:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$FieldDecl* $tmp258 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing f
*(&local9) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block20;
block24:;
frost$core$Int64 $tmp259 = (frost$core$Int64) {2};
frost$core$Bit $tmp260 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp184, $tmp259);
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block25; else goto block20;
block25:;
// line 93
frost$collections$Array* $tmp262 = *(&local6);
org$frostlang$frostc$MethodDecl$Parameter* $tmp263 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$Type* $tmp264 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp263, &$s265, $tmp264);
frost$collections$Array$add$frost$collections$Array$T($tmp262, ((frost$core$Object*) $tmp263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// unreffing REF($506:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// unreffing REF($505:org.frostlang.frostc.MethodDecl.Parameter)
// line 96
frost$collections$Array* $tmp266 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp267 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp268 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp269 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp270 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp271 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp272 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp273 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp274 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp275 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp273, $tmp274, $tmp275, &$s276);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp270, $tmp271, $tmp272, $tmp273, &$s277);
frost$core$Int64 $tmp278 = (frost$core$Int64) {74};
org$frostlang$frostc$parser$Token$Kind $tmp279 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp278);
org$frostlang$frostc$ASTNode* $tmp280 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp281 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp282 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp280, $tmp281, $tmp282, &$s283);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode($tmp267, $tmp268, $tmp269, $tmp270, $tmp279, $tmp280);
frost$collections$Array$add$frost$collections$Array$T($tmp266, ((frost$core$Object*) $tmp267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// unreffing REF($532:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// unreffing REF($525:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// unreffing REF($522:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// unreffing REF($519:org.frostlang.frostc.ASTNode)
goto block20;
block20:;
frost$core$Frost$unref$frost$core$Object$Q($tmp180);
// unreffing REF($328:frost.collections.Iterator.T)
org$frostlang$frostc$Compiler$Capture* $tmp284 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
// unreffing c
*(&local7) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
// unreffing REF($317:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 104
org$frostlang$frostc$MethodDecl* $tmp285 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp286 = *(&local4);
org$frostlang$frostc$Position $tmp287 = *(&local0);
org$frostlang$frostc$Annotations* $tmp288 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp289 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp288, $tmp289);
frost$core$Int64 $tmp290 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp291 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp290);
frost$collections$Array* $tmp292 = *(&local6);
org$frostlang$frostc$Type* $tmp293 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$collections$Array* $tmp294 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp295 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp294);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp285, $tmp286, $tmp287, ((frost$core$String*) NULL), $tmp288, $tmp291, &$s296, ((frost$collections$Array*) NULL), $tmp292, $tmp293, $tmp295);
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
org$frostlang$frostc$MethodDecl* $tmp297 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local10) = $tmp285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// unreffing REF($577:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// unreffing REF($574:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// unreffing REF($568:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// unreffing REF($565:org.frostlang.frostc.MethodDecl)
// line 108
org$frostlang$frostc$ClassDecl* $tmp298 = *(&local4);
frost$collections$Array** $tmp299 = &$tmp298->methods;
frost$collections$Array* $tmp300 = *$tmp299;
org$frostlang$frostc$MethodDecl* $tmp301 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp300, ((frost$core$Object*) $tmp301));
// line 109
org$frostlang$frostc$ClassDecl* $tmp302 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp303 = &$tmp302->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp304 = *$tmp303;
org$frostlang$frostc$MethodDecl* $tmp305 = *(&local10);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp304, ((org$frostlang$frostc$Symbol*) $tmp305));
// line 112
org$frostlang$frostc$MethodDecl* $tmp306 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp307 = *(&local4);
org$frostlang$frostc$Position $tmp308 = *(&local0);
org$frostlang$frostc$Annotations* $tmp309 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp310 = (frost$core$Int64) {32};
frost$core$Int64 $tmp311 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp312 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp310, $tmp311);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp309, $tmp312);
frost$core$Int64 $tmp313 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp314 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp313);
frost$collections$Array* $tmp315 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp315);
org$frostlang$frostc$Type* $tmp316 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp317 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp317);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp306, $tmp307, $tmp308, ((frost$core$String*) NULL), $tmp309, $tmp314, &$s318, ((frost$collections$Array*) NULL), $tmp315, $tmp316, $tmp317);
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
org$frostlang$frostc$MethodDecl* $tmp319 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local11) = $tmp306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
// unreffing REF($630:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
// unreffing REF($629:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
// unreffing REF($626:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// unreffing REF($619:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
// unreffing REF($616:org.frostlang.frostc.MethodDecl)
// line 116
org$frostlang$frostc$ClassDecl* $tmp320 = *(&local4);
frost$collections$Array** $tmp321 = &$tmp320->methods;
frost$collections$Array* $tmp322 = *$tmp321;
org$frostlang$frostc$MethodDecl* $tmp323 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp322, ((frost$core$Object*) $tmp323));
// line 117
org$frostlang$frostc$ClassDecl* $tmp324 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp325 = &$tmp324->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp326 = *$tmp325;
org$frostlang$frostc$MethodDecl* $tmp327 = *(&local11);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp326, ((org$frostlang$frostc$Symbol*) $tmp327));
// line 120
ITable* $tmp328 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp328->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp328 = $tmp328->next;
}
$fn330 $tmp329 = $tmp328->methods[0];
frost$collections$Iterator* $tmp331 = $tmp329(((frost$collections$Iterable*) param2));
goto block26;
block26:;
ITable* $tmp332 = $tmp331->$class->itable;
while ($tmp332->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp332 = $tmp332->next;
}
$fn334 $tmp333 = $tmp332->methods[0];
frost$core$Bit $tmp335 = $tmp333($tmp331);
bool $tmp336 = $tmp335.value;
if ($tmp336) goto block28; else goto block27;
block27:;
*(&local12) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp337 = $tmp331->$class->itable;
while ($tmp337->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp337 = $tmp337->next;
}
$fn339 $tmp338 = $tmp337->methods[1];
frost$core$Object* $tmp340 = $tmp338($tmp331);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp340)));
org$frostlang$frostc$Compiler$Capture* $tmp341 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
*(&local12) = ((org$frostlang$frostc$Compiler$Capture*) $tmp340);
// line 121
org$frostlang$frostc$Compiler$Capture* $tmp342 = *(&local12);
frost$core$Int64* $tmp343 = &$tmp342->$rawValue;
frost$core$Int64 $tmp344 = *$tmp343;
frost$core$Int64 $tmp345 = (frost$core$Int64) {0};
frost$core$Bit $tmp346 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp344, $tmp345);
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Variable** $tmp348 = (org$frostlang$frostc$Variable**) ($tmp342->$data + 0);
org$frostlang$frostc$Variable* $tmp349 = *$tmp348;
*(&local13) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
org$frostlang$frostc$Variable* $tmp350 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
*(&local13) = $tmp349;
// line 123
org$frostlang$frostc$FieldDecl* $tmp351 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp352 = *(&local4);
org$frostlang$frostc$Position $tmp353 = *(&local0);
org$frostlang$frostc$Annotations* $tmp354 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp355 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp354, $tmp355);
frost$core$Int64 $tmp356 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp357 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp356);
org$frostlang$frostc$Variable* $tmp358 = *(&local13);
frost$core$String** $tmp359 = &((org$frostlang$frostc$Symbol*) $tmp358)->name;
frost$core$String* $tmp360 = *$tmp359;
org$frostlang$frostc$Variable* $tmp361 = *(&local13);
org$frostlang$frostc$Type** $tmp362 = &$tmp361->type;
org$frostlang$frostc$Type* $tmp363 = *$tmp362;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp351, $tmp352, $tmp353, ((frost$core$String*) NULL), $tmp354, $tmp357, $tmp360, $tmp363, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
org$frostlang$frostc$FieldDecl* $tmp364 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local14) = $tmp351;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
// unreffing REF($716:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
// unreffing REF($713:org.frostlang.frostc.FieldDecl)
// line 126
org$frostlang$frostc$ClassDecl* $tmp365 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp366 = &$tmp365->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp367 = *$tmp366;
org$frostlang$frostc$FieldDecl* $tmp368 = *(&local14);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp367, ((org$frostlang$frostc$Symbol*) $tmp368));
// line 127
org$frostlang$frostc$ClassDecl* $tmp369 = *(&local4);
frost$collections$Array** $tmp370 = &$tmp369->fields;
frost$collections$Array* $tmp371 = *$tmp370;
org$frostlang$frostc$FieldDecl* $tmp372 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp371, ((frost$core$Object*) $tmp372));
org$frostlang$frostc$FieldDecl* $tmp373 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
// unreffing field
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Variable* $tmp374 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
// unreffing v
*(&local13) = ((org$frostlang$frostc$Variable*) NULL);
goto block29;
block31:;
frost$core$Int64 $tmp375 = (frost$core$Int64) {1};
frost$core$Bit $tmp376 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp344, $tmp375);
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block32; else goto block33;
block32:;
org$frostlang$frostc$FieldDecl** $tmp378 = (org$frostlang$frostc$FieldDecl**) ($tmp342->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp379 = *$tmp378;
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
org$frostlang$frostc$FieldDecl* $tmp380 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local15) = $tmp379;
// line 130
org$frostlang$frostc$FieldDecl* $tmp381 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp382 = *(&local4);
org$frostlang$frostc$Position $tmp383 = *(&local0);
org$frostlang$frostc$Annotations* $tmp384 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp385 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp384, $tmp385);
frost$core$Int64 $tmp386 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp387 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp386);
org$frostlang$frostc$FieldDecl* $tmp388 = *(&local15);
frost$core$String** $tmp389 = &((org$frostlang$frostc$Symbol*) $tmp388)->name;
frost$core$String* $tmp390 = *$tmp389;
org$frostlang$frostc$FieldDecl* $tmp391 = *(&local15);
org$frostlang$frostc$Type** $tmp392 = &$tmp391->type;
org$frostlang$frostc$Type* $tmp393 = *$tmp392;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp381, $tmp382, $tmp383, ((frost$core$String*) NULL), $tmp384, $tmp387, $tmp390, $tmp393, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
org$frostlang$frostc$FieldDecl* $tmp394 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local16) = $tmp381;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
// unreffing REF($785:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
// unreffing REF($782:org.frostlang.frostc.FieldDecl)
// line 133
org$frostlang$frostc$ClassDecl* $tmp395 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp396 = &$tmp395->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp397 = *$tmp396;
org$frostlang$frostc$FieldDecl* $tmp398 = *(&local16);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp397, ((org$frostlang$frostc$Symbol*) $tmp398));
// line 134
org$frostlang$frostc$ClassDecl* $tmp399 = *(&local4);
frost$collections$Array** $tmp400 = &$tmp399->fields;
frost$collections$Array* $tmp401 = *$tmp400;
org$frostlang$frostc$FieldDecl* $tmp402 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp401, ((frost$core$Object*) $tmp402));
org$frostlang$frostc$FieldDecl* $tmp403 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// unreffing field
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp404 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
// unreffing f
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block29;
block33:;
frost$core$Int64 $tmp405 = (frost$core$Int64) {2};
frost$core$Bit $tmp406 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp344, $tmp405);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block34; else goto block35;
block34:;
// line 137
org$frostlang$frostc$FieldDecl* $tmp408 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp409 = *(&local4);
org$frostlang$frostc$Position $tmp410 = *(&local0);
org$frostlang$frostc$Annotations* $tmp411 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp412 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp411, $tmp412);
frost$core$Int64 $tmp413 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp414 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp413);
org$frostlang$frostc$Type* $tmp415 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp408, $tmp409, $tmp410, ((frost$core$String*) NULL), $tmp411, $tmp414, &$s416, $tmp415, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local17) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
org$frostlang$frostc$FieldDecl* $tmp417 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
*(&local17) = $tmp408;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
// unreffing REF($850:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// unreffing REF($845:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
// unreffing REF($842:org.frostlang.frostc.FieldDecl)
// line 140
org$frostlang$frostc$ClassDecl* $tmp418 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp419 = &$tmp418->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp420 = *$tmp419;
org$frostlang$frostc$FieldDecl* $tmp421 = *(&local17);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp420, ((org$frostlang$frostc$Symbol*) $tmp421));
// line 141
org$frostlang$frostc$ClassDecl* $tmp422 = *(&local4);
frost$collections$Array** $tmp423 = &$tmp422->fields;
frost$collections$Array* $tmp424 = *$tmp423;
org$frostlang$frostc$FieldDecl* $tmp425 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp424, ((frost$core$Object*) $tmp425));
org$frostlang$frostc$FieldDecl* $tmp426 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
// unreffing field
*(&local17) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block29;
block35:;
// line 144
frost$core$Bit $tmp427 = frost$core$Bit$init$builtin_bit(false);
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp429 = (frost$core$Int64) {144};
org$frostlang$frostc$Compiler$Capture* $tmp430 = *(&local12);
$fn432 $tmp431 = ($fn432) ((frost$core$Object*) $tmp430)->$class->vtable[0];
frost$core$String* $tmp433 = $tmp431(((frost$core$Object*) $tmp430));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s434, $tmp429, $tmp433);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
// unreffing REF($897:frost.core.String)
abort(); // unreachable
block36:;
goto block29;
block29:;
frost$core$Frost$unref$frost$core$Object$Q($tmp340);
// unreffing REF($687:frost.collections.Iterator.T)
org$frostlang$frostc$Compiler$Capture* $tmp435 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
// unreffing c
*(&local12) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// unreffing REF($676:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 148
org$frostlang$frostc$ClassDecl* $tmp436 = *(&local4);
frost$core$Weak* $tmp437 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp437, ((frost$core$Object*) $tmp436));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Weak** $tmp438 = &param1->owner;
frost$core$Weak* $tmp439 = *$tmp438;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Weak** $tmp440 = &param1->owner;
*$tmp440 = $tmp437;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
// unreffing REF($918:frost.core.Weak<org.frostlang.frostc.ClassDecl>)
// line 149
org$frostlang$frostc$ClassDecl* $tmp441 = *(&local4);
frost$collections$Array** $tmp442 = &$tmp441->methods;
frost$collections$Array* $tmp443 = *$tmp442;
frost$collections$Array$add$frost$collections$Array$T($tmp443, ((frost$core$Object*) param1));
// line 150
frost$collections$HashMap** $tmp444 = &param0->classes;
frost$collections$HashMap* $tmp445 = *$tmp444;
org$frostlang$frostc$ClassDecl* $tmp446 = *(&local4);
frost$core$String** $tmp447 = &$tmp446->name;
frost$core$String* $tmp448 = *$tmp447;
org$frostlang$frostc$ClassDecl* $tmp449 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp445, ((frost$collections$Key*) $tmp448), ((frost$core$Object*) $tmp449));
// line 151
org$frostlang$frostc$ClassDecl* $tmp450 = *(&local4);
frost$collections$Stack** $tmp451 = &param0->currentClass;
frost$collections$Stack* $tmp452 = *$tmp451;
frost$core$Int64 $tmp453 = (frost$core$Int64) {0};
frost$core$Object* $tmp454 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp452, $tmp453);
frost$core$Weak* $tmp455 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp455, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp454)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
frost$core$Weak** $tmp456 = &$tmp450->owner;
frost$core$Weak* $tmp457 = *$tmp456;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$Weak** $tmp458 = &$tmp450->owner;
*$tmp458 = $tmp455;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
// unreffing REF($960:frost.core.Weak<org.frostlang.frostc.ClassDecl?>)
frost$core$Frost$unref$frost$core$Object$Q($tmp454);
// unreffing REF($957:frost.collections.Stack.T)
// line 152
org$frostlang$frostc$ClassDecl* $tmp459 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
org$frostlang$frostc$MethodDecl* $tmp460 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
// unreffing defaultCleanup
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp461 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
// unreffing initMethod
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$collections$Array* $tmp462 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
// unreffing parameters
*(&local6) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp463 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
// unreffing statements
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp464 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
// unreffing result
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp465 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
// unreffing supers
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp459;

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Closure$typedLambdaType$org$frostlang$frostc$Compiler$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Type$Q(org$frostlang$frostc$Compiler* param0, frost$collections$ListView* param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Compiler$AutoScope* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int64 local2;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$Position local4;
frost$core$String* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
org$frostlang$frostc$Type* local7 = NULL;
org$frostlang$frostc$Type* local8 = NULL;
org$frostlang$frostc$Type* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
frost$collections$HashMap* local11 = NULL;
org$frostlang$frostc$Pair* local12 = NULL;
// line 158
org$frostlang$frostc$Compiler$AutoScope* $tmp466 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp466, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
org$frostlang$frostc$Compiler$AutoScope* $tmp467 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local0) = $tmp466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
// unreffing REF($1:org.frostlang.frostc.Compiler.AutoScope)
// line 159
frost$collections$Array* $tmp468 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp468);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
frost$collections$Array* $tmp469 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
*(&local1) = $tmp468;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
// unreffing REF($14:frost.collections.Array<org.frostlang.frostc.Type>)
// line 160
frost$core$Int64 $tmp470 = (frost$core$Int64) {0};
ITable* $tmp471 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp471->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp471 = $tmp471->next;
}
$fn473 $tmp472 = $tmp471->methods[0];
frost$core$Int64 $tmp474 = $tmp472(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp475 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp476 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp470, $tmp474, $tmp475);
frost$core$Int64 $tmp477 = $tmp476.min;
*(&local2) = $tmp477;
frost$core$Int64 $tmp478 = $tmp476.max;
frost$core$Bit $tmp479 = $tmp476.inclusive;
bool $tmp480 = $tmp479.value;
frost$core$Int64 $tmp481 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp482 = frost$core$Int64$convert$R$frost$core$UInt64($tmp481);
if ($tmp480) goto block4; else goto block5;
block4:;
int64_t $tmp483 = $tmp477.value;
int64_t $tmp484 = $tmp478.value;
bool $tmp485 = $tmp483 <= $tmp484;
frost$core$Bit $tmp486 = (frost$core$Bit) {$tmp485};
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block1; else goto block2;
block5:;
int64_t $tmp488 = $tmp477.value;
int64_t $tmp489 = $tmp478.value;
bool $tmp490 = $tmp488 < $tmp489;
frost$core$Bit $tmp491 = (frost$core$Bit) {$tmp490};
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block1; else goto block2;
block1:;
// line 161
frost$core$Int64 $tmp493 = *(&local2);
ITable* $tmp494 = param1->$class->itable;
while ($tmp494->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp494 = $tmp494->next;
}
$fn496 $tmp495 = $tmp494->methods[0];
frost$core$Object* $tmp497 = $tmp495(param1, $tmp493);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp497)));
org$frostlang$frostc$ASTNode* $tmp498 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp497);
frost$core$Frost$unref$frost$core$Object$Q($tmp497);
// unreffing REF($58:frost.collections.ListView.T)
// line 162
org$frostlang$frostc$ASTNode* $tmp499 = *(&local3);
frost$core$Int64* $tmp500 = &$tmp499->$rawValue;
frost$core$Int64 $tmp501 = *$tmp500;
frost$core$Int64 $tmp502 = (frost$core$Int64) {34};
frost$core$Bit $tmp503 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp501, $tmp502);
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block7; else goto block6;
block7:;
org$frostlang$frostc$Position* $tmp505 = (org$frostlang$frostc$Position*) ($tmp499->$data + 0);
org$frostlang$frostc$Position $tmp506 = *$tmp505;
*(&local4) = $tmp506;
frost$core$String** $tmp507 = (frost$core$String**) ($tmp499->$data + 16);
frost$core$String* $tmp508 = *$tmp507;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$core$String* $tmp509 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local5) = $tmp508;
org$frostlang$frostc$ASTNode** $tmp510 = (org$frostlang$frostc$ASTNode**) ($tmp499->$data + 24);
org$frostlang$frostc$ASTNode* $tmp511 = *$tmp510;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
org$frostlang$frostc$ASTNode* $tmp512 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
*(&local6) = $tmp511;
// line 164
org$frostlang$frostc$Scanner** $tmp513 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp514 = *$tmp513;
org$frostlang$frostc$ASTNode* $tmp515 = *(&local6);
org$frostlang$frostc$Type* $tmp516 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp514, $tmp515);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
org$frostlang$frostc$Type* $tmp517 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local7) = $tmp516;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
// unreffing REF($103:org.frostlang.frostc.Type)
// line 165
org$frostlang$frostc$Type* $tmp518 = *(&local7);
frost$core$Bit $tmp519 = frost$core$Bit$init$builtin_bit(false);
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block8; else goto block9;
block8:;
// line 166
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp521 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
// unreffing type
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp522 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
// unreffing rawType
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp523 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp524 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
// unreffing p
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp525 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
// unreffing parameterTypes
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp526 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
// unreffing scope
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block9:;
// line 168
org$frostlang$frostc$Type* $tmp527 = *(&local7);
org$frostlang$frostc$Type* $tmp528 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp527);
frost$core$Bit $tmp529 = frost$core$Bit$init$builtin_bit($tmp528 != NULL);
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp531 = (frost$core$Int64) {168};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s532, $tmp531, &$s533);
abort(); // unreachable
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
org$frostlang$frostc$Type* $tmp534 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
*(&local7) = $tmp528;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
// unreffing REF($155:org.frostlang.frostc.Type?)
// line 169
org$frostlang$frostc$Type* $tmp535 = *(&local7);
frost$core$Bit $tmp536 = frost$core$Bit$init$builtin_bit(false);
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block12; else goto block13;
block12:;
// line 170
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp538 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
// unreffing type
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp539 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
// unreffing rawType
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp540 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp541 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
// unreffing p
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp542 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
// unreffing parameterTypes
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp543 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
// unreffing scope
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block13:;
// line 172
frost$collections$Array* $tmp544 = *(&local1);
org$frostlang$frostc$Type* $tmp545 = *(&local7);
frost$collections$Array$add$frost$collections$Array$T($tmp544, ((frost$core$Object*) $tmp545));
// line 173
org$frostlang$frostc$SymbolTable** $tmp546 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp547 = *$tmp546;
org$frostlang$frostc$Variable* $tmp548 = (org$frostlang$frostc$Variable*) frostObjectAlloc(88, (frost$core$Class*) &org$frostlang$frostc$Variable$class);
org$frostlang$frostc$Position $tmp549 = *(&local4);
frost$core$Int64 $tmp550 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp551 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp550);
frost$core$String* $tmp552 = *(&local5);
org$frostlang$frostc$Type* $tmp553 = *(&local7);
org$frostlang$frostc$Variable$Storage* $tmp554 = (org$frostlang$frostc$Variable$Storage*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Variable$Storage$class);
frost$core$Int64 $tmp555 = (frost$core$Int64) {1};
frost$core$Int64 $tmp556 = (frost$core$Int64) {18446744073709551615};
org$frostlang$frostc$Variable$Storage$init$frost$core$Int64$frost$core$Int64($tmp554, $tmp555, $tmp556);
org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage($tmp548, $tmp549, $tmp551, $tmp552, $tmp553, $tmp554);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp547, ((org$frostlang$frostc$Symbol*) $tmp548));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
// unreffing REF($227:org.frostlang.frostc.Variable.Storage)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// unreffing REF($221:org.frostlang.frostc.Variable)
org$frostlang$frostc$Type* $tmp557 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
// unreffing type
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp558 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
// unreffing rawType
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp559 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
goto block6;
block6:;
org$frostlang$frostc$ASTNode* $tmp560 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
// unreffing p
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp561 = *(&local2);
int64_t $tmp562 = $tmp478.value;
int64_t $tmp563 = $tmp561.value;
int64_t $tmp564 = $tmp562 - $tmp563;
frost$core$Int64 $tmp565 = (frost$core$Int64) {$tmp564};
frost$core$UInt64 $tmp566 = frost$core$Int64$convert$R$frost$core$UInt64($tmp565);
if ($tmp480) goto block15; else goto block16;
block15:;
uint64_t $tmp567 = $tmp566.value;
uint64_t $tmp568 = $tmp482.value;
bool $tmp569 = $tmp567 >= $tmp568;
frost$core$Bit $tmp570 = (frost$core$Bit) {$tmp569};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block14; else goto block2;
block16:;
uint64_t $tmp572 = $tmp566.value;
uint64_t $tmp573 = $tmp482.value;
bool $tmp574 = $tmp572 > $tmp573;
frost$core$Bit $tmp575 = (frost$core$Bit) {$tmp574};
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block14; else goto block2;
block14:;
int64_t $tmp577 = $tmp561.value;
int64_t $tmp578 = $tmp481.value;
int64_t $tmp579 = $tmp577 + $tmp578;
frost$core$Int64 $tmp580 = (frost$core$Int64) {$tmp579};
*(&local2) = $tmp580;
goto block1;
block2:;
// line 178
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 179
frost$core$Int64* $tmp581 = &param3->$rawValue;
frost$core$Int64 $tmp582 = *$tmp581;
frost$core$Int64 $tmp583 = (frost$core$Int64) {3};
frost$core$Bit $tmp584 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp582, $tmp583);
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Type** $tmp586 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp587 = *$tmp586;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
org$frostlang$frostc$Type* $tmp588 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local9) = $tmp587;
// line 181
org$frostlang$frostc$Type* $tmp589 = *(&local9);
org$frostlang$frostc$Type* $tmp590 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp589);
frost$core$Bit $tmp591 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp590);
bool $tmp592 = $tmp591.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
// unreffing REF($307:org.frostlang.frostc.Type)
if ($tmp592) goto block20; else goto block21;
block20:;
// line 182
org$frostlang$frostc$Type* $tmp593 = *(&local9);
org$frostlang$frostc$Type* $tmp594 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp593);
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
org$frostlang$frostc$Type* $tmp595 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
*(&local10) = $tmp594;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
// unreffing REF($316:org.frostlang.frostc.Type)
// line 186
frost$collections$HashMap** $tmp596 = &param0->binaryTypes;
frost$collections$HashMap* $tmp597 = *$tmp596;
*(&local11) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
frost$collections$HashMap* $tmp598 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local11) = $tmp597;
// line 187
frost$collections$HashMap* $tmp599 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp599);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
frost$collections$HashMap** $tmp600 = &param0->binaryTypes;
frost$collections$HashMap* $tmp601 = *$tmp600;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
frost$collections$HashMap** $tmp602 = &param0->binaryTypes;
*$tmp602 = $tmp599;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
// unreffing REF($338:frost.collections.HashMap<org.frostlang.frostc.Compiler.BinaryKey, frost.collections.ListView<org.frostlang.frostc.Type>?>)
// line 188
org$frostlang$frostc$Type* $tmp603 = *(&local10);
org$frostlang$frostc$Pair* $tmp604 = org$frostlang$frostc$Compiler$computeCoercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, param2, $tmp603);
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
org$frostlang$frostc$Pair* $tmp605 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local12) = $tmp604;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
// unreffing REF($354:org.frostlang.frostc.Pair<org.frostlang.frostc.Type, frost.core.Int64>?)
// line 189
frost$collections$HashMap* $tmp606 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
frost$collections$HashMap** $tmp607 = &param0->binaryTypes;
frost$collections$HashMap* $tmp608 = *$tmp607;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$collections$HashMap** $tmp609 = &param0->binaryTypes;
*$tmp609 = $tmp606;
// line 190
org$frostlang$frostc$Pair* $tmp610 = *(&local12);
frost$core$Bit $tmp611 = frost$core$Bit$init$builtin_bit($tmp610 == NULL);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block22; else goto block23;
block22:;
// line 191
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Pair* $tmp613 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// unreffing cost
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp614 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
// unreffing oldBinaryTypes
*(&local11) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp615 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// unreffing target
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp616 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
// unreffing t
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp617 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
// unreffing returnType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp618 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
// unreffing parameterTypes
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp619 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
// unreffing scope
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block23:;
// line 193
org$frostlang$frostc$Pair* $tmp620 = *(&local12);
frost$core$Bit $tmp621 = frost$core$Bit$init$builtin_bit($tmp620 != NULL);
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp623 = (frost$core$Int64) {193};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s624, $tmp623, &$s625);
abort(); // unreachable
block24:;
frost$core$Object** $tmp626 = &$tmp620->first;
frost$core$Object* $tmp627 = *$tmp626;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp627)));
org$frostlang$frostc$Type* $tmp628 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
*(&local8) = ((org$frostlang$frostc$Type*) $tmp627);
org$frostlang$frostc$Pair* $tmp629 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// unreffing cost
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp630 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
// unreffing oldBinaryTypes
*(&local11) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp631 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
// unreffing target
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block21;
block21:;
org$frostlang$frostc$Type* $tmp632 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
// unreffing t
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block17;
block19:;
// line 197
org$frostlang$frostc$Type* $tmp633 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
org$frostlang$frostc$Type* $tmp634 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
*(&local8) = $tmp633;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
// unreffing REF($463:org.frostlang.frostc.Type?)
goto block17;
block17:;
// line 200
org$frostlang$frostc$Type* $tmp635 = *(&local8);
frost$core$Bit $tmp636 = frost$core$Bit$init$builtin_bit($tmp635 == NULL);
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block26; else goto block27;
block26:;
// line 201
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp638 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
// unreffing returnType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp639 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
// unreffing parameterTypes
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp640 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
// unreffing scope
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block27:;
// line 203
org$frostlang$frostc$Position $tmp641 = org$frostlang$frostc$Position$init();
frost$core$Int64 $tmp642 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp643 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp642);
frost$collections$Array* $tmp644 = *(&local1);
org$frostlang$frostc$Type* $tmp645 = *(&local8);
frost$core$Bit $tmp646 = frost$core$Bit$init$builtin_bit($tmp645 != NULL);
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp648 = (frost$core$Int64) {203};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s649, $tmp648, &$s650);
abort(); // unreachable
block28:;
frost$core$Int64 $tmp651 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp652 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp641, $tmp643, ((frost$collections$ListView*) $tmp644), $tmp645, $tmp651);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
// unreffing REF($515:org.frostlang.frostc.Type)
org$frostlang$frostc$Type* $tmp653 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
// unreffing returnType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp654 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
// unreffing parameterTypes
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp655 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
// unreffing scope
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return $tmp652;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Closure$compileTypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
// line 211
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
// line 212
org$frostlang$frostc$Type* $tmp656 = org$frostlang$frostc$expression$Closure$typedLambdaType$org$frostlang$frostc$Compiler$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Type$Q(param0, ((frost$collections$ListView*) param2), param3, param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
org$frostlang$frostc$Type* $tmp657 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
*(&local1) = $tmp656;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
// unreffing REF($4:org.frostlang.frostc.Type?)
// line 213
org$frostlang$frostc$Type* $tmp658 = *(&local1);
frost$core$Bit $tmp659 = frost$core$Bit$init$builtin_bit($tmp658 != NULL);
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block1; else goto block3;
block1:;
// line 214
org$frostlang$frostc$Type* $tmp661 = *(&local1);
frost$core$Bit $tmp662 = frost$core$Bit$init$builtin_bit($tmp661 != NULL);
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp664 = (frost$core$Int64) {214};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s665, $tmp664, &$s666);
abort(); // unreachable
block4:;
org$frostlang$frostc$Type* $tmp667 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp661);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
org$frostlang$frostc$Type* $tmp668 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
*(&local0) = $tmp667;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
// unreffing REF($31:org.frostlang.frostc.Type)
goto block2;
block3:;
// line 1
// line 219
org$frostlang$frostc$Type* $tmp669 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
org$frostlang$frostc$Type* $tmp670 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
*(&local0) = $tmp669;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
// unreffing REF($44:org.frostlang.frostc.Type)
// line 220
frost$core$Int64* $tmp671 = &param4->$rawValue;
frost$core$Int64 $tmp672 = *$tmp671;
frost$core$Int64 $tmp673 = (frost$core$Int64) {3};
frost$core$Bit $tmp674 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp672, $tmp673);
bool $tmp675 = $tmp674.value;
if ($tmp675) goto block7; else goto block6;
block7:;
org$frostlang$frostc$Type** $tmp676 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp677 = *$tmp676;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
org$frostlang$frostc$Type* $tmp678 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
*(&local2) = $tmp677;
// line 222
org$frostlang$frostc$Type* $tmp679 = *(&local2);
org$frostlang$frostc$Type* $tmp680 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp679);
frost$core$Bit $tmp681 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp680);
bool $tmp682 = $tmp681.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
// unreffing REF($72:org.frostlang.frostc.Type)
if ($tmp682) goto block8; else goto block9;
block8:;
// line 223
org$frostlang$frostc$Type* $tmp683 = *(&local2);
org$frostlang$frostc$Type* $tmp684 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp683);
org$frostlang$frostc$Type* $tmp685 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp684);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
org$frostlang$frostc$Type* $tmp686 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
*(&local0) = $tmp685;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
// unreffing REF($82:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
// unreffing REF($81:org.frostlang.frostc.Type)
goto block9;
block9:;
org$frostlang$frostc$Type* $tmp687 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
// unreffing t
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block6;
block6:;
goto block2;
block2:;
// line 228
frost$core$Int64 $tmp688 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp689 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp688);
org$frostlang$frostc$ASTNode* $tmp690 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp691 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp692 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp693 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp694 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp692, $tmp693, $tmp694);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp690, $tmp691, param1, $tmp692);
frost$collections$Array* $tmp695 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp696 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp695, $tmp696);
org$frostlang$frostc$ASTNode* $tmp697 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp698 = (frost$core$Int64) {39};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp697, $tmp698, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp695, ((frost$core$Object*) $tmp697));
org$frostlang$frostc$IR$Value* $tmp699 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp689, param2, $tmp690, ((org$frostlang$frostc$FixedArray*) $tmp695), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
// unreffing REF($126:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
// unreffing REF($119:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
// unreffing REF($114:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
// unreffing REF($108:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
// unreffing REF($106:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$Type* $tmp700 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
// unreffing lambdaType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp701 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
// unreffing returnType
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp699;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int64 local3;
org$frostlang$frostc$Position local4;
frost$core$String* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
frost$collections$HashSet* local7 = NULL;
frost$core$MutableString* local8 = NULL;
frost$threads$MessageQueue* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
// line 237
frost$core$Int64* $tmp702 = &param4->$rawValue;
frost$core$Int64 $tmp703 = *$tmp702;
frost$core$Int64 $tmp704 = (frost$core$Int64) {3};
frost$core$Bit $tmp705 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp703, $tmp704);
bool $tmp706 = $tmp705.value;
if ($tmp706) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Type** $tmp707 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp708 = *$tmp707;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
org$frostlang$frostc$Type* $tmp709 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
*(&local0) = $tmp708;
// line 239
org$frostlang$frostc$Type* $tmp710 = *(&local0);
org$frostlang$frostc$Type* $tmp711 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp710);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
org$frostlang$frostc$Type* $tmp712 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local1) = $tmp711;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
// unreffing REF($18:org.frostlang.frostc.Type)
// line 240
org$frostlang$frostc$Type* $tmp713 = *(&local1);
frost$core$Bit $tmp714 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp713);
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block3; else goto block4;
block3:;
// line 241
ITable* $tmp716 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp716->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp716 = $tmp716->next;
}
$fn718 $tmp717 = $tmp716->methods[0];
frost$core$Int64 $tmp719 = $tmp717(((frost$collections$CollectionView*) param2));
org$frostlang$frostc$Type* $tmp720 = *(&local1);
frost$core$Int64 $tmp721 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp720);
int64_t $tmp722 = $tmp719.value;
int64_t $tmp723 = $tmp721.value;
bool $tmp724 = $tmp722 != $tmp723;
frost$core$Bit $tmp725 = (frost$core$Bit) {$tmp724};
bool $tmp726 = $tmp725.value;
if ($tmp726) goto block5; else goto block6;
block5:;
// line 242
org$frostlang$frostc$Type* $tmp727 = *(&local0);
frost$core$String* $tmp728 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s729, ((frost$core$Object*) $tmp727));
frost$core$String* $tmp730 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp728, &$s731);
frost$core$String* $tmp732 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp730, &$s733);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp732);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
// unreffing REF($51:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
// unreffing REF($50:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
// unreffing REF($49:frost.core.String)
// line 244
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp734 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
// unreffing methodType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp735 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
// unreffing t
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block6:;
// line 246
frost$collections$Array* $tmp736 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp736);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
frost$collections$Array* $tmp737 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
*(&local2) = $tmp736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
// unreffing REF($77:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 247
frost$core$Int64 $tmp738 = (frost$core$Int64) {0};
ITable* $tmp739 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp739->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp739 = $tmp739->next;
}
$fn741 $tmp740 = $tmp739->methods[0];
frost$core$Int64 $tmp742 = $tmp740(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp743 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp744 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp738, $tmp742, $tmp743);
frost$core$Int64 $tmp745 = $tmp744.min;
*(&local3) = $tmp745;
frost$core$Int64 $tmp746 = $tmp744.max;
frost$core$Bit $tmp747 = $tmp744.inclusive;
bool $tmp748 = $tmp747.value;
frost$core$Int64 $tmp749 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp750 = frost$core$Int64$convert$R$frost$core$UInt64($tmp749);
if ($tmp748) goto block10; else goto block11;
block10:;
int64_t $tmp751 = $tmp745.value;
int64_t $tmp752 = $tmp746.value;
bool $tmp753 = $tmp751 <= $tmp752;
frost$core$Bit $tmp754 = (frost$core$Bit) {$tmp753};
bool $tmp755 = $tmp754.value;
if ($tmp755) goto block7; else goto block8;
block11:;
int64_t $tmp756 = $tmp745.value;
int64_t $tmp757 = $tmp746.value;
bool $tmp758 = $tmp756 < $tmp757;
frost$core$Bit $tmp759 = (frost$core$Bit) {$tmp758};
bool $tmp760 = $tmp759.value;
if ($tmp760) goto block7; else goto block8;
block7:;
// line 248
frost$core$Int64 $tmp761 = *(&local3);
frost$core$Object* $tmp762 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(param2, $tmp761);
frost$core$Int64* $tmp763 = &((org$frostlang$frostc$ASTNode*) $tmp762)->$rawValue;
frost$core$Int64 $tmp764 = *$tmp763;
frost$core$Int64 $tmp765 = (frost$core$Int64) {22};
frost$core$Bit $tmp766 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp764, $tmp765);
bool $tmp767 = $tmp766.value;
if ($tmp767) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Position* $tmp768 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$ASTNode*) $tmp762)->$data + 0);
org$frostlang$frostc$Position $tmp769 = *$tmp768;
*(&local4) = $tmp769;
frost$core$String** $tmp770 = (frost$core$String**) (((org$frostlang$frostc$ASTNode*) $tmp762)->$data + 16);
frost$core$String* $tmp771 = *$tmp770;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
frost$core$String* $tmp772 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
*(&local5) = $tmp771;
// line 250
frost$collections$Array* $tmp773 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp774 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp775 = (frost$core$Int64) {34};
org$frostlang$frostc$Position $tmp776 = *(&local4);
frost$core$String* $tmp777 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp778 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp779 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp780 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp781 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp782 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp783 = *(&local1);
frost$core$Int64 $tmp784 = *(&local3);
org$frostlang$frostc$Type* $tmp785 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp783, $tmp784);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp781, $tmp782, $tmp785);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp778, $tmp779, $tmp780, $tmp781);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp774, $tmp775, $tmp776, $tmp777, $tmp778);
frost$collections$Array$add$frost$collections$Array$T($tmp773, ((frost$core$Object*) $tmp774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
// unreffing REF($154:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
// unreffing REF($150:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
// unreffing REF($147:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
// unreffing REF($143:org.frostlang.frostc.ASTNode)
frost$core$String* $tmp786 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
goto block12;
block14:;
// line 255
frost$core$Bit $tmp787 = frost$core$Bit$init$builtin_bit(false);
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp789 = (frost$core$Int64) {255};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s790, $tmp789);
abort(); // unreachable
block15:;
goto block12;
block12:;
frost$core$Frost$unref$frost$core$Object$Q($tmp762);
// unreffing REF($120:org.frostlang.frostc.FixedArray.T)
goto block9;
block9:;
frost$core$Int64 $tmp791 = *(&local3);
int64_t $tmp792 = $tmp746.value;
int64_t $tmp793 = $tmp791.value;
int64_t $tmp794 = $tmp792 - $tmp793;
frost$core$Int64 $tmp795 = (frost$core$Int64) {$tmp794};
frost$core$UInt64 $tmp796 = frost$core$Int64$convert$R$frost$core$UInt64($tmp795);
if ($tmp748) goto block18; else goto block19;
block18:;
uint64_t $tmp797 = $tmp796.value;
uint64_t $tmp798 = $tmp750.value;
bool $tmp799 = $tmp797 >= $tmp798;
frost$core$Bit $tmp800 = (frost$core$Bit) {$tmp799};
bool $tmp801 = $tmp800.value;
if ($tmp801) goto block17; else goto block8;
block19:;
uint64_t $tmp802 = $tmp796.value;
uint64_t $tmp803 = $tmp750.value;
bool $tmp804 = $tmp802 > $tmp803;
frost$core$Bit $tmp805 = (frost$core$Bit) {$tmp804};
bool $tmp806 = $tmp805.value;
if ($tmp806) goto block17; else goto block8;
block17:;
int64_t $tmp807 = $tmp791.value;
int64_t $tmp808 = $tmp749.value;
int64_t $tmp809 = $tmp807 + $tmp808;
frost$core$Int64 $tmp810 = (frost$core$Int64) {$tmp809};
*(&local3) = $tmp810;
goto block7;
block8:;
// line 259
org$frostlang$frostc$Type* $tmp811 = *(&local0);
org$frostlang$frostc$Type* $tmp812 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp811);
org$frostlang$frostc$Type* $tmp813 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp812);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
org$frostlang$frostc$Type* $tmp814 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
*(&local6) = $tmp813;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
// unreffing REF($218:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
// unreffing REF($217:org.frostlang.frostc.Type)
// line 260
frost$core$Int64 $tmp815 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp816 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp815);
frost$collections$Array* $tmp817 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp818 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp817);
org$frostlang$frostc$ASTNode* $tmp819 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp820 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp821 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp822 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp823 = *(&local6);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp821, $tmp822, $tmp823);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp819, $tmp820, param1, $tmp821);
frost$collections$Array* $tmp824 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp825 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp824, $tmp825);
org$frostlang$frostc$ASTNode* $tmp826 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp827 = (frost$core$Int64) {39};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp826, $tmp827, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp824, ((frost$core$Object*) $tmp826));
org$frostlang$frostc$FixedArray* $tmp828 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp824);
org$frostlang$frostc$IR$Value* $tmp829 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp816, $tmp818, $tmp819, $tmp828, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
// unreffing REF($261:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
// unreffing REF($259:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
// unreffing REF($252:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
// unreffing REF($247:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
// unreffing REF($241:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
// unreffing REF($239:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
// unreffing REF($237:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
org$frostlang$frostc$Type* $tmp830 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp831 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
// unreffing parameters
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp832 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
// unreffing methodType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp833 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
// unreffing t
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp829;
block4:;
org$frostlang$frostc$Type* $tmp834 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
// unreffing methodType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp835 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
// unreffing t
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 268
frost$collections$IdentityMap** $tmp836 = &param0->lambdaTypes;
frost$collections$IdentityMap* $tmp837 = *$tmp836;
frost$core$Object* $tmp838 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp837, ((frost$core$Object*) param3));
*(&local7) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp838)));
frost$collections$HashSet* $tmp839 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local7) = ((frost$collections$HashSet*) $tmp838);
frost$core$Frost$unref$frost$core$Object$Q($tmp838);
// unreffing REF($322:frost.collections.IdentityMap.V?)
// line 269
frost$collections$HashSet* $tmp840 = *(&local7);
frost$core$Bit $tmp841 = frost$core$Bit$init$builtin_bit($tmp840 != NULL);
bool $tmp842 = $tmp841.value;
if ($tmp842) goto block20; else goto block21;
block20:;
// line 270
frost$collections$HashSet* $tmp843 = *(&local7);
frost$core$Bit $tmp844 = frost$core$Bit$init$builtin_bit($tmp843 != NULL);
bool $tmp845 = $tmp844.value;
if ($tmp845) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp846 = (frost$core$Int64) {270};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s847, $tmp846, &$s848);
abort(); // unreachable
block24:;
ITable* $tmp849 = ((frost$collections$CollectionView*) $tmp843)->$class->itable;
while ($tmp849->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp849 = $tmp849->next;
}
$fn851 $tmp850 = $tmp849->methods[0];
frost$core$Int64 $tmp852 = $tmp850(((frost$collections$CollectionView*) $tmp843));
frost$core$Int64 $tmp853 = (frost$core$Int64) {1};
int64_t $tmp854 = $tmp852.value;
int64_t $tmp855 = $tmp853.value;
bool $tmp856 = $tmp854 > $tmp855;
frost$core$Bit $tmp857 = (frost$core$Bit) {$tmp856};
bool $tmp858 = $tmp857.value;
if ($tmp858) goto block22; else goto block26;
block22:;
// line 271
frost$core$MutableString* $tmp859 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp859, &$s860);
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
frost$core$MutableString* $tmp861 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local8) = $tmp859;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
// unreffing REF($360:frost.core.MutableString)
// line 272
frost$threads$MessageQueue** $tmp862 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp863 = *$tmp862;
*(&local9) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$threads$MessageQueue* $tmp864 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
*(&local9) = $tmp863;
// line 273
frost$collections$HashSet* $tmp865 = *(&local7);
frost$core$Bit $tmp866 = frost$core$Bit$init$builtin_bit($tmp865 != NULL);
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp868 = (frost$core$Int64) {273};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s869, $tmp868, &$s870);
abort(); // unreachable
block27:;
ITable* $tmp871 = ((frost$collections$Iterable*) $tmp865)->$class->itable;
while ($tmp871->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp871 = $tmp871->next;
}
$fn873 $tmp872 = $tmp871->methods[0];
frost$collections$Iterator* $tmp874 = $tmp872(((frost$collections$Iterable*) $tmp865));
goto block29;
block29:;
ITable* $tmp875 = $tmp874->$class->itable;
while ($tmp875->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp875 = $tmp875->next;
}
$fn877 $tmp876 = $tmp875->methods[0];
frost$core$Bit $tmp878 = $tmp876($tmp874);
bool $tmp879 = $tmp878.value;
if ($tmp879) goto block31; else goto block30;
block30:;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp880 = $tmp874->$class->itable;
while ($tmp880->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp880 = $tmp880->next;
}
$fn882 $tmp881 = $tmp880->methods[1];
frost$core$Object* $tmp883 = $tmp881($tmp874);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp883)));
org$frostlang$frostc$Type* $tmp884 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
*(&local10) = ((org$frostlang$frostc$Type*) $tmp883);
// line 274
frost$core$MutableString* $tmp885 = *(&local8);
org$frostlang$frostc$Type* $tmp886 = *(&local10);
frost$core$String* $tmp887 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s888, ((frost$core$Object*) $tmp886));
frost$core$String* $tmp889 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp887, &$s890);
frost$core$MutableString$append$frost$core$String($tmp885, $tmp889);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
// unreffing REF($418:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
// unreffing REF($417:frost.core.String)
// line 275
frost$threads$MessageQueue* $tmp891 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp891);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$threads$MessageQueue** $tmp892 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp893 = *$tmp892;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
frost$threads$MessageQueue** $tmp894 = &param0->errorQueue;
*$tmp894 = $tmp891;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
// unreffing REF($427:frost.threads.MessageQueue<org.frostlang.frostc.Compiler.Error>)
// line 276
org$frostlang$frostc$Compiler$TypeContext* $tmp895 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp896 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp897 = *(&local10);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp895, $tmp896, $tmp897);
org$frostlang$frostc$IR$Value* $tmp898 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp895);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
// unreffing REF($446:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
// unreffing REF($442:org.frostlang.frostc.Compiler.TypeContext)
// line 278
frost$threads$MessageQueue** $tmp899 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp900 = *$tmp899;
frost$core$Bit $tmp901 = frost$threads$MessageQueue$hasMessage$R$frost$core$Bit($tmp900);
bool $tmp902 = $tmp901.value;
if ($tmp902) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp903 = (frost$core$Int64) {278};
org$frostlang$frostc$Position$wrapper* $tmp904;
$tmp904 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp904->value = param1;
frost$core$String* $tmp905 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s906, ((frost$core$Object*) $tmp904));
frost$core$String* $tmp907 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp905, &$s908);
org$frostlang$frostc$Type* $tmp909 = *(&local10);
frost$core$String* $tmp910 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s911, ((frost$core$Object*) $tmp909));
frost$core$String* $tmp912 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp910, &$s913);
frost$core$String* $tmp914 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp907, $tmp912);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s915, $tmp903, $tmp914);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
// unreffing REF($468:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
// unreffing REF($467:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
// unreffing REF($466:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
// unreffing REF($463:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
// unreffing REF($462:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
// unreffing REF($461:frost.core.Object)
abort(); // unreachable
block32:;
// line 281
frost$core$MutableString* $tmp916 = *(&local8);
frost$threads$MessageQueue** $tmp917 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp918 = *$tmp917;
frost$core$Immutable* $tmp919 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp918);
frost$core$String** $tmp920 = &((org$frostlang$frostc$Compiler$Error*) $tmp919)->message;
frost$core$String* $tmp921 = *$tmp920;
frost$core$String* $tmp922 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s923, $tmp921);
frost$core$String* $tmp924 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp922, &$s925);
frost$core$MutableString$append$frost$core$String($tmp916, $tmp924);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
// unreffing REF($499:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
// unreffing REF($498:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
// unreffing REF($494:frost.threads.MessageQueue.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp883);
// unreffing REF($405:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp926 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
// unreffing t
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block29;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
// unreffing REF($394:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 283
frost$threads$MessageQueue* $tmp927 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
frost$threads$MessageQueue** $tmp928 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp929 = *$tmp928;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
frost$threads$MessageQueue** $tmp930 = &param0->errorQueue;
*$tmp930 = $tmp927;
// line 284
frost$core$MutableString* $tmp931 = *(&local8);
frost$core$String* $tmp932 = frost$core$MutableString$finish$R$frost$core$String($tmp931);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp932);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
// unreffing REF($534:frost.core.String)
// line 285
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$threads$MessageQueue* $tmp933 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
// unreffing old
*(&local9) = ((frost$threads$MessageQueue*) NULL);
frost$core$MutableString* $tmp934 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
// unreffing msg
*(&local8) = ((frost$core$MutableString*) NULL);
frost$collections$HashSet* $tmp935 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
// unreffing attempts
*(&local7) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block26:;
// line 1
// line 288
org$frostlang$frostc$Compiler$TypeContext* $tmp936 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp937 = (frost$core$Int64) {3};
frost$collections$HashSet* $tmp938 = *(&local7);
frost$core$Bit $tmp939 = frost$core$Bit$init$builtin_bit($tmp938 != NULL);
bool $tmp940 = $tmp939.value;
if ($tmp940) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp941 = (frost$core$Int64) {289};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s942, $tmp941, &$s943);
abort(); // unreachable
block34:;
ITable* $tmp944 = ((frost$collections$Iterable*) $tmp938)->$class->itable;
while ($tmp944->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp944 = $tmp944->next;
}
$fn946 $tmp945 = $tmp944->methods[0];
frost$collections$Iterator* $tmp947 = $tmp945(((frost$collections$Iterable*) $tmp938));
ITable* $tmp948 = $tmp947->$class->itable;
while ($tmp948->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp948 = $tmp948->next;
}
$fn950 $tmp949 = $tmp948->methods[1];
frost$core$Object* $tmp951 = $tmp949($tmp947);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp936, $tmp937, ((org$frostlang$frostc$Type*) $tmp951));
org$frostlang$frostc$IR$Value* $tmp952 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp936);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
// unreffing REF($579:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp951);
// unreffing REF($576:frost.collections.Iterator.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
// unreffing REF($572:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
// unreffing REF($560:org.frostlang.frostc.Compiler.TypeContext)
// line 290
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp953 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
// unreffing attempts
*(&local7) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block23:;
goto block21;
block21:;
// line 293
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s954);
// line 295
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp955 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
// unreffing attempts
*(&local7) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$MethodDecl$Kind param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5, org$frostlang$frostc$Compiler$TypeContext* param6) {

frost$core$String* local0 = NULL;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
org$frostlang$frostc$Pair* local7 = NULL;
org$frostlang$frostc$Annotations* local8 = NULL;
org$frostlang$frostc$MethodDecl* local9 = NULL;
frost$core$Bit local10;
frost$core$Bit local11;
frost$collections$Stack* local12 = NULL;
frost$core$Bit local13;
org$frostlang$frostc$ASTNode* local14 = NULL;
org$frostlang$frostc$ClassDecl* local15 = NULL;
frost$collections$Array* local16 = NULL;
org$frostlang$frostc$Compiler$Capture* local17 = NULL;
org$frostlang$frostc$Variable* local18 = NULL;
org$frostlang$frostc$FieldDecl* local19 = NULL;
org$frostlang$frostc$IR$Value* local20 = NULL;
frost$collections$Array* local21 = NULL;
org$frostlang$frostc$Type* local22 = NULL;
org$frostlang$frostc$Type* local23 = NULL;
org$frostlang$frostc$Type* local24 = NULL;
org$frostlang$frostc$IR$Value* local25 = NULL;
// line 302
frost$core$Int64* $tmp956 = &param0->closureCount;
frost$core$Int64 $tmp957 = *$tmp956;
frost$core$Int64 $tmp958 = (frost$core$Int64) {1};
int64_t $tmp959 = $tmp957.value;
int64_t $tmp960 = $tmp958.value;
int64_t $tmp961 = $tmp959 + $tmp960;
frost$core$Int64 $tmp962 = (frost$core$Int64) {$tmp961};
frost$core$Int64* $tmp963 = &param0->closureCount;
*$tmp963 = $tmp962;
// line 303
frost$core$Int64* $tmp964 = &param0->closureCount;
frost$core$Int64 $tmp965 = *$tmp964;
frost$core$Int64$wrapper* $tmp966;
$tmp966 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp966->value = $tmp965;
frost$core$String* $tmp967 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s968, ((frost$core$Object*) $tmp966));
frost$core$String* $tmp969 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp967, &$s970);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
frost$core$String* $tmp971 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
*(&local0) = $tmp969;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
// unreffing REF($15:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
// unreffing REF($13:frost.core.Object)
// line 304
frost$collections$Array* $tmp972 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp972);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
frost$collections$Array* $tmp973 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
*(&local1) = $tmp972;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
// unreffing REF($33:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
// line 305
ITable* $tmp974 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp974->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp974 = $tmp974->next;
}
$fn976 $tmp975 = $tmp974->methods[0];
frost$collections$Iterator* $tmp977 = $tmp975(((frost$collections$Iterable*) param3));
goto block1;
block1:;
ITable* $tmp978 = $tmp977->$class->itable;
while ($tmp978->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp978 = $tmp978->next;
}
$fn980 $tmp979 = $tmp978->methods[0];
frost$core$Bit $tmp981 = $tmp979($tmp977);
bool $tmp982 = $tmp981.value;
if ($tmp982) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp983 = $tmp977->$class->itable;
while ($tmp983->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp983 = $tmp983->next;
}
$fn985 $tmp984 = $tmp983->methods[1];
frost$core$Object* $tmp986 = $tmp984($tmp977);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp986)));
org$frostlang$frostc$ASTNode* $tmp987 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp986);
// line 306
org$frostlang$frostc$ASTNode* $tmp988 = *(&local2);
frost$core$Int64* $tmp989 = &$tmp988->$rawValue;
frost$core$Int64 $tmp990 = *$tmp989;
frost$core$Int64 $tmp991 = (frost$core$Int64) {34};
frost$core$Bit $tmp992 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp990, $tmp991);
bool $tmp993 = $tmp992.value;
if ($tmp993) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp994 = (org$frostlang$frostc$Position*) ($tmp988->$data + 0);
org$frostlang$frostc$Position $tmp995 = *$tmp994;
frost$core$String** $tmp996 = (frost$core$String**) ($tmp988->$data + 16);
frost$core$String* $tmp997 = *$tmp996;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
frost$core$String* $tmp998 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
*(&local3) = $tmp997;
org$frostlang$frostc$ASTNode** $tmp999 = (org$frostlang$frostc$ASTNode**) ($tmp988->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1000 = *$tmp999;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
org$frostlang$frostc$ASTNode* $tmp1001 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
*(&local4) = $tmp1000;
// line 308
org$frostlang$frostc$Scanner** $tmp1002 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1003 = *$tmp1002;
org$frostlang$frostc$ASTNode* $tmp1004 = *(&local4);
org$frostlang$frostc$Type* $tmp1005 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1003, $tmp1004);
org$frostlang$frostc$Type* $tmp1006 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1005);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
org$frostlang$frostc$Type* $tmp1007 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
*(&local5) = $tmp1006;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
// unreffing REF($102:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
// unreffing REF($101:org.frostlang.frostc.Type)
// line 309
org$frostlang$frostc$Type* $tmp1008 = *(&local5);
frost$core$Bit $tmp1009 = frost$core$Bit$init$builtin_bit($tmp1008 == NULL);
bool $tmp1010 = $tmp1009.value;
if ($tmp1010) goto block7; else goto block8;
block7:;
// line 310
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1011 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
// unreffing resolved
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1012 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
// unreffing type
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1013 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
// unreffing name
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp986);
// unreffing REF($61:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1014 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
// unreffing p
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
// unreffing REF($50:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$collections$Array* $tmp1015 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1016 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
// line 312
frost$collections$Array* $tmp1017 = *(&local1);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1018 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp1019 = *(&local3);
org$frostlang$frostc$Type* $tmp1020 = *(&local5);
frost$core$Bit $tmp1021 = frost$core$Bit$init$builtin_bit($tmp1020 != NULL);
bool $tmp1022 = $tmp1021.value;
if ($tmp1022) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1023 = (frost$core$Int64) {312};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1024, $tmp1023, &$s1025);
abort(); // unreachable
block9:;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp1018, $tmp1019, $tmp1020);
frost$collections$Array$add$frost$collections$Array$T($tmp1017, ((frost$core$Object*) $tmp1018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
// unreffing REF($165:org.frostlang.frostc.MethodDecl.Parameter)
org$frostlang$frostc$Type* $tmp1026 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
// unreffing resolved
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1027 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
// unreffing type
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1028 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
// unreffing name
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 315
frost$core$Bit $tmp1029 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1030 = $tmp1029.value;
if ($tmp1030) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1031 = (frost$core$Int64) {315};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1032, $tmp1031);
abort(); // unreachable
block11:;
goto block4;
block4:;
frost$core$Frost$unref$frost$core$Object$Q($tmp986);
// unreffing REF($61:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1033 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
// unreffing p
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
// unreffing REF($50:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 319
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// line 320
frost$core$Bit $tmp1034 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp1035 = $tmp1034.value;
if ($tmp1035) goto block13; else goto block15;
block13:;
// line 321
org$frostlang$frostc$Scanner** $tmp1036 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1037 = *$tmp1036;
frost$core$Bit $tmp1038 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp1040 = (frost$core$Int64) {321};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1041, $tmp1040, &$s1042);
abort(); // unreachable
block16:;
org$frostlang$frostc$Type* $tmp1043 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1037, param4);
org$frostlang$frostc$Type* $tmp1044 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1043);
frost$core$Bit $tmp1045 = frost$core$Bit$init$builtin_bit($tmp1044 != NULL);
bool $tmp1046 = $tmp1045.value;
if ($tmp1046) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp1047 = (frost$core$Int64) {321};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1048, $tmp1047, &$s1049);
abort(); // unreachable
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
org$frostlang$frostc$Type* $tmp1050 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
*(&local6) = $tmp1044;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
// unreffing REF($237:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
// unreffing REF($236:org.frostlang.frostc.Type)
// line 322
org$frostlang$frostc$Type* $tmp1051 = *(&local6);
frost$core$Bit $tmp1052 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1053 = $tmp1052.value;
if ($tmp1053) goto block20; else goto block21;
block20:;
// line 323
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1054 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1055 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1056 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block21:;
goto block14;
block15:;
// line 1
// line 327
org$frostlang$frostc$Type* $tmp1057 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
org$frostlang$frostc$Type* $tmp1058 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
*(&local6) = $tmp1057;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
// unreffing REF($285:org.frostlang.frostc.Type)
// line 328
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1059;
$tmp1059 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1059->value = param2;
frost$core$Int64 $tmp1060 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp1061 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1060);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1062;
$tmp1062 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1062->value = $tmp1061;
ITable* $tmp1063 = ((frost$core$Equatable*) $tmp1059)->$class->itable;
while ($tmp1063->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1063 = $tmp1063->next;
}
$fn1065 $tmp1064 = $tmp1063->methods[0];
frost$core$Bit $tmp1066 = $tmp1064(((frost$core$Equatable*) $tmp1059), ((frost$core$Equatable*) $tmp1062));
bool $tmp1067 = $tmp1066.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1062)));
// unreffing REF($300:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1059)));
// unreffing REF($296:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp1067) goto block22; else goto block23;
block22:;
// line 329
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s1068);
// line 330
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1069 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1070 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1071 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block23:;
goto block14;
block14:;
// line 333
org$frostlang$frostc$Pair* $tmp1072 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Stack** $tmp1073 = &param0->currentMethod;
frost$collections$Stack* $tmp1074 = *$tmp1073;
frost$core$Int64 $tmp1075 = (frost$core$Int64) {0};
frost$core$Object* $tmp1076 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1074, $tmp1075);
frost$collections$HashMap* $tmp1077 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp1077);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1072, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1076)), ((frost$core$Object*) ((frost$collections$Map*) $tmp1077)));
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
org$frostlang$frostc$Pair* $tmp1078 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
*(&local7) = $tmp1072;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
// unreffing REF($343:frost.collections.HashMap<frost.core.String, org.frostlang.frostc.Compiler.Capture>)
frost$core$Frost$unref$frost$core$Object$Q($tmp1076);
// unreffing REF($340:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
// unreffing REF($334:org.frostlang.frostc.Pair<org.frostlang.frostc.MethodDecl, frost.collections.Map<frost.core.String, org.frostlang.frostc.Compiler.Capture>>)
// line 335
frost$collections$Stack** $tmp1079 = &param0->captures;
frost$collections$Stack* $tmp1080 = *$tmp1079;
org$frostlang$frostc$Pair* $tmp1081 = *(&local7);
frost$collections$Stack$push$frost$collections$Stack$T($tmp1080, ((frost$core$Object*) $tmp1081));
// line 336
org$frostlang$frostc$Annotations* $tmp1082 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp1083 = (frost$core$Int64) {16};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp1082, $tmp1083);
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
org$frostlang$frostc$Annotations* $tmp1084 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
*(&local8) = $tmp1082;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
// unreffing REF($373:org.frostlang.frostc.Annotations)
// line 337
org$frostlang$frostc$MethodDecl* $tmp1085 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$collections$Stack** $tmp1086 = &param0->currentClass;
frost$collections$Stack* $tmp1087 = *$tmp1086;
frost$core$Int64 $tmp1088 = (frost$core$Int64) {0};
frost$core$Object* $tmp1089 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1087, $tmp1088);
org$frostlang$frostc$Annotations* $tmp1090 = *(&local8);
frost$core$String* $tmp1091 = *(&local0);
frost$collections$Array* $tmp1092 = *(&local1);
org$frostlang$frostc$Type* $tmp1093 = *(&local6);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp1085, ((org$frostlang$frostc$ClassDecl*) $tmp1089), param1, ((frost$core$String*) NULL), $tmp1090, param2, $tmp1091, ((frost$collections$Array*) NULL), $tmp1092, $tmp1093, param5);
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
org$frostlang$frostc$MethodDecl* $tmp1094 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
*(&local9) = $tmp1085;
frost$core$Frost$unref$frost$core$Object$Q($tmp1089);
// unreffing REF($392:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
// unreffing REF($387:org.frostlang.frostc.MethodDecl)
// line 341
frost$core$Bit* $tmp1095 = &param0->writeCode;
frost$core$Bit $tmp1096 = *$tmp1095;
*(&local10) = $tmp1096;
// line 342
frost$core$Bit* $tmp1097 = &param0->reportErrors;
frost$core$Bit $tmp1098 = *$tmp1097;
*(&local11) = $tmp1098;
// line 343
frost$core$Bit $tmp1099 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp1100 = &param0->writeCode;
*$tmp1100 = $tmp1099;
// line 344
frost$core$Bit $tmp1101 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp1102 = &param0->reportErrors;
*$tmp1102 = $tmp1101;
// line 345
frost$collections$Stack** $tmp1103 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1104 = *$tmp1103;
*(&local12) = ((frost$collections$Stack*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
frost$collections$Stack* $tmp1105 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
*(&local12) = $tmp1104;
// line 346
frost$collections$Stack* $tmp1106 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp1106);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
frost$collections$Stack** $tmp1107 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1108 = *$tmp1107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
frost$collections$Stack** $tmp1109 = &param0->enclosingContexts;
*$tmp1109 = $tmp1106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
// unreffing REF($440:frost.collections.Stack<org.frostlang.frostc.Compiler.EnclosingContext>)
// line 347
org$frostlang$frostc$MethodDecl* $tmp1110 = *(&local9);
org$frostlang$frostc$SymbolTable** $tmp1111 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1112 = *$tmp1111;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp1110, $tmp1112);
// line 348
frost$collections$Stack* $tmp1113 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
frost$collections$Stack** $tmp1114 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1115 = *$tmp1114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
frost$collections$Stack** $tmp1116 = &param0->enclosingContexts;
*$tmp1116 = $tmp1113;
// line 349
frost$core$Bit $tmp1117 = *(&local10);
frost$core$Bit* $tmp1118 = &param0->writeCode;
*$tmp1118 = $tmp1117;
// line 350
frost$core$Bit $tmp1119 = *(&local11);
frost$core$Bit* $tmp1120 = &param0->reportErrors;
*$tmp1120 = $tmp1119;
// line 352
// line 353
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 354
org$frostlang$frostc$Pair* $tmp1121 = *(&local7);
frost$core$Object** $tmp1122 = &$tmp1121->second;
frost$core$Object* $tmp1123 = *$tmp1122;
ITable* $tmp1124 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1123))->$class->itable;
while ($tmp1124->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1124 = $tmp1124->next;
}
$fn1126 $tmp1125 = $tmp1124->methods[0];
frost$core$Int64 $tmp1127 = $tmp1125(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1123)));
frost$core$Int64 $tmp1128 = (frost$core$Int64) {0};
int64_t $tmp1129 = $tmp1127.value;
int64_t $tmp1130 = $tmp1128.value;
bool $tmp1131 = $tmp1129 != $tmp1130;
frost$core$Bit $tmp1132 = (frost$core$Bit) {$tmp1131};
bool $tmp1133 = $tmp1132.value;
if ($tmp1133) goto block24; else goto block26;
block24:;
// line 356
org$frostlang$frostc$MethodDecl* $tmp1134 = *(&local9);
org$frostlang$frostc$Pair* $tmp1135 = *(&local7);
frost$core$Object** $tmp1136 = &$tmp1135->second;
frost$core$Object* $tmp1137 = *$tmp1136;
ITable* $tmp1138 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1137))->$class->itable;
while ($tmp1138->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1138 = $tmp1138->next;
}
$fn1140 $tmp1139 = $tmp1138->methods[4];
frost$collections$Iterator* $tmp1141 = $tmp1139(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1137)));
ITable* $tmp1142 = $tmp1141->$class->itable;
while ($tmp1142->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1142 = $tmp1142->next;
}
$fn1144 $tmp1143 = $tmp1142->methods[6];
frost$collections$Array* $tmp1145 = $tmp1143($tmp1141);
org$frostlang$frostc$ClassDecl* $tmp1146 = org$frostlang$frostc$expression$Closure$createClosureClass$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlang$frostc$Compiler$Capture$GT$R$org$frostlang$frostc$ClassDecl(param0, $tmp1134, ((frost$collections$CollectionView*) $tmp1145));
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
org$frostlang$frostc$ClassDecl* $tmp1147 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
*(&local15) = $tmp1146;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
// unreffing REF($513:org.frostlang.frostc.ClassDecl)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
// unreffing REF($510:frost.collections.Array<frost.collections.Iterator.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
// unreffing REF($506:frost.collections.Iterator<frost.collections.MapView.V>)
// line 357
frost$collections$Array* $tmp1148 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1148);
*(&local16) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
frost$collections$Array* $tmp1149 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
*(&local16) = $tmp1148;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
// unreffing REF($531:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 358
org$frostlang$frostc$Pair* $tmp1150 = *(&local7);
frost$core$Object** $tmp1151 = &$tmp1150->second;
frost$core$Object* $tmp1152 = *$tmp1151;
ITable* $tmp1153 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1152))->$class->itable;
while ($tmp1153->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1153 = $tmp1153->next;
}
$fn1155 $tmp1154 = $tmp1153->methods[4];
frost$collections$Iterator* $tmp1156 = $tmp1154(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1152)));
goto block27;
block27:;
ITable* $tmp1157 = $tmp1156->$class->itable;
while ($tmp1157->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1157 = $tmp1157->next;
}
$fn1159 $tmp1158 = $tmp1157->methods[0];
frost$core$Bit $tmp1160 = $tmp1158($tmp1156);
bool $tmp1161 = $tmp1160.value;
if ($tmp1161) goto block29; else goto block28;
block28:;
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp1162 = $tmp1156->$class->itable;
while ($tmp1162->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1162 = $tmp1162->next;
}
$fn1164 $tmp1163 = $tmp1162->methods[1];
frost$core$Object* $tmp1165 = $tmp1163($tmp1156);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp1165)));
org$frostlang$frostc$Compiler$Capture* $tmp1166 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) $tmp1165);
// line 359
org$frostlang$frostc$Compiler$Capture* $tmp1167 = *(&local17);
frost$core$Int64* $tmp1168 = &$tmp1167->$rawValue;
frost$core$Int64 $tmp1169 = *$tmp1168;
frost$core$Int64 $tmp1170 = (frost$core$Int64) {0};
frost$core$Bit $tmp1171 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1169, $tmp1170);
bool $tmp1172 = $tmp1171.value;
if ($tmp1172) goto block31; else goto block32;
block31:;
org$frostlang$frostc$Variable** $tmp1173 = (org$frostlang$frostc$Variable**) ($tmp1167->$data + 0);
org$frostlang$frostc$Variable* $tmp1174 = *$tmp1173;
*(&local18) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
org$frostlang$frostc$Variable* $tmp1175 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
*(&local18) = $tmp1174;
// line 361
frost$collections$Array* $tmp1176 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1177 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1178 = (frost$core$Int64) {22};
org$frostlang$frostc$Variable* $tmp1179 = *(&local18);
frost$core$String** $tmp1180 = &((org$frostlang$frostc$Symbol*) $tmp1179)->name;
frost$core$String* $tmp1181 = *$tmp1180;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1177, $tmp1178, param1, $tmp1181);
frost$collections$Array$add$frost$collections$Array$T($tmp1176, ((frost$core$Object*) $tmp1177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
// unreffing REF($591:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$Variable* $tmp1182 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
// unreffing v
*(&local18) = ((org$frostlang$frostc$Variable*) NULL);
goto block30;
block32:;
frost$core$Int64 $tmp1183 = (frost$core$Int64) {2};
frost$core$Bit $tmp1184 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1169, $tmp1183);
bool $tmp1185 = $tmp1184.value;
if ($tmp1185) goto block33; else goto block34;
block33:;
// line 364
frost$collections$Array* $tmp1186 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1187 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1188 = (frost$core$Int64) {40};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1187, $tmp1188, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1186, ((frost$core$Object*) $tmp1187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
// unreffing REF($616:org.frostlang.frostc.ASTNode)
goto block30;
block34:;
frost$core$Int64 $tmp1189 = (frost$core$Int64) {1};
frost$core$Bit $tmp1190 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1169, $tmp1189);
bool $tmp1191 = $tmp1190.value;
if ($tmp1191) goto block35; else goto block30;
block35:;
org$frostlang$frostc$FieldDecl** $tmp1192 = (org$frostlang$frostc$FieldDecl**) ($tmp1167->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp1193 = *$tmp1192;
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
org$frostlang$frostc$FieldDecl* $tmp1194 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
*(&local19) = $tmp1193;
// line 367
frost$collections$Array* $tmp1195 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1196 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1197 = (frost$core$Int64) {16};
org$frostlang$frostc$ASTNode* $tmp1198 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1199 = (frost$core$Int64) {22};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1198, $tmp1199, param1, &$s1200);
org$frostlang$frostc$FieldDecl* $tmp1201 = *(&local19);
frost$core$String** $tmp1202 = &((org$frostlang$frostc$Symbol*) $tmp1201)->name;
frost$core$String* $tmp1203 = *$tmp1202;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp1196, $tmp1197, param1, $tmp1198, $tmp1203);
frost$collections$Array$add$frost$collections$Array$T($tmp1195, ((frost$core$Object*) $tmp1196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
// unreffing REF($643:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
// unreffing REF($641:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$FieldDecl* $tmp1204 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
// unreffing f
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block30;
block30:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1165);
// unreffing REF($563:frost.collections.Iterator.T)
org$frostlang$frostc$Compiler$Capture* $tmp1205 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
// unreffing capture
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block27;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
// unreffing REF($552:frost.collections.Iterator<frost.collections.MapView.V>)
// line 373
frost$collections$Stack** $tmp1206 = &param0->captures;
frost$collections$Stack* $tmp1207 = *$tmp1206;
frost$core$Object* $tmp1208 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1207);
frost$core$Frost$unref$frost$core$Object$Q($tmp1208);
// unreffing REF($681:frost.collections.Stack.T)
// line 374
frost$collections$Array** $tmp1209 = &param0->pendingClasses;
frost$collections$Array* $tmp1210 = *$tmp1209;
org$frostlang$frostc$ClassDecl* $tmp1211 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp1210, ((frost$core$Object*) $tmp1211));
// line 375
org$frostlang$frostc$IR$Value* $tmp1212 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1213 = (frost$core$Int64) {14};
org$frostlang$frostc$ClassDecl* $tmp1214 = *(&local15);
org$frostlang$frostc$Type** $tmp1215 = &$tmp1214->type;
org$frostlang$frostc$Type* $tmp1216 = *$tmp1215;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1212, $tmp1213, $tmp1216);
frost$collections$Array* $tmp1217 = *(&local16);
org$frostlang$frostc$FixedArray* $tmp1218 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1217);
org$frostlang$frostc$Compiler$TypeContext* $tmp1219 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1220 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1219, $tmp1220);
org$frostlang$frostc$IR$Value* $tmp1221 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1212, ((frost$collections$ListView*) $tmp1218), $tmp1219);
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
org$frostlang$frostc$IR$Value* $tmp1222 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
*(&local20) = $tmp1221;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
// unreffing REF($708:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
// unreffing REF($705:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
// unreffing REF($702:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
// unreffing REF($694:org.frostlang.frostc.IR.Value)
// line 377
org$frostlang$frostc$IR$Value* $tmp1223 = *(&local20);
frost$core$Bit $tmp1224 = frost$core$Bit$init$builtin_bit($tmp1223 == NULL);
bool $tmp1225 = $tmp1224.value;
if ($tmp1225) goto block36; else goto block37;
block36:;
// line 378
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1226 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
// unreffing rawTarget
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1227 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
// unreffing args
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1228 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
// unreffing cl
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp1229 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
// unreffing target
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp1230 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
// unreffing oldContexts
*(&local12) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1231 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
// unreffing methodDecl
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp1232 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
// unreffing annotations
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp1233 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
// unreffing currentCaptures
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1234 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1235 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1236 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block37:;
// line 380
org$frostlang$frostc$ASTNode* $tmp1237 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1238 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp1239 = *(&local20);
frost$core$Bit $tmp1240 = frost$core$Bit$init$builtin_bit($tmp1239 != NULL);
bool $tmp1241 = $tmp1240.value;
if ($tmp1241) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp1242 = (frost$core$Int64) {380};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1243, $tmp1242, &$s1244);
abort(); // unreachable
block38:;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1237, $tmp1238, param1, $tmp1239);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
org$frostlang$frostc$ASTNode* $tmp1245 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
*(&local14) = $tmp1237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
// unreffing REF($794:org.frostlang.frostc.ASTNode)
// line 381
org$frostlang$frostc$ClassDecl* $tmp1246 = *(&local15);
org$frostlang$frostc$Type** $tmp1247 = &$tmp1246->type;
org$frostlang$frostc$Type* $tmp1248 = *$tmp1247;
frost$core$Bit $tmp1249 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1248);
*(&local13) = $tmp1249;
org$frostlang$frostc$IR$Value* $tmp1250 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
// unreffing rawTarget
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1251 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
// unreffing args
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1252 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
// unreffing cl
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block25;
block26:;
// line 1
// line 385
frost$collections$Stack** $tmp1253 = &param0->captures;
frost$collections$Stack* $tmp1254 = *$tmp1253;
frost$core$Object* $tmp1255 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1254);
frost$core$Frost$unref$frost$core$Object$Q($tmp1255);
// unreffing REF($843:frost.collections.Stack.T)
// line 386
frost$collections$Stack* $tmp1256 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp1256);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$collections$Stack** $tmp1257 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1258 = *$tmp1257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
frost$collections$Stack** $tmp1259 = &param0->enclosingContexts;
*$tmp1259 = $tmp1256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
// unreffing REF($849:frost.collections.Stack<org.frostlang.frostc.Compiler.EnclosingContext>)
// line 387
org$frostlang$frostc$MethodDecl* $tmp1260 = *(&local9);
org$frostlang$frostc$SymbolTable** $tmp1261 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1262 = *$tmp1261;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp1260, $tmp1262);
// line 388
frost$collections$Stack* $tmp1263 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
frost$collections$Stack** $tmp1264 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1265 = *$tmp1264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
frost$collections$Stack** $tmp1266 = &param0->enclosingContexts;
*$tmp1266 = $tmp1263;
// line 389
org$frostlang$frostc$ASTNode* $tmp1267 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1268 = (frost$core$Int64) {31};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1267, $tmp1268, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
org$frostlang$frostc$ASTNode* $tmp1269 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
*(&local14) = $tmp1267;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
// unreffing REF($880:org.frostlang.frostc.ASTNode)
// line 390
frost$core$Bit $tmp1270 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp1270;
goto block25;
block25:;
// line 392
frost$collections$Array* $tmp1271 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1271);
*(&local21) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
frost$collections$Array* $tmp1272 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
*(&local21) = $tmp1271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
// unreffing REF($898:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 393
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
// line 394
org$frostlang$frostc$MethodDecl* $tmp1273 = *(&local9);
org$frostlang$frostc$Annotations** $tmp1274 = &$tmp1273->annotations;
org$frostlang$frostc$Annotations* $tmp1275 = *$tmp1274;
frost$core$Bit $tmp1276 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1275);
bool $tmp1277 = $tmp1276.value;
if ($tmp1277) goto block40; else goto block42;
block40:;
// line 395
org$frostlang$frostc$MethodDecl* $tmp1278 = *(&local9);
org$frostlang$frostc$Type* $tmp1279 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp1278);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
org$frostlang$frostc$Type* $tmp1280 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
*(&local22) = $tmp1279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
// unreffing REF($922:org.frostlang.frostc.Type)
goto block41;
block42:;
// line 1
// line 398
org$frostlang$frostc$MethodDecl* $tmp1281 = *(&local9);
org$frostlang$frostc$MethodDecl* $tmp1282 = *(&local9);
frost$core$Weak** $tmp1283 = &$tmp1282->owner;
frost$core$Weak* $tmp1284 = *$tmp1283;
frost$core$Object* $tmp1285 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1284);
org$frostlang$frostc$Type** $tmp1286 = &((org$frostlang$frostc$ClassDecl*) $tmp1285)->type;
org$frostlang$frostc$Type* $tmp1287 = *$tmp1286;
frost$core$Bit $tmp1288 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp1289 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp1281, $tmp1287, $tmp1288);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
org$frostlang$frostc$Type* $tmp1290 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
*(&local22) = $tmp1289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
// unreffing REF($945:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1285);
// unreffing REF($940:frost.core.Weak.T)
goto block41;
block41:;
// line 400
org$frostlang$frostc$Type* $tmp1291 = *(&local22);
org$frostlang$frostc$Type* $tmp1292 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1291);
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
org$frostlang$frostc$Type* $tmp1293 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
*(&local23) = $tmp1292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
// unreffing REF($961:org.frostlang.frostc.Type)
// line 401
frost$collections$Array* $tmp1294 = *(&local21);
org$frostlang$frostc$ASTNode* $tmp1295 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1296 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp1297 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1298 = (frost$core$Int64) {3};
org$frostlang$frostc$MethodDecl* $tmp1299 = *(&local9);
org$frostlang$frostc$Type* $tmp1300 = *(&local23);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp1297, $tmp1298, $tmp1299, $tmp1300);
org$frostlang$frostc$Type* $tmp1301 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp1302 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1301);
org$frostlang$frostc$IR$Value* $tmp1303 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1297, $tmp1302);
frost$core$Bit $tmp1304 = frost$core$Bit$init$builtin_bit($tmp1303 != NULL);
bool $tmp1305 = $tmp1304.value;
if ($tmp1305) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp1306 = (frost$core$Int64) {401};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1307, $tmp1306, &$s1308);
abort(); // unreachable
block43:;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1295, $tmp1296, param1, $tmp1303);
frost$collections$Array$add$frost$collections$Array$T($tmp1294, ((frost$core$Object*) $tmp1295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
// unreffing REF($985:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
// unreffing REF($984:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
// unreffing REF($983:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
// unreffing REF($977:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
// unreffing REF($975:org.frostlang.frostc.ASTNode)
// line 403
frost$collections$Array* $tmp1309 = *(&local21);
org$frostlang$frostc$ASTNode* $tmp1310 = *(&local14);
frost$core$Bit $tmp1311 = frost$core$Bit$init$builtin_bit($tmp1310 != NULL);
bool $tmp1312 = $tmp1311.value;
if ($tmp1312) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp1313 = (frost$core$Int64) {403};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1314, $tmp1313, &$s1315);
abort(); // unreachable
block45:;
frost$collections$Array$add$frost$collections$Array$T($tmp1309, ((frost$core$Object*) $tmp1310));
// line 404
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
// line 405
frost$core$Bit $tmp1316 = *(&local13);
bool $tmp1317 = $tmp1316.value;
if ($tmp1317) goto block47; else goto block49;
block47:;
// line 406
org$frostlang$frostc$Type* $tmp1318 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
org$frostlang$frostc$Type* $tmp1319 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
*(&local24) = $tmp1318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
// unreffing REF($1033:org.frostlang.frostc.Type)
goto block48;
block49:;
// line 1
// line 409
org$frostlang$frostc$Type* $tmp1320 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
org$frostlang$frostc$Type* $tmp1321 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
*(&local24) = $tmp1320;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
// unreffing REF($1046:org.frostlang.frostc.Type)
goto block48;
block48:;
// line 411
org$frostlang$frostc$IR$Value* $tmp1322 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1323 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp1324 = *(&local24);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1322, $tmp1323, $tmp1324);
frost$collections$Array* $tmp1325 = *(&local21);
org$frostlang$frostc$Compiler$TypeContext* $tmp1326 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1327 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1326, $tmp1327);
org$frostlang$frostc$IR$Value* $tmp1328 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1322, ((frost$collections$ListView*) $tmp1325), $tmp1326);
org$frostlang$frostc$MethodDecl* $tmp1329 = *(&local9);
org$frostlang$frostc$Type* $tmp1330 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp1329);
org$frostlang$frostc$IR$Value* $tmp1331 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1328, $tmp1330);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
org$frostlang$frostc$IR$Value* $tmp1332 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
*(&local25) = $tmp1331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
// unreffing REF($1070:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
// unreffing REF($1069:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
// unreffing REF($1067:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
// unreffing REF($1064:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
// unreffing REF($1058:org.frostlang.frostc.IR.Value)
// line 413
org$frostlang$frostc$IR$Value* $tmp1333 = *(&local25);
org$frostlang$frostc$IR$Value* $tmp1334 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1333, param6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
// unreffing REF($1095:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$IR$Value* $tmp1335 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
// unreffing construct
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1336 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
// unreffing methodType
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1337 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
// unreffing irType
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1338 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
// unreffing frostType
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1339 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
// unreffing args
*(&local21) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1340 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
// unreffing target
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp1341 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
// unreffing oldContexts
*(&local12) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1342 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
// unreffing methodDecl
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp1343 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
// unreffing annotations
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp1344 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
// unreffing currentCaptures
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1345 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1346 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1347 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp1334;

}
void org$frostlang$frostc$expression$Closure$init(org$frostlang$frostc$expression$Closure* param0) {

return;

}
void org$frostlang$frostc$expression$Closure$cleanup(org$frostlang$frostc$expression$Closure* param0) {

// line 23
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

