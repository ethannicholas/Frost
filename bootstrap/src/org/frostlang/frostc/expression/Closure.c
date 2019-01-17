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
typedef frost$core$Int64 (*$fn728)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn751)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn861)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn883)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn887)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn892)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn956)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn960)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn986)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn990)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn995)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1075)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1136)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn1150)(frost$collections$MapView*);
typedef frost$collections$Array* (*$fn1154)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1165)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn1169)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1174)(frost$collections$Iterator*);

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
static frost$core$String $s531 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s550 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s562 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s563 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s634 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 134, -8894870968915517948, NULL };
static frost$core$String $s659 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s660 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s675 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static frost$core$String $s741 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x6c\x61\x6d\x62\x64\x61\x20\x77\x69\x74\x68\x20\x77\x72\x6f\x6e\x67\x20", 31, -8865909723025372911, NULL };
static frost$core$String $s743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 20, 4248843021992149759, NULL };
static frost$core$String $s800 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s857 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 123, -3024892062547601733, NULL };
static frost$core$String $s870 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x65\x72\x72\x6f\x72", 12, -6960542561056411676, NULL };
static frost$core$String $s879 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s880 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 144, 8764710235555727599, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x77\x68\x65\x6e\x20\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x64\x20\x61\x73\x20\x27", 26, 7783089566661782278, NULL };
static frost$core$String $s900 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a", 2, 14198, NULL };
static frost$core$String $s916 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x72\x65\x63\x65\x69\x76\x65\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 51, 8939304453205542054, NULL };
static frost$core$String $s918 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20", 6, 1410335929809, NULL };
static frost$core$String $s921 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x20", 5, 22706926183, NULL };
static frost$core$String $s923 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s925 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s933 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, 1205436084705178767, NULL };
static frost$core$String $s935 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s952 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s953 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 117, -9183381928165602112, NULL };
static frost$core$String $s964 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x74\x79\x70\x65\x20\x77\x61\x73\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x61\x6e\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x63\x6f\x6e\x74\x65\x78\x74", 67, -43704296328153041, NULL };
static frost$core$String $s978 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 10, 3323213258965972710, NULL };
static frost$core$String $s980 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1034 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1035 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1042 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1051 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1052 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1058 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1078 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static frost$core$String $s1210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s1253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1324 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1325 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };

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
frost$core$Bit $tmp519 = frost$core$Bit$init$builtin_bit($tmp518 == NULL);
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
frost$core$Bit $tmp528 = frost$core$Bit$init$builtin_bit($tmp527 != NULL);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp530 = (frost$core$Int64) {168};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s531, $tmp530, &$s532);
abort(); // unreachable
block10:;
org$frostlang$frostc$Type* $tmp533 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp527);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
org$frostlang$frostc$Type* $tmp534 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
*(&local7) = $tmp533;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
// unreffing REF($165:org.frostlang.frostc.Type?)
// line 169
org$frostlang$frostc$Type* $tmp535 = *(&local7);
frost$core$Bit $tmp536 = frost$core$Bit$init$builtin_bit($tmp535 == NULL);
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
frost$core$Bit $tmp546 = frost$core$Bit$init$builtin_bit($tmp545 != NULL);
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp548 = (frost$core$Int64) {172};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s549, $tmp548, &$s550);
abort(); // unreachable
block14:;
frost$collections$Array$add$frost$collections$Array$T($tmp544, ((frost$core$Object*) $tmp545));
// line 173
org$frostlang$frostc$SymbolTable** $tmp551 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp552 = *$tmp551;
org$frostlang$frostc$Variable* $tmp553 = (org$frostlang$frostc$Variable*) frostObjectAlloc(88, (frost$core$Class*) &org$frostlang$frostc$Variable$class);
org$frostlang$frostc$Position $tmp554 = *(&local4);
frost$core$Int64 $tmp555 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp556 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp555);
frost$core$String* $tmp557 = *(&local5);
org$frostlang$frostc$Type* $tmp558 = *(&local7);
frost$core$Bit $tmp559 = frost$core$Bit$init$builtin_bit($tmp558 != NULL);
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp561 = (frost$core$Int64) {173};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s562, $tmp561, &$s563);
abort(); // unreachable
block16:;
org$frostlang$frostc$Variable$Storage* $tmp564 = (org$frostlang$frostc$Variable$Storage*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Variable$Storage$class);
frost$core$Int64 $tmp565 = (frost$core$Int64) {1};
frost$core$Int64 $tmp566 = (frost$core$Int64) {18446744073709551615};
org$frostlang$frostc$Variable$Storage$init$frost$core$Int64$frost$core$Int64($tmp564, $tmp565, $tmp566);
org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage($tmp553, $tmp554, $tmp556, $tmp557, $tmp558, $tmp564);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp552, ((org$frostlang$frostc$Symbol*) $tmp553));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
// unreffing REF($246:org.frostlang.frostc.Variable.Storage)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
// unreffing REF($232:org.frostlang.frostc.Variable)
org$frostlang$frostc$Type* $tmp567 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
// unreffing type
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp568 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
// unreffing rawType
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp569 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
goto block6;
block6:;
org$frostlang$frostc$ASTNode* $tmp570 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
// unreffing p
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp571 = *(&local2);
int64_t $tmp572 = $tmp478.value;
int64_t $tmp573 = $tmp571.value;
int64_t $tmp574 = $tmp572 - $tmp573;
frost$core$Int64 $tmp575 = (frost$core$Int64) {$tmp574};
frost$core$UInt64 $tmp576 = frost$core$Int64$convert$R$frost$core$UInt64($tmp575);
if ($tmp480) goto block19; else goto block20;
block19:;
uint64_t $tmp577 = $tmp576.value;
uint64_t $tmp578 = $tmp482.value;
bool $tmp579 = $tmp577 >= $tmp578;
frost$core$Bit $tmp580 = (frost$core$Bit) {$tmp579};
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block18; else goto block2;
block20:;
uint64_t $tmp582 = $tmp576.value;
uint64_t $tmp583 = $tmp482.value;
bool $tmp584 = $tmp582 > $tmp583;
frost$core$Bit $tmp585 = (frost$core$Bit) {$tmp584};
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block18; else goto block2;
block18:;
int64_t $tmp587 = $tmp571.value;
int64_t $tmp588 = $tmp481.value;
int64_t $tmp589 = $tmp587 + $tmp588;
frost$core$Int64 $tmp590 = (frost$core$Int64) {$tmp589};
*(&local2) = $tmp590;
goto block1;
block2:;
// line 178
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 179
frost$core$Int64* $tmp591 = &param3->$rawValue;
frost$core$Int64 $tmp592 = *$tmp591;
frost$core$Int64 $tmp593 = (frost$core$Int64) {3};
frost$core$Bit $tmp594 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp592, $tmp593);
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Type** $tmp596 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp597 = *$tmp596;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
org$frostlang$frostc$Type* $tmp598 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local9) = $tmp597;
// line 181
org$frostlang$frostc$Type* $tmp599 = *(&local9);
org$frostlang$frostc$Type* $tmp600 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp599);
frost$core$Bit $tmp601 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp600);
bool $tmp602 = $tmp601.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
// unreffing REF($326:org.frostlang.frostc.Type)
if ($tmp602) goto block24; else goto block25;
block24:;
// line 182
org$frostlang$frostc$Type* $tmp603 = *(&local9);
org$frostlang$frostc$Type* $tmp604 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp603);
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
org$frostlang$frostc$Type* $tmp605 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local10) = $tmp604;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
// unreffing REF($335:org.frostlang.frostc.Type)
// line 186
frost$collections$HashMap** $tmp606 = &param0->binaryTypes;
frost$collections$HashMap* $tmp607 = *$tmp606;
*(&local11) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
frost$collections$HashMap* $tmp608 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local11) = $tmp607;
// line 187
frost$collections$HashMap* $tmp609 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp609);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
frost$collections$HashMap** $tmp610 = &param0->binaryTypes;
frost$collections$HashMap* $tmp611 = *$tmp610;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$collections$HashMap** $tmp612 = &param0->binaryTypes;
*$tmp612 = $tmp609;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
// unreffing REF($357:frost.collections.HashMap<org.frostlang.frostc.Compiler.BinaryKey, frost.collections.ListView<org.frostlang.frostc.Type>?>)
// line 188
org$frostlang$frostc$Type* $tmp613 = *(&local10);
org$frostlang$frostc$Pair* $tmp614 = org$frostlang$frostc$Compiler$computeCoercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, param2, $tmp613);
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
org$frostlang$frostc$Pair* $tmp615 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
*(&local12) = $tmp614;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
// unreffing REF($373:org.frostlang.frostc.Pair<org.frostlang.frostc.Type, frost.core.Int64>?)
// line 189
frost$collections$HashMap* $tmp616 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
frost$collections$HashMap** $tmp617 = &param0->binaryTypes;
frost$collections$HashMap* $tmp618 = *$tmp617;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$collections$HashMap** $tmp619 = &param0->binaryTypes;
*$tmp619 = $tmp616;
// line 190
org$frostlang$frostc$Pair* $tmp620 = *(&local12);
frost$core$Bit $tmp621 = frost$core$Bit$init$builtin_bit($tmp620 == NULL);
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block26; else goto block27;
block26:;
// line 191
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Pair* $tmp623 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
// unreffing cost
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp624 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
// unreffing oldBinaryTypes
*(&local11) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp625 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
// unreffing target
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp626 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
// unreffing t
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp627 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// unreffing returnType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp628 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
// unreffing parameterTypes
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp629 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// unreffing scope
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block27:;
// line 193
org$frostlang$frostc$Pair* $tmp630 = *(&local12);
frost$core$Bit $tmp631 = frost$core$Bit$init$builtin_bit($tmp630 != NULL);
bool $tmp632 = $tmp631.value;
if ($tmp632) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp633 = (frost$core$Int64) {193};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s634, $tmp633, &$s635);
abort(); // unreachable
block28:;
frost$core$Object** $tmp636 = &$tmp630->first;
frost$core$Object* $tmp637 = *$tmp636;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp637)));
org$frostlang$frostc$Type* $tmp638 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
*(&local8) = ((org$frostlang$frostc$Type*) $tmp637);
org$frostlang$frostc$Pair* $tmp639 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
// unreffing cost
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp640 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
// unreffing oldBinaryTypes
*(&local11) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp641 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
// unreffing target
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block25;
block25:;
org$frostlang$frostc$Type* $tmp642 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
// unreffing t
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block21;
block23:;
// line 197
org$frostlang$frostc$Type* $tmp643 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
org$frostlang$frostc$Type* $tmp644 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
*(&local8) = $tmp643;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
// unreffing REF($482:org.frostlang.frostc.Type?)
goto block21;
block21:;
// line 200
org$frostlang$frostc$Type* $tmp645 = *(&local8);
frost$core$Bit $tmp646 = frost$core$Bit$init$builtin_bit($tmp645 == NULL);
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block30; else goto block31;
block30:;
// line 201
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp648 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
// unreffing returnType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp649 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
// unreffing parameterTypes
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp650 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
// unreffing scope
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block31:;
// line 203
org$frostlang$frostc$Position $tmp651 = org$frostlang$frostc$Position$init();
frost$core$Int64 $tmp652 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp653 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp652);
frost$collections$Array* $tmp654 = *(&local1);
org$frostlang$frostc$Type* $tmp655 = *(&local8);
frost$core$Bit $tmp656 = frost$core$Bit$init$builtin_bit($tmp655 != NULL);
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp658 = (frost$core$Int64) {203};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s659, $tmp658, &$s660);
abort(); // unreachable
block32:;
frost$core$Int64 $tmp661 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp662 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp651, $tmp653, ((frost$collections$ListView*) $tmp654), $tmp655, $tmp661);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// unreffing REF($534:org.frostlang.frostc.Type)
org$frostlang$frostc$Type* $tmp663 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
// unreffing returnType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp664 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
// unreffing parameterTypes
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp665 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
// unreffing scope
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return $tmp662;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Closure$compileTypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
// line 211
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
// line 212
org$frostlang$frostc$Type* $tmp666 = org$frostlang$frostc$expression$Closure$typedLambdaType$org$frostlang$frostc$Compiler$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Type$Q(param0, ((frost$collections$ListView*) param2), param3, param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
org$frostlang$frostc$Type* $tmp667 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
*(&local1) = $tmp666;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
// unreffing REF($4:org.frostlang.frostc.Type?)
// line 213
org$frostlang$frostc$Type* $tmp668 = *(&local1);
frost$core$Bit $tmp669 = frost$core$Bit$init$builtin_bit($tmp668 != NULL);
bool $tmp670 = $tmp669.value;
if ($tmp670) goto block1; else goto block3;
block1:;
// line 214
org$frostlang$frostc$Type* $tmp671 = *(&local1);
frost$core$Bit $tmp672 = frost$core$Bit$init$builtin_bit($tmp671 != NULL);
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp674 = (frost$core$Int64) {214};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s675, $tmp674, &$s676);
abort(); // unreachable
block4:;
org$frostlang$frostc$Type* $tmp677 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp671);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
org$frostlang$frostc$Type* $tmp678 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
*(&local0) = $tmp677;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
// unreffing REF($31:org.frostlang.frostc.Type)
goto block2;
block3:;
// line 1
// line 219
org$frostlang$frostc$Type* $tmp679 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
org$frostlang$frostc$Type* $tmp680 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
*(&local0) = $tmp679;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
// unreffing REF($44:org.frostlang.frostc.Type)
// line 220
frost$core$Int64* $tmp681 = &param4->$rawValue;
frost$core$Int64 $tmp682 = *$tmp681;
frost$core$Int64 $tmp683 = (frost$core$Int64) {3};
frost$core$Bit $tmp684 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp682, $tmp683);
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block7; else goto block6;
block7:;
org$frostlang$frostc$Type** $tmp686 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp687 = *$tmp686;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
org$frostlang$frostc$Type* $tmp688 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
*(&local2) = $tmp687;
// line 222
org$frostlang$frostc$Type* $tmp689 = *(&local2);
org$frostlang$frostc$Type* $tmp690 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp689);
frost$core$Bit $tmp691 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp690);
bool $tmp692 = $tmp691.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
// unreffing REF($72:org.frostlang.frostc.Type)
if ($tmp692) goto block8; else goto block9;
block8:;
// line 223
org$frostlang$frostc$Type* $tmp693 = *(&local2);
org$frostlang$frostc$Type* $tmp694 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp693);
org$frostlang$frostc$Type* $tmp695 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp694);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
org$frostlang$frostc$Type* $tmp696 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
*(&local0) = $tmp695;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
// unreffing REF($82:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
// unreffing REF($81:org.frostlang.frostc.Type)
goto block9;
block9:;
org$frostlang$frostc$Type* $tmp697 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
// unreffing t
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block6;
block6:;
goto block2;
block2:;
// line 228
frost$core$Int64 $tmp698 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp699 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp698);
org$frostlang$frostc$ASTNode* $tmp700 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp701 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp702 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp703 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp704 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp702, $tmp703, $tmp704);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp700, $tmp701, param1, $tmp702);
frost$collections$Array* $tmp705 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp706 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp705, $tmp706);
org$frostlang$frostc$ASTNode* $tmp707 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp708 = (frost$core$Int64) {39};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp707, $tmp708, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp705, ((frost$core$Object*) $tmp707));
org$frostlang$frostc$IR$Value* $tmp709 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp699, param2, $tmp700, ((org$frostlang$frostc$FixedArray*) $tmp705), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
// unreffing REF($126:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
// unreffing REF($119:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
// unreffing REF($114:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// unreffing REF($108:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
// unreffing REF($106:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$Type* $tmp710 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
// unreffing lambdaType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp711 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
// unreffing returnType
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp709;

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
frost$core$Int64* $tmp712 = &param4->$rawValue;
frost$core$Int64 $tmp713 = *$tmp712;
frost$core$Int64 $tmp714 = (frost$core$Int64) {3};
frost$core$Bit $tmp715 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp713, $tmp714);
bool $tmp716 = $tmp715.value;
if ($tmp716) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Type** $tmp717 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp718 = *$tmp717;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
org$frostlang$frostc$Type* $tmp719 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local0) = $tmp718;
// line 239
org$frostlang$frostc$Type* $tmp720 = *(&local0);
org$frostlang$frostc$Type* $tmp721 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp720);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
org$frostlang$frostc$Type* $tmp722 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local1) = $tmp721;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
// unreffing REF($18:org.frostlang.frostc.Type)
// line 240
org$frostlang$frostc$Type* $tmp723 = *(&local1);
frost$core$Bit $tmp724 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp723);
bool $tmp725 = $tmp724.value;
if ($tmp725) goto block3; else goto block4;
block3:;
// line 241
ITable* $tmp726 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp726->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp726 = $tmp726->next;
}
$fn728 $tmp727 = $tmp726->methods[0];
frost$core$Int64 $tmp729 = $tmp727(((frost$collections$CollectionView*) param2));
org$frostlang$frostc$Type* $tmp730 = *(&local1);
frost$core$Int64 $tmp731 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp730);
int64_t $tmp732 = $tmp729.value;
int64_t $tmp733 = $tmp731.value;
bool $tmp734 = $tmp732 != $tmp733;
frost$core$Bit $tmp735 = (frost$core$Bit) {$tmp734};
bool $tmp736 = $tmp735.value;
if ($tmp736) goto block5; else goto block6;
block5:;
// line 242
org$frostlang$frostc$Type* $tmp737 = *(&local0);
frost$core$String* $tmp738 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s739, ((frost$core$Object*) $tmp737));
frost$core$String* $tmp740 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp738, &$s741);
frost$core$String* $tmp742 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp740, &$s743);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp742);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
// unreffing REF($51:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
// unreffing REF($50:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
// unreffing REF($49:frost.core.String)
// line 244
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp744 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
// unreffing methodType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp745 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
// unreffing t
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block6:;
// line 246
frost$collections$Array* $tmp746 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp746);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$collections$Array* $tmp747 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
*(&local2) = $tmp746;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
// unreffing REF($77:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 247
frost$core$Int64 $tmp748 = (frost$core$Int64) {0};
ITable* $tmp749 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp749->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp749 = $tmp749->next;
}
$fn751 $tmp750 = $tmp749->methods[0];
frost$core$Int64 $tmp752 = $tmp750(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp753 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp754 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp748, $tmp752, $tmp753);
frost$core$Int64 $tmp755 = $tmp754.min;
*(&local3) = $tmp755;
frost$core$Int64 $tmp756 = $tmp754.max;
frost$core$Bit $tmp757 = $tmp754.inclusive;
bool $tmp758 = $tmp757.value;
frost$core$Int64 $tmp759 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp760 = frost$core$Int64$convert$R$frost$core$UInt64($tmp759);
if ($tmp758) goto block10; else goto block11;
block10:;
int64_t $tmp761 = $tmp755.value;
int64_t $tmp762 = $tmp756.value;
bool $tmp763 = $tmp761 <= $tmp762;
frost$core$Bit $tmp764 = (frost$core$Bit) {$tmp763};
bool $tmp765 = $tmp764.value;
if ($tmp765) goto block7; else goto block8;
block11:;
int64_t $tmp766 = $tmp755.value;
int64_t $tmp767 = $tmp756.value;
bool $tmp768 = $tmp766 < $tmp767;
frost$core$Bit $tmp769 = (frost$core$Bit) {$tmp768};
bool $tmp770 = $tmp769.value;
if ($tmp770) goto block7; else goto block8;
block7:;
// line 248
frost$core$Int64 $tmp771 = *(&local3);
frost$core$Object* $tmp772 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(param2, $tmp771);
frost$core$Int64* $tmp773 = &((org$frostlang$frostc$ASTNode*) $tmp772)->$rawValue;
frost$core$Int64 $tmp774 = *$tmp773;
frost$core$Int64 $tmp775 = (frost$core$Int64) {22};
frost$core$Bit $tmp776 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp774, $tmp775);
bool $tmp777 = $tmp776.value;
if ($tmp777) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Position* $tmp778 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$ASTNode*) $tmp772)->$data + 0);
org$frostlang$frostc$Position $tmp779 = *$tmp778;
*(&local4) = $tmp779;
frost$core$String** $tmp780 = (frost$core$String**) (((org$frostlang$frostc$ASTNode*) $tmp772)->$data + 16);
frost$core$String* $tmp781 = *$tmp780;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
frost$core$String* $tmp782 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
*(&local5) = $tmp781;
// line 250
frost$collections$Array* $tmp783 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp784 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp785 = (frost$core$Int64) {34};
org$frostlang$frostc$Position $tmp786 = *(&local4);
frost$core$String* $tmp787 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp788 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp789 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp790 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp791 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp792 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp793 = *(&local1);
frost$core$Int64 $tmp794 = *(&local3);
org$frostlang$frostc$Type* $tmp795 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp793, $tmp794);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp791, $tmp792, $tmp795);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp788, $tmp789, $tmp790, $tmp791);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp784, $tmp785, $tmp786, $tmp787, $tmp788);
frost$collections$Array$add$frost$collections$Array$T($tmp783, ((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
// unreffing REF($154:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
// unreffing REF($150:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
// unreffing REF($147:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
// unreffing REF($143:org.frostlang.frostc.ASTNode)
frost$core$String* $tmp796 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
goto block12;
block14:;
// line 255
frost$core$Bit $tmp797 = frost$core$Bit$init$builtin_bit(false);
bool $tmp798 = $tmp797.value;
if ($tmp798) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp799 = (frost$core$Int64) {255};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s800, $tmp799);
abort(); // unreachable
block15:;
goto block12;
block12:;
frost$core$Frost$unref$frost$core$Object$Q($tmp772);
// unreffing REF($120:org.frostlang.frostc.FixedArray.T)
goto block9;
block9:;
frost$core$Int64 $tmp801 = *(&local3);
int64_t $tmp802 = $tmp756.value;
int64_t $tmp803 = $tmp801.value;
int64_t $tmp804 = $tmp802 - $tmp803;
frost$core$Int64 $tmp805 = (frost$core$Int64) {$tmp804};
frost$core$UInt64 $tmp806 = frost$core$Int64$convert$R$frost$core$UInt64($tmp805);
if ($tmp758) goto block18; else goto block19;
block18:;
uint64_t $tmp807 = $tmp806.value;
uint64_t $tmp808 = $tmp760.value;
bool $tmp809 = $tmp807 >= $tmp808;
frost$core$Bit $tmp810 = (frost$core$Bit) {$tmp809};
bool $tmp811 = $tmp810.value;
if ($tmp811) goto block17; else goto block8;
block19:;
uint64_t $tmp812 = $tmp806.value;
uint64_t $tmp813 = $tmp760.value;
bool $tmp814 = $tmp812 > $tmp813;
frost$core$Bit $tmp815 = (frost$core$Bit) {$tmp814};
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block17; else goto block8;
block17:;
int64_t $tmp817 = $tmp801.value;
int64_t $tmp818 = $tmp759.value;
int64_t $tmp819 = $tmp817 + $tmp818;
frost$core$Int64 $tmp820 = (frost$core$Int64) {$tmp819};
*(&local3) = $tmp820;
goto block7;
block8:;
// line 259
org$frostlang$frostc$Type* $tmp821 = *(&local0);
org$frostlang$frostc$Type* $tmp822 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp821);
org$frostlang$frostc$Type* $tmp823 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp822);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
org$frostlang$frostc$Type* $tmp824 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
*(&local6) = $tmp823;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
// unreffing REF($218:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// unreffing REF($217:org.frostlang.frostc.Type)
// line 260
frost$core$Int64 $tmp825 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp826 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp825);
frost$collections$Array* $tmp827 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp828 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp827);
org$frostlang$frostc$ASTNode* $tmp829 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp830 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp831 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp832 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp833 = *(&local6);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp831, $tmp832, $tmp833);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp829, $tmp830, param1, $tmp831);
frost$collections$Array* $tmp834 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp835 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp834, $tmp835);
org$frostlang$frostc$ASTNode* $tmp836 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp837 = (frost$core$Int64) {39};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp836, $tmp837, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp834, ((frost$core$Object*) $tmp836));
org$frostlang$frostc$FixedArray* $tmp838 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp834);
org$frostlang$frostc$IR$Value* $tmp839 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp826, $tmp828, $tmp829, $tmp838, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
// unreffing REF($261:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
// unreffing REF($259:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
// unreffing REF($252:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
// unreffing REF($247:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
// unreffing REF($241:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
// unreffing REF($239:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
// unreffing REF($237:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
org$frostlang$frostc$Type* $tmp840 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp841 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
// unreffing parameters
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp842 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// unreffing methodType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp843 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
// unreffing t
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp839;
block4:;
org$frostlang$frostc$Type* $tmp844 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
// unreffing methodType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp845 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
// unreffing t
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 268
frost$collections$IdentityMap** $tmp846 = &param0->lambdaTypes;
frost$collections$IdentityMap* $tmp847 = *$tmp846;
frost$core$Object* $tmp848 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp847, ((frost$core$Object*) param3));
*(&local7) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp848)));
frost$collections$HashSet* $tmp849 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
*(&local7) = ((frost$collections$HashSet*) $tmp848);
frost$core$Frost$unref$frost$core$Object$Q($tmp848);
// unreffing REF($322:frost.collections.IdentityMap.V?)
// line 269
frost$collections$HashSet* $tmp850 = *(&local7);
frost$core$Bit $tmp851 = frost$core$Bit$init$builtin_bit($tmp850 != NULL);
bool $tmp852 = $tmp851.value;
if ($tmp852) goto block20; else goto block21;
block20:;
// line 270
frost$collections$HashSet* $tmp853 = *(&local7);
frost$core$Bit $tmp854 = frost$core$Bit$init$builtin_bit($tmp853 != NULL);
bool $tmp855 = $tmp854.value;
if ($tmp855) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp856 = (frost$core$Int64) {270};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s857, $tmp856, &$s858);
abort(); // unreachable
block24:;
ITable* $tmp859 = ((frost$collections$CollectionView*) $tmp853)->$class->itable;
while ($tmp859->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp859 = $tmp859->next;
}
$fn861 $tmp860 = $tmp859->methods[0];
frost$core$Int64 $tmp862 = $tmp860(((frost$collections$CollectionView*) $tmp853));
frost$core$Int64 $tmp863 = (frost$core$Int64) {1};
int64_t $tmp864 = $tmp862.value;
int64_t $tmp865 = $tmp863.value;
bool $tmp866 = $tmp864 > $tmp865;
frost$core$Bit $tmp867 = (frost$core$Bit) {$tmp866};
bool $tmp868 = $tmp867.value;
if ($tmp868) goto block22; else goto block26;
block22:;
// line 271
frost$core$MutableString* $tmp869 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp869, &$s870);
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
frost$core$MutableString* $tmp871 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
*(&local8) = $tmp869;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
// unreffing REF($360:frost.core.MutableString)
// line 272
frost$threads$MessageQueue** $tmp872 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp873 = *$tmp872;
*(&local9) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
frost$threads$MessageQueue* $tmp874 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
*(&local9) = $tmp873;
// line 273
frost$collections$HashSet* $tmp875 = *(&local7);
frost$core$Bit $tmp876 = frost$core$Bit$init$builtin_bit($tmp875 != NULL);
bool $tmp877 = $tmp876.value;
if ($tmp877) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp878 = (frost$core$Int64) {273};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s879, $tmp878, &$s880);
abort(); // unreachable
block27:;
ITable* $tmp881 = ((frost$collections$Iterable*) $tmp875)->$class->itable;
while ($tmp881->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp881 = $tmp881->next;
}
$fn883 $tmp882 = $tmp881->methods[0];
frost$collections$Iterator* $tmp884 = $tmp882(((frost$collections$Iterable*) $tmp875));
goto block29;
block29:;
ITable* $tmp885 = $tmp884->$class->itable;
while ($tmp885->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp885 = $tmp885->next;
}
$fn887 $tmp886 = $tmp885->methods[0];
frost$core$Bit $tmp888 = $tmp886($tmp884);
bool $tmp889 = $tmp888.value;
if ($tmp889) goto block31; else goto block30;
block30:;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp890 = $tmp884->$class->itable;
while ($tmp890->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp890 = $tmp890->next;
}
$fn892 $tmp891 = $tmp890->methods[1];
frost$core$Object* $tmp893 = $tmp891($tmp884);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp893)));
org$frostlang$frostc$Type* $tmp894 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
*(&local10) = ((org$frostlang$frostc$Type*) $tmp893);
// line 274
frost$core$MutableString* $tmp895 = *(&local8);
org$frostlang$frostc$Type* $tmp896 = *(&local10);
frost$core$String* $tmp897 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s898, ((frost$core$Object*) $tmp896));
frost$core$String* $tmp899 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp897, &$s900);
frost$core$MutableString$append$frost$core$String($tmp895, $tmp899);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
// unreffing REF($418:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
// unreffing REF($417:frost.core.String)
// line 275
frost$threads$MessageQueue* $tmp901 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp901);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
frost$threads$MessageQueue** $tmp902 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp903 = *$tmp902;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
frost$threads$MessageQueue** $tmp904 = &param0->errorQueue;
*$tmp904 = $tmp901;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
// unreffing REF($427:frost.threads.MessageQueue<org.frostlang.frostc.Compiler.ErrorMsg>)
// line 276
org$frostlang$frostc$Compiler$TypeContext* $tmp905 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp906 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp907 = *(&local10);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp905, $tmp906, $tmp907);
org$frostlang$frostc$IR$Value* $tmp908 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp905);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
// unreffing REF($446:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
// unreffing REF($442:org.frostlang.frostc.Compiler.TypeContext)
// line 278
frost$threads$MessageQueue** $tmp909 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp910 = *$tmp909;
frost$core$Bit $tmp911 = frost$threads$MessageQueue$hasMessage$R$frost$core$Bit($tmp910);
bool $tmp912 = $tmp911.value;
if ($tmp912) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp913 = (frost$core$Int64) {278};
org$frostlang$frostc$Position$wrapper* $tmp914;
$tmp914 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp914->value = param1;
frost$core$String* $tmp915 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s916, ((frost$core$Object*) $tmp914));
frost$core$String* $tmp917 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp915, &$s918);
org$frostlang$frostc$Type* $tmp919 = *(&local10);
frost$core$String* $tmp920 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s921, ((frost$core$Object*) $tmp919));
frost$core$String* $tmp922 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp920, &$s923);
frost$core$String* $tmp924 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp917, $tmp922);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s925, $tmp913, $tmp924);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
// unreffing REF($468:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
// unreffing REF($467:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
// unreffing REF($466:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
// unreffing REF($463:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
// unreffing REF($462:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
// unreffing REF($461:frost.core.Object)
abort(); // unreachable
block32:;
// line 281
frost$core$MutableString* $tmp926 = *(&local8);
frost$threads$MessageQueue** $tmp927 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp928 = *$tmp927;
frost$core$Immutable* $tmp929 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp928);
frost$core$String** $tmp930 = &((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp929)->message;
frost$core$String* $tmp931 = *$tmp930;
frost$core$String* $tmp932 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s933, $tmp931);
frost$core$String* $tmp934 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp932, &$s935);
frost$core$MutableString$append$frost$core$String($tmp926, $tmp934);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
// unreffing REF($499:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
// unreffing REF($498:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
// unreffing REF($494:frost.threads.MessageQueue.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp893);
// unreffing REF($405:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp936 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
// unreffing t
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block29;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
// unreffing REF($394:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 283
frost$threads$MessageQueue* $tmp937 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
frost$threads$MessageQueue** $tmp938 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp939 = *$tmp938;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
frost$threads$MessageQueue** $tmp940 = &param0->errorQueue;
*$tmp940 = $tmp937;
// line 284
frost$core$MutableString* $tmp941 = *(&local8);
frost$core$String* $tmp942 = frost$core$MutableString$finish$R$frost$core$String($tmp941);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp942);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
// unreffing REF($534:frost.core.String)
// line 285
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$threads$MessageQueue* $tmp943 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
// unreffing old
*(&local9) = ((frost$threads$MessageQueue*) NULL);
frost$core$MutableString* $tmp944 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
// unreffing msg
*(&local8) = ((frost$core$MutableString*) NULL);
frost$collections$HashSet* $tmp945 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
// unreffing attempts
*(&local7) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block26:;
// line 1
// line 288
org$frostlang$frostc$Compiler$TypeContext* $tmp946 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp947 = (frost$core$Int64) {3};
frost$collections$HashSet* $tmp948 = *(&local7);
frost$core$Bit $tmp949 = frost$core$Bit$init$builtin_bit($tmp948 != NULL);
bool $tmp950 = $tmp949.value;
if ($tmp950) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp951 = (frost$core$Int64) {289};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s952, $tmp951, &$s953);
abort(); // unreachable
block34:;
ITable* $tmp954 = ((frost$collections$Iterable*) $tmp948)->$class->itable;
while ($tmp954->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp954 = $tmp954->next;
}
$fn956 $tmp955 = $tmp954->methods[0];
frost$collections$Iterator* $tmp957 = $tmp955(((frost$collections$Iterable*) $tmp948));
ITable* $tmp958 = $tmp957->$class->itable;
while ($tmp958->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp958 = $tmp958->next;
}
$fn960 $tmp959 = $tmp958->methods[1];
frost$core$Object* $tmp961 = $tmp959($tmp957);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp946, $tmp947, ((org$frostlang$frostc$Type*) $tmp961));
org$frostlang$frostc$IR$Value* $tmp962 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp946);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
// unreffing REF($579:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp961);
// unreffing REF($576:frost.collections.Iterator.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// unreffing REF($572:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
// unreffing REF($560:org.frostlang.frostc.Compiler.TypeContext)
// line 290
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp963 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
// unreffing attempts
*(&local7) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block23:;
goto block21;
block21:;
// line 293
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s964);
// line 295
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp965 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
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
frost$core$Int64* $tmp966 = &param0->closureCount;
frost$core$Int64 $tmp967 = *$tmp966;
frost$core$Int64 $tmp968 = (frost$core$Int64) {1};
int64_t $tmp969 = $tmp967.value;
int64_t $tmp970 = $tmp968.value;
int64_t $tmp971 = $tmp969 + $tmp970;
frost$core$Int64 $tmp972 = (frost$core$Int64) {$tmp971};
frost$core$Int64* $tmp973 = &param0->closureCount;
*$tmp973 = $tmp972;
// line 303
frost$core$Int64* $tmp974 = &param0->closureCount;
frost$core$Int64 $tmp975 = *$tmp974;
frost$core$Int64$wrapper* $tmp976;
$tmp976 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp976->value = $tmp975;
frost$core$String* $tmp977 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s978, ((frost$core$Object*) $tmp976));
frost$core$String* $tmp979 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp977, &$s980);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
frost$core$String* $tmp981 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
*(&local0) = $tmp979;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
// unreffing REF($15:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
// unreffing REF($13:frost.core.Object)
// line 304
frost$collections$Array* $tmp982 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp982);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
frost$collections$Array* $tmp983 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
*(&local1) = $tmp982;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
// unreffing REF($33:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
// line 305
ITable* $tmp984 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp984->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp984 = $tmp984->next;
}
$fn986 $tmp985 = $tmp984->methods[0];
frost$collections$Iterator* $tmp987 = $tmp985(((frost$collections$Iterable*) param3));
goto block1;
block1:;
ITable* $tmp988 = $tmp987->$class->itable;
while ($tmp988->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp988 = $tmp988->next;
}
$fn990 $tmp989 = $tmp988->methods[0];
frost$core$Bit $tmp991 = $tmp989($tmp987);
bool $tmp992 = $tmp991.value;
if ($tmp992) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp993 = $tmp987->$class->itable;
while ($tmp993->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp993 = $tmp993->next;
}
$fn995 $tmp994 = $tmp993->methods[1];
frost$core$Object* $tmp996 = $tmp994($tmp987);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp996)));
org$frostlang$frostc$ASTNode* $tmp997 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp996);
// line 306
org$frostlang$frostc$ASTNode* $tmp998 = *(&local2);
frost$core$Int64* $tmp999 = &$tmp998->$rawValue;
frost$core$Int64 $tmp1000 = *$tmp999;
frost$core$Int64 $tmp1001 = (frost$core$Int64) {34};
frost$core$Bit $tmp1002 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1000, $tmp1001);
bool $tmp1003 = $tmp1002.value;
if ($tmp1003) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp1004 = (org$frostlang$frostc$Position*) ($tmp998->$data + 0);
org$frostlang$frostc$Position $tmp1005 = *$tmp1004;
frost$core$String** $tmp1006 = (frost$core$String**) ($tmp998->$data + 16);
frost$core$String* $tmp1007 = *$tmp1006;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
frost$core$String* $tmp1008 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
*(&local3) = $tmp1007;
org$frostlang$frostc$ASTNode** $tmp1009 = (org$frostlang$frostc$ASTNode**) ($tmp998->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1010 = *$tmp1009;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
org$frostlang$frostc$ASTNode* $tmp1011 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
*(&local4) = $tmp1010;
// line 308
org$frostlang$frostc$Scanner** $tmp1012 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1013 = *$tmp1012;
org$frostlang$frostc$ASTNode* $tmp1014 = *(&local4);
org$frostlang$frostc$Type* $tmp1015 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1013, $tmp1014);
org$frostlang$frostc$Type* $tmp1016 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1015);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
org$frostlang$frostc$Type* $tmp1017 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
*(&local5) = $tmp1016;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
// unreffing REF($102:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
// unreffing REF($101:org.frostlang.frostc.Type)
// line 309
org$frostlang$frostc$Type* $tmp1018 = *(&local5);
frost$core$Bit $tmp1019 = frost$core$Bit$init$builtin_bit($tmp1018 == NULL);
bool $tmp1020 = $tmp1019.value;
if ($tmp1020) goto block7; else goto block8;
block7:;
// line 310
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1021 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
// unreffing resolved
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1022 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
// unreffing type
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1023 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
// unreffing name
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp996);
// unreffing REF($61:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1024 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
// unreffing p
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
// unreffing REF($50:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$collections$Array* $tmp1025 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1026 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
// line 312
frost$collections$Array* $tmp1027 = *(&local1);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1028 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp1029 = *(&local3);
org$frostlang$frostc$Type* $tmp1030 = *(&local5);
frost$core$Bit $tmp1031 = frost$core$Bit$init$builtin_bit($tmp1030 != NULL);
bool $tmp1032 = $tmp1031.value;
if ($tmp1032) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1033 = (frost$core$Int64) {312};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1034, $tmp1033, &$s1035);
abort(); // unreachable
block9:;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp1028, $tmp1029, $tmp1030);
frost$collections$Array$add$frost$collections$Array$T($tmp1027, ((frost$core$Object*) $tmp1028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
// unreffing REF($165:org.frostlang.frostc.MethodDecl.Parameter)
org$frostlang$frostc$Type* $tmp1036 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
// unreffing resolved
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1037 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
// unreffing type
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1038 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
// unreffing name
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 315
frost$core$Bit $tmp1039 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1040 = $tmp1039.value;
if ($tmp1040) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1041 = (frost$core$Int64) {315};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1042, $tmp1041);
abort(); // unreachable
block11:;
goto block4;
block4:;
frost$core$Frost$unref$frost$core$Object$Q($tmp996);
// unreffing REF($61:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1043 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
// unreffing p
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
// unreffing REF($50:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 319
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// line 320
frost$core$Bit $tmp1044 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp1045 = $tmp1044.value;
if ($tmp1045) goto block13; else goto block15;
block13:;
// line 321
org$frostlang$frostc$Scanner** $tmp1046 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1047 = *$tmp1046;
frost$core$Bit $tmp1048 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp1049 = $tmp1048.value;
if ($tmp1049) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp1050 = (frost$core$Int64) {321};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1051, $tmp1050, &$s1052);
abort(); // unreachable
block16:;
org$frostlang$frostc$Type* $tmp1053 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1047, param4);
org$frostlang$frostc$Type* $tmp1054 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1053);
frost$core$Bit $tmp1055 = frost$core$Bit$init$builtin_bit($tmp1054 != NULL);
bool $tmp1056 = $tmp1055.value;
if ($tmp1056) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp1057 = (frost$core$Int64) {321};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1058, $tmp1057, &$s1059);
abort(); // unreachable
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
org$frostlang$frostc$Type* $tmp1060 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
*(&local6) = $tmp1054;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
// unreffing REF($237:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
// unreffing REF($236:org.frostlang.frostc.Type)
// line 322
org$frostlang$frostc$Type* $tmp1061 = *(&local6);
frost$core$Bit $tmp1062 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block20; else goto block21;
block20:;
// line 323
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1064 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1065 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1066 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block21:;
goto block14;
block15:;
// line 1
// line 327
org$frostlang$frostc$Type* $tmp1067 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
org$frostlang$frostc$Type* $tmp1068 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
*(&local6) = $tmp1067;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
// unreffing REF($285:org.frostlang.frostc.Type)
// line 328
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1069;
$tmp1069 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1069->value = param2;
frost$core$Int64 $tmp1070 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp1071 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1070);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1072;
$tmp1072 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1072->value = $tmp1071;
ITable* $tmp1073 = ((frost$core$Equatable*) $tmp1069)->$class->itable;
while ($tmp1073->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1073 = $tmp1073->next;
}
$fn1075 $tmp1074 = $tmp1073->methods[0];
frost$core$Bit $tmp1076 = $tmp1074(((frost$core$Equatable*) $tmp1069), ((frost$core$Equatable*) $tmp1072));
bool $tmp1077 = $tmp1076.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1072)));
// unreffing REF($300:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1069)));
// unreffing REF($296:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp1077) goto block22; else goto block23;
block22:;
// line 329
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s1078);
// line 330
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1079 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1080 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1081 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block23:;
goto block14;
block14:;
// line 333
org$frostlang$frostc$Pair* $tmp1082 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Stack** $tmp1083 = &param0->currentMethod;
frost$collections$Stack* $tmp1084 = *$tmp1083;
frost$core$Int64 $tmp1085 = (frost$core$Int64) {0};
frost$core$Object* $tmp1086 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1084, $tmp1085);
frost$collections$HashMap* $tmp1087 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp1087);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1082, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1086)), ((frost$core$Object*) ((frost$collections$Map*) $tmp1087)));
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
org$frostlang$frostc$Pair* $tmp1088 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
*(&local7) = $tmp1082;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
// unreffing REF($343:frost.collections.HashMap<frost.core.String, org.frostlang.frostc.Compiler.Capture>)
frost$core$Frost$unref$frost$core$Object$Q($tmp1086);
// unreffing REF($340:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
// unreffing REF($334:org.frostlang.frostc.Pair<org.frostlang.frostc.MethodDecl, frost.collections.Map<frost.core.String, org.frostlang.frostc.Compiler.Capture>>)
// line 335
frost$collections$Stack** $tmp1089 = &param0->captures;
frost$collections$Stack* $tmp1090 = *$tmp1089;
org$frostlang$frostc$Pair* $tmp1091 = *(&local7);
frost$collections$Stack$push$frost$collections$Stack$T($tmp1090, ((frost$core$Object*) $tmp1091));
// line 336
org$frostlang$frostc$Annotations* $tmp1092 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp1093 = (frost$core$Int64) {16};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp1092, $tmp1093);
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
org$frostlang$frostc$Annotations* $tmp1094 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
*(&local8) = $tmp1092;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
// unreffing REF($373:org.frostlang.frostc.Annotations)
// line 337
org$frostlang$frostc$MethodDecl* $tmp1095 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$collections$Stack** $tmp1096 = &param0->currentClass;
frost$collections$Stack* $tmp1097 = *$tmp1096;
frost$core$Int64 $tmp1098 = (frost$core$Int64) {0};
frost$core$Object* $tmp1099 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1097, $tmp1098);
org$frostlang$frostc$Annotations* $tmp1100 = *(&local8);
frost$core$String* $tmp1101 = *(&local0);
frost$collections$Array* $tmp1102 = *(&local1);
org$frostlang$frostc$Type* $tmp1103 = *(&local6);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp1095, ((org$frostlang$frostc$ClassDecl*) $tmp1099), param1, ((frost$core$String*) NULL), $tmp1100, param2, $tmp1101, ((frost$collections$Array*) NULL), $tmp1102, $tmp1103, param5);
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
org$frostlang$frostc$MethodDecl* $tmp1104 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
*(&local9) = $tmp1095;
frost$core$Frost$unref$frost$core$Object$Q($tmp1099);
// unreffing REF($392:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
// unreffing REF($387:org.frostlang.frostc.MethodDecl)
// line 341
frost$core$Bit* $tmp1105 = &param0->writeCode;
frost$core$Bit $tmp1106 = *$tmp1105;
*(&local10) = $tmp1106;
// line 342
frost$core$Bit* $tmp1107 = &param0->reportErrors;
frost$core$Bit $tmp1108 = *$tmp1107;
*(&local11) = $tmp1108;
// line 343
frost$core$Bit $tmp1109 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp1110 = &param0->writeCode;
*$tmp1110 = $tmp1109;
// line 344
frost$core$Bit $tmp1111 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp1112 = &param0->reportErrors;
*$tmp1112 = $tmp1111;
// line 345
frost$collections$Stack** $tmp1113 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1114 = *$tmp1113;
*(&local12) = ((frost$collections$Stack*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
frost$collections$Stack* $tmp1115 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
*(&local12) = $tmp1114;
// line 346
frost$collections$Stack* $tmp1116 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp1116);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
frost$collections$Stack** $tmp1117 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1118 = *$tmp1117;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
frost$collections$Stack** $tmp1119 = &param0->enclosingContexts;
*$tmp1119 = $tmp1116;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
// unreffing REF($440:frost.collections.Stack<org.frostlang.frostc.Compiler.EnclosingContext>)
// line 347
org$frostlang$frostc$MethodDecl* $tmp1120 = *(&local9);
org$frostlang$frostc$SymbolTable** $tmp1121 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1122 = *$tmp1121;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp1120, $tmp1122);
// line 348
frost$collections$Stack* $tmp1123 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
frost$collections$Stack** $tmp1124 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1125 = *$tmp1124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
frost$collections$Stack** $tmp1126 = &param0->enclosingContexts;
*$tmp1126 = $tmp1123;
// line 349
frost$core$Bit $tmp1127 = *(&local10);
frost$core$Bit* $tmp1128 = &param0->writeCode;
*$tmp1128 = $tmp1127;
// line 350
frost$core$Bit $tmp1129 = *(&local11);
frost$core$Bit* $tmp1130 = &param0->reportErrors;
*$tmp1130 = $tmp1129;
// line 352
// line 353
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 354
org$frostlang$frostc$Pair* $tmp1131 = *(&local7);
frost$core$Object** $tmp1132 = &$tmp1131->second;
frost$core$Object* $tmp1133 = *$tmp1132;
ITable* $tmp1134 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1133))->$class->itable;
while ($tmp1134->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1134 = $tmp1134->next;
}
$fn1136 $tmp1135 = $tmp1134->methods[0];
frost$core$Int64 $tmp1137 = $tmp1135(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1133)));
frost$core$Int64 $tmp1138 = (frost$core$Int64) {0};
int64_t $tmp1139 = $tmp1137.value;
int64_t $tmp1140 = $tmp1138.value;
bool $tmp1141 = $tmp1139 != $tmp1140;
frost$core$Bit $tmp1142 = (frost$core$Bit) {$tmp1141};
bool $tmp1143 = $tmp1142.value;
if ($tmp1143) goto block24; else goto block26;
block24:;
// line 356
org$frostlang$frostc$MethodDecl* $tmp1144 = *(&local9);
org$frostlang$frostc$Pair* $tmp1145 = *(&local7);
frost$core$Object** $tmp1146 = &$tmp1145->second;
frost$core$Object* $tmp1147 = *$tmp1146;
ITable* $tmp1148 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1147))->$class->itable;
while ($tmp1148->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1148 = $tmp1148->next;
}
$fn1150 $tmp1149 = $tmp1148->methods[4];
frost$collections$Iterator* $tmp1151 = $tmp1149(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1147)));
ITable* $tmp1152 = $tmp1151->$class->itable;
while ($tmp1152->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1152 = $tmp1152->next;
}
$fn1154 $tmp1153 = $tmp1152->methods[6];
frost$collections$Array* $tmp1155 = $tmp1153($tmp1151);
org$frostlang$frostc$ClassDecl* $tmp1156 = org$frostlang$frostc$expression$Closure$createClosureClass$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlang$frostc$Compiler$Capture$GT$R$org$frostlang$frostc$ClassDecl(param0, $tmp1144, ((frost$collections$CollectionView*) $tmp1155));
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
org$frostlang$frostc$ClassDecl* $tmp1157 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
*(&local15) = $tmp1156;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
// unreffing REF($513:org.frostlang.frostc.ClassDecl)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
// unreffing REF($510:frost.collections.Array<frost.collections.Iterator.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
// unreffing REF($506:frost.collections.Iterator<frost.collections.MapView.V>)
// line 357
frost$collections$Array* $tmp1158 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1158);
*(&local16) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
frost$collections$Array* $tmp1159 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
*(&local16) = $tmp1158;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
// unreffing REF($531:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 358
org$frostlang$frostc$Pair* $tmp1160 = *(&local7);
frost$core$Object** $tmp1161 = &$tmp1160->second;
frost$core$Object* $tmp1162 = *$tmp1161;
ITable* $tmp1163 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1162))->$class->itable;
while ($tmp1163->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1163 = $tmp1163->next;
}
$fn1165 $tmp1164 = $tmp1163->methods[4];
frost$collections$Iterator* $tmp1166 = $tmp1164(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1162)));
goto block27;
block27:;
ITable* $tmp1167 = $tmp1166->$class->itable;
while ($tmp1167->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1167 = $tmp1167->next;
}
$fn1169 $tmp1168 = $tmp1167->methods[0];
frost$core$Bit $tmp1170 = $tmp1168($tmp1166);
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block29; else goto block28;
block28:;
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp1172 = $tmp1166->$class->itable;
while ($tmp1172->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1172 = $tmp1172->next;
}
$fn1174 $tmp1173 = $tmp1172->methods[1];
frost$core$Object* $tmp1175 = $tmp1173($tmp1166);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp1175)));
org$frostlang$frostc$Compiler$Capture* $tmp1176 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) $tmp1175);
// line 359
org$frostlang$frostc$Compiler$Capture* $tmp1177 = *(&local17);
frost$core$Int64* $tmp1178 = &$tmp1177->$rawValue;
frost$core$Int64 $tmp1179 = *$tmp1178;
frost$core$Int64 $tmp1180 = (frost$core$Int64) {0};
frost$core$Bit $tmp1181 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1179, $tmp1180);
bool $tmp1182 = $tmp1181.value;
if ($tmp1182) goto block31; else goto block32;
block31:;
org$frostlang$frostc$Variable** $tmp1183 = (org$frostlang$frostc$Variable**) ($tmp1177->$data + 0);
org$frostlang$frostc$Variable* $tmp1184 = *$tmp1183;
*(&local18) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
org$frostlang$frostc$Variable* $tmp1185 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
*(&local18) = $tmp1184;
// line 361
frost$collections$Array* $tmp1186 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1187 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1188 = (frost$core$Int64) {22};
org$frostlang$frostc$Variable* $tmp1189 = *(&local18);
frost$core$String** $tmp1190 = &((org$frostlang$frostc$Symbol*) $tmp1189)->name;
frost$core$String* $tmp1191 = *$tmp1190;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1187, $tmp1188, param1, $tmp1191);
frost$collections$Array$add$frost$collections$Array$T($tmp1186, ((frost$core$Object*) $tmp1187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
// unreffing REF($591:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$Variable* $tmp1192 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
// unreffing v
*(&local18) = ((org$frostlang$frostc$Variable*) NULL);
goto block30;
block32:;
frost$core$Int64 $tmp1193 = (frost$core$Int64) {2};
frost$core$Bit $tmp1194 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1179, $tmp1193);
bool $tmp1195 = $tmp1194.value;
if ($tmp1195) goto block33; else goto block34;
block33:;
// line 364
frost$collections$Array* $tmp1196 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1197 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1198 = (frost$core$Int64) {40};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1197, $tmp1198, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1196, ((frost$core$Object*) $tmp1197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
// unreffing REF($616:org.frostlang.frostc.ASTNode)
goto block30;
block34:;
frost$core$Int64 $tmp1199 = (frost$core$Int64) {1};
frost$core$Bit $tmp1200 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1179, $tmp1199);
bool $tmp1201 = $tmp1200.value;
if ($tmp1201) goto block35; else goto block30;
block35:;
org$frostlang$frostc$FieldDecl** $tmp1202 = (org$frostlang$frostc$FieldDecl**) ($tmp1177->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp1203 = *$tmp1202;
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
org$frostlang$frostc$FieldDecl* $tmp1204 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
*(&local19) = $tmp1203;
// line 367
frost$collections$Array* $tmp1205 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1206 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1207 = (frost$core$Int64) {16};
org$frostlang$frostc$ASTNode* $tmp1208 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1209 = (frost$core$Int64) {22};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1208, $tmp1209, param1, &$s1210);
org$frostlang$frostc$FieldDecl* $tmp1211 = *(&local19);
frost$core$String** $tmp1212 = &((org$frostlang$frostc$Symbol*) $tmp1211)->name;
frost$core$String* $tmp1213 = *$tmp1212;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp1206, $tmp1207, param1, $tmp1208, $tmp1213);
frost$collections$Array$add$frost$collections$Array$T($tmp1205, ((frost$core$Object*) $tmp1206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
// unreffing REF($643:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
// unreffing REF($641:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$FieldDecl* $tmp1214 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
// unreffing f
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block30;
block30:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1175);
// unreffing REF($563:frost.collections.Iterator.T)
org$frostlang$frostc$Compiler$Capture* $tmp1215 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
// unreffing capture
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block27;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
// unreffing REF($552:frost.collections.Iterator<frost.collections.MapView.V>)
// line 373
frost$collections$Stack** $tmp1216 = &param0->captures;
frost$collections$Stack* $tmp1217 = *$tmp1216;
frost$core$Object* $tmp1218 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1217);
frost$core$Frost$unref$frost$core$Object$Q($tmp1218);
// unreffing REF($681:frost.collections.Stack.T)
// line 374
frost$collections$Array** $tmp1219 = &param0->pendingClasses;
frost$collections$Array* $tmp1220 = *$tmp1219;
org$frostlang$frostc$ClassDecl* $tmp1221 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp1220, ((frost$core$Object*) $tmp1221));
// line 375
org$frostlang$frostc$IR$Value* $tmp1222 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1223 = (frost$core$Int64) {14};
org$frostlang$frostc$ClassDecl* $tmp1224 = *(&local15);
org$frostlang$frostc$Type** $tmp1225 = &$tmp1224->type;
org$frostlang$frostc$Type* $tmp1226 = *$tmp1225;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1222, $tmp1223, $tmp1226);
frost$collections$Array* $tmp1227 = *(&local16);
org$frostlang$frostc$FixedArray* $tmp1228 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1227);
org$frostlang$frostc$Compiler$TypeContext* $tmp1229 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1230 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1229, $tmp1230);
org$frostlang$frostc$IR$Value* $tmp1231 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1222, ((frost$collections$ListView*) $tmp1228), $tmp1229);
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
org$frostlang$frostc$IR$Value* $tmp1232 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local20) = $tmp1231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
// unreffing REF($708:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
// unreffing REF($705:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
// unreffing REF($702:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
// unreffing REF($694:org.frostlang.frostc.IR.Value)
// line 377
org$frostlang$frostc$IR$Value* $tmp1233 = *(&local20);
frost$core$Bit $tmp1234 = frost$core$Bit$init$builtin_bit($tmp1233 == NULL);
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block36; else goto block37;
block36:;
// line 378
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1236 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
// unreffing rawTarget
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1237 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
// unreffing args
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1238 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
// unreffing cl
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp1239 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
// unreffing target
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp1240 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
// unreffing oldContexts
*(&local12) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1241 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
// unreffing methodDecl
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp1242 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
// unreffing annotations
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp1243 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
// unreffing currentCaptures
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1244 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1245 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1246 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block37:;
// line 380
org$frostlang$frostc$ASTNode* $tmp1247 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1248 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp1249 = *(&local20);
frost$core$Bit $tmp1250 = frost$core$Bit$init$builtin_bit($tmp1249 != NULL);
bool $tmp1251 = $tmp1250.value;
if ($tmp1251) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp1252 = (frost$core$Int64) {380};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1253, $tmp1252, &$s1254);
abort(); // unreachable
block38:;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1247, $tmp1248, param1, $tmp1249);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
org$frostlang$frostc$ASTNode* $tmp1255 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
*(&local14) = $tmp1247;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
// unreffing REF($794:org.frostlang.frostc.ASTNode)
// line 381
org$frostlang$frostc$ClassDecl* $tmp1256 = *(&local15);
org$frostlang$frostc$Type** $tmp1257 = &$tmp1256->type;
org$frostlang$frostc$Type* $tmp1258 = *$tmp1257;
frost$core$Bit $tmp1259 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1258);
*(&local13) = $tmp1259;
org$frostlang$frostc$IR$Value* $tmp1260 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
// unreffing rawTarget
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1261 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
// unreffing args
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1262 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
// unreffing cl
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block25;
block26:;
// line 1
// line 385
frost$collections$Stack** $tmp1263 = &param0->captures;
frost$collections$Stack* $tmp1264 = *$tmp1263;
frost$core$Object* $tmp1265 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1264);
frost$core$Frost$unref$frost$core$Object$Q($tmp1265);
// unreffing REF($843:frost.collections.Stack.T)
// line 386
frost$collections$Stack* $tmp1266 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp1266);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
frost$collections$Stack** $tmp1267 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1268 = *$tmp1267;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
frost$collections$Stack** $tmp1269 = &param0->enclosingContexts;
*$tmp1269 = $tmp1266;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
// unreffing REF($849:frost.collections.Stack<org.frostlang.frostc.Compiler.EnclosingContext>)
// line 387
org$frostlang$frostc$MethodDecl* $tmp1270 = *(&local9);
org$frostlang$frostc$SymbolTable** $tmp1271 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1272 = *$tmp1271;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp1270, $tmp1272);
// line 388
frost$collections$Stack* $tmp1273 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
frost$collections$Stack** $tmp1274 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1275 = *$tmp1274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
frost$collections$Stack** $tmp1276 = &param0->enclosingContexts;
*$tmp1276 = $tmp1273;
// line 389
org$frostlang$frostc$ASTNode* $tmp1277 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1278 = (frost$core$Int64) {31};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1277, $tmp1278, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
org$frostlang$frostc$ASTNode* $tmp1279 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
*(&local14) = $tmp1277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
// unreffing REF($880:org.frostlang.frostc.ASTNode)
// line 390
frost$core$Bit $tmp1280 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp1280;
goto block25;
block25:;
// line 392
frost$collections$Array* $tmp1281 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1281);
*(&local21) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
frost$collections$Array* $tmp1282 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
*(&local21) = $tmp1281;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
// unreffing REF($898:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 393
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
// line 394
org$frostlang$frostc$MethodDecl* $tmp1283 = *(&local9);
org$frostlang$frostc$Annotations** $tmp1284 = &$tmp1283->annotations;
org$frostlang$frostc$Annotations* $tmp1285 = *$tmp1284;
frost$core$Bit $tmp1286 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1285);
bool $tmp1287 = $tmp1286.value;
if ($tmp1287) goto block40; else goto block42;
block40:;
// line 395
org$frostlang$frostc$MethodDecl* $tmp1288 = *(&local9);
org$frostlang$frostc$Type* $tmp1289 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp1288);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
org$frostlang$frostc$Type* $tmp1290 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
*(&local22) = $tmp1289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
// unreffing REF($922:org.frostlang.frostc.Type)
goto block41;
block42:;
// line 1
// line 398
org$frostlang$frostc$MethodDecl* $tmp1291 = *(&local9);
org$frostlang$frostc$MethodDecl* $tmp1292 = *(&local9);
frost$core$Weak** $tmp1293 = &$tmp1292->owner;
frost$core$Weak* $tmp1294 = *$tmp1293;
frost$core$Object* $tmp1295 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1294);
org$frostlang$frostc$Type** $tmp1296 = &((org$frostlang$frostc$ClassDecl*) $tmp1295)->type;
org$frostlang$frostc$Type* $tmp1297 = *$tmp1296;
frost$core$Bit $tmp1298 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp1299 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp1291, $tmp1297, $tmp1298);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
org$frostlang$frostc$Type* $tmp1300 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
*(&local22) = $tmp1299;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
// unreffing REF($945:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1295);
// unreffing REF($940:frost.core.Weak.T)
goto block41;
block41:;
// line 400
org$frostlang$frostc$Type* $tmp1301 = *(&local22);
org$frostlang$frostc$Type* $tmp1302 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1301);
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
org$frostlang$frostc$Type* $tmp1303 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
*(&local23) = $tmp1302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
// unreffing REF($961:org.frostlang.frostc.Type)
// line 401
frost$collections$Array* $tmp1304 = *(&local21);
org$frostlang$frostc$ASTNode* $tmp1305 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1306 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp1307 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1308 = (frost$core$Int64) {3};
org$frostlang$frostc$MethodDecl* $tmp1309 = *(&local9);
org$frostlang$frostc$Type* $tmp1310 = *(&local23);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp1307, $tmp1308, $tmp1309, $tmp1310);
org$frostlang$frostc$Type* $tmp1311 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp1312 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1311);
org$frostlang$frostc$IR$Value* $tmp1313 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1307, $tmp1312);
frost$core$Bit $tmp1314 = frost$core$Bit$init$builtin_bit($tmp1313 != NULL);
bool $tmp1315 = $tmp1314.value;
if ($tmp1315) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp1316 = (frost$core$Int64) {401};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1317, $tmp1316, &$s1318);
abort(); // unreachable
block43:;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1305, $tmp1306, param1, $tmp1313);
frost$collections$Array$add$frost$collections$Array$T($tmp1304, ((frost$core$Object*) $tmp1305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
// unreffing REF($985:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
// unreffing REF($984:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
// unreffing REF($983:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
// unreffing REF($977:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
// unreffing REF($975:org.frostlang.frostc.ASTNode)
// line 403
frost$collections$Array* $tmp1319 = *(&local21);
org$frostlang$frostc$ASTNode* $tmp1320 = *(&local14);
frost$core$Bit $tmp1321 = frost$core$Bit$init$builtin_bit($tmp1320 != NULL);
bool $tmp1322 = $tmp1321.value;
if ($tmp1322) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp1323 = (frost$core$Int64) {403};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1324, $tmp1323, &$s1325);
abort(); // unreachable
block45:;
frost$collections$Array$add$frost$collections$Array$T($tmp1319, ((frost$core$Object*) $tmp1320));
// line 404
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
// line 405
frost$core$Bit $tmp1326 = *(&local13);
bool $tmp1327 = $tmp1326.value;
if ($tmp1327) goto block47; else goto block49;
block47:;
// line 406
org$frostlang$frostc$Type* $tmp1328 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
org$frostlang$frostc$Type* $tmp1329 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
*(&local24) = $tmp1328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
// unreffing REF($1033:org.frostlang.frostc.Type)
goto block48;
block49:;
// line 1
// line 409
org$frostlang$frostc$Type* $tmp1330 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
org$frostlang$frostc$Type* $tmp1331 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
*(&local24) = $tmp1330;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
// unreffing REF($1046:org.frostlang.frostc.Type)
goto block48;
block48:;
// line 411
org$frostlang$frostc$IR$Value* $tmp1332 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1333 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp1334 = *(&local24);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1332, $tmp1333, $tmp1334);
frost$collections$Array* $tmp1335 = *(&local21);
org$frostlang$frostc$Compiler$TypeContext* $tmp1336 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1337 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1336, $tmp1337);
org$frostlang$frostc$IR$Value* $tmp1338 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1332, ((frost$collections$ListView*) $tmp1335), $tmp1336);
org$frostlang$frostc$MethodDecl* $tmp1339 = *(&local9);
org$frostlang$frostc$Type* $tmp1340 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp1339);
org$frostlang$frostc$IR$Value* $tmp1341 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1338, $tmp1340);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
org$frostlang$frostc$IR$Value* $tmp1342 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local25) = $tmp1341;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
// unreffing REF($1070:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
// unreffing REF($1069:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
// unreffing REF($1067:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
// unreffing REF($1064:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
// unreffing REF($1058:org.frostlang.frostc.IR.Value)
// line 413
org$frostlang$frostc$IR$Value* $tmp1343 = *(&local25);
org$frostlang$frostc$IR$Value* $tmp1344 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1343, param6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
// unreffing REF($1095:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$IR$Value* $tmp1345 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
// unreffing construct
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1346 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
// unreffing methodType
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1347 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
// unreffing irType
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1348 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
// unreffing frostType
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1349 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
// unreffing args
*(&local21) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1350 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
// unreffing target
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp1351 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
// unreffing oldContexts
*(&local12) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1352 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
// unreffing methodDecl
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp1353 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
// unreffing annotations
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp1354 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
// unreffing currentCaptures
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1355 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
// unreffing returnType
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1356 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
// unreffing parameters
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1357 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp1344;

}
void org$frostlang$frostc$expression$Closure$init(org$frostlang$frostc$expression$Closure* param0) {

return;

}
void org$frostlang$frostc$expression$Closure$cleanup(org$frostlang$frostc$expression$Closure* param0) {

// line 23
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

