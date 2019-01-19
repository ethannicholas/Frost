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
typedef frost$core$Int64 (*$fn734)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn757)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn867)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn889)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn893)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn898)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn962)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn966)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn992)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn996)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1001)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1081)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1142)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn1156)(frost$collections$MapView*);
typedef frost$collections$Array* (*$fn1160)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1171)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn1175)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1180)(frost$collections$Iterator*);

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
static frost$core$String $s745 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x6c\x61\x6d\x62\x64\x61\x20\x77\x69\x74\x68\x20\x77\x72\x6f\x6e\x67\x20", 31, -8865909723025372911, NULL };
static frost$core$String $s749 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 20, 4248843021992149759, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s864 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 123, -3024892062547601733, NULL };
static frost$core$String $s876 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x65\x72\x72\x6f\x72", 12, -6960542561056411676, NULL };
static frost$core$String $s885 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s886 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 144, 8764710235555727599, NULL };
static frost$core$String $s904 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x77\x68\x65\x6e\x20\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x64\x20\x61\x73\x20\x27", 26, 7783089566661782278, NULL };
static frost$core$String $s906 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a", 2, 14198, NULL };
static frost$core$String $s922 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x72\x65\x63\x65\x69\x76\x65\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 51, 8939304453205542054, NULL };
static frost$core$String $s924 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20", 6, 1410335929809, NULL };
static frost$core$String $s927 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x20", 5, 22706926183, NULL };
static frost$core$String $s929 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s931 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s939 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, 1205436084705178767, NULL };
static frost$core$String $s941 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s958 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s959 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 117, -9183381928165602112, NULL };
static frost$core$String $s970 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x74\x79\x70\x65\x20\x77\x61\x73\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x61\x6e\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x63\x6f\x6e\x74\x65\x78\x74", 67, -43704296328153041, NULL };
static frost$core$String $s984 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 10, 3323213258965972710, NULL };
static frost$core$String $s986 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1040 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1041 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1048 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1057 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1058 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1064 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1065 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1084 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static frost$core$String $s1216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s1259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1324 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1330 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };

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
frost$core$Int64 $tmp213 = (frost$core$Int64) {77};
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
frost$core$Int64 $tmp250 = (frost$core$Int64) {77};
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
frost$core$Int64 $tmp278 = (frost$core$Int64) {77};
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
// line 126
org$frostlang$frostc$ClassDecl* $tmp367 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp368 = &$tmp367->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp369 = *$tmp368;
org$frostlang$frostc$FieldDecl* $tmp370 = *(&local14);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp369, ((org$frostlang$frostc$Symbol*) $tmp370));
// line 127
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
// line 130
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
// line 133
org$frostlang$frostc$ClassDecl* $tmp399 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp400 = &$tmp399->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp401 = *$tmp400;
org$frostlang$frostc$FieldDecl* $tmp402 = *(&local16);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp401, ((org$frostlang$frostc$Symbol*) $tmp402));
// line 134
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
// line 137
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
// line 141
org$frostlang$frostc$ClassDecl* $tmp424 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp425 = &$tmp424->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp426 = *$tmp425;
org$frostlang$frostc$FieldDecl* $tmp427 = *(&local17);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp426, ((org$frostlang$frostc$Symbol*) $tmp427));
// line 142
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
// line 145
frost$core$Bit $tmp433 = frost$core$Bit$init$builtin_bit(false);
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp435 = (frost$core$Int64) {145};
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
// line 149
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
// line 150
org$frostlang$frostc$ClassDecl* $tmp447 = *(&local4);
frost$collections$Array** $tmp448 = &$tmp447->methods;
frost$collections$Array* $tmp449 = *$tmp448;
frost$collections$Array$add$frost$collections$Array$T($tmp449, ((frost$core$Object*) param1));
// line 151
frost$collections$HashMap** $tmp450 = &param0->classes;
frost$collections$HashMap* $tmp451 = *$tmp450;
org$frostlang$frostc$ClassDecl* $tmp452 = *(&local4);
frost$core$String** $tmp453 = &$tmp452->name;
frost$core$String* $tmp454 = *$tmp453;
org$frostlang$frostc$ClassDecl* $tmp455 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp451, ((frost$collections$Key*) $tmp454), ((frost$core$Object*) $tmp455));
// line 152
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
// line 153
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
// line 159
org$frostlang$frostc$Compiler$AutoScope* $tmp472 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp472, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
org$frostlang$frostc$Compiler$AutoScope* $tmp473 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local0) = $tmp472;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
// unreffing REF($1:org.frostlang.frostc.Compiler.AutoScope)
// line 160
frost$collections$Array* $tmp474 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp474);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$collections$Array* $tmp475 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local1) = $tmp474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
// unreffing REF($14:frost.collections.Array<org.frostlang.frostc.Type>)
// line 161
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
// line 162
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
// line 163
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
// line 165
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
// line 166
org$frostlang$frostc$Type* $tmp524 = *(&local7);
frost$core$Bit $tmp525 = frost$core$Bit$init$builtin_bit($tmp524 == NULL);
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block8; else goto block9;
block8:;
// line 167
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
// line 169
org$frostlang$frostc$Type* $tmp533 = *(&local7);
frost$core$Bit $tmp534 = frost$core$Bit$init$builtin_bit($tmp533 != NULL);
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp536 = (frost$core$Int64) {169};
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
// line 170
org$frostlang$frostc$Type* $tmp541 = *(&local7);
frost$core$Bit $tmp542 = frost$core$Bit$init$builtin_bit($tmp541 == NULL);
bool $tmp543 = $tmp542.value;
if ($tmp543) goto block12; else goto block13;
block12:;
// line 171
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
// line 173
frost$collections$Array* $tmp550 = *(&local1);
org$frostlang$frostc$Type* $tmp551 = *(&local7);
frost$core$Bit $tmp552 = frost$core$Bit$init$builtin_bit($tmp551 != NULL);
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp554 = (frost$core$Int64) {173};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s555, $tmp554, &$s556);
abort(); // unreachable
block14:;
frost$collections$Array$add$frost$collections$Array$T($tmp550, ((frost$core$Object*) $tmp551));
// line 174
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
frost$core$Int64 $tmp567 = (frost$core$Int64) {174};
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
// line 179
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 180
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
// line 182
org$frostlang$frostc$Type* $tmp605 = *(&local9);
org$frostlang$frostc$Type* $tmp606 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp605);
frost$core$Bit $tmp607 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp606);
bool $tmp608 = $tmp607.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
// unreffing REF($326:org.frostlang.frostc.Type)
if ($tmp608) goto block24; else goto block25;
block24:;
// line 183
org$frostlang$frostc$Type* $tmp609 = *(&local9);
org$frostlang$frostc$Type* $tmp610 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp609);
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
org$frostlang$frostc$Type* $tmp611 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local10) = $tmp610;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
// unreffing REF($335:org.frostlang.frostc.Type)
// line 187
frost$collections$HashMap** $tmp612 = &param0->binaryTypes;
frost$collections$HashMap* $tmp613 = *$tmp612;
*(&local11) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$collections$HashMap* $tmp614 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local11) = $tmp613;
// line 188
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
// line 189
org$frostlang$frostc$Type* $tmp619 = *(&local10);
org$frostlang$frostc$Pair* $tmp620 = org$frostlang$frostc$Compiler$computeCoercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, param2, $tmp619);
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
org$frostlang$frostc$Pair* $tmp621 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
*(&local12) = $tmp620;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
// unreffing REF($373:org.frostlang.frostc.Pair<org.frostlang.frostc.Type, frost.core.Int64>?)
// line 190
frost$collections$HashMap* $tmp622 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
frost$collections$HashMap** $tmp623 = &param0->binaryTypes;
frost$collections$HashMap* $tmp624 = *$tmp623;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$collections$HashMap** $tmp625 = &param0->binaryTypes;
*$tmp625 = $tmp622;
// line 191
org$frostlang$frostc$Pair* $tmp626 = *(&local12);
frost$core$Bit $tmp627 = frost$core$Bit$init$builtin_bit($tmp626 == NULL);
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block26; else goto block27;
block26:;
// line 192
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
// line 194
org$frostlang$frostc$Pair* $tmp636 = *(&local12);
frost$core$Bit $tmp637 = frost$core$Bit$init$builtin_bit($tmp636 != NULL);
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp639 = (frost$core$Int64) {194};
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
// line 198
org$frostlang$frostc$Type* $tmp649 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
org$frostlang$frostc$Type* $tmp650 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local8) = $tmp649;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
// unreffing REF($482:org.frostlang.frostc.Type?)
goto block21;
block21:;
// line 201
org$frostlang$frostc$Type* $tmp651 = *(&local8);
frost$core$Bit $tmp652 = frost$core$Bit$init$builtin_bit($tmp651 == NULL);
bool $tmp653 = $tmp652.value;
if ($tmp653) goto block30; else goto block31;
block30:;
// line 202
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
// line 204
org$frostlang$frostc$Position $tmp657 = org$frostlang$frostc$Position$init();
frost$core$Int64 $tmp658 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp659 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp658);
frost$collections$Array* $tmp660 = *(&local1);
org$frostlang$frostc$Type* $tmp661 = *(&local8);
frost$core$Bit $tmp662 = frost$core$Bit$init$builtin_bit($tmp661 != NULL);
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp664 = (frost$core$Int64) {204};
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

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
// line 212
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
// line 213
org$frostlang$frostc$Type* $tmp672 = org$frostlang$frostc$expression$Closure$typedLambdaType$org$frostlang$frostc$Compiler$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Type$Q(param0, ((frost$collections$ListView*) param2), param3, param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
org$frostlang$frostc$Type* $tmp673 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
*(&local1) = $tmp672;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
// unreffing REF($4:org.frostlang.frostc.Type?)
// line 214
org$frostlang$frostc$Type* $tmp674 = *(&local1);
frost$core$Bit $tmp675 = frost$core$Bit$init$builtin_bit($tmp674 != NULL);
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block1; else goto block3;
block1:;
// line 215
org$frostlang$frostc$Type* $tmp677 = *(&local1);
frost$core$Bit $tmp678 = frost$core$Bit$init$builtin_bit($tmp677 != NULL);
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp680 = (frost$core$Int64) {215};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s681, $tmp680, &$s682);
abort(); // unreachable
block4:;
org$frostlang$frostc$Type* $tmp683 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp677);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
org$frostlang$frostc$Type* $tmp684 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
*(&local0) = $tmp683;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
// unreffing REF($31:org.frostlang.frostc.Type)
goto block2;
block3:;
// line 1
// line 220
org$frostlang$frostc$Type* $tmp685 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
org$frostlang$frostc$Type* $tmp686 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
*(&local0) = $tmp685;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
// unreffing REF($44:org.frostlang.frostc.Type)
// line 221
frost$core$Int64* $tmp687 = &param4->$rawValue;
frost$core$Int64 $tmp688 = *$tmp687;
frost$core$Int64 $tmp689 = (frost$core$Int64) {3};
frost$core$Bit $tmp690 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp688, $tmp689);
bool $tmp691 = $tmp690.value;
if ($tmp691) goto block7; else goto block6;
block7:;
org$frostlang$frostc$Type** $tmp692 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp693 = *$tmp692;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
org$frostlang$frostc$Type* $tmp694 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
*(&local2) = $tmp693;
// line 223
org$frostlang$frostc$Type* $tmp695 = *(&local2);
org$frostlang$frostc$Type* $tmp696 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp695);
frost$core$Bit $tmp697 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp696);
bool $tmp698 = $tmp697.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
// unreffing REF($72:org.frostlang.frostc.Type)
if ($tmp698) goto block8; else goto block9;
block8:;
// line 224
org$frostlang$frostc$Type* $tmp699 = *(&local2);
org$frostlang$frostc$Type* $tmp700 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp699);
org$frostlang$frostc$Type* $tmp701 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp700);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
org$frostlang$frostc$Type* $tmp702 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
*(&local0) = $tmp701;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
// unreffing REF($82:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
// unreffing REF($81:org.frostlang.frostc.Type)
goto block9;
block9:;
org$frostlang$frostc$Type* $tmp703 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
// unreffing t
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block6;
block6:;
goto block2;
block2:;
// line 229
frost$core$Int64 $tmp704 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp705 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp704);
org$frostlang$frostc$ASTNode* $tmp706 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp707 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp708 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp709 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp710 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp708, $tmp709, $tmp710);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp706, $tmp707, param1, $tmp708);
frost$collections$Array* $tmp711 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp712 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp711, $tmp712);
org$frostlang$frostc$ASTNode* $tmp713 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp714 = (frost$core$Int64) {39};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp713, $tmp714, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp711, ((frost$core$Object*) $tmp713));
org$frostlang$frostc$IR$Value* $tmp715 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp705, param2, $tmp706, ((org$frostlang$frostc$FixedArray*) $tmp711), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
// unreffing REF($126:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
// unreffing REF($119:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
// unreffing REF($114:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
// unreffing REF($108:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
// unreffing REF($106:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$Type* $tmp716 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
// unreffing lambdaType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp717 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
// unreffing returnType
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp715;

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
// line 238
frost$core$Int64* $tmp718 = &param4->$rawValue;
frost$core$Int64 $tmp719 = *$tmp718;
frost$core$Int64 $tmp720 = (frost$core$Int64) {3};
frost$core$Bit $tmp721 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp719, $tmp720);
bool $tmp722 = $tmp721.value;
if ($tmp722) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Type** $tmp723 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp724 = *$tmp723;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
org$frostlang$frostc$Type* $tmp725 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local0) = $tmp724;
// line 240
org$frostlang$frostc$Type* $tmp726 = *(&local0);
org$frostlang$frostc$Type* $tmp727 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp726);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
org$frostlang$frostc$Type* $tmp728 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
*(&local1) = $tmp727;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
// unreffing REF($18:org.frostlang.frostc.Type)
// line 241
org$frostlang$frostc$Type* $tmp729 = *(&local1);
frost$core$Bit $tmp730 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp729);
bool $tmp731 = $tmp730.value;
if ($tmp731) goto block3; else goto block4;
block3:;
// line 242
ITable* $tmp732 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp732->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp732 = $tmp732->next;
}
$fn734 $tmp733 = $tmp732->methods[0];
frost$core$Int64 $tmp735 = $tmp733(((frost$collections$CollectionView*) param2));
org$frostlang$frostc$Type* $tmp736 = *(&local1);
frost$core$Int64 $tmp737 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp736);
int64_t $tmp738 = $tmp735.value;
int64_t $tmp739 = $tmp737.value;
bool $tmp740 = $tmp738 != $tmp739;
frost$core$Bit $tmp741 = (frost$core$Bit) {$tmp740};
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block5; else goto block6;
block5:;
// line 243
org$frostlang$frostc$Type* $tmp743 = *(&local0);
frost$core$String* $tmp744 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s745, ((frost$core$Object*) $tmp743));
frost$core$String* $tmp746 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp744, &$s747);
frost$core$String* $tmp748 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp746, &$s749);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp748);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
// unreffing REF($51:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
// unreffing REF($50:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
// unreffing REF($49:frost.core.String)
// line 245
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp750 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
// unreffing methodType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp751 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
// unreffing t
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block6:;
// line 247
frost$collections$Array* $tmp752 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp752);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
frost$collections$Array* $tmp753 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local2) = $tmp752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
// unreffing REF($77:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 248
frost$core$Int64 $tmp754 = (frost$core$Int64) {0};
ITable* $tmp755 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp755->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp755 = $tmp755->next;
}
$fn757 $tmp756 = $tmp755->methods[0];
frost$core$Int64 $tmp758 = $tmp756(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp759 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp760 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp754, $tmp758, $tmp759);
frost$core$Int64 $tmp761 = $tmp760.min;
*(&local3) = $tmp761;
frost$core$Int64 $tmp762 = $tmp760.max;
frost$core$Bit $tmp763 = $tmp760.inclusive;
bool $tmp764 = $tmp763.value;
frost$core$Int64 $tmp765 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp766 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp765);
if ($tmp764) goto block10; else goto block11;
block10:;
int64_t $tmp767 = $tmp761.value;
int64_t $tmp768 = $tmp762.value;
bool $tmp769 = $tmp767 <= $tmp768;
frost$core$Bit $tmp770 = (frost$core$Bit) {$tmp769};
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block7; else goto block8;
block11:;
int64_t $tmp772 = $tmp761.value;
int64_t $tmp773 = $tmp762.value;
bool $tmp774 = $tmp772 < $tmp773;
frost$core$Bit $tmp775 = (frost$core$Bit) {$tmp774};
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block7; else goto block8;
block7:;
// line 249
frost$core$Int64 $tmp777 = *(&local3);
frost$core$Object* $tmp778 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(param2, $tmp777);
frost$core$Int64* $tmp779 = &((org$frostlang$frostc$ASTNode*) $tmp778)->$rawValue;
frost$core$Int64 $tmp780 = *$tmp779;
frost$core$Int64 $tmp781 = (frost$core$Int64) {22};
frost$core$Bit $tmp782 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp780, $tmp781);
bool $tmp783 = $tmp782.value;
if ($tmp783) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Position* $tmp784 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$ASTNode*) $tmp778)->$data + 0);
org$frostlang$frostc$Position $tmp785 = *$tmp784;
*(&local4) = $tmp785;
frost$core$String** $tmp786 = (frost$core$String**) (((org$frostlang$frostc$ASTNode*) $tmp778)->$data + 16);
frost$core$String* $tmp787 = *$tmp786;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
frost$core$String* $tmp788 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
*(&local5) = $tmp787;
// line 251
frost$collections$Array* $tmp789 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp790 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp791 = (frost$core$Int64) {34};
org$frostlang$frostc$Position $tmp792 = *(&local4);
frost$core$String* $tmp793 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp794 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp795 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp796 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp797 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp798 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp799 = *(&local1);
frost$core$Int64 $tmp800 = *(&local3);
org$frostlang$frostc$Type* $tmp801 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp799, $tmp800);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp797, $tmp798, $tmp801);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp794, $tmp795, $tmp796, $tmp797);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp790, $tmp791, $tmp792, $tmp793, $tmp794);
frost$collections$Array$add$frost$collections$Array$T($tmp789, ((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
// unreffing REF($154:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
// unreffing REF($150:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
// unreffing REF($147:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
// unreffing REF($143:org.frostlang.frostc.ASTNode)
frost$core$String* $tmp802 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
goto block12;
block14:;
// line 256
frost$core$Bit $tmp803 = frost$core$Bit$init$builtin_bit(false);
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp805 = (frost$core$Int64) {256};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s806, $tmp805);
abort(); // unreachable
block15:;
goto block12;
block12:;
frost$core$Frost$unref$frost$core$Object$Q($tmp778);
// unreffing REF($120:org.frostlang.frostc.FixedArray.T)
goto block9;
block9:;
frost$core$Int64 $tmp807 = *(&local3);
int64_t $tmp808 = $tmp762.value;
int64_t $tmp809 = $tmp807.value;
int64_t $tmp810 = $tmp808 - $tmp809;
frost$core$Int64 $tmp811 = (frost$core$Int64) {$tmp810};
frost$core$UInt64 $tmp812 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp811);
if ($tmp764) goto block18; else goto block19;
block18:;
uint64_t $tmp813 = $tmp812.value;
uint64_t $tmp814 = $tmp766.value;
bool $tmp815 = $tmp813 >= $tmp814;
frost$core$Bit $tmp816 = (frost$core$Bit) {$tmp815};
bool $tmp817 = $tmp816.value;
if ($tmp817) goto block17; else goto block8;
block19:;
uint64_t $tmp818 = $tmp812.value;
uint64_t $tmp819 = $tmp766.value;
bool $tmp820 = $tmp818 > $tmp819;
frost$core$Bit $tmp821 = (frost$core$Bit) {$tmp820};
bool $tmp822 = $tmp821.value;
if ($tmp822) goto block17; else goto block8;
block17:;
int64_t $tmp823 = $tmp807.value;
int64_t $tmp824 = $tmp765.value;
int64_t $tmp825 = $tmp823 + $tmp824;
frost$core$Int64 $tmp826 = (frost$core$Int64) {$tmp825};
*(&local3) = $tmp826;
goto block7;
block8:;
// line 260
org$frostlang$frostc$Type* $tmp827 = *(&local0);
org$frostlang$frostc$Type* $tmp828 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp827);
org$frostlang$frostc$Type* $tmp829 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp828);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
org$frostlang$frostc$Type* $tmp830 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local6) = $tmp829;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
// unreffing REF($218:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
// unreffing REF($217:org.frostlang.frostc.Type)
// line 261
frost$core$Int64 $tmp831 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp832 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp831);
frost$collections$Array* $tmp833 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp834 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp833);
org$frostlang$frostc$ASTNode* $tmp835 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp836 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp837 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp838 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp839 = *(&local6);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp837, $tmp838, $tmp839);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp835, $tmp836, param1, $tmp837);
frost$collections$Array* $tmp840 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp841 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp840, $tmp841);
org$frostlang$frostc$ASTNode* $tmp842 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp843 = (frost$core$Int64) {39};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp842, $tmp843, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp840, ((frost$core$Object*) $tmp842));
org$frostlang$frostc$FixedArray* $tmp844 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp840);
org$frostlang$frostc$IR$Value* $tmp845 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp832, $tmp834, $tmp835, $tmp844, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
// unreffing REF($261:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
// unreffing REF($259:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// unreffing REF($252:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
// unreffing REF($247:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
// unreffing REF($241:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
// unreffing REF($239:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
// unreffing REF($237:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
org$frostlang$frostc$Type* $tmp846 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp847 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
// unreffing parameters
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp848 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
// unreffing methodType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp849 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
// unreffing t
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp845;
block4:;
org$frostlang$frostc$Type* $tmp850 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
// unreffing methodType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp851 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
// unreffing t
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 269
frost$collections$IdentityMap** $tmp852 = &param0->lambdaTypes;
frost$collections$IdentityMap* $tmp853 = *$tmp852;
frost$core$Object* $tmp854 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp853, ((frost$core$Object*) param3));
*(&local7) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp854)));
frost$collections$HashSet* $tmp855 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
*(&local7) = ((frost$collections$HashSet*) $tmp854);
frost$core$Frost$unref$frost$core$Object$Q($tmp854);
// unreffing REF($322:frost.collections.IdentityMap.V?)
// line 270
frost$collections$HashSet* $tmp856 = *(&local7);
frost$core$Bit $tmp857 = frost$core$Bit$init$builtin_bit($tmp856 != NULL);
bool $tmp858 = $tmp857.value;
if ($tmp858) goto block20; else goto block21;
block20:;
// line 271
frost$collections$HashSet* $tmp859 = *(&local7);
frost$core$Bit $tmp860 = frost$core$Bit$init$builtin_bit($tmp859 != NULL);
bool $tmp861 = $tmp860.value;
if ($tmp861) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp862 = (frost$core$Int64) {271};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s863, $tmp862, &$s864);
abort(); // unreachable
block24:;
ITable* $tmp865 = ((frost$collections$CollectionView*) $tmp859)->$class->itable;
while ($tmp865->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp865 = $tmp865->next;
}
$fn867 $tmp866 = $tmp865->methods[0];
frost$core$Int64 $tmp868 = $tmp866(((frost$collections$CollectionView*) $tmp859));
frost$core$Int64 $tmp869 = (frost$core$Int64) {1};
int64_t $tmp870 = $tmp868.value;
int64_t $tmp871 = $tmp869.value;
bool $tmp872 = $tmp870 > $tmp871;
frost$core$Bit $tmp873 = (frost$core$Bit) {$tmp872};
bool $tmp874 = $tmp873.value;
if ($tmp874) goto block22; else goto block26;
block22:;
// line 272
frost$core$MutableString* $tmp875 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp875, &$s876);
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
frost$core$MutableString* $tmp877 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
*(&local8) = $tmp875;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
// unreffing REF($360:frost.core.MutableString)
// line 273
frost$threads$MessageQueue** $tmp878 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp879 = *$tmp878;
*(&local9) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
frost$threads$MessageQueue* $tmp880 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
*(&local9) = $tmp879;
// line 274
frost$collections$HashSet* $tmp881 = *(&local7);
frost$core$Bit $tmp882 = frost$core$Bit$init$builtin_bit($tmp881 != NULL);
bool $tmp883 = $tmp882.value;
if ($tmp883) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp884 = (frost$core$Int64) {274};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s885, $tmp884, &$s886);
abort(); // unreachable
block27:;
ITable* $tmp887 = ((frost$collections$Iterable*) $tmp881)->$class->itable;
while ($tmp887->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp887 = $tmp887->next;
}
$fn889 $tmp888 = $tmp887->methods[0];
frost$collections$Iterator* $tmp890 = $tmp888(((frost$collections$Iterable*) $tmp881));
goto block29;
block29:;
ITable* $tmp891 = $tmp890->$class->itable;
while ($tmp891->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp891 = $tmp891->next;
}
$fn893 $tmp892 = $tmp891->methods[0];
frost$core$Bit $tmp894 = $tmp892($tmp890);
bool $tmp895 = $tmp894.value;
if ($tmp895) goto block31; else goto block30;
block30:;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp896 = $tmp890->$class->itable;
while ($tmp896->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp896 = $tmp896->next;
}
$fn898 $tmp897 = $tmp896->methods[1];
frost$core$Object* $tmp899 = $tmp897($tmp890);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp899)));
org$frostlang$frostc$Type* $tmp900 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
*(&local10) = ((org$frostlang$frostc$Type*) $tmp899);
// line 275
frost$core$MutableString* $tmp901 = *(&local8);
org$frostlang$frostc$Type* $tmp902 = *(&local10);
frost$core$String* $tmp903 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s904, ((frost$core$Object*) $tmp902));
frost$core$String* $tmp905 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp903, &$s906);
frost$core$MutableString$append$frost$core$String($tmp901, $tmp905);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
// unreffing REF($418:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
// unreffing REF($417:frost.core.String)
// line 276
frost$threads$MessageQueue* $tmp907 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp907);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
frost$threads$MessageQueue** $tmp908 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp909 = *$tmp908;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
frost$threads$MessageQueue** $tmp910 = &param0->errorQueue;
*$tmp910 = $tmp907;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
// unreffing REF($427:frost.threads.MessageQueue<org.frostlang.frostc.Compiler.ErrorMsg>)
// line 277
org$frostlang$frostc$Compiler$TypeContext* $tmp911 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp912 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp913 = *(&local10);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp911, $tmp912, $tmp913);
org$frostlang$frostc$IR$Value* $tmp914 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp911);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
// unreffing REF($446:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
// unreffing REF($442:org.frostlang.frostc.Compiler.TypeContext)
// line 279
frost$threads$MessageQueue** $tmp915 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp916 = *$tmp915;
frost$core$Bit $tmp917 = frost$threads$MessageQueue$hasMessage$R$frost$core$Bit($tmp916);
bool $tmp918 = $tmp917.value;
if ($tmp918) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp919 = (frost$core$Int64) {279};
org$frostlang$frostc$Position$wrapper* $tmp920;
$tmp920 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp920->value = param1;
frost$core$String* $tmp921 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s922, ((frost$core$Object*) $tmp920));
frost$core$String* $tmp923 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp921, &$s924);
org$frostlang$frostc$Type* $tmp925 = *(&local10);
frost$core$String* $tmp926 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s927, ((frost$core$Object*) $tmp925));
frost$core$String* $tmp928 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp926, &$s929);
frost$core$String* $tmp930 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp923, $tmp928);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s931, $tmp919, $tmp930);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
// unreffing REF($468:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
// unreffing REF($467:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
// unreffing REF($466:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
// unreffing REF($463:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
// unreffing REF($462:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
// unreffing REF($461:frost.core.Object)
abort(); // unreachable
block32:;
// line 282
frost$core$MutableString* $tmp932 = *(&local8);
frost$threads$MessageQueue** $tmp933 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp934 = *$tmp933;
frost$core$Immutable* $tmp935 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp934);
frost$core$String** $tmp936 = &((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp935)->message;
frost$core$String* $tmp937 = *$tmp936;
frost$core$String* $tmp938 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s939, $tmp937);
frost$core$String* $tmp940 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp938, &$s941);
frost$core$MutableString$append$frost$core$String($tmp932, $tmp940);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
// unreffing REF($499:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
// unreffing REF($498:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
// unreffing REF($494:frost.threads.MessageQueue.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp899);
// unreffing REF($405:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp942 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
// unreffing t
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block29;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
// unreffing REF($394:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 284
frost$threads$MessageQueue* $tmp943 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
frost$threads$MessageQueue** $tmp944 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp945 = *$tmp944;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
frost$threads$MessageQueue** $tmp946 = &param0->errorQueue;
*$tmp946 = $tmp943;
// line 285
frost$core$MutableString* $tmp947 = *(&local8);
frost$core$String* $tmp948 = frost$core$MutableString$finish$R$frost$core$String($tmp947);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp948);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
// unreffing REF($534:frost.core.String)
// line 286
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$threads$MessageQueue* $tmp949 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
// unreffing old
*(&local9) = ((frost$threads$MessageQueue*) NULL);
frost$core$MutableString* $tmp950 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
// unreffing msg
*(&local8) = ((frost$core$MutableString*) NULL);
frost$collections$HashSet* $tmp951 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
// unreffing attempts
*(&local7) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block26:;
// line 1
// line 289
org$frostlang$frostc$Compiler$TypeContext* $tmp952 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp953 = (frost$core$Int64) {3};
frost$collections$HashSet* $tmp954 = *(&local7);
frost$core$Bit $tmp955 = frost$core$Bit$init$builtin_bit($tmp954 != NULL);
bool $tmp956 = $tmp955.value;
if ($tmp956) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp957 = (frost$core$Int64) {290};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s958, $tmp957, &$s959);
abort(); // unreachable
block34:;
ITable* $tmp960 = ((frost$collections$Iterable*) $tmp954)->$class->itable;
while ($tmp960->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp960 = $tmp960->next;
}
$fn962 $tmp961 = $tmp960->methods[0];
frost$collections$Iterator* $tmp963 = $tmp961(((frost$collections$Iterable*) $tmp954));
ITable* $tmp964 = $tmp963->$class->itable;
while ($tmp964->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp964 = $tmp964->next;
}
$fn966 $tmp965 = $tmp964->methods[1];
frost$core$Object* $tmp967 = $tmp965($tmp963);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp952, $tmp953, ((org$frostlang$frostc$Type*) $tmp967));
org$frostlang$frostc$IR$Value* $tmp968 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp952);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
// unreffing REF($579:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp967);
// unreffing REF($576:frost.collections.Iterator.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
// unreffing REF($572:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
// unreffing REF($560:org.frostlang.frostc.Compiler.TypeContext)
// line 291
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp969 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
// unreffing attempts
*(&local7) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block23:;
goto block21;
block21:;
// line 294
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s970);
// line 296
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp971 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
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
// line 303
frost$core$Int64* $tmp972 = &param0->closureCount;
frost$core$Int64 $tmp973 = *$tmp972;
frost$core$Int64 $tmp974 = (frost$core$Int64) {1};
int64_t $tmp975 = $tmp973.value;
int64_t $tmp976 = $tmp974.value;
int64_t $tmp977 = $tmp975 + $tmp976;
frost$core$Int64 $tmp978 = (frost$core$Int64) {$tmp977};
frost$core$Int64* $tmp979 = &param0->closureCount;
*$tmp979 = $tmp978;
// line 304
frost$core$Int64* $tmp980 = &param0->closureCount;
frost$core$Int64 $tmp981 = *$tmp980;
frost$core$Int64$wrapper* $tmp982;
$tmp982 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp982->value = $tmp981;
frost$core$String* $tmp983 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s984, ((frost$core$Object*) $tmp982));
frost$core$String* $tmp985 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp983, &$s986);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
frost$core$String* $tmp987 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
*(&local0) = $tmp985;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
// unreffing REF($15:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
// unreffing REF($13:frost.core.Object)
// line 305
frost$collections$Array* $tmp988 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp988);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
frost$collections$Array* $tmp989 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
*(&local1) = $tmp988;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
// unreffing REF($33:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
// line 306
ITable* $tmp990 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp990->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp990 = $tmp990->next;
}
$fn992 $tmp991 = $tmp990->methods[0];
frost$collections$Iterator* $tmp993 = $tmp991(((frost$collections$Iterable*) param3));
goto block1;
block1:;
ITable* $tmp994 = $tmp993->$class->itable;
while ($tmp994->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp994 = $tmp994->next;
}
$fn996 $tmp995 = $tmp994->methods[0];
frost$core$Bit $tmp997 = $tmp995($tmp993);
bool $tmp998 = $tmp997.value;
if ($tmp998) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp999 = $tmp993->$class->itable;
while ($tmp999->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp999 = $tmp999->next;
}
$fn1001 $tmp1000 = $tmp999->methods[1];
frost$core$Object* $tmp1002 = $tmp1000($tmp993);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1002)));
org$frostlang$frostc$ASTNode* $tmp1003 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp1002);
// line 307
org$frostlang$frostc$ASTNode* $tmp1004 = *(&local2);
frost$core$Int64* $tmp1005 = &$tmp1004->$rawValue;
frost$core$Int64 $tmp1006 = *$tmp1005;
frost$core$Int64 $tmp1007 = (frost$core$Int64) {34};
frost$core$Bit $tmp1008 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1006, $tmp1007);
bool $tmp1009 = $tmp1008.value;
if ($tmp1009) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp1010 = (org$frostlang$frostc$Position*) ($tmp1004->$data + 0);
org$frostlang$frostc$Position $tmp1011 = *$tmp1010;
frost$core$String** $tmp1012 = (frost$core$String**) ($tmp1004->$data + 16);
frost$core$String* $tmp1013 = *$tmp1012;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
frost$core$String* $tmp1014 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
*(&local3) = $tmp1013;
org$frostlang$frostc$ASTNode** $tmp1015 = (org$frostlang$frostc$ASTNode**) ($tmp1004->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1016 = *$tmp1015;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
org$frostlang$frostc$ASTNode* $tmp1017 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
*(&local4) = $tmp1016;
// line 309
org$frostlang$frostc$Scanner** $tmp1018 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1019 = *$tmp1018;
org$frostlang$frostc$ASTNode* $tmp1020 = *(&local4);
org$frostlang$frostc$Type* $tmp1021 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1019, $tmp1020);
org$frostlang$frostc$Type* $tmp1022 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1021);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
org$frostlang$frostc$Type* $tmp1023 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
*(&local5) = $tmp1022;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
// unreffing REF($102:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
// unreffing REF($101:org.frostlang.frostc.Type)
// line 310
org$frostlang$frostc$Type* $tmp1024 = *(&local5);
frost$core$Bit $tmp1025 = frost$core$Bit$init$builtin_bit($tmp1024 == NULL);
bool $tmp1026 = $tmp1025.value;
if ($tmp1026) goto block7; else goto block8;
block7:;
// line 311
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1027 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
// unreffing resolved
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1028 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
// unreffing type
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1029 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
// unreffing name
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1002);
// unreffing REF($61:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1030 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
// unreffing p
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
// unreffing REF($50:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$collections$Array* $tmp1031 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1032 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
// line 313
frost$collections$Array* $tmp1033 = *(&local1);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1034 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp1035 = *(&local3);
org$frostlang$frostc$Type* $tmp1036 = *(&local5);
frost$core$Bit $tmp1037 = frost$core$Bit$init$builtin_bit($tmp1036 != NULL);
bool $tmp1038 = $tmp1037.value;
if ($tmp1038) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1039 = (frost$core$Int64) {313};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1040, $tmp1039, &$s1041);
abort(); // unreachable
block9:;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp1034, $tmp1035, $tmp1036);
frost$collections$Array$add$frost$collections$Array$T($tmp1033, ((frost$core$Object*) $tmp1034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
// unreffing REF($165:org.frostlang.frostc.MethodDecl.Parameter)
org$frostlang$frostc$Type* $tmp1042 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
// unreffing resolved
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1043 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
// unreffing type
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1044 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
// unreffing name
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 316
frost$core$Bit $tmp1045 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1046 = $tmp1045.value;
if ($tmp1046) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1047 = (frost$core$Int64) {316};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1048, $tmp1047);
abort(); // unreachable
block11:;
goto block4;
block4:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1002);
// unreffing REF($61:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1049 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
// unreffing p
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
// unreffing REF($50:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 320
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// line 321
frost$core$Bit $tmp1050 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp1051 = $tmp1050.value;
if ($tmp1051) goto block13; else goto block15;
block13:;
// line 322
org$frostlang$frostc$Scanner** $tmp1052 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1053 = *$tmp1052;
frost$core$Bit $tmp1054 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp1055 = $tmp1054.value;
if ($tmp1055) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp1056 = (frost$core$Int64) {322};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1057, $tmp1056, &$s1058);
abort(); // unreachable
block16:;
org$frostlang$frostc$Type* $tmp1059 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1053, param4);
org$frostlang$frostc$Type* $tmp1060 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1059);
frost$core$Bit $tmp1061 = frost$core$Bit$init$builtin_bit($tmp1060 != NULL);
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp1063 = (frost$core$Int64) {322};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1064, $tmp1063, &$s1065);
abort(); // unreachable
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
org$frostlang$frostc$Type* $tmp1066 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
*(&local6) = $tmp1060;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
// unreffing REF($237:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
// unreffing REF($236:org.frostlang.frostc.Type)
// line 323
org$frostlang$frostc$Type* $tmp1067 = *(&local6);
frost$core$Bit $tmp1068 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1069 = $tmp1068.value;
if ($tmp1069) goto block20; else goto block21;
block20:;
// line 324
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1070 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1071 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1072 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block21:;
goto block14;
block15:;
// line 1
// line 328
org$frostlang$frostc$Type* $tmp1073 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
org$frostlang$frostc$Type* $tmp1074 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
*(&local6) = $tmp1073;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
// unreffing REF($285:org.frostlang.frostc.Type)
// line 329
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1075;
$tmp1075 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1075->value = param2;
frost$core$Int64 $tmp1076 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp1077 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1076);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1078;
$tmp1078 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1078->value = $tmp1077;
ITable* $tmp1079 = ((frost$core$Equatable*) $tmp1075)->$class->itable;
while ($tmp1079->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1079 = $tmp1079->next;
}
$fn1081 $tmp1080 = $tmp1079->methods[0];
frost$core$Bit $tmp1082 = $tmp1080(((frost$core$Equatable*) $tmp1075), ((frost$core$Equatable*) $tmp1078));
bool $tmp1083 = $tmp1082.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1078)));
// unreffing REF($300:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1075)));
// unreffing REF($296:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp1083) goto block22; else goto block23;
block22:;
// line 330
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s1084);
// line 331
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1085 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1086 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1087 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block23:;
goto block14;
block14:;
// line 334
org$frostlang$frostc$Pair* $tmp1088 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Stack** $tmp1089 = &param0->currentMethod;
frost$collections$Stack* $tmp1090 = *$tmp1089;
frost$core$Int64 $tmp1091 = (frost$core$Int64) {0};
frost$core$Object* $tmp1092 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1090, $tmp1091);
frost$collections$HashMap* $tmp1093 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp1093);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1088, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1092)), ((frost$core$Object*) ((frost$collections$Map*) $tmp1093)));
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
org$frostlang$frostc$Pair* $tmp1094 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
*(&local7) = $tmp1088;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
// unreffing REF($343:frost.collections.HashMap<frost.core.String, org.frostlang.frostc.Compiler.Capture>)
frost$core$Frost$unref$frost$core$Object$Q($tmp1092);
// unreffing REF($340:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
// unreffing REF($334:org.frostlang.frostc.Pair<org.frostlang.frostc.MethodDecl, frost.collections.Map<frost.core.String, org.frostlang.frostc.Compiler.Capture>>)
// line 336
frost$collections$Stack** $tmp1095 = &param0->captures;
frost$collections$Stack* $tmp1096 = *$tmp1095;
org$frostlang$frostc$Pair* $tmp1097 = *(&local7);
frost$collections$Stack$push$frost$collections$Stack$T($tmp1096, ((frost$core$Object*) $tmp1097));
// line 337
org$frostlang$frostc$Annotations* $tmp1098 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp1099 = (frost$core$Int64) {16};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp1098, $tmp1099);
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
org$frostlang$frostc$Annotations* $tmp1100 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
*(&local8) = $tmp1098;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
// unreffing REF($373:org.frostlang.frostc.Annotations)
// line 338
org$frostlang$frostc$MethodDecl* $tmp1101 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$collections$Stack** $tmp1102 = &param0->currentClass;
frost$collections$Stack* $tmp1103 = *$tmp1102;
frost$core$Int64 $tmp1104 = (frost$core$Int64) {0};
frost$core$Object* $tmp1105 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1103, $tmp1104);
org$frostlang$frostc$Annotations* $tmp1106 = *(&local8);
frost$core$String* $tmp1107 = *(&local0);
frost$collections$Array* $tmp1108 = *(&local1);
org$frostlang$frostc$Type* $tmp1109 = *(&local6);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp1101, ((org$frostlang$frostc$ClassDecl*) $tmp1105), param1, ((frost$core$String*) NULL), $tmp1106, param2, $tmp1107, ((frost$collections$Array*) NULL), $tmp1108, $tmp1109, param5);
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
org$frostlang$frostc$MethodDecl* $tmp1110 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
*(&local9) = $tmp1101;
frost$core$Frost$unref$frost$core$Object$Q($tmp1105);
// unreffing REF($392:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
// unreffing REF($387:org.frostlang.frostc.MethodDecl)
// line 342
frost$core$Bit* $tmp1111 = &param0->writeCode;
frost$core$Bit $tmp1112 = *$tmp1111;
*(&local10) = $tmp1112;
// line 343
frost$core$Bit* $tmp1113 = &param0->reportErrors;
frost$core$Bit $tmp1114 = *$tmp1113;
*(&local11) = $tmp1114;
// line 344
frost$core$Bit $tmp1115 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp1116 = &param0->writeCode;
*$tmp1116 = $tmp1115;
// line 345
frost$core$Bit $tmp1117 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp1118 = &param0->reportErrors;
*$tmp1118 = $tmp1117;
// line 346
frost$collections$Stack** $tmp1119 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1120 = *$tmp1119;
*(&local12) = ((frost$collections$Stack*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
frost$collections$Stack* $tmp1121 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
*(&local12) = $tmp1120;
// line 347
frost$collections$Stack* $tmp1122 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp1122);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
frost$collections$Stack** $tmp1123 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1124 = *$tmp1123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
frost$collections$Stack** $tmp1125 = &param0->enclosingContexts;
*$tmp1125 = $tmp1122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
// unreffing REF($440:frost.collections.Stack<org.frostlang.frostc.Compiler.EnclosingContext>)
// line 348
org$frostlang$frostc$MethodDecl* $tmp1126 = *(&local9);
org$frostlang$frostc$SymbolTable** $tmp1127 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1128 = *$tmp1127;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp1126, $tmp1128);
// line 349
frost$collections$Stack* $tmp1129 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
frost$collections$Stack** $tmp1130 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1131 = *$tmp1130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
frost$collections$Stack** $tmp1132 = &param0->enclosingContexts;
*$tmp1132 = $tmp1129;
// line 350
frost$core$Bit $tmp1133 = *(&local10);
frost$core$Bit* $tmp1134 = &param0->writeCode;
*$tmp1134 = $tmp1133;
// line 351
frost$core$Bit $tmp1135 = *(&local11);
frost$core$Bit* $tmp1136 = &param0->reportErrors;
*$tmp1136 = $tmp1135;
// line 353
// line 354
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 355
org$frostlang$frostc$Pair* $tmp1137 = *(&local7);
frost$core$Object** $tmp1138 = &$tmp1137->second;
frost$core$Object* $tmp1139 = *$tmp1138;
ITable* $tmp1140 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1139))->$class->itable;
while ($tmp1140->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1140 = $tmp1140->next;
}
$fn1142 $tmp1141 = $tmp1140->methods[0];
frost$core$Int64 $tmp1143 = $tmp1141(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1139)));
frost$core$Int64 $tmp1144 = (frost$core$Int64) {0};
int64_t $tmp1145 = $tmp1143.value;
int64_t $tmp1146 = $tmp1144.value;
bool $tmp1147 = $tmp1145 != $tmp1146;
frost$core$Bit $tmp1148 = (frost$core$Bit) {$tmp1147};
bool $tmp1149 = $tmp1148.value;
if ($tmp1149) goto block24; else goto block26;
block24:;
// line 357
org$frostlang$frostc$MethodDecl* $tmp1150 = *(&local9);
org$frostlang$frostc$Pair* $tmp1151 = *(&local7);
frost$core$Object** $tmp1152 = &$tmp1151->second;
frost$core$Object* $tmp1153 = *$tmp1152;
ITable* $tmp1154 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1153))->$class->itable;
while ($tmp1154->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1154 = $tmp1154->next;
}
$fn1156 $tmp1155 = $tmp1154->methods[4];
frost$collections$Iterator* $tmp1157 = $tmp1155(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1153)));
ITable* $tmp1158 = $tmp1157->$class->itable;
while ($tmp1158->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1158 = $tmp1158->next;
}
$fn1160 $tmp1159 = $tmp1158->methods[6];
frost$collections$Array* $tmp1161 = $tmp1159($tmp1157);
org$frostlang$frostc$ClassDecl* $tmp1162 = org$frostlang$frostc$expression$Closure$createClosureClass$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlang$frostc$Compiler$Capture$GT$R$org$frostlang$frostc$ClassDecl(param0, $tmp1150, ((frost$collections$CollectionView*) $tmp1161));
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
org$frostlang$frostc$ClassDecl* $tmp1163 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
*(&local15) = $tmp1162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
// unreffing REF($513:org.frostlang.frostc.ClassDecl)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
// unreffing REF($510:frost.collections.Array<frost.collections.Iterator.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
// unreffing REF($506:frost.collections.Iterator<frost.collections.MapView.V>)
// line 358
frost$collections$Array* $tmp1164 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1164);
*(&local16) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$collections$Array* $tmp1165 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
*(&local16) = $tmp1164;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
// unreffing REF($531:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 359
org$frostlang$frostc$Pair* $tmp1166 = *(&local7);
frost$core$Object** $tmp1167 = &$tmp1166->second;
frost$core$Object* $tmp1168 = *$tmp1167;
ITable* $tmp1169 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1168))->$class->itable;
while ($tmp1169->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1169 = $tmp1169->next;
}
$fn1171 $tmp1170 = $tmp1169->methods[4];
frost$collections$Iterator* $tmp1172 = $tmp1170(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1168)));
goto block27;
block27:;
ITable* $tmp1173 = $tmp1172->$class->itable;
while ($tmp1173->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1173 = $tmp1173->next;
}
$fn1175 $tmp1174 = $tmp1173->methods[0];
frost$core$Bit $tmp1176 = $tmp1174($tmp1172);
bool $tmp1177 = $tmp1176.value;
if ($tmp1177) goto block29; else goto block28;
block28:;
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp1178 = $tmp1172->$class->itable;
while ($tmp1178->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1178 = $tmp1178->next;
}
$fn1180 $tmp1179 = $tmp1178->methods[1];
frost$core$Object* $tmp1181 = $tmp1179($tmp1172);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp1181)));
org$frostlang$frostc$Compiler$Capture* $tmp1182 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) $tmp1181);
// line 360
org$frostlang$frostc$Compiler$Capture* $tmp1183 = *(&local17);
frost$core$Int64* $tmp1184 = &$tmp1183->$rawValue;
frost$core$Int64 $tmp1185 = *$tmp1184;
frost$core$Int64 $tmp1186 = (frost$core$Int64) {0};
frost$core$Bit $tmp1187 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1185, $tmp1186);
bool $tmp1188 = $tmp1187.value;
if ($tmp1188) goto block31; else goto block32;
block31:;
org$frostlang$frostc$Variable** $tmp1189 = (org$frostlang$frostc$Variable**) ($tmp1183->$data + 0);
org$frostlang$frostc$Variable* $tmp1190 = *$tmp1189;
*(&local18) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
org$frostlang$frostc$Variable* $tmp1191 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
*(&local18) = $tmp1190;
// line 362
frost$collections$Array* $tmp1192 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1193 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1194 = (frost$core$Int64) {22};
org$frostlang$frostc$Variable* $tmp1195 = *(&local18);
frost$core$String** $tmp1196 = &((org$frostlang$frostc$Symbol*) $tmp1195)->name;
frost$core$String* $tmp1197 = *$tmp1196;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1193, $tmp1194, param1, $tmp1197);
frost$collections$Array$add$frost$collections$Array$T($tmp1192, ((frost$core$Object*) $tmp1193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
// unreffing REF($591:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$Variable* $tmp1198 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
// unreffing v
*(&local18) = ((org$frostlang$frostc$Variable*) NULL);
goto block30;
block32:;
frost$core$Int64 $tmp1199 = (frost$core$Int64) {2};
frost$core$Bit $tmp1200 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1185, $tmp1199);
bool $tmp1201 = $tmp1200.value;
if ($tmp1201) goto block33; else goto block34;
block33:;
// line 365
frost$collections$Array* $tmp1202 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1203 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1204 = (frost$core$Int64) {40};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1203, $tmp1204, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1202, ((frost$core$Object*) $tmp1203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
// unreffing REF($616:org.frostlang.frostc.ASTNode)
goto block30;
block34:;
frost$core$Int64 $tmp1205 = (frost$core$Int64) {1};
frost$core$Bit $tmp1206 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1185, $tmp1205);
bool $tmp1207 = $tmp1206.value;
if ($tmp1207) goto block35; else goto block30;
block35:;
org$frostlang$frostc$FieldDecl** $tmp1208 = (org$frostlang$frostc$FieldDecl**) ($tmp1183->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp1209 = *$tmp1208;
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
org$frostlang$frostc$FieldDecl* $tmp1210 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
*(&local19) = $tmp1209;
// line 368
frost$collections$Array* $tmp1211 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1212 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1213 = (frost$core$Int64) {16};
org$frostlang$frostc$ASTNode* $tmp1214 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1215 = (frost$core$Int64) {22};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1214, $tmp1215, param1, &$s1216);
org$frostlang$frostc$FieldDecl* $tmp1217 = *(&local19);
frost$core$String** $tmp1218 = &((org$frostlang$frostc$Symbol*) $tmp1217)->name;
frost$core$String* $tmp1219 = *$tmp1218;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp1212, $tmp1213, param1, $tmp1214, $tmp1219);
frost$collections$Array$add$frost$collections$Array$T($tmp1211, ((frost$core$Object*) $tmp1212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
// unreffing REF($643:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
// unreffing REF($641:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$FieldDecl* $tmp1220 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
// unreffing f
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block30;
block30:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1181);
// unreffing REF($563:frost.collections.Iterator.T)
org$frostlang$frostc$Compiler$Capture* $tmp1221 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
// unreffing capture
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block27;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
// unreffing REF($552:frost.collections.Iterator<frost.collections.MapView.V>)
// line 374
frost$collections$Stack** $tmp1222 = &param0->captures;
frost$collections$Stack* $tmp1223 = *$tmp1222;
frost$core$Object* $tmp1224 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1223);
frost$core$Frost$unref$frost$core$Object$Q($tmp1224);
// unreffing REF($681:frost.collections.Stack.T)
// line 375
frost$collections$Array** $tmp1225 = &param0->pendingClasses;
frost$collections$Array* $tmp1226 = *$tmp1225;
org$frostlang$frostc$ClassDecl* $tmp1227 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp1226, ((frost$core$Object*) $tmp1227));
// line 376
org$frostlang$frostc$IR$Value* $tmp1228 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1229 = (frost$core$Int64) {14};
org$frostlang$frostc$ClassDecl* $tmp1230 = *(&local15);
org$frostlang$frostc$Type** $tmp1231 = &$tmp1230->type;
org$frostlang$frostc$Type* $tmp1232 = *$tmp1231;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1228, $tmp1229, $tmp1232);
frost$collections$Array* $tmp1233 = *(&local16);
org$frostlang$frostc$FixedArray* $tmp1234 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1233);
org$frostlang$frostc$Compiler$TypeContext* $tmp1235 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1236 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1235, $tmp1236);
org$frostlang$frostc$IR$Value* $tmp1237 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1228, ((frost$collections$ListView*) $tmp1234), $tmp1235);
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
org$frostlang$frostc$IR$Value* $tmp1238 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
*(&local20) = $tmp1237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
// unreffing REF($708:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
// unreffing REF($705:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
// unreffing REF($702:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
// unreffing REF($694:org.frostlang.frostc.IR.Value)
// line 378
org$frostlang$frostc$IR$Value* $tmp1239 = *(&local20);
frost$core$Bit $tmp1240 = frost$core$Bit$init$builtin_bit($tmp1239 == NULL);
bool $tmp1241 = $tmp1240.value;
if ($tmp1241) goto block36; else goto block37;
block36:;
// line 379
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1242 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
// unreffing rawTarget
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1243 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
// unreffing args
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1244 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
// unreffing cl
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp1245 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
// unreffing target
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp1246 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
// unreffing oldContexts
*(&local12) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1247 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
// unreffing methodDecl
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp1248 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
// unreffing annotations
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp1249 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
// unreffing currentCaptures
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1250 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1251 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1252 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block37:;
// line 381
org$frostlang$frostc$ASTNode* $tmp1253 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1254 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp1255 = *(&local20);
frost$core$Bit $tmp1256 = frost$core$Bit$init$builtin_bit($tmp1255 != NULL);
bool $tmp1257 = $tmp1256.value;
if ($tmp1257) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp1258 = (frost$core$Int64) {381};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1259, $tmp1258, &$s1260);
abort(); // unreachable
block38:;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1253, $tmp1254, param1, $tmp1255);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
org$frostlang$frostc$ASTNode* $tmp1261 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
*(&local14) = $tmp1253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
// unreffing REF($794:org.frostlang.frostc.ASTNode)
// line 382
org$frostlang$frostc$ClassDecl* $tmp1262 = *(&local15);
org$frostlang$frostc$Type** $tmp1263 = &$tmp1262->type;
org$frostlang$frostc$Type* $tmp1264 = *$tmp1263;
frost$core$Bit $tmp1265 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1264);
*(&local13) = $tmp1265;
org$frostlang$frostc$IR$Value* $tmp1266 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
// unreffing rawTarget
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1267 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
// unreffing args
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1268 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
// unreffing cl
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block25;
block26:;
// line 1
// line 386
frost$collections$Stack** $tmp1269 = &param0->captures;
frost$collections$Stack* $tmp1270 = *$tmp1269;
frost$core$Object* $tmp1271 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1270);
frost$core$Frost$unref$frost$core$Object$Q($tmp1271);
// unreffing REF($843:frost.collections.Stack.T)
// line 387
frost$collections$Stack* $tmp1272 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp1272);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
frost$collections$Stack** $tmp1273 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1274 = *$tmp1273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
frost$collections$Stack** $tmp1275 = &param0->enclosingContexts;
*$tmp1275 = $tmp1272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
// unreffing REF($849:frost.collections.Stack<org.frostlang.frostc.Compiler.EnclosingContext>)
// line 388
org$frostlang$frostc$MethodDecl* $tmp1276 = *(&local9);
org$frostlang$frostc$SymbolTable** $tmp1277 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1278 = *$tmp1277;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp1276, $tmp1278);
// line 389
frost$collections$Stack* $tmp1279 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
frost$collections$Stack** $tmp1280 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1281 = *$tmp1280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
frost$collections$Stack** $tmp1282 = &param0->enclosingContexts;
*$tmp1282 = $tmp1279;
// line 390
org$frostlang$frostc$ASTNode* $tmp1283 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1284 = (frost$core$Int64) {31};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1283, $tmp1284, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
org$frostlang$frostc$ASTNode* $tmp1285 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
*(&local14) = $tmp1283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
// unreffing REF($880:org.frostlang.frostc.ASTNode)
// line 391
frost$core$Bit $tmp1286 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp1286;
goto block25;
block25:;
// line 393
frost$collections$Array* $tmp1287 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1287);
*(&local21) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
frost$collections$Array* $tmp1288 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
*(&local21) = $tmp1287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
// unreffing REF($898:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 394
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
// line 395
org$frostlang$frostc$MethodDecl* $tmp1289 = *(&local9);
org$frostlang$frostc$Annotations** $tmp1290 = &$tmp1289->annotations;
org$frostlang$frostc$Annotations* $tmp1291 = *$tmp1290;
frost$core$Bit $tmp1292 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1291);
bool $tmp1293 = $tmp1292.value;
if ($tmp1293) goto block40; else goto block42;
block40:;
// line 396
org$frostlang$frostc$MethodDecl* $tmp1294 = *(&local9);
org$frostlang$frostc$Type* $tmp1295 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp1294);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
org$frostlang$frostc$Type* $tmp1296 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
*(&local22) = $tmp1295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
// unreffing REF($922:org.frostlang.frostc.Type)
goto block41;
block42:;
// line 1
// line 399
org$frostlang$frostc$MethodDecl* $tmp1297 = *(&local9);
org$frostlang$frostc$MethodDecl* $tmp1298 = *(&local9);
frost$core$Weak** $tmp1299 = &$tmp1298->owner;
frost$core$Weak* $tmp1300 = *$tmp1299;
frost$core$Object* $tmp1301 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1300);
org$frostlang$frostc$Type** $tmp1302 = &((org$frostlang$frostc$ClassDecl*) $tmp1301)->type;
org$frostlang$frostc$Type* $tmp1303 = *$tmp1302;
frost$core$Bit $tmp1304 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp1305 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp1297, $tmp1303, $tmp1304);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
org$frostlang$frostc$Type* $tmp1306 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
*(&local22) = $tmp1305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
// unreffing REF($945:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1301);
// unreffing REF($940:frost.core.Weak.T)
goto block41;
block41:;
// line 401
org$frostlang$frostc$Type* $tmp1307 = *(&local22);
org$frostlang$frostc$Type* $tmp1308 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1307);
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
org$frostlang$frostc$Type* $tmp1309 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
*(&local23) = $tmp1308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
// unreffing REF($961:org.frostlang.frostc.Type)
// line 402
frost$collections$Array* $tmp1310 = *(&local21);
org$frostlang$frostc$ASTNode* $tmp1311 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1312 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp1313 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1314 = (frost$core$Int64) {3};
org$frostlang$frostc$MethodDecl* $tmp1315 = *(&local9);
org$frostlang$frostc$Type* $tmp1316 = *(&local23);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp1313, $tmp1314, $tmp1315, $tmp1316);
org$frostlang$frostc$Type* $tmp1317 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp1318 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1317);
org$frostlang$frostc$IR$Value* $tmp1319 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1313, $tmp1318);
frost$core$Bit $tmp1320 = frost$core$Bit$init$builtin_bit($tmp1319 != NULL);
bool $tmp1321 = $tmp1320.value;
if ($tmp1321) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp1322 = (frost$core$Int64) {402};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1323, $tmp1322, &$s1324);
abort(); // unreachable
block43:;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1311, $tmp1312, param1, $tmp1319);
frost$collections$Array$add$frost$collections$Array$T($tmp1310, ((frost$core$Object*) $tmp1311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
// unreffing REF($985:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
// unreffing REF($984:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
// unreffing REF($983:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
// unreffing REF($977:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
// unreffing REF($975:org.frostlang.frostc.ASTNode)
// line 404
frost$collections$Array* $tmp1325 = *(&local21);
org$frostlang$frostc$ASTNode* $tmp1326 = *(&local14);
frost$core$Bit $tmp1327 = frost$core$Bit$init$builtin_bit($tmp1326 != NULL);
bool $tmp1328 = $tmp1327.value;
if ($tmp1328) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp1329 = (frost$core$Int64) {404};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1330, $tmp1329, &$s1331);
abort(); // unreachable
block45:;
frost$collections$Array$add$frost$collections$Array$T($tmp1325, ((frost$core$Object*) $tmp1326));
// line 405
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
// line 406
frost$core$Bit $tmp1332 = *(&local13);
bool $tmp1333 = $tmp1332.value;
if ($tmp1333) goto block47; else goto block49;
block47:;
// line 407
org$frostlang$frostc$Type* $tmp1334 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
org$frostlang$frostc$Type* $tmp1335 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local24) = $tmp1334;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
// unreffing REF($1033:org.frostlang.frostc.Type)
goto block48;
block49:;
// line 1
// line 410
org$frostlang$frostc$Type* $tmp1336 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
org$frostlang$frostc$Type* $tmp1337 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local24) = $tmp1336;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
// unreffing REF($1046:org.frostlang.frostc.Type)
goto block48;
block48:;
// line 412
org$frostlang$frostc$IR$Value* $tmp1338 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1339 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp1340 = *(&local24);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1338, $tmp1339, $tmp1340);
frost$collections$Array* $tmp1341 = *(&local21);
org$frostlang$frostc$Compiler$TypeContext* $tmp1342 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1343 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1342, $tmp1343);
org$frostlang$frostc$IR$Value* $tmp1344 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1338, ((frost$collections$ListView*) $tmp1341), $tmp1342);
org$frostlang$frostc$MethodDecl* $tmp1345 = *(&local9);
org$frostlang$frostc$Type* $tmp1346 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp1345);
org$frostlang$frostc$IR$Value* $tmp1347 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1344, $tmp1346);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
org$frostlang$frostc$IR$Value* $tmp1348 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
*(&local25) = $tmp1347;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
// unreffing REF($1070:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
// unreffing REF($1069:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
// unreffing REF($1067:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
// unreffing REF($1064:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
// unreffing REF($1058:org.frostlang.frostc.IR.Value)
// line 414
org$frostlang$frostc$IR$Value* $tmp1349 = *(&local25);
org$frostlang$frostc$IR$Value* $tmp1350 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1349, param6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
// unreffing REF($1095:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$IR$Value* $tmp1351 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
// unreffing construct
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1352 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
// unreffing methodType
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1353 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
// unreffing irType
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1354 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
// unreffing frostType
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1355 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
// unreffing args
*(&local21) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1356 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
// unreffing target
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp1357 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
// unreffing oldContexts
*(&local12) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1358 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
// unreffing methodDecl
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp1359 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
// unreffing annotations
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp1360 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
// unreffing currentCaptures
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1361 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1362 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1363 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp1350;

}
void org$frostlang$frostc$expression$Closure$init(org$frostlang$frostc$expression$Closure* param0) {

return;

}
void org$frostlang$frostc$expression$Closure$cleanup(org$frostlang$frostc$expression$Closure* param0) {

// line 23
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

