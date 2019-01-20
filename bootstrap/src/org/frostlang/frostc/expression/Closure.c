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
#include "org/frostlang/frostc/expression/Binary/Operator.h"
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
#include "org/frostlang/frostc/Compiler/ErrorMsg.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Map.h"
#include "org/frostlang/frostc/expression/Call.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Closure$class_type org$frostlang$frostc$expression$Closure$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Closure$cleanup} };

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
typedef frost$core$String* (*$fn438)(frost$core$Object*);
typedef frost$core$Int64 (*$fn479)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn502)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn755)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn778)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn888)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn910)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn914)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn919)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn983)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn987)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1034)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1038)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1043)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1123)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1184)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn1198)(frost$collections$MapView*);
typedef frost$collections$Array* (*$fn1202)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1213)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn1217)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1222)(frost$collections$Iterator*);

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
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s555 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s556 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s568 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s569 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 134, -8894870968915517948, NULL };
static frost$core$String $s665 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s681 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s737 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x54\x79\x70\x65\x64\x4c\x61\x6d\x62\x64\x61\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x72\x61\x77\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x65\x78\x70\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 362, -1348589147382285979, NULL };
static frost$core$String $s766 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static frost$core$String $s768 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x6c\x61\x6d\x62\x64\x61\x20\x77\x69\x74\x68\x20\x77\x72\x6f\x6e\x67\x20", 31, -8865909723025372911, NULL };
static frost$core$String $s770 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 20, 4248843021992149759, NULL };
static frost$core$String $s827 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s884 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s885 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 123, -3024892062547601733, NULL };
static frost$core$String $s897 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x65\x72\x72\x6f\x72", 12, -6960542561056411676, NULL };
static frost$core$String $s906 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s907 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 144, 8764710235555727599, NULL };
static frost$core$String $s925 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x77\x68\x65\x6e\x20\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x64\x20\x61\x73\x20\x27", 26, 7783089566661782278, NULL };
static frost$core$String $s927 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a", 2, 14198, NULL };
static frost$core$String $s943 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x72\x65\x63\x65\x69\x76\x65\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 51, 8939304453205542054, NULL };
static frost$core$String $s945 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20", 6, 1410335929809, NULL };
static frost$core$String $s948 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x20", 5, 22706926183, NULL };
static frost$core$String $s950 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s952 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s960 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, 1205436084705178767, NULL };
static frost$core$String $s962 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s979 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s980 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 117, -9183381928165602112, NULL };
static frost$core$String $s991 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x74\x79\x70\x65\x20\x77\x61\x73\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x61\x6e\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x63\x6f\x6e\x74\x65\x78\x74", 67, -43704296328153041, NULL };
static frost$core$String $s1012 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1013 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x55\x6e\x74\x79\x70\x65\x64\x4c\x61\x6d\x62\x64\x61\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x72\x61\x77\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x65\x78\x70\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 364, 1431056255726371020, NULL };
static frost$core$String $s1026 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 10, 3323213258965972710, NULL };
static frost$core$String $s1028 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1082 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1083 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1090 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1099 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1107 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static frost$core$String $s1258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s1301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1302 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };

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
frost$core$String* $tmp147 = frost$core$String$get_asString$R$frost$core$String($tmp146);
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
frost$core$Int64 $tmp213 = (frost$core$Int64) {24};
org$frostlang$frostc$expression$Binary$Operator $tmp214 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp213);
org$frostlang$frostc$ASTNode* $tmp215 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp216 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp217 = *(&local0);
org$frostlang$frostc$Variable* $tmp218 = *(&local8);
frost$core$String** $tmp219 = &((org$frostlang$frostc$Symbol*) $tmp218)->name;
frost$core$String* $tmp220 = *$tmp219;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp215, $tmp216, $tmp217, $tmp220);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp200, $tmp201, $tmp202, $tmp203, $tmp214, $tmp215);
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
// line 84
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
// line 86
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
frost$core$Int64 $tmp250 = (frost$core$Int64) {24};
org$frostlang$frostc$expression$Binary$Operator $tmp251 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp250);
org$frostlang$frostc$ASTNode* $tmp252 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp253 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp254 = *(&local0);
org$frostlang$frostc$FieldDecl* $tmp255 = *(&local9);
frost$core$String** $tmp256 = &((org$frostlang$frostc$Symbol*) $tmp255)->name;
frost$core$String* $tmp257 = *$tmp256;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp252, $tmp253, $tmp254, $tmp257);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp237, $tmp238, $tmp239, $tmp240, $tmp251, $tmp252);
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
// line 91
frost$collections$Array* $tmp262 = *(&local6);
org$frostlang$frostc$MethodDecl$Parameter* $tmp263 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$Type* $tmp264 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp263, &$s265, $tmp264);
frost$collections$Array$add$frost$collections$Array$T($tmp262, ((frost$core$Object*) $tmp263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// unreffing REF($506:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// unreffing REF($505:org.frostlang.frostc.MethodDecl.Parameter)
// line 94
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
frost$core$Int64 $tmp278 = (frost$core$Int64) {24};
org$frostlang$frostc$expression$Binary$Operator $tmp279 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp278);
org$frostlang$frostc$ASTNode* $tmp280 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp281 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp282 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp280, $tmp281, $tmp282, &$s283);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp267, $tmp268, $tmp269, $tmp270, $tmp279, $tmp280);
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
// line 102
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
// line 106
org$frostlang$frostc$ClassDecl* $tmp298 = *(&local4);
frost$collections$Array** $tmp299 = &$tmp298->methods;
frost$collections$Array* $tmp300 = *$tmp299;
org$frostlang$frostc$MethodDecl* $tmp301 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp300, ((frost$core$Object*) $tmp301));
// line 107
org$frostlang$frostc$ClassDecl* $tmp302 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp303 = &$tmp302->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp304 = *$tmp303;
org$frostlang$frostc$MethodDecl* $tmp305 = *(&local10);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp304, ((org$frostlang$frostc$Symbol*) $tmp305));
// line 110
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
// line 114
org$frostlang$frostc$ClassDecl* $tmp320 = *(&local4);
frost$collections$Array** $tmp321 = &$tmp320->methods;
frost$collections$Array* $tmp322 = *$tmp321;
org$frostlang$frostc$MethodDecl* $tmp323 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp322, ((frost$core$Object*) $tmp323));
// line 115
org$frostlang$frostc$ClassDecl* $tmp324 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp325 = &$tmp324->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp326 = *$tmp325;
org$frostlang$frostc$MethodDecl* $tmp327 = *(&local11);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp326, ((org$frostlang$frostc$Symbol*) $tmp327));
// line 118
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
// line 119
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
// line 121
org$frostlang$frostc$FieldDecl* $tmp351 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp352 = *(&local4);
org$frostlang$frostc$Position $tmp353 = *(&local0);
org$frostlang$frostc$Annotations* $tmp354 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp355 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp356 = (frost$core$Int64) {65536};
frost$core$Int64 $tmp357 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp355, $tmp356);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp354, $tmp357);
frost$core$Int64 $tmp358 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp359 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp358);
org$frostlang$frostc$Variable* $tmp360 = *(&local13);
frost$core$String** $tmp361 = &((org$frostlang$frostc$Symbol*) $tmp360)->name;
frost$core$String* $tmp362 = *$tmp361;
org$frostlang$frostc$Variable* $tmp363 = *(&local13);
org$frostlang$frostc$Type** $tmp364 = &$tmp363->type;
org$frostlang$frostc$Type* $tmp365 = *$tmp364;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp351, $tmp352, $tmp353, ((frost$core$String*) NULL), $tmp354, $tmp359, $tmp362, $tmp365, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
org$frostlang$frostc$FieldDecl* $tmp366 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
*(&local14) = $tmp351;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
// unreffing REF($716:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
// unreffing REF($713:org.frostlang.frostc.FieldDecl)
// line 124
org$frostlang$frostc$ClassDecl* $tmp367 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp368 = &$tmp367->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp369 = *$tmp368;
org$frostlang$frostc$FieldDecl* $tmp370 = *(&local14);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp369, ((org$frostlang$frostc$Symbol*) $tmp370));
// line 125
org$frostlang$frostc$ClassDecl* $tmp371 = *(&local4);
frost$collections$Array** $tmp372 = &$tmp371->fields;
frost$collections$Array* $tmp373 = *$tmp372;
org$frostlang$frostc$FieldDecl* $tmp374 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp373, ((frost$core$Object*) $tmp374));
org$frostlang$frostc$FieldDecl* $tmp375 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
// unreffing field
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Variable* $tmp376 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
// unreffing v
*(&local13) = ((org$frostlang$frostc$Variable*) NULL);
goto block29;
block31:;
frost$core$Int64 $tmp377 = (frost$core$Int64) {1};
frost$core$Bit $tmp378 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp344, $tmp377);
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block32; else goto block33;
block32:;
org$frostlang$frostc$FieldDecl** $tmp380 = (org$frostlang$frostc$FieldDecl**) ($tmp342->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp381 = *$tmp380;
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
org$frostlang$frostc$FieldDecl* $tmp382 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local15) = $tmp381;
// line 128
org$frostlang$frostc$FieldDecl* $tmp383 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp384 = *(&local4);
org$frostlang$frostc$Position $tmp385 = *(&local0);
org$frostlang$frostc$Annotations* $tmp386 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp387 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp388 = (frost$core$Int64) {65536};
frost$core$Int64 $tmp389 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp387, $tmp388);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp386, $tmp389);
frost$core$Int64 $tmp390 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp391 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp390);
org$frostlang$frostc$FieldDecl* $tmp392 = *(&local15);
frost$core$String** $tmp393 = &((org$frostlang$frostc$Symbol*) $tmp392)->name;
frost$core$String* $tmp394 = *$tmp393;
org$frostlang$frostc$FieldDecl* $tmp395 = *(&local15);
org$frostlang$frostc$Type** $tmp396 = &$tmp395->type;
org$frostlang$frostc$Type* $tmp397 = *$tmp396;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp383, $tmp384, $tmp385, ((frost$core$String*) NULL), $tmp386, $tmp391, $tmp394, $tmp397, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
org$frostlang$frostc$FieldDecl* $tmp398 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local16) = $tmp383;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
// unreffing REF($787:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
// unreffing REF($784:org.frostlang.frostc.FieldDecl)
// line 131
org$frostlang$frostc$ClassDecl* $tmp399 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp400 = &$tmp399->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp401 = *$tmp400;
org$frostlang$frostc$FieldDecl* $tmp402 = *(&local16);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp401, ((org$frostlang$frostc$Symbol*) $tmp402));
// line 132
org$frostlang$frostc$ClassDecl* $tmp403 = *(&local4);
frost$collections$Array** $tmp404 = &$tmp403->fields;
frost$collections$Array* $tmp405 = *$tmp404;
org$frostlang$frostc$FieldDecl* $tmp406 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp405, ((frost$core$Object*) $tmp406));
org$frostlang$frostc$FieldDecl* $tmp407 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
// unreffing field
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp408 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
// unreffing f
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block29;
block33:;
frost$core$Int64 $tmp409 = (frost$core$Int64) {2};
frost$core$Bit $tmp410 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp344, $tmp409);
bool $tmp411 = $tmp410.value;
if ($tmp411) goto block34; else goto block35;
block34:;
// line 135
org$frostlang$frostc$FieldDecl* $tmp412 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp413 = *(&local4);
org$frostlang$frostc$Position $tmp414 = *(&local0);
org$frostlang$frostc$Annotations* $tmp415 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp416 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp417 = (frost$core$Int64) {65536};
frost$core$Int64 $tmp418 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp416, $tmp417);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp415, $tmp418);
frost$core$Int64 $tmp419 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp420 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp419);
org$frostlang$frostc$Type* $tmp421 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp412, $tmp413, $tmp414, ((frost$core$String*) NULL), $tmp415, $tmp420, &$s422, $tmp421, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local17) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
org$frostlang$frostc$FieldDecl* $tmp423 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
*(&local17) = $tmp412;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
// unreffing REF($856:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
// unreffing REF($849:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
// unreffing REF($846:org.frostlang.frostc.FieldDecl)
// line 139
org$frostlang$frostc$ClassDecl* $tmp424 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp425 = &$tmp424->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp426 = *$tmp425;
org$frostlang$frostc$FieldDecl* $tmp427 = *(&local17);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp426, ((org$frostlang$frostc$Symbol*) $tmp427));
// line 140
org$frostlang$frostc$ClassDecl* $tmp428 = *(&local4);
frost$collections$Array** $tmp429 = &$tmp428->fields;
frost$collections$Array* $tmp430 = *$tmp429;
org$frostlang$frostc$FieldDecl* $tmp431 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp430, ((frost$core$Object*) $tmp431));
org$frostlang$frostc$FieldDecl* $tmp432 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
// unreffing field
*(&local17) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block29;
block35:;
// line 143
frost$core$Bit $tmp433 = frost$core$Bit$init$builtin_bit(false);
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp435 = (frost$core$Int64) {143};
org$frostlang$frostc$Compiler$Capture* $tmp436 = *(&local12);
$fn438 $tmp437 = ($fn438) ((frost$core$Object*) $tmp436)->$class->vtable[0];
frost$core$String* $tmp439 = $tmp437(((frost$core$Object*) $tmp436));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s440, $tmp435, $tmp439);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
// unreffing REF($903:frost.core.String)
abort(); // unreachable
block36:;
goto block29;
block29:;
frost$core$Frost$unref$frost$core$Object$Q($tmp340);
// unreffing REF($687:frost.collections.Iterator.T)
org$frostlang$frostc$Compiler$Capture* $tmp441 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
// unreffing c
*(&local12) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// unreffing REF($676:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 147
org$frostlang$frostc$ClassDecl* $tmp442 = *(&local4);
frost$core$Weak* $tmp443 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp443, ((frost$core$Object*) $tmp442));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
frost$core$Weak** $tmp444 = &param1->owner;
frost$core$Weak* $tmp445 = *$tmp444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$core$Weak** $tmp446 = &param1->owner;
*$tmp446 = $tmp443;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
// unreffing REF($924:frost.core.Weak<org.frostlang.frostc.ClassDecl>)
// line 148
org$frostlang$frostc$ClassDecl* $tmp447 = *(&local4);
frost$collections$Array** $tmp448 = &$tmp447->methods;
frost$collections$Array* $tmp449 = *$tmp448;
frost$collections$Array$add$frost$collections$Array$T($tmp449, ((frost$core$Object*) param1));
// line 149
frost$collections$HashMap** $tmp450 = &param0->classes;
frost$collections$HashMap* $tmp451 = *$tmp450;
org$frostlang$frostc$ClassDecl* $tmp452 = *(&local4);
frost$core$String** $tmp453 = &$tmp452->name;
frost$core$String* $tmp454 = *$tmp453;
org$frostlang$frostc$ClassDecl* $tmp455 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp451, ((frost$collections$Key*) $tmp454), ((frost$core$Object*) $tmp455));
// line 150
org$frostlang$frostc$ClassDecl* $tmp456 = *(&local4);
frost$collections$Stack** $tmp457 = &param0->currentClass;
frost$collections$Stack* $tmp458 = *$tmp457;
frost$core$Int64 $tmp459 = (frost$core$Int64) {0};
frost$core$Object* $tmp460 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp458, $tmp459);
frost$core$Weak* $tmp461 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp461, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp460)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
frost$core$Weak** $tmp462 = &$tmp456->owner;
frost$core$Weak* $tmp463 = *$tmp462;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
frost$core$Weak** $tmp464 = &$tmp456->owner;
*$tmp464 = $tmp461;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
// unreffing REF($966:frost.core.Weak<org.frostlang.frostc.ClassDecl?>)
frost$core$Frost$unref$frost$core$Object$Q($tmp460);
// unreffing REF($963:frost.collections.Stack.T)
// line 151
org$frostlang$frostc$ClassDecl* $tmp465 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
org$frostlang$frostc$MethodDecl* $tmp466 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
// unreffing defaultCleanup
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp467 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
// unreffing initMethod
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$collections$Array* $tmp468 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
// unreffing parameters
*(&local6) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp469 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
// unreffing statements
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp470 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
// unreffing result
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp471 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
// unreffing supers
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp465;

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
// line 157
org$frostlang$frostc$Compiler$AutoScope* $tmp472 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp472, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
org$frostlang$frostc$Compiler$AutoScope* $tmp473 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local0) = $tmp472;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
// unreffing REF($1:org.frostlang.frostc.Compiler.AutoScope)
// line 158
frost$collections$Array* $tmp474 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp474);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$collections$Array* $tmp475 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local1) = $tmp474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
// unreffing REF($14:frost.collections.Array<org.frostlang.frostc.Type>)
// line 159
frost$core$Int64 $tmp476 = (frost$core$Int64) {0};
ITable* $tmp477 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp477->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp477 = $tmp477->next;
}
$fn479 $tmp478 = $tmp477->methods[0];
frost$core$Int64 $tmp480 = $tmp478(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp481 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp482 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp476, $tmp480, $tmp481);
frost$core$Int64 $tmp483 = $tmp482.min;
*(&local2) = $tmp483;
frost$core$Int64 $tmp484 = $tmp482.max;
frost$core$Bit $tmp485 = $tmp482.inclusive;
bool $tmp486 = $tmp485.value;
frost$core$Int64 $tmp487 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp488 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp487);
if ($tmp486) goto block4; else goto block5;
block4:;
int64_t $tmp489 = $tmp483.value;
int64_t $tmp490 = $tmp484.value;
bool $tmp491 = $tmp489 <= $tmp490;
frost$core$Bit $tmp492 = (frost$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block1; else goto block2;
block5:;
int64_t $tmp494 = $tmp483.value;
int64_t $tmp495 = $tmp484.value;
bool $tmp496 = $tmp494 < $tmp495;
frost$core$Bit $tmp497 = (frost$core$Bit) {$tmp496};
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block1; else goto block2;
block1:;
// line 160
frost$core$Int64 $tmp499 = *(&local2);
ITable* $tmp500 = param1->$class->itable;
while ($tmp500->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp500 = $tmp500->next;
}
$fn502 $tmp501 = $tmp500->methods[0];
frost$core$Object* $tmp503 = $tmp501(param1, $tmp499);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp503)));
org$frostlang$frostc$ASTNode* $tmp504 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp503);
frost$core$Frost$unref$frost$core$Object$Q($tmp503);
// unreffing REF($58:frost.collections.ListView.T)
// line 161
org$frostlang$frostc$ASTNode* $tmp505 = *(&local3);
frost$core$Int64* $tmp506 = &$tmp505->$rawValue;
frost$core$Int64 $tmp507 = *$tmp506;
frost$core$Int64 $tmp508 = (frost$core$Int64) {34};
frost$core$Bit $tmp509 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp507, $tmp508);
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block7; else goto block6;
block7:;
org$frostlang$frostc$Position* $tmp511 = (org$frostlang$frostc$Position*) ($tmp505->$data + 0);
org$frostlang$frostc$Position $tmp512 = *$tmp511;
*(&local4) = $tmp512;
frost$core$String** $tmp513 = (frost$core$String**) ($tmp505->$data + 16);
frost$core$String* $tmp514 = *$tmp513;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$String* $tmp515 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local5) = $tmp514;
org$frostlang$frostc$ASTNode** $tmp516 = (org$frostlang$frostc$ASTNode**) ($tmp505->$data + 24);
org$frostlang$frostc$ASTNode* $tmp517 = *$tmp516;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
org$frostlang$frostc$ASTNode* $tmp518 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
*(&local6) = $tmp517;
// line 163
org$frostlang$frostc$Scanner** $tmp519 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp520 = *$tmp519;
org$frostlang$frostc$ASTNode* $tmp521 = *(&local6);
org$frostlang$frostc$Type* $tmp522 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp520, $tmp521);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
org$frostlang$frostc$Type* $tmp523 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
*(&local7) = $tmp522;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
// unreffing REF($103:org.frostlang.frostc.Type)
// line 164
org$frostlang$frostc$Type* $tmp524 = *(&local7);
frost$core$Bit $tmp525 = frost$core$Bit$init$builtin_bit($tmp524 == NULL);
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block8; else goto block9;
block8:;
// line 165
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp527 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
// unreffing type
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp528 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
// unreffing rawType
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp529 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp530 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
// unreffing p
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp531 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
// unreffing parameterTypes
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp532 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
// unreffing scope
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block9:;
// line 167
org$frostlang$frostc$Type* $tmp533 = *(&local7);
frost$core$Bit $tmp534 = frost$core$Bit$init$builtin_bit($tmp533 != NULL);
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp536 = (frost$core$Int64) {167};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s537, $tmp536, &$s538);
abort(); // unreachable
block10:;
org$frostlang$frostc$Type* $tmp539 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp533);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
org$frostlang$frostc$Type* $tmp540 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
*(&local7) = $tmp539;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
// unreffing REF($165:org.frostlang.frostc.Type?)
// line 168
org$frostlang$frostc$Type* $tmp541 = *(&local7);
frost$core$Bit $tmp542 = frost$core$Bit$init$builtin_bit($tmp541 == NULL);
bool $tmp543 = $tmp542.value;
if ($tmp543) goto block12; else goto block13;
block12:;
// line 169
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp544 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
// unreffing type
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp545 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
// unreffing rawType
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp546 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp547 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
// unreffing p
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp548 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// unreffing parameterTypes
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp549 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
// unreffing scope
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block13:;
// line 171
frost$collections$Array* $tmp550 = *(&local1);
org$frostlang$frostc$Type* $tmp551 = *(&local7);
frost$core$Bit $tmp552 = frost$core$Bit$init$builtin_bit($tmp551 != NULL);
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp554 = (frost$core$Int64) {171};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s555, $tmp554, &$s556);
abort(); // unreachable
block14:;
frost$collections$Array$add$frost$collections$Array$T($tmp550, ((frost$core$Object*) $tmp551));
// line 172
org$frostlang$frostc$SymbolTable** $tmp557 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp558 = *$tmp557;
org$frostlang$frostc$Variable* $tmp559 = (org$frostlang$frostc$Variable*) frostObjectAlloc(88, (frost$core$Class*) &org$frostlang$frostc$Variable$class);
org$frostlang$frostc$Position $tmp560 = *(&local4);
frost$core$Int64 $tmp561 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp562 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp561);
frost$core$String* $tmp563 = *(&local5);
org$frostlang$frostc$Type* $tmp564 = *(&local7);
frost$core$Bit $tmp565 = frost$core$Bit$init$builtin_bit($tmp564 != NULL);
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp567 = (frost$core$Int64) {172};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s568, $tmp567, &$s569);
abort(); // unreachable
block16:;
org$frostlang$frostc$Variable$Storage* $tmp570 = (org$frostlang$frostc$Variable$Storage*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Variable$Storage$class);
frost$core$Int64 $tmp571 = (frost$core$Int64) {1};
frost$core$Int64 $tmp572 = (frost$core$Int64) {18446744073709551615};
org$frostlang$frostc$Variable$Storage$init$frost$core$Int64$frost$core$Int64($tmp570, $tmp571, $tmp572);
org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage($tmp559, $tmp560, $tmp562, $tmp563, $tmp564, $tmp570);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp558, ((org$frostlang$frostc$Symbol*) $tmp559));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
// unreffing REF($246:org.frostlang.frostc.Variable.Storage)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
// unreffing REF($232:org.frostlang.frostc.Variable)
org$frostlang$frostc$Type* $tmp573 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
// unreffing type
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp574 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
// unreffing rawType
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp575 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
goto block6;
block6:;
org$frostlang$frostc$ASTNode* $tmp576 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
// unreffing p
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp577 = *(&local2);
int64_t $tmp578 = $tmp484.value;
int64_t $tmp579 = $tmp577.value;
int64_t $tmp580 = $tmp578 - $tmp579;
frost$core$Int64 $tmp581 = (frost$core$Int64) {$tmp580};
frost$core$UInt64 $tmp582 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp581);
if ($tmp486) goto block19; else goto block20;
block19:;
uint64_t $tmp583 = $tmp582.value;
uint64_t $tmp584 = $tmp488.value;
bool $tmp585 = $tmp583 >= $tmp584;
frost$core$Bit $tmp586 = (frost$core$Bit) {$tmp585};
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block18; else goto block2;
block20:;
uint64_t $tmp588 = $tmp582.value;
uint64_t $tmp589 = $tmp488.value;
bool $tmp590 = $tmp588 > $tmp589;
frost$core$Bit $tmp591 = (frost$core$Bit) {$tmp590};
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block18; else goto block2;
block18:;
int64_t $tmp593 = $tmp577.value;
int64_t $tmp594 = $tmp487.value;
int64_t $tmp595 = $tmp593 + $tmp594;
frost$core$Int64 $tmp596 = (frost$core$Int64) {$tmp595};
*(&local2) = $tmp596;
goto block1;
block2:;
// line 177
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 178
frost$core$Int64* $tmp597 = &param3->$rawValue;
frost$core$Int64 $tmp598 = *$tmp597;
frost$core$Int64 $tmp599 = (frost$core$Int64) {3};
frost$core$Bit $tmp600 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp598, $tmp599);
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Type** $tmp602 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp603 = *$tmp602;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
org$frostlang$frostc$Type* $tmp604 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
*(&local9) = $tmp603;
// line 180
org$frostlang$frostc$Type* $tmp605 = *(&local9);
org$frostlang$frostc$Type* $tmp606 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp605);
frost$core$Bit $tmp607 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp606);
bool $tmp608 = $tmp607.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
// unreffing REF($326:org.frostlang.frostc.Type)
if ($tmp608) goto block24; else goto block25;
block24:;
// line 181
org$frostlang$frostc$Type* $tmp609 = *(&local9);
org$frostlang$frostc$Type* $tmp610 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp609);
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
org$frostlang$frostc$Type* $tmp611 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local10) = $tmp610;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
// unreffing REF($335:org.frostlang.frostc.Type)
// line 185
frost$collections$HashMap** $tmp612 = &param0->binaryTypes;
frost$collections$HashMap* $tmp613 = *$tmp612;
*(&local11) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$collections$HashMap* $tmp614 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local11) = $tmp613;
// line 186
frost$collections$HashMap* $tmp615 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp615);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$collections$HashMap** $tmp616 = &param0->binaryTypes;
frost$collections$HashMap* $tmp617 = *$tmp616;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
frost$collections$HashMap** $tmp618 = &param0->binaryTypes;
*$tmp618 = $tmp615;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// unreffing REF($357:frost.collections.HashMap<org.frostlang.frostc.Compiler.BinaryKey, frost.collections.ListView<org.frostlang.frostc.Type>?>)
// line 187
org$frostlang$frostc$Type* $tmp619 = *(&local10);
org$frostlang$frostc$Pair* $tmp620 = org$frostlang$frostc$Compiler$computeCoercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, param2, $tmp619);
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
org$frostlang$frostc$Pair* $tmp621 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
*(&local12) = $tmp620;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
// unreffing REF($373:org.frostlang.frostc.Pair<org.frostlang.frostc.Type, frost.core.Int64>?)
// line 188
frost$collections$HashMap* $tmp622 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
frost$collections$HashMap** $tmp623 = &param0->binaryTypes;
frost$collections$HashMap* $tmp624 = *$tmp623;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$collections$HashMap** $tmp625 = &param0->binaryTypes;
*$tmp625 = $tmp622;
// line 189
org$frostlang$frostc$Pair* $tmp626 = *(&local12);
frost$core$Bit $tmp627 = frost$core$Bit$init$builtin_bit($tmp626 == NULL);
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block26; else goto block27;
block26:;
// line 190
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
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
org$frostlang$frostc$Type* $tmp632 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
// unreffing t
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp633 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
// unreffing returnType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp634 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
// unreffing parameterTypes
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp635 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
// unreffing scope
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block27:;
// line 192
org$frostlang$frostc$Pair* $tmp636 = *(&local12);
frost$core$Bit $tmp637 = frost$core$Bit$init$builtin_bit($tmp636 != NULL);
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp639 = (frost$core$Int64) {192};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s640, $tmp639, &$s641);
abort(); // unreachable
block28:;
frost$core$Object** $tmp642 = &$tmp636->first;
frost$core$Object* $tmp643 = *$tmp642;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp643)));
org$frostlang$frostc$Type* $tmp644 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
*(&local8) = ((org$frostlang$frostc$Type*) $tmp643);
org$frostlang$frostc$Pair* $tmp645 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
// unreffing cost
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp646 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
// unreffing oldBinaryTypes
*(&local11) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp647 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
// unreffing target
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block25;
block25:;
org$frostlang$frostc$Type* $tmp648 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
// unreffing t
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block21;
block23:;
// line 196
org$frostlang$frostc$Type* $tmp649 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
org$frostlang$frostc$Type* $tmp650 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local8) = $tmp649;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
// unreffing REF($482:org.frostlang.frostc.Type?)
goto block21;
block21:;
// line 199
org$frostlang$frostc$Type* $tmp651 = *(&local8);
frost$core$Bit $tmp652 = frost$core$Bit$init$builtin_bit($tmp651 == NULL);
bool $tmp653 = $tmp652.value;
if ($tmp653) goto block30; else goto block31;
block30:;
// line 200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp654 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
// unreffing returnType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp655 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
// unreffing parameterTypes
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp656 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
// unreffing scope
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block31:;
// line 202
org$frostlang$frostc$Position $tmp657 = org$frostlang$frostc$Position$init();
frost$core$Int64 $tmp658 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp659 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp658);
frost$collections$Array* $tmp660 = *(&local1);
org$frostlang$frostc$Type* $tmp661 = *(&local8);
frost$core$Bit $tmp662 = frost$core$Bit$init$builtin_bit($tmp661 != NULL);
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp664 = (frost$core$Int64) {202};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s665, $tmp664, &$s666);
abort(); // unreachable
block32:;
frost$core$Int64 $tmp667 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp668 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp657, $tmp659, ((frost$collections$ListView*) $tmp660), $tmp661, $tmp667);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
// unreffing REF($534:org.frostlang.frostc.Type)
org$frostlang$frostc$Type* $tmp669 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
// unreffing returnType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp670 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
// unreffing parameterTypes
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp671 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
// unreffing scope
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return $tmp668;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Closure$compileTypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$IR$Value* local0 = NULL;
frost$core$Bit local1;
frost$core$Bit local2;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
// line 210
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
// line 211
org$frostlang$frostc$Type* $tmp672 = org$frostlang$frostc$expression$Closure$typedLambdaType$org$frostlang$frostc$Compiler$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Type$Q(param0, ((frost$collections$ListView*) param2), param3, param4);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
org$frostlang$frostc$Type* $tmp673 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
*(&local4) = $tmp672;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
// unreffing REF($38:org.frostlang.frostc.Type?)
// line 212
org$frostlang$frostc$Type* $tmp674 = *(&local4);
frost$core$Bit $tmp675 = frost$core$Bit$init$builtin_bit($tmp674 != NULL);
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block10; else goto block12;
block10:;
// line 213
org$frostlang$frostc$Type* $tmp677 = *(&local4);
frost$core$Bit $tmp678 = frost$core$Bit$init$builtin_bit($tmp677 != NULL);
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp680 = (frost$core$Int64) {213};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s681, $tmp680, &$s682);
abort(); // unreachable
block13:;
org$frostlang$frostc$Type* $tmp683 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp677);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
org$frostlang$frostc$Type* $tmp684 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
*(&local3) = $tmp683;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
// unreffing REF($65:org.frostlang.frostc.Type)
goto block11;
block12:;
// line 1
// line 218
org$frostlang$frostc$Type* $tmp685 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
org$frostlang$frostc$Type* $tmp686 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
*(&local3) = $tmp685;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
// unreffing REF($78:org.frostlang.frostc.Type)
// line 219
frost$core$Int64* $tmp687 = &param4->$rawValue;
frost$core$Int64 $tmp688 = *$tmp687;
frost$core$Int64 $tmp689 = (frost$core$Int64) {3};
frost$core$Bit $tmp690 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp688, $tmp689);
bool $tmp691 = $tmp690.value;
if ($tmp691) goto block16; else goto block15;
block16:;
org$frostlang$frostc$Type** $tmp692 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp693 = *$tmp692;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
org$frostlang$frostc$Type* $tmp694 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
*(&local5) = $tmp693;
// line 221
org$frostlang$frostc$Type* $tmp695 = *(&local5);
org$frostlang$frostc$Type* $tmp696 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp695);
frost$core$Bit $tmp697 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp696);
bool $tmp698 = $tmp697.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
// unreffing REF($106:org.frostlang.frostc.Type)
if ($tmp698) goto block17; else goto block18;
block17:;
// line 222
org$frostlang$frostc$Type* $tmp699 = *(&local5);
org$frostlang$frostc$Type* $tmp700 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp699);
org$frostlang$frostc$Type* $tmp701 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp700);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
org$frostlang$frostc$Type* $tmp702 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
*(&local3) = $tmp701;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
// unreffing REF($116:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
// unreffing REF($115:org.frostlang.frostc.Type)
goto block18;
block18:;
org$frostlang$frostc$Type* $tmp703 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
// unreffing t
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
goto block15;
block15:;
goto block11;
block11:;
// line 227
frost$core$Int64 $tmp704 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp705 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp704);
org$frostlang$frostc$ASTNode* $tmp706 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp707 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp708 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp709 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp710 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp708, $tmp709, $tmp710);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp706, $tmp707, param1, $tmp708);
frost$collections$Array* $tmp711 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp712 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp711, $tmp712);
org$frostlang$frostc$ASTNode* $tmp713 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp714 = (frost$core$Int64) {38};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp713, $tmp714, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp711, ((frost$core$Object*) $tmp713));
org$frostlang$frostc$IR$Value* $tmp715 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp705, param2, $tmp706, ((org$frostlang$frostc$FixedArray*) $tmp711), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
// unreffing REF($160:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
// unreffing REF($153:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
// unreffing REF($148:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
// unreffing REF($142:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
// unreffing REF($140:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$Type* $tmp716 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
// unreffing lambdaType
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp717 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
// unreffing returnType
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = $tmp715;
goto block1;
block1:;
org$frostlang$frostc$IR$Value* $tmp718 = *(&local0);
frost$core$Bit $tmp719 = frost$core$Bit$init$builtin_bit($tmp718 != NULL);
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block2; else goto block3;
block2:;
*(&local2) = $tmp719;
goto block4;
block3:;
frost$core$Int64* $tmp721 = &param0->errorCount;
frost$core$Int64 $tmp722 = *$tmp721;
frost$core$Int64 $tmp723 = (frost$core$Int64) {0};
int64_t $tmp724 = $tmp722.value;
int64_t $tmp725 = $tmp723.value;
bool $tmp726 = $tmp724 > $tmp725;
frost$core$Bit $tmp727 = (frost$core$Bit) {$tmp726};
*(&local2) = $tmp727;
goto block4;
block4:;
frost$core$Bit $tmp728 = *(&local2);
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block5; else goto block6;
block5:;
*(&local1) = $tmp728;
goto block7;
block6:;
frost$core$Bit* $tmp730 = &param0->reportErrors;
frost$core$Bit $tmp731 = *$tmp730;
frost$core$Bit $tmp732 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp731);
*(&local1) = $tmp732;
goto block7;
block7:;
frost$core$Bit $tmp733 = *(&local1);
bool $tmp734 = $tmp733.value;
if ($tmp734) goto block8; else goto block9;
block8:;
org$frostlang$frostc$IR$Value* $tmp735 = *(&local0);
return $tmp735;
block9:;
frost$core$Int64 $tmp736 = (frost$core$Int64) {208};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s737, $tmp736, &$s738);
abort(); // unreachable

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$IR$Value* local0 = NULL;
frost$core$Bit local1;
frost$core$Bit local2;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
frost$collections$Array* local5 = NULL;
frost$core$Int64 local6;
org$frostlang$frostc$Position local7;
frost$core$String* local8 = NULL;
org$frostlang$frostc$Type* local9 = NULL;
frost$collections$HashSet* local10 = NULL;
frost$core$MutableString* local11 = NULL;
frost$threads$MessageQueue* local12 = NULL;
org$frostlang$frostc$Type* local13 = NULL;
// line 236
frost$core$Int64* $tmp739 = &param4->$rawValue;
frost$core$Int64 $tmp740 = *$tmp739;
frost$core$Int64 $tmp741 = (frost$core$Int64) {3};
frost$core$Bit $tmp742 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp740, $tmp741);
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block11; else goto block10;
block11:;
org$frostlang$frostc$Type** $tmp744 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp745 = *$tmp744;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
org$frostlang$frostc$Type* $tmp746 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
*(&local3) = $tmp745;
// line 238
org$frostlang$frostc$Type* $tmp747 = *(&local3);
org$frostlang$frostc$Type* $tmp748 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp747);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
org$frostlang$frostc$Type* $tmp749 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local4) = $tmp748;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
// unreffing REF($52:org.frostlang.frostc.Type)
// line 239
org$frostlang$frostc$Type* $tmp750 = *(&local4);
frost$core$Bit $tmp751 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp750);
bool $tmp752 = $tmp751.value;
if ($tmp752) goto block12; else goto block13;
block12:;
// line 240
ITable* $tmp753 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp753->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp753 = $tmp753->next;
}
$fn755 $tmp754 = $tmp753->methods[0];
frost$core$Int64 $tmp756 = $tmp754(((frost$collections$CollectionView*) param2));
org$frostlang$frostc$Type* $tmp757 = *(&local4);
frost$core$Int64 $tmp758 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp757);
int64_t $tmp759 = $tmp756.value;
int64_t $tmp760 = $tmp758.value;
bool $tmp761 = $tmp759 != $tmp760;
frost$core$Bit $tmp762 = (frost$core$Bit) {$tmp761};
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block14; else goto block15;
block14:;
// line 241
org$frostlang$frostc$Type* $tmp764 = *(&local3);
frost$core$String* $tmp765 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s766, ((frost$core$Object*) $tmp764));
frost$core$String* $tmp767 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp765, &$s768);
frost$core$String* $tmp769 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp767, &$s770);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp769);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
// unreffing REF($85:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
// unreffing REF($84:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
// unreffing REF($83:frost.core.String)
// line 243
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp771 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
// unreffing methodType
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp772 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
// unreffing t
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block15:;
// line 245
frost$collections$Array* $tmp773 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp773);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
frost$collections$Array* $tmp774 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
*(&local5) = $tmp773;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
// unreffing REF($112:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 246
frost$core$Int64 $tmp775 = (frost$core$Int64) {0};
ITable* $tmp776 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp776->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp776 = $tmp776->next;
}
$fn778 $tmp777 = $tmp776->methods[0];
frost$core$Int64 $tmp779 = $tmp777(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp780 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp781 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp775, $tmp779, $tmp780);
frost$core$Int64 $tmp782 = $tmp781.min;
*(&local6) = $tmp782;
frost$core$Int64 $tmp783 = $tmp781.max;
frost$core$Bit $tmp784 = $tmp781.inclusive;
bool $tmp785 = $tmp784.value;
frost$core$Int64 $tmp786 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp787 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp786);
if ($tmp785) goto block19; else goto block20;
block19:;
int64_t $tmp788 = $tmp782.value;
int64_t $tmp789 = $tmp783.value;
bool $tmp790 = $tmp788 <= $tmp789;
frost$core$Bit $tmp791 = (frost$core$Bit) {$tmp790};
bool $tmp792 = $tmp791.value;
if ($tmp792) goto block16; else goto block17;
block20:;
int64_t $tmp793 = $tmp782.value;
int64_t $tmp794 = $tmp783.value;
bool $tmp795 = $tmp793 < $tmp794;
frost$core$Bit $tmp796 = (frost$core$Bit) {$tmp795};
bool $tmp797 = $tmp796.value;
if ($tmp797) goto block16; else goto block17;
block16:;
// line 247
frost$core$Int64 $tmp798 = *(&local6);
frost$core$Object* $tmp799 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(param2, $tmp798);
frost$core$Int64* $tmp800 = &((org$frostlang$frostc$ASTNode*) $tmp799)->$rawValue;
frost$core$Int64 $tmp801 = *$tmp800;
frost$core$Int64 $tmp802 = (frost$core$Int64) {22};
frost$core$Bit $tmp803 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp801, $tmp802);
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp805 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$ASTNode*) $tmp799)->$data + 0);
org$frostlang$frostc$Position $tmp806 = *$tmp805;
*(&local7) = $tmp806;
frost$core$String** $tmp807 = (frost$core$String**) (((org$frostlang$frostc$ASTNode*) $tmp799)->$data + 16);
frost$core$String* $tmp808 = *$tmp807;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
frost$core$String* $tmp809 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
*(&local8) = $tmp808;
// line 249
frost$collections$Array* $tmp810 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp811 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp812 = (frost$core$Int64) {34};
org$frostlang$frostc$Position $tmp813 = *(&local7);
frost$core$String* $tmp814 = *(&local8);
org$frostlang$frostc$ASTNode* $tmp815 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp816 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp817 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp818 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp819 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp820 = *(&local4);
frost$core$Int64 $tmp821 = *(&local6);
org$frostlang$frostc$Type* $tmp822 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp820, $tmp821);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp818, $tmp819, $tmp822);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp815, $tmp816, $tmp817, $tmp818);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp811, $tmp812, $tmp813, $tmp814, $tmp815);
frost$collections$Array$add$frost$collections$Array$T($tmp810, ((frost$core$Object*) $tmp811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// unreffing REF($189:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
// unreffing REF($185:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
// unreffing REF($182:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
// unreffing REF($178:org.frostlang.frostc.ASTNode)
frost$core$String* $tmp823 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
// unreffing name
*(&local8) = ((frost$core$String*) NULL);
goto block21;
block23:;
// line 254
frost$core$Bit $tmp824 = frost$core$Bit$init$builtin_bit(false);
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp826 = (frost$core$Int64) {254};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s827, $tmp826);
abort(); // unreachable
block24:;
goto block21;
block21:;
frost$core$Frost$unref$frost$core$Object$Q($tmp799);
// unreffing REF($155:org.frostlang.frostc.FixedArray.T)
goto block18;
block18:;
frost$core$Int64 $tmp828 = *(&local6);
int64_t $tmp829 = $tmp783.value;
int64_t $tmp830 = $tmp828.value;
int64_t $tmp831 = $tmp829 - $tmp830;
frost$core$Int64 $tmp832 = (frost$core$Int64) {$tmp831};
frost$core$UInt64 $tmp833 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp832);
if ($tmp785) goto block27; else goto block28;
block27:;
uint64_t $tmp834 = $tmp833.value;
uint64_t $tmp835 = $tmp787.value;
bool $tmp836 = $tmp834 >= $tmp835;
frost$core$Bit $tmp837 = (frost$core$Bit) {$tmp836};
bool $tmp838 = $tmp837.value;
if ($tmp838) goto block26; else goto block17;
block28:;
uint64_t $tmp839 = $tmp833.value;
uint64_t $tmp840 = $tmp787.value;
bool $tmp841 = $tmp839 > $tmp840;
frost$core$Bit $tmp842 = (frost$core$Bit) {$tmp841};
bool $tmp843 = $tmp842.value;
if ($tmp843) goto block26; else goto block17;
block26:;
int64_t $tmp844 = $tmp828.value;
int64_t $tmp845 = $tmp786.value;
int64_t $tmp846 = $tmp844 + $tmp845;
frost$core$Int64 $tmp847 = (frost$core$Int64) {$tmp846};
*(&local6) = $tmp847;
goto block16;
block17:;
// line 258
org$frostlang$frostc$Type* $tmp848 = *(&local3);
org$frostlang$frostc$Type* $tmp849 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp848);
org$frostlang$frostc$Type* $tmp850 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp849);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
org$frostlang$frostc$Type* $tmp851 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
*(&local9) = $tmp850;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
// unreffing REF($253:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
// unreffing REF($252:org.frostlang.frostc.Type)
// line 259
frost$core$Int64 $tmp852 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp853 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp852);
frost$collections$Array* $tmp854 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp855 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp854);
org$frostlang$frostc$ASTNode* $tmp856 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp857 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp858 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp859 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp860 = *(&local9);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp858, $tmp859, $tmp860);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp856, $tmp857, param1, $tmp858);
frost$collections$Array* $tmp861 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp862 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp861, $tmp862);
org$frostlang$frostc$ASTNode* $tmp863 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp864 = (frost$core$Int64) {38};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp863, $tmp864, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp861, ((frost$core$Object*) $tmp863));
org$frostlang$frostc$FixedArray* $tmp865 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp861);
org$frostlang$frostc$IR$Value* $tmp866 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp853, $tmp855, $tmp856, $tmp865, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
// unreffing REF($296:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
// unreffing REF($294:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
// unreffing REF($287:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
// unreffing REF($282:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
// unreffing REF($276:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
// unreffing REF($274:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
// unreffing REF($272:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
org$frostlang$frostc$Type* $tmp867 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
// unreffing returnType
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp868 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
// unreffing parameters
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp869 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
// unreffing methodType
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp870 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
// unreffing t
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = $tmp866;
goto block1;
block13:;
org$frostlang$frostc$Type* $tmp871 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
// unreffing methodType
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp872 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
// unreffing t
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block10;
block10:;
// line 267
frost$collections$IdentityMap** $tmp873 = &param0->lambdaTypes;
frost$collections$IdentityMap* $tmp874 = *$tmp873;
frost$core$Object* $tmp875 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp874, ((frost$core$Object*) param3));
*(&local10) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp875)));
frost$collections$HashSet* $tmp876 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
*(&local10) = ((frost$collections$HashSet*) $tmp875);
frost$core$Frost$unref$frost$core$Object$Q($tmp875);
// unreffing REF($358:frost.collections.IdentityMap.V?)
// line 268
frost$collections$HashSet* $tmp877 = *(&local10);
frost$core$Bit $tmp878 = frost$core$Bit$init$builtin_bit($tmp877 != NULL);
bool $tmp879 = $tmp878.value;
if ($tmp879) goto block29; else goto block30;
block29:;
// line 269
frost$collections$HashSet* $tmp880 = *(&local10);
frost$core$Bit $tmp881 = frost$core$Bit$init$builtin_bit($tmp880 != NULL);
bool $tmp882 = $tmp881.value;
if ($tmp882) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp883 = (frost$core$Int64) {269};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s884, $tmp883, &$s885);
abort(); // unreachable
block33:;
ITable* $tmp886 = ((frost$collections$CollectionView*) $tmp880)->$class->itable;
while ($tmp886->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp886 = $tmp886->next;
}
$fn888 $tmp887 = $tmp886->methods[0];
frost$core$Int64 $tmp889 = $tmp887(((frost$collections$CollectionView*) $tmp880));
frost$core$Int64 $tmp890 = (frost$core$Int64) {1};
int64_t $tmp891 = $tmp889.value;
int64_t $tmp892 = $tmp890.value;
bool $tmp893 = $tmp891 > $tmp892;
frost$core$Bit $tmp894 = (frost$core$Bit) {$tmp893};
bool $tmp895 = $tmp894.value;
if ($tmp895) goto block31; else goto block35;
block31:;
// line 270
frost$core$MutableString* $tmp896 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp896, &$s897);
*(&local11) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
frost$core$MutableString* $tmp898 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
*(&local11) = $tmp896;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
// unreffing REF($396:frost.core.MutableString)
// line 271
frost$threads$MessageQueue** $tmp899 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp900 = *$tmp899;
*(&local12) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$threads$MessageQueue* $tmp901 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
*(&local12) = $tmp900;
// line 272
frost$collections$HashSet* $tmp902 = *(&local10);
frost$core$Bit $tmp903 = frost$core$Bit$init$builtin_bit($tmp902 != NULL);
bool $tmp904 = $tmp903.value;
if ($tmp904) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp905 = (frost$core$Int64) {272};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s906, $tmp905, &$s907);
abort(); // unreachable
block36:;
ITable* $tmp908 = ((frost$collections$Iterable*) $tmp902)->$class->itable;
while ($tmp908->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp908 = $tmp908->next;
}
$fn910 $tmp909 = $tmp908->methods[0];
frost$collections$Iterator* $tmp911 = $tmp909(((frost$collections$Iterable*) $tmp902));
goto block38;
block38:;
ITable* $tmp912 = $tmp911->$class->itable;
while ($tmp912->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp912 = $tmp912->next;
}
$fn914 $tmp913 = $tmp912->methods[0];
frost$core$Bit $tmp915 = $tmp913($tmp911);
bool $tmp916 = $tmp915.value;
if ($tmp916) goto block40; else goto block39;
block39:;
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp917 = $tmp911->$class->itable;
while ($tmp917->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp917 = $tmp917->next;
}
$fn919 $tmp918 = $tmp917->methods[1];
frost$core$Object* $tmp920 = $tmp918($tmp911);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp920)));
org$frostlang$frostc$Type* $tmp921 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
*(&local13) = ((org$frostlang$frostc$Type*) $tmp920);
// line 273
frost$core$MutableString* $tmp922 = *(&local11);
org$frostlang$frostc$Type* $tmp923 = *(&local13);
frost$core$String* $tmp924 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s925, ((frost$core$Object*) $tmp923));
frost$core$String* $tmp926 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp924, &$s927);
frost$core$MutableString$append$frost$core$String($tmp922, $tmp926);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
// unreffing REF($454:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
// unreffing REF($453:frost.core.String)
// line 274
frost$threads$MessageQueue* $tmp928 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp928);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$threads$MessageQueue** $tmp929 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp930 = *$tmp929;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
frost$threads$MessageQueue** $tmp931 = &param0->errorQueue;
*$tmp931 = $tmp928;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
// unreffing REF($463:frost.threads.MessageQueue<org.frostlang.frostc.Compiler.ErrorMsg>)
// line 275
org$frostlang$frostc$Compiler$TypeContext* $tmp932 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp933 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp934 = *(&local13);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp932, $tmp933, $tmp934);
org$frostlang$frostc$IR$Value* $tmp935 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp932);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
// unreffing REF($482:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
// unreffing REF($478:org.frostlang.frostc.Compiler.TypeContext)
// line 277
frost$threads$MessageQueue** $tmp936 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp937 = *$tmp936;
frost$core$Bit $tmp938 = frost$threads$MessageQueue$hasMessage$R$frost$core$Bit($tmp937);
bool $tmp939 = $tmp938.value;
if ($tmp939) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp940 = (frost$core$Int64) {277};
org$frostlang$frostc$Position$wrapper* $tmp941;
$tmp941 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp941->value = param1;
frost$core$String* $tmp942 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s943, ((frost$core$Object*) $tmp941));
frost$core$String* $tmp944 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp942, &$s945);
org$frostlang$frostc$Type* $tmp946 = *(&local13);
frost$core$String* $tmp947 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s948, ((frost$core$Object*) $tmp946));
frost$core$String* $tmp949 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp947, &$s950);
frost$core$String* $tmp951 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp944, $tmp949);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s952, $tmp940, $tmp951);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
// unreffing REF($504:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
// unreffing REF($503:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
// unreffing REF($502:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
// unreffing REF($499:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
// unreffing REF($498:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
// unreffing REF($497:frost.core.Object)
abort(); // unreachable
block41:;
// line 280
frost$core$MutableString* $tmp953 = *(&local11);
frost$threads$MessageQueue** $tmp954 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp955 = *$tmp954;
frost$core$Immutable* $tmp956 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp955);
frost$core$String** $tmp957 = &((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp956)->message;
frost$core$String* $tmp958 = *$tmp957;
frost$core$String* $tmp959 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s960, $tmp958);
frost$core$String* $tmp961 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp959, &$s962);
frost$core$MutableString$append$frost$core$String($tmp953, $tmp961);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
// unreffing REF($535:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
// unreffing REF($534:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
// unreffing REF($530:frost.threads.MessageQueue.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp920);
// unreffing REF($441:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp963 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
// unreffing t
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
goto block38;
block40:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
// unreffing REF($430:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 282
frost$threads$MessageQueue* $tmp964 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
frost$threads$MessageQueue** $tmp965 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp966 = *$tmp965;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$threads$MessageQueue** $tmp967 = &param0->errorQueue;
*$tmp967 = $tmp964;
// line 283
frost$core$MutableString* $tmp968 = *(&local11);
frost$core$String* $tmp969 = frost$core$MutableString$finish$R$frost$core$String($tmp968);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp969);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
// unreffing REF($570:frost.core.String)
// line 284
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$threads$MessageQueue* $tmp970 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
// unreffing old
*(&local12) = ((frost$threads$MessageQueue*) NULL);
frost$core$MutableString* $tmp971 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
// unreffing msg
*(&local11) = ((frost$core$MutableString*) NULL);
frost$collections$HashSet* $tmp972 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
// unreffing attempts
*(&local10) = ((frost$collections$HashSet*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block35:;
// line 1
// line 287
org$frostlang$frostc$Compiler$TypeContext* $tmp973 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp974 = (frost$core$Int64) {3};
frost$collections$HashSet* $tmp975 = *(&local10);
frost$core$Bit $tmp976 = frost$core$Bit$init$builtin_bit($tmp975 != NULL);
bool $tmp977 = $tmp976.value;
if ($tmp977) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp978 = (frost$core$Int64) {288};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s979, $tmp978, &$s980);
abort(); // unreachable
block43:;
ITable* $tmp981 = ((frost$collections$Iterable*) $tmp975)->$class->itable;
while ($tmp981->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp981 = $tmp981->next;
}
$fn983 $tmp982 = $tmp981->methods[0];
frost$collections$Iterator* $tmp984 = $tmp982(((frost$collections$Iterable*) $tmp975));
ITable* $tmp985 = $tmp984->$class->itable;
while ($tmp985->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp985 = $tmp985->next;
}
$fn987 $tmp986 = $tmp985->methods[1];
frost$core$Object* $tmp988 = $tmp986($tmp984);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp973, $tmp974, ((org$frostlang$frostc$Type*) $tmp988));
org$frostlang$frostc$IR$Value* $tmp989 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp973);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
// unreffing REF($616:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp988);
// unreffing REF($613:frost.collections.Iterator.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
// unreffing REF($609:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
// unreffing REF($597:org.frostlang.frostc.Compiler.TypeContext)
// line 289
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp990 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
// unreffing attempts
*(&local10) = ((frost$collections$HashSet*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block32:;
goto block30;
block30:;
// line 292
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s991);
// line 294
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp992 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
// unreffing attempts
*(&local10) = ((frost$collections$HashSet*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block1:;
org$frostlang$frostc$IR$Value* $tmp993 = *(&local0);
frost$core$Bit $tmp994 = frost$core$Bit$init$builtin_bit($tmp993 != NULL);
bool $tmp995 = $tmp994.value;
if ($tmp995) goto block2; else goto block3;
block2:;
*(&local2) = $tmp994;
goto block4;
block3:;
frost$core$Int64* $tmp996 = &param0->errorCount;
frost$core$Int64 $tmp997 = *$tmp996;
frost$core$Int64 $tmp998 = (frost$core$Int64) {0};
int64_t $tmp999 = $tmp997.value;
int64_t $tmp1000 = $tmp998.value;
bool $tmp1001 = $tmp999 > $tmp1000;
frost$core$Bit $tmp1002 = (frost$core$Bit) {$tmp1001};
*(&local2) = $tmp1002;
goto block4;
block4:;
frost$core$Bit $tmp1003 = *(&local2);
bool $tmp1004 = $tmp1003.value;
if ($tmp1004) goto block5; else goto block6;
block5:;
*(&local1) = $tmp1003;
goto block7;
block6:;
frost$core$Bit* $tmp1005 = &param0->reportErrors;
frost$core$Bit $tmp1006 = *$tmp1005;
frost$core$Bit $tmp1007 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1006);
*(&local1) = $tmp1007;
goto block7;
block7:;
frost$core$Bit $tmp1008 = *(&local1);
bool $tmp1009 = $tmp1008.value;
if ($tmp1009) goto block8; else goto block9;
block8:;
org$frostlang$frostc$IR$Value* $tmp1010 = *(&local0);
return $tmp1010;
block9:;
frost$core$Int64 $tmp1011 = (frost$core$Int64) {234};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1012, $tmp1011, &$s1013);
abort(); // unreachable

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
// line 301
frost$core$Int64* $tmp1014 = &param0->closureCount;
frost$core$Int64 $tmp1015 = *$tmp1014;
frost$core$Int64 $tmp1016 = (frost$core$Int64) {1};
int64_t $tmp1017 = $tmp1015.value;
int64_t $tmp1018 = $tmp1016.value;
int64_t $tmp1019 = $tmp1017 + $tmp1018;
frost$core$Int64 $tmp1020 = (frost$core$Int64) {$tmp1019};
frost$core$Int64* $tmp1021 = &param0->closureCount;
*$tmp1021 = $tmp1020;
// line 302
frost$core$Int64* $tmp1022 = &param0->closureCount;
frost$core$Int64 $tmp1023 = *$tmp1022;
frost$core$Int64$wrapper* $tmp1024;
$tmp1024 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1024->value = $tmp1023;
frost$core$String* $tmp1025 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1026, ((frost$core$Object*) $tmp1024));
frost$core$String* $tmp1027 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1025, &$s1028);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
frost$core$String* $tmp1029 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
*(&local0) = $tmp1027;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
// unreffing REF($15:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
// unreffing REF($13:frost.core.Object)
// line 303
frost$collections$Array* $tmp1030 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1030);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
frost$collections$Array* $tmp1031 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
*(&local1) = $tmp1030;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
// unreffing REF($33:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
// line 304
ITable* $tmp1032 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp1032->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1032 = $tmp1032->next;
}
$fn1034 $tmp1033 = $tmp1032->methods[0];
frost$collections$Iterator* $tmp1035 = $tmp1033(((frost$collections$Iterable*) param3));
goto block1;
block1:;
ITable* $tmp1036 = $tmp1035->$class->itable;
while ($tmp1036->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1036 = $tmp1036->next;
}
$fn1038 $tmp1037 = $tmp1036->methods[0];
frost$core$Bit $tmp1039 = $tmp1037($tmp1035);
bool $tmp1040 = $tmp1039.value;
if ($tmp1040) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1041 = $tmp1035->$class->itable;
while ($tmp1041->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1041 = $tmp1041->next;
}
$fn1043 $tmp1042 = $tmp1041->methods[1];
frost$core$Object* $tmp1044 = $tmp1042($tmp1035);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1044)));
org$frostlang$frostc$ASTNode* $tmp1045 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp1044);
// line 305
org$frostlang$frostc$ASTNode* $tmp1046 = *(&local2);
frost$core$Int64* $tmp1047 = &$tmp1046->$rawValue;
frost$core$Int64 $tmp1048 = *$tmp1047;
frost$core$Int64 $tmp1049 = (frost$core$Int64) {34};
frost$core$Bit $tmp1050 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1048, $tmp1049);
bool $tmp1051 = $tmp1050.value;
if ($tmp1051) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp1052 = (org$frostlang$frostc$Position*) ($tmp1046->$data + 0);
org$frostlang$frostc$Position $tmp1053 = *$tmp1052;
frost$core$String** $tmp1054 = (frost$core$String**) ($tmp1046->$data + 16);
frost$core$String* $tmp1055 = *$tmp1054;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
frost$core$String* $tmp1056 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
*(&local3) = $tmp1055;
org$frostlang$frostc$ASTNode** $tmp1057 = (org$frostlang$frostc$ASTNode**) ($tmp1046->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1058 = *$tmp1057;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
org$frostlang$frostc$ASTNode* $tmp1059 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
*(&local4) = $tmp1058;
// line 307
org$frostlang$frostc$Scanner** $tmp1060 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1061 = *$tmp1060;
org$frostlang$frostc$ASTNode* $tmp1062 = *(&local4);
org$frostlang$frostc$Type* $tmp1063 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1061, $tmp1062);
org$frostlang$frostc$Type* $tmp1064 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1063);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
org$frostlang$frostc$Type* $tmp1065 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
*(&local5) = $tmp1064;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
// unreffing REF($102:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
// unreffing REF($101:org.frostlang.frostc.Type)
// line 308
org$frostlang$frostc$Type* $tmp1066 = *(&local5);
frost$core$Bit $tmp1067 = frost$core$Bit$init$builtin_bit($tmp1066 == NULL);
bool $tmp1068 = $tmp1067.value;
if ($tmp1068) goto block7; else goto block8;
block7:;
// line 309
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1069 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
// unreffing resolved
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1070 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
// unreffing type
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1071 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
// unreffing name
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1044);
// unreffing REF($61:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1072 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
// unreffing p
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
// unreffing REF($50:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$collections$Array* $tmp1073 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1074 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
// line 311
frost$collections$Array* $tmp1075 = *(&local1);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1076 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp1077 = *(&local3);
org$frostlang$frostc$Type* $tmp1078 = *(&local5);
frost$core$Bit $tmp1079 = frost$core$Bit$init$builtin_bit($tmp1078 != NULL);
bool $tmp1080 = $tmp1079.value;
if ($tmp1080) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1081 = (frost$core$Int64) {311};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1082, $tmp1081, &$s1083);
abort(); // unreachable
block9:;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp1076, $tmp1077, $tmp1078);
frost$collections$Array$add$frost$collections$Array$T($tmp1075, ((frost$core$Object*) $tmp1076));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
// unreffing REF($165:org.frostlang.frostc.MethodDecl.Parameter)
org$frostlang$frostc$Type* $tmp1084 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
// unreffing resolved
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1085 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
// unreffing type
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1086 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
// unreffing name
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 314
frost$core$Bit $tmp1087 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1088 = $tmp1087.value;
if ($tmp1088) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1089 = (frost$core$Int64) {314};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1090, $tmp1089);
abort(); // unreachable
block11:;
goto block4;
block4:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1044);
// unreffing REF($61:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1091 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
// unreffing p
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
// unreffing REF($50:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 318
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// line 319
frost$core$Bit $tmp1092 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp1093 = $tmp1092.value;
if ($tmp1093) goto block13; else goto block15;
block13:;
// line 320
org$frostlang$frostc$Scanner** $tmp1094 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1095 = *$tmp1094;
frost$core$Bit $tmp1096 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp1097 = $tmp1096.value;
if ($tmp1097) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp1098 = (frost$core$Int64) {320};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1099, $tmp1098, &$s1100);
abort(); // unreachable
block16:;
org$frostlang$frostc$Type* $tmp1101 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1095, param4);
org$frostlang$frostc$Type* $tmp1102 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1101);
frost$core$Bit $tmp1103 = frost$core$Bit$init$builtin_bit($tmp1102 != NULL);
bool $tmp1104 = $tmp1103.value;
if ($tmp1104) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp1105 = (frost$core$Int64) {320};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1106, $tmp1105, &$s1107);
abort(); // unreachable
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
org$frostlang$frostc$Type* $tmp1108 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
*(&local6) = $tmp1102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
// unreffing REF($237:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
// unreffing REF($236:org.frostlang.frostc.Type)
// line 321
org$frostlang$frostc$Type* $tmp1109 = *(&local6);
frost$core$Bit $tmp1110 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1111 = $tmp1110.value;
if ($tmp1111) goto block20; else goto block21;
block20:;
// line 322
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1112 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1113 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1114 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block21:;
goto block14;
block15:;
// line 1
// line 326
org$frostlang$frostc$Type* $tmp1115 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
org$frostlang$frostc$Type* $tmp1116 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
*(&local6) = $tmp1115;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
// unreffing REF($285:org.frostlang.frostc.Type)
// line 327
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1117;
$tmp1117 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1117->value = param2;
frost$core$Int64 $tmp1118 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp1119 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1118);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1120;
$tmp1120 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1120->value = $tmp1119;
ITable* $tmp1121 = ((frost$core$Equatable*) $tmp1117)->$class->itable;
while ($tmp1121->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1121 = $tmp1121->next;
}
$fn1123 $tmp1122 = $tmp1121->methods[0];
frost$core$Bit $tmp1124 = $tmp1122(((frost$core$Equatable*) $tmp1117), ((frost$core$Equatable*) $tmp1120));
bool $tmp1125 = $tmp1124.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1120)));
// unreffing REF($300:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1117)));
// unreffing REF($296:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp1125) goto block22; else goto block23;
block22:;
// line 328
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s1126);
// line 329
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1127 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1128 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1129 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block23:;
goto block14;
block14:;
// line 332
org$frostlang$frostc$Pair* $tmp1130 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Stack** $tmp1131 = &param0->currentMethod;
frost$collections$Stack* $tmp1132 = *$tmp1131;
frost$core$Int64 $tmp1133 = (frost$core$Int64) {0};
frost$core$Object* $tmp1134 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1132, $tmp1133);
frost$collections$HashMap* $tmp1135 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp1135);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1130, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1134)), ((frost$core$Object*) ((frost$collections$Map*) $tmp1135)));
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
org$frostlang$frostc$Pair* $tmp1136 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
*(&local7) = $tmp1130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
// unreffing REF($343:frost.collections.HashMap<frost.core.String, org.frostlang.frostc.Compiler.Capture>)
frost$core$Frost$unref$frost$core$Object$Q($tmp1134);
// unreffing REF($340:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
// unreffing REF($334:org.frostlang.frostc.Pair<org.frostlang.frostc.MethodDecl, frost.collections.Map<frost.core.String, org.frostlang.frostc.Compiler.Capture>>)
// line 334
frost$collections$Stack** $tmp1137 = &param0->captures;
frost$collections$Stack* $tmp1138 = *$tmp1137;
org$frostlang$frostc$Pair* $tmp1139 = *(&local7);
frost$collections$Stack$push$frost$collections$Stack$T($tmp1138, ((frost$core$Object*) $tmp1139));
// line 335
org$frostlang$frostc$Annotations* $tmp1140 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp1141 = (frost$core$Int64) {16};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp1140, $tmp1141);
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
org$frostlang$frostc$Annotations* $tmp1142 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
*(&local8) = $tmp1140;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
// unreffing REF($373:org.frostlang.frostc.Annotations)
// line 336
org$frostlang$frostc$MethodDecl* $tmp1143 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$collections$Stack** $tmp1144 = &param0->currentClass;
frost$collections$Stack* $tmp1145 = *$tmp1144;
frost$core$Int64 $tmp1146 = (frost$core$Int64) {0};
frost$core$Object* $tmp1147 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1145, $tmp1146);
org$frostlang$frostc$Annotations* $tmp1148 = *(&local8);
frost$core$String* $tmp1149 = *(&local0);
frost$collections$Array* $tmp1150 = *(&local1);
org$frostlang$frostc$Type* $tmp1151 = *(&local6);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp1143, ((org$frostlang$frostc$ClassDecl*) $tmp1147), param1, ((frost$core$String*) NULL), $tmp1148, param2, $tmp1149, ((frost$collections$Array*) NULL), $tmp1150, $tmp1151, param5);
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
org$frostlang$frostc$MethodDecl* $tmp1152 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
*(&local9) = $tmp1143;
frost$core$Frost$unref$frost$core$Object$Q($tmp1147);
// unreffing REF($392:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
// unreffing REF($387:org.frostlang.frostc.MethodDecl)
// line 340
frost$core$Bit* $tmp1153 = &param0->writeCode;
frost$core$Bit $tmp1154 = *$tmp1153;
*(&local10) = $tmp1154;
// line 341
frost$core$Bit* $tmp1155 = &param0->reportErrors;
frost$core$Bit $tmp1156 = *$tmp1155;
*(&local11) = $tmp1156;
// line 342
frost$core$Bit $tmp1157 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp1158 = &param0->writeCode;
*$tmp1158 = $tmp1157;
// line 343
frost$core$Bit $tmp1159 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp1160 = &param0->reportErrors;
*$tmp1160 = $tmp1159;
// line 344
frost$collections$Stack** $tmp1161 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1162 = *$tmp1161;
*(&local12) = ((frost$collections$Stack*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$collections$Stack* $tmp1163 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
*(&local12) = $tmp1162;
// line 345
frost$collections$Stack* $tmp1164 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp1164);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$collections$Stack** $tmp1165 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1166 = *$tmp1165;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$collections$Stack** $tmp1167 = &param0->enclosingContexts;
*$tmp1167 = $tmp1164;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
// unreffing REF($440:frost.collections.Stack<org.frostlang.frostc.Compiler.EnclosingContext>)
// line 346
org$frostlang$frostc$MethodDecl* $tmp1168 = *(&local9);
org$frostlang$frostc$SymbolTable** $tmp1169 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1170 = *$tmp1169;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp1168, $tmp1170);
// line 347
frost$collections$Stack* $tmp1171 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
frost$collections$Stack** $tmp1172 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1173 = *$tmp1172;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
frost$collections$Stack** $tmp1174 = &param0->enclosingContexts;
*$tmp1174 = $tmp1171;
// line 348
frost$core$Bit $tmp1175 = *(&local10);
frost$core$Bit* $tmp1176 = &param0->writeCode;
*$tmp1176 = $tmp1175;
// line 349
frost$core$Bit $tmp1177 = *(&local11);
frost$core$Bit* $tmp1178 = &param0->reportErrors;
*$tmp1178 = $tmp1177;
// line 351
// line 352
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 353
org$frostlang$frostc$Pair* $tmp1179 = *(&local7);
frost$core$Object** $tmp1180 = &$tmp1179->second;
frost$core$Object* $tmp1181 = *$tmp1180;
ITable* $tmp1182 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1181))->$class->itable;
while ($tmp1182->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1182 = $tmp1182->next;
}
$fn1184 $tmp1183 = $tmp1182->methods[0];
frost$core$Int64 $tmp1185 = $tmp1183(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1181)));
frost$core$Int64 $tmp1186 = (frost$core$Int64) {0};
int64_t $tmp1187 = $tmp1185.value;
int64_t $tmp1188 = $tmp1186.value;
bool $tmp1189 = $tmp1187 != $tmp1188;
frost$core$Bit $tmp1190 = (frost$core$Bit) {$tmp1189};
bool $tmp1191 = $tmp1190.value;
if ($tmp1191) goto block24; else goto block26;
block24:;
// line 355
org$frostlang$frostc$MethodDecl* $tmp1192 = *(&local9);
org$frostlang$frostc$Pair* $tmp1193 = *(&local7);
frost$core$Object** $tmp1194 = &$tmp1193->second;
frost$core$Object* $tmp1195 = *$tmp1194;
ITable* $tmp1196 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1195))->$class->itable;
while ($tmp1196->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1196 = $tmp1196->next;
}
$fn1198 $tmp1197 = $tmp1196->methods[4];
frost$collections$Iterator* $tmp1199 = $tmp1197(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1195)));
ITable* $tmp1200 = $tmp1199->$class->itable;
while ($tmp1200->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1200 = $tmp1200->next;
}
$fn1202 $tmp1201 = $tmp1200->methods[6];
frost$collections$Array* $tmp1203 = $tmp1201($tmp1199);
org$frostlang$frostc$ClassDecl* $tmp1204 = org$frostlang$frostc$expression$Closure$createClosureClass$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlang$frostc$Compiler$Capture$GT$R$org$frostlang$frostc$ClassDecl(param0, $tmp1192, ((frost$collections$CollectionView*) $tmp1203));
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
org$frostlang$frostc$ClassDecl* $tmp1205 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
*(&local15) = $tmp1204;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
// unreffing REF($513:org.frostlang.frostc.ClassDecl)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
// unreffing REF($510:frost.collections.Array<frost.collections.Iterator.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
// unreffing REF($506:frost.collections.Iterator<frost.collections.MapView.V>)
// line 356
frost$collections$Array* $tmp1206 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1206);
*(&local16) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$collections$Array* $tmp1207 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
*(&local16) = $tmp1206;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
// unreffing REF($531:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 357
org$frostlang$frostc$Pair* $tmp1208 = *(&local7);
frost$core$Object** $tmp1209 = &$tmp1208->second;
frost$core$Object* $tmp1210 = *$tmp1209;
ITable* $tmp1211 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1210))->$class->itable;
while ($tmp1211->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1211 = $tmp1211->next;
}
$fn1213 $tmp1212 = $tmp1211->methods[4];
frost$collections$Iterator* $tmp1214 = $tmp1212(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1210)));
goto block27;
block27:;
ITable* $tmp1215 = $tmp1214->$class->itable;
while ($tmp1215->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1215 = $tmp1215->next;
}
$fn1217 $tmp1216 = $tmp1215->methods[0];
frost$core$Bit $tmp1218 = $tmp1216($tmp1214);
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block29; else goto block28;
block28:;
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp1220 = $tmp1214->$class->itable;
while ($tmp1220->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1220 = $tmp1220->next;
}
$fn1222 $tmp1221 = $tmp1220->methods[1];
frost$core$Object* $tmp1223 = $tmp1221($tmp1214);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp1223)));
org$frostlang$frostc$Compiler$Capture* $tmp1224 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) $tmp1223);
// line 358
org$frostlang$frostc$Compiler$Capture* $tmp1225 = *(&local17);
frost$core$Int64* $tmp1226 = &$tmp1225->$rawValue;
frost$core$Int64 $tmp1227 = *$tmp1226;
frost$core$Int64 $tmp1228 = (frost$core$Int64) {0};
frost$core$Bit $tmp1229 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1227, $tmp1228);
bool $tmp1230 = $tmp1229.value;
if ($tmp1230) goto block31; else goto block32;
block31:;
org$frostlang$frostc$Variable** $tmp1231 = (org$frostlang$frostc$Variable**) ($tmp1225->$data + 0);
org$frostlang$frostc$Variable* $tmp1232 = *$tmp1231;
*(&local18) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
org$frostlang$frostc$Variable* $tmp1233 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
*(&local18) = $tmp1232;
// line 360
frost$collections$Array* $tmp1234 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1235 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1236 = (frost$core$Int64) {22};
org$frostlang$frostc$Variable* $tmp1237 = *(&local18);
frost$core$String** $tmp1238 = &((org$frostlang$frostc$Symbol*) $tmp1237)->name;
frost$core$String* $tmp1239 = *$tmp1238;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1235, $tmp1236, param1, $tmp1239);
frost$collections$Array$add$frost$collections$Array$T($tmp1234, ((frost$core$Object*) $tmp1235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
// unreffing REF($591:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$Variable* $tmp1240 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
// unreffing v
*(&local18) = ((org$frostlang$frostc$Variable*) NULL);
goto block30;
block32:;
frost$core$Int64 $tmp1241 = (frost$core$Int64) {2};
frost$core$Bit $tmp1242 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1227, $tmp1241);
bool $tmp1243 = $tmp1242.value;
if ($tmp1243) goto block33; else goto block34;
block33:;
// line 363
frost$collections$Array* $tmp1244 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1245 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1246 = (frost$core$Int64) {39};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1245, $tmp1246, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1244, ((frost$core$Object*) $tmp1245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
// unreffing REF($616:org.frostlang.frostc.ASTNode)
goto block30;
block34:;
frost$core$Int64 $tmp1247 = (frost$core$Int64) {1};
frost$core$Bit $tmp1248 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1227, $tmp1247);
bool $tmp1249 = $tmp1248.value;
if ($tmp1249) goto block35; else goto block30;
block35:;
org$frostlang$frostc$FieldDecl** $tmp1250 = (org$frostlang$frostc$FieldDecl**) ($tmp1225->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp1251 = *$tmp1250;
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
org$frostlang$frostc$FieldDecl* $tmp1252 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
*(&local19) = $tmp1251;
// line 366
frost$collections$Array* $tmp1253 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1254 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1255 = (frost$core$Int64) {16};
org$frostlang$frostc$ASTNode* $tmp1256 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1257 = (frost$core$Int64) {22};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1256, $tmp1257, param1, &$s1258);
org$frostlang$frostc$FieldDecl* $tmp1259 = *(&local19);
frost$core$String** $tmp1260 = &((org$frostlang$frostc$Symbol*) $tmp1259)->name;
frost$core$String* $tmp1261 = *$tmp1260;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp1254, $tmp1255, param1, $tmp1256, $tmp1261);
frost$collections$Array$add$frost$collections$Array$T($tmp1253, ((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
// unreffing REF($643:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
// unreffing REF($641:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$FieldDecl* $tmp1262 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
// unreffing f
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block30;
block30:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1223);
// unreffing REF($563:frost.collections.Iterator.T)
org$frostlang$frostc$Compiler$Capture* $tmp1263 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
// unreffing capture
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block27;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
// unreffing REF($552:frost.collections.Iterator<frost.collections.MapView.V>)
// line 372
frost$collections$Stack** $tmp1264 = &param0->captures;
frost$collections$Stack* $tmp1265 = *$tmp1264;
frost$core$Object* $tmp1266 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1265);
frost$core$Frost$unref$frost$core$Object$Q($tmp1266);
// unreffing REF($681:frost.collections.Stack.T)
// line 373
frost$collections$Array** $tmp1267 = &param0->pendingClasses;
frost$collections$Array* $tmp1268 = *$tmp1267;
org$frostlang$frostc$ClassDecl* $tmp1269 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp1268, ((frost$core$Object*) $tmp1269));
// line 374
org$frostlang$frostc$IR$Value* $tmp1270 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1271 = (frost$core$Int64) {14};
org$frostlang$frostc$ClassDecl* $tmp1272 = *(&local15);
org$frostlang$frostc$Type** $tmp1273 = &$tmp1272->type;
org$frostlang$frostc$Type* $tmp1274 = *$tmp1273;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1270, $tmp1271, $tmp1274);
frost$collections$Array* $tmp1275 = *(&local16);
org$frostlang$frostc$FixedArray* $tmp1276 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1275);
org$frostlang$frostc$Compiler$TypeContext* $tmp1277 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1278 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1277, $tmp1278);
org$frostlang$frostc$IR$Value* $tmp1279 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1270, ((frost$collections$ListView*) $tmp1276), $tmp1277);
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
org$frostlang$frostc$IR$Value* $tmp1280 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
*(&local20) = $tmp1279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
// unreffing REF($708:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
// unreffing REF($705:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
// unreffing REF($702:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
// unreffing REF($694:org.frostlang.frostc.IR.Value)
// line 376
org$frostlang$frostc$IR$Value* $tmp1281 = *(&local20);
frost$core$Bit $tmp1282 = frost$core$Bit$init$builtin_bit($tmp1281 == NULL);
bool $tmp1283 = $tmp1282.value;
if ($tmp1283) goto block36; else goto block37;
block36:;
// line 377
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1284 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
// unreffing rawTarget
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1285 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
// unreffing args
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1286 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
// unreffing cl
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp1287 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
// unreffing target
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp1288 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
// unreffing oldContexts
*(&local12) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1289 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
// unreffing methodDecl
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp1290 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
// unreffing annotations
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp1291 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
// unreffing currentCaptures
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1292 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1293 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1294 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block37:;
// line 379
org$frostlang$frostc$ASTNode* $tmp1295 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1296 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp1297 = *(&local20);
frost$core$Bit $tmp1298 = frost$core$Bit$init$builtin_bit($tmp1297 != NULL);
bool $tmp1299 = $tmp1298.value;
if ($tmp1299) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp1300 = (frost$core$Int64) {379};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1301, $tmp1300, &$s1302);
abort(); // unreachable
block38:;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1295, $tmp1296, param1, $tmp1297);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
org$frostlang$frostc$ASTNode* $tmp1303 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
*(&local14) = $tmp1295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
// unreffing REF($794:org.frostlang.frostc.ASTNode)
// line 380
org$frostlang$frostc$ClassDecl* $tmp1304 = *(&local15);
org$frostlang$frostc$Type** $tmp1305 = &$tmp1304->type;
org$frostlang$frostc$Type* $tmp1306 = *$tmp1305;
frost$core$Bit $tmp1307 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1306);
*(&local13) = $tmp1307;
org$frostlang$frostc$IR$Value* $tmp1308 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
// unreffing rawTarget
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1309 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
// unreffing args
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1310 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
// unreffing cl
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block25;
block26:;
// line 1
// line 384
frost$collections$Stack** $tmp1311 = &param0->captures;
frost$collections$Stack* $tmp1312 = *$tmp1311;
frost$core$Object* $tmp1313 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1312);
frost$core$Frost$unref$frost$core$Object$Q($tmp1313);
// unreffing REF($843:frost.collections.Stack.T)
// line 385
frost$collections$Stack* $tmp1314 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp1314);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
frost$collections$Stack** $tmp1315 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1316 = *$tmp1315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
frost$collections$Stack** $tmp1317 = &param0->enclosingContexts;
*$tmp1317 = $tmp1314;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
// unreffing REF($849:frost.collections.Stack<org.frostlang.frostc.Compiler.EnclosingContext>)
// line 386
org$frostlang$frostc$MethodDecl* $tmp1318 = *(&local9);
org$frostlang$frostc$SymbolTable** $tmp1319 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1320 = *$tmp1319;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp1318, $tmp1320);
// line 387
frost$collections$Stack* $tmp1321 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
frost$collections$Stack** $tmp1322 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1323 = *$tmp1322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
frost$collections$Stack** $tmp1324 = &param0->enclosingContexts;
*$tmp1324 = $tmp1321;
// line 388
org$frostlang$frostc$ASTNode* $tmp1325 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1326 = (frost$core$Int64) {31};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1325, $tmp1326, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
org$frostlang$frostc$ASTNode* $tmp1327 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
*(&local14) = $tmp1325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
// unreffing REF($880:org.frostlang.frostc.ASTNode)
// line 389
frost$core$Bit $tmp1328 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp1328;
goto block25;
block25:;
// line 391
frost$collections$Array* $tmp1329 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1329);
*(&local21) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
frost$collections$Array* $tmp1330 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
*(&local21) = $tmp1329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
// unreffing REF($898:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 392
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
// line 393
org$frostlang$frostc$MethodDecl* $tmp1331 = *(&local9);
org$frostlang$frostc$Annotations** $tmp1332 = &$tmp1331->annotations;
org$frostlang$frostc$Annotations* $tmp1333 = *$tmp1332;
frost$core$Bit $tmp1334 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1333);
bool $tmp1335 = $tmp1334.value;
if ($tmp1335) goto block40; else goto block42;
block40:;
// line 394
org$frostlang$frostc$MethodDecl* $tmp1336 = *(&local9);
org$frostlang$frostc$Type* $tmp1337 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp1336);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
org$frostlang$frostc$Type* $tmp1338 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
*(&local22) = $tmp1337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
// unreffing REF($922:org.frostlang.frostc.Type)
goto block41;
block42:;
// line 1
// line 397
org$frostlang$frostc$MethodDecl* $tmp1339 = *(&local9);
org$frostlang$frostc$MethodDecl* $tmp1340 = *(&local9);
frost$core$Weak** $tmp1341 = &$tmp1340->owner;
frost$core$Weak* $tmp1342 = *$tmp1341;
frost$core$Object* $tmp1343 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1342);
org$frostlang$frostc$Type** $tmp1344 = &((org$frostlang$frostc$ClassDecl*) $tmp1343)->type;
org$frostlang$frostc$Type* $tmp1345 = *$tmp1344;
frost$core$Bit $tmp1346 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp1347 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp1339, $tmp1345, $tmp1346);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
org$frostlang$frostc$Type* $tmp1348 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
*(&local22) = $tmp1347;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
// unreffing REF($945:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1343);
// unreffing REF($940:frost.core.Weak.T)
goto block41;
block41:;
// line 399
org$frostlang$frostc$Type* $tmp1349 = *(&local22);
org$frostlang$frostc$Type* $tmp1350 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1349);
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
org$frostlang$frostc$Type* $tmp1351 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
*(&local23) = $tmp1350;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
// unreffing REF($961:org.frostlang.frostc.Type)
// line 400
frost$collections$Array* $tmp1352 = *(&local21);
org$frostlang$frostc$ASTNode* $tmp1353 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1354 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp1355 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1356 = (frost$core$Int64) {3};
org$frostlang$frostc$MethodDecl* $tmp1357 = *(&local9);
org$frostlang$frostc$Type* $tmp1358 = *(&local23);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp1355, $tmp1356, $tmp1357, $tmp1358);
org$frostlang$frostc$Type* $tmp1359 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp1360 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1359);
org$frostlang$frostc$IR$Value* $tmp1361 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1355, $tmp1360);
frost$core$Bit $tmp1362 = frost$core$Bit$init$builtin_bit($tmp1361 != NULL);
bool $tmp1363 = $tmp1362.value;
if ($tmp1363) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp1364 = (frost$core$Int64) {400};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1365, $tmp1364, &$s1366);
abort(); // unreachable
block43:;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1353, $tmp1354, param1, $tmp1361);
frost$collections$Array$add$frost$collections$Array$T($tmp1352, ((frost$core$Object*) $tmp1353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
// unreffing REF($985:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
// unreffing REF($984:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
// unreffing REF($983:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
// unreffing REF($977:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
// unreffing REF($975:org.frostlang.frostc.ASTNode)
// line 402
frost$collections$Array* $tmp1367 = *(&local21);
org$frostlang$frostc$ASTNode* $tmp1368 = *(&local14);
frost$core$Bit $tmp1369 = frost$core$Bit$init$builtin_bit($tmp1368 != NULL);
bool $tmp1370 = $tmp1369.value;
if ($tmp1370) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp1371 = (frost$core$Int64) {402};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1372, $tmp1371, &$s1373);
abort(); // unreachable
block45:;
frost$collections$Array$add$frost$collections$Array$T($tmp1367, ((frost$core$Object*) $tmp1368));
// line 403
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
// line 404
frost$core$Bit $tmp1374 = *(&local13);
bool $tmp1375 = $tmp1374.value;
if ($tmp1375) goto block47; else goto block49;
block47:;
// line 405
org$frostlang$frostc$Type* $tmp1376 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
org$frostlang$frostc$Type* $tmp1377 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
*(&local24) = $tmp1376;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
// unreffing REF($1033:org.frostlang.frostc.Type)
goto block48;
block49:;
// line 1
// line 408
org$frostlang$frostc$Type* $tmp1378 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
org$frostlang$frostc$Type* $tmp1379 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
*(&local24) = $tmp1378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
// unreffing REF($1046:org.frostlang.frostc.Type)
goto block48;
block48:;
// line 410
org$frostlang$frostc$IR$Value* $tmp1380 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1381 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp1382 = *(&local24);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1380, $tmp1381, $tmp1382);
frost$collections$Array* $tmp1383 = *(&local21);
org$frostlang$frostc$Compiler$TypeContext* $tmp1384 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1385 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1384, $tmp1385);
org$frostlang$frostc$IR$Value* $tmp1386 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1380, ((frost$collections$ListView*) $tmp1383), $tmp1384);
org$frostlang$frostc$MethodDecl* $tmp1387 = *(&local9);
org$frostlang$frostc$Type* $tmp1388 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp1387);
org$frostlang$frostc$IR$Value* $tmp1389 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1386, $tmp1388);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
org$frostlang$frostc$IR$Value* $tmp1390 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
*(&local25) = $tmp1389;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
// unreffing REF($1070:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
// unreffing REF($1069:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
// unreffing REF($1067:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
// unreffing REF($1064:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
// unreffing REF($1058:org.frostlang.frostc.IR.Value)
// line 412
org$frostlang$frostc$IR$Value* $tmp1391 = *(&local25);
org$frostlang$frostc$IR$Value* $tmp1392 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1391, param6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
// unreffing REF($1095:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$IR$Value* $tmp1393 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
// unreffing construct
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1394 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
// unreffing methodType
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1395 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
// unreffing irType
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1396 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
// unreffing frostType
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1397 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
// unreffing args
*(&local21) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1398 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
// unreffing target
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp1399 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
// unreffing oldContexts
*(&local12) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1400 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
// unreffing methodDecl
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp1401 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
// unreffing annotations
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp1402 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
// unreffing currentCaptures
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1403 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1404 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1405 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp1392;

}
void org$frostlang$frostc$expression$Closure$init(org$frostlang$frostc$expression$Closure* param0) {

return;

}
void org$frostlang$frostc$expression$Closure$cleanup(org$frostlang$frostc$expression$Closure* param0) {

// line 23
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

