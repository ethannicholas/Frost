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
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/MutableMethod.h"
#include "org/frostlang/frostc/Compiler/Message.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Map.h"
#include "org/frostlang/frostc/expression/Call.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Closure$class_type org$frostlang$frostc$expression$Closure$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Closure$cleanup} };

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
typedef frost$core$Int64 (*$fn722)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn745)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn848)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn860)(org$frostlang$frostc$Type*, org$frostlang$frostc$Type*);
typedef frost$collections$ListView* (*$fn864)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn875)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn879)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn884)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn978)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn982)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1030)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1034)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1039)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1102)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1163)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn1177)(frost$collections$MapView*);
typedef frost$collections$Array* (*$fn1181)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1192)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn1196)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1201)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn1357)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65", 39, 4048859009194802747, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x6e\x6f\x6e\x2d\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x20\x6f\x77\x6e\x65\x72\x20\x66\x6f\x72\x20", 27, -299203061613670049, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65", 9, 1602056911729632975, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s698 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x54\x79\x70\x65\x64\x4c\x61\x6d\x62\x64\x61\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x72\x61\x77\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x65\x78\x70\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 362, -1348589147382285979, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static frost$core$String $s735 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x6c\x61\x6d\x62\x64\x61\x20\x77\x69\x74\x68\x20\x77\x72\x6f\x6e\x67\x20", 31, -8865909723025372911, NULL };
static frost$core$String $s737 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 20, 4248843021992149759, NULL };
static frost$core$String $s792 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s867 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x65\x72\x72\x6f\x72", 12, -6960542561056411676, NULL };
static frost$core$String $s890 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x77\x68\x65\x6e\x20\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x64\x20\x61\x73\x20\x27", 26, 7783089566661782278, NULL };
static frost$core$String $s892 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3a", 2, 14198, NULL };
static frost$core$String $s909 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x72\x65\x63\x65\x69\x76\x65\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 51, 8939304453205542054, NULL };
static frost$core$String $s911 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20", 6, 1410335929809, NULL };
static frost$core$String $s914 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x20", 5, 22706926183, NULL };
static frost$core$String $s916 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s941 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, 1205436084705178767, NULL };
static frost$core$String $s943 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s958 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, 1205436084705178767, NULL };
static frost$core$String $s960 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s987 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x74\x79\x70\x65\x20\x77\x61\x73\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x61\x6e\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x63\x6f\x6e\x74\x65\x78\x74", 67, -43704296328153041, NULL };
static frost$core$String $s1008 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1009 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x55\x6e\x74\x79\x70\x65\x64\x4c\x61\x6d\x62\x64\x61\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x72\x61\x77\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x65\x78\x70\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 364, 1431056255726371020, NULL };
static frost$core$String $s1022 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 10, 3323213258965972710, NULL };
static frost$core$String $s1024 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1079 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static frost$core$String $s1237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s1421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };

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
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
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
FROST_ASSERT(40 == sizeof(frost$collections$Array));
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
FROST_ASSERT(200 == sizeof(org$frostlang$frostc$ClassDecl));
org$frostlang$frostc$ClassDecl* $tmp116 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(200, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$collections$Stack** $tmp117 = &param0->currentClass;
frost$collections$Stack* $tmp118 = *$tmp117;
frost$core$Int64 $tmp119 = (frost$core$Int64) {0};
frost$core$Object* $tmp120 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp118, $tmp119);
frost$io$File** $tmp121 = &((org$frostlang$frostc$ClassDecl*) $tmp120)->source;
frost$io$File* $tmp122 = *$tmp121;
org$frostlang$frostc$Position $tmp123 = *(&local0);
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp124 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp124);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
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
FROST_ASSERT(40 == sizeof(frost$collections$Array));
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
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp152 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp152);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$collections$Array* $tmp153 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
*(&local5) = $tmp152;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// line 73
FROST_ASSERT(40 == sizeof(frost$collections$Array));
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
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
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
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp188 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp189 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp190 = *(&local0);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp191 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp192 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp193 = *(&local0);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
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
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
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
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
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
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp225 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp226 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp227 = *(&local0);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp228 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp229 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp230 = *(&local0);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
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
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
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
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp251 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$Type* $tmp252 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp251, &$s253, $tmp252);
frost$collections$Array$add$frost$collections$Array$T($tmp250, ((frost$core$Object*) $tmp251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// line 94
frost$collections$Array* $tmp254 = *(&local5);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp255 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp256 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp257 = *(&local0);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp258 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp259 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp260 = *(&local0);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp261 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp262 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp263 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp261, $tmp262, $tmp263, &$s264);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp258, $tmp259, $tmp260, $tmp261, &$s265);
frost$core$Int64 $tmp266 = (frost$core$Int64) {24};
org$frostlang$frostc$expression$Binary$Operator $tmp267 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp266);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
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
FROST_ASSERT(136 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp273 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(136, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp274 = *(&local4);
org$frostlang$frostc$Position $tmp275 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
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
FROST_ASSERT(136 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp294 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(136, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp295 = *(&local4);
org$frostlang$frostc$Position $tmp296 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp297 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp298 = (frost$core$Int64) {32};
frost$core$Int64 $tmp299 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp300 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp298, $tmp299);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp297, $tmp300);
frost$core$Int64 $tmp301 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp302 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp301);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp303 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp303);
org$frostlang$frostc$Type* $tmp304 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
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
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp339 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp340 = *(&local4);
org$frostlang$frostc$Position $tmp341 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
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
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp371 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp372 = *(&local4);
org$frostlang$frostc$Position $tmp373 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
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
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp400 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp401 = *(&local4);
org$frostlang$frostc$Position $tmp402 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
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
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp429 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp429, ((frost$core$Object*) $tmp428));
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
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp447 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp447, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp446)));
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
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp458 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp458, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
org$frostlang$frostc$Compiler$AutoScope* $tmp459 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local0) = $tmp458;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
// line 158
FROST_ASSERT(40 == sizeof(frost$collections$Array));
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
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$Variable));
org$frostlang$frostc$Variable* $tmp535 = (org$frostlang$frostc$Variable*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$Variable$class);
org$frostlang$frostc$Position $tmp536 = *(&local4);
frost$core$Int64 $tmp537 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp538 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp537);
frost$core$String* $tmp539 = *(&local5);
org$frostlang$frostc$Type* $tmp540 = *(&local7);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Variable$Storage));
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
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
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
frost$core$Int64 $tmp626 = (frost$core$Int64) {17};
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
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp666 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp667 = (frost$core$Int64) {26};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp668 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp669 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp670 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp668, $tmp669, $tmp670);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp666, $tmp667, param1, $tmp668);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp671 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp672 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp671, $tmp672);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
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
frost$core$Bit org$frostlang$frostc$expression$Closure$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

