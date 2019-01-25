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
#include "org/frostlang/frostc/Compiler/Message.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Map.h"
#include "org/frostlang/frostc/expression/Call.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Closure$class_type org$frostlang$frostc$expression$Closure$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Closure$cleanup} };

typedef frost$collections$Iterator* (*$fn69)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn73)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn78)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn112)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn158)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn162)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn167)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn318)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn322)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn327)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn424)(frost$core$Object*);
typedef frost$core$Int64 (*$fn465)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn488)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn717)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn740)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn843)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn860)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn864)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn869)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn962)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn966)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1014)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1018)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1023)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1086)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1147)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn1161)(frost$collections$MapView*);
typedef frost$collections$Array* (*$fn1165)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1176)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn1180)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1185)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65", 39, 4048859009194802747, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6e\x6f\x6e\x2d\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x20\x6f\x77\x6e\x65\x72\x20\x66\x6f\x72\x20", 27, -299203061613670049, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65", 9, 1602056911729632975, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s698 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x54\x79\x70\x65\x64\x4c\x61\x6d\x62\x64\x61\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x72\x61\x77\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x65\x78\x70\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 362, -1348589147382285979, NULL };
static frost$core$String $s728 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static frost$core$String $s730 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x6c\x61\x6d\x62\x64\x61\x20\x77\x69\x74\x68\x20\x77\x72\x6f\x6e\x67\x20", 31, -8865909723025372911, NULL };
static frost$core$String $s732 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 20, 4248843021992149759, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s852 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x65\x72\x72\x6f\x72", 12, -6960542561056411676, NULL };
static frost$core$String $s875 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x77\x68\x65\x6e\x20\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x64\x20\x61\x73\x20\x27", 26, 7783089566661782278, NULL };
static frost$core$String $s877 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a", 2, 14198, NULL };
static frost$core$String $s894 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x72\x65\x63\x65\x69\x76\x65\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 51, 8939304453205542054, NULL };
static frost$core$String $s896 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20", 6, 1410335929809, NULL };
static frost$core$String $s899 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x20", 5, 22706926183, NULL };
static frost$core$String $s901 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s903 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, 1205436084705178767, NULL };
static frost$core$String $s928 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s943 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, 1205436084705178767, NULL };
static frost$core$String $s945 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s971 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x74\x79\x70\x65\x20\x77\x61\x73\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x61\x6e\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x63\x6f\x6e\x74\x65\x78\x74", 67, -43704296328153041, NULL };
static frost$core$String $s992 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s993 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x55\x6e\x74\x79\x70\x65\x64\x4c\x61\x6d\x62\x64\x61\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x72\x61\x77\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x65\x78\x70\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 364, 1431056255726371020, NULL };
static frost$core$String $s1006 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 10, 3323213258965972710, NULL };
static frost$core$String $s1008 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1063 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1089 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static frost$core$String $s1221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };

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
frost$core$Int64 $tmp109 = (frost$core$Int64) {60};
org$frostlang$frostc$Compiler$Capture* $tmp110 = *(&local2);
$fn112 $tmp111 = ($fn112) ((frost$core$Object*) $tmp110)->$class->vtable[0];
frost$core$String* $tmp113 = $tmp111(((frost$core$Object*) $tmp110));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s114, $tmp109, $tmp113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
abort(); // unreachable
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp79);
org$frostlang$frostc$Compiler$Capture* $tmp115 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
goto block2;
block2:;
// line 65
org$frostlang$frostc$ClassDecl* $tmp116 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$collections$Stack** $tmp117 = &param0->currentClass;
frost$collections$Stack* $tmp118 = *$tmp117;
frost$core$Int64 $tmp119 = (frost$core$Int64) {0};
frost$core$Object* $tmp120 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp118, $tmp119);
frost$io$File** $tmp121 = &((org$frostlang$frostc$ClassDecl*) $tmp120)->source;
frost$io$File* $tmp122 = *$tmp121;
org$frostlang$frostc$Position $tmp123 = *(&local0);
frost$collections$HashMap* $tmp124 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp124);
org$frostlang$frostc$Annotations* $tmp125 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp126 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp125, $tmp126);
frost$core$Int64 $tmp127 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp128 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp127);
frost$collections$Stack** $tmp129 = &param0->currentClass;
frost$collections$Stack* $tmp130 = *$tmp129;
frost$core$Int64 $tmp131 = (frost$core$Int64) {0};
frost$core$Object* $tmp132 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp130, $tmp131);
frost$core$String** $tmp133 = &((org$frostlang$frostc$ClassDecl*) $tmp132)->name;
frost$core$String* $tmp134 = *$tmp133;
frost$core$String* $tmp135 = frost$core$String$get_asString$R$frost$core$String($tmp134);
frost$core$String* $tmp136 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp135, &$s137);
frost$core$Int64* $tmp138 = &param0->closureCount;
frost$core$Int64 $tmp139 = *$tmp138;
frost$core$Int64$wrapper* $tmp140;
$tmp140 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp140->value = $tmp139;
frost$core$String* $tmp141 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp136, ((frost$core$Object*) $tmp140));
frost$core$String* $tmp142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp141, &$s143);
frost$collections$Array* $tmp144 = *(&local1);
frost$collections$Array* $tmp145 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp145);
org$frostlang$frostc$SymbolTable** $tmp146 = &param0->root;
org$frostlang$frostc$SymbolTable* $tmp147 = *$tmp146;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp116, $tmp122, $tmp123, ((frost$collections$MapView*) $tmp124), ((frost$core$String*) NULL), $tmp125, $tmp128, $tmp142, ((frost$collections$ListView*) $tmp144), $tmp145, $tmp147);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
org$frostlang$frostc$ClassDecl* $tmp148 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local4) = $tmp116;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q($tmp132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
frost$core$Frost$unref$frost$core$Object$Q($tmp120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
// line 69
org$frostlang$frostc$ClassDecl* $tmp149 = *(&local4);
frost$core$Bit $tmp150 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp151 = &$tmp149->external;
*$tmp151 = $tmp150;
// line 72
frost$collections$Array* $tmp152 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp152);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$collections$Array* $tmp153 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
*(&local5) = $tmp152;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// line 73
frost$collections$Array* $tmp154 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp154);
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$collections$Array* $tmp155 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local6) = $tmp154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
// line 74
ITable* $tmp156 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp156->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp156 = $tmp156->next;
}
$fn158 $tmp157 = $tmp156->methods[0];
frost$collections$Iterator* $tmp159 = $tmp157(((frost$collections$Iterable*) param2));
goto block15;
block15:;
ITable* $tmp160 = $tmp159->$class->itable;
while ($tmp160->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp160 = $tmp160->next;
}
$fn162 $tmp161 = $tmp160->methods[0];
frost$core$Bit $tmp163 = $tmp161($tmp159);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block17; else goto block16;
block16:;
*(&local7) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp165 = $tmp159->$class->itable;
while ($tmp165->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp165 = $tmp165->next;
}
$fn167 $tmp166 = $tmp165->methods[1];
frost$core$Object* $tmp168 = $tmp166($tmp159);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp168)));
org$frostlang$frostc$Compiler$Capture* $tmp169 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
*(&local7) = ((org$frostlang$frostc$Compiler$Capture*) $tmp168);
// line 75
org$frostlang$frostc$Compiler$Capture* $tmp170 = *(&local7);
frost$core$Int64* $tmp171 = &$tmp170->$rawValue;
frost$core$Int64 $tmp172 = *$tmp171;
frost$core$Int64 $tmp173 = (frost$core$Int64) {0};
frost$core$Bit $tmp174 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp172, $tmp173);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block19; else goto block20;
block19:;
org$frostlang$frostc$Variable** $tmp176 = (org$frostlang$frostc$Variable**) ($tmp170->$data + 0);
org$frostlang$frostc$Variable* $tmp177 = *$tmp176;
*(&local8) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
org$frostlang$frostc$Variable* $tmp178 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local8) = $tmp177;
// line 77
frost$collections$Array* $tmp179 = *(&local6);
org$frostlang$frostc$MethodDecl$Parameter* $tmp180 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$Variable* $tmp181 = *(&local8);
frost$core$String** $tmp182 = &((org$frostlang$frostc$Symbol*) $tmp181)->name;
frost$core$String* $tmp183 = *$tmp182;
org$frostlang$frostc$Variable* $tmp184 = *(&local8);
org$frostlang$frostc$Type** $tmp185 = &$tmp184->type;
org$frostlang$frostc$Type* $tmp186 = *$tmp185;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp180, $tmp183, $tmp186);
frost$collections$Array$add$frost$collections$Array$T($tmp179, ((frost$core$Object*) $tmp180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
// line 79
frost$collections$Array* $tmp187 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp188 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp189 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp190 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp191 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp192 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp193 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp194 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp195 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp196 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp194, $tmp195, $tmp196, &$s197);
org$frostlang$frostc$Variable* $tmp198 = *(&local8);
frost$core$String** $tmp199 = &((org$frostlang$frostc$Symbol*) $tmp198)->name;
frost$core$String* $tmp200 = *$tmp199;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp191, $tmp192, $tmp193, $tmp194, $tmp200);
frost$core$Int64 $tmp201 = (frost$core$Int64) {24};
org$frostlang$frostc$expression$Binary$Operator $tmp202 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp201);
org$frostlang$frostc$ASTNode* $tmp203 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp204 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp205 = *(&local0);
org$frostlang$frostc$Variable* $tmp206 = *(&local8);
frost$core$String** $tmp207 = &((org$frostlang$frostc$Symbol*) $tmp206)->name;
frost$core$String* $tmp208 = *$tmp207;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp203, $tmp204, $tmp205, $tmp208);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp188, $tmp189, $tmp190, $tmp191, $tmp202, $tmp203);
frost$collections$Array$add$frost$collections$Array$T($tmp187, ((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
org$frostlang$frostc$Variable* $tmp209 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local8) = ((org$frostlang$frostc$Variable*) NULL);
goto block18;
block20:;
frost$core$Int64 $tmp210 = (frost$core$Int64) {1};
frost$core$Bit $tmp211 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp172, $tmp210);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block21; else goto block22;
block21:;
org$frostlang$frostc$FieldDecl** $tmp213 = (org$frostlang$frostc$FieldDecl**) ($tmp170->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp214 = *$tmp213;
*(&local9) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
org$frostlang$frostc$FieldDecl* $tmp215 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local9) = $tmp214;
// line 84
frost$collections$Array* $tmp216 = *(&local6);
org$frostlang$frostc$MethodDecl$Parameter* $tmp217 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$FieldDecl* $tmp218 = *(&local9);
frost$core$String** $tmp219 = &((org$frostlang$frostc$Symbol*) $tmp218)->name;
frost$core$String* $tmp220 = *$tmp219;
org$frostlang$frostc$FieldDecl* $tmp221 = *(&local9);
org$frostlang$frostc$Type** $tmp222 = &$tmp221->type;
org$frostlang$frostc$Type* $tmp223 = *$tmp222;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp217, $tmp220, $tmp223);
frost$collections$Array$add$frost$collections$Array$T($tmp216, ((frost$core$Object*) $tmp217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// line 86
frost$collections$Array* $tmp224 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp225 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp226 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp227 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp228 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp229 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp230 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp231 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp232 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp233 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp231, $tmp232, $tmp233, &$s234);
org$frostlang$frostc$FieldDecl* $tmp235 = *(&local9);
frost$core$String** $tmp236 = &((org$frostlang$frostc$Symbol*) $tmp235)->name;
frost$core$String* $tmp237 = *$tmp236;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp228, $tmp229, $tmp230, $tmp231, $tmp237);
frost$core$Int64 $tmp238 = (frost$core$Int64) {24};
org$frostlang$frostc$expression$Binary$Operator $tmp239 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp238);
org$frostlang$frostc$ASTNode* $tmp240 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp241 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp242 = *(&local0);
org$frostlang$frostc$FieldDecl* $tmp243 = *(&local9);
frost$core$String** $tmp244 = &((org$frostlang$frostc$Symbol*) $tmp243)->name;
frost$core$String* $tmp245 = *$tmp244;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp240, $tmp241, $tmp242, $tmp245);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp225, $tmp226, $tmp227, $tmp228, $tmp239, $tmp240);
frost$collections$Array$add$frost$collections$Array$T($tmp224, ((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
org$frostlang$frostc$FieldDecl* $tmp246 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local9) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block18;
block22:;
frost$core$Int64 $tmp247 = (frost$core$Int64) {2};
frost$core$Bit $tmp248 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp172, $tmp247);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block23; else goto block18;
block23:;
// line 91
frost$collections$Array* $tmp250 = *(&local6);
org$frostlang$frostc$MethodDecl$Parameter* $tmp251 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$Type* $tmp252 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp251, &$s253, $tmp252);
frost$collections$Array$add$frost$collections$Array$T($tmp250, ((frost$core$Object*) $tmp251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// line 94
frost$collections$Array* $tmp254 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp255 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp256 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp257 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp258 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp259 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp260 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp261 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp262 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp263 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp261, $tmp262, $tmp263, &$s264);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp258, $tmp259, $tmp260, $tmp261, &$s265);
frost$core$Int64 $tmp266 = (frost$core$Int64) {24};
org$frostlang$frostc$expression$Binary$Operator $tmp267 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp266);
org$frostlang$frostc$ASTNode* $tmp268 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp269 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp270 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp268, $tmp269, $tmp270, &$s271);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp255, $tmp256, $tmp257, $tmp258, $tmp267, $tmp268);
frost$collections$Array$add$frost$collections$Array$T($tmp254, ((frost$core$Object*) $tmp255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
goto block18;
block18:;
frost$core$Frost$unref$frost$core$Object$Q($tmp168);
org$frostlang$frostc$Compiler$Capture* $tmp272 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local7) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block15;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
// line 102
org$frostlang$frostc$MethodDecl* $tmp273 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp274 = *(&local4);
org$frostlang$frostc$Position $tmp275 = *(&local0);
org$frostlang$frostc$Annotations* $tmp276 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp277 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp276, $tmp277);
frost$core$Int64 $tmp278 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp279 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp278);
frost$collections$Array* $tmp280 = *(&local6);
org$frostlang$frostc$Type* $tmp281 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$collections$Array* $tmp282 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp283 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp282);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp273, $tmp274, $tmp275, ((frost$core$String*) NULL), $tmp276, $tmp279, &$s284, ((frost$collections$Array*) NULL), $tmp280, $tmp281, $tmp283);
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
org$frostlang$frostc$MethodDecl* $tmp285 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
*(&local10) = $tmp273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// line 106
org$frostlang$frostc$ClassDecl* $tmp286 = *(&local4);
frost$collections$Array** $tmp287 = &$tmp286->methods;
frost$collections$Array* $tmp288 = *$tmp287;
org$frostlang$frostc$MethodDecl* $tmp289 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp288, ((frost$core$Object*) $tmp289));
// line 107
org$frostlang$frostc$ClassDecl* $tmp290 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp291 = &$tmp290->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp292 = *$tmp291;
org$frostlang$frostc$MethodDecl* $tmp293 = *(&local10);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp292, ((org$frostlang$frostc$Symbol*) $tmp293));
// line 110
org$frostlang$frostc$MethodDecl* $tmp294 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp295 = *(&local4);
org$frostlang$frostc$Position $tmp296 = *(&local0);
org$frostlang$frostc$Annotations* $tmp297 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp298 = (frost$core$Int64) {32};
frost$core$Int64 $tmp299 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp300 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp298, $tmp299);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp297, $tmp300);
frost$core$Int64 $tmp301 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp302 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp301);
frost$collections$Array* $tmp303 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp303);
org$frostlang$frostc$Type* $tmp304 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp305 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp305);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp294, $tmp295, $tmp296, ((frost$core$String*) NULL), $tmp297, $tmp302, &$s306, ((frost$collections$Array*) NULL), $tmp303, $tmp304, $tmp305);
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
org$frostlang$frostc$MethodDecl* $tmp307 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local11) = $tmp294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
// line 114
org$frostlang$frostc$ClassDecl* $tmp308 = *(&local4);
frost$collections$Array** $tmp309 = &$tmp308->methods;
frost$collections$Array* $tmp310 = *$tmp309;
org$frostlang$frostc$MethodDecl* $tmp311 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp310, ((frost$core$Object*) $tmp311));
// line 115
org$frostlang$frostc$ClassDecl* $tmp312 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp313 = &$tmp312->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp314 = *$tmp313;
org$frostlang$frostc$MethodDecl* $tmp315 = *(&local11);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp314, ((org$frostlang$frostc$Symbol*) $tmp315));
// line 118
ITable* $tmp316 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp316->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp316 = $tmp316->next;
}
$fn318 $tmp317 = $tmp316->methods[0];
frost$collections$Iterator* $tmp319 = $tmp317(((frost$collections$Iterable*) param2));
goto block24;
block24:;
ITable* $tmp320 = $tmp319->$class->itable;
while ($tmp320->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp320 = $tmp320->next;
}
$fn322 $tmp321 = $tmp320->methods[0];
frost$core$Bit $tmp323 = $tmp321($tmp319);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block26; else goto block25;
block25:;
*(&local12) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp325 = $tmp319->$class->itable;
while ($tmp325->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp325 = $tmp325->next;
}
$fn327 $tmp326 = $tmp325->methods[1];
frost$core$Object* $tmp328 = $tmp326($tmp319);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp328)));
org$frostlang$frostc$Compiler$Capture* $tmp329 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
*(&local12) = ((org$frostlang$frostc$Compiler$Capture*) $tmp328);
// line 119
org$frostlang$frostc$Compiler$Capture* $tmp330 = *(&local12);
frost$core$Int64* $tmp331 = &$tmp330->$rawValue;
frost$core$Int64 $tmp332 = *$tmp331;
frost$core$Int64 $tmp333 = (frost$core$Int64) {0};
frost$core$Bit $tmp334 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp332, $tmp333);
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Variable** $tmp336 = (org$frostlang$frostc$Variable**) ($tmp330->$data + 0);
org$frostlang$frostc$Variable* $tmp337 = *$tmp336;
*(&local13) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
org$frostlang$frostc$Variable* $tmp338 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
*(&local13) = $tmp337;
// line 121
org$frostlang$frostc$FieldDecl* $tmp339 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp340 = *(&local4);
org$frostlang$frostc$Position $tmp341 = *(&local0);
org$frostlang$frostc$Annotations* $tmp342 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp343 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp344 = (frost$core$Int64) {65536};
frost$core$Int64 $tmp345 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp343, $tmp344);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp342, $tmp345);
frost$core$Int64 $tmp346 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp347 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp346);
org$frostlang$frostc$Variable* $tmp348 = *(&local13);
frost$core$String** $tmp349 = &((org$frostlang$frostc$Symbol*) $tmp348)->name;
frost$core$String* $tmp350 = *$tmp349;
org$frostlang$frostc$Variable* $tmp351 = *(&local13);
org$frostlang$frostc$Type** $tmp352 = &$tmp351->type;
org$frostlang$frostc$Type* $tmp353 = *$tmp352;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp339, $tmp340, $tmp341, ((frost$core$String*) NULL), $tmp342, $tmp347, $tmp350, $tmp353, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
org$frostlang$frostc$FieldDecl* $tmp354 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local14) = $tmp339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
// line 124
org$frostlang$frostc$ClassDecl* $tmp355 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp356 = &$tmp355->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp357 = *$tmp356;
org$frostlang$frostc$FieldDecl* $tmp358 = *(&local14);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp357, ((org$frostlang$frostc$Symbol*) $tmp358));
// line 125
org$frostlang$frostc$ClassDecl* $tmp359 = *(&local4);
frost$collections$Array** $tmp360 = &$tmp359->fields;
frost$collections$Array* $tmp361 = *$tmp360;
org$frostlang$frostc$FieldDecl* $tmp362 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp361, ((frost$core$Object*) $tmp362));
org$frostlang$frostc$FieldDecl* $tmp363 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Variable* $tmp364 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local13) = ((org$frostlang$frostc$Variable*) NULL);
goto block27;
block29:;
frost$core$Int64 $tmp365 = (frost$core$Int64) {1};
frost$core$Bit $tmp366 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp332, $tmp365);
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block30; else goto block31;
block30:;
org$frostlang$frostc$FieldDecl** $tmp368 = (org$frostlang$frostc$FieldDecl**) ($tmp330->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp369 = *$tmp368;
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
org$frostlang$frostc$FieldDecl* $tmp370 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local15) = $tmp369;
// line 128
org$frostlang$frostc$FieldDecl* $tmp371 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp372 = *(&local4);
org$frostlang$frostc$Position $tmp373 = *(&local0);
org$frostlang$frostc$Annotations* $tmp374 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp375 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp376 = (frost$core$Int64) {65536};
frost$core$Int64 $tmp377 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp375, $tmp376);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp374, $tmp377);
frost$core$Int64 $tmp378 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp379 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp378);
org$frostlang$frostc$FieldDecl* $tmp380 = *(&local15);
frost$core$String** $tmp381 = &((org$frostlang$frostc$Symbol*) $tmp380)->name;
frost$core$String* $tmp382 = *$tmp381;
org$frostlang$frostc$FieldDecl* $tmp383 = *(&local15);
org$frostlang$frostc$Type** $tmp384 = &$tmp383->type;
org$frostlang$frostc$Type* $tmp385 = *$tmp384;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp371, $tmp372, $tmp373, ((frost$core$String*) NULL), $tmp374, $tmp379, $tmp382, $tmp385, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
org$frostlang$frostc$FieldDecl* $tmp386 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
*(&local16) = $tmp371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
// line 131
org$frostlang$frostc$ClassDecl* $tmp387 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp388 = &$tmp387->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp389 = *$tmp388;
org$frostlang$frostc$FieldDecl* $tmp390 = *(&local16);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp389, ((org$frostlang$frostc$Symbol*) $tmp390));
// line 132
org$frostlang$frostc$ClassDecl* $tmp391 = *(&local4);
frost$collections$Array** $tmp392 = &$tmp391->fields;
frost$collections$Array* $tmp393 = *$tmp392;
org$frostlang$frostc$FieldDecl* $tmp394 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp393, ((frost$core$Object*) $tmp394));
org$frostlang$frostc$FieldDecl* $tmp395 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp396 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block27;
block31:;
frost$core$Int64 $tmp397 = (frost$core$Int64) {2};
frost$core$Bit $tmp398 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp332, $tmp397);
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block32; else goto block33;
block32:;
// line 135
org$frostlang$frostc$FieldDecl* $tmp400 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp401 = *(&local4);
org$frostlang$frostc$Position $tmp402 = *(&local0);
org$frostlang$frostc$Annotations* $tmp403 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp404 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp405 = (frost$core$Int64) {65536};
frost$core$Int64 $tmp406 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp404, $tmp405);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp403, $tmp406);
frost$core$Int64 $tmp407 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp408 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp407);
org$frostlang$frostc$Type* $tmp409 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp400, $tmp401, $tmp402, ((frost$core$String*) NULL), $tmp403, $tmp408, &$s410, $tmp409, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local17) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
org$frostlang$frostc$FieldDecl* $tmp411 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local17) = $tmp400;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
// line 139
org$frostlang$frostc$ClassDecl* $tmp412 = *(&local4);
org$frostlang$frostc$SymbolTable** $tmp413 = &$tmp412->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp414 = *$tmp413;
org$frostlang$frostc$FieldDecl* $tmp415 = *(&local17);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp414, ((org$frostlang$frostc$Symbol*) $tmp415));
// line 140
org$frostlang$frostc$ClassDecl* $tmp416 = *(&local4);
frost$collections$Array** $tmp417 = &$tmp416->fields;
frost$collections$Array* $tmp418 = *$tmp417;
org$frostlang$frostc$FieldDecl* $tmp419 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp418, ((frost$core$Object*) $tmp419));
org$frostlang$frostc$FieldDecl* $tmp420 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
*(&local17) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block27;
block33:;
// line 143
frost$core$Int64 $tmp421 = (frost$core$Int64) {143};
org$frostlang$frostc$Compiler$Capture* $tmp422 = *(&local12);
$fn424 $tmp423 = ($fn424) ((frost$core$Object*) $tmp422)->$class->vtable[0];
frost$core$String* $tmp425 = $tmp423(((frost$core$Object*) $tmp422));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s426, $tmp421, $tmp425);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
abort(); // unreachable
block27:;
frost$core$Frost$unref$frost$core$Object$Q($tmp328);
org$frostlang$frostc$Compiler$Capture* $tmp427 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local12) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block24;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
// line 147
org$frostlang$frostc$ClassDecl* $tmp428 = *(&local4);
frost$core$Weak* $tmp429 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp429, ((frost$core$Object*) $tmp428));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$core$Weak** $tmp430 = &param1->owner;
frost$core$Weak* $tmp431 = *$tmp430;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$core$Weak** $tmp432 = &param1->owner;
*$tmp432 = $tmp429;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
// line 148
org$frostlang$frostc$ClassDecl* $tmp433 = *(&local4);
frost$collections$Array** $tmp434 = &$tmp433->methods;
frost$collections$Array* $tmp435 = *$tmp434;
frost$collections$Array$add$frost$collections$Array$T($tmp435, ((frost$core$Object*) param1));
// line 149
frost$collections$HashMap** $tmp436 = &param0->classes;
frost$collections$HashMap* $tmp437 = *$tmp436;
org$frostlang$frostc$ClassDecl* $tmp438 = *(&local4);
frost$core$String** $tmp439 = &$tmp438->name;
frost$core$String* $tmp440 = *$tmp439;
org$frostlang$frostc$ClassDecl* $tmp441 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp437, ((frost$collections$Key*) $tmp440), ((frost$core$Object*) $tmp441));
// line 150
org$frostlang$frostc$ClassDecl* $tmp442 = *(&local4);
frost$collections$Stack** $tmp443 = &param0->currentClass;
frost$collections$Stack* $tmp444 = *$tmp443;
frost$core$Int64 $tmp445 = (frost$core$Int64) {0};
frost$core$Object* $tmp446 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp444, $tmp445);
frost$core$Weak* $tmp447 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp447, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp446)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$Weak** $tmp448 = &$tmp442->owner;
frost$core$Weak* $tmp449 = *$tmp448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Weak** $tmp450 = &$tmp442->owner;
*$tmp450 = $tmp447;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$Frost$unref$frost$core$Object$Q($tmp446);
// line 151
org$frostlang$frostc$ClassDecl* $tmp451 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
org$frostlang$frostc$MethodDecl* $tmp452 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp453 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$collections$Array* $tmp454 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local6) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp455 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp456 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp457 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp451;

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
org$frostlang$frostc$Compiler$AutoScope* $tmp458 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp458, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
org$frostlang$frostc$Compiler$AutoScope* $tmp459 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local0) = $tmp458;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
// line 158
frost$collections$Array* $tmp460 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp460);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$collections$Array* $tmp461 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local1) = $tmp460;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
// line 159
frost$core$Int64 $tmp462 = (frost$core$Int64) {0};
ITable* $tmp463 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp463->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp463 = $tmp463->next;
}
$fn465 $tmp464 = $tmp463->methods[0];
frost$core$Int64 $tmp466 = $tmp464(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp467 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp468 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp462, $tmp466, $tmp467);
frost$core$Int64 $tmp469 = $tmp468.min;
*(&local2) = $tmp469;
frost$core$Int64 $tmp470 = $tmp468.max;
frost$core$Bit $tmp471 = $tmp468.inclusive;
bool $tmp472 = $tmp471.value;
frost$core$Int64 $tmp473 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp474 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp473);
if ($tmp472) goto block4; else goto block5;
block4:;
int64_t $tmp475 = $tmp469.value;
int64_t $tmp476 = $tmp470.value;
bool $tmp477 = $tmp475 <= $tmp476;
frost$core$Bit $tmp478 = (frost$core$Bit) {$tmp477};
bool $tmp479 = $tmp478.value;
if ($tmp479) goto block1; else goto block2;
block5:;
int64_t $tmp480 = $tmp469.value;
int64_t $tmp481 = $tmp470.value;
bool $tmp482 = $tmp480 < $tmp481;
frost$core$Bit $tmp483 = (frost$core$Bit) {$tmp482};
bool $tmp484 = $tmp483.value;
if ($tmp484) goto block1; else goto block2;
block1:;
// line 160
frost$core$Int64 $tmp485 = *(&local2);
ITable* $tmp486 = param1->$class->itable;
while ($tmp486->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp486 = $tmp486->next;
}
$fn488 $tmp487 = $tmp486->methods[0];
frost$core$Object* $tmp489 = $tmp487(param1, $tmp485);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp489)));
org$frostlang$frostc$ASTNode* $tmp490 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp489);
frost$core$Frost$unref$frost$core$Object$Q($tmp489);
// line 161
org$frostlang$frostc$ASTNode* $tmp491 = *(&local3);
frost$core$Int64* $tmp492 = &$tmp491->$rawValue;
frost$core$Int64 $tmp493 = *$tmp492;
frost$core$Int64 $tmp494 = (frost$core$Int64) {34};
frost$core$Bit $tmp495 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp493, $tmp494);
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block7; else goto block6;
block7:;
org$frostlang$frostc$Position* $tmp497 = (org$frostlang$frostc$Position*) ($tmp491->$data + 0);
org$frostlang$frostc$Position $tmp498 = *$tmp497;
*(&local4) = $tmp498;
frost$core$String** $tmp499 = (frost$core$String**) ($tmp491->$data + 16);
frost$core$String* $tmp500 = *$tmp499;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
frost$core$String* $tmp501 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local5) = $tmp500;
org$frostlang$frostc$ASTNode** $tmp502 = (org$frostlang$frostc$ASTNode**) ($tmp491->$data + 24);
org$frostlang$frostc$ASTNode* $tmp503 = *$tmp502;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
org$frostlang$frostc$ASTNode* $tmp504 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local6) = $tmp503;
// line 163
org$frostlang$frostc$Scanner** $tmp505 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp506 = *$tmp505;
org$frostlang$frostc$ASTNode* $tmp507 = *(&local6);
org$frostlang$frostc$Type* $tmp508 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp506, $tmp507);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
org$frostlang$frostc$Type* $tmp509 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local7) = $tmp508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
// line 164
org$frostlang$frostc$Type* $tmp510 = *(&local7);
frost$core$Bit $tmp511 = frost$core$Bit$init$builtin_bit($tmp510 == NULL);
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block8; else goto block9;
block8:;
// line 165
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp513 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp514 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp515 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp516 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp517 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp518 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block9:;
// line 167
org$frostlang$frostc$Type* $tmp519 = *(&local7);
org$frostlang$frostc$Type* $tmp520 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp519);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
org$frostlang$frostc$Type* $tmp521 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
*(&local7) = $tmp520;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
// line 168
org$frostlang$frostc$Type* $tmp522 = *(&local7);
frost$core$Bit $tmp523 = frost$core$Bit$init$builtin_bit($tmp522 == NULL);
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block10; else goto block11;
block10:;
// line 169
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp525 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp526 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp527 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp528 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp529 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp530 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block11:;
// line 171
frost$collections$Array* $tmp531 = *(&local1);
org$frostlang$frostc$Type* $tmp532 = *(&local7);
frost$collections$Array$add$frost$collections$Array$T($tmp531, ((frost$core$Object*) $tmp532));
// line 172
org$frostlang$frostc$SymbolTable** $tmp533 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp534 = *$tmp533;
org$frostlang$frostc$Variable* $tmp535 = (org$frostlang$frostc$Variable*) frostObjectAlloc(88, (frost$core$Class*) &org$frostlang$frostc$Variable$class);
org$frostlang$frostc$Position $tmp536 = *(&local4);
frost$core$Int64 $tmp537 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp538 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp537);
frost$core$String* $tmp539 = *(&local5);
org$frostlang$frostc$Type* $tmp540 = *(&local7);
org$frostlang$frostc$Variable$Storage* $tmp541 = (org$frostlang$frostc$Variable$Storage*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Variable$Storage$class);
frost$core$Int64 $tmp542 = (frost$core$Int64) {1};
frost$core$Int64 $tmp543 = (frost$core$Int64) {18446744073709551615};
org$frostlang$frostc$Variable$Storage$init$frost$core$Int64$frost$core$Int64($tmp541, $tmp542, $tmp543);
org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage($tmp535, $tmp536, $tmp538, $tmp539, $tmp540, $tmp541);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp534, ((org$frostlang$frostc$Symbol*) $tmp535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
org$frostlang$frostc$Type* $tmp544 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp545 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp546 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local5) = ((frost$core$String*) NULL);
goto block6;
block6:;
org$frostlang$frostc$ASTNode* $tmp547 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp548 = *(&local2);
int64_t $tmp549 = $tmp470.value;
int64_t $tmp550 = $tmp548.value;
int64_t $tmp551 = $tmp549 - $tmp550;
frost$core$Int64 $tmp552 = (frost$core$Int64) {$tmp551};
frost$core$UInt64 $tmp553 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp552);
if ($tmp472) goto block13; else goto block14;
block13:;
uint64_t $tmp554 = $tmp553.value;
uint64_t $tmp555 = $tmp474.value;
bool $tmp556 = $tmp554 >= $tmp555;
frost$core$Bit $tmp557 = (frost$core$Bit) {$tmp556};
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block12; else goto block2;
block14:;
uint64_t $tmp559 = $tmp553.value;
uint64_t $tmp560 = $tmp474.value;
bool $tmp561 = $tmp559 > $tmp560;
frost$core$Bit $tmp562 = (frost$core$Bit) {$tmp561};
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block12; else goto block2;
block12:;
int64_t $tmp564 = $tmp548.value;
int64_t $tmp565 = $tmp473.value;
int64_t $tmp566 = $tmp564 + $tmp565;
frost$core$Int64 $tmp567 = (frost$core$Int64) {$tmp566};
*(&local2) = $tmp567;
goto block1;
block2:;
// line 177
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 178
frost$core$Int64* $tmp568 = &param3->$rawValue;
frost$core$Int64 $tmp569 = *$tmp568;
frost$core$Int64 $tmp570 = (frost$core$Int64) {3};
frost$core$Bit $tmp571 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp569, $tmp570);
bool $tmp572 = $tmp571.value;
if ($tmp572) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Type** $tmp573 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp574 = *$tmp573;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
org$frostlang$frostc$Type* $tmp575 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
*(&local9) = $tmp574;
frost$core$Bit* $tmp576 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp577 = *$tmp576;
// line 180
org$frostlang$frostc$Type* $tmp578 = *(&local9);
org$frostlang$frostc$Type* $tmp579 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp578);
frost$core$Bit $tmp580 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp579);
bool $tmp581 = $tmp580.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
if ($tmp581) goto block18; else goto block19;
block18:;
// line 181
org$frostlang$frostc$Type* $tmp582 = *(&local9);
org$frostlang$frostc$Type* $tmp583 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp582);
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
org$frostlang$frostc$Type* $tmp584 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local10) = $tmp583;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
// line 185
frost$collections$HashMap** $tmp585 = &param0->binaryTypes;
frost$collections$HashMap* $tmp586 = *$tmp585;
*(&local11) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$collections$HashMap* $tmp587 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
*(&local11) = $tmp586;
// line 186
frost$collections$HashMap* $tmp588 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp588);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
frost$collections$HashMap** $tmp589 = &param0->binaryTypes;
frost$collections$HashMap* $tmp590 = *$tmp589;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
frost$collections$HashMap** $tmp591 = &param0->binaryTypes;
*$tmp591 = $tmp588;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
// line 187
org$frostlang$frostc$Type* $tmp592 = *(&local10);
org$frostlang$frostc$Pair* $tmp593 = org$frostlang$frostc$Compiler$computeCoercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, param2, $tmp592);
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
org$frostlang$frostc$Pair* $tmp594 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
*(&local12) = $tmp593;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
// line 188
frost$collections$HashMap* $tmp595 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$collections$HashMap** $tmp596 = &param0->binaryTypes;
frost$collections$HashMap* $tmp597 = *$tmp596;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
frost$collections$HashMap** $tmp598 = &param0->binaryTypes;
*$tmp598 = $tmp595;
// line 189
org$frostlang$frostc$Pair* $tmp599 = *(&local12);
frost$core$Bit $tmp600 = frost$core$Bit$init$builtin_bit($tmp599 == NULL);
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block20; else goto block21;
block20:;
// line 190
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Pair* $tmp602 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp603 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
*(&local11) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp604 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp605 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp606 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp607 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp608 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block21:;
// line 192
org$frostlang$frostc$Pair* $tmp609 = *(&local12);
frost$core$Object** $tmp610 = &$tmp609->first;
frost$core$Object* $tmp611 = *$tmp610;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp611)));
org$frostlang$frostc$Type* $tmp612 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local8) = ((org$frostlang$frostc$Type*) $tmp611);
org$frostlang$frostc$Pair* $tmp613 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp614 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local11) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp615 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block19;
block19:;
org$frostlang$frostc$Type* $tmp616 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block15;
block17:;
// line 196
org$frostlang$frostc$Type* $tmp617 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
org$frostlang$frostc$Type* $tmp618 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
*(&local8) = $tmp617;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
goto block15;
block15:;
// line 199
org$frostlang$frostc$Type* $tmp619 = *(&local8);
frost$core$Bit $tmp620 = frost$core$Bit$init$builtin_bit($tmp619 == NULL);
bool $tmp621 = $tmp620.value;
if ($tmp621) goto block22; else goto block23;
block22:;
// line 200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp622 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp623 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp624 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block23:;
// line 202
org$frostlang$frostc$Position $tmp625 = org$frostlang$frostc$Position$init();
frost$core$Int64 $tmp626 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp627 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp626);
frost$collections$Array* $tmp628 = *(&local1);
org$frostlang$frostc$Type* $tmp629 = *(&local8);
frost$core$Int64 $tmp630 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp631 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp625, $tmp627, ((frost$collections$ListView*) $tmp628), $tmp629, $tmp630);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
org$frostlang$frostc$Type* $tmp632 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp633 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp634 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return $tmp631;

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
org$frostlang$frostc$Type* $tmp635 = org$frostlang$frostc$expression$Closure$typedLambdaType$org$frostlang$frostc$Compiler$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Type$Q(param0, ((frost$collections$ListView*) param2), param3, param4);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
org$frostlang$frostc$Type* $tmp636 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
*(&local4) = $tmp635;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
// line 212
org$frostlang$frostc$Type* $tmp637 = *(&local4);
frost$core$Bit $tmp638 = frost$core$Bit$init$builtin_bit($tmp637 != NULL);
bool $tmp639 = $tmp638.value;
if ($tmp639) goto block10; else goto block12;
block10:;
// line 213
org$frostlang$frostc$Type* $tmp640 = *(&local4);
org$frostlang$frostc$Type* $tmp641 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp640);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
org$frostlang$frostc$Type* $tmp642 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
*(&local3) = $tmp641;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
goto block11;
block12:;
// line 1
// line 218
org$frostlang$frostc$Type* $tmp643 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
org$frostlang$frostc$Type* $tmp644 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
*(&local3) = $tmp643;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
// line 219
frost$core$Int64* $tmp645 = &param4->$rawValue;
frost$core$Int64 $tmp646 = *$tmp645;
frost$core$Int64 $tmp647 = (frost$core$Int64) {3};
frost$core$Bit $tmp648 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp646, $tmp647);
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block14; else goto block13;
block14:;
org$frostlang$frostc$Type** $tmp650 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp651 = *$tmp650;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
org$frostlang$frostc$Type* $tmp652 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local5) = $tmp651;
frost$core$Bit* $tmp653 = (frost$core$Bit*) (param4->$data + 8);
frost$core$Bit $tmp654 = *$tmp653;
// line 221
org$frostlang$frostc$Type* $tmp655 = *(&local5);
org$frostlang$frostc$Type* $tmp656 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp655);
frost$core$Bit $tmp657 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp656);
bool $tmp658 = $tmp657.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
if ($tmp658) goto block15; else goto block16;
block15:;
// line 222
org$frostlang$frostc$Type* $tmp659 = *(&local5);
org$frostlang$frostc$Type* $tmp660 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp659);
org$frostlang$frostc$Type* $tmp661 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp660);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
org$frostlang$frostc$Type* $tmp662 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
*(&local3) = $tmp661;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
goto block16;
block16:;
org$frostlang$frostc$Type* $tmp663 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
goto block13;
block13:;
goto block11;
block11:;
// line 227
frost$core$Int64 $tmp664 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp665 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp664);
org$frostlang$frostc$ASTNode* $tmp666 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp667 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp668 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp669 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp670 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp668, $tmp669, $tmp670);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp666, $tmp667, param1, $tmp668);
frost$collections$Array* $tmp671 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp672 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp671, $tmp672);
org$frostlang$frostc$ASTNode* $tmp673 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp674 = (frost$core$Int64) {38};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp673, $tmp674, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp671, ((frost$core$Object*) $tmp673));
org$frostlang$frostc$IR$Value* $tmp675 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp665, param2, $tmp666, ((org$frostlang$frostc$FixedArray*) $tmp671), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
org$frostlang$frostc$Type* $tmp676 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp677 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = $tmp675;
goto block1;
block1:;
org$frostlang$frostc$IR$Value* $tmp678 = *(&local0);
frost$core$Bit $tmp679 = frost$core$Bit$init$builtin_bit($tmp678 != NULL);
bool $tmp680 = $tmp679.value;
if ($tmp680) goto block2; else goto block3;
block2:;
*(&local2) = $tmp679;
goto block4;
block3:;
frost$core$Int64* $tmp681 = &param0->errorCount;
frost$core$Int64 $tmp682 = *$tmp681;
frost$core$Int64 $tmp683 = (frost$core$Int64) {0};
int64_t $tmp684 = $tmp682.value;
int64_t $tmp685 = $tmp683.value;
bool $tmp686 = $tmp684 > $tmp685;
frost$core$Bit $tmp687 = (frost$core$Bit) {$tmp686};
*(&local2) = $tmp687;
goto block4;
block4:;
frost$core$Bit $tmp688 = *(&local2);
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block5; else goto block6;
block5:;
*(&local1) = $tmp688;
goto block7;
block6:;
frost$core$Bit* $tmp690 = &param0->reportErrors;
frost$core$Bit $tmp691 = *$tmp690;
frost$core$Bit $tmp692 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp691);
*(&local1) = $tmp692;
goto block7;
block7:;
frost$core$Bit $tmp693 = *(&local1);
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block8; else goto block9;
block8:;
org$frostlang$frostc$IR$Value* $tmp695 = *(&local0);
return $tmp695;
block9:;
frost$core$Int64 $tmp696 = (frost$core$Int64) {208};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s697, $tmp696, &$s698);
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
frost$core$String* local14 = NULL;
frost$core$String* local15 = NULL;
// line 236
frost$core$Int64* $tmp699 = &param4->$rawValue;
frost$core$Int64 $tmp700 = *$tmp699;
frost$core$Int64 $tmp701 = (frost$core$Int64) {3};
frost$core$Bit $tmp702 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp700, $tmp701);
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block11; else goto block10;
block11:;
org$frostlang$frostc$Type** $tmp704 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp705 = *$tmp704;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
org$frostlang$frostc$Type* $tmp706 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
*(&local3) = $tmp705;
frost$core$Bit* $tmp707 = (frost$core$Bit*) (param4->$data + 8);
frost$core$Bit $tmp708 = *$tmp707;
// line 238
org$frostlang$frostc$Type* $tmp709 = *(&local3);
org$frostlang$frostc$Type* $tmp710 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp709);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
org$frostlang$frostc$Type* $tmp711 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
*(&local4) = $tmp710;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
// line 239
org$frostlang$frostc$Type* $tmp712 = *(&local4);
frost$core$Bit $tmp713 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp712);
bool $tmp714 = $tmp713.value;
if ($tmp714) goto block12; else goto block13;
block12:;
// line 240
ITable* $tmp715 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp715->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp715 = $tmp715->next;
}
$fn717 $tmp716 = $tmp715->methods[0];
frost$core$Int64 $tmp718 = $tmp716(((frost$collections$CollectionView*) param2));
org$frostlang$frostc$Type* $tmp719 = *(&local4);
frost$core$Int64 $tmp720 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp719);
int64_t $tmp721 = $tmp718.value;
int64_t $tmp722 = $tmp720.value;
bool $tmp723 = $tmp721 != $tmp722;
frost$core$Bit $tmp724 = (frost$core$Bit) {$tmp723};
bool $tmp725 = $tmp724.value;
if ($tmp725) goto block14; else goto block15;
block14:;
// line 241
org$frostlang$frostc$Type* $tmp726 = *(&local3);
frost$core$String* $tmp727 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s728, ((frost$core$Object*) $tmp726));
frost$core$String* $tmp729 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp727, &$s730);
frost$core$String* $tmp731 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp729, &$s732);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp731);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
// line 243
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp733 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp734 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block15:;
// line 245
frost$collections$Array* $tmp735 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp735);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
frost$collections$Array* $tmp736 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local5) = $tmp735;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
// line 246
frost$core$Int64 $tmp737 = (frost$core$Int64) {0};
ITable* $tmp738 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp738->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp738 = $tmp738->next;
}
$fn740 $tmp739 = $tmp738->methods[0];
frost$core$Int64 $tmp741 = $tmp739(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp742 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp743 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp737, $tmp741, $tmp742);
frost$core$Int64 $tmp744 = $tmp743.min;
*(&local6) = $tmp744;
frost$core$Int64 $tmp745 = $tmp743.max;
frost$core$Bit $tmp746 = $tmp743.inclusive;
bool $tmp747 = $tmp746.value;
frost$core$Int64 $tmp748 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp749 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp748);
if ($tmp747) goto block19; else goto block20;
block19:;
int64_t $tmp750 = $tmp744.value;
int64_t $tmp751 = $tmp745.value;
bool $tmp752 = $tmp750 <= $tmp751;
frost$core$Bit $tmp753 = (frost$core$Bit) {$tmp752};
bool $tmp754 = $tmp753.value;
if ($tmp754) goto block16; else goto block17;
block20:;
int64_t $tmp755 = $tmp744.value;
int64_t $tmp756 = $tmp745.value;
bool $tmp757 = $tmp755 < $tmp756;
frost$core$Bit $tmp758 = (frost$core$Bit) {$tmp757};
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block16; else goto block17;
block16:;
// line 247
frost$core$Int64 $tmp760 = *(&local6);
frost$core$Object* $tmp761 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(param2, $tmp760);
frost$core$Int64* $tmp762 = &((org$frostlang$frostc$ASTNode*) $tmp761)->$rawValue;
frost$core$Int64 $tmp763 = *$tmp762;
frost$core$Int64 $tmp764 = (frost$core$Int64) {22};
frost$core$Bit $tmp765 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp763, $tmp764);
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp767 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$ASTNode*) $tmp761)->$data + 0);
org$frostlang$frostc$Position $tmp768 = *$tmp767;
*(&local7) = $tmp768;
frost$core$String** $tmp769 = (frost$core$String**) (((org$frostlang$frostc$ASTNode*) $tmp761)->$data + 16);
frost$core$String* $tmp770 = *$tmp769;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$String* $tmp771 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
*(&local8) = $tmp770;
// line 249
frost$collections$Array* $tmp772 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp773 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp774 = (frost$core$Int64) {34};
org$frostlang$frostc$Position $tmp775 = *(&local7);
frost$core$String* $tmp776 = *(&local8);
org$frostlang$frostc$ASTNode* $tmp777 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp778 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp779 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp780 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp781 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp782 = *(&local4);
frost$core$Int64 $tmp783 = *(&local6);
org$frostlang$frostc$Type* $tmp784 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp782, $tmp783);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp780, $tmp781, $tmp784);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp777, $tmp778, $tmp779, $tmp780);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp773, $tmp774, $tmp775, $tmp776, $tmp777);
frost$collections$Array$add$frost$collections$Array$T($tmp772, ((frost$core$Object*) $tmp773));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
frost$core$String* $tmp785 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
*(&local8) = ((frost$core$String*) NULL);
goto block21;
block23:;
// line 254
frost$core$Int64 $tmp786 = (frost$core$Int64) {254};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s787, $tmp786);
abort(); // unreachable
block21:;
frost$core$Frost$unref$frost$core$Object$Q($tmp761);
goto block18;
block18:;
frost$core$Int64 $tmp788 = *(&local6);
int64_t $tmp789 = $tmp745.value;
int64_t $tmp790 = $tmp788.value;
int64_t $tmp791 = $tmp789 - $tmp790;
frost$core$Int64 $tmp792 = (frost$core$Int64) {$tmp791};
frost$core$UInt64 $tmp793 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp792);
if ($tmp747) goto block25; else goto block26;
block25:;
uint64_t $tmp794 = $tmp793.value;
uint64_t $tmp795 = $tmp749.value;
bool $tmp796 = $tmp794 >= $tmp795;
frost$core$Bit $tmp797 = (frost$core$Bit) {$tmp796};
bool $tmp798 = $tmp797.value;
if ($tmp798) goto block24; else goto block17;
block26:;
uint64_t $tmp799 = $tmp793.value;
uint64_t $tmp800 = $tmp749.value;
bool $tmp801 = $tmp799 > $tmp800;
frost$core$Bit $tmp802 = (frost$core$Bit) {$tmp801};
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block24; else goto block17;
block24:;
int64_t $tmp804 = $tmp788.value;
int64_t $tmp805 = $tmp748.value;
int64_t $tmp806 = $tmp804 + $tmp805;
frost$core$Int64 $tmp807 = (frost$core$Int64) {$tmp806};
*(&local6) = $tmp807;
goto block16;
block17:;
// line 258
org$frostlang$frostc$Type* $tmp808 = *(&local3);
org$frostlang$frostc$Type* $tmp809 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp808);
org$frostlang$frostc$Type* $tmp810 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp809);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
org$frostlang$frostc$Type* $tmp811 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
*(&local9) = $tmp810;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
// line 259
frost$core$Int64 $tmp812 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp813 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp812);
frost$collections$Array* $tmp814 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp815 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp814);
org$frostlang$frostc$ASTNode* $tmp816 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp817 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp818 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp819 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp820 = *(&local9);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp818, $tmp819, $tmp820);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp816, $tmp817, param1, $tmp818);
frost$collections$Array* $tmp821 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp822 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp821, $tmp822);
org$frostlang$frostc$ASTNode* $tmp823 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp824 = (frost$core$Int64) {38};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp823, $tmp824, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp821, ((frost$core$Object*) $tmp823));
org$frostlang$frostc$FixedArray* $tmp825 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp821);
org$frostlang$frostc$IR$Value* $tmp826 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp813, $tmp815, $tmp816, $tmp825, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
org$frostlang$frostc$Type* $tmp827 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp828 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp829 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp830 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = $tmp826;
goto block1;
block13:;
org$frostlang$frostc$Type* $tmp831 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp832 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block10;
block10:;
// line 267
frost$collections$IdentityMap** $tmp833 = &param0->lambdaTypes;
frost$collections$IdentityMap* $tmp834 = *$tmp833;
frost$core$Object* $tmp835 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp834, ((frost$core$Object*) param3));
*(&local10) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp835)));
frost$collections$HashSet* $tmp836 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local10) = ((frost$collections$HashSet*) $tmp835);
frost$core$Frost$unref$frost$core$Object$Q($tmp835);
// line 268
frost$collections$HashSet* $tmp837 = *(&local10);
frost$core$Bit $tmp838 = frost$core$Bit$init$builtin_bit($tmp837 != NULL);
bool $tmp839 = $tmp838.value;
if ($tmp839) goto block27; else goto block28;
block27:;
// line 269
frost$collections$HashSet* $tmp840 = *(&local10);
ITable* $tmp841 = ((frost$collections$CollectionView*) $tmp840)->$class->itable;
while ($tmp841->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp841 = $tmp841->next;
}
$fn843 $tmp842 = $tmp841->methods[0];
frost$core$Int64 $tmp844 = $tmp842(((frost$collections$CollectionView*) $tmp840));
frost$core$Int64 $tmp845 = (frost$core$Int64) {1};
int64_t $tmp846 = $tmp844.value;
int64_t $tmp847 = $tmp845.value;
bool $tmp848 = $tmp846 > $tmp847;
frost$core$Bit $tmp849 = (frost$core$Bit) {$tmp848};
bool $tmp850 = $tmp849.value;
if ($tmp850) goto block29; else goto block31;
block29:;
// line 270
frost$core$MutableString* $tmp851 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp851, &$s852);
*(&local11) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
frost$core$MutableString* $tmp853 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
*(&local11) = $tmp851;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
// line 271
frost$threads$MessageQueue** $tmp854 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp855 = *$tmp854;
*(&local12) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
frost$threads$MessageQueue* $tmp856 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
*(&local12) = $tmp855;
// line 272
frost$collections$HashSet* $tmp857 = *(&local10);
ITable* $tmp858 = ((frost$collections$Iterable*) $tmp857)->$class->itable;
while ($tmp858->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp858 = $tmp858->next;
}
$fn860 $tmp859 = $tmp858->methods[0];
frost$collections$Iterator* $tmp861 = $tmp859(((frost$collections$Iterable*) $tmp857));
goto block32;
block32:;
ITable* $tmp862 = $tmp861->$class->itable;
while ($tmp862->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp862 = $tmp862->next;
}
$fn864 $tmp863 = $tmp862->methods[0];
frost$core$Bit $tmp865 = $tmp863($tmp861);
bool $tmp866 = $tmp865.value;
if ($tmp866) goto block34; else goto block33;
block33:;
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp867 = $tmp861->$class->itable;
while ($tmp867->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp867 = $tmp867->next;
}
$fn869 $tmp868 = $tmp867->methods[1];
frost$core$Object* $tmp870 = $tmp868($tmp861);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp870)));
org$frostlang$frostc$Type* $tmp871 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
*(&local13) = ((org$frostlang$frostc$Type*) $tmp870);
// line 273
frost$core$MutableString* $tmp872 = *(&local11);
org$frostlang$frostc$Type* $tmp873 = *(&local13);
frost$core$String* $tmp874 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s875, ((frost$core$Object*) $tmp873));
frost$core$String* $tmp876 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp874, &$s877);
frost$core$MutableString$append$frost$core$String($tmp872, $tmp876);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
// line 274
frost$threads$MessageQueue* $tmp878 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp878);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$threads$MessageQueue** $tmp879 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp880 = *$tmp879;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
frost$threads$MessageQueue** $tmp881 = &param0->errorQueue;
*$tmp881 = $tmp878;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
// line 275
org$frostlang$frostc$Compiler$TypeContext* $tmp882 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp883 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp884 = *(&local13);
frost$core$Bit $tmp885 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp882, $tmp883, $tmp884, $tmp885);
org$frostlang$frostc$IR$Value* $tmp886 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp882);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
// line 277
frost$threads$MessageQueue** $tmp887 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp888 = *$tmp887;
frost$core$Bit $tmp889 = frost$threads$MessageQueue$hasMessage$R$frost$core$Bit($tmp888);
bool $tmp890 = $tmp889.value;
if ($tmp890) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp891 = (frost$core$Int64) {277};
org$frostlang$frostc$Position$wrapper* $tmp892;
$tmp892 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp892->value = param1;
frost$core$String* $tmp893 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s894, ((frost$core$Object*) $tmp892));
frost$core$String* $tmp895 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp893, &$s896);
org$frostlang$frostc$Type* $tmp897 = *(&local13);
frost$core$String* $tmp898 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s899, ((frost$core$Object*) $tmp897));
frost$core$String* $tmp900 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp898, &$s901);
frost$core$String* $tmp902 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp895, $tmp900);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s903, $tmp891, $tmp902);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
abort(); // unreachable
block35:;
// line 280
goto block37;
block37:;
frost$threads$MessageQueue** $tmp904 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp905 = *$tmp904;
frost$core$Bit $tmp906 = frost$threads$MessageQueue$hasMessage$R$frost$core$Bit($tmp905);
bool $tmp907 = $tmp906.value;
if ($tmp907) goto block38; else goto block39;
block38:;
// line 281
frost$threads$MessageQueue** $tmp908 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp909 = *$tmp908;
frost$core$Immutable* $tmp910 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp909);
frost$core$Int64* $tmp911 = &((org$frostlang$frostc$Compiler$Message*) $tmp910)->$rawValue;
frost$core$Int64 $tmp912 = *$tmp911;
frost$core$Int64 $tmp913 = (frost$core$Int64) {1};
frost$core$Bit $tmp914 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp912, $tmp913);
bool $tmp915 = $tmp914.value;
if ($tmp915) goto block41; else goto block42;
block41:;
frost$io$File** $tmp916 = (frost$io$File**) (((org$frostlang$frostc$Compiler$Message*) $tmp910)->$data + 0);
frost$io$File* $tmp917 = *$tmp916;
org$frostlang$frostc$Position* $tmp918 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$Compiler$Message*) $tmp910)->$data + 8);
org$frostlang$frostc$Position $tmp919 = *$tmp918;
frost$core$String** $tmp920 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp910)->$data + 24);
frost$core$String* $tmp921 = *$tmp920;
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
frost$core$String* $tmp922 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
*(&local14) = $tmp921;
// line 283
frost$core$MutableString* $tmp923 = *(&local11);
frost$core$String* $tmp924 = *(&local14);
frost$core$String* $tmp925 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s926, $tmp924);
frost$core$String* $tmp927 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp925, &$s928);
frost$core$MutableString$append$frost$core$String($tmp923, $tmp927);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
frost$core$String* $tmp929 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
*(&local14) = ((frost$core$String*) NULL);
goto block40;
block42:;
frost$core$Int64 $tmp930 = (frost$core$Int64) {0};
frost$core$Bit $tmp931 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp912, $tmp930);
bool $tmp932 = $tmp931.value;
if ($tmp932) goto block43; else goto block40;
block43:;
frost$io$File** $tmp933 = (frost$io$File**) (((org$frostlang$frostc$Compiler$Message*) $tmp910)->$data + 0);
frost$io$File* $tmp934 = *$tmp933;
org$frostlang$frostc$Position* $tmp935 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$Compiler$Message*) $tmp910)->$data + 8);
org$frostlang$frostc$Position $tmp936 = *$tmp935;
frost$core$String** $tmp937 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp910)->$data + 24);
frost$core$String* $tmp938 = *$tmp937;
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
frost$core$String* $tmp939 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
*(&local15) = $tmp938;
// line 286
frost$core$MutableString* $tmp940 = *(&local11);
frost$core$String* $tmp941 = *(&local15);
frost$core$String* $tmp942 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s943, $tmp941);
frost$core$String* $tmp944 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp942, &$s945);
frost$core$MutableString$append$frost$core$String($tmp940, $tmp944);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
frost$core$String* $tmp946 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
*(&local15) = ((frost$core$String*) NULL);
goto block40;
block40:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
goto block37;
block39:;
frost$core$Frost$unref$frost$core$Object$Q($tmp870);
org$frostlang$frostc$Type* $tmp947 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
goto block32;
block34:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
// line 291
frost$threads$MessageQueue* $tmp948 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
frost$threads$MessageQueue** $tmp949 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp950 = *$tmp949;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
frost$threads$MessageQueue** $tmp951 = &param0->errorQueue;
*$tmp951 = $tmp948;
// line 292
frost$core$MutableString* $tmp952 = *(&local11);
frost$core$String* $tmp953 = frost$core$MutableString$finish$R$frost$core$String($tmp952);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp953);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
// line 293
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$threads$MessageQueue* $tmp954 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
*(&local12) = ((frost$threads$MessageQueue*) NULL);
frost$core$MutableString* $tmp955 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
*(&local11) = ((frost$core$MutableString*) NULL);
frost$collections$HashSet* $tmp956 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
*(&local10) = ((frost$collections$HashSet*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block31:;
// line 1
// line 296
org$frostlang$frostc$Compiler$TypeContext* $tmp957 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp958 = (frost$core$Int64) {3};
frost$collections$HashSet* $tmp959 = *(&local10);
ITable* $tmp960 = ((frost$collections$Iterable*) $tmp959)->$class->itable;
while ($tmp960->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp960 = $tmp960->next;
}
$fn962 $tmp961 = $tmp960->methods[0];
frost$collections$Iterator* $tmp963 = $tmp961(((frost$collections$Iterable*) $tmp959));
ITable* $tmp964 = $tmp963->$class->itable;
while ($tmp964->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp964 = $tmp964->next;
}
$fn966 $tmp965 = $tmp964->methods[1];
frost$core$Object* $tmp967 = $tmp965($tmp963);
frost$core$Bit $tmp968 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp957, $tmp958, ((org$frostlang$frostc$Type*) $tmp967), $tmp968);
org$frostlang$frostc$IR$Value* $tmp969 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp957);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
frost$core$Frost$unref$frost$core$Object$Q($tmp967);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// line 298
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp970 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
*(&local10) = ((frost$collections$HashSet*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block30:;
goto block28;
block28:;
// line 301
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s971);
// line 303
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp972 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
*(&local10) = ((frost$collections$HashSet*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block1:;
org$frostlang$frostc$IR$Value* $tmp973 = *(&local0);
frost$core$Bit $tmp974 = frost$core$Bit$init$builtin_bit($tmp973 != NULL);
bool $tmp975 = $tmp974.value;
if ($tmp975) goto block2; else goto block3;
block2:;
*(&local2) = $tmp974;
goto block4;
block3:;
frost$core$Int64* $tmp976 = &param0->errorCount;
frost$core$Int64 $tmp977 = *$tmp976;
frost$core$Int64 $tmp978 = (frost$core$Int64) {0};
int64_t $tmp979 = $tmp977.value;
int64_t $tmp980 = $tmp978.value;
bool $tmp981 = $tmp979 > $tmp980;
frost$core$Bit $tmp982 = (frost$core$Bit) {$tmp981};
*(&local2) = $tmp982;
goto block4;
block4:;
frost$core$Bit $tmp983 = *(&local2);
bool $tmp984 = $tmp983.value;
if ($tmp984) goto block5; else goto block6;
block5:;
*(&local1) = $tmp983;
goto block7;
block6:;
frost$core$Bit* $tmp985 = &param0->reportErrors;
frost$core$Bit $tmp986 = *$tmp985;
frost$core$Bit $tmp987 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp986);
*(&local1) = $tmp987;
goto block7;
block7:;
frost$core$Bit $tmp988 = *(&local1);
bool $tmp989 = $tmp988.value;
if ($tmp989) goto block8; else goto block9;
block8:;
org$frostlang$frostc$IR$Value* $tmp990 = *(&local0);
return $tmp990;
block9:;
frost$core$Int64 $tmp991 = (frost$core$Int64) {234};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s992, $tmp991, &$s993);
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
// line 310
frost$core$Int64* $tmp994 = &param0->closureCount;
frost$core$Int64 $tmp995 = *$tmp994;
frost$core$Int64 $tmp996 = (frost$core$Int64) {1};
int64_t $tmp997 = $tmp995.value;
int64_t $tmp998 = $tmp996.value;
int64_t $tmp999 = $tmp997 + $tmp998;
frost$core$Int64 $tmp1000 = (frost$core$Int64) {$tmp999};
frost$core$Int64* $tmp1001 = &param0->closureCount;
*$tmp1001 = $tmp1000;
// line 311
frost$core$Int64* $tmp1002 = &param0->closureCount;
frost$core$Int64 $tmp1003 = *$tmp1002;
frost$core$Int64$wrapper* $tmp1004;
$tmp1004 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1004->value = $tmp1003;
frost$core$String* $tmp1005 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1006, ((frost$core$Object*) $tmp1004));
frost$core$String* $tmp1007 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1005, &$s1008);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
frost$core$String* $tmp1009 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
*(&local0) = $tmp1007;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
// line 312
frost$collections$Array* $tmp1010 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1010);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
frost$collections$Array* $tmp1011 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
*(&local1) = $tmp1010;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
// line 313
ITable* $tmp1012 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp1012->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1012 = $tmp1012->next;
}
$fn1014 $tmp1013 = $tmp1012->methods[0];
frost$collections$Iterator* $tmp1015 = $tmp1013(((frost$collections$Iterable*) param3));
goto block1;
block1:;
ITable* $tmp1016 = $tmp1015->$class->itable;
while ($tmp1016->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1016 = $tmp1016->next;
}
$fn1018 $tmp1017 = $tmp1016->methods[0];
frost$core$Bit $tmp1019 = $tmp1017($tmp1015);
bool $tmp1020 = $tmp1019.value;
if ($tmp1020) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1021 = $tmp1015->$class->itable;
while ($tmp1021->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1021 = $tmp1021->next;
}
$fn1023 $tmp1022 = $tmp1021->methods[1];
frost$core$Object* $tmp1024 = $tmp1022($tmp1015);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1024)));
org$frostlang$frostc$ASTNode* $tmp1025 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp1024);
// line 314
org$frostlang$frostc$ASTNode* $tmp1026 = *(&local2);
frost$core$Int64* $tmp1027 = &$tmp1026->$rawValue;
frost$core$Int64 $tmp1028 = *$tmp1027;
frost$core$Int64 $tmp1029 = (frost$core$Int64) {34};
frost$core$Bit $tmp1030 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1028, $tmp1029);
bool $tmp1031 = $tmp1030.value;
if ($tmp1031) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp1032 = (org$frostlang$frostc$Position*) ($tmp1026->$data + 0);
org$frostlang$frostc$Position $tmp1033 = *$tmp1032;
frost$core$String** $tmp1034 = (frost$core$String**) ($tmp1026->$data + 16);
frost$core$String* $tmp1035 = *$tmp1034;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
frost$core$String* $tmp1036 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
*(&local3) = $tmp1035;
org$frostlang$frostc$ASTNode** $tmp1037 = (org$frostlang$frostc$ASTNode**) ($tmp1026->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1038 = *$tmp1037;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
org$frostlang$frostc$ASTNode* $tmp1039 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
*(&local4) = $tmp1038;
// line 316
org$frostlang$frostc$Scanner** $tmp1040 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1041 = *$tmp1040;
org$frostlang$frostc$ASTNode* $tmp1042 = *(&local4);
org$frostlang$frostc$Type* $tmp1043 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1041, $tmp1042);
org$frostlang$frostc$Type* $tmp1044 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1043);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
org$frostlang$frostc$Type* $tmp1045 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local5) = $tmp1044;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
// line 317
org$frostlang$frostc$Type* $tmp1046 = *(&local5);
frost$core$Bit $tmp1047 = frost$core$Bit$init$builtin_bit($tmp1046 == NULL);
bool $tmp1048 = $tmp1047.value;
if ($tmp1048) goto block7; else goto block8;
block7:;
// line 318
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1049 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1050 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1051 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1024);
org$frostlang$frostc$ASTNode* $tmp1052 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
frost$collections$Array* $tmp1053 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1054 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
// line 320
frost$collections$Array* $tmp1055 = *(&local1);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1056 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp1057 = *(&local3);
org$frostlang$frostc$Type* $tmp1058 = *(&local5);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp1056, $tmp1057, $tmp1058);
frost$collections$Array$add$frost$collections$Array$T($tmp1055, ((frost$core$Object*) $tmp1056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
org$frostlang$frostc$Type* $tmp1059 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1060 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1061 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 323
frost$core$Int64 $tmp1062 = (frost$core$Int64) {323};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1063, $tmp1062);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1024);
org$frostlang$frostc$ASTNode* $tmp1064 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
// line 327
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// line 328
frost$core$Bit $tmp1065 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp1066 = $tmp1065.value;
if ($tmp1066) goto block9; else goto block11;
block9:;
// line 329
org$frostlang$frostc$Scanner** $tmp1067 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1068 = *$tmp1067;
org$frostlang$frostc$Type* $tmp1069 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1068, param4);
org$frostlang$frostc$Type* $tmp1070 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1069);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
org$frostlang$frostc$Type* $tmp1071 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
*(&local6) = $tmp1070;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
// line 330
org$frostlang$frostc$Type* $tmp1072 = *(&local6);
frost$core$Bit $tmp1073 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1074 = $tmp1073.value;
if ($tmp1074) goto block12; else goto block13;
block12:;
// line 331
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1075 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1076 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1077 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block13:;
goto block10;
block11:;
// line 1
// line 335
org$frostlang$frostc$Type* $tmp1078 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
org$frostlang$frostc$Type* $tmp1079 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
*(&local6) = $tmp1078;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
// line 336
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1080;
$tmp1080 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1080->value = param2;
frost$core$Int64 $tmp1081 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp1082 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1081);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1083;
$tmp1083 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1083->value = $tmp1082;
ITable* $tmp1084 = ((frost$core$Equatable*) $tmp1080)->$class->itable;
while ($tmp1084->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1084 = $tmp1084->next;
}
$fn1086 $tmp1085 = $tmp1084->methods[0];
frost$core$Bit $tmp1087 = $tmp1085(((frost$core$Equatable*) $tmp1080), ((frost$core$Equatable*) $tmp1083));
bool $tmp1088 = $tmp1087.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1083)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1080)));
if ($tmp1088) goto block14; else goto block15;
block14:;
// line 337
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s1089);
// line 338
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1090 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1091 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1092 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block15:;
goto block10;
block10:;
// line 341
org$frostlang$frostc$Pair* $tmp1093 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Stack** $tmp1094 = &param0->currentMethod;
frost$collections$Stack* $tmp1095 = *$tmp1094;
frost$core$Int64 $tmp1096 = (frost$core$Int64) {0};
frost$core$Object* $tmp1097 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1095, $tmp1096);
frost$collections$HashMap* $tmp1098 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp1098);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1093, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1097)), ((frost$core$Object*) ((frost$collections$Map*) $tmp1098)));
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
org$frostlang$frostc$Pair* $tmp1099 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
*(&local7) = $tmp1093;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
frost$core$Frost$unref$frost$core$Object$Q($tmp1097);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
// line 343
frost$collections$Stack** $tmp1100 = &param0->captures;
frost$collections$Stack* $tmp1101 = *$tmp1100;
org$frostlang$frostc$Pair* $tmp1102 = *(&local7);
frost$collections$Stack$push$frost$collections$Stack$T($tmp1101, ((frost$core$Object*) $tmp1102));
// line 344
org$frostlang$frostc$Annotations* $tmp1103 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp1104 = (frost$core$Int64) {16};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp1103, $tmp1104);
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
org$frostlang$frostc$Annotations* $tmp1105 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
*(&local8) = $tmp1103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
// line 345
org$frostlang$frostc$MethodDecl* $tmp1106 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$collections$Stack** $tmp1107 = &param0->currentClass;
frost$collections$Stack* $tmp1108 = *$tmp1107;
frost$core$Int64 $tmp1109 = (frost$core$Int64) {0};
frost$core$Object* $tmp1110 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1108, $tmp1109);
org$frostlang$frostc$Annotations* $tmp1111 = *(&local8);
frost$core$String* $tmp1112 = *(&local0);
frost$collections$Array* $tmp1113 = *(&local1);
org$frostlang$frostc$Type* $tmp1114 = *(&local6);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp1106, ((org$frostlang$frostc$ClassDecl*) $tmp1110), param1, ((frost$core$String*) NULL), $tmp1111, param2, $tmp1112, ((frost$collections$Array*) NULL), $tmp1113, $tmp1114, param5);
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
org$frostlang$frostc$MethodDecl* $tmp1115 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
*(&local9) = $tmp1106;
frost$core$Frost$unref$frost$core$Object$Q($tmp1110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
// line 349
frost$core$Bit* $tmp1116 = &param0->writeCode;
frost$core$Bit $tmp1117 = *$tmp1116;
*(&local10) = $tmp1117;
// line 350
frost$core$Bit* $tmp1118 = &param0->reportErrors;
frost$core$Bit $tmp1119 = *$tmp1118;
*(&local11) = $tmp1119;
// line 351
frost$core$Bit $tmp1120 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp1121 = &param0->writeCode;
*$tmp1121 = $tmp1120;
// line 352
frost$core$Bit $tmp1122 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp1123 = &param0->reportErrors;
*$tmp1123 = $tmp1122;
// line 353
frost$collections$Stack** $tmp1124 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1125 = *$tmp1124;
*(&local12) = ((frost$collections$Stack*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
frost$collections$Stack* $tmp1126 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
*(&local12) = $tmp1125;
// line 354
frost$collections$Stack* $tmp1127 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp1127);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
frost$collections$Stack** $tmp1128 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1129 = *$tmp1128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
frost$collections$Stack** $tmp1130 = &param0->enclosingContexts;
*$tmp1130 = $tmp1127;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
// line 355
org$frostlang$frostc$MethodDecl* $tmp1131 = *(&local9);
org$frostlang$frostc$SymbolTable** $tmp1132 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1133 = *$tmp1132;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp1131, $tmp1133);
// line 356
frost$collections$Stack* $tmp1134 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
frost$collections$Stack** $tmp1135 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1136 = *$tmp1135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
frost$collections$Stack** $tmp1137 = &param0->enclosingContexts;
*$tmp1137 = $tmp1134;
// line 357
frost$core$Bit $tmp1138 = *(&local10);
frost$core$Bit* $tmp1139 = &param0->writeCode;
*$tmp1139 = $tmp1138;
// line 358
frost$core$Bit $tmp1140 = *(&local11);
frost$core$Bit* $tmp1141 = &param0->reportErrors;
*$tmp1141 = $tmp1140;
// line 360
// line 361
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 362
org$frostlang$frostc$Pair* $tmp1142 = *(&local7);
frost$core$Object** $tmp1143 = &$tmp1142->second;
frost$core$Object* $tmp1144 = *$tmp1143;
ITable* $tmp1145 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1144))->$class->itable;
while ($tmp1145->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1145 = $tmp1145->next;
}
$fn1147 $tmp1146 = $tmp1145->methods[0];
frost$core$Int64 $tmp1148 = $tmp1146(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1144)));
frost$core$Int64 $tmp1149 = (frost$core$Int64) {0};
int64_t $tmp1150 = $tmp1148.value;
int64_t $tmp1151 = $tmp1149.value;
bool $tmp1152 = $tmp1150 != $tmp1151;
frost$core$Bit $tmp1153 = (frost$core$Bit) {$tmp1152};
bool $tmp1154 = $tmp1153.value;
if ($tmp1154) goto block16; else goto block18;
block16:;
// line 364
org$frostlang$frostc$MethodDecl* $tmp1155 = *(&local9);
org$frostlang$frostc$Pair* $tmp1156 = *(&local7);
frost$core$Object** $tmp1157 = &$tmp1156->second;
frost$core$Object* $tmp1158 = *$tmp1157;
ITable* $tmp1159 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1158))->$class->itable;
while ($tmp1159->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1159 = $tmp1159->next;
}
$fn1161 $tmp1160 = $tmp1159->methods[4];
frost$collections$Iterator* $tmp1162 = $tmp1160(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1158)));
ITable* $tmp1163 = $tmp1162->$class->itable;
while ($tmp1163->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1163 = $tmp1163->next;
}
$fn1165 $tmp1164 = $tmp1163->methods[6];
frost$collections$Array* $tmp1166 = $tmp1164($tmp1162);
org$frostlang$frostc$ClassDecl* $tmp1167 = org$frostlang$frostc$expression$Closure$createClosureClass$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlang$frostc$Compiler$Capture$GT$R$org$frostlang$frostc$ClassDecl(param0, $tmp1155, ((frost$collections$CollectionView*) $tmp1166));
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
org$frostlang$frostc$ClassDecl* $tmp1168 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
*(&local15) = $tmp1167;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
// line 365
frost$collections$Array* $tmp1169 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1169);
*(&local16) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
frost$collections$Array* $tmp1170 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
*(&local16) = $tmp1169;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
// line 366
org$frostlang$frostc$Pair* $tmp1171 = *(&local7);
frost$core$Object** $tmp1172 = &$tmp1171->second;
frost$core$Object* $tmp1173 = *$tmp1172;
ITable* $tmp1174 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1173))->$class->itable;
while ($tmp1174->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1174 = $tmp1174->next;
}
$fn1176 $tmp1175 = $tmp1174->methods[4];
frost$collections$Iterator* $tmp1177 = $tmp1175(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1173)));
goto block19;
block19:;
ITable* $tmp1178 = $tmp1177->$class->itable;
while ($tmp1178->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1178 = $tmp1178->next;
}
$fn1180 $tmp1179 = $tmp1178->methods[0];
frost$core$Bit $tmp1181 = $tmp1179($tmp1177);
bool $tmp1182 = $tmp1181.value;
if ($tmp1182) goto block21; else goto block20;
block20:;
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp1183 = $tmp1177->$class->itable;
while ($tmp1183->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1183 = $tmp1183->next;
}
$fn1185 $tmp1184 = $tmp1183->methods[1];
frost$core$Object* $tmp1186 = $tmp1184($tmp1177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp1186)));
org$frostlang$frostc$Compiler$Capture* $tmp1187 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) $tmp1186);
// line 367
org$frostlang$frostc$Compiler$Capture* $tmp1188 = *(&local17);
frost$core$Int64* $tmp1189 = &$tmp1188->$rawValue;
frost$core$Int64 $tmp1190 = *$tmp1189;
frost$core$Int64 $tmp1191 = (frost$core$Int64) {0};
frost$core$Bit $tmp1192 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1190, $tmp1191);
bool $tmp1193 = $tmp1192.value;
if ($tmp1193) goto block23; else goto block24;
block23:;
org$frostlang$frostc$Variable** $tmp1194 = (org$frostlang$frostc$Variable**) ($tmp1188->$data + 0);
org$frostlang$frostc$Variable* $tmp1195 = *$tmp1194;
*(&local18) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
org$frostlang$frostc$Variable* $tmp1196 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
*(&local18) = $tmp1195;
// line 369
frost$collections$Array* $tmp1197 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1198 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1199 = (frost$core$Int64) {22};
org$frostlang$frostc$Variable* $tmp1200 = *(&local18);
frost$core$String** $tmp1201 = &((org$frostlang$frostc$Symbol*) $tmp1200)->name;
frost$core$String* $tmp1202 = *$tmp1201;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1198, $tmp1199, param1, $tmp1202);
frost$collections$Array$add$frost$collections$Array$T($tmp1197, ((frost$core$Object*) $tmp1198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
org$frostlang$frostc$Variable* $tmp1203 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
*(&local18) = ((org$frostlang$frostc$Variable*) NULL);
goto block22;
block24:;
frost$core$Int64 $tmp1204 = (frost$core$Int64) {2};
frost$core$Bit $tmp1205 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1190, $tmp1204);
bool $tmp1206 = $tmp1205.value;
if ($tmp1206) goto block25; else goto block26;
block25:;
// line 372
frost$collections$Array* $tmp1207 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1208 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1209 = (frost$core$Int64) {39};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1208, $tmp1209, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1207, ((frost$core$Object*) $tmp1208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
goto block22;
block26:;
frost$core$Int64 $tmp1210 = (frost$core$Int64) {1};
frost$core$Bit $tmp1211 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1190, $tmp1210);
bool $tmp1212 = $tmp1211.value;
if ($tmp1212) goto block27; else goto block22;
block27:;
org$frostlang$frostc$FieldDecl** $tmp1213 = (org$frostlang$frostc$FieldDecl**) ($tmp1188->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp1214 = *$tmp1213;
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
org$frostlang$frostc$FieldDecl* $tmp1215 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
*(&local19) = $tmp1214;
// line 375
frost$collections$Array* $tmp1216 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1217 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1218 = (frost$core$Int64) {16};
org$frostlang$frostc$ASTNode* $tmp1219 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1220 = (frost$core$Int64) {22};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1219, $tmp1220, param1, &$s1221);
org$frostlang$frostc$FieldDecl* $tmp1222 = *(&local19);
frost$core$String** $tmp1223 = &((org$frostlang$frostc$Symbol*) $tmp1222)->name;
frost$core$String* $tmp1224 = *$tmp1223;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp1217, $tmp1218, param1, $tmp1219, $tmp1224);
frost$collections$Array$add$frost$collections$Array$T($tmp1216, ((frost$core$Object*) $tmp1217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
org$frostlang$frostc$FieldDecl* $tmp1225 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block22;
block22:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1186);
org$frostlang$frostc$Compiler$Capture* $tmp1226 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
// line 381
frost$collections$Stack** $tmp1227 = &param0->captures;
frost$collections$Stack* $tmp1228 = *$tmp1227;
frost$core$Object* $tmp1229 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1228);
frost$core$Frost$unref$frost$core$Object$Q($tmp1229);
// line 382
frost$collections$Array** $tmp1230 = &param0->pendingClasses;
frost$collections$Array* $tmp1231 = *$tmp1230;
org$frostlang$frostc$ClassDecl* $tmp1232 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp1231, ((frost$core$Object*) $tmp1232));
// line 383
org$frostlang$frostc$IR$Value* $tmp1233 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1234 = (frost$core$Int64) {14};
org$frostlang$frostc$ClassDecl* $tmp1235 = *(&local15);
org$frostlang$frostc$Type** $tmp1236 = &$tmp1235->type;
org$frostlang$frostc$Type* $tmp1237 = *$tmp1236;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1233, $tmp1234, $tmp1237);
frost$collections$Array* $tmp1238 = *(&local16);
org$frostlang$frostc$FixedArray* $tmp1239 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1238);
org$frostlang$frostc$Compiler$TypeContext* $tmp1240 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1241 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1240, $tmp1241);
org$frostlang$frostc$IR$Value* $tmp1242 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1233, ((frost$collections$ListView*) $tmp1239), $tmp1240);
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
org$frostlang$frostc$IR$Value* $tmp1243 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
*(&local20) = $tmp1242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
// line 385
org$frostlang$frostc$IR$Value* $tmp1244 = *(&local20);
frost$core$Bit $tmp1245 = frost$core$Bit$init$builtin_bit($tmp1244 == NULL);
bool $tmp1246 = $tmp1245.value;
if ($tmp1246) goto block28; else goto block29;
block28:;
// line 386
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1247 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1248 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1249 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp1250 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp1251 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
*(&local12) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1252 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp1253 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp1254 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1255 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1256 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1257 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block29:;
// line 388
org$frostlang$frostc$ASTNode* $tmp1258 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1259 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp1260 = *(&local20);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1258, $tmp1259, param1, $tmp1260);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
org$frostlang$frostc$ASTNode* $tmp1261 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
*(&local14) = $tmp1258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
// line 389
org$frostlang$frostc$ClassDecl* $tmp1262 = *(&local15);
org$frostlang$frostc$Type** $tmp1263 = &$tmp1262->type;
org$frostlang$frostc$Type* $tmp1264 = *$tmp1263;
frost$core$Bit $tmp1265 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1264);
*(&local13) = $tmp1265;
org$frostlang$frostc$IR$Value* $tmp1266 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1267 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1268 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block17;
block18:;
// line 1
// line 393
frost$collections$Stack** $tmp1269 = &param0->captures;
frost$collections$Stack* $tmp1270 = *$tmp1269;
frost$core$Object* $tmp1271 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1270);
frost$core$Frost$unref$frost$core$Object$Q($tmp1271);
// line 394
frost$collections$Stack* $tmp1272 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp1272);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
frost$collections$Stack** $tmp1273 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1274 = *$tmp1273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
frost$collections$Stack** $tmp1275 = &param0->enclosingContexts;
*$tmp1275 = $tmp1272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
// line 395
org$frostlang$frostc$MethodDecl* $tmp1276 = *(&local9);
org$frostlang$frostc$SymbolTable** $tmp1277 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1278 = *$tmp1277;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp1276, $tmp1278);
// line 396
frost$collections$Stack* $tmp1279 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
frost$collections$Stack** $tmp1280 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1281 = *$tmp1280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
frost$collections$Stack** $tmp1282 = &param0->enclosingContexts;
*$tmp1282 = $tmp1279;
// line 397
org$frostlang$frostc$ASTNode* $tmp1283 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1284 = (frost$core$Int64) {31};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1283, $tmp1284, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
org$frostlang$frostc$ASTNode* $tmp1285 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
*(&local14) = $tmp1283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
// line 398
frost$core$Bit $tmp1286 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp1286;
goto block17;
block17:;
// line 400
frost$collections$Array* $tmp1287 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1287);
*(&local21) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
frost$collections$Array* $tmp1288 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
*(&local21) = $tmp1287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
// line 401
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
// line 402
org$frostlang$frostc$MethodDecl* $tmp1289 = *(&local9);
org$frostlang$frostc$Annotations** $tmp1290 = &$tmp1289->annotations;
org$frostlang$frostc$Annotations* $tmp1291 = *$tmp1290;
frost$core$Bit $tmp1292 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1291);
bool $tmp1293 = $tmp1292.value;
if ($tmp1293) goto block30; else goto block32;
block30:;
// line 403
org$frostlang$frostc$MethodDecl* $tmp1294 = *(&local9);
org$frostlang$frostc$Type* $tmp1295 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp1294);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
org$frostlang$frostc$Type* $tmp1296 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
*(&local22) = $tmp1295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
goto block31;
block32:;
// line 1
// line 406
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
frost$core$Frost$unref$frost$core$Object$Q($tmp1301);
goto block31;
block31:;
// line 408
org$frostlang$frostc$Type* $tmp1307 = *(&local22);
org$frostlang$frostc$Type* $tmp1308 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1307);
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
org$frostlang$frostc$Type* $tmp1309 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
*(&local23) = $tmp1308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
// line 409
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
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1311, $tmp1312, param1, $tmp1319);
frost$collections$Array$add$frost$collections$Array$T($tmp1310, ((frost$core$Object*) $tmp1311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
// line 411
frost$collections$Array* $tmp1320 = *(&local21);
org$frostlang$frostc$ASTNode* $tmp1321 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp1320, ((frost$core$Object*) $tmp1321));
// line 412
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
// line 413
frost$core$Bit $tmp1322 = *(&local13);
bool $tmp1323 = $tmp1322.value;
if ($tmp1323) goto block33; else goto block35;
block33:;
// line 414
org$frostlang$frostc$Type* $tmp1324 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
org$frostlang$frostc$Type* $tmp1325 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
*(&local24) = $tmp1324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
goto block34;
block35:;
// line 1
// line 417
org$frostlang$frostc$Type* $tmp1326 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
org$frostlang$frostc$Type* $tmp1327 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
*(&local24) = $tmp1326;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
goto block34;
block34:;
// line 419
org$frostlang$frostc$IR$Value* $tmp1328 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1329 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp1330 = *(&local24);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1328, $tmp1329, $tmp1330);
frost$collections$Array* $tmp1331 = *(&local21);
org$frostlang$frostc$Compiler$TypeContext* $tmp1332 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1333 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1332, $tmp1333);
org$frostlang$frostc$IR$Value* $tmp1334 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1328, ((frost$collections$ListView*) $tmp1331), $tmp1332);
org$frostlang$frostc$MethodDecl* $tmp1335 = *(&local9);
org$frostlang$frostc$Type* $tmp1336 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp1335);
org$frostlang$frostc$IR$Value* $tmp1337 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1334, $tmp1336);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
org$frostlang$frostc$IR$Value* $tmp1338 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
*(&local25) = $tmp1337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
// line 421
org$frostlang$frostc$IR$Value* $tmp1339 = *(&local25);
org$frostlang$frostc$IR$Value* $tmp1340 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1339, param6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
org$frostlang$frostc$IR$Value* $tmp1341 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1342 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1343 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1344 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1345 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
*(&local21) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1346 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp1347 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
*(&local12) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1348 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp1349 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp1350 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1351 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1352 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1353 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1340;

}
void org$frostlang$frostc$expression$Closure$init(org$frostlang$frostc$expression$Closure* param0) {

return;

}
void org$frostlang$frostc$expression$Closure$cleanup(org$frostlang$frostc$expression$Closure* param0) {

// line 23
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

