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

typedef frost$collections$Iterator* (*$fn69)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn73)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn78)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn114)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn160)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn164)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn169)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn320)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn324)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn329)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn428)(frost$core$Object*);
typedef frost$core$Int64 (*$fn469)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn492)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn721)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn744)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn849)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn866)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn870)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn875)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn935)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn939)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn987)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn991)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn996)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1061)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1122)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn1136)(frost$collections$MapView*);
typedef frost$collections$Array* (*$fn1140)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1151)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn1155)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1160)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65", 39, 4048859009194802747, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6e\x6f\x6e\x2d\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x20\x6f\x77\x6e\x65\x72\x20\x66\x6f\x72\x20", 27, -299203061613670049, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65", 9, 1602056911729632975, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s701 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s702 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x54\x79\x70\x65\x64\x4c\x61\x6d\x62\x64\x61\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x72\x61\x77\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x65\x78\x70\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 362, -1348589147382285979, NULL };
static frost$core$String $s732 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static frost$core$String $s734 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x6c\x61\x6d\x62\x64\x61\x20\x77\x69\x74\x68\x20\x77\x72\x6f\x6e\x67\x20", 31, -8865909723025372911, NULL };
static frost$core$String $s736 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 20, 4248843021992149759, NULL };
static frost$core$String $s793 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x65\x72\x72\x6f\x72", 12, -6960542561056411676, NULL };
static frost$core$String $s881 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x77\x68\x65\x6e\x20\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x64\x20\x61\x73\x20\x27", 26, 7783089566661782278, NULL };
static frost$core$String $s883 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a", 2, 14198, NULL };
static frost$core$String $s900 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x72\x65\x63\x65\x69\x76\x65\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 51, 8939304453205542054, NULL };
static frost$core$String $s902 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20", 6, 1410335929809, NULL };
static frost$core$String $s905 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x20", 5, 22706926183, NULL };
static frost$core$String $s907 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s909 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s917 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, 1205436084705178767, NULL };
static frost$core$String $s919 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s944 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x74\x79\x70\x65\x20\x77\x61\x73\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x61\x6e\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x63\x6f\x6e\x74\x65\x78\x74", 67, -43704296328153041, NULL };
static frost$core$String $s965 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s966 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x55\x6e\x74\x79\x70\x65\x64\x4c\x61\x6d\x62\x64\x61\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x72\x61\x77\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x65\x78\x70\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 364, 1431056255726371020, NULL };
static frost$core$String $s979 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 10, 3323213258965972710, NULL };
static frost$core$String $s981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1038 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1064 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static frost$core$String $s1196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };

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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q($tmp27);
abort(); // unreachable
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp20);
// line 32
org$frostlang$frostc$ClassDecl* $tmp35 = *(&local0);
frost$core$Weak** $tmp36 = &$tmp35->owner;
frost$core$Weak* $tmp37 = *$tmp36;
frost$core$Object* $tmp38 = frost$core$Weak$get$R$frost$core$Weak$T($tmp37);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp38)));
org$frostlang$frostc$ClassDecl* $tmp39 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp38);
frost$core$Frost$unref$frost$core$Object$Q($tmp38);
goto block1;
block2:;
goto block7;
block7:;

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
org$frostlang$frostc$Position* $tmp40 = &((org$frostlang$frostc$Symbol*) param1)->position;
org$frostlang$frostc$Position $tmp41 = *$tmp40;
*(&local0) = $tmp41;
// line 40
org$frostlang$frostc$Annotations* $tmp42 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp43 = (frost$core$Int64) {0};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp42, $tmp43);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
org$frostlang$frostc$Annotations** $tmp44 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp45 = *$tmp44;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
org$frostlang$frostc$Annotations** $tmp46 = &param1->annotations;
*$tmp46 = $tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// line 41
frost$core$Int64* $tmp47 = &param0->closureCount;
frost$core$Int64 $tmp48 = *$tmp47;
frost$core$Int64 $tmp49 = (frost$core$Int64) {1};
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49.value;
int64_t $tmp52 = $tmp50 + $tmp51;
frost$core$Int64 $tmp53 = (frost$core$Int64) {$tmp52};
frost$core$Int64* $tmp54 = &param0->closureCount;
*$tmp54 = $tmp53;
// line 42
frost$collections$Array* $tmp55 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp55);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$collections$Array* $tmp56 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
*(&local1) = $tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// line 43
frost$collections$Stack** $tmp57 = &param0->currentClass;
frost$collections$Stack* $tmp58 = *$tmp57;
frost$core$Int64 $tmp59 = (frost$core$Int64) {0};
frost$core$Object* $tmp60 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp58, $tmp59);
org$frostlang$frostc$Type** $tmp61 = &((org$frostlang$frostc$ClassDecl*) $tmp60)->type;
org$frostlang$frostc$Type* $tmp62 = *$tmp61;
frost$core$Bit $tmp63 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp62);
bool $tmp64 = $tmp63.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp60);
if ($tmp64) goto block1; else goto block2;
block1:;
// line 44
frost$collections$Array* $tmp65 = *(&local1);
org$frostlang$frostc$Type* $tmp66 = org$frostlang$frostc$Type$Immutable$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp65, ((frost$core$Object*) $tmp66));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// line 45
ITable* $tmp67 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp67 = $tmp67->next;
}
$fn69 $tmp68 = $tmp67->methods[0];
frost$collections$Iterator* $tmp70 = $tmp68(((frost$collections$Iterable*) param2));
goto block3;
block3:;
ITable* $tmp71 = $tmp70->$class->itable;
while ($tmp71->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp71 = $tmp71->next;
}
$fn73 $tmp72 = $tmp71->methods[0];
frost$core$Bit $tmp74 = $tmp72($tmp70);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block5; else goto block4;
block4:;
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp76 = $tmp70->$class->itable;
while ($tmp76->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp76 = $tmp76->next;
}
$fn78 $tmp77 = $tmp76->methods[1];
frost$core$Object* $tmp79 = $tmp77($tmp70);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp79)));
org$frostlang$frostc$Compiler$Capture* $tmp80 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) $tmp79);
// line 46
org$frostlang$frostc$Compiler$Capture* $tmp81 = *(&local2);
frost$core$Int64* $tmp82 = &$tmp81->$rawValue;
frost$core$Int64 $tmp83 = *$tmp82;
frost$core$Int64 $tmp84 = (frost$core$Int64) {0};
frost$core$Bit $tmp85 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp83, $tmp84);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Variable** $tmp87 = (org$frostlang$frostc$Variable**) ($tmp81->$data + 0);
org$frostlang$frostc$Variable* $tmp88 = *$tmp87;
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
org$frostlang$frostc$Variable* $tmp89 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local3) = $tmp88;
// line 48
org$frostlang$frostc$Variable* $tmp90 = *(&local3);
org$frostlang$frostc$Type** $tmp91 = &$tmp90->type;
org$frostlang$frostc$Type* $tmp92 = *$tmp91;
frost$core$Bit $tmp93 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp92);
frost$core$Bit $tmp94 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp93);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block9; else goto block10;
block9:;
// line 49
frost$collections$Array* $tmp96 = *(&local1);
frost$collections$Array$clear($tmp96);
// line 50
org$frostlang$frostc$Variable* $tmp97 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp79);
org$frostlang$frostc$Compiler$Capture* $tmp98 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block5;
block10:;
org$frostlang$frostc$Variable* $tmp99 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
goto block6;
block8:;
frost$core$Int64 $tmp100 = (frost$core$Int64) {2};
frost$core$Bit $tmp101 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp83, $tmp100);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block11; else goto block12;
block11:;
// line 54
org$frostlang$frostc$Type* $tmp103 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
frost$core$Bit $tmp104 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp103);
frost$core$Bit $tmp105 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp104);
bool $tmp106 = $tmp105.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
if ($tmp106) goto block13; else goto block14;
block13:;
// line 55
frost$collections$Array* $tmp107 = *(&local1);
frost$collections$Array$clear($tmp107);
// line 56
frost$core$Frost$unref$frost$core$Object$Q($tmp79);
org$frostlang$frostc$Compiler$Capture* $tmp108 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block5;
block14:;
goto block6;
block12:;
// line 60
frost$core$Bit $tmp109 = frost$core$Bit$init$builtin_bit(false);
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp111 = (frost$core$Int64) {60};
org$frostlang$frostc$Compiler$Capture* $tmp112 = *(&local2);
$fn114 $tmp113 = ($fn114) ((frost$core$Object*) $tmp112)->$class->vtable[0];
frost$core$String* $tmp115 = $tmp113(((frost$core$Object*) $tmp112));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s116, $tmp111, $tmp115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
abort(); // unreachable
block15:;
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp79);
org$frostlang$frostc$Compiler$Capture* $tmp117 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
goto block2;
block2:;
// line 65
org$frostlang$frostc$ClassDecl* $tmp118 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$collections$Stack** $tmp119 = &param0->currentClass;
frost$collections$Stack* $tmp120 = *$tmp119;
frost$core$Int64 $tmp121 = (frost$core$Int64) {0};
frost$core$Object* $tmp122 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp120, $tmp121);
frost$io$File** $tmp123 = &((org$frostlang$frostc$ClassDecl*) $tmp122)->source;
frost$io$File* $tmp124 = *$tmp123;
org$frostlang$frostc$Position $tmp125 = *(&local0);
frost$collections$HashMap* $tmp126 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp126);
org$frostlang$frostc$Annotations* $tmp127 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp128 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp127, $tmp128);
frost$core$Int64 $tmp129 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp130 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp129);
frost$collections$Stack** $tmp131 = &param0->currentClass;
frost$collections$Stack* $tmp132 = *$tmp131;
frost$core$Int64 $tmp133 = (frost$core$Int64) {0};
frost$core$Object* $tmp134 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp132, $tmp133);
frost$core$String** $tmp135 = &((org$frostlang$frostc$ClassDecl*) $tmp134)->name;
frost$core$String* $tmp136 = *$tmp135;
frost$core$String* $tmp137 = frost$core$String$get_asString$R$frost$core$String($tmp136);
frost$core$String* $tmp138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp137, &$s139);
frost$core$Int64* $tmp140 = &param0->closureCount;
frost$core$Int64 $tmp141 = *$tmp140;
frost$core$Int64$wrapper* $tmp142;
$tmp142 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp142->value = $tmp141;
frost$core$String* $tmp143 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp138, ((frost$core$Object*) $tmp142));
frost$core$String* $tmp144 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp143, &$s145);
frost$collections$Array* $tmp146 = *(&local1);
frost$collections$Array* $tmp147 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp147);
org$frostlang$frostc$SymbolTable** $tmp148 = &param0->root;
org$frostlang$frostc$SymbolTable* $tmp149 = *$tmp148;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp118, $tmp124, $tmp125, ((frost$collections$MapView*) $tmp126), ((frost$core$String*) NULL), $tmp127, $tmp130, $tmp144, ((frost$collections$ListView*) $tmp146), $tmp147, $tmp149);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
org$frostlang$frostc$ClassDecl* $tmp150 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local4) = $tmp118;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q($tmp134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q($tmp122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
// line 69
org$frostlang$frostc$ClassDecl* $tmp151 = *(&local4);
frost$core$Bit $tmp152 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp153 = &$tmp151->external;
*$tmp153 = $tmp152;
// line 72
frost$collections$Array* $tmp154 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp154);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$collections$Array* $tmp155 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local5) = $tmp154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
// line 73
frost$collections$Array* $tmp156 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp156);
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
frost$collections$Array* $tmp157 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
*(&local6) = $tmp156;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// line 74
ITable* $tmp158 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp158->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp158 = $tmp158->next;
}
$fn160 $tmp159 = $tmp158->methods[0];
frost$collections$Iterator* $tmp161 = $tmp159(((frost$collections$Iterable*) param2));
goto block17;
block17:;
ITable* $tmp162 = $tmp161->$class->itable;
while ($tmp162->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp162 = $tmp162->next;
}
$fn164 $tmp163 = $tmp162->methods[0];
frost$core$Bit $tmp165 = $tmp163($tmp161);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block19; else goto block18;
block18:;
*(&local7) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp167 = $tmp161->$class->itable;
while ($tmp167->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp167 = $tmp167->next;
}
$fn169 $tmp168 = $tmp167->methods[1];
frost$core$Object* $tmp170 = $tmp168($tmp161);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp170)));
org$frostlang$frostc$Compiler$Capture* $tmp171 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local7) = ((org$frostlang$frostc$Compiler$Capture*) $tmp170);
// line 75
org$frostlang$frostc$Compiler$Capture* $tmp172 = *(&local7);
frost$core$Int64* $tmp173 = &$tmp172->$rawValue;
frost$core$Int64 $tmp174 = *$tmp173;
frost$core$Int64 $tmp175 = (frost$core$Int64) {0};
frost$core$Bit $tmp176 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp174, $tmp175);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block21; else goto block22;
block21:;
org$frostlang$frostc$Variable** $tmp178 = (org$frostlang$frostc$Variable**) ($tmp172->$data + 0);
org$frostlang$frostc$Variable* $tmp179 = *$tmp178;
*(&local8) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
org$frostlang$frostc$Variable* $tmp180 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local8) = $tmp179;
// line 77
frost$collections$Array* $tmp181 = *(&local6);
org$frostlang$frostc$MethodDecl$Parameter* $tmp182 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$Variable* $tmp183 = *(&local8);
frost$core$String** $tmp184 = &((org$frostlang$frostc$Symbol*) $tmp183)->name;
frost$core$String* $tmp185 = *$tmp184;
org$frostlang$frostc$Variable* $tmp186 = *(&local8);
org$frostlang$frostc$Type** $tmp187 = &$tmp186->type;
org$frostlang$frostc$Type* $tmp188 = *$tmp187;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp182, $tmp185, $tmp188);
frost$collections$Array$add$frost$collections$Array$T($tmp181, ((frost$core$Object*) $tmp182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// line 79
frost$collections$Array* $tmp189 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp190 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp191 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp192 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp193 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp194 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp195 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp196 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp197 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp198 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp196, $tmp197, $tmp198, &$s199);
org$frostlang$frostc$Variable* $tmp200 = *(&local8);
frost$core$String** $tmp201 = &((org$frostlang$frostc$Symbol*) $tmp200)->name;
frost$core$String* $tmp202 = *$tmp201;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp193, $tmp194, $tmp195, $tmp196, $tmp202);
frost$core$Int64 $tmp203 = (frost$core$Int64) {24};
org$frostlang$frostc$expression$Binary$Operator $tmp204 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp203);
org$frostlang$frostc$ASTNode* $tmp205 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp206 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp207 = *(&local0);
org$frostlang$frostc$Variable* $tmp208 = *(&local8);
frost$core$String** $tmp209 = &((org$frostlang$frostc$Symbol*) $tmp208)->name;
frost$core$String* $tmp210 = *$tmp209;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp205, $tmp206, $tmp207, $tmp210);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp190, $tmp191, $tmp192, $tmp193, $tmp204, $tmp205);
frost$collections$Array$add$frost$collections$Array$T($tmp189, ((frost$core$Object*) $tmp190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
org$frostlang$frostc$Variable* $tmp211 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
*(&local8) = ((org$frostlang$frostc$Variable*) NULL);
goto block20;
block22:;
frost$core$Int64 $tmp212 = (frost$core$Int64) {1};
frost$core$Bit $tmp213 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp174, $tmp212);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block23; else goto block24;
block23:;
org$frostlang$frostc$FieldDecl** $tmp215 = (org$frostlang$frostc$FieldDecl**) ($tmp172->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp216 = *$tmp215;
*(&local9) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
org$frostlang$frostc$FieldDecl* $tmp217 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local9) = $tmp216;
// line 84
frost$collections$Array* $tmp218 = *(&local6);
org$frostlang$frostc$MethodDecl$Parameter* $tmp219 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$FieldDecl* $tmp220 = *(&local9);
frost$core$String** $tmp221 = &((org$frostlang$frostc$Symbol*) $tmp220)->name;
frost$core$String* $tmp222 = *$tmp221;
org$frostlang$frostc$FieldDecl* $tmp223 = *(&local9);
org$frostlang$frostc$Type** $tmp224 = &$tmp223->type;
org$frostlang$frostc$Type* $tmp225 = *$tmp224;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp219, $tmp222, $tmp225);
frost$collections$Array$add$frost$collections$Array$T($tmp218, ((frost$core$Object*) $tmp219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// line 86
frost$collections$Array* $tmp226 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp227 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp228 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp229 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp230 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp231 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp232 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp233 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp234 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp235 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp233, $tmp234, $tmp235, &$s236);
org$frostlang$frostc$FieldDecl* $tmp237 = *(&local9);
frost$core$String** $tmp238 = &((org$frostlang$frostc$Symbol*) $tmp237)->name;
frost$core$String* $tmp239 = *$tmp238;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp230, $tmp231, $tmp232, $tmp233, $tmp239);
frost$core$Int64 $tmp240 = (frost$core$Int64) {24};
org$frostlang$frostc$expression$Binary$Operator $tmp241 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp240);
org$frostlang$frostc$ASTNode* $tmp242 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp243 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp244 = *(&local0);
org$frostlang$frostc$FieldDecl* $tmp245 = *(&local9);
frost$core$String** $tmp246 = &((org$frostlang$frostc$Symbol*) $tmp245)->name;
frost$core$String* $tmp247 = *$tmp246;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp242, $tmp243, $tmp244, $tmp247);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp227, $tmp228, $tmp229, $tmp230, $tmp241, $tmp242);
frost$collections$Array$add$frost$collections$Array$T($tmp226, ((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
org$frostlang$frostc$FieldDecl* $tmp248 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local9) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block20;
block24:;
frost$core$Int64 $tmp249 = (frost$core$Int64) {2};
frost$core$Bit $tmp250 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp174, $tmp249);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block25; else goto block20;
block25:;
// line 91
frost$collections$Array* $tmp252 = *(&local6);
org$frostlang$frostc$MethodDecl$Parameter* $tmp253 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$Type* $tmp254 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp253, &$s255, $tmp254);
frost$collections$Array$add$frost$collections$Array$T($tmp252, ((frost$core$Object*) $tmp253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// line 94
frost$collections$Array* $tmp256 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp257 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp258 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp259 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp260 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp261 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp262 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp263 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp264 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp265 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp263, $tmp264, $tmp265, &$s266);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp260, $tmp261, $tmp262, $tmp263, &$s267);
frost$core$Int64 $tmp268 = (frost$core$Int64) {24};
org$frostlang$frostc$expression$Binary$Operator $tmp269 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp268);
org$frostlang$frostc$ASTNode* $tmp270 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp271 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp272 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp270, $tmp271, $tmp272, &$s273);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp257, $tmp258, $tmp259, $tmp260, $tmp269, $tmp270);
frost$collections$Array$add$frost$collections$Array$T($tmp256, ((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
goto block20;
block20:;
frost$core$Frost$unref$frost$core$Object$Q($tmp170);
org$frostlang$frostc$Compiler$Capture* $tmp274 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local7) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
// line 102
org$frostlang$frostc$MethodDecl* $tmp275 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp276 = *(&local4);
org$frostlang$frostc$Position $tmp277 = *(&local0);
org$frostlang$frostc$Annotations* $tmp278 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp279 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp278, $tmp279);
frost$core$Int64 $tmp280 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp281 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp280);
frost$collections$Array* $tmp282 = *(&local6);
org$frostlang$frostc$Type* $tmp283 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$collections$Array* $tmp284 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp285 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp284);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp275, $tmp276, $tmp277, ((frost$core$String*) NULL), $tmp278, $tmp281, &$s286, ((frost$collections$Array*) NULL), $tmp282, $tmp283, $tmp285);
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
org$frostlang$frostc$MethodDecl* $tmp287 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local10) = $tmp275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// line 106
org$frostlang$frostc$ClassDecl* $tmp288 = *(&local4);
frost$collections$Array** $tmp289 = &$tmp288->methods;
frost$collections$Array* $tmp290 = *$tmp289;
org$frostlang$frostc$MethodDecl* $tmp291 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp290, ((frost$core$Object*) $tmp291));
// line 107
org$frostlang$frostc$ClassDecl* $tmp292 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp293 = &$tmp292->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp294 = *$tmp293;
org$frostlang$frostc$MethodDecl* $tmp295 = *(&local10);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp294, ((org$frostlang$frostc$Symbol*) $tmp295));
// line 110
org$frostlang$frostc$MethodDecl* $tmp296 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp297 = *(&local4);
org$frostlang$frostc$Position $tmp298 = *(&local0);
org$frostlang$frostc$Annotations* $tmp299 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp300 = (frost$core$Int64) {32};
frost$core$Int64 $tmp301 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp302 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp300, $tmp301);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp299, $tmp302);
frost$core$Int64 $tmp303 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp304 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp303);
frost$collections$Array* $tmp305 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp305);
org$frostlang$frostc$Type* $tmp306 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp307 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp307);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp296, $tmp297, $tmp298, ((frost$core$String*) NULL), $tmp299, $tmp304, &$s308, ((frost$collections$Array*) NULL), $tmp305, $tmp306, $tmp307);
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
org$frostlang$frostc$MethodDecl* $tmp309 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local11) = $tmp296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// line 114
org$frostlang$frostc$ClassDecl* $tmp310 = *(&local4);
frost$collections$Array** $tmp311 = &$tmp310->methods;
frost$collections$Array* $tmp312 = *$tmp311;
org$frostlang$frostc$MethodDecl* $tmp313 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp312, ((frost$core$Object*) $tmp313));
// line 115
org$frostlang$frostc$ClassDecl* $tmp314 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp315 = &$tmp314->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp316 = *$tmp315;
org$frostlang$frostc$MethodDecl* $tmp317 = *(&local11);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp316, ((org$frostlang$frostc$Symbol*) $tmp317));
// line 118
ITable* $tmp318 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp318->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp318 = $tmp318->next;
}
$fn320 $tmp319 = $tmp318->methods[0];
frost$collections$Iterator* $tmp321 = $tmp319(((frost$collections$Iterable*) param2));
goto block26;
block26:;
ITable* $tmp322 = $tmp321->$class->itable;
while ($tmp322->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp322 = $tmp322->next;
}
$fn324 $tmp323 = $tmp322->methods[0];
frost$core$Bit $tmp325 = $tmp323($tmp321);
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block28; else goto block27;
block27:;
*(&local12) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp327 = $tmp321->$class->itable;
while ($tmp327->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp327 = $tmp327->next;
}
$fn329 $tmp328 = $tmp327->methods[1];
frost$core$Object* $tmp330 = $tmp328($tmp321);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp330)));
org$frostlang$frostc$Compiler$Capture* $tmp331 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
*(&local12) = ((org$frostlang$frostc$Compiler$Capture*) $tmp330);
// line 119
org$frostlang$frostc$Compiler$Capture* $tmp332 = *(&local12);
frost$core$Int64* $tmp333 = &$tmp332->$rawValue;
frost$core$Int64 $tmp334 = *$tmp333;
frost$core$Int64 $tmp335 = (frost$core$Int64) {0};
frost$core$Bit $tmp336 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp335);
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Variable** $tmp338 = (org$frostlang$frostc$Variable**) ($tmp332->$data + 0);
org$frostlang$frostc$Variable* $tmp339 = *$tmp338;
*(&local13) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
org$frostlang$frostc$Variable* $tmp340 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
*(&local13) = $tmp339;
// line 121
org$frostlang$frostc$FieldDecl* $tmp341 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp342 = *(&local4);
org$frostlang$frostc$Position $tmp343 = *(&local0);
org$frostlang$frostc$Annotations* $tmp344 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp345 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp346 = (frost$core$Int64) {65536};
frost$core$Int64 $tmp347 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp345, $tmp346);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp344, $tmp347);
frost$core$Int64 $tmp348 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp349 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp348);
org$frostlang$frostc$Variable* $tmp350 = *(&local13);
frost$core$String** $tmp351 = &((org$frostlang$frostc$Symbol*) $tmp350)->name;
frost$core$String* $tmp352 = *$tmp351;
org$frostlang$frostc$Variable* $tmp353 = *(&local13);
org$frostlang$frostc$Type** $tmp354 = &$tmp353->type;
org$frostlang$frostc$Type* $tmp355 = *$tmp354;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp341, $tmp342, $tmp343, ((frost$core$String*) NULL), $tmp344, $tmp349, $tmp352, $tmp355, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
org$frostlang$frostc$FieldDecl* $tmp356 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local14) = $tmp341;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
// line 124
org$frostlang$frostc$ClassDecl* $tmp357 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp358 = &$tmp357->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp359 = *$tmp358;
org$frostlang$frostc$FieldDecl* $tmp360 = *(&local14);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp359, ((org$frostlang$frostc$Symbol*) $tmp360));
// line 125
org$frostlang$frostc$ClassDecl* $tmp361 = *(&local4);
frost$collections$Array** $tmp362 = &$tmp361->fields;
frost$collections$Array* $tmp363 = *$tmp362;
org$frostlang$frostc$FieldDecl* $tmp364 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp363, ((frost$core$Object*) $tmp364));
org$frostlang$frostc$FieldDecl* $tmp365 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Variable* $tmp366 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
*(&local13) = ((org$frostlang$frostc$Variable*) NULL);
goto block29;
block31:;
frost$core$Int64 $tmp367 = (frost$core$Int64) {1};
frost$core$Bit $tmp368 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp367);
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block32; else goto block33;
block32:;
org$frostlang$frostc$FieldDecl** $tmp370 = (org$frostlang$frostc$FieldDecl**) ($tmp332->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp371 = *$tmp370;
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
org$frostlang$frostc$FieldDecl* $tmp372 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
*(&local15) = $tmp371;
// line 128
org$frostlang$frostc$FieldDecl* $tmp373 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp374 = *(&local4);
org$frostlang$frostc$Position $tmp375 = *(&local0);
org$frostlang$frostc$Annotations* $tmp376 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp377 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp378 = (frost$core$Int64) {65536};
frost$core$Int64 $tmp379 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp377, $tmp378);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp376, $tmp379);
frost$core$Int64 $tmp380 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp381 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp380);
org$frostlang$frostc$FieldDecl* $tmp382 = *(&local15);
frost$core$String** $tmp383 = &((org$frostlang$frostc$Symbol*) $tmp382)->name;
frost$core$String* $tmp384 = *$tmp383;
org$frostlang$frostc$FieldDecl* $tmp385 = *(&local15);
org$frostlang$frostc$Type** $tmp386 = &$tmp385->type;
org$frostlang$frostc$Type* $tmp387 = *$tmp386;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp373, $tmp374, $tmp375, ((frost$core$String*) NULL), $tmp376, $tmp381, $tmp384, $tmp387, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
org$frostlang$frostc$FieldDecl* $tmp388 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
*(&local16) = $tmp373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
// line 131
org$frostlang$frostc$ClassDecl* $tmp389 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp390 = &$tmp389->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp391 = *$tmp390;
org$frostlang$frostc$FieldDecl* $tmp392 = *(&local16);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp391, ((org$frostlang$frostc$Symbol*) $tmp392));
// line 132
org$frostlang$frostc$ClassDecl* $tmp393 = *(&local4);
frost$collections$Array** $tmp394 = &$tmp393->fields;
frost$collections$Array* $tmp395 = *$tmp394;
org$frostlang$frostc$FieldDecl* $tmp396 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp395, ((frost$core$Object*) $tmp396));
org$frostlang$frostc$FieldDecl* $tmp397 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp398 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block29;
block33:;
frost$core$Int64 $tmp399 = (frost$core$Int64) {2};
frost$core$Bit $tmp400 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp399);
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block34; else goto block35;
block34:;
// line 135
org$frostlang$frostc$FieldDecl* $tmp402 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp403 = *(&local4);
org$frostlang$frostc$Position $tmp404 = *(&local0);
org$frostlang$frostc$Annotations* $tmp405 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp406 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp407 = (frost$core$Int64) {65536};
frost$core$Int64 $tmp408 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp406, $tmp407);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp405, $tmp408);
frost$core$Int64 $tmp409 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp410 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp409);
org$frostlang$frostc$Type* $tmp411 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp402, $tmp403, $tmp404, ((frost$core$String*) NULL), $tmp405, $tmp410, &$s412, $tmp411, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local17) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
org$frostlang$frostc$FieldDecl* $tmp413 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local17) = $tmp402;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
// line 139
org$frostlang$frostc$ClassDecl* $tmp414 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp415 = &$tmp414->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp416 = *$tmp415;
org$frostlang$frostc$FieldDecl* $tmp417 = *(&local17);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp416, ((org$frostlang$frostc$Symbol*) $tmp417));
// line 140
org$frostlang$frostc$ClassDecl* $tmp418 = *(&local4);
frost$collections$Array** $tmp419 = &$tmp418->fields;
frost$collections$Array* $tmp420 = *$tmp419;
org$frostlang$frostc$FieldDecl* $tmp421 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp420, ((frost$core$Object*) $tmp421));
org$frostlang$frostc$FieldDecl* $tmp422 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
*(&local17) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block29;
block35:;
// line 143
frost$core$Bit $tmp423 = frost$core$Bit$init$builtin_bit(false);
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp425 = (frost$core$Int64) {143};
org$frostlang$frostc$Compiler$Capture* $tmp426 = *(&local12);
$fn428 $tmp427 = ($fn428) ((frost$core$Object*) $tmp426)->$class->vtable[0];
frost$core$String* $tmp429 = $tmp427(((frost$core$Object*) $tmp426));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s430, $tmp425, $tmp429);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
abort(); // unreachable
block36:;
goto block29;
block29:;
frost$core$Frost$unref$frost$core$Object$Q($tmp330);
org$frostlang$frostc$Compiler$Capture* $tmp431 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
*(&local12) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// line 147
org$frostlang$frostc$ClassDecl* $tmp432 = *(&local4);
frost$core$Weak* $tmp433 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp433, ((frost$core$Object*) $tmp432));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$core$Weak** $tmp434 = &param1->owner;
frost$core$Weak* $tmp435 = *$tmp434;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Weak** $tmp436 = &param1->owner;
*$tmp436 = $tmp433;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
// line 148
org$frostlang$frostc$ClassDecl* $tmp437 = *(&local4);
frost$collections$Array** $tmp438 = &$tmp437->methods;
frost$collections$Array* $tmp439 = *$tmp438;
frost$collections$Array$add$frost$collections$Array$T($tmp439, ((frost$core$Object*) param1));
// line 149
frost$collections$HashMap** $tmp440 = &param0->classes;
frost$collections$HashMap* $tmp441 = *$tmp440;
org$frostlang$frostc$ClassDecl* $tmp442 = *(&local4);
frost$core$String** $tmp443 = &$tmp442->name;
frost$core$String* $tmp444 = *$tmp443;
org$frostlang$frostc$ClassDecl* $tmp445 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp441, ((frost$collections$Key*) $tmp444), ((frost$core$Object*) $tmp445));
// line 150
org$frostlang$frostc$ClassDecl* $tmp446 = *(&local4);
frost$collections$Stack** $tmp447 = &param0->currentClass;
frost$collections$Stack* $tmp448 = *$tmp447;
frost$core$Int64 $tmp449 = (frost$core$Int64) {0};
frost$core$Object* $tmp450 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp448, $tmp449);
frost$core$Weak* $tmp451 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp451, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp450)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
frost$core$Weak** $tmp452 = &$tmp446->owner;
frost$core$Weak* $tmp453 = *$tmp452;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
frost$core$Weak** $tmp454 = &$tmp446->owner;
*$tmp454 = $tmp451;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
frost$core$Frost$unref$frost$core$Object$Q($tmp450);
// line 151
org$frostlang$frostc$ClassDecl* $tmp455 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
org$frostlang$frostc$MethodDecl* $tmp456 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp457 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$collections$Array* $tmp458 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
*(&local6) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp459 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp460 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp461 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp455;

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
org$frostlang$frostc$Compiler$AutoScope* $tmp462 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp462, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
org$frostlang$frostc$Compiler$AutoScope* $tmp463 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local0) = $tmp462;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
// line 158
frost$collections$Array* $tmp464 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp464);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
frost$collections$Array* $tmp465 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
*(&local1) = $tmp464;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
// line 159
frost$core$Int64 $tmp466 = (frost$core$Int64) {0};
ITable* $tmp467 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp467->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp467 = $tmp467->next;
}
$fn469 $tmp468 = $tmp467->methods[0];
frost$core$Int64 $tmp470 = $tmp468(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp471 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp472 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp466, $tmp470, $tmp471);
frost$core$Int64 $tmp473 = $tmp472.min;
*(&local2) = $tmp473;
frost$core$Int64 $tmp474 = $tmp472.max;
frost$core$Bit $tmp475 = $tmp472.inclusive;
bool $tmp476 = $tmp475.value;
frost$core$Int64 $tmp477 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp478 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp477);
if ($tmp476) goto block4; else goto block5;
block4:;
int64_t $tmp479 = $tmp473.value;
int64_t $tmp480 = $tmp474.value;
bool $tmp481 = $tmp479 <= $tmp480;
frost$core$Bit $tmp482 = (frost$core$Bit) {$tmp481};
bool $tmp483 = $tmp482.value;
if ($tmp483) goto block1; else goto block2;
block5:;
int64_t $tmp484 = $tmp473.value;
int64_t $tmp485 = $tmp474.value;
bool $tmp486 = $tmp484 < $tmp485;
frost$core$Bit $tmp487 = (frost$core$Bit) {$tmp486};
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block1; else goto block2;
block1:;
// line 160
frost$core$Int64 $tmp489 = *(&local2);
ITable* $tmp490 = param1->$class->itable;
while ($tmp490->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp490 = $tmp490->next;
}
$fn492 $tmp491 = $tmp490->methods[0];
frost$core$Object* $tmp493 = $tmp491(param1, $tmp489);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp493)));
org$frostlang$frostc$ASTNode* $tmp494 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp493);
frost$core$Frost$unref$frost$core$Object$Q($tmp493);
// line 161
org$frostlang$frostc$ASTNode* $tmp495 = *(&local3);
frost$core$Int64* $tmp496 = &$tmp495->$rawValue;
frost$core$Int64 $tmp497 = *$tmp496;
frost$core$Int64 $tmp498 = (frost$core$Int64) {34};
frost$core$Bit $tmp499 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp497, $tmp498);
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block7; else goto block6;
block7:;
org$frostlang$frostc$Position* $tmp501 = (org$frostlang$frostc$Position*) ($tmp495->$data + 0);
org$frostlang$frostc$Position $tmp502 = *$tmp501;
*(&local4) = $tmp502;
frost$core$String** $tmp503 = (frost$core$String**) ($tmp495->$data + 16);
frost$core$String* $tmp504 = *$tmp503;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$core$String* $tmp505 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
*(&local5) = $tmp504;
org$frostlang$frostc$ASTNode** $tmp506 = (org$frostlang$frostc$ASTNode**) ($tmp495->$data + 24);
org$frostlang$frostc$ASTNode* $tmp507 = *$tmp506;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
org$frostlang$frostc$ASTNode* $tmp508 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
*(&local6) = $tmp507;
// line 163
org$frostlang$frostc$Scanner** $tmp509 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp510 = *$tmp509;
org$frostlang$frostc$ASTNode* $tmp511 = *(&local6);
org$frostlang$frostc$Type* $tmp512 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp510, $tmp511);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
org$frostlang$frostc$Type* $tmp513 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local7) = $tmp512;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
// line 164
org$frostlang$frostc$Type* $tmp514 = *(&local7);
frost$core$Bit $tmp515 = frost$core$Bit$init$builtin_bit($tmp514 == NULL);
bool $tmp516 = $tmp515.value;
if ($tmp516) goto block8; else goto block9;
block8:;
// line 165
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp517 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp518 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp519 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp520 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp521 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp522 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block9:;
// line 167
org$frostlang$frostc$Type* $tmp523 = *(&local7);
org$frostlang$frostc$Type* $tmp524 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp523);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
org$frostlang$frostc$Type* $tmp525 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
*(&local7) = $tmp524;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
// line 168
org$frostlang$frostc$Type* $tmp526 = *(&local7);
frost$core$Bit $tmp527 = frost$core$Bit$init$builtin_bit($tmp526 == NULL);
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block10; else goto block11;
block10:;
// line 169
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp529 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp530 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp531 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp532 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp533 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp534 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block11:;
// line 171
frost$collections$Array* $tmp535 = *(&local1);
org$frostlang$frostc$Type* $tmp536 = *(&local7);
frost$collections$Array$add$frost$collections$Array$T($tmp535, ((frost$core$Object*) $tmp536));
// line 172
org$frostlang$frostc$SymbolTable** $tmp537 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp538 = *$tmp537;
org$frostlang$frostc$Variable* $tmp539 = (org$frostlang$frostc$Variable*) frostObjectAlloc(88, (frost$core$Class*) &org$frostlang$frostc$Variable$class);
org$frostlang$frostc$Position $tmp540 = *(&local4);
frost$core$Int64 $tmp541 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp542 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp541);
frost$core$String* $tmp543 = *(&local5);
org$frostlang$frostc$Type* $tmp544 = *(&local7);
org$frostlang$frostc$Variable$Storage* $tmp545 = (org$frostlang$frostc$Variable$Storage*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Variable$Storage$class);
frost$core$Int64 $tmp546 = (frost$core$Int64) {1};
frost$core$Int64 $tmp547 = (frost$core$Int64) {18446744073709551615};
org$frostlang$frostc$Variable$Storage$init$frost$core$Int64$frost$core$Int64($tmp545, $tmp546, $tmp547);
org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage($tmp539, $tmp540, $tmp542, $tmp543, $tmp544, $tmp545);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp538, ((org$frostlang$frostc$Symbol*) $tmp539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
org$frostlang$frostc$Type* $tmp548 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp549 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp550 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local5) = ((frost$core$String*) NULL);
goto block6;
block6:;
org$frostlang$frostc$ASTNode* $tmp551 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp552 = *(&local2);
int64_t $tmp553 = $tmp474.value;
int64_t $tmp554 = $tmp552.value;
int64_t $tmp555 = $tmp553 - $tmp554;
frost$core$Int64 $tmp556 = (frost$core$Int64) {$tmp555};
frost$core$UInt64 $tmp557 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp556);
if ($tmp476) goto block13; else goto block14;
block13:;
uint64_t $tmp558 = $tmp557.value;
uint64_t $tmp559 = $tmp478.value;
bool $tmp560 = $tmp558 >= $tmp559;
frost$core$Bit $tmp561 = (frost$core$Bit) {$tmp560};
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block12; else goto block2;
block14:;
uint64_t $tmp563 = $tmp557.value;
uint64_t $tmp564 = $tmp478.value;
bool $tmp565 = $tmp563 > $tmp564;
frost$core$Bit $tmp566 = (frost$core$Bit) {$tmp565};
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block12; else goto block2;
block12:;
int64_t $tmp568 = $tmp552.value;
int64_t $tmp569 = $tmp477.value;
int64_t $tmp570 = $tmp568 + $tmp569;
frost$core$Int64 $tmp571 = (frost$core$Int64) {$tmp570};
*(&local2) = $tmp571;
goto block1;
block2:;
// line 177
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 178
frost$core$Int64* $tmp572 = &param3->$rawValue;
frost$core$Int64 $tmp573 = *$tmp572;
frost$core$Int64 $tmp574 = (frost$core$Int64) {3};
frost$core$Bit $tmp575 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp573, $tmp574);
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Type** $tmp577 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp578 = *$tmp577;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
org$frostlang$frostc$Type* $tmp579 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local9) = $tmp578;
frost$core$Bit* $tmp580 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp581 = *$tmp580;
// line 180
org$frostlang$frostc$Type* $tmp582 = *(&local9);
org$frostlang$frostc$Type* $tmp583 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp582);
frost$core$Bit $tmp584 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp583);
bool $tmp585 = $tmp584.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
if ($tmp585) goto block18; else goto block19;
block18:;
// line 181
org$frostlang$frostc$Type* $tmp586 = *(&local9);
org$frostlang$frostc$Type* $tmp587 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp586);
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
org$frostlang$frostc$Type* $tmp588 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local10) = $tmp587;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
// line 185
frost$collections$HashMap** $tmp589 = &param0->binaryTypes;
frost$collections$HashMap* $tmp590 = *$tmp589;
*(&local11) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
frost$collections$HashMap* $tmp591 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local11) = $tmp590;
// line 186
frost$collections$HashMap* $tmp592 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp592);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
frost$collections$HashMap** $tmp593 = &param0->binaryTypes;
frost$collections$HashMap* $tmp594 = *$tmp593;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$collections$HashMap** $tmp595 = &param0->binaryTypes;
*$tmp595 = $tmp592;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
// line 187
org$frostlang$frostc$Type* $tmp596 = *(&local10);
org$frostlang$frostc$Pair* $tmp597 = org$frostlang$frostc$Compiler$computeCoercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, param2, $tmp596);
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
org$frostlang$frostc$Pair* $tmp598 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local12) = $tmp597;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
// line 188
frost$collections$HashMap* $tmp599 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
frost$collections$HashMap** $tmp600 = &param0->binaryTypes;
frost$collections$HashMap* $tmp601 = *$tmp600;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
frost$collections$HashMap** $tmp602 = &param0->binaryTypes;
*$tmp602 = $tmp599;
// line 189
org$frostlang$frostc$Pair* $tmp603 = *(&local12);
frost$core$Bit $tmp604 = frost$core$Bit$init$builtin_bit($tmp603 == NULL);
bool $tmp605 = $tmp604.value;
if ($tmp605) goto block20; else goto block21;
block20:;
// line 190
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Pair* $tmp606 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp607 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local11) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp608 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp609 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp610 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp611 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp612 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block21:;
// line 192
org$frostlang$frostc$Pair* $tmp613 = *(&local12);
frost$core$Object** $tmp614 = &$tmp613->first;
frost$core$Object* $tmp615 = *$tmp614;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp615)));
org$frostlang$frostc$Type* $tmp616 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
*(&local8) = ((org$frostlang$frostc$Type*) $tmp615);
org$frostlang$frostc$Pair* $tmp617 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp618 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
*(&local11) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp619 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block19;
block19:;
org$frostlang$frostc$Type* $tmp620 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block15;
block17:;
// line 196
org$frostlang$frostc$Type* $tmp621 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
org$frostlang$frostc$Type* $tmp622 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
*(&local8) = $tmp621;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
goto block15;
block15:;
// line 199
org$frostlang$frostc$Type* $tmp623 = *(&local8);
frost$core$Bit $tmp624 = frost$core$Bit$init$builtin_bit($tmp623 == NULL);
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block22; else goto block23;
block22:;
// line 200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp626 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp627 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp628 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block23:;
// line 202
org$frostlang$frostc$Position $tmp629 = org$frostlang$frostc$Position$init();
frost$core$Int64 $tmp630 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp631 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp630);
frost$collections$Array* $tmp632 = *(&local1);
org$frostlang$frostc$Type* $tmp633 = *(&local8);
frost$core$Int64 $tmp634 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp635 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp629, $tmp631, ((frost$collections$ListView*) $tmp632), $tmp633, $tmp634);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
org$frostlang$frostc$Type* $tmp636 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp637 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp638 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return $tmp635;

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
org$frostlang$frostc$Type* $tmp639 = org$frostlang$frostc$expression$Closure$typedLambdaType$org$frostlang$frostc$Compiler$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Type$Q(param0, ((frost$collections$ListView*) param2), param3, param4);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
org$frostlang$frostc$Type* $tmp640 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
*(&local4) = $tmp639;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
// line 212
org$frostlang$frostc$Type* $tmp641 = *(&local4);
frost$core$Bit $tmp642 = frost$core$Bit$init$builtin_bit($tmp641 != NULL);
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block10; else goto block12;
block10:;
// line 213
org$frostlang$frostc$Type* $tmp644 = *(&local4);
org$frostlang$frostc$Type* $tmp645 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp644);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
org$frostlang$frostc$Type* $tmp646 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
*(&local3) = $tmp645;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
goto block11;
block12:;
// line 1
// line 218
org$frostlang$frostc$Type* $tmp647 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
org$frostlang$frostc$Type* $tmp648 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
*(&local3) = $tmp647;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
// line 219
frost$core$Int64* $tmp649 = &param4->$rawValue;
frost$core$Int64 $tmp650 = *$tmp649;
frost$core$Int64 $tmp651 = (frost$core$Int64) {3};
frost$core$Bit $tmp652 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp650, $tmp651);
bool $tmp653 = $tmp652.value;
if ($tmp653) goto block14; else goto block13;
block14:;
org$frostlang$frostc$Type** $tmp654 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp655 = *$tmp654;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
org$frostlang$frostc$Type* $tmp656 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
*(&local5) = $tmp655;
frost$core$Bit* $tmp657 = (frost$core$Bit*) (param4->$data + 8);
frost$core$Bit $tmp658 = *$tmp657;
// line 221
org$frostlang$frostc$Type* $tmp659 = *(&local5);
org$frostlang$frostc$Type* $tmp660 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp659);
frost$core$Bit $tmp661 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp660);
bool $tmp662 = $tmp661.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
if ($tmp662) goto block15; else goto block16;
block15:;
// line 222
org$frostlang$frostc$Type* $tmp663 = *(&local5);
org$frostlang$frostc$Type* $tmp664 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp663);
org$frostlang$frostc$Type* $tmp665 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp664);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
org$frostlang$frostc$Type* $tmp666 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
*(&local3) = $tmp665;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
goto block16;
block16:;
org$frostlang$frostc$Type* $tmp667 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
goto block13;
block13:;
goto block11;
block11:;
// line 227
frost$core$Int64 $tmp668 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp669 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp668);
org$frostlang$frostc$ASTNode* $tmp670 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp671 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp672 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp673 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp674 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp672, $tmp673, $tmp674);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp670, $tmp671, param1, $tmp672);
frost$collections$Array* $tmp675 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp676 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp675, $tmp676);
org$frostlang$frostc$ASTNode* $tmp677 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp678 = (frost$core$Int64) {38};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp677, $tmp678, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp675, ((frost$core$Object*) $tmp677));
org$frostlang$frostc$IR$Value* $tmp679 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp669, param2, $tmp670, ((org$frostlang$frostc$FixedArray*) $tmp675), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
org$frostlang$frostc$Type* $tmp680 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp681 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = $tmp679;
goto block1;
block1:;
org$frostlang$frostc$IR$Value* $tmp682 = *(&local0);
frost$core$Bit $tmp683 = frost$core$Bit$init$builtin_bit($tmp682 != NULL);
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block2; else goto block3;
block2:;
*(&local2) = $tmp683;
goto block4;
block3:;
frost$core$Int64* $tmp685 = &param0->errorCount;
frost$core$Int64 $tmp686 = *$tmp685;
frost$core$Int64 $tmp687 = (frost$core$Int64) {0};
int64_t $tmp688 = $tmp686.value;
int64_t $tmp689 = $tmp687.value;
bool $tmp690 = $tmp688 > $tmp689;
frost$core$Bit $tmp691 = (frost$core$Bit) {$tmp690};
*(&local2) = $tmp691;
goto block4;
block4:;
frost$core$Bit $tmp692 = *(&local2);
bool $tmp693 = $tmp692.value;
if ($tmp693) goto block5; else goto block6;
block5:;
*(&local1) = $tmp692;
goto block7;
block6:;
frost$core$Bit* $tmp694 = &param0->reportErrors;
frost$core$Bit $tmp695 = *$tmp694;
frost$core$Bit $tmp696 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp695);
*(&local1) = $tmp696;
goto block7;
block7:;
frost$core$Bit $tmp697 = *(&local1);
bool $tmp698 = $tmp697.value;
if ($tmp698) goto block8; else goto block9;
block8:;
org$frostlang$frostc$IR$Value* $tmp699 = *(&local0);
return $tmp699;
block9:;
frost$core$Int64 $tmp700 = (frost$core$Int64) {208};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s701, $tmp700, &$s702);
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
frost$core$Int64* $tmp703 = &param4->$rawValue;
frost$core$Int64 $tmp704 = *$tmp703;
frost$core$Int64 $tmp705 = (frost$core$Int64) {3};
frost$core$Bit $tmp706 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp704, $tmp705);
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block11; else goto block10;
block11:;
org$frostlang$frostc$Type** $tmp708 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp709 = *$tmp708;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
org$frostlang$frostc$Type* $tmp710 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
*(&local3) = $tmp709;
frost$core$Bit* $tmp711 = (frost$core$Bit*) (param4->$data + 8);
frost$core$Bit $tmp712 = *$tmp711;
// line 238
org$frostlang$frostc$Type* $tmp713 = *(&local3);
org$frostlang$frostc$Type* $tmp714 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp713);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
org$frostlang$frostc$Type* $tmp715 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
*(&local4) = $tmp714;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
// line 239
org$frostlang$frostc$Type* $tmp716 = *(&local4);
frost$core$Bit $tmp717 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp716);
bool $tmp718 = $tmp717.value;
if ($tmp718) goto block12; else goto block13;
block12:;
// line 240
ITable* $tmp719 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp719->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp719 = $tmp719->next;
}
$fn721 $tmp720 = $tmp719->methods[0];
frost$core$Int64 $tmp722 = $tmp720(((frost$collections$CollectionView*) param2));
org$frostlang$frostc$Type* $tmp723 = *(&local4);
frost$core$Int64 $tmp724 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp723);
int64_t $tmp725 = $tmp722.value;
int64_t $tmp726 = $tmp724.value;
bool $tmp727 = $tmp725 != $tmp726;
frost$core$Bit $tmp728 = (frost$core$Bit) {$tmp727};
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block14; else goto block15;
block14:;
// line 241
org$frostlang$frostc$Type* $tmp730 = *(&local3);
frost$core$String* $tmp731 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s732, ((frost$core$Object*) $tmp730));
frost$core$String* $tmp733 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp731, &$s734);
frost$core$String* $tmp735 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp733, &$s736);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp735);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
// line 243
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp737 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp738 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block15:;
// line 245
frost$collections$Array* $tmp739 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp739);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
frost$collections$Array* $tmp740 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local5) = $tmp739;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
// line 246
frost$core$Int64 $tmp741 = (frost$core$Int64) {0};
ITable* $tmp742 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp742->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp742 = $tmp742->next;
}
$fn744 $tmp743 = $tmp742->methods[0];
frost$core$Int64 $tmp745 = $tmp743(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp746 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp747 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp741, $tmp745, $tmp746);
frost$core$Int64 $tmp748 = $tmp747.min;
*(&local6) = $tmp748;
frost$core$Int64 $tmp749 = $tmp747.max;
frost$core$Bit $tmp750 = $tmp747.inclusive;
bool $tmp751 = $tmp750.value;
frost$core$Int64 $tmp752 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp753 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp752);
if ($tmp751) goto block19; else goto block20;
block19:;
int64_t $tmp754 = $tmp748.value;
int64_t $tmp755 = $tmp749.value;
bool $tmp756 = $tmp754 <= $tmp755;
frost$core$Bit $tmp757 = (frost$core$Bit) {$tmp756};
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block16; else goto block17;
block20:;
int64_t $tmp759 = $tmp748.value;
int64_t $tmp760 = $tmp749.value;
bool $tmp761 = $tmp759 < $tmp760;
frost$core$Bit $tmp762 = (frost$core$Bit) {$tmp761};
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block16; else goto block17;
block16:;
// line 247
frost$core$Int64 $tmp764 = *(&local6);
frost$core$Object* $tmp765 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(param2, $tmp764);
frost$core$Int64* $tmp766 = &((org$frostlang$frostc$ASTNode*) $tmp765)->$rawValue;
frost$core$Int64 $tmp767 = *$tmp766;
frost$core$Int64 $tmp768 = (frost$core$Int64) {22};
frost$core$Bit $tmp769 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp767, $tmp768);
bool $tmp770 = $tmp769.value;
if ($tmp770) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp771 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$ASTNode*) $tmp765)->$data + 0);
org$frostlang$frostc$Position $tmp772 = *$tmp771;
*(&local7) = $tmp772;
frost$core$String** $tmp773 = (frost$core$String**) (((org$frostlang$frostc$ASTNode*) $tmp765)->$data + 16);
frost$core$String* $tmp774 = *$tmp773;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
frost$core$String* $tmp775 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
*(&local8) = $tmp774;
// line 249
frost$collections$Array* $tmp776 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp777 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp778 = (frost$core$Int64) {34};
org$frostlang$frostc$Position $tmp779 = *(&local7);
frost$core$String* $tmp780 = *(&local8);
org$frostlang$frostc$ASTNode* $tmp781 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp782 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp783 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp784 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp785 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp786 = *(&local4);
frost$core$Int64 $tmp787 = *(&local6);
org$frostlang$frostc$Type* $tmp788 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp786, $tmp787);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp784, $tmp785, $tmp788);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp781, $tmp782, $tmp783, $tmp784);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp777, $tmp778, $tmp779, $tmp780, $tmp781);
frost$collections$Array$add$frost$collections$Array$T($tmp776, ((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$String* $tmp789 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
*(&local8) = ((frost$core$String*) NULL);
goto block21;
block23:;
// line 254
frost$core$Bit $tmp790 = frost$core$Bit$init$builtin_bit(false);
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp792 = (frost$core$Int64) {254};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s793, $tmp792);
abort(); // unreachable
block24:;
goto block21;
block21:;
frost$core$Frost$unref$frost$core$Object$Q($tmp765);
goto block18;
block18:;
frost$core$Int64 $tmp794 = *(&local6);
int64_t $tmp795 = $tmp749.value;
int64_t $tmp796 = $tmp794.value;
int64_t $tmp797 = $tmp795 - $tmp796;
frost$core$Int64 $tmp798 = (frost$core$Int64) {$tmp797};
frost$core$UInt64 $tmp799 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp798);
if ($tmp751) goto block27; else goto block28;
block27:;
uint64_t $tmp800 = $tmp799.value;
uint64_t $tmp801 = $tmp753.value;
bool $tmp802 = $tmp800 >= $tmp801;
frost$core$Bit $tmp803 = (frost$core$Bit) {$tmp802};
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block26; else goto block17;
block28:;
uint64_t $tmp805 = $tmp799.value;
uint64_t $tmp806 = $tmp753.value;
bool $tmp807 = $tmp805 > $tmp806;
frost$core$Bit $tmp808 = (frost$core$Bit) {$tmp807};
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block26; else goto block17;
block26:;
int64_t $tmp810 = $tmp794.value;
int64_t $tmp811 = $tmp752.value;
int64_t $tmp812 = $tmp810 + $tmp811;
frost$core$Int64 $tmp813 = (frost$core$Int64) {$tmp812};
*(&local6) = $tmp813;
goto block16;
block17:;
// line 258
org$frostlang$frostc$Type* $tmp814 = *(&local3);
org$frostlang$frostc$Type* $tmp815 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp814);
org$frostlang$frostc$Type* $tmp816 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp815);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
org$frostlang$frostc$Type* $tmp817 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local9) = $tmp816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
// line 259
frost$core$Int64 $tmp818 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp819 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp818);
frost$collections$Array* $tmp820 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp821 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp820);
org$frostlang$frostc$ASTNode* $tmp822 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp823 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp824 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp825 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp826 = *(&local9);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp824, $tmp825, $tmp826);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp822, $tmp823, param1, $tmp824);
frost$collections$Array* $tmp827 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp828 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp827, $tmp828);
org$frostlang$frostc$ASTNode* $tmp829 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp830 = (frost$core$Int64) {38};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp829, $tmp830, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp827, ((frost$core$Object*) $tmp829));
org$frostlang$frostc$FixedArray* $tmp831 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp827);
org$frostlang$frostc$IR$Value* $tmp832 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp819, $tmp821, $tmp822, $tmp831, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
org$frostlang$frostc$Type* $tmp833 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp834 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp835 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp836 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = $tmp832;
goto block1;
block13:;
org$frostlang$frostc$Type* $tmp837 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp838 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block10;
block10:;
// line 267
frost$collections$IdentityMap** $tmp839 = &param0->lambdaTypes;
frost$collections$IdentityMap* $tmp840 = *$tmp839;
frost$core$Object* $tmp841 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp840, ((frost$core$Object*) param3));
*(&local10) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp841)));
frost$collections$HashSet* $tmp842 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
*(&local10) = ((frost$collections$HashSet*) $tmp841);
frost$core$Frost$unref$frost$core$Object$Q($tmp841);
// line 268
frost$collections$HashSet* $tmp843 = *(&local10);
frost$core$Bit $tmp844 = frost$core$Bit$init$builtin_bit($tmp843 != NULL);
bool $tmp845 = $tmp844.value;
if ($tmp845) goto block29; else goto block30;
block29:;
// line 269
frost$collections$HashSet* $tmp846 = *(&local10);
ITable* $tmp847 = ((frost$collections$CollectionView*) $tmp846)->$class->itable;
while ($tmp847->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp847 = $tmp847->next;
}
$fn849 $tmp848 = $tmp847->methods[0];
frost$core$Int64 $tmp850 = $tmp848(((frost$collections$CollectionView*) $tmp846));
frost$core$Int64 $tmp851 = (frost$core$Int64) {1};
int64_t $tmp852 = $tmp850.value;
int64_t $tmp853 = $tmp851.value;
bool $tmp854 = $tmp852 > $tmp853;
frost$core$Bit $tmp855 = (frost$core$Bit) {$tmp854};
bool $tmp856 = $tmp855.value;
if ($tmp856) goto block31; else goto block33;
block31:;
// line 270
frost$core$MutableString* $tmp857 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp857, &$s858);
*(&local11) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
frost$core$MutableString* $tmp859 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local11) = $tmp857;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
// line 271
frost$threads$MessageQueue** $tmp860 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp861 = *$tmp860;
*(&local12) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
frost$threads$MessageQueue* $tmp862 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local12) = $tmp861;
// line 272
frost$collections$HashSet* $tmp863 = *(&local10);
ITable* $tmp864 = ((frost$collections$Iterable*) $tmp863)->$class->itable;
while ($tmp864->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp864 = $tmp864->next;
}
$fn866 $tmp865 = $tmp864->methods[0];
frost$collections$Iterator* $tmp867 = $tmp865(((frost$collections$Iterable*) $tmp863));
goto block34;
block34:;
ITable* $tmp868 = $tmp867->$class->itable;
while ($tmp868->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp868 = $tmp868->next;
}
$fn870 $tmp869 = $tmp868->methods[0];
frost$core$Bit $tmp871 = $tmp869($tmp867);
bool $tmp872 = $tmp871.value;
if ($tmp872) goto block36; else goto block35;
block35:;
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp873 = $tmp867->$class->itable;
while ($tmp873->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp873 = $tmp873->next;
}
$fn875 $tmp874 = $tmp873->methods[1];
frost$core$Object* $tmp876 = $tmp874($tmp867);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp876)));
org$frostlang$frostc$Type* $tmp877 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
*(&local13) = ((org$frostlang$frostc$Type*) $tmp876);
// line 273
frost$core$MutableString* $tmp878 = *(&local11);
org$frostlang$frostc$Type* $tmp879 = *(&local13);
frost$core$String* $tmp880 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s881, ((frost$core$Object*) $tmp879));
frost$core$String* $tmp882 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp880, &$s883);
frost$core$MutableString$append$frost$core$String($tmp878, $tmp882);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
// line 274
frost$threads$MessageQueue* $tmp884 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp884);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
frost$threads$MessageQueue** $tmp885 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp886 = *$tmp885;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
frost$threads$MessageQueue** $tmp887 = &param0->errorQueue;
*$tmp887 = $tmp884;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
// line 275
org$frostlang$frostc$Compiler$TypeContext* $tmp888 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp889 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp890 = *(&local13);
frost$core$Bit $tmp891 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp888, $tmp889, $tmp890, $tmp891);
org$frostlang$frostc$IR$Value* $tmp892 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp888);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
// line 277
frost$threads$MessageQueue** $tmp893 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp894 = *$tmp893;
frost$core$Bit $tmp895 = frost$threads$MessageQueue$hasMessage$R$frost$core$Bit($tmp894);
bool $tmp896 = $tmp895.value;
if ($tmp896) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp897 = (frost$core$Int64) {277};
org$frostlang$frostc$Position$wrapper* $tmp898;
$tmp898 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp898->value = param1;
frost$core$String* $tmp899 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s900, ((frost$core$Object*) $tmp898));
frost$core$String* $tmp901 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp899, &$s902);
org$frostlang$frostc$Type* $tmp903 = *(&local13);
frost$core$String* $tmp904 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s905, ((frost$core$Object*) $tmp903));
frost$core$String* $tmp906 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp904, &$s907);
frost$core$String* $tmp908 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp901, $tmp906);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s909, $tmp897, $tmp908);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
abort(); // unreachable
block37:;
// line 280
frost$core$MutableString* $tmp910 = *(&local11);
frost$threads$MessageQueue** $tmp911 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp912 = *$tmp911;
frost$core$Immutable* $tmp913 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp912);
frost$core$String** $tmp914 = &((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp913)->message;
frost$core$String* $tmp915 = *$tmp914;
frost$core$String* $tmp916 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s917, $tmp915);
frost$core$String* $tmp918 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp916, &$s919);
frost$core$MutableString$append$frost$core$String($tmp910, $tmp918);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
frost$core$Frost$unref$frost$core$Object$Q($tmp876);
org$frostlang$frostc$Type* $tmp920 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
goto block34;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
// line 282
frost$threads$MessageQueue* $tmp921 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
frost$threads$MessageQueue** $tmp922 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp923 = *$tmp922;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
frost$threads$MessageQueue** $tmp924 = &param0->errorQueue;
*$tmp924 = $tmp921;
// line 283
frost$core$MutableString* $tmp925 = *(&local11);
frost$core$String* $tmp926 = frost$core$MutableString$finish$R$frost$core$String($tmp925);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp926);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
// line 284
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$threads$MessageQueue* $tmp927 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
*(&local12) = ((frost$threads$MessageQueue*) NULL);
frost$core$MutableString* $tmp928 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
*(&local11) = ((frost$core$MutableString*) NULL);
frost$collections$HashSet* $tmp929 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
*(&local10) = ((frost$collections$HashSet*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block33:;
// line 1
// line 287
org$frostlang$frostc$Compiler$TypeContext* $tmp930 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp931 = (frost$core$Int64) {3};
frost$collections$HashSet* $tmp932 = *(&local10);
ITable* $tmp933 = ((frost$collections$Iterable*) $tmp932)->$class->itable;
while ($tmp933->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp933 = $tmp933->next;
}
$fn935 $tmp934 = $tmp933->methods[0];
frost$collections$Iterator* $tmp936 = $tmp934(((frost$collections$Iterable*) $tmp932));
ITable* $tmp937 = $tmp936->$class->itable;
while ($tmp937->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp937 = $tmp937->next;
}
$fn939 $tmp938 = $tmp937->methods[1];
frost$core$Object* $tmp940 = $tmp938($tmp936);
frost$core$Bit $tmp941 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp930, $tmp931, ((org$frostlang$frostc$Type*) $tmp940), $tmp941);
org$frostlang$frostc$IR$Value* $tmp942 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp930);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
frost$core$Frost$unref$frost$core$Object$Q($tmp940);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
// line 289
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp943 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
*(&local10) = ((frost$collections$HashSet*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block32:;
goto block30;
block30:;
// line 292
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s944);
// line 294
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp945 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
*(&local10) = ((frost$collections$HashSet*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block1:;
org$frostlang$frostc$IR$Value* $tmp946 = *(&local0);
frost$core$Bit $tmp947 = frost$core$Bit$init$builtin_bit($tmp946 != NULL);
bool $tmp948 = $tmp947.value;
if ($tmp948) goto block2; else goto block3;
block2:;
*(&local2) = $tmp947;
goto block4;
block3:;
frost$core$Int64* $tmp949 = &param0->errorCount;
frost$core$Int64 $tmp950 = *$tmp949;
frost$core$Int64 $tmp951 = (frost$core$Int64) {0};
int64_t $tmp952 = $tmp950.value;
int64_t $tmp953 = $tmp951.value;
bool $tmp954 = $tmp952 > $tmp953;
frost$core$Bit $tmp955 = (frost$core$Bit) {$tmp954};
*(&local2) = $tmp955;
goto block4;
block4:;
frost$core$Bit $tmp956 = *(&local2);
bool $tmp957 = $tmp956.value;
if ($tmp957) goto block5; else goto block6;
block5:;
*(&local1) = $tmp956;
goto block7;
block6:;
frost$core$Bit* $tmp958 = &param0->reportErrors;
frost$core$Bit $tmp959 = *$tmp958;
frost$core$Bit $tmp960 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp959);
*(&local1) = $tmp960;
goto block7;
block7:;
frost$core$Bit $tmp961 = *(&local1);
bool $tmp962 = $tmp961.value;
if ($tmp962) goto block8; else goto block9;
block8:;
org$frostlang$frostc$IR$Value* $tmp963 = *(&local0);
return $tmp963;
block9:;
frost$core$Int64 $tmp964 = (frost$core$Int64) {234};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s965, $tmp964, &$s966);
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
frost$core$Int64* $tmp967 = &param0->closureCount;
frost$core$Int64 $tmp968 = *$tmp967;
frost$core$Int64 $tmp969 = (frost$core$Int64) {1};
int64_t $tmp970 = $tmp968.value;
int64_t $tmp971 = $tmp969.value;
int64_t $tmp972 = $tmp970 + $tmp971;
frost$core$Int64 $tmp973 = (frost$core$Int64) {$tmp972};
frost$core$Int64* $tmp974 = &param0->closureCount;
*$tmp974 = $tmp973;
// line 302
frost$core$Int64* $tmp975 = &param0->closureCount;
frost$core$Int64 $tmp976 = *$tmp975;
frost$core$Int64$wrapper* $tmp977;
$tmp977 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp977->value = $tmp976;
frost$core$String* $tmp978 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s979, ((frost$core$Object*) $tmp977));
frost$core$String* $tmp980 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp978, &$s981);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
frost$core$String* $tmp982 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
*(&local0) = $tmp980;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
// line 303
frost$collections$Array* $tmp983 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp983);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
frost$collections$Array* $tmp984 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
*(&local1) = $tmp983;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
// line 304
ITable* $tmp985 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp985->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp985 = $tmp985->next;
}
$fn987 $tmp986 = $tmp985->methods[0];
frost$collections$Iterator* $tmp988 = $tmp986(((frost$collections$Iterable*) param3));
goto block1;
block1:;
ITable* $tmp989 = $tmp988->$class->itable;
while ($tmp989->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp989 = $tmp989->next;
}
$fn991 $tmp990 = $tmp989->methods[0];
frost$core$Bit $tmp992 = $tmp990($tmp988);
bool $tmp993 = $tmp992.value;
if ($tmp993) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp994 = $tmp988->$class->itable;
while ($tmp994->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp994 = $tmp994->next;
}
$fn996 $tmp995 = $tmp994->methods[1];
frost$core$Object* $tmp997 = $tmp995($tmp988);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp997)));
org$frostlang$frostc$ASTNode* $tmp998 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp997);
// line 305
org$frostlang$frostc$ASTNode* $tmp999 = *(&local2);
frost$core$Int64* $tmp1000 = &$tmp999->$rawValue;
frost$core$Int64 $tmp1001 = *$tmp1000;
frost$core$Int64 $tmp1002 = (frost$core$Int64) {34};
frost$core$Bit $tmp1003 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1001, $tmp1002);
bool $tmp1004 = $tmp1003.value;
if ($tmp1004) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp1005 = (org$frostlang$frostc$Position*) ($tmp999->$data + 0);
org$frostlang$frostc$Position $tmp1006 = *$tmp1005;
frost$core$String** $tmp1007 = (frost$core$String**) ($tmp999->$data + 16);
frost$core$String* $tmp1008 = *$tmp1007;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
frost$core$String* $tmp1009 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
*(&local3) = $tmp1008;
org$frostlang$frostc$ASTNode** $tmp1010 = (org$frostlang$frostc$ASTNode**) ($tmp999->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1011 = *$tmp1010;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
org$frostlang$frostc$ASTNode* $tmp1012 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
*(&local4) = $tmp1011;
// line 307
org$frostlang$frostc$Scanner** $tmp1013 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1014 = *$tmp1013;
org$frostlang$frostc$ASTNode* $tmp1015 = *(&local4);
org$frostlang$frostc$Type* $tmp1016 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1014, $tmp1015);
org$frostlang$frostc$Type* $tmp1017 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1016);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
org$frostlang$frostc$Type* $tmp1018 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
*(&local5) = $tmp1017;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
// line 308
org$frostlang$frostc$Type* $tmp1019 = *(&local5);
frost$core$Bit $tmp1020 = frost$core$Bit$init$builtin_bit($tmp1019 == NULL);
bool $tmp1021 = $tmp1020.value;
if ($tmp1021) goto block7; else goto block8;
block7:;
// line 309
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1022 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1023 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1024 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp997);
org$frostlang$frostc$ASTNode* $tmp1025 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
frost$collections$Array* $tmp1026 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1027 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
// line 311
frost$collections$Array* $tmp1028 = *(&local1);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1029 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp1030 = *(&local3);
org$frostlang$frostc$Type* $tmp1031 = *(&local5);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp1029, $tmp1030, $tmp1031);
frost$collections$Array$add$frost$collections$Array$T($tmp1028, ((frost$core$Object*) $tmp1029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
org$frostlang$frostc$Type* $tmp1032 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1033 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1034 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 314
frost$core$Bit $tmp1035 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1036 = $tmp1035.value;
if ($tmp1036) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1037 = (frost$core$Int64) {314};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1038, $tmp1037);
abort(); // unreachable
block9:;
goto block4;
block4:;
frost$core$Frost$unref$frost$core$Object$Q($tmp997);
org$frostlang$frostc$ASTNode* $tmp1039 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
// line 318
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// line 319
frost$core$Bit $tmp1040 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp1041 = $tmp1040.value;
if ($tmp1041) goto block11; else goto block13;
block11:;
// line 320
org$frostlang$frostc$Scanner** $tmp1042 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1043 = *$tmp1042;
org$frostlang$frostc$Type* $tmp1044 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1043, param4);
org$frostlang$frostc$Type* $tmp1045 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1044);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
org$frostlang$frostc$Type* $tmp1046 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
*(&local6) = $tmp1045;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
// line 321
org$frostlang$frostc$Type* $tmp1047 = *(&local6);
frost$core$Bit $tmp1048 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1049 = $tmp1048.value;
if ($tmp1049) goto block14; else goto block15;
block14:;
// line 322
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1050 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1051 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1052 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block15:;
goto block12;
block13:;
// line 1
// line 326
org$frostlang$frostc$Type* $tmp1053 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
org$frostlang$frostc$Type* $tmp1054 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
*(&local6) = $tmp1053;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
// line 327
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1055;
$tmp1055 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1055->value = param2;
frost$core$Int64 $tmp1056 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp1057 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1056);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1058;
$tmp1058 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1058->value = $tmp1057;
ITable* $tmp1059 = ((frost$core$Equatable*) $tmp1055)->$class->itable;
while ($tmp1059->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1059 = $tmp1059->next;
}
$fn1061 $tmp1060 = $tmp1059->methods[0];
frost$core$Bit $tmp1062 = $tmp1060(((frost$core$Equatable*) $tmp1055), ((frost$core$Equatable*) $tmp1058));
bool $tmp1063 = $tmp1062.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1058)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1055)));
if ($tmp1063) goto block16; else goto block17;
block16:;
// line 328
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s1064);
// line 329
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1065 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1066 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1067 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block17:;
goto block12;
block12:;
// line 332
org$frostlang$frostc$Pair* $tmp1068 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Stack** $tmp1069 = &param0->currentMethod;
frost$collections$Stack* $tmp1070 = *$tmp1069;
frost$core$Int64 $tmp1071 = (frost$core$Int64) {0};
frost$core$Object* $tmp1072 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1070, $tmp1071);
frost$collections$HashMap* $tmp1073 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp1073);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1068, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1072)), ((frost$core$Object*) ((frost$collections$Map*) $tmp1073)));
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
org$frostlang$frostc$Pair* $tmp1074 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
*(&local7) = $tmp1068;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
frost$core$Frost$unref$frost$core$Object$Q($tmp1072);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
// line 334
frost$collections$Stack** $tmp1075 = &param0->captures;
frost$collections$Stack* $tmp1076 = *$tmp1075;
org$frostlang$frostc$Pair* $tmp1077 = *(&local7);
frost$collections$Stack$push$frost$collections$Stack$T($tmp1076, ((frost$core$Object*) $tmp1077));
// line 335
org$frostlang$frostc$Annotations* $tmp1078 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp1079 = (frost$core$Int64) {16};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp1078, $tmp1079);
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
org$frostlang$frostc$Annotations* $tmp1080 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
*(&local8) = $tmp1078;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
// line 336
org$frostlang$frostc$MethodDecl* $tmp1081 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$collections$Stack** $tmp1082 = &param0->currentClass;
frost$collections$Stack* $tmp1083 = *$tmp1082;
frost$core$Int64 $tmp1084 = (frost$core$Int64) {0};
frost$core$Object* $tmp1085 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1083, $tmp1084);
org$frostlang$frostc$Annotations* $tmp1086 = *(&local8);
frost$core$String* $tmp1087 = *(&local0);
frost$collections$Array* $tmp1088 = *(&local1);
org$frostlang$frostc$Type* $tmp1089 = *(&local6);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp1081, ((org$frostlang$frostc$ClassDecl*) $tmp1085), param1, ((frost$core$String*) NULL), $tmp1086, param2, $tmp1087, ((frost$collections$Array*) NULL), $tmp1088, $tmp1089, param5);
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
org$frostlang$frostc$MethodDecl* $tmp1090 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
*(&local9) = $tmp1081;
frost$core$Frost$unref$frost$core$Object$Q($tmp1085);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
// line 340
frost$core$Bit* $tmp1091 = &param0->writeCode;
frost$core$Bit $tmp1092 = *$tmp1091;
*(&local10) = $tmp1092;
// line 341
frost$core$Bit* $tmp1093 = &param0->reportErrors;
frost$core$Bit $tmp1094 = *$tmp1093;
*(&local11) = $tmp1094;
// line 342
frost$core$Bit $tmp1095 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp1096 = &param0->writeCode;
*$tmp1096 = $tmp1095;
// line 343
frost$core$Bit $tmp1097 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp1098 = &param0->reportErrors;
*$tmp1098 = $tmp1097;
// line 344
frost$collections$Stack** $tmp1099 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1100 = *$tmp1099;
*(&local12) = ((frost$collections$Stack*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
frost$collections$Stack* $tmp1101 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
*(&local12) = $tmp1100;
// line 345
frost$collections$Stack* $tmp1102 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp1102);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
frost$collections$Stack** $tmp1103 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1104 = *$tmp1103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
frost$collections$Stack** $tmp1105 = &param0->enclosingContexts;
*$tmp1105 = $tmp1102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
// line 346
org$frostlang$frostc$MethodDecl* $tmp1106 = *(&local9);
org$frostlang$frostc$SymbolTable** $tmp1107 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1108 = *$tmp1107;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp1106, $tmp1108);
// line 347
frost$collections$Stack* $tmp1109 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
frost$collections$Stack** $tmp1110 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1111 = *$tmp1110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
frost$collections$Stack** $tmp1112 = &param0->enclosingContexts;
*$tmp1112 = $tmp1109;
// line 348
frost$core$Bit $tmp1113 = *(&local10);
frost$core$Bit* $tmp1114 = &param0->writeCode;
*$tmp1114 = $tmp1113;
// line 349
frost$core$Bit $tmp1115 = *(&local11);
frost$core$Bit* $tmp1116 = &param0->reportErrors;
*$tmp1116 = $tmp1115;
// line 351
// line 352
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 353
org$frostlang$frostc$Pair* $tmp1117 = *(&local7);
frost$core$Object** $tmp1118 = &$tmp1117->second;
frost$core$Object* $tmp1119 = *$tmp1118;
ITable* $tmp1120 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1119))->$class->itable;
while ($tmp1120->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1120 = $tmp1120->next;
}
$fn1122 $tmp1121 = $tmp1120->methods[0];
frost$core$Int64 $tmp1123 = $tmp1121(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1119)));
frost$core$Int64 $tmp1124 = (frost$core$Int64) {0};
int64_t $tmp1125 = $tmp1123.value;
int64_t $tmp1126 = $tmp1124.value;
bool $tmp1127 = $tmp1125 != $tmp1126;
frost$core$Bit $tmp1128 = (frost$core$Bit) {$tmp1127};
bool $tmp1129 = $tmp1128.value;
if ($tmp1129) goto block18; else goto block20;
block18:;
// line 355
org$frostlang$frostc$MethodDecl* $tmp1130 = *(&local9);
org$frostlang$frostc$Pair* $tmp1131 = *(&local7);
frost$core$Object** $tmp1132 = &$tmp1131->second;
frost$core$Object* $tmp1133 = *$tmp1132;
ITable* $tmp1134 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1133))->$class->itable;
while ($tmp1134->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1134 = $tmp1134->next;
}
$fn1136 $tmp1135 = $tmp1134->methods[4];
frost$collections$Iterator* $tmp1137 = $tmp1135(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1133)));
ITable* $tmp1138 = $tmp1137->$class->itable;
while ($tmp1138->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1138 = $tmp1138->next;
}
$fn1140 $tmp1139 = $tmp1138->methods[6];
frost$collections$Array* $tmp1141 = $tmp1139($tmp1137);
org$frostlang$frostc$ClassDecl* $tmp1142 = org$frostlang$frostc$expression$Closure$createClosureClass$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlang$frostc$Compiler$Capture$GT$R$org$frostlang$frostc$ClassDecl(param0, $tmp1130, ((frost$collections$CollectionView*) $tmp1141));
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
org$frostlang$frostc$ClassDecl* $tmp1143 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
*(&local15) = $tmp1142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
// line 356
frost$collections$Array* $tmp1144 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1144);
*(&local16) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$collections$Array* $tmp1145 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local16) = $tmp1144;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
// line 357
org$frostlang$frostc$Pair* $tmp1146 = *(&local7);
frost$core$Object** $tmp1147 = &$tmp1146->second;
frost$core$Object* $tmp1148 = *$tmp1147;
ITable* $tmp1149 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1148))->$class->itable;
while ($tmp1149->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1149 = $tmp1149->next;
}
$fn1151 $tmp1150 = $tmp1149->methods[4];
frost$collections$Iterator* $tmp1152 = $tmp1150(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1148)));
goto block21;
block21:;
ITable* $tmp1153 = $tmp1152->$class->itable;
while ($tmp1153->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1153 = $tmp1153->next;
}
$fn1155 $tmp1154 = $tmp1153->methods[0];
frost$core$Bit $tmp1156 = $tmp1154($tmp1152);
bool $tmp1157 = $tmp1156.value;
if ($tmp1157) goto block23; else goto block22;
block22:;
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp1158 = $tmp1152->$class->itable;
while ($tmp1158->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1158 = $tmp1158->next;
}
$fn1160 $tmp1159 = $tmp1158->methods[1];
frost$core$Object* $tmp1161 = $tmp1159($tmp1152);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp1161)));
org$frostlang$frostc$Compiler$Capture* $tmp1162 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) $tmp1161);
// line 358
org$frostlang$frostc$Compiler$Capture* $tmp1163 = *(&local17);
frost$core$Int64* $tmp1164 = &$tmp1163->$rawValue;
frost$core$Int64 $tmp1165 = *$tmp1164;
frost$core$Int64 $tmp1166 = (frost$core$Int64) {0};
frost$core$Bit $tmp1167 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1165, $tmp1166);
bool $tmp1168 = $tmp1167.value;
if ($tmp1168) goto block25; else goto block26;
block25:;
org$frostlang$frostc$Variable** $tmp1169 = (org$frostlang$frostc$Variable**) ($tmp1163->$data + 0);
org$frostlang$frostc$Variable* $tmp1170 = *$tmp1169;
*(&local18) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
org$frostlang$frostc$Variable* $tmp1171 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
*(&local18) = $tmp1170;
// line 360
frost$collections$Array* $tmp1172 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1173 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1174 = (frost$core$Int64) {22};
org$frostlang$frostc$Variable* $tmp1175 = *(&local18);
frost$core$String** $tmp1176 = &((org$frostlang$frostc$Symbol*) $tmp1175)->name;
frost$core$String* $tmp1177 = *$tmp1176;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1173, $tmp1174, param1, $tmp1177);
frost$collections$Array$add$frost$collections$Array$T($tmp1172, ((frost$core$Object*) $tmp1173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
org$frostlang$frostc$Variable* $tmp1178 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
*(&local18) = ((org$frostlang$frostc$Variable*) NULL);
goto block24;
block26:;
frost$core$Int64 $tmp1179 = (frost$core$Int64) {2};
frost$core$Bit $tmp1180 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1165, $tmp1179);
bool $tmp1181 = $tmp1180.value;
if ($tmp1181) goto block27; else goto block28;
block27:;
// line 363
frost$collections$Array* $tmp1182 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1183 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1184 = (frost$core$Int64) {39};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1183, $tmp1184, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1182, ((frost$core$Object*) $tmp1183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
goto block24;
block28:;
frost$core$Int64 $tmp1185 = (frost$core$Int64) {1};
frost$core$Bit $tmp1186 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1165, $tmp1185);
bool $tmp1187 = $tmp1186.value;
if ($tmp1187) goto block29; else goto block24;
block29:;
org$frostlang$frostc$FieldDecl** $tmp1188 = (org$frostlang$frostc$FieldDecl**) ($tmp1163->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp1189 = *$tmp1188;
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
org$frostlang$frostc$FieldDecl* $tmp1190 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
*(&local19) = $tmp1189;
// line 366
frost$collections$Array* $tmp1191 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1192 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1193 = (frost$core$Int64) {16};
org$frostlang$frostc$ASTNode* $tmp1194 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1195 = (frost$core$Int64) {22};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1194, $tmp1195, param1, &$s1196);
org$frostlang$frostc$FieldDecl* $tmp1197 = *(&local19);
frost$core$String** $tmp1198 = &((org$frostlang$frostc$Symbol*) $tmp1197)->name;
frost$core$String* $tmp1199 = *$tmp1198;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp1192, $tmp1193, param1, $tmp1194, $tmp1199);
frost$collections$Array$add$frost$collections$Array$T($tmp1191, ((frost$core$Object*) $tmp1192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
org$frostlang$frostc$FieldDecl* $tmp1200 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block24;
block24:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1161);
org$frostlang$frostc$Compiler$Capture* $tmp1201 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block21;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
// line 372
frost$collections$Stack** $tmp1202 = &param0->captures;
frost$collections$Stack* $tmp1203 = *$tmp1202;
frost$core$Object* $tmp1204 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1203);
frost$core$Frost$unref$frost$core$Object$Q($tmp1204);
// line 373
frost$collections$Array** $tmp1205 = &param0->pendingClasses;
frost$collections$Array* $tmp1206 = *$tmp1205;
org$frostlang$frostc$ClassDecl* $tmp1207 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp1206, ((frost$core$Object*) $tmp1207));
// line 374
org$frostlang$frostc$IR$Value* $tmp1208 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1209 = (frost$core$Int64) {14};
org$frostlang$frostc$ClassDecl* $tmp1210 = *(&local15);
org$frostlang$frostc$Type** $tmp1211 = &$tmp1210->type;
org$frostlang$frostc$Type* $tmp1212 = *$tmp1211;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1208, $tmp1209, $tmp1212);
frost$collections$Array* $tmp1213 = *(&local16);
org$frostlang$frostc$FixedArray* $tmp1214 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1213);
org$frostlang$frostc$Compiler$TypeContext* $tmp1215 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1216 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1215, $tmp1216);
org$frostlang$frostc$IR$Value* $tmp1217 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1208, ((frost$collections$ListView*) $tmp1214), $tmp1215);
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
org$frostlang$frostc$IR$Value* $tmp1218 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
*(&local20) = $tmp1217;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
// line 376
org$frostlang$frostc$IR$Value* $tmp1219 = *(&local20);
frost$core$Bit $tmp1220 = frost$core$Bit$init$builtin_bit($tmp1219 == NULL);
bool $tmp1221 = $tmp1220.value;
if ($tmp1221) goto block30; else goto block31;
block30:;
// line 377
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1222 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1223 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1224 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp1225 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp1226 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
*(&local12) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1227 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp1228 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp1229 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1230 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1231 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1232 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block31:;
// line 379
org$frostlang$frostc$ASTNode* $tmp1233 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1234 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp1235 = *(&local20);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1233, $tmp1234, param1, $tmp1235);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
org$frostlang$frostc$ASTNode* $tmp1236 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
*(&local14) = $tmp1233;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
// line 380
org$frostlang$frostc$ClassDecl* $tmp1237 = *(&local15);
org$frostlang$frostc$Type** $tmp1238 = &$tmp1237->type;
org$frostlang$frostc$Type* $tmp1239 = *$tmp1238;
frost$core$Bit $tmp1240 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1239);
*(&local13) = $tmp1240;
org$frostlang$frostc$IR$Value* $tmp1241 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1242 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1243 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block19;
block20:;
// line 1
// line 384
frost$collections$Stack** $tmp1244 = &param0->captures;
frost$collections$Stack* $tmp1245 = *$tmp1244;
frost$core$Object* $tmp1246 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1245);
frost$core$Frost$unref$frost$core$Object$Q($tmp1246);
// line 385
frost$collections$Stack* $tmp1247 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp1247);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
frost$collections$Stack** $tmp1248 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1249 = *$tmp1248;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
frost$collections$Stack** $tmp1250 = &param0->enclosingContexts;
*$tmp1250 = $tmp1247;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
// line 386
org$frostlang$frostc$MethodDecl* $tmp1251 = *(&local9);
org$frostlang$frostc$SymbolTable** $tmp1252 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1253 = *$tmp1252;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp1251, $tmp1253);
// line 387
frost$collections$Stack* $tmp1254 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$collections$Stack** $tmp1255 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1256 = *$tmp1255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$collections$Stack** $tmp1257 = &param0->enclosingContexts;
*$tmp1257 = $tmp1254;
// line 388
org$frostlang$frostc$ASTNode* $tmp1258 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1259 = (frost$core$Int64) {31};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1258, $tmp1259, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
org$frostlang$frostc$ASTNode* $tmp1260 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
*(&local14) = $tmp1258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
// line 389
frost$core$Bit $tmp1261 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp1261;
goto block19;
block19:;
// line 391
frost$collections$Array* $tmp1262 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1262);
*(&local21) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
frost$collections$Array* $tmp1263 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
*(&local21) = $tmp1262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
// line 392
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
// line 393
org$frostlang$frostc$MethodDecl* $tmp1264 = *(&local9);
org$frostlang$frostc$Annotations** $tmp1265 = &$tmp1264->annotations;
org$frostlang$frostc$Annotations* $tmp1266 = *$tmp1265;
frost$core$Bit $tmp1267 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1266);
bool $tmp1268 = $tmp1267.value;
if ($tmp1268) goto block32; else goto block34;
block32:;
// line 394
org$frostlang$frostc$MethodDecl* $tmp1269 = *(&local9);
org$frostlang$frostc$Type* $tmp1270 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp1269);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
org$frostlang$frostc$Type* $tmp1271 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
*(&local22) = $tmp1270;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
goto block33;
block34:;
// line 1
// line 397
org$frostlang$frostc$MethodDecl* $tmp1272 = *(&local9);
org$frostlang$frostc$MethodDecl* $tmp1273 = *(&local9);
frost$core$Weak** $tmp1274 = &$tmp1273->owner;
frost$core$Weak* $tmp1275 = *$tmp1274;
frost$core$Object* $tmp1276 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1275);
org$frostlang$frostc$Type** $tmp1277 = &((org$frostlang$frostc$ClassDecl*) $tmp1276)->type;
org$frostlang$frostc$Type* $tmp1278 = *$tmp1277;
frost$core$Bit $tmp1279 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp1280 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp1272, $tmp1278, $tmp1279);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
org$frostlang$frostc$Type* $tmp1281 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
*(&local22) = $tmp1280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
frost$core$Frost$unref$frost$core$Object$Q($tmp1276);
goto block33;
block33:;
// line 399
org$frostlang$frostc$Type* $tmp1282 = *(&local22);
org$frostlang$frostc$Type* $tmp1283 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1282);
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
org$frostlang$frostc$Type* $tmp1284 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
*(&local23) = $tmp1283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
// line 400
frost$collections$Array* $tmp1285 = *(&local21);
org$frostlang$frostc$ASTNode* $tmp1286 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1287 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp1288 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1289 = (frost$core$Int64) {3};
org$frostlang$frostc$MethodDecl* $tmp1290 = *(&local9);
org$frostlang$frostc$Type* $tmp1291 = *(&local23);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp1288, $tmp1289, $tmp1290, $tmp1291);
org$frostlang$frostc$Type* $tmp1292 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp1293 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1292);
org$frostlang$frostc$IR$Value* $tmp1294 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1288, $tmp1293);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1286, $tmp1287, param1, $tmp1294);
frost$collections$Array$add$frost$collections$Array$T($tmp1285, ((frost$core$Object*) $tmp1286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
// line 402
frost$collections$Array* $tmp1295 = *(&local21);
org$frostlang$frostc$ASTNode* $tmp1296 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp1295, ((frost$core$Object*) $tmp1296));
// line 403
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
// line 404
frost$core$Bit $tmp1297 = *(&local13);
bool $tmp1298 = $tmp1297.value;
if ($tmp1298) goto block35; else goto block37;
block35:;
// line 405
org$frostlang$frostc$Type* $tmp1299 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
org$frostlang$frostc$Type* $tmp1300 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
*(&local24) = $tmp1299;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
goto block36;
block37:;
// line 1
// line 408
org$frostlang$frostc$Type* $tmp1301 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
org$frostlang$frostc$Type* $tmp1302 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
*(&local24) = $tmp1301;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
goto block36;
block36:;
// line 410
org$frostlang$frostc$IR$Value* $tmp1303 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1304 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp1305 = *(&local24);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1303, $tmp1304, $tmp1305);
frost$collections$Array* $tmp1306 = *(&local21);
org$frostlang$frostc$Compiler$TypeContext* $tmp1307 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1308 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1307, $tmp1308);
org$frostlang$frostc$IR$Value* $tmp1309 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1303, ((frost$collections$ListView*) $tmp1306), $tmp1307);
org$frostlang$frostc$MethodDecl* $tmp1310 = *(&local9);
org$frostlang$frostc$Type* $tmp1311 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp1310);
org$frostlang$frostc$IR$Value* $tmp1312 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1309, $tmp1311);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
org$frostlang$frostc$IR$Value* $tmp1313 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
*(&local25) = $tmp1312;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
// line 412
org$frostlang$frostc$IR$Value* $tmp1314 = *(&local25);
org$frostlang$frostc$IR$Value* $tmp1315 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1314, param6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
org$frostlang$frostc$IR$Value* $tmp1316 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1317 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1318 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1319 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1320 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
*(&local21) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1321 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp1322 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local12) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1323 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp1324 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp1325 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1326 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1327 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1328 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1315;

}
void org$frostlang$frostc$expression$Closure$init(org$frostlang$frostc$expression$Closure* param0) {

return;

}
void org$frostlang$frostc$expression$Closure$cleanup(org$frostlang$frostc$expression$Closure* param0) {

// line 23
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