// line 271
frost$core$String** $tmp699 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp700 = *$tmp699;
frost$core$String** $tmp701 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp702 = *$tmp701;
frost$core$Bit $tmp703 = frost$core$String$$GT$frost$core$String$R$frost$core$Bit($tmp700, $tmp702);
return $tmp703;

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
frost$collections$Array* local11 = NULL;
frost$core$MutableString* local12 = NULL;
frost$threads$MessageQueue* local13 = NULL;
org$frostlang$frostc$Type* local14 = NULL;
frost$core$String* local15 = NULL;
frost$core$String* local16 = NULL;
// line 236
frost$core$Int64* $tmp704 = &param4->$rawValue;
frost$core$Int64 $tmp705 = *$tmp704;
frost$core$Int64 $tmp706 = (frost$core$Int64) {3};
frost$core$Bit $tmp707 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp705, $tmp706);
bool $tmp708 = $tmp707.value;
if ($tmp708) goto block11; else goto block10;
block11:;
org$frostlang$frostc$Type** $tmp709 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp710 = *$tmp709;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
org$frostlang$frostc$Type* $tmp711 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
*(&local3) = $tmp710;
frost$core$Bit* $tmp712 = (frost$core$Bit*) (param4->$data + 8);
frost$core$Bit $tmp713 = *$tmp712;
// line 238
org$frostlang$frostc$Type* $tmp714 = *(&local3);
org$frostlang$frostc$Type* $tmp715 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp714);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
org$frostlang$frostc$Type* $tmp716 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
*(&local4) = $tmp715;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
// line 239
org$frostlang$frostc$Type* $tmp717 = *(&local4);
frost$core$Bit $tmp718 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp717);
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block12; else goto block13;
block12:;
// line 240
ITable* $tmp720 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp720->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp720 = $tmp720->next;
}
$fn722 $tmp721 = $tmp720->methods[0];
frost$core$Int64 $tmp723 = $tmp721(((frost$collections$CollectionView*) param2));
org$frostlang$frostc$Type* $tmp724 = *(&local4);
frost$core$Int64 $tmp725 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp724);
int64_t $tmp726 = $tmp723.value;
int64_t $tmp727 = $tmp725.value;
bool $tmp728 = $tmp726 != $tmp727;
frost$core$Bit $tmp729 = (frost$core$Bit) {$tmp728};
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block14; else goto block15;
block14:;
// line 241
org$frostlang$frostc$Type* $tmp731 = *(&local3);
frost$core$String* $tmp732 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s733, ((frost$core$Object*) $tmp731));
frost$core$String* $tmp734 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp732, &$s735);
frost$core$String* $tmp736 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp734, &$s737);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp736);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
// line 243
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp738 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp739 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block15:;
// line 245
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp740 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp740);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
frost$collections$Array* $tmp741 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local5) = $tmp740;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
// line 246
frost$core$Int64 $tmp742 = (frost$core$Int64) {0};
ITable* $tmp743 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp743->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp743 = $tmp743->next;
}
$fn745 $tmp744 = $tmp743->methods[0];
frost$core$Int64 $tmp746 = $tmp744(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp747 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp748 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp742, $tmp746, $tmp747);
frost$core$Int64 $tmp749 = $tmp748.min;
*(&local6) = $tmp749;
frost$core$Int64 $tmp750 = $tmp748.max;
frost$core$Bit $tmp751 = $tmp748.inclusive;
bool $tmp752 = $tmp751.value;
frost$core$Int64 $tmp753 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp754 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp753);
if ($tmp752) goto block19; else goto block20;
block19:;
int64_t $tmp755 = $tmp749.value;
int64_t $tmp756 = $tmp750.value;
bool $tmp757 = $tmp755 <= $tmp756;
frost$core$Bit $tmp758 = (frost$core$Bit) {$tmp757};
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block16; else goto block17;
block20:;
int64_t $tmp760 = $tmp749.value;
int64_t $tmp761 = $tmp750.value;
bool $tmp762 = $tmp760 < $tmp761;
frost$core$Bit $tmp763 = (frost$core$Bit) {$tmp762};
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block16; else goto block17;
block16:;
// line 247
frost$core$Int64 $tmp765 = *(&local6);
frost$core$Object* $tmp766 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(param2, $tmp765);
frost$core$Int64* $tmp767 = &((org$frostlang$frostc$ASTNode*) $tmp766)->$rawValue;
frost$core$Int64 $tmp768 = *$tmp767;
frost$core$Int64 $tmp769 = (frost$core$Int64) {22};
frost$core$Bit $tmp770 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp768, $tmp769);
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp772 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$ASTNode*) $tmp766)->$data + 0);
org$frostlang$frostc$Position $tmp773 = *$tmp772;
*(&local7) = $tmp773;
frost$core$String** $tmp774 = (frost$core$String**) (((org$frostlang$frostc$ASTNode*) $tmp766)->$data + 16);
frost$core$String* $tmp775 = *$tmp774;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
frost$core$String* $tmp776 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
*(&local8) = $tmp775;
// line 249
frost$collections$Array* $tmp777 = *(&local5);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp778 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp779 = (frost$core$Int64) {34};
org$frostlang$frostc$Position $tmp780 = *(&local7);
frost$core$String* $tmp781 = *(&local8);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp782 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp783 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp784 = *(&local7);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp785 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp786 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp787 = *(&local4);
frost$core$Int64 $tmp788 = *(&local6);
org$frostlang$frostc$Type* $tmp789 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp787, $tmp788);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp785, $tmp786, $tmp789);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp782, $tmp783, $tmp784, $tmp785);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp778, $tmp779, $tmp780, $tmp781, $tmp782);
frost$collections$Array$add$frost$collections$Array$T($tmp777, ((frost$core$Object*) $tmp778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$String* $tmp790 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
*(&local8) = ((frost$core$String*) NULL);
goto block21;
block23:;
// line 254
frost$core$Int64 $tmp791 = (frost$core$Int64) {254};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s792, $tmp791);
abort(); // unreachable
block21:;
frost$core$Frost$unref$frost$core$Object$Q($tmp766);
goto block18;
block18:;
frost$core$Int64 $tmp793 = *(&local6);
int64_t $tmp794 = $tmp750.value;
int64_t $tmp795 = $tmp793.value;
int64_t $tmp796 = $tmp794 - $tmp795;
frost$core$Int64 $tmp797 = (frost$core$Int64) {$tmp796};
frost$core$UInt64 $tmp798 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp797);
if ($tmp752) goto block25; else goto block26;
block25:;
uint64_t $tmp799 = $tmp798.value;
uint64_t $tmp800 = $tmp754.value;
bool $tmp801 = $tmp799 >= $tmp800;
frost$core$Bit $tmp802 = (frost$core$Bit) {$tmp801};
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block24; else goto block17;
block26:;
uint64_t $tmp804 = $tmp798.value;
uint64_t $tmp805 = $tmp754.value;
bool $tmp806 = $tmp804 > $tmp805;
frost$core$Bit $tmp807 = (frost$core$Bit) {$tmp806};
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block24; else goto block17;
block24:;
int64_t $tmp809 = $tmp793.value;
int64_t $tmp810 = $tmp753.value;
int64_t $tmp811 = $tmp809 + $tmp810;
frost$core$Int64 $tmp812 = (frost$core$Int64) {$tmp811};
*(&local6) = $tmp812;
goto block16;
block17:;
// line 258
org$frostlang$frostc$Type* $tmp813 = *(&local3);
org$frostlang$frostc$Type* $tmp814 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp813);
org$frostlang$frostc$Type* $tmp815 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp814);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
org$frostlang$frostc$Type* $tmp816 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
*(&local9) = $tmp815;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
// line 259
frost$core$Int64 $tmp817 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp818 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp817);
frost$collections$Array* $tmp819 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp820 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp819);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp821 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp822 = (frost$core$Int64) {26};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp823 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp824 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp825 = *(&local9);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp823, $tmp824, $tmp825);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp821, $tmp822, param1, $tmp823);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp826 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp827 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp826, $tmp827);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp828 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp829 = (frost$core$Int64) {38};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp828, $tmp829, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp826, ((frost$core$Object*) $tmp828));
org$frostlang$frostc$FixedArray* $tmp830 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp826);
org$frostlang$frostc$IR$Value* $tmp831 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp818, $tmp820, $tmp821, $tmp830, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
org$frostlang$frostc$Type* $tmp832 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp833 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp834 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp835 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = $tmp831;
goto block1;
block13:;
org$frostlang$frostc$Type* $tmp836 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp837 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block10;
block10:;
// line 267
frost$collections$IdentityMap** $tmp838 = &param0->lambdaTypes;
frost$collections$IdentityMap* $tmp839 = *$tmp838;
frost$core$Object* $tmp840 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp839, ((frost$core$Object*) param3));
*(&local10) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp840)));
frost$collections$HashSet* $tmp841 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
*(&local10) = ((frost$collections$HashSet*) $tmp840);
frost$core$Frost$unref$frost$core$Object$Q($tmp840);
// line 268
frost$collections$HashSet* $tmp842 = *(&local10);
frost$core$Bit $tmp843 = frost$core$Bit$init$builtin_bit($tmp842 != NULL);
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block27; else goto block28;
block27:;
// line 269
frost$collections$HashSet* $tmp845 = *(&local10);
ITable* $tmp846 = ((frost$collections$CollectionView*) $tmp845)->$class->itable;
while ($tmp846->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp846 = $tmp846->next;
}
$fn848 $tmp847 = $tmp846->methods[0];
frost$core$Int64 $tmp849 = $tmp847(((frost$collections$CollectionView*) $tmp845));
frost$core$Int64 $tmp850 = (frost$core$Int64) {1};
int64_t $tmp851 = $tmp849.value;
int64_t $tmp852 = $tmp850.value;
bool $tmp853 = $tmp851 > $tmp852;
frost$core$Bit $tmp854 = (frost$core$Bit) {$tmp853};
bool $tmp855 = $tmp854.value;
if ($tmp855) goto block29; else goto block31;
block29:;
// line 270
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp856 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$HashSet* $tmp857 = *(&local10);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp856, ((frost$collections$CollectionView*) $tmp857));
*(&local11) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$collections$Array* $tmp858 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
*(&local11) = $tmp856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
// line 271
frost$collections$Array* $tmp859 = *(&local11);
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp861 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp861, ((frost$core$Int8*) org$frostlang$frostc$expression$Closure$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$Bit), ((frost$core$Immutable*) NULL));
ITable* $tmp862 = ((frost$collections$ListView*) $tmp859)->$class->itable;
while ($tmp862->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp862 = $tmp862->next;
}
$fn864 $tmp863 = $tmp862->methods[12];
frost$collections$ListView* $tmp865 = $tmp863(((frost$collections$ListView*) $tmp859), ((frost$core$MutableMethod*) $tmp861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
// line 272
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp866 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp866, &$s867);
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
frost$core$MutableString* $tmp868 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
*(&local12) = $tmp866;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
// line 273
frost$threads$MessageQueue** $tmp869 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp870 = *$tmp869;
*(&local13) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
frost$threads$MessageQueue* $tmp871 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
*(&local13) = $tmp870;
// line 274
frost$collections$Array* $tmp872 = *(&local11);
ITable* $tmp873 = ((frost$collections$Iterable*) $tmp872)->$class->itable;
while ($tmp873->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp873 = $tmp873->next;
}
$fn875 $tmp874 = $tmp873->methods[0];
frost$collections$Iterator* $tmp876 = $tmp874(((frost$collections$Iterable*) $tmp872));
goto block32;
block32:;
ITable* $tmp877 = $tmp876->$class->itable;
while ($tmp877->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp877 = $tmp877->next;
}
$fn879 $tmp878 = $tmp877->methods[0];
frost$core$Bit $tmp880 = $tmp878($tmp876);
bool $tmp881 = $tmp880.value;
if ($tmp881) goto block34; else goto block33;
block33:;
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp882 = $tmp876->$class->itable;
while ($tmp882->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp882 = $tmp882->next;
}
$fn884 $tmp883 = $tmp882->methods[1];
frost$core$Object* $tmp885 = $tmp883($tmp876);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp885)));
org$frostlang$frostc$Type* $tmp886 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
*(&local14) = ((org$frostlang$frostc$Type*) $tmp885);
// line 275
frost$core$MutableString* $tmp887 = *(&local12);
org$frostlang$frostc$Type* $tmp888 = *(&local14);
frost$core$String* $tmp889 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s890, ((frost$core$Object*) $tmp888));
frost$core$String* $tmp891 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp889, &$s892);
frost$core$MutableString$append$frost$core$String($tmp887, $tmp891);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
// line 276
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp893 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp893);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
frost$threads$MessageQueue** $tmp894 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp895 = *$tmp894;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
frost$threads$MessageQueue** $tmp896 = &param0->errorQueue;
*$tmp896 = $tmp893;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
// line 277
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp897 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp898 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp899 = *(&local14);
frost$core$Bit $tmp900 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp897, $tmp898, $tmp899, $tmp900);
org$frostlang$frostc$IR$Value* $tmp901 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp897);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
// line 279
frost$threads$MessageQueue** $tmp902 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp903 = *$tmp902;
frost$core$Bit $tmp904 = frost$threads$MessageQueue$hasMessage$R$frost$core$Bit($tmp903);
bool $tmp905 = $tmp904.value;
if ($tmp905) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp906 = (frost$core$Int64) {279};
org$frostlang$frostc$Position$wrapper* $tmp907;
$tmp907 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp907->value = param1;
frost$core$String* $tmp908 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s909, ((frost$core$Object*) $tmp907));
frost$core$String* $tmp910 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp908, &$s911);
org$frostlang$frostc$Type* $tmp912 = *(&local14);
frost$core$String* $tmp913 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s914, ((frost$core$Object*) $tmp912));
frost$core$String* $tmp915 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp913, &$s916);
frost$core$String* $tmp917 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp910, $tmp915);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s918, $tmp906, $tmp917);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
abort(); // unreachable
block35:;
// line 282
goto block37;
block37:;
frost$threads$MessageQueue** $tmp919 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp920 = *$tmp919;
frost$core$Bit $tmp921 = frost$threads$MessageQueue$hasMessage$R$frost$core$Bit($tmp920);
bool $tmp922 = $tmp921.value;
if ($tmp922) goto block38; else goto block39;
block38:;
// line 283
frost$threads$MessageQueue** $tmp923 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp924 = *$tmp923;
frost$core$Immutable* $tmp925 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp924);
frost$core$Int64* $tmp926 = &((org$frostlang$frostc$Compiler$Message*) $tmp925)->$rawValue;
frost$core$Int64 $tmp927 = *$tmp926;
frost$core$Int64 $tmp928 = (frost$core$Int64) {1};
frost$core$Bit $tmp929 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp927, $tmp928);
bool $tmp930 = $tmp929.value;
if ($tmp930) goto block41; else goto block42;
block41:;
frost$io$File** $tmp931 = (frost$io$File**) (((org$frostlang$frostc$Compiler$Message*) $tmp925)->$data + 0);
frost$io$File* $tmp932 = *$tmp931;
org$frostlang$frostc$Position* $tmp933 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$Compiler$Message*) $tmp925)->$data + 8);
org$frostlang$frostc$Position $tmp934 = *$tmp933;
frost$core$String** $tmp935 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp925)->$data + 24);
frost$core$String* $tmp936 = *$tmp935;
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
frost$core$String* $tmp937 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
*(&local15) = $tmp936;
// line 285
frost$core$MutableString* $tmp938 = *(&local12);
frost$core$String* $tmp939 = *(&local15);
frost$core$String* $tmp940 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s941, $tmp939);
frost$core$String* $tmp942 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp940, &$s943);
frost$core$MutableString$append$frost$core$String($tmp938, $tmp942);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$core$String* $tmp944 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
*(&local15) = ((frost$core$String*) NULL);
goto block40;
block42:;
frost$core$Int64 $tmp945 = (frost$core$Int64) {0};
frost$core$Bit $tmp946 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp927, $tmp945);
bool $tmp947 = $tmp946.value;
if ($tmp947) goto block43; else goto block40;
block43:;
frost$io$File** $tmp948 = (frost$io$File**) (((org$frostlang$frostc$Compiler$Message*) $tmp925)->$data + 0);
frost$io$File* $tmp949 = *$tmp948;
org$frostlang$frostc$Position* $tmp950 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$Compiler$Message*) $tmp925)->$data + 8);
org$frostlang$frostc$Position $tmp951 = *$tmp950;
frost$core$String** $tmp952 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp925)->$data + 24);
frost$core$String* $tmp953 = *$tmp952;
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
frost$core$String* $tmp954 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
*(&local16) = $tmp953;
// line 288
frost$core$MutableString* $tmp955 = *(&local12);
frost$core$String* $tmp956 = *(&local16);
frost$core$String* $tmp957 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s958, $tmp956);
frost$core$String* $tmp959 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp957, &$s960);
frost$core$MutableString$append$frost$core$String($tmp955, $tmp959);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
frost$core$String* $tmp961 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
*(&local16) = ((frost$core$String*) NULL);
goto block40;
block40:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
goto block37;
block39:;
frost$core$Frost$unref$frost$core$Object$Q($tmp885);
org$frostlang$frostc$Type* $tmp962 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
goto block32;
block34:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
// line 293
frost$threads$MessageQueue* $tmp963 = *(&local13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
frost$threads$MessageQueue** $tmp964 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp965 = *$tmp964;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
frost$threads$MessageQueue** $tmp966 = &param0->errorQueue;
*$tmp966 = $tmp963;
// line 294
frost$core$MutableString* $tmp967 = *(&local12);
frost$core$String* $tmp968 = frost$core$MutableString$finish$R$frost$core$String($tmp967);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp968);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
// line 295
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$threads$MessageQueue* $tmp969 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
*(&local13) = ((frost$threads$MessageQueue*) NULL);
frost$core$MutableString* $tmp970 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
*(&local12) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp971 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
*(&local11) = ((frost$collections$Array*) NULL);
frost$collections$HashSet* $tmp972 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
*(&local10) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block31:;
// line 1
// line 298
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp973 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp974 = (frost$core$Int64) {3};
frost$collections$HashSet* $tmp975 = *(&local10);
ITable* $tmp976 = ((frost$collections$Iterable*) $tmp975)->$class->itable;
while ($tmp976->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp976 = $tmp976->next;
}
$fn978 $tmp977 = $tmp976->methods[0];
frost$collections$Iterator* $tmp979 = $tmp977(((frost$collections$Iterable*) $tmp975));
ITable* $tmp980 = $tmp979->$class->itable;
while ($tmp980->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp980 = $tmp980->next;
}
$fn982 $tmp981 = $tmp980->methods[1];
frost$core$Object* $tmp983 = $tmp981($tmp979);
frost$core$Bit $tmp984 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp973, $tmp974, ((org$frostlang$frostc$Type*) $tmp983), $tmp984);
org$frostlang$frostc$IR$Value* $tmp985 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp973);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
frost$core$Frost$unref$frost$core$Object$Q($tmp983);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
// line 300
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp986 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
*(&local10) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block30:;
goto block28;
block28:;
// line 303
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s987);
// line 305
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp988 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
*(&local10) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block1:;
org$frostlang$frostc$IR$Value* $tmp989 = *(&local0);
frost$core$Bit $tmp990 = frost$core$Bit$init$builtin_bit($tmp989 != NULL);
bool $tmp991 = $tmp990.value;
if ($tmp991) goto block2; else goto block3;
block2:;
*(&local2) = $tmp990;
goto block4;
block3:;
frost$core$Int64* $tmp992 = &param0->errorCount;
frost$core$Int64 $tmp993 = *$tmp992;
frost$core$Int64 $tmp994 = (frost$core$Int64) {0};
int64_t $tmp995 = $tmp993.value;
int64_t $tmp996 = $tmp994.value;
bool $tmp997 = $tmp995 > $tmp996;
frost$core$Bit $tmp998 = (frost$core$Bit) {$tmp997};
*(&local2) = $tmp998;
goto block4;
block4:;
frost$core$Bit $tmp999 = *(&local2);
bool $tmp1000 = $tmp999.value;
if ($tmp1000) goto block5; else goto block6;
block5:;
*(&local1) = $tmp999;
goto block7;
block6:;
frost$core$Bit* $tmp1001 = &param0->reportErrors;
frost$core$Bit $tmp1002 = *$tmp1001;
frost$core$Bit $tmp1003 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1002);
*(&local1) = $tmp1003;
goto block7;
block7:;
frost$core$Bit $tmp1004 = *(&local1);
bool $tmp1005 = $tmp1004.value;
if ($tmp1005) goto block8; else goto block9;
block8:;
org$frostlang$frostc$IR$Value* $tmp1006 = *(&local0);
return $tmp1006;
block9:;
frost$core$Int64 $tmp1007 = (frost$core$Int64) {234};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1008, $tmp1007, &$s1009);
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
org$frostlang$frostc$Type* local25 = NULL;
org$frostlang$frostc$Type* local26 = NULL;
frost$collections$Array* local27 = NULL;
frost$core$Int64 local28;
org$frostlang$frostc$Type$Kind local29;
org$frostlang$frostc$IR$Value* local30 = NULL;
// line 312
frost$core$Int64* $tmp1010 = &param0->closureCount;
frost$core$Int64 $tmp1011 = *$tmp1010;
frost$core$Int64 $tmp1012 = (frost$core$Int64) {1};
int64_t $tmp1013 = $tmp1011.value;
int64_t $tmp1014 = $tmp1012.value;
int64_t $tmp1015 = $tmp1013 + $tmp1014;
frost$core$Int64 $tmp1016 = (frost$core$Int64) {$tmp1015};
frost$core$Int64* $tmp1017 = &param0->closureCount;
*$tmp1017 = $tmp1016;
// line 313
frost$core$Int64* $tmp1018 = &param0->closureCount;
frost$core$Int64 $tmp1019 = *$tmp1018;
frost$core$Int64$wrapper* $tmp1020;
$tmp1020 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1020->value = $tmp1019;
frost$core$String* $tmp1021 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1022, ((frost$core$Object*) $tmp1020));
frost$core$String* $tmp1023 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1021, &$s1024);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
frost$core$String* $tmp1025 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
*(&local0) = $tmp1023;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
// line 314
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1026 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1026);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
frost$collections$Array* $tmp1027 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
*(&local1) = $tmp1026;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
// line 315
ITable* $tmp1028 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp1028->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1028 = $tmp1028->next;
}
$fn1030 $tmp1029 = $tmp1028->methods[0];
frost$collections$Iterator* $tmp1031 = $tmp1029(((frost$collections$Iterable*) param3));
goto block1;
block1:;
ITable* $tmp1032 = $tmp1031->$class->itable;
while ($tmp1032->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1032 = $tmp1032->next;
}
$fn1034 $tmp1033 = $tmp1032->methods[0];
frost$core$Bit $tmp1035 = $tmp1033($tmp1031);
bool $tmp1036 = $tmp1035.value;
if ($tmp1036) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1037 = $tmp1031->$class->itable;
while ($tmp1037->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1037 = $tmp1037->next;
}
$fn1039 $tmp1038 = $tmp1037->methods[1];
frost$core$Object* $tmp1040 = $tmp1038($tmp1031);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1040)));
org$frostlang$frostc$ASTNode* $tmp1041 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp1040);
// line 316
org$frostlang$frostc$ASTNode* $tmp1042 = *(&local2);
frost$core$Int64* $tmp1043 = &$tmp1042->$rawValue;
frost$core$Int64 $tmp1044 = *$tmp1043;
frost$core$Int64 $tmp1045 = (frost$core$Int64) {34};
frost$core$Bit $tmp1046 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1044, $tmp1045);
bool $tmp1047 = $tmp1046.value;
if ($tmp1047) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp1048 = (org$frostlang$frostc$Position*) ($tmp1042->$data + 0);
org$frostlang$frostc$Position $tmp1049 = *$tmp1048;
frost$core$String** $tmp1050 = (frost$core$String**) ($tmp1042->$data + 16);
frost$core$String* $tmp1051 = *$tmp1050;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
frost$core$String* $tmp1052 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
*(&local3) = $tmp1051;
org$frostlang$frostc$ASTNode** $tmp1053 = (org$frostlang$frostc$ASTNode**) ($tmp1042->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1054 = *$tmp1053;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
org$frostlang$frostc$ASTNode* $tmp1055 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
*(&local4) = $tmp1054;
// line 318
org$frostlang$frostc$Scanner** $tmp1056 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1057 = *$tmp1056;
org$frostlang$frostc$ASTNode* $tmp1058 = *(&local4);
org$frostlang$frostc$Type* $tmp1059 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1057, $tmp1058);
org$frostlang$frostc$Type* $tmp1060 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1059);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
org$frostlang$frostc$Type* $tmp1061 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
*(&local5) = $tmp1060;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
// line 319
org$frostlang$frostc$Type* $tmp1062 = *(&local5);
frost$core$Bit $tmp1063 = frost$core$Bit$init$builtin_bit($tmp1062 == NULL);
bool $tmp1064 = $tmp1063.value;
if ($tmp1064) goto block7; else goto block8;
block7:;
// line 320
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1065 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1066 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1067 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1040);
org$frostlang$frostc$ASTNode* $tmp1068 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
frost$collections$Array* $tmp1069 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1070 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
// line 322
frost$collections$Array* $tmp1071 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp1072 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp1073 = *(&local3);
org$frostlang$frostc$Type* $tmp1074 = *(&local5);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp1072, $tmp1073, $tmp1074);
frost$collections$Array$add$frost$collections$Array$T($tmp1071, ((frost$core$Object*) $tmp1072));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
org$frostlang$frostc$Type* $tmp1075 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1076 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1077 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 325
frost$core$Int64 $tmp1078 = (frost$core$Int64) {325};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1079, $tmp1078);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1040);
org$frostlang$frostc$ASTNode* $tmp1080 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
// line 329
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// line 330
frost$core$Bit $tmp1081 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp1082 = $tmp1081.value;
if ($tmp1082) goto block9; else goto block11;
block9:;
// line 331
org$frostlang$frostc$Scanner** $tmp1083 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1084 = *$tmp1083;
org$frostlang$frostc$Type* $tmp1085 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1084, param4);
org$frostlang$frostc$Type* $tmp1086 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1085);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
org$frostlang$frostc$Type* $tmp1087 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
*(&local6) = $tmp1086;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
// line 332
org$frostlang$frostc$Type* $tmp1088 = *(&local6);
frost$core$Bit $tmp1089 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1090 = $tmp1089.value;
if ($tmp1090) goto block12; else goto block13;
block12:;
// line 333
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1091 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1092 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1093 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block13:;
goto block10;
block11:;
// line 1
// line 337
org$frostlang$frostc$Type* $tmp1094 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
org$frostlang$frostc$Type* $tmp1095 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
*(&local6) = $tmp1094;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
// line 338
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1096;
$tmp1096 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1096->value = param2;
frost$core$Int64 $tmp1097 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp1098 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1097);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1099;
$tmp1099 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1099->value = $tmp1098;
ITable* $tmp1100 = ((frost$core$Equatable*) $tmp1096)->$class->itable;
while ($tmp1100->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1100 = $tmp1100->next;
}
$fn1102 $tmp1101 = $tmp1100->methods[0];
frost$core$Bit $tmp1103 = $tmp1101(((frost$core$Equatable*) $tmp1096), ((frost$core$Equatable*) $tmp1099));
bool $tmp1104 = $tmp1103.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1099)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1096)));
if ($tmp1104) goto block14; else goto block15;
block14:;
// line 339
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s1105);
// line 340
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1106 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1107 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1108 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block15:;
goto block10;
block10:;
// line 343
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp1109 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Stack** $tmp1110 = &param0->currentMethod;
frost$collections$Stack* $tmp1111 = *$tmp1110;
frost$core$Int64 $tmp1112 = (frost$core$Int64) {0};
frost$core$Object* $tmp1113 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1111, $tmp1112);
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp1114 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp1114);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1109, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1113)), ((frost$core$Object*) ((frost$collections$Map*) $tmp1114)));
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
org$frostlang$frostc$Pair* $tmp1115 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
*(&local7) = $tmp1109;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
frost$core$Frost$unref$frost$core$Object$Q($tmp1113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
// line 345
frost$collections$Stack** $tmp1116 = &param0->captures;
frost$collections$Stack* $tmp1117 = *$tmp1116;
org$frostlang$frostc$Pair* $tmp1118 = *(&local7);
frost$collections$Stack$push$frost$collections$Stack$T($tmp1117, ((frost$core$Object*) $tmp1118));
// line 346
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp1119 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp1120 = (frost$core$Int64) {16};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp1119, $tmp1120);
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
org$frostlang$frostc$Annotations* $tmp1121 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
*(&local8) = $tmp1119;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
// line 347
FROST_ASSERT(136 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp1122 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(136, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$collections$Stack** $tmp1123 = &param0->currentClass;
frost$collections$Stack* $tmp1124 = *$tmp1123;
frost$core$Int64 $tmp1125 = (frost$core$Int64) {0};
frost$core$Object* $tmp1126 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1124, $tmp1125);
org$frostlang$frostc$Annotations* $tmp1127 = *(&local8);
frost$core$String* $tmp1128 = *(&local0);
frost$collections$Array* $tmp1129 = *(&local1);
org$frostlang$frostc$Type* $tmp1130 = *(&local6);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp1122, ((org$frostlang$frostc$ClassDecl*) $tmp1126), param1, ((frost$core$String*) NULL), $tmp1127, param2, $tmp1128, ((frost$collections$Array*) NULL), $tmp1129, $tmp1130, param5);
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
org$frostlang$frostc$MethodDecl* $tmp1131 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
*(&local9) = $tmp1122;
frost$core$Frost$unref$frost$core$Object$Q($tmp1126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
// line 351
frost$core$Bit* $tmp1132 = &param0->writeCode;
frost$core$Bit $tmp1133 = *$tmp1132;
*(&local10) = $tmp1133;
// line 352
frost$core$Bit* $tmp1134 = &param0->reportErrors;
frost$core$Bit $tmp1135 = *$tmp1134;
*(&local11) = $tmp1135;
// line 353
frost$core$Bit $tmp1136 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp1137 = &param0->writeCode;
*$tmp1137 = $tmp1136;
// line 354
frost$core$Bit $tmp1138 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp1139 = &param0->reportErrors;
*$tmp1139 = $tmp1138;
// line 355
frost$collections$Stack** $tmp1140 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1141 = *$tmp1140;
*(&local12) = ((frost$collections$Stack*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
frost$collections$Stack* $tmp1142 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
*(&local12) = $tmp1141;
// line 356
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp1143 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp1143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
frost$collections$Stack** $tmp1144 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1145 = *$tmp1144;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
frost$collections$Stack** $tmp1146 = &param0->enclosingContexts;
*$tmp1146 = $tmp1143;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
// line 357
org$frostlang$frostc$MethodDecl* $tmp1147 = *(&local9);
org$frostlang$frostc$SymbolTable** $tmp1148 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1149 = *$tmp1148;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp1147, $tmp1149);
// line 358
frost$collections$Stack* $tmp1150 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
frost$collections$Stack** $tmp1151 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1152 = *$tmp1151;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
frost$collections$Stack** $tmp1153 = &param0->enclosingContexts;
*$tmp1153 = $tmp1150;
// line 359
frost$core$Bit $tmp1154 = *(&local10);
frost$core$Bit* $tmp1155 = &param0->writeCode;
*$tmp1155 = $tmp1154;
// line 360
frost$core$Bit $tmp1156 = *(&local11);
frost$core$Bit* $tmp1157 = &param0->reportErrors;
*$tmp1157 = $tmp1156;
// line 362
// line 363
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 364
org$frostlang$frostc$Pair* $tmp1158 = *(&local7);
frost$core$Object** $tmp1159 = &$tmp1158->second;
frost$core$Object* $tmp1160 = *$tmp1159;
ITable* $tmp1161 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1160))->$class->itable;
while ($tmp1161->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1161 = $tmp1161->next;
}
$fn1163 $tmp1162 = $tmp1161->methods[0];
frost$core$Int64 $tmp1164 = $tmp1162(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1160)));
frost$core$Int64 $tmp1165 = (frost$core$Int64) {0};
int64_t $tmp1166 = $tmp1164.value;
int64_t $tmp1167 = $tmp1165.value;
bool $tmp1168 = $tmp1166 != $tmp1167;
frost$core$Bit $tmp1169 = (frost$core$Bit) {$tmp1168};
bool $tmp1170 = $tmp1169.value;
if ($tmp1170) goto block16; else goto block18;
block16:;
// line 366
org$frostlang$frostc$MethodDecl* $tmp1171 = *(&local9);
org$frostlang$frostc$Pair* $tmp1172 = *(&local7);
frost$core$Object** $tmp1173 = &$tmp1172->second;
frost$core$Object* $tmp1174 = *$tmp1173;
ITable* $tmp1175 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1174))->$class->itable;
while ($tmp1175->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1175 = $tmp1175->next;
}
$fn1177 $tmp1176 = $tmp1175->methods[4];
frost$collections$Iterator* $tmp1178 = $tmp1176(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1174)));
ITable* $tmp1179 = $tmp1178->$class->itable;
while ($tmp1179->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1179 = $tmp1179->next;
}
$fn1181 $tmp1180 = $tmp1179->methods[7];
frost$collections$Array* $tmp1182 = $tmp1180($tmp1178);
org$frostlang$frostc$ClassDecl* $tmp1183 = org$frostlang$frostc$expression$Closure$createClosureClass$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlang$frostc$Compiler$Capture$GT$R$org$frostlang$frostc$ClassDecl(param0, $tmp1171, ((frost$collections$CollectionView*) $tmp1182));
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
org$frostlang$frostc$ClassDecl* $tmp1184 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
*(&local15) = $tmp1183;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
// line 367
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1185 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1185);
*(&local16) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
frost$collections$Array* $tmp1186 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
*(&local16) = $tmp1185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
// line 368
org$frostlang$frostc$Pair* $tmp1187 = *(&local7);
frost$core$Object** $tmp1188 = &$tmp1187->second;
frost$core$Object* $tmp1189 = *$tmp1188;
ITable* $tmp1190 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp1189))->$class->itable;
while ($tmp1190->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1190 = $tmp1190->next;
}
$fn1192 $tmp1191 = $tmp1190->methods[4];
frost$collections$Iterator* $tmp1193 = $tmp1191(((frost$collections$MapView*) ((frost$collections$Map*) $tmp1189)));
goto block19;
block19:;
ITable* $tmp1194 = $tmp1193->$class->itable;
while ($tmp1194->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1194 = $tmp1194->next;
}
$fn1196 $tmp1195 = $tmp1194->methods[0];
frost$core$Bit $tmp1197 = $tmp1195($tmp1193);
bool $tmp1198 = $tmp1197.value;
if ($tmp1198) goto block21; else goto block20;
block20:;
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp1199 = $tmp1193->$class->itable;
while ($tmp1199->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1199 = $tmp1199->next;
}
$fn1201 $tmp1200 = $tmp1199->methods[1];
frost$core$Object* $tmp1202 = $tmp1200($tmp1193);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp1202)));
org$frostlang$frostc$Compiler$Capture* $tmp1203 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) $tmp1202);
// line 369
org$frostlang$frostc$Compiler$Capture* $tmp1204 = *(&local17);
frost$core$Int64* $tmp1205 = &$tmp1204->$rawValue;
frost$core$Int64 $tmp1206 = *$tmp1205;
frost$core$Int64 $tmp1207 = (frost$core$Int64) {0};
frost$core$Bit $tmp1208 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1206, $tmp1207);
bool $tmp1209 = $tmp1208.value;
if ($tmp1209) goto block23; else goto block24;
block23:;
org$frostlang$frostc$Variable** $tmp1210 = (org$frostlang$frostc$Variable**) ($tmp1204->$data + 0);
org$frostlang$frostc$Variable* $tmp1211 = *$tmp1210;
*(&local18) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
org$frostlang$frostc$Variable* $tmp1212 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
*(&local18) = $tmp1211;
// line 371
frost$collections$Array* $tmp1213 = *(&local16);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1214 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1215 = (frost$core$Int64) {22};
org$frostlang$frostc$Variable* $tmp1216 = *(&local18);
frost$core$String** $tmp1217 = &((org$frostlang$frostc$Symbol*) $tmp1216)->name;
frost$core$String* $tmp1218 = *$tmp1217;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1214, $tmp1215, param1, $tmp1218);
frost$collections$Array$add$frost$collections$Array$T($tmp1213, ((frost$core$Object*) $tmp1214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
org$frostlang$frostc$Variable* $tmp1219 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
*(&local18) = ((org$frostlang$frostc$Variable*) NULL);
goto block22;
block24:;
frost$core$Int64 $tmp1220 = (frost$core$Int64) {2};
frost$core$Bit $tmp1221 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1206, $tmp1220);
bool $tmp1222 = $tmp1221.value;
if ($tmp1222) goto block25; else goto block26;
block25:;
// line 374
frost$collections$Array* $tmp1223 = *(&local16);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1224 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1225 = (frost$core$Int64) {39};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1224, $tmp1225, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1223, ((frost$core$Object*) $tmp1224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
goto block22;
block26:;
frost$core$Int64 $tmp1226 = (frost$core$Int64) {1};
frost$core$Bit $tmp1227 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1206, $tmp1226);
bool $tmp1228 = $tmp1227.value;
if ($tmp1228) goto block27; else goto block22;
block27:;
org$frostlang$frostc$FieldDecl** $tmp1229 = (org$frostlang$frostc$FieldDecl**) ($tmp1204->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp1230 = *$tmp1229;
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
org$frostlang$frostc$FieldDecl* $tmp1231 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
*(&local19) = $tmp1230;
// line 377
frost$collections$Array* $tmp1232 = *(&local16);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1233 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1234 = (frost$core$Int64) {16};
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1235 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1236 = (frost$core$Int64) {22};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1235, $tmp1236, param1, &$s1237);
org$frostlang$frostc$FieldDecl* $tmp1238 = *(&local19);
frost$core$String** $tmp1239 = &((org$frostlang$frostc$Symbol*) $tmp1238)->name;
frost$core$String* $tmp1240 = *$tmp1239;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp1233, $tmp1234, param1, $tmp1235, $tmp1240);
frost$collections$Array$add$frost$collections$Array$T($tmp1232, ((frost$core$Object*) $tmp1233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
org$frostlang$frostc$FieldDecl* $tmp1241 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block22;
block22:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1202);
org$frostlang$frostc$Compiler$Capture* $tmp1242 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
*(&local17) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
// line 383
frost$collections$Stack** $tmp1243 = &param0->captures;
frost$collections$Stack* $tmp1244 = *$tmp1243;
frost$core$Object* $tmp1245 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1244);
frost$core$Frost$unref$frost$core$Object$Q($tmp1245);
// line 384
frost$collections$Array** $tmp1246 = &param0->pendingClasses;
frost$collections$Array* $tmp1247 = *$tmp1246;
org$frostlang$frostc$ClassDecl* $tmp1248 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp1247, ((frost$core$Object*) $tmp1248));
// line 385
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1249 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1250 = (frost$core$Int64) {14};
org$frostlang$frostc$ClassDecl* $tmp1251 = *(&local15);
org$frostlang$frostc$Type** $tmp1252 = &$tmp1251->type;
org$frostlang$frostc$Type* $tmp1253 = *$tmp1252;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1249, $tmp1250, $tmp1253);
frost$collections$Array* $tmp1254 = *(&local16);
org$frostlang$frostc$FixedArray* $tmp1255 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1254);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1256 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1257 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1256, $tmp1257);
org$frostlang$frostc$IR$Value* $tmp1258 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1249, ((frost$collections$ListView*) $tmp1255), $tmp1256);
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
org$frostlang$frostc$IR$Value* $tmp1259 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
*(&local20) = $tmp1258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
// line 387
org$frostlang$frostc$IR$Value* $tmp1260 = *(&local20);
frost$core$Bit $tmp1261 = frost$core$Bit$init$builtin_bit($tmp1260 == NULL);
bool $tmp1262 = $tmp1261.value;
if ($tmp1262) goto block28; else goto block29;
block28:;
// line 388
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1263 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1264 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1265 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp1266 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp1267 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
*(&local12) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1268 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp1269 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp1270 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1271 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1272 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1273 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block29:;
// line 390
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1274 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1275 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp1276 = *(&local20);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1274, $tmp1275, param1, $tmp1276);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
org$frostlang$frostc$ASTNode* $tmp1277 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
*(&local14) = $tmp1274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
// line 391
org$frostlang$frostc$ClassDecl* $tmp1278 = *(&local15);
org$frostlang$frostc$Type** $tmp1279 = &$tmp1278->type;
org$frostlang$frostc$Type* $tmp1280 = *$tmp1279;
frost$core$Bit $tmp1281 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1280);
*(&local13) = $tmp1281;
org$frostlang$frostc$IR$Value* $tmp1282 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1283 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1284 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
*(&local15) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block17;
block18:;
// line 1
// line 395
frost$collections$Stack** $tmp1285 = &param0->captures;
frost$collections$Stack* $tmp1286 = *$tmp1285;
frost$core$Object* $tmp1287 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1286);
frost$core$Frost$unref$frost$core$Object$Q($tmp1287);
// line 396
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp1288 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp1288);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
frost$collections$Stack** $tmp1289 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1290 = *$tmp1289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
frost$collections$Stack** $tmp1291 = &param0->enclosingContexts;
*$tmp1291 = $tmp1288;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
// line 397
org$frostlang$frostc$MethodDecl* $tmp1292 = *(&local9);
org$frostlang$frostc$SymbolTable** $tmp1293 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1294 = *$tmp1293;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp1292, $tmp1294);
// line 398
frost$collections$Stack* $tmp1295 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
frost$collections$Stack** $tmp1296 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1297 = *$tmp1296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
frost$collections$Stack** $tmp1298 = &param0->enclosingContexts;
*$tmp1298 = $tmp1295;
// line 399
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1299 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1300 = (frost$core$Int64) {31};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1299, $tmp1300, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
org$frostlang$frostc$ASTNode* $tmp1301 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
*(&local14) = $tmp1299;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
// line 400
frost$core$Bit $tmp1302 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp1302;
goto block17;
block17:;
// line 402
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1303 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1303);
*(&local21) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
frost$collections$Array* $tmp1304 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
*(&local21) = $tmp1303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
// line 403
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
// line 404
org$frostlang$frostc$MethodDecl* $tmp1305 = *(&local9);
org$frostlang$frostc$Annotations** $tmp1306 = &$tmp1305->annotations;
org$frostlang$frostc$Annotations* $tmp1307 = *$tmp1306;
frost$core$Bit $tmp1308 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1307);
bool $tmp1309 = $tmp1308.value;
if ($tmp1309) goto block30; else goto block32;
block30:;
// line 405
org$frostlang$frostc$MethodDecl* $tmp1310 = *(&local9);
org$frostlang$frostc$Type* $tmp1311 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp1310);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
org$frostlang$frostc$Type* $tmp1312 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
*(&local22) = $tmp1311;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
goto block31;
block32:;
// line 1
// line 408
org$frostlang$frostc$MethodDecl* $tmp1313 = *(&local9);
org$frostlang$frostc$MethodDecl* $tmp1314 = *(&local9);
frost$core$Weak** $tmp1315 = &$tmp1314->owner;
frost$core$Weak* $tmp1316 = *$tmp1315;
frost$core$Object* $tmp1317 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1316);
org$frostlang$frostc$Type** $tmp1318 = &((org$frostlang$frostc$ClassDecl*) $tmp1317)->type;
org$frostlang$frostc$Type* $tmp1319 = *$tmp1318;
frost$core$Bit $tmp1320 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp1321 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp1313, $tmp1319, $tmp1320);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
org$frostlang$frostc$Type* $tmp1322 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local22) = $tmp1321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
frost$core$Frost$unref$frost$core$Object$Q($tmp1317);
goto block31;
block31:;
// line 410
org$frostlang$frostc$Type* $tmp1323 = *(&local22);
org$frostlang$frostc$Type* $tmp1324 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1323);
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
org$frostlang$frostc$Type* $tmp1325 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
*(&local23) = $tmp1324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
// line 411
frost$collections$Array* $tmp1326 = *(&local21);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1327 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1328 = (frost$core$Int64) {26};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1329 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1330 = (frost$core$Int64) {3};
org$frostlang$frostc$MethodDecl* $tmp1331 = *(&local9);
org$frostlang$frostc$Type* $tmp1332 = *(&local23);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp1329, $tmp1330, $tmp1331, $tmp1332);
org$frostlang$frostc$Type* $tmp1333 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp1334 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1333);
org$frostlang$frostc$IR$Value* $tmp1335 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1329, $tmp1334);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1327, $tmp1328, param1, $tmp1335);
frost$collections$Array$add$frost$collections$Array$T($tmp1326, ((frost$core$Object*) $tmp1327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
// line 413
frost$collections$Array* $tmp1336 = *(&local21);
org$frostlang$frostc$ASTNode* $tmp1337 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp1336, ((frost$core$Object*) $tmp1337));
// line 414
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
// line 415
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
// line 416
frost$core$Bit $tmp1338 = *(&local13);
bool $tmp1339 = $tmp1338.value;
if ($tmp1339) goto block33; else goto block35;
block33:;
// line 417
org$frostlang$frostc$Type* $tmp1340 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
org$frostlang$frostc$Type* $tmp1341 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
*(&local24) = $tmp1340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
// line 418
org$frostlang$frostc$MethodDecl* $tmp1342 = *(&local9);
org$frostlang$frostc$Type* $tmp1343 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp1342);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
org$frostlang$frostc$Type* $tmp1344 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
*(&local25) = $tmp1343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
goto block34;
block35:;
// line 1
// line 421
org$frostlang$frostc$Type* $tmp1345 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
org$frostlang$frostc$Type* $tmp1346 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
*(&local24) = $tmp1345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
// line 422
org$frostlang$frostc$MethodDecl* $tmp1347 = *(&local9);
org$frostlang$frostc$Type* $tmp1348 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp1347);
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
org$frostlang$frostc$Type* $tmp1349 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
*(&local26) = $tmp1348;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
// line 423
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1350 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1350);
*(&local27) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$collections$Array* $tmp1351 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
*(&local27) = $tmp1350;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
// line 424
frost$core$Int64 $tmp1352 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp1353 = *(&local26);
org$frostlang$frostc$FixedArray* $tmp1354 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1353);
ITable* $tmp1355 = ((frost$collections$CollectionView*) $tmp1354)->$class->itable;
while ($tmp1355->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1355 = $tmp1355->next;
}
$fn1357 $tmp1356 = $tmp1355->methods[0];
frost$core$Int64 $tmp1358 = $tmp1356(((frost$collections$CollectionView*) $tmp1354));
frost$core$Int64 $tmp1359 = (frost$core$Int64) {1};
int64_t $tmp1360 = $tmp1358.value;
int64_t $tmp1361 = $tmp1359.value;
int64_t $tmp1362 = $tmp1360 - $tmp1361;
frost$core$Int64 $tmp1363 = (frost$core$Int64) {$tmp1362};
frost$core$Bit $tmp1364 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1365 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1352, $tmp1363, $tmp1364);
frost$core$Int64 $tmp1366 = $tmp1365.min;
*(&local28) = $tmp1366;
frost$core$Int64 $tmp1367 = $tmp1365.max;
frost$core$Bit $tmp1368 = $tmp1365.inclusive;
bool $tmp1369 = $tmp1368.value;
frost$core$Int64 $tmp1370 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1371 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1370);
if ($tmp1369) goto block39; else goto block40;
block39:;
int64_t $tmp1372 = $tmp1366.value;
int64_t $tmp1373 = $tmp1367.value;
bool $tmp1374 = $tmp1372 <= $tmp1373;
frost$core$Bit $tmp1375 = (frost$core$Bit) {$tmp1374};
bool $tmp1376 = $tmp1375.value;
if ($tmp1376) goto block36; else goto block37;
block40:;
int64_t $tmp1377 = $tmp1366.value;
int64_t $tmp1378 = $tmp1367.value;
bool $tmp1379 = $tmp1377 < $tmp1378;
frost$core$Bit $tmp1380 = (frost$core$Bit) {$tmp1379};
bool $tmp1381 = $tmp1380.value;
if ($tmp1381) goto block36; else goto block37;
block36:;
// line 425
frost$collections$Array* $tmp1382 = *(&local27);
org$frostlang$frostc$Type* $tmp1383 = *(&local26);
frost$core$Int64 $tmp1384 = *(&local28);
org$frostlang$frostc$Type* $tmp1385 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1383, $tmp1384);
frost$collections$Array$add$frost$collections$Array$T($tmp1382, ((frost$core$Object*) $tmp1385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
goto block38;
block38:;
frost$core$Int64 $tmp1386 = *(&local28);
int64_t $tmp1387 = $tmp1367.value;
int64_t $tmp1388 = $tmp1386.value;
int64_t $tmp1389 = $tmp1387 - $tmp1388;
frost$core$Int64 $tmp1390 = (frost$core$Int64) {$tmp1389};
frost$core$UInt64 $tmp1391 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1390);
if ($tmp1369) goto block42; else goto block43;
block42:;
uint64_t $tmp1392 = $tmp1391.value;
uint64_t $tmp1393 = $tmp1371.value;
bool $tmp1394 = $tmp1392 >= $tmp1393;
frost$core$Bit $tmp1395 = (frost$core$Bit) {$tmp1394};
bool $tmp1396 = $tmp1395.value;
if ($tmp1396) goto block41; else goto block37;
block43:;
uint64_t $tmp1397 = $tmp1391.value;
uint64_t $tmp1398 = $tmp1371.value;
bool $tmp1399 = $tmp1397 > $tmp1398;
frost$core$Bit $tmp1400 = (frost$core$Bit) {$tmp1399};
bool $tmp1401 = $tmp1400.value;
if ($tmp1401) goto block41; else goto block37;
block41:;
int64_t $tmp1402 = $tmp1386.value;
int64_t $tmp1403 = $tmp1370.value;
int64_t $tmp1404 = $tmp1402 + $tmp1403;
frost$core$Int64 $tmp1405 = (frost$core$Int64) {$tmp1404};
*(&local28) = $tmp1405;
goto block36;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
// line 427
// line 428
org$frostlang$frostc$MethodDecl* $tmp1406 = *(&local9);
org$frostlang$frostc$MethodDecl$Kind* $tmp1407 = &$tmp1406->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1408 = *$tmp1407;
frost$core$Int64 $tmp1409 = $tmp1408.$rawValue;
frost$core$Int64 $tmp1410 = (frost$core$Int64) {0};
frost$core$Bit $tmp1411 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1409, $tmp1410);
bool $tmp1412 = $tmp1411.value;
if ($tmp1412) goto block45; else goto block46;
block45:;
// line 429
frost$core$Int64 $tmp1413 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1414 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1413);
*(&local29) = $tmp1414;
goto block44;
block46:;
frost$core$Int64 $tmp1415 = (frost$core$Int64) {1};
frost$core$Bit $tmp1416 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1409, $tmp1415);
bool $tmp1417 = $tmp1416.value;
if ($tmp1417) goto block47; else goto block48;
block47:;
// line 430
frost$core$Int64 $tmp1418 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1419 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1418);
*(&local29) = $tmp1419;
goto block44;
block48:;
// line 431
frost$core$Int64 $tmp1420 = (frost$core$Int64) {431};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1421, $tmp1420);
abort(); // unreachable
block44:;
// line 433
org$frostlang$frostc$Type$Kind $tmp1422 = *(&local29);
frost$collections$Array* $tmp1423 = *(&local27);
org$frostlang$frostc$Type* $tmp1424 = *(&local26);
org$frostlang$frostc$Type* $tmp1425 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp1424);
org$frostlang$frostc$Type* $tmp1426 = *(&local26);
frost$core$Int64* $tmp1427 = &$tmp1426->priority;
frost$core$Int64 $tmp1428 = *$tmp1427;
org$frostlang$frostc$Type* $tmp1429 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(param1, $tmp1422, ((frost$collections$ListView*) $tmp1423), $tmp1425, $tmp1428);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
org$frostlang$frostc$Type* $tmp1430 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
*(&local25) = $tmp1429;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
frost$collections$Array* $tmp1431 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
*(&local27) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp1432 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
goto block34;
block34:;
// line 436
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1433 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1434 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp1435 = *(&local24);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1433, $tmp1434, $tmp1435);
frost$collections$Array* $tmp1436 = *(&local21);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1437 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1438 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1437, $tmp1438);
org$frostlang$frostc$IR$Value* $tmp1439 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1433, ((frost$collections$ListView*) $tmp1436), $tmp1437);
org$frostlang$frostc$Type* $tmp1440 = *(&local25);
org$frostlang$frostc$IR$Value* $tmp1441 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1439, $tmp1440);
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
org$frostlang$frostc$IR$Value* $tmp1442 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
*(&local30) = $tmp1441;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
// line 438
org$frostlang$frostc$IR$Value* $tmp1443 = *(&local30);
org$frostlang$frostc$IR$Value* $tmp1444 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1443, param6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
org$frostlang$frostc$IR$Value* $tmp1445 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1446 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1447 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1448 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1449 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1450 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
*(&local21) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1451 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp1452 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
*(&local12) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1453 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp1454 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
*(&local8) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp1455 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1456 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1457 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1458 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1444;

}
void org$frostlang$frostc$expression$Closure$init(org$frostlang$frostc$expression$Closure* param0) {

return;

}
void org$frostlang$frostc$expression$Closure$cleanup(org$frostlang$frostc$expression$Closure* param0) {

// line 23
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

