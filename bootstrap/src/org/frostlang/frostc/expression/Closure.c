#include "org/frostlang/frostc/expression/Closure.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Compiler/Capture.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/FieldDecl/Kind.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/io/File.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/MapView.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/Key.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Scanner.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "frost/collections/HashSet.h"
#include "frost/core/MutableString.h"
#include "frost/threads/MessageQueue.h"
#include "frost/threads/ScopedLock.h"
#include "frost/collections/IdentityMap.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/MutableMethod.h"
#include "frost/threads/Lock.h"
#include "org/frostlang/frostc/Compiler/Message.h"
#include "frost/collections/Map.h"
#include "org/frostlang/frostc/expression/Call.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Closure$class_type org$frostlang$frostc$expression$Closure$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Closure$cleanup} };

typedef frost$core$Int64 (*$fn15)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn29)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn44)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn63)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn127)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn141)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn156)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn175)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn237)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn251)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn266)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn285)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn308)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn312)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn317)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn461)(frost$core$Object*);
typedef frost$core$Int64 (*$fn479)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn493)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn508)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn527)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn564)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn578)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn593)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn612)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn634)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn653)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn657)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn662)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn841)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn845)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn850)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn977)(frost$core$Object*);
typedef frost$core$Int64 (*$fn1009)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1023)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1038)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1057)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1089)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1113)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn1226)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1282)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1295)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1308)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1321)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1345)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1424)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1437)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1450)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1463)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1487)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1523)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1579)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1603)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1616)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1629)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1642)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1666)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1728)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1777)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1790)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1803)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1816)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1829)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1845)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1859)(frost$core$Object*);
typedef frost$core$Int64 (*$fn1875)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1931)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1944)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1957)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1970)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1989)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2055)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2079)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2092)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2105)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2118)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2142)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2192)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2204)(org$frostlang$frostc$Type*, org$frostlang$frostc$Type*);
typedef frost$collections$ListView* (*$fn2212)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn2223)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2227)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2232)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2238)(frost$core$Object*);
typedef frost$core$String* (*$fn2271)(frost$core$Object*);
typedef frost$core$String* (*$fn2279)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2367)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn2371)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2390)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2401)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2405)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2410)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2481)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2502)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2516)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2531)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2550)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2588)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2602)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2617)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2636)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2686)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn2700)(frost$collections$MapView*);
typedef frost$collections$Array* (*$fn2704)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2715)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn2719)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2724)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2929)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2968)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2981)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2994)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3007)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3026)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3110)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3123)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3136)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3149)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3173)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65", 39, -4892953817862826951, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -6780593757603597528, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -6780593757603597528, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x6e\x6f\x6e\x2d\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x20\x6f\x77\x6e\x65\x72\x20\x66\x6f\x72\x20", 27, -2189502249250316127, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -6780593757603597528, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -6780593757603597528, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s536 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s573 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -6780593757603597528, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s621 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s629 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65", 9, -4675300513998866085, NULL };
static frost$core$String $s638 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s695 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s737 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s761 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 5866430320110526525, NULL };
static frost$core$String $s772 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s773 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 5866430320110526525, NULL };
static frost$core$String $s781 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 5866430320110526525, NULL };
static frost$core$String $s797 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, -733330526605839853, NULL };
static frost$core$String $s827 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s961 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 5866430320110526525, NULL };
static frost$core$String $s979 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s1017 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s1018 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -6780593757603597528, NULL };
static frost$core$String $s1031 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s1065 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1066 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s1234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1468 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1474 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1531 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1587 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1646 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1647 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1653 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1661 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1736 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1833 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1834 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 97, 8312561504095511799, NULL };
static frost$core$String $s1840 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1862 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, -5098893480802846476, NULL };
static frost$core$String $s1864 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x6c\x61\x6d\x62\x64\x61\x20\x77\x69\x74\x68\x20\x77\x72\x6f\x6e\x67\x20", 31, 8296972873421398743, NULL };
static frost$core$String $s1866 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 20, 2029680644997683659, NULL };
static frost$core$String $s1984 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2002 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2003 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 119, 1578211334716446145, NULL };
static frost$core$String $s2009 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2029 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2063 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s2129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x65\x72\x72\x6f\x72", 12, 5959780354246604584, NULL };
static frost$core$String $s2241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x77\x68\x65\x6e\x20\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x64\x20\x61\x73\x20\x27", 26, -4042546728974569170, NULL };
static frost$core$String $s2243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3a", 2, 557192943631749204, NULL };
static frost$core$String $s2274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x72\x65\x63\x65\x69\x76\x65\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 51, 3365978283385468850, NULL };
static frost$core$String $s2276 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20", 6, -1493373441645224251, NULL };
static frost$core$String $s2282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x20", 5, -4937494473629816297, NULL };
static frost$core$String $s2284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, -3892980340820393091, NULL };
static frost$core$String $s2327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, -3892980340820393091, NULL };
static frost$core$String $s2349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x74\x79\x70\x65\x20\x77\x61\x73\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x61\x6e\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x63\x6f\x6e\x74\x65\x78\x74", 67, -2078875877935671909, NULL };
static frost$core$String $s2393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 10, 2350954303234509524, NULL };
static frost$core$String $s2395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2455 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 4631530323501320402, NULL };
static frost$core$String $s2510 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s2511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -6780593757603597528, NULL };
static frost$core$String $s2524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s2558 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2559 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s2596 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s2597 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -6780593757603597528, NULL };
static frost$core$String $s2610 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s2644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2645 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s2769 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s2869 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s2924 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3021 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3039 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3040 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 119, 1578211334716446145, NULL };
static frost$core$String $s3046 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3096 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s3153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s3160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };

org$frostlang$frostc$Type* org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:26
frost$collections$Stack** $tmp2 = &param0->currentClass;
frost$collections$Stack* $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Closure.frost:26:40
frost$core$Int64 $tmp5 = (frost$core$Int64) {0u};
int64_t $tmp6 = $tmp4.value;
int64_t $tmp7 = $tmp5.value;
bool $tmp8 = $tmp6 >= $tmp7;
frost$core$Bit $tmp9 = (frost$core$Bit) {$tmp8};
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp11 = &$tmp3->contents;
frost$collections$Array* $tmp12 = *$tmp11;
ITable* $tmp13 = ((frost$collections$CollectionView*) $tmp12)->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[0];
frost$core$Int64 $tmp16 = $tmp14(((frost$collections$CollectionView*) $tmp12));
int64_t $tmp17 = $tmp4.value;
int64_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 < $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp22 = (frost$core$Int64) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp25 = &$tmp3->contents;
frost$collections$Array* $tmp26 = *$tmp25;
ITable* $tmp27 = ((frost$collections$CollectionView*) $tmp26)->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp27 = $tmp27->next;
}
$fn29 $tmp28 = $tmp27->methods[0];
frost$core$Int64 $tmp30 = $tmp28(((frost$collections$CollectionView*) $tmp26));
int64_t $tmp31 = $tmp30.value;
int64_t $tmp32 = $tmp4.value;
bool $tmp33 = $tmp31 > $tmp32;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp36 = (frost$core$Int64) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s37, $tmp36);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp38 = &$tmp3->contents;
frost$collections$Array* $tmp39 = *$tmp38;
frost$collections$Array** $tmp40 = &$tmp3->contents;
frost$collections$Array* $tmp41 = *$tmp40;
ITable* $tmp42 = ((frost$collections$CollectionView*) $tmp41)->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp42 = $tmp42->next;
}
$fn44 $tmp43 = $tmp42->methods[0];
frost$core$Int64 $tmp45 = $tmp43(((frost$collections$CollectionView*) $tmp41));
frost$core$Int64 $tmp46 = (frost$core$Int64) {1u};
int64_t $tmp47 = $tmp45.value;
int64_t $tmp48 = $tmp46.value;
int64_t $tmp49 = $tmp47 - $tmp48;
frost$core$Int64 $tmp50 = (frost$core$Int64) {$tmp49};
int64_t $tmp51 = $tmp50.value;
int64_t $tmp52 = $tmp4.value;
int64_t $tmp53 = $tmp51 - $tmp52;
frost$core$Int64 $tmp54 = (frost$core$Int64) {$tmp53};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp55 = (frost$core$Int64) {0u};
int64_t $tmp56 = $tmp54.value;
int64_t $tmp57 = $tmp55.value;
bool $tmp58 = $tmp56 >= $tmp57;
frost$core$Bit $tmp59 = (frost$core$Bit) {$tmp58};
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block11; else goto block10;
block11:;
ITable* $tmp61 = ((frost$collections$CollectionView*) $tmp39)->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[0];
frost$core$Int64 $tmp64 = $tmp62(((frost$collections$CollectionView*) $tmp39));
int64_t $tmp65 = $tmp54.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 < $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp70 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp73 = &$tmp39->data;
frost$core$Object** $tmp74 = *$tmp73;
int64_t $tmp75 = $tmp54.value;
frost$core$Object* $tmp76 = $tmp74[$tmp75];
frost$core$Frost$ref$frost$core$Object$Q($tmp76);
frost$core$Frost$ref$frost$core$Object$Q($tmp76);
frost$core$Frost$unref$frost$core$Object$Q($tmp76);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp76)));
org$frostlang$frostc$ClassDecl* $tmp77 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp76);
frost$core$Frost$unref$frost$core$Object$Q($tmp76);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:27
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:28
org$frostlang$frostc$ClassDecl* $tmp78 = *(&local0);
org$frostlang$frostc$Annotations** $tmp79 = &$tmp78->annotations;
org$frostlang$frostc$Annotations* $tmp80 = *$tmp79;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from Closure.frost:28:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:155
frost$core$Int64* $tmp81 = &$tmp80->flags;
frost$core$Int64 $tmp82 = *$tmp81;
frost$core$Int64 $tmp83 = (frost$core$Int64) {8192u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp84 = $tmp82.value;
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84 & $tmp85;
frost$core$Int64 $tmp87 = (frost$core$Int64) {$tmp86};
frost$core$Int64 $tmp88 = (frost$core$Int64) {0u};
int64_t $tmp89 = $tmp87.value;
int64_t $tmp90 = $tmp88.value;
bool $tmp91 = $tmp89 != $tmp90;
frost$core$Bit $tmp92 = (frost$core$Bit) {$tmp91};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Closure.frost:28:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp93 = $tmp92.value;
bool $tmp94 = !$tmp93;
frost$core$Bit $tmp95 = (frost$core$Bit) {$tmp94};
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:29
org$frostlang$frostc$ClassDecl* $tmp97 = *(&local0);
org$frostlang$frostc$Type** $tmp98 = &$tmp97->type;
org$frostlang$frostc$Type* $tmp99 = *$tmp98;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
org$frostlang$frostc$ClassDecl* $tmp100 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp99;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:31
org$frostlang$frostc$ClassDecl* $tmp101 = *(&local0);
frost$core$Weak** $tmp102 = &$tmp101->owner;
frost$core$Weak* $tmp103 = *$tmp102;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Closure.frost:31:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp104 = &$tmp103->_valid;
frost$core$Bit $tmp105 = *$tmp104;
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp107 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s108, $tmp107);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp109 = &$tmp103->value;
frost$core$Object* $tmp110 = *$tmp109;
frost$core$Frost$ref$frost$core$Object$Q($tmp110);
frost$core$Bit $tmp111 = (frost$core$Bit) {((org$frostlang$frostc$ClassDecl*) $tmp110) != NULL};
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp113 = (frost$core$Int64) {31u};
frost$collections$Stack** $tmp114 = &param0->currentClass;
frost$collections$Stack* $tmp115 = *$tmp114;
frost$core$Int64 $tmp116 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Closure.frost:31:90
frost$core$Int64 $tmp117 = (frost$core$Int64) {0u};
int64_t $tmp118 = $tmp116.value;
int64_t $tmp119 = $tmp117.value;
bool $tmp120 = $tmp118 >= $tmp119;
frost$core$Bit $tmp121 = (frost$core$Bit) {$tmp120};
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block28; else goto block27;
block28:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp123 = &$tmp115->contents;
frost$collections$Array* $tmp124 = *$tmp123;
ITable* $tmp125 = ((frost$collections$CollectionView*) $tmp124)->$class->itable;
while ($tmp125->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp125 = $tmp125->next;
}
$fn127 $tmp126 = $tmp125->methods[0];
frost$core$Int64 $tmp128 = $tmp126(((frost$collections$CollectionView*) $tmp124));
int64_t $tmp129 = $tmp116.value;
int64_t $tmp130 = $tmp128.value;
bool $tmp131 = $tmp129 < $tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp134 = (frost$core$Int64) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s135, $tmp134, &$s136);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp137 = &$tmp115->contents;
frost$collections$Array* $tmp138 = *$tmp137;
ITable* $tmp139 = ((frost$collections$CollectionView*) $tmp138)->$class->itable;
while ($tmp139->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp139 = $tmp139->next;
}
$fn141 $tmp140 = $tmp139->methods[0];
frost$core$Int64 $tmp142 = $tmp140(((frost$collections$CollectionView*) $tmp138));
int64_t $tmp143 = $tmp142.value;
int64_t $tmp144 = $tmp116.value;
bool $tmp145 = $tmp143 > $tmp144;
frost$core$Bit $tmp146 = (frost$core$Bit) {$tmp145};
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp148 = (frost$core$Int64) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s149, $tmp148);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp150 = &$tmp115->contents;
frost$collections$Array* $tmp151 = *$tmp150;
frost$collections$Array** $tmp152 = &$tmp115->contents;
frost$collections$Array* $tmp153 = *$tmp152;
ITable* $tmp154 = ((frost$collections$CollectionView*) $tmp153)->$class->itable;
while ($tmp154->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp154 = $tmp154->next;
}
$fn156 $tmp155 = $tmp154->methods[0];
frost$core$Int64 $tmp157 = $tmp155(((frost$collections$CollectionView*) $tmp153));
frost$core$Int64 $tmp158 = (frost$core$Int64) {1u};
int64_t $tmp159 = $tmp157.value;
int64_t $tmp160 = $tmp158.value;
int64_t $tmp161 = $tmp159 - $tmp160;
frost$core$Int64 $tmp162 = (frost$core$Int64) {$tmp161};
int64_t $tmp163 = $tmp162.value;
int64_t $tmp164 = $tmp116.value;
int64_t $tmp165 = $tmp163 - $tmp164;
frost$core$Int64 $tmp166 = (frost$core$Int64) {$tmp165};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp167 = (frost$core$Int64) {0u};
int64_t $tmp168 = $tmp166.value;
int64_t $tmp169 = $tmp167.value;
bool $tmp170 = $tmp168 >= $tmp169;
frost$core$Bit $tmp171 = (frost$core$Bit) {$tmp170};
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block35; else goto block34;
block35:;
ITable* $tmp173 = ((frost$collections$CollectionView*) $tmp151)->$class->itable;
while ($tmp173->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp173 = $tmp173->next;
}
$fn175 $tmp174 = $tmp173->methods[0];
frost$core$Int64 $tmp176 = $tmp174(((frost$collections$CollectionView*) $tmp151));
int64_t $tmp177 = $tmp166.value;
int64_t $tmp178 = $tmp176.value;
bool $tmp179 = $tmp177 < $tmp178;
frost$core$Bit $tmp180 = (frost$core$Bit) {$tmp179};
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp182 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s183, $tmp182, &$s184);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp185 = &$tmp151->data;
frost$core$Object** $tmp186 = *$tmp185;
int64_t $tmp187 = $tmp166.value;
frost$core$Object* $tmp188 = $tmp186[$tmp187];
frost$core$Frost$ref$frost$core$Object$Q($tmp188);
frost$core$Frost$ref$frost$core$Object$Q($tmp188);
frost$core$Frost$unref$frost$core$Object$Q($tmp188);
frost$core$String** $tmp189 = &((org$frostlang$frostc$ClassDecl*) $tmp188)->name;
frost$core$String* $tmp190 = *$tmp189;
frost$core$String* $tmp191 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s192, $tmp190);
frost$core$String* $tmp193 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp191, &$s194);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s195, $tmp113, $tmp193);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
frost$core$Frost$unref$frost$core$Object$Q($tmp188);
abort(); // unreachable
block23:;
frost$core$Frost$unref$frost$core$Object$Q($tmp110);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:32
org$frostlang$frostc$ClassDecl* $tmp196 = *(&local0);
frost$core$Weak** $tmp197 = &$tmp196->owner;
frost$core$Weak* $tmp198 = *$tmp197;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Closure.frost:32:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp199 = &$tmp198->_valid;
frost$core$Bit $tmp200 = *$tmp199;
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp202 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s203, $tmp202);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp204 = &$tmp198->value;
frost$core$Object* $tmp205 = *$tmp204;
frost$core$Frost$ref$frost$core$Object$Q($tmp205);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp205)));
org$frostlang$frostc$ClassDecl* $tmp206 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp205);
frost$core$Frost$unref$frost$core$Object$Q($tmp205);
goto block12;
block13:;
goto block40;
block40:;

}
org$frostlang$frostc$ClassDecl* org$frostlang$frostc$expression$Closure$createClosureClass$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlang$frostc$Compiler$Capture$GT$R$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodDecl* param1, frost$collections$CollectionView* param2) {

org$frostlang$frostc$Position local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$Compiler$Capture* local2 = NULL;
org$frostlang$frostc$Variable* local3 = NULL;
frost$core$Int64 local4;
frost$core$Int64 local5;
org$frostlang$frostc$ClassDecl$Kind local6;
org$frostlang$frostc$ClassDecl$Kind local7;
org$frostlang$frostc$ClassDecl* local8 = NULL;
frost$collections$Array* local9 = NULL;
frost$collections$Array* local10 = NULL;
org$frostlang$frostc$Compiler$Capture* local11 = NULL;
org$frostlang$frostc$Variable* local12 = NULL;
org$frostlang$frostc$expression$Binary$Operator local13;
org$frostlang$frostc$expression$Binary$Operator local14;
org$frostlang$frostc$FieldDecl* local15 = NULL;
org$frostlang$frostc$expression$Binary$Operator local16;
org$frostlang$frostc$expression$Binary$Operator local17;
org$frostlang$frostc$expression$Binary$Operator local18;
org$frostlang$frostc$expression$Binary$Operator local19;
org$frostlang$frostc$MethodDecl$Kind local20;
org$frostlang$frostc$MethodDecl$Kind local21;
org$frostlang$frostc$MethodDecl* local22 = NULL;
org$frostlang$frostc$MethodDecl$Kind local23;
org$frostlang$frostc$MethodDecl$Kind local24;
org$frostlang$frostc$MethodDecl* local25 = NULL;
org$frostlang$frostc$Compiler$Capture* local26 = NULL;
org$frostlang$frostc$Variable* local27 = NULL;
org$frostlang$frostc$FieldDecl$Kind local28;
org$frostlang$frostc$FieldDecl$Kind local29;
org$frostlang$frostc$FieldDecl* local30 = NULL;
org$frostlang$frostc$FieldDecl* local31 = NULL;
org$frostlang$frostc$FieldDecl$Kind local32;
org$frostlang$frostc$FieldDecl$Kind local33;
org$frostlang$frostc$FieldDecl* local34 = NULL;
org$frostlang$frostc$FieldDecl$Kind local35;
org$frostlang$frostc$FieldDecl$Kind local36;
org$frostlang$frostc$FieldDecl* local37 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:39
org$frostlang$frostc$Position* $tmp207 = &((org$frostlang$frostc$Symbol*) param1)->position;
org$frostlang$frostc$Position $tmp208 = *$tmp207;
*(&local0) = $tmp208;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:40
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp209 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp210 = (frost$core$Int64) {0u};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp209, $tmp210);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
org$frostlang$frostc$Annotations** $tmp211 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp212 = *$tmp211;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
org$frostlang$frostc$Annotations** $tmp213 = &param1->annotations;
*$tmp213 = $tmp209;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:41
frost$core$Int64* $tmp214 = &param0->closureCount;
frost$core$Int64 $tmp215 = *$tmp214;
frost$core$Int64 $tmp216 = (frost$core$Int64) {1u};
int64_t $tmp217 = $tmp215.value;
int64_t $tmp218 = $tmp216.value;
int64_t $tmp219 = $tmp217 + $tmp218;
frost$core$Int64 $tmp220 = (frost$core$Int64) {$tmp219};
frost$core$Int64* $tmp221 = &param0->closureCount;
*$tmp221 = $tmp220;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:42
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp222 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp222);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$collections$Array* $tmp223 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local1) = $tmp222;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:43
frost$collections$Stack** $tmp224 = &param0->currentClass;
frost$collections$Stack* $tmp225 = *$tmp224;
frost$core$Int64 $tmp226 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Closure.frost:43:54
frost$core$Int64 $tmp227 = (frost$core$Int64) {0u};
int64_t $tmp228 = $tmp226.value;
int64_t $tmp229 = $tmp227.value;
bool $tmp230 = $tmp228 >= $tmp229;
frost$core$Bit $tmp231 = (frost$core$Bit) {$tmp230};
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block6; else goto block5;
block6:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp233 = &$tmp225->contents;
frost$collections$Array* $tmp234 = *$tmp233;
ITable* $tmp235 = ((frost$collections$CollectionView*) $tmp234)->$class->itable;
while ($tmp235->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp235 = $tmp235->next;
}
$fn237 $tmp236 = $tmp235->methods[0];
frost$core$Int64 $tmp238 = $tmp236(((frost$collections$CollectionView*) $tmp234));
int64_t $tmp239 = $tmp226.value;
int64_t $tmp240 = $tmp238.value;
bool $tmp241 = $tmp239 < $tmp240;
frost$core$Bit $tmp242 = (frost$core$Bit) {$tmp241};
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp244 = (frost$core$Int64) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s245, $tmp244, &$s246);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp247 = &$tmp225->contents;
frost$collections$Array* $tmp248 = *$tmp247;
ITable* $tmp249 = ((frost$collections$CollectionView*) $tmp248)->$class->itable;
while ($tmp249->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp249 = $tmp249->next;
}
$fn251 $tmp250 = $tmp249->methods[0];
frost$core$Int64 $tmp252 = $tmp250(((frost$collections$CollectionView*) $tmp248));
int64_t $tmp253 = $tmp252.value;
int64_t $tmp254 = $tmp226.value;
bool $tmp255 = $tmp253 > $tmp254;
frost$core$Bit $tmp256 = (frost$core$Bit) {$tmp255};
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp258 = (frost$core$Int64) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s259, $tmp258);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp260 = &$tmp225->contents;
frost$collections$Array* $tmp261 = *$tmp260;
frost$collections$Array** $tmp262 = &$tmp225->contents;
frost$collections$Array* $tmp263 = *$tmp262;
ITable* $tmp264 = ((frost$collections$CollectionView*) $tmp263)->$class->itable;
while ($tmp264->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp264 = $tmp264->next;
}
$fn266 $tmp265 = $tmp264->methods[0];
frost$core$Int64 $tmp267 = $tmp265(((frost$collections$CollectionView*) $tmp263));
frost$core$Int64 $tmp268 = (frost$core$Int64) {1u};
int64_t $tmp269 = $tmp267.value;
int64_t $tmp270 = $tmp268.value;
int64_t $tmp271 = $tmp269 - $tmp270;
frost$core$Int64 $tmp272 = (frost$core$Int64) {$tmp271};
int64_t $tmp273 = $tmp272.value;
int64_t $tmp274 = $tmp226.value;
int64_t $tmp275 = $tmp273 - $tmp274;
frost$core$Int64 $tmp276 = (frost$core$Int64) {$tmp275};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp277 = (frost$core$Int64) {0u};
int64_t $tmp278 = $tmp276.value;
int64_t $tmp279 = $tmp277.value;
bool $tmp280 = $tmp278 >= $tmp279;
frost$core$Bit $tmp281 = (frost$core$Bit) {$tmp280};
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block13; else goto block12;
block13:;
ITable* $tmp283 = ((frost$collections$CollectionView*) $tmp261)->$class->itable;
while ($tmp283->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp283 = $tmp283->next;
}
$fn285 $tmp284 = $tmp283->methods[0];
frost$core$Int64 $tmp286 = $tmp284(((frost$collections$CollectionView*) $tmp261));
int64_t $tmp287 = $tmp276.value;
int64_t $tmp288 = $tmp286.value;
bool $tmp289 = $tmp287 < $tmp288;
frost$core$Bit $tmp290 = (frost$core$Bit) {$tmp289};
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp292 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s293, $tmp292, &$s294);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp295 = &$tmp261->data;
frost$core$Object** $tmp296 = *$tmp295;
int64_t $tmp297 = $tmp276.value;
frost$core$Object* $tmp298 = $tmp296[$tmp297];
frost$core$Frost$ref$frost$core$Object$Q($tmp298);
frost$core$Frost$ref$frost$core$Object$Q($tmp298);
frost$core$Frost$unref$frost$core$Object$Q($tmp298);
org$frostlang$frostc$Type** $tmp299 = &((org$frostlang$frostc$ClassDecl*) $tmp298)->type;
org$frostlang$frostc$Type* $tmp300 = *$tmp299;
frost$core$Bit $tmp301 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp300);
bool $tmp302 = $tmp301.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp298);
if ($tmp302) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:44
frost$collections$Array* $tmp303 = *(&local1);
org$frostlang$frostc$Type** $tmp304 = &param0->IMMUTABLE_TYPE;
org$frostlang$frostc$Type* $tmp305 = *$tmp304;
frost$collections$Array$add$frost$collections$Array$T($tmp303, ((frost$core$Object*) $tmp305));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:45
ITable* $tmp306 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp306->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp306 = $tmp306->next;
}
$fn308 $tmp307 = $tmp306->methods[0];
frost$collections$Iterator* $tmp309 = $tmp307(((frost$collections$Iterable*) param2));
goto block14;
block14:;
ITable* $tmp310 = $tmp309->$class->itable;
while ($tmp310->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp310 = $tmp310->next;
}
$fn312 $tmp311 = $tmp310->methods[0];
frost$core$Bit $tmp313 = $tmp311($tmp309);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block16; else goto block15;
block15:;
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp315 = $tmp309->$class->itable;
while ($tmp315->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp315 = $tmp315->next;
}
$fn317 $tmp316 = $tmp315->methods[1];
frost$core$Object* $tmp318 = $tmp316($tmp309);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp318)));
org$frostlang$frostc$Compiler$Capture* $tmp319 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) $tmp318);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:46
org$frostlang$frostc$Compiler$Capture* $tmp320 = *(&local2);
frost$core$Int64* $tmp321 = &$tmp320->$rawValue;
frost$core$Int64 $tmp322 = *$tmp321;
frost$core$Int64 $tmp323 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:47:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp324 = $tmp322.value;
int64_t $tmp325 = $tmp323.value;
bool $tmp326 = $tmp324 == $tmp325;
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326};
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Variable** $tmp329 = (org$frostlang$frostc$Variable**) ($tmp320->$data + 0);
org$frostlang$frostc$Variable* $tmp330 = *$tmp329;
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
org$frostlang$frostc$Variable* $tmp331 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
*(&local3) = $tmp330;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:48
org$frostlang$frostc$Variable* $tmp332 = *(&local3);
org$frostlang$frostc$Type** $tmp333 = &$tmp332->type;
org$frostlang$frostc$Type* $tmp334 = *$tmp333;
frost$core$Bit $tmp335 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp334);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Closure.frost:48:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp336 = $tmp335.value;
bool $tmp337 = !$tmp336;
frost$core$Bit $tmp338 = (frost$core$Bit) {$tmp337};
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:49
frost$collections$Array* $tmp340 = *(&local1);
// begin inline call to method frost.collections.Array.clear() from Closure.frost:49:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
frost$core$Int64 $tmp341 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp342 = &$tmp340->_count;
*$tmp342 = $tmp341;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
frost$core$Int64 $tmp343 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp344 = &$tmp340->capacity;
frost$core$Int64 $tmp345 = *$tmp344;
frost$core$Bit $tmp346 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp347 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp343, $tmp345, $tmp346);
frost$core$Int64 $tmp348 = $tmp347.min;
*(&local4) = $tmp348;
frost$core$Int64 $tmp349 = $tmp347.max;
frost$core$Bit $tmp350 = $tmp347.inclusive;
bool $tmp351 = $tmp350.value;
frost$core$Int64 $tmp352 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp353 = $tmp352.value;
frost$core$UInt64 $tmp354 = (frost$core$UInt64) {((uint64_t) $tmp353)};
if ($tmp351) goto block29; else goto block30;
block29:;
int64_t $tmp355 = $tmp348.value;
int64_t $tmp356 = $tmp349.value;
bool $tmp357 = $tmp355 <= $tmp356;
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block26; else goto block27;
block30:;
int64_t $tmp360 = $tmp348.value;
int64_t $tmp361 = $tmp349.value;
bool $tmp362 = $tmp360 < $tmp361;
frost$core$Bit $tmp363 = (frost$core$Bit) {$tmp362};
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp365 = &$tmp340->data;
frost$core$Object** $tmp366 = *$tmp365;
frost$core$Int64 $tmp367 = *(&local4);
int64_t $tmp368 = $tmp367.value;
frost$core$Object* $tmp369 = $tmp366[$tmp368];
frost$core$Frost$unref$frost$core$Object$Q($tmp369);
$tmp366[$tmp368] = ((frost$core$Object*) NULL);
frost$core$Int64 $tmp370 = *(&local4);
int64_t $tmp371 = $tmp349.value;
int64_t $tmp372 = $tmp370.value;
int64_t $tmp373 = $tmp371 - $tmp372;
frost$core$Int64 $tmp374 = (frost$core$Int64) {$tmp373};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp375 = $tmp374.value;
frost$core$UInt64 $tmp376 = (frost$core$UInt64) {((uint64_t) $tmp375)};
if ($tmp351) goto block33; else goto block34;
block33:;
uint64_t $tmp377 = $tmp376.value;
uint64_t $tmp378 = $tmp354.value;
bool $tmp379 = $tmp377 >= $tmp378;
frost$core$Bit $tmp380 = (frost$core$Bit) {$tmp379};
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block31; else goto block27;
block34:;
uint64_t $tmp382 = $tmp376.value;
uint64_t $tmp383 = $tmp354.value;
bool $tmp384 = $tmp382 > $tmp383;
frost$core$Bit $tmp385 = (frost$core$Bit) {$tmp384};
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block31; else goto block27;
block31:;
int64_t $tmp387 = $tmp370.value;
int64_t $tmp388 = $tmp352.value;
int64_t $tmp389 = $tmp387 + $tmp388;
frost$core$Int64 $tmp390 = (frost$core$Int64) {$tmp389};
*(&local4) = $tmp390;
goto block26;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:50
org$frostlang$frostc$Variable* $tmp391 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp318);
org$frostlang$frostc$Compiler$Capture* $tmp392 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block16;
block22:;
org$frostlang$frostc$Variable* $tmp393 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
goto block17;
block19:;
frost$core$Int64 $tmp394 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:53:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp395 = $tmp322.value;
int64_t $tmp396 = $tmp394.value;
bool $tmp397 = $tmp395 == $tmp396;
frost$core$Bit $tmp398 = (frost$core$Bit) {$tmp397};
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:54
org$frostlang$frostc$Type* $tmp400 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
frost$core$Bit $tmp401 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp400);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Closure.frost:54:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp402 = $tmp401.value;
bool $tmp403 = !$tmp402;
frost$core$Bit $tmp404 = (frost$core$Bit) {$tmp403};
bool $tmp405 = $tmp404.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
if ($tmp405) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:55
frost$collections$Array* $tmp406 = *(&local1);
// begin inline call to method frost.collections.Array.clear() from Closure.frost:55:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
frost$core$Int64 $tmp407 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp408 = &$tmp406->_count;
*$tmp408 = $tmp407;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
frost$core$Int64 $tmp409 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp410 = &$tmp406->capacity;
frost$core$Int64 $tmp411 = *$tmp410;
frost$core$Bit $tmp412 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp413 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp409, $tmp411, $tmp412);
frost$core$Int64 $tmp414 = $tmp413.min;
*(&local5) = $tmp414;
frost$core$Int64 $tmp415 = $tmp413.max;
frost$core$Bit $tmp416 = $tmp413.inclusive;
bool $tmp417 = $tmp416.value;
frost$core$Int64 $tmp418 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp419 = $tmp418.value;
frost$core$UInt64 $tmp420 = (frost$core$UInt64) {((uint64_t) $tmp419)};
if ($tmp417) goto block46; else goto block47;
block46:;
int64_t $tmp421 = $tmp414.value;
int64_t $tmp422 = $tmp415.value;
bool $tmp423 = $tmp421 <= $tmp422;
frost$core$Bit $tmp424 = (frost$core$Bit) {$tmp423};
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block43; else goto block44;
block47:;
int64_t $tmp426 = $tmp414.value;
int64_t $tmp427 = $tmp415.value;
bool $tmp428 = $tmp426 < $tmp427;
frost$core$Bit $tmp429 = (frost$core$Bit) {$tmp428};
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp431 = &$tmp406->data;
frost$core$Object** $tmp432 = *$tmp431;
frost$core$Int64 $tmp433 = *(&local5);
int64_t $tmp434 = $tmp433.value;
frost$core$Object* $tmp435 = $tmp432[$tmp434];
frost$core$Frost$unref$frost$core$Object$Q($tmp435);
$tmp432[$tmp434] = ((frost$core$Object*) NULL);
frost$core$Int64 $tmp436 = *(&local5);
int64_t $tmp437 = $tmp415.value;
int64_t $tmp438 = $tmp436.value;
int64_t $tmp439 = $tmp437 - $tmp438;
frost$core$Int64 $tmp440 = (frost$core$Int64) {$tmp439};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp441 = $tmp440.value;
frost$core$UInt64 $tmp442 = (frost$core$UInt64) {((uint64_t) $tmp441)};
if ($tmp417) goto block50; else goto block51;
block50:;
uint64_t $tmp443 = $tmp442.value;
uint64_t $tmp444 = $tmp420.value;
bool $tmp445 = $tmp443 >= $tmp444;
frost$core$Bit $tmp446 = (frost$core$Bit) {$tmp445};
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block48; else goto block44;
block51:;
uint64_t $tmp448 = $tmp442.value;
uint64_t $tmp449 = $tmp420.value;
bool $tmp450 = $tmp448 > $tmp449;
frost$core$Bit $tmp451 = (frost$core$Bit) {$tmp450};
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block48; else goto block44;
block48:;
int64_t $tmp453 = $tmp436.value;
int64_t $tmp454 = $tmp418.value;
int64_t $tmp455 = $tmp453 + $tmp454;
frost$core$Int64 $tmp456 = (frost$core$Int64) {$tmp455};
*(&local5) = $tmp456;
goto block43;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:56
frost$core$Frost$unref$frost$core$Object$Q($tmp318);
org$frostlang$frostc$Compiler$Capture* $tmp457 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block16;
block39:;
goto block17;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:60
frost$core$Int64 $tmp458 = (frost$core$Int64) {60u};
org$frostlang$frostc$Compiler$Capture* $tmp459 = *(&local2);
$fn461 $tmp460 = ($fn461) ((frost$core$Object*) $tmp459)->$class->vtable[0];
frost$core$String* $tmp462 = $tmp460(((frost$core$Object*) $tmp459));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s463, $tmp458, $tmp462);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
abort(); // unreachable
block17:;
frost$core$Frost$unref$frost$core$Object$Q($tmp318);
org$frostlang$frostc$Compiler$Capture* $tmp464 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:65
FROST_ASSERT(208 == sizeof(org$frostlang$frostc$ClassDecl));
org$frostlang$frostc$ClassDecl* $tmp465 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$collections$Stack** $tmp466 = &param0->currentClass;
frost$collections$Stack* $tmp467 = *$tmp466;
frost$core$Int64 $tmp468 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Closure.frost:65:54
frost$core$Int64 $tmp469 = (frost$core$Int64) {0u};
int64_t $tmp470 = $tmp468.value;
int64_t $tmp471 = $tmp469.value;
bool $tmp472 = $tmp470 >= $tmp471;
frost$core$Bit $tmp473 = (frost$core$Bit) {$tmp472};
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block55; else goto block54;
block55:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp475 = &$tmp467->contents;
frost$collections$Array* $tmp476 = *$tmp475;
ITable* $tmp477 = ((frost$collections$CollectionView*) $tmp476)->$class->itable;
while ($tmp477->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp477 = $tmp477->next;
}
$fn479 $tmp478 = $tmp477->methods[0];
frost$core$Int64 $tmp480 = $tmp478(((frost$collections$CollectionView*) $tmp476));
int64_t $tmp481 = $tmp468.value;
int64_t $tmp482 = $tmp480.value;
bool $tmp483 = $tmp481 < $tmp482;
frost$core$Bit $tmp484 = (frost$core$Bit) {$tmp483};
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp486 = (frost$core$Int64) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s487, $tmp486, &$s488);
abort(); // unreachable
block53:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp489 = &$tmp467->contents;
frost$collections$Array* $tmp490 = *$tmp489;
ITable* $tmp491 = ((frost$collections$CollectionView*) $tmp490)->$class->itable;
while ($tmp491->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp491 = $tmp491->next;
}
$fn493 $tmp492 = $tmp491->methods[0];
frost$core$Int64 $tmp494 = $tmp492(((frost$collections$CollectionView*) $tmp490));
int64_t $tmp495 = $tmp494.value;
int64_t $tmp496 = $tmp468.value;
bool $tmp497 = $tmp495 > $tmp496;
frost$core$Bit $tmp498 = (frost$core$Bit) {$tmp497};
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block57; else goto block58;
block58:;
frost$core$Int64 $tmp500 = (frost$core$Int64) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s501, $tmp500);
abort(); // unreachable
block57:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp502 = &$tmp467->contents;
frost$collections$Array* $tmp503 = *$tmp502;
frost$collections$Array** $tmp504 = &$tmp467->contents;
frost$collections$Array* $tmp505 = *$tmp504;
ITable* $tmp506 = ((frost$collections$CollectionView*) $tmp505)->$class->itable;
while ($tmp506->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp506 = $tmp506->next;
}
$fn508 $tmp507 = $tmp506->methods[0];
frost$core$Int64 $tmp509 = $tmp507(((frost$collections$CollectionView*) $tmp505));
frost$core$Int64 $tmp510 = (frost$core$Int64) {1u};
int64_t $tmp511 = $tmp509.value;
int64_t $tmp512 = $tmp510.value;
int64_t $tmp513 = $tmp511 - $tmp512;
frost$core$Int64 $tmp514 = (frost$core$Int64) {$tmp513};
int64_t $tmp515 = $tmp514.value;
int64_t $tmp516 = $tmp468.value;
int64_t $tmp517 = $tmp515 - $tmp516;
frost$core$Int64 $tmp518 = (frost$core$Int64) {$tmp517};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp519 = (frost$core$Int64) {0u};
int64_t $tmp520 = $tmp518.value;
int64_t $tmp521 = $tmp519.value;
bool $tmp522 = $tmp520 >= $tmp521;
frost$core$Bit $tmp523 = (frost$core$Bit) {$tmp522};
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block62; else goto block61;
block62:;
ITable* $tmp525 = ((frost$collections$CollectionView*) $tmp503)->$class->itable;
while ($tmp525->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp525 = $tmp525->next;
}
$fn527 $tmp526 = $tmp525->methods[0];
frost$core$Int64 $tmp528 = $tmp526(((frost$collections$CollectionView*) $tmp503));
int64_t $tmp529 = $tmp518.value;
int64_t $tmp530 = $tmp528.value;
bool $tmp531 = $tmp529 < $tmp530;
frost$core$Bit $tmp532 = (frost$core$Bit) {$tmp531};
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp534 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s535, $tmp534, &$s536);
abort(); // unreachable
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp537 = &$tmp503->data;
frost$core$Object** $tmp538 = *$tmp537;
int64_t $tmp539 = $tmp518.value;
frost$core$Object* $tmp540 = $tmp538[$tmp539];
frost$core$Frost$ref$frost$core$Object$Q($tmp540);
frost$core$Frost$ref$frost$core$Object$Q($tmp540);
frost$core$Frost$unref$frost$core$Object$Q($tmp540);
frost$io$File** $tmp541 = &((org$frostlang$frostc$ClassDecl*) $tmp540)->source;
frost$io$File* $tmp542 = *$tmp541;
org$frostlang$frostc$Position $tmp543 = *(&local0);
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp544 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp544);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp545 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp546 = (frost$core$Int64) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp545, $tmp546);
frost$core$Int64 $tmp547 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Closure.frost:66:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp548 = &(&local7)->$rawValue;
*$tmp548 = $tmp547;
org$frostlang$frostc$ClassDecl$Kind $tmp549 = *(&local7);
*(&local6) = $tmp549;
org$frostlang$frostc$ClassDecl$Kind $tmp550 = *(&local6);
frost$collections$Stack** $tmp551 = &param0->currentClass;
frost$collections$Stack* $tmp552 = *$tmp551;
frost$core$Int64 $tmp553 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Closure.frost:67:41
frost$core$Int64 $tmp554 = (frost$core$Int64) {0u};
int64_t $tmp555 = $tmp553.value;
int64_t $tmp556 = $tmp554.value;
bool $tmp557 = $tmp555 >= $tmp556;
frost$core$Bit $tmp558 = (frost$core$Bit) {$tmp557};
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block67; else goto block66;
block67:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp560 = &$tmp552->contents;
frost$collections$Array* $tmp561 = *$tmp560;
ITable* $tmp562 = ((frost$collections$CollectionView*) $tmp561)->$class->itable;
while ($tmp562->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp562 = $tmp562->next;
}
$fn564 $tmp563 = $tmp562->methods[0];
frost$core$Int64 $tmp565 = $tmp563(((frost$collections$CollectionView*) $tmp561));
int64_t $tmp566 = $tmp553.value;
int64_t $tmp567 = $tmp565.value;
bool $tmp568 = $tmp566 < $tmp567;
frost$core$Bit $tmp569 = (frost$core$Bit) {$tmp568};
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block65; else goto block66;
block66:;
frost$core$Int64 $tmp571 = (frost$core$Int64) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s572, $tmp571, &$s573);
abort(); // unreachable
block65:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp574 = &$tmp552->contents;
frost$collections$Array* $tmp575 = *$tmp574;
ITable* $tmp576 = ((frost$collections$CollectionView*) $tmp575)->$class->itable;
while ($tmp576->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp576 = $tmp576->next;
}
$fn578 $tmp577 = $tmp576->methods[0];
frost$core$Int64 $tmp579 = $tmp577(((frost$collections$CollectionView*) $tmp575));
int64_t $tmp580 = $tmp579.value;
int64_t $tmp581 = $tmp553.value;
bool $tmp582 = $tmp580 > $tmp581;
frost$core$Bit $tmp583 = (frost$core$Bit) {$tmp582};
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block69; else goto block70;
block70:;
frost$core$Int64 $tmp585 = (frost$core$Int64) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s586, $tmp585);
abort(); // unreachable
block69:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp587 = &$tmp552->contents;
frost$collections$Array* $tmp588 = *$tmp587;
frost$collections$Array** $tmp589 = &$tmp552->contents;
frost$collections$Array* $tmp590 = *$tmp589;
ITable* $tmp591 = ((frost$collections$CollectionView*) $tmp590)->$class->itable;
while ($tmp591->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp591 = $tmp591->next;
}
$fn593 $tmp592 = $tmp591->methods[0];
frost$core$Int64 $tmp594 = $tmp592(((frost$collections$CollectionView*) $tmp590));
frost$core$Int64 $tmp595 = (frost$core$Int64) {1u};
int64_t $tmp596 = $tmp594.value;
int64_t $tmp597 = $tmp595.value;
int64_t $tmp598 = $tmp596 - $tmp597;
frost$core$Int64 $tmp599 = (frost$core$Int64) {$tmp598};
int64_t $tmp600 = $tmp599.value;
int64_t $tmp601 = $tmp553.value;
int64_t $tmp602 = $tmp600 - $tmp601;
frost$core$Int64 $tmp603 = (frost$core$Int64) {$tmp602};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp604 = (frost$core$Int64) {0u};
int64_t $tmp605 = $tmp603.value;
int64_t $tmp606 = $tmp604.value;
bool $tmp607 = $tmp605 >= $tmp606;
frost$core$Bit $tmp608 = (frost$core$Bit) {$tmp607};
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block74; else goto block73;
block74:;
ITable* $tmp610 = ((frost$collections$CollectionView*) $tmp588)->$class->itable;
while ($tmp610->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp610 = $tmp610->next;
}
$fn612 $tmp611 = $tmp610->methods[0];
frost$core$Int64 $tmp613 = $tmp611(((frost$collections$CollectionView*) $tmp588));
int64_t $tmp614 = $tmp603.value;
int64_t $tmp615 = $tmp613.value;
bool $tmp616 = $tmp614 < $tmp615;
frost$core$Bit $tmp617 = (frost$core$Bit) {$tmp616};
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block72; else goto block73;
block73:;
frost$core$Int64 $tmp619 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s620, $tmp619, &$s621);
abort(); // unreachable
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp622 = &$tmp588->data;
frost$core$Object** $tmp623 = *$tmp622;
int64_t $tmp624 = $tmp603.value;
frost$core$Object* $tmp625 = $tmp623[$tmp624];
frost$core$Frost$ref$frost$core$Object$Q($tmp625);
frost$core$Frost$ref$frost$core$Object$Q($tmp625);
frost$core$Frost$unref$frost$core$Object$Q($tmp625);
frost$core$String** $tmp626 = &((org$frostlang$frostc$ClassDecl*) $tmp625)->name;
frost$core$String* $tmp627 = *$tmp626;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Closure.frost:67:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$core$String* $tmp628 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp627, &$s629);
frost$core$Int64* $tmp630 = &param0->closureCount;
frost$core$Int64 $tmp631 = *$tmp630;
frost$core$Int64$wrapper* $tmp632;
$tmp632 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp632->value = $tmp631;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:67:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn634 $tmp633 = ($fn634) ((frost$core$Object*) $tmp632)->$class->vtable[0];
frost$core$String* $tmp635 = $tmp633(((frost$core$Object*) $tmp632));
frost$core$String* $tmp636 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp628, $tmp635);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$String* $tmp637 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp636, &$s638);
frost$collections$Array* $tmp639 = *(&local1);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp640 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp640);
org$frostlang$frostc$SymbolTable** $tmp641 = &param0->root;
org$frostlang$frostc$SymbolTable* $tmp642 = *$tmp641;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp465, $tmp542, $tmp543, ((frost$collections$MapView*) $tmp544), ((frost$core$String*) NULL), $tmp545, $tmp550, $tmp637, ((frost$collections$ListView*) $tmp639), $tmp640, $tmp642);
*(&local8) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
org$frostlang$frostc$ClassDecl* $tmp643 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
*(&local8) = $tmp465;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$core$Frost$unref$frost$core$Object$Q($tmp625);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
frost$core$Frost$unref$frost$core$Object$Q($tmp540);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:69
org$frostlang$frostc$ClassDecl* $tmp644 = *(&local8);
frost$core$Bit $tmp645 = (frost$core$Bit) {false};
frost$core$Bit* $tmp646 = &$tmp644->external;
*$tmp646 = $tmp645;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp647 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp647);
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
frost$collections$Array* $tmp648 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
*(&local9) = $tmp647;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:73
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp649 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp649);
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$collections$Array* $tmp650 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local10) = $tmp649;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:74
ITable* $tmp651 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp651->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp651 = $tmp651->next;
}
$fn653 $tmp652 = $tmp651->methods[0];
frost$collections$Iterator* $tmp654 = $tmp652(((frost$collections$Iterable*) param2));
goto block77;
block77:;
ITable* $tmp655 = $tmp654->$class->itable;
while ($tmp655->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp655 = $tmp655->next;
}
$fn657 $tmp656 = $tmp655->methods[0];
frost$core$Bit $tmp658 = $tmp656($tmp654);
bool $tmp659 = $tmp658.value;
if ($tmp659) goto block79; else goto block78;
block78:;
*(&local11) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp660 = $tmp654->$class->itable;
while ($tmp660->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp660 = $tmp660->next;
}
$fn662 $tmp661 = $tmp660->methods[1];
frost$core$Object* $tmp663 = $tmp661($tmp654);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp663)));
org$frostlang$frostc$Compiler$Capture* $tmp664 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
*(&local11) = ((org$frostlang$frostc$Compiler$Capture*) $tmp663);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:75
org$frostlang$frostc$Compiler$Capture* $tmp665 = *(&local11);
frost$core$Int64* $tmp666 = &$tmp665->$rawValue;
frost$core$Int64 $tmp667 = *$tmp666;
frost$core$Int64 $tmp668 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:76:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp669 = $tmp667.value;
int64_t $tmp670 = $tmp668.value;
bool $tmp671 = $tmp669 == $tmp670;
frost$core$Bit $tmp672 = (frost$core$Bit) {$tmp671};
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block81; else goto block82;
block81:;
org$frostlang$frostc$Variable** $tmp674 = (org$frostlang$frostc$Variable**) ($tmp665->$data + 0);
org$frostlang$frostc$Variable* $tmp675 = *$tmp674;
*(&local12) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
org$frostlang$frostc$Variable* $tmp676 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local12) = $tmp675;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:77
frost$collections$Array* $tmp677 = *(&local10);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp678 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$Variable* $tmp679 = *(&local12);
frost$core$String** $tmp680 = &((org$frostlang$frostc$Symbol*) $tmp679)->name;
frost$core$String* $tmp681 = *$tmp680;
org$frostlang$frostc$Variable* $tmp682 = *(&local12);
org$frostlang$frostc$Type** $tmp683 = &$tmp682->type;
org$frostlang$frostc$Type* $tmp684 = *$tmp683;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp678, $tmp681, $tmp684);
frost$collections$Array$add$frost$collections$Array$T($tmp677, ((frost$core$Object*) $tmp678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:79
frost$collections$Array* $tmp685 = *(&local9);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp686 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp687 = (frost$core$Int64) {5u};
org$frostlang$frostc$Position $tmp688 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp689 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp690 = (frost$core$Int64) {16u};
org$frostlang$frostc$Position $tmp691 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp692 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp693 = (frost$core$Int64) {22u};
org$frostlang$frostc$Position $tmp694 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp692, $tmp693, $tmp694, &$s695);
org$frostlang$frostc$Variable* $tmp696 = *(&local12);
frost$core$String** $tmp697 = &((org$frostlang$frostc$Symbol*) $tmp696)->name;
frost$core$String* $tmp698 = *$tmp697;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp689, $tmp690, $tmp691, $tmp692, $tmp698);
frost$core$Int64 $tmp699 = (frost$core$Int64) {24u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from Closure.frost:81:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp700 = &(&local14)->$rawValue;
*$tmp700 = $tmp699;
org$frostlang$frostc$expression$Binary$Operator $tmp701 = *(&local14);
*(&local13) = $tmp701;
org$frostlang$frostc$expression$Binary$Operator $tmp702 = *(&local13);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp703 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp704 = (frost$core$Int64) {22u};
org$frostlang$frostc$Position $tmp705 = *(&local0);
org$frostlang$frostc$Variable* $tmp706 = *(&local12);
frost$core$String** $tmp707 = &((org$frostlang$frostc$Symbol*) $tmp706)->name;
frost$core$String* $tmp708 = *$tmp707;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp703, $tmp704, $tmp705, $tmp708);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp686, $tmp687, $tmp688, $tmp689, $tmp702, $tmp703);
frost$collections$Array$add$frost$collections$Array$T($tmp685, ((frost$core$Object*) $tmp686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
org$frostlang$frostc$Variable* $tmp709 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
*(&local12) = ((org$frostlang$frostc$Variable*) NULL);
goto block80;
block82:;
frost$core$Int64 $tmp710 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:83:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp711 = $tmp667.value;
int64_t $tmp712 = $tmp710.value;
bool $tmp713 = $tmp711 == $tmp712;
frost$core$Bit $tmp714 = (frost$core$Bit) {$tmp713};
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block85; else goto block86;
block85:;
org$frostlang$frostc$FieldDecl** $tmp716 = (org$frostlang$frostc$FieldDecl**) ($tmp665->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp717 = *$tmp716;
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
org$frostlang$frostc$FieldDecl* $tmp718 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
*(&local15) = $tmp717;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:84
frost$collections$Array* $tmp719 = *(&local10);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp720 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$FieldDecl* $tmp721 = *(&local15);
frost$core$String** $tmp722 = &((org$frostlang$frostc$Symbol*) $tmp721)->name;
frost$core$String* $tmp723 = *$tmp722;
org$frostlang$frostc$FieldDecl* $tmp724 = *(&local15);
org$frostlang$frostc$Type** $tmp725 = &$tmp724->type;
org$frostlang$frostc$Type* $tmp726 = *$tmp725;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp720, $tmp723, $tmp726);
frost$collections$Array$add$frost$collections$Array$T($tmp719, ((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:86
frost$collections$Array* $tmp727 = *(&local9);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp728 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp729 = (frost$core$Int64) {5u};
org$frostlang$frostc$Position $tmp730 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp731 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp732 = (frost$core$Int64) {16u};
org$frostlang$frostc$Position $tmp733 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp734 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp735 = (frost$core$Int64) {22u};
org$frostlang$frostc$Position $tmp736 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp734, $tmp735, $tmp736, &$s737);
org$frostlang$frostc$FieldDecl* $tmp738 = *(&local15);
frost$core$String** $tmp739 = &((org$frostlang$frostc$Symbol*) $tmp738)->name;
frost$core$String* $tmp740 = *$tmp739;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp731, $tmp732, $tmp733, $tmp734, $tmp740);
frost$core$Int64 $tmp741 = (frost$core$Int64) {24u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from Closure.frost:88:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp742 = &(&local17)->$rawValue;
*$tmp742 = $tmp741;
org$frostlang$frostc$expression$Binary$Operator $tmp743 = *(&local17);
*(&local16) = $tmp743;
org$frostlang$frostc$expression$Binary$Operator $tmp744 = *(&local16);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp745 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp746 = (frost$core$Int64) {22u};
org$frostlang$frostc$Position $tmp747 = *(&local0);
org$frostlang$frostc$FieldDecl* $tmp748 = *(&local15);
frost$core$String** $tmp749 = &((org$frostlang$frostc$Symbol*) $tmp748)->name;
frost$core$String* $tmp750 = *$tmp749;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp745, $tmp746, $tmp747, $tmp750);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp728, $tmp729, $tmp730, $tmp731, $tmp744, $tmp745);
frost$collections$Array$add$frost$collections$Array$T($tmp727, ((frost$core$Object*) $tmp728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
org$frostlang$frostc$FieldDecl* $tmp751 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block80;
block86:;
frost$core$Int64 $tmp752 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:90:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp753 = $tmp667.value;
int64_t $tmp754 = $tmp752.value;
bool $tmp755 = $tmp753 == $tmp754;
frost$core$Bit $tmp756 = (frost$core$Bit) {$tmp755};
bool $tmp757 = $tmp756.value;
if ($tmp757) goto block89; else goto block80;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:91
frost$collections$Array* $tmp758 = *(&local10);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp759 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$Type* $tmp760 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp759, &$s761, $tmp760);
frost$collections$Array$add$frost$collections$Array$T($tmp758, ((frost$core$Object*) $tmp759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:94
frost$collections$Array* $tmp762 = *(&local9);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp763 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp764 = (frost$core$Int64) {5u};
org$frostlang$frostc$Position $tmp765 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp766 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp767 = (frost$core$Int64) {16u};
org$frostlang$frostc$Position $tmp768 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp769 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp770 = (frost$core$Int64) {22u};
org$frostlang$frostc$Position $tmp771 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp769, $tmp770, $tmp771, &$s772);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp766, $tmp767, $tmp768, $tmp769, &$s773);
frost$core$Int64 $tmp774 = (frost$core$Int64) {24u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from Closure.frost:97:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp775 = &(&local19)->$rawValue;
*$tmp775 = $tmp774;
org$frostlang$frostc$expression$Binary$Operator $tmp776 = *(&local19);
*(&local18) = $tmp776;
org$frostlang$frostc$expression$Binary$Operator $tmp777 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp778 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp779 = (frost$core$Int64) {22u};
org$frostlang$frostc$Position $tmp780 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp778, $tmp779, $tmp780, &$s781);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp763, $tmp764, $tmp765, $tmp766, $tmp777, $tmp778);
frost$collections$Array$add$frost$collections$Array$T($tmp762, ((frost$core$Object*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
goto block80;
block80:;
frost$core$Frost$unref$frost$core$Object$Q($tmp663);
org$frostlang$frostc$Compiler$Capture* $tmp782 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
*(&local11) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block77;
block79:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:102
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp783 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp784 = *(&local8);
org$frostlang$frostc$Position $tmp785 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp786 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp787 = (frost$core$Int64) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp786, $tmp787);
frost$core$Int64 $tmp788 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:103:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp789 = &(&local21)->$rawValue;
*$tmp789 = $tmp788;
org$frostlang$frostc$MethodDecl$Kind $tmp790 = *(&local21);
*(&local20) = $tmp790;
org$frostlang$frostc$MethodDecl$Kind $tmp791 = *(&local20);
frost$collections$Array* $tmp792 = *(&local10);
org$frostlang$frostc$Type** $tmp793 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp794 = *$tmp793;
frost$collections$Array* $tmp795 = *(&local9);
org$frostlang$frostc$FixedArray* $tmp796 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp795);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp783, $tmp784, $tmp785, ((frost$core$String*) NULL), $tmp786, $tmp791, &$s797, ((frost$collections$Array*) NULL), $tmp792, $tmp794, $tmp796);
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
org$frostlang$frostc$MethodDecl* $tmp798 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
*(&local22) = $tmp783;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:106
org$frostlang$frostc$ClassDecl* $tmp799 = *(&local8);
frost$collections$Array** $tmp800 = &$tmp799->methods;
frost$collections$Array* $tmp801 = *$tmp800;
org$frostlang$frostc$MethodDecl* $tmp802 = *(&local22);
frost$collections$Array$add$frost$collections$Array$T($tmp801, ((frost$core$Object*) $tmp802));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:107
org$frostlang$frostc$ClassDecl* $tmp803 = *(&local8);
org$frostlang$frostc$SymbolTable** $tmp804 = &$tmp803->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp805 = *$tmp804;
org$frostlang$frostc$MethodDecl* $tmp806 = *(&local22);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:107:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp807 = &((org$frostlang$frostc$Symbol*) $tmp806)->name;
frost$core$String* $tmp808 = *$tmp807;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp805, ((org$frostlang$frostc$Symbol*) $tmp806), $tmp808);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:110
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp809 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp810 = *(&local8);
org$frostlang$frostc$Position $tmp811 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp812 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp813 = (frost$core$Int64) {32u};
frost$core$Int64 $tmp814 = (frost$core$Int64) {8192u};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Closure.frost:111:55
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp815 = $tmp813.value;
int64_t $tmp816 = $tmp814.value;
int64_t $tmp817 = $tmp815 | $tmp816;
frost$core$Int64 $tmp818 = (frost$core$Int64) {$tmp817};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp812, $tmp818);
frost$core$Int64 $tmp819 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:112:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp820 = &(&local24)->$rawValue;
*$tmp820 = $tmp819;
org$frostlang$frostc$MethodDecl$Kind $tmp821 = *(&local24);
*(&local23) = $tmp821;
org$frostlang$frostc$MethodDecl$Kind $tmp822 = *(&local23);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp823 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp823);
org$frostlang$frostc$Type** $tmp824 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp825 = *$tmp824;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp826 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp826);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp809, $tmp810, $tmp811, ((frost$core$String*) NULL), $tmp812, $tmp822, &$s827, ((frost$collections$Array*) NULL), $tmp823, $tmp825, $tmp826);
*(&local25) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
org$frostlang$frostc$MethodDecl* $tmp828 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
*(&local25) = $tmp809;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:114
org$frostlang$frostc$ClassDecl* $tmp829 = *(&local8);
frost$collections$Array** $tmp830 = &$tmp829->methods;
frost$collections$Array* $tmp831 = *$tmp830;
org$frostlang$frostc$MethodDecl* $tmp832 = *(&local25);
frost$collections$Array$add$frost$collections$Array$T($tmp831, ((frost$core$Object*) $tmp832));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:115
org$frostlang$frostc$ClassDecl* $tmp833 = *(&local8);
org$frostlang$frostc$SymbolTable** $tmp834 = &$tmp833->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp835 = *$tmp834;
org$frostlang$frostc$MethodDecl* $tmp836 = *(&local25);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:115:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp837 = &((org$frostlang$frostc$Symbol*) $tmp836)->name;
frost$core$String* $tmp838 = *$tmp837;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp835, ((org$frostlang$frostc$Symbol*) $tmp836), $tmp838);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:118
ITable* $tmp839 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp839->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp839 = $tmp839->next;
}
$fn841 $tmp840 = $tmp839->methods[0];
frost$collections$Iterator* $tmp842 = $tmp840(((frost$collections$Iterable*) param2));
goto block97;
block97:;
ITable* $tmp843 = $tmp842->$class->itable;
while ($tmp843->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp843 = $tmp843->next;
}
$fn845 $tmp844 = $tmp843->methods[0];
frost$core$Bit $tmp846 = $tmp844($tmp842);
bool $tmp847 = $tmp846.value;
if ($tmp847) goto block99; else goto block98;
block98:;
*(&local26) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp848 = $tmp842->$class->itable;
while ($tmp848->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp848 = $tmp848->next;
}
$fn850 $tmp849 = $tmp848->methods[1];
frost$core$Object* $tmp851 = $tmp849($tmp842);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp851)));
org$frostlang$frostc$Compiler$Capture* $tmp852 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
*(&local26) = ((org$frostlang$frostc$Compiler$Capture*) $tmp851);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:119
org$frostlang$frostc$Compiler$Capture* $tmp853 = *(&local26);
frost$core$Int64* $tmp854 = &$tmp853->$rawValue;
frost$core$Int64 $tmp855 = *$tmp854;
frost$core$Int64 $tmp856 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:120:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp857 = $tmp855.value;
int64_t $tmp858 = $tmp856.value;
bool $tmp859 = $tmp857 == $tmp858;
frost$core$Bit $tmp860 = (frost$core$Bit) {$tmp859};
bool $tmp861 = $tmp860.value;
if ($tmp861) goto block101; else goto block102;
block101:;
org$frostlang$frostc$Variable** $tmp862 = (org$frostlang$frostc$Variable**) ($tmp853->$data + 0);
org$frostlang$frostc$Variable* $tmp863 = *$tmp862;
*(&local27) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
org$frostlang$frostc$Variable* $tmp864 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
*(&local27) = $tmp863;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:121
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp865 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp866 = *(&local8);
org$frostlang$frostc$Position $tmp867 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp868 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp869 = (frost$core$Int64) {8192u};
frost$core$Int64 $tmp870 = (frost$core$Int64) {65536u};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Closure.frost:122:68
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp871 = $tmp869.value;
int64_t $tmp872 = $tmp870.value;
int64_t $tmp873 = $tmp871 | $tmp872;
frost$core$Int64 $tmp874 = (frost$core$Int64) {$tmp873};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp868, $tmp874);
frost$core$Int64 $tmp875 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Closure.frost:123:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp876 = &(&local29)->$rawValue;
*$tmp876 = $tmp875;
org$frostlang$frostc$FieldDecl$Kind $tmp877 = *(&local29);
*(&local28) = $tmp877;
org$frostlang$frostc$FieldDecl$Kind $tmp878 = *(&local28);
org$frostlang$frostc$Variable* $tmp879 = *(&local27);
frost$core$String** $tmp880 = &((org$frostlang$frostc$Symbol*) $tmp879)->name;
frost$core$String* $tmp881 = *$tmp880;
org$frostlang$frostc$Variable* $tmp882 = *(&local27);
org$frostlang$frostc$Type** $tmp883 = &$tmp882->type;
org$frostlang$frostc$Type* $tmp884 = *$tmp883;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp865, $tmp866, $tmp867, ((frost$core$String*) NULL), $tmp868, $tmp878, $tmp881, $tmp884, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local30) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
org$frostlang$frostc$FieldDecl* $tmp885 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
*(&local30) = $tmp865;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:124
org$frostlang$frostc$ClassDecl* $tmp886 = *(&local8);
org$frostlang$frostc$SymbolTable** $tmp887 = &$tmp886->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp888 = *$tmp887;
org$frostlang$frostc$FieldDecl* $tmp889 = *(&local30);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:124:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp890 = &((org$frostlang$frostc$Symbol*) $tmp889)->name;
frost$core$String* $tmp891 = *$tmp890;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp888, ((org$frostlang$frostc$Symbol*) $tmp889), $tmp891);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:125
org$frostlang$frostc$ClassDecl* $tmp892 = *(&local8);
frost$collections$Array** $tmp893 = &$tmp892->fields;
frost$collections$Array* $tmp894 = *$tmp893;
org$frostlang$frostc$FieldDecl* $tmp895 = *(&local30);
frost$collections$Array$add$frost$collections$Array$T($tmp894, ((frost$core$Object*) $tmp895));
org$frostlang$frostc$FieldDecl* $tmp896 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
*(&local30) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Variable* $tmp897 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
*(&local27) = ((org$frostlang$frostc$Variable*) NULL);
goto block100;
block102:;
frost$core$Int64 $tmp898 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:127:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp899 = $tmp855.value;
int64_t $tmp900 = $tmp898.value;
bool $tmp901 = $tmp899 == $tmp900;
frost$core$Bit $tmp902 = (frost$core$Bit) {$tmp901};
bool $tmp903 = $tmp902.value;
if ($tmp903) goto block107; else goto block108;
block107:;
org$frostlang$frostc$FieldDecl** $tmp904 = (org$frostlang$frostc$FieldDecl**) ($tmp853->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp905 = *$tmp904;
*(&local31) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
org$frostlang$frostc$FieldDecl* $tmp906 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
*(&local31) = $tmp905;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:128
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp907 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp908 = *(&local8);
org$frostlang$frostc$Position $tmp909 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp910 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp911 = (frost$core$Int64) {8192u};
frost$core$Int64 $tmp912 = (frost$core$Int64) {65536u};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Closure.frost:129:68
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp913 = $tmp911.value;
int64_t $tmp914 = $tmp912.value;
int64_t $tmp915 = $tmp913 | $tmp914;
frost$core$Int64 $tmp916 = (frost$core$Int64) {$tmp915};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp910, $tmp916);
frost$core$Int64 $tmp917 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Closure.frost:130:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp918 = &(&local33)->$rawValue;
*$tmp918 = $tmp917;
org$frostlang$frostc$FieldDecl$Kind $tmp919 = *(&local33);
*(&local32) = $tmp919;
org$frostlang$frostc$FieldDecl$Kind $tmp920 = *(&local32);
org$frostlang$frostc$FieldDecl* $tmp921 = *(&local31);
frost$core$String** $tmp922 = &((org$frostlang$frostc$Symbol*) $tmp921)->name;
frost$core$String* $tmp923 = *$tmp922;
org$frostlang$frostc$FieldDecl* $tmp924 = *(&local31);
org$frostlang$frostc$Type** $tmp925 = &$tmp924->type;
org$frostlang$frostc$Type* $tmp926 = *$tmp925;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp907, $tmp908, $tmp909, ((frost$core$String*) NULL), $tmp910, $tmp920, $tmp923, $tmp926, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local34) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
org$frostlang$frostc$FieldDecl* $tmp927 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
*(&local34) = $tmp907;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:131
org$frostlang$frostc$ClassDecl* $tmp928 = *(&local8);
org$frostlang$frostc$SymbolTable** $tmp929 = &$tmp928->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp930 = *$tmp929;
org$frostlang$frostc$FieldDecl* $tmp931 = *(&local34);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:131:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp932 = &((org$frostlang$frostc$Symbol*) $tmp931)->name;
frost$core$String* $tmp933 = *$tmp932;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp930, ((org$frostlang$frostc$Symbol*) $tmp931), $tmp933);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:132
org$frostlang$frostc$ClassDecl* $tmp934 = *(&local8);
frost$collections$Array** $tmp935 = &$tmp934->fields;
frost$collections$Array* $tmp936 = *$tmp935;
org$frostlang$frostc$FieldDecl* $tmp937 = *(&local34);
frost$collections$Array$add$frost$collections$Array$T($tmp936, ((frost$core$Object*) $tmp937));
org$frostlang$frostc$FieldDecl* $tmp938 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
*(&local34) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp939 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
*(&local31) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block100;
block108:;
frost$core$Int64 $tmp940 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:134:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp941 = $tmp855.value;
int64_t $tmp942 = $tmp940.value;
bool $tmp943 = $tmp941 == $tmp942;
frost$core$Bit $tmp944 = (frost$core$Bit) {$tmp943};
bool $tmp945 = $tmp944.value;
if ($tmp945) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:135
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp946 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp947 = *(&local8);
org$frostlang$frostc$Position $tmp948 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp949 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp950 = (frost$core$Int64) {8192u};
frost$core$Int64 $tmp951 = (frost$core$Int64) {65536u};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Closure.frost:136:68
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp952 = $tmp950.value;
int64_t $tmp953 = $tmp951.value;
int64_t $tmp954 = $tmp952 | $tmp953;
frost$core$Int64 $tmp955 = (frost$core$Int64) {$tmp954};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp949, $tmp955);
frost$core$Int64 $tmp956 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Closure.frost:137:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp957 = &(&local36)->$rawValue;
*$tmp957 = $tmp956;
org$frostlang$frostc$FieldDecl$Kind $tmp958 = *(&local36);
*(&local35) = $tmp958;
org$frostlang$frostc$FieldDecl$Kind $tmp959 = *(&local35);
org$frostlang$frostc$Type* $tmp960 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp946, $tmp947, $tmp948, ((frost$core$String*) NULL), $tmp949, $tmp959, &$s961, $tmp960, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local37) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
org$frostlang$frostc$FieldDecl* $tmp962 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
*(&local37) = $tmp946;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:139
org$frostlang$frostc$ClassDecl* $tmp963 = *(&local8);
org$frostlang$frostc$SymbolTable** $tmp964 = &$tmp963->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp965 = *$tmp964;
org$frostlang$frostc$FieldDecl* $tmp966 = *(&local37);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:139:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp967 = &((org$frostlang$frostc$Symbol*) $tmp966)->name;
frost$core$String* $tmp968 = *$tmp967;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp965, ((org$frostlang$frostc$Symbol*) $tmp966), $tmp968);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:140
org$frostlang$frostc$ClassDecl* $tmp969 = *(&local8);
frost$collections$Array** $tmp970 = &$tmp969->fields;
frost$collections$Array* $tmp971 = *$tmp970;
org$frostlang$frostc$FieldDecl* $tmp972 = *(&local37);
frost$collections$Array$add$frost$collections$Array$T($tmp971, ((frost$core$Object*) $tmp972));
org$frostlang$frostc$FieldDecl* $tmp973 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
*(&local37) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block100;
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:143
frost$core$Int64 $tmp974 = (frost$core$Int64) {143u};
org$frostlang$frostc$Compiler$Capture* $tmp975 = *(&local26);
$fn977 $tmp976 = ($fn977) ((frost$core$Object*) $tmp975)->$class->vtable[0];
frost$core$String* $tmp978 = $tmp976(((frost$core$Object*) $tmp975));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s979, $tmp974, $tmp978);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
abort(); // unreachable
block100:;
frost$core$Frost$unref$frost$core$Object$Q($tmp851);
org$frostlang$frostc$Compiler$Capture* $tmp980 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
*(&local26) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block97;
block99:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:147
org$frostlang$frostc$ClassDecl* $tmp981 = *(&local8);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp982 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp982, ((frost$core$Object*) $tmp981));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
frost$core$Weak** $tmp983 = &param1->owner;
frost$core$Weak* $tmp984 = *$tmp983;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
frost$core$Weak** $tmp985 = &param1->owner;
*$tmp985 = $tmp982;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:148
org$frostlang$frostc$ClassDecl* $tmp986 = *(&local8);
frost$collections$Array** $tmp987 = &$tmp986->methods;
frost$collections$Array* $tmp988 = *$tmp987;
frost$collections$Array$add$frost$collections$Array$T($tmp988, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:149
frost$collections$HashMap** $tmp989 = &param0->classes;
frost$collections$HashMap* $tmp990 = *$tmp989;
org$frostlang$frostc$ClassDecl* $tmp991 = *(&local8);
frost$core$String** $tmp992 = &$tmp991->name;
frost$core$String* $tmp993 = *$tmp992;
org$frostlang$frostc$ClassDecl* $tmp994 = *(&local8);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp990, ((frost$collections$Key*) $tmp993), ((frost$core$Object*) $tmp994));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:150
org$frostlang$frostc$ClassDecl* $tmp995 = *(&local8);
frost$collections$Stack** $tmp996 = &param0->currentClass;
frost$collections$Stack* $tmp997 = *$tmp996;
frost$core$Int64 $tmp998 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Closure.frost:150:46
frost$core$Int64 $tmp999 = (frost$core$Int64) {0u};
int64_t $tmp1000 = $tmp998.value;
int64_t $tmp1001 = $tmp999.value;
bool $tmp1002 = $tmp1000 >= $tmp1001;
frost$core$Bit $tmp1003 = (frost$core$Bit) {$tmp1002};
bool $tmp1004 = $tmp1003.value;
if ($tmp1004) goto block122; else goto block121;
block122:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp1005 = &$tmp997->contents;
frost$collections$Array* $tmp1006 = *$tmp1005;
ITable* $tmp1007 = ((frost$collections$CollectionView*) $tmp1006)->$class->itable;
while ($tmp1007->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1007 = $tmp1007->next;
}
$fn1009 $tmp1008 = $tmp1007->methods[0];
frost$core$Int64 $tmp1010 = $tmp1008(((frost$collections$CollectionView*) $tmp1006));
int64_t $tmp1011 = $tmp998.value;
int64_t $tmp1012 = $tmp1010.value;
bool $tmp1013 = $tmp1011 < $tmp1012;
frost$core$Bit $tmp1014 = (frost$core$Bit) {$tmp1013};
bool $tmp1015 = $tmp1014.value;
if ($tmp1015) goto block120; else goto block121;
block121:;
frost$core$Int64 $tmp1016 = (frost$core$Int64) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1017, $tmp1016, &$s1018);
abort(); // unreachable
block120:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp1019 = &$tmp997->contents;
frost$collections$Array* $tmp1020 = *$tmp1019;
ITable* $tmp1021 = ((frost$collections$CollectionView*) $tmp1020)->$class->itable;
while ($tmp1021->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1021 = $tmp1021->next;
}
$fn1023 $tmp1022 = $tmp1021->methods[0];
frost$core$Int64 $tmp1024 = $tmp1022(((frost$collections$CollectionView*) $tmp1020));
int64_t $tmp1025 = $tmp1024.value;
int64_t $tmp1026 = $tmp998.value;
bool $tmp1027 = $tmp1025 > $tmp1026;
frost$core$Bit $tmp1028 = (frost$core$Bit) {$tmp1027};
bool $tmp1029 = $tmp1028.value;
if ($tmp1029) goto block124; else goto block125;
block125:;
frost$core$Int64 $tmp1030 = (frost$core$Int64) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1031, $tmp1030);
abort(); // unreachable
block124:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp1032 = &$tmp997->contents;
frost$collections$Array* $tmp1033 = *$tmp1032;
frost$collections$Array** $tmp1034 = &$tmp997->contents;
frost$collections$Array* $tmp1035 = *$tmp1034;
ITable* $tmp1036 = ((frost$collections$CollectionView*) $tmp1035)->$class->itable;
while ($tmp1036->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1036 = $tmp1036->next;
}
$fn1038 $tmp1037 = $tmp1036->methods[0];
frost$core$Int64 $tmp1039 = $tmp1037(((frost$collections$CollectionView*) $tmp1035));
frost$core$Int64 $tmp1040 = (frost$core$Int64) {1u};
int64_t $tmp1041 = $tmp1039.value;
int64_t $tmp1042 = $tmp1040.value;
int64_t $tmp1043 = $tmp1041 - $tmp1042;
frost$core$Int64 $tmp1044 = (frost$core$Int64) {$tmp1043};
int64_t $tmp1045 = $tmp1044.value;
int64_t $tmp1046 = $tmp998.value;
int64_t $tmp1047 = $tmp1045 - $tmp1046;
frost$core$Int64 $tmp1048 = (frost$core$Int64) {$tmp1047};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp1049 = (frost$core$Int64) {0u};
int64_t $tmp1050 = $tmp1048.value;
int64_t $tmp1051 = $tmp1049.value;
bool $tmp1052 = $tmp1050 >= $tmp1051;
frost$core$Bit $tmp1053 = (frost$core$Bit) {$tmp1052};
bool $tmp1054 = $tmp1053.value;
if ($tmp1054) goto block129; else goto block128;
block129:;
ITable* $tmp1055 = ((frost$collections$CollectionView*) $tmp1033)->$class->itable;
while ($tmp1055->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1055 = $tmp1055->next;
}
$fn1057 $tmp1056 = $tmp1055->methods[0];
frost$core$Int64 $tmp1058 = $tmp1056(((frost$collections$CollectionView*) $tmp1033));
int64_t $tmp1059 = $tmp1048.value;
int64_t $tmp1060 = $tmp1058.value;
bool $tmp1061 = $tmp1059 < $tmp1060;
frost$core$Bit $tmp1062 = (frost$core$Bit) {$tmp1061};
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block127; else goto block128;
block128:;
frost$core$Int64 $tmp1064 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1065, $tmp1064, &$s1066);
abort(); // unreachable
block127:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1067 = &$tmp1033->data;
frost$core$Object** $tmp1068 = *$tmp1067;
int64_t $tmp1069 = $tmp1048.value;
frost$core$Object* $tmp1070 = $tmp1068[$tmp1069];
frost$core$Frost$ref$frost$core$Object$Q($tmp1070);
frost$core$Frost$ref$frost$core$Object$Q($tmp1070);
frost$core$Frost$unref$frost$core$Object$Q($tmp1070);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp1071 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp1071, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1070)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
frost$core$Weak** $tmp1072 = &$tmp995->owner;
frost$core$Weak* $tmp1073 = *$tmp1072;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
frost$core$Weak** $tmp1074 = &$tmp995->owner;
*$tmp1074 = $tmp1071;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
frost$core$Frost$unref$frost$core$Object$Q($tmp1070);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:151
org$frostlang$frostc$ClassDecl* $tmp1075 = *(&local8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
org$frostlang$frostc$MethodDecl* $tmp1076 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
*(&local25) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1077 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$collections$Array* $tmp1078 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
*(&local10) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1079 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
*(&local9) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1080 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
*(&local8) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp1081 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp1075;

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
org$frostlang$frostc$Variable$Kind local8;
org$frostlang$frostc$Variable$Kind local9;
org$frostlang$frostc$Type* local10 = NULL;
org$frostlang$frostc$Type* local11 = NULL;
org$frostlang$frostc$Type* local12 = NULL;
org$frostlang$frostc$Type$Kind local13;
org$frostlang$frostc$Type$Kind local14;
frost$core$Bit local15;
org$frostlang$frostc$Type$Kind local16;
org$frostlang$frostc$Type$Kind local17;
org$frostlang$frostc$Type$Kind local18;
org$frostlang$frostc$Type$Kind local19;
org$frostlang$frostc$Type$Kind local20;
org$frostlang$frostc$Type$Kind local21;
org$frostlang$frostc$Type$Kind local22;
org$frostlang$frostc$Type$Kind local23;
org$frostlang$frostc$Type* local24 = NULL;
frost$collections$HashMap* local25 = NULL;
org$frostlang$frostc$Pair* local26 = NULL;
org$frostlang$frostc$Type$Kind local27;
org$frostlang$frostc$Type$Kind local28;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:157
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp1082 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1082, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
org$frostlang$frostc$Compiler$AutoScope* $tmp1083 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
*(&local0) = $tmp1082;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:158
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1084 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1084);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
frost$collections$Array* $tmp1085 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
*(&local1) = $tmp1084;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:159
frost$core$Int64 $tmp1086 = (frost$core$Int64) {0u};
ITable* $tmp1087 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp1087->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1087 = $tmp1087->next;
}
$fn1089 $tmp1088 = $tmp1087->methods[0];
frost$core$Int64 $tmp1090 = $tmp1088(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp1091 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1092 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1086, $tmp1090, $tmp1091);
frost$core$Int64 $tmp1093 = $tmp1092.min;
*(&local2) = $tmp1093;
frost$core$Int64 $tmp1094 = $tmp1092.max;
frost$core$Bit $tmp1095 = $tmp1092.inclusive;
bool $tmp1096 = $tmp1095.value;
frost$core$Int64 $tmp1097 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1098 = $tmp1097.value;
frost$core$UInt64 $tmp1099 = (frost$core$UInt64) {((uint64_t) $tmp1098)};
if ($tmp1096) goto block5; else goto block6;
block5:;
int64_t $tmp1100 = $tmp1093.value;
int64_t $tmp1101 = $tmp1094.value;
bool $tmp1102 = $tmp1100 <= $tmp1101;
frost$core$Bit $tmp1103 = (frost$core$Bit) {$tmp1102};
bool $tmp1104 = $tmp1103.value;
if ($tmp1104) goto block2; else goto block3;
block6:;
int64_t $tmp1105 = $tmp1093.value;
int64_t $tmp1106 = $tmp1094.value;
bool $tmp1107 = $tmp1105 < $tmp1106;
frost$core$Bit $tmp1108 = (frost$core$Bit) {$tmp1107};
bool $tmp1109 = $tmp1108.value;
if ($tmp1109) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:160
frost$core$Int64 $tmp1110 = *(&local2);
ITable* $tmp1111 = param1->$class->itable;
while ($tmp1111->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1111 = $tmp1111->next;
}
$fn1113 $tmp1112 = $tmp1111->methods[0];
frost$core$Object* $tmp1114 = $tmp1112(param1, $tmp1110);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1114)));
org$frostlang$frostc$ASTNode* $tmp1115 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp1114);
frost$core$Frost$unref$frost$core$Object$Q($tmp1114);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:161
org$frostlang$frostc$ASTNode* $tmp1116 = *(&local3);
frost$core$Int64* $tmp1117 = &$tmp1116->$rawValue;
frost$core$Int64 $tmp1118 = *$tmp1117;
frost$core$Int64 $tmp1119 = (frost$core$Int64) {34u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:162:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1120 = $tmp1118.value;
int64_t $tmp1121 = $tmp1119.value;
bool $tmp1122 = $tmp1120 == $tmp1121;
frost$core$Bit $tmp1123 = (frost$core$Bit) {$tmp1122};
bool $tmp1124 = $tmp1123.value;
if ($tmp1124) goto block8; else goto block7;
block8:;
org$frostlang$frostc$Position* $tmp1125 = (org$frostlang$frostc$Position*) ($tmp1116->$data + 0);
org$frostlang$frostc$Position $tmp1126 = *$tmp1125;
*(&local4) = $tmp1126;
frost$core$String** $tmp1127 = (frost$core$String**) ($tmp1116->$data + 24);
frost$core$String* $tmp1128 = *$tmp1127;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
frost$core$String* $tmp1129 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
*(&local5) = $tmp1128;
org$frostlang$frostc$ASTNode** $tmp1130 = (org$frostlang$frostc$ASTNode**) ($tmp1116->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1131 = *$tmp1130;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
org$frostlang$frostc$ASTNode* $tmp1132 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
*(&local6) = $tmp1131;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:163
org$frostlang$frostc$Scanner** $tmp1133 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1134 = *$tmp1133;
org$frostlang$frostc$ASTNode* $tmp1135 = *(&local6);
org$frostlang$frostc$Type* $tmp1136 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1134, $tmp1135);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
org$frostlang$frostc$Type* $tmp1137 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
*(&local7) = $tmp1136;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:164
org$frostlang$frostc$Type* $tmp1138 = *(&local7);
frost$core$Bit $tmp1139 = (frost$core$Bit) {$tmp1138 == NULL};
bool $tmp1140 = $tmp1139.value;
if ($tmp1140) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:165
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp1141 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1142 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1143 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1144 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1145 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1146 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:167
org$frostlang$frostc$Type* $tmp1147 = *(&local7);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from Closure.frost:167:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:952
frost$core$Bit $tmp1148 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp1149 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp1147, $tmp1148);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
org$frostlang$frostc$Type* $tmp1150 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
*(&local7) = $tmp1149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:168
org$frostlang$frostc$Type* $tmp1151 = *(&local7);
frost$core$Bit $tmp1152 = (frost$core$Bit) {$tmp1151 == NULL};
bool $tmp1153 = $tmp1152.value;
if ($tmp1153) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:169
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp1154 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1155 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1156 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1157 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1158 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1159 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:171
frost$collections$Array* $tmp1160 = *(&local1);
org$frostlang$frostc$Type* $tmp1161 = *(&local7);
frost$collections$Array$add$frost$collections$Array$T($tmp1160, ((frost$core$Object*) $tmp1161));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:172
org$frostlang$frostc$SymbolTable** $tmp1162 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1163 = *$tmp1162;
FROST_ASSERT(88 == sizeof(org$frostlang$frostc$Variable));
org$frostlang$frostc$Variable* $tmp1164 = (org$frostlang$frostc$Variable*) frostObjectAlloc(88, (frost$core$Class*) &org$frostlang$frostc$Variable$class);
org$frostlang$frostc$Position $tmp1165 = *(&local4);
frost$core$Int64 $tmp1166 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Variable.Kind from Closure.frost:172:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int64* $tmp1167 = &(&local9)->$rawValue;
*$tmp1167 = $tmp1166;
org$frostlang$frostc$Variable$Kind $tmp1168 = *(&local9);
*(&local8) = $tmp1168;
org$frostlang$frostc$Variable$Kind $tmp1169 = *(&local8);
frost$core$String* $tmp1170 = *(&local5);
org$frostlang$frostc$Type* $tmp1171 = *(&local7);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Variable$Storage));
org$frostlang$frostc$Variable$Storage* $tmp1172 = (org$frostlang$frostc$Variable$Storage*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Variable$Storage$class);
frost$core$Int64 $tmp1173 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp1174 = (frost$core$Int64) {18446744073709551615u};
org$frostlang$frostc$Variable$Storage$init$frost$core$Int64$frost$core$Int64($tmp1172, $tmp1173, $tmp1174);
org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage($tmp1164, $tmp1165, $tmp1169, $tmp1170, $tmp1171, $tmp1172);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:172:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp1175 = &((org$frostlang$frostc$Symbol*) $tmp1164)->name;
frost$core$String* $tmp1176 = *$tmp1175;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp1163, ((org$frostlang$frostc$Symbol*) $tmp1164), $tmp1176);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
org$frostlang$frostc$Type* $tmp1177 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1178 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1179 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
*(&local5) = ((frost$core$String*) NULL);
goto block7;
block7:;
org$frostlang$frostc$ASTNode* $tmp1180 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Int64 $tmp1181 = *(&local2);
int64_t $tmp1182 = $tmp1094.value;
int64_t $tmp1183 = $tmp1181.value;
int64_t $tmp1184 = $tmp1182 - $tmp1183;
frost$core$Int64 $tmp1185 = (frost$core$Int64) {$tmp1184};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1186 = $tmp1185.value;
frost$core$UInt64 $tmp1187 = (frost$core$UInt64) {((uint64_t) $tmp1186)};
if ($tmp1096) goto block19; else goto block20;
block19:;
uint64_t $tmp1188 = $tmp1187.value;
uint64_t $tmp1189 = $tmp1099.value;
bool $tmp1190 = $tmp1188 >= $tmp1189;
frost$core$Bit $tmp1191 = (frost$core$Bit) {$tmp1190};
bool $tmp1192 = $tmp1191.value;
if ($tmp1192) goto block17; else goto block3;
block20:;
uint64_t $tmp1193 = $tmp1187.value;
uint64_t $tmp1194 = $tmp1099.value;
bool $tmp1195 = $tmp1193 > $tmp1194;
frost$core$Bit $tmp1196 = (frost$core$Bit) {$tmp1195};
bool $tmp1197 = $tmp1196.value;
if ($tmp1197) goto block17; else goto block3;
block17:;
int64_t $tmp1198 = $tmp1181.value;
int64_t $tmp1199 = $tmp1097.value;
int64_t $tmp1200 = $tmp1198 + $tmp1199;
frost$core$Int64 $tmp1201 = (frost$core$Int64) {$tmp1200};
*(&local2) = $tmp1201;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:177
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:178
frost$core$Int64* $tmp1202 = &param3->$rawValue;
frost$core$Int64 $tmp1203 = *$tmp1202;
frost$core$Int64 $tmp1204 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:179:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1205 = $tmp1203.value;
int64_t $tmp1206 = $tmp1204.value;
bool $tmp1207 = $tmp1205 == $tmp1206;
frost$core$Bit $tmp1208 = (frost$core$Bit) {$tmp1207};
bool $tmp1209 = $tmp1208.value;
if ($tmp1209) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Type** $tmp1210 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp1211 = *$tmp1210;
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
org$frostlang$frostc$Type* $tmp1212 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
*(&local11) = $tmp1211;
frost$core$Bit* $tmp1213 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp1214 = *$tmp1213;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:180
org$frostlang$frostc$Type* $tmp1215 = *(&local11);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:180:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp1216 = &$tmp1215->typeKind;
org$frostlang$frostc$Type$Kind $tmp1217 = *$tmp1216;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1218;
$tmp1218 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1218->value = $tmp1217;
frost$core$Int64 $tmp1219 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1220 = &(&local14)->$rawValue;
*$tmp1220 = $tmp1219;
org$frostlang$frostc$Type$Kind $tmp1221 = *(&local14);
*(&local13) = $tmp1221;
org$frostlang$frostc$Type$Kind $tmp1222 = *(&local13);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1223;
$tmp1223 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1223->value = $tmp1222;
ITable* $tmp1224 = ((frost$core$Equatable*) $tmp1218)->$class->itable;
while ($tmp1224->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1224 = $tmp1224->next;
}
$fn1226 $tmp1225 = $tmp1224->methods[1];
frost$core$Bit $tmp1227 = $tmp1225(((frost$core$Equatable*) $tmp1218), ((frost$core$Equatable*) $tmp1223));
bool $tmp1228 = $tmp1227.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1223)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1218)));
if ($tmp1228) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
*(&local12) = $tmp1215;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
goto block27;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1229 = &$tmp1215->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1230 = *$tmp1229;
frost$core$Bit $tmp1231 = (frost$core$Bit) {$tmp1230 != NULL};
bool $tmp1232 = $tmp1231.value;
if ($tmp1232) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp1233 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1234, $tmp1233);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1235 = &$tmp1215->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1236 = *$tmp1235;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
frost$core$Int64 $tmp1237 = (frost$core$Int64) {0u};
frost$core$Object* $tmp1238 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1236, $tmp1237);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1238)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1238);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp1238);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1238)));
goto block27;
block27:;
org$frostlang$frostc$Type* $tmp1239 = *(&local12);
// begin inline call to function org.frostlang.frostc.Type.get_isMethod():frost.core.Bit from Closure.frost:180:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:378
org$frostlang$frostc$Type$Kind* $tmp1240 = &$tmp1239->typeKind;
org$frostlang$frostc$Type$Kind $tmp1241 = *$tmp1240;
frost$core$Int64 $tmp1242 = $tmp1241.$rawValue;
frost$core$Int64 $tmp1243 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:379:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1244 = $tmp1242.value;
int64_t $tmp1245 = $tmp1243.value;
bool $tmp1246 = $tmp1244 == $tmp1245;
frost$core$Bit $tmp1247 = (frost$core$Bit) {$tmp1246};
bool $tmp1248 = $tmp1247.value;
if ($tmp1248) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp1249 = (frost$core$Int64) {15u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:379:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1250 = $tmp1242.value;
int64_t $tmp1251 = $tmp1249.value;
bool $tmp1252 = $tmp1250 == $tmp1251;
frost$core$Bit $tmp1253 = (frost$core$Bit) {$tmp1252};
bool $tmp1254 = $tmp1253.value;
if ($tmp1254) goto block36; else goto block39;
block39:;
frost$core$Int64 $tmp1255 = (frost$core$Int64) {18u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:379:50
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1256 = $tmp1242.value;
int64_t $tmp1257 = $tmp1255.value;
bool $tmp1258 = $tmp1256 == $tmp1257;
frost$core$Bit $tmp1259 = (frost$core$Bit) {$tmp1258};
bool $tmp1260 = $tmp1259.value;
if ($tmp1260) goto block36; else goto block41;
block41:;
frost$core$Int64 $tmp1261 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:379:73
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1262 = $tmp1242.value;
int64_t $tmp1263 = $tmp1261.value;
bool $tmp1264 = $tmp1262 == $tmp1263;
frost$core$Bit $tmp1265 = (frost$core$Bit) {$tmp1264};
bool $tmp1266 = $tmp1265.value;
if ($tmp1266) goto block36; else goto block43;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:380
frost$core$Bit $tmp1267 = (frost$core$Bit) {true};
*(&local15) = $tmp1267;
goto block34;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:383
frost$core$Bit $tmp1268 = (frost$core$Bit) {false};
*(&local15) = $tmp1268;
goto block34;
block35:;
goto block34;
block34:;
frost$core$Bit $tmp1269 = *(&local15);
bool $tmp1270 = $tmp1269.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
if ($tmp1270) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:181
org$frostlang$frostc$Type* $tmp1271 = *(&local11);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:181:36
org$frostlang$frostc$Type$Kind* $tmp1272 = &$tmp1271->typeKind;
org$frostlang$frostc$Type$Kind $tmp1273 = *$tmp1272;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1274;
$tmp1274 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1274->value = $tmp1273;
frost$core$Int64 $tmp1275 = (frost$core$Int64) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1276 = &(&local17)->$rawValue;
*$tmp1276 = $tmp1275;
org$frostlang$frostc$Type$Kind $tmp1277 = *(&local17);
*(&local16) = $tmp1277;
org$frostlang$frostc$Type$Kind $tmp1278 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1279;
$tmp1279 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1279->value = $tmp1278;
ITable* $tmp1280 = ((frost$core$Equatable*) $tmp1274)->$class->itable;
while ($tmp1280->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1280 = $tmp1280->next;
}
$fn1282 $tmp1281 = $tmp1280->methods[0];
frost$core$Bit $tmp1283 = $tmp1281(((frost$core$Equatable*) $tmp1274), ((frost$core$Equatable*) $tmp1279));
bool $tmp1284 = $tmp1283.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1279)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1274)));
if ($tmp1284) goto block46; else goto block50;
block50:;
org$frostlang$frostc$Type$Kind* $tmp1285 = &$tmp1271->typeKind;
org$frostlang$frostc$Type$Kind $tmp1286 = *$tmp1285;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1287;
$tmp1287 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1287->value = $tmp1286;
frost$core$Int64 $tmp1288 = (frost$core$Int64) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1289 = &(&local19)->$rawValue;
*$tmp1289 = $tmp1288;
org$frostlang$frostc$Type$Kind $tmp1290 = *(&local19);
*(&local18) = $tmp1290;
org$frostlang$frostc$Type$Kind $tmp1291 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1292;
$tmp1292 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1292->value = $tmp1291;
ITable* $tmp1293 = ((frost$core$Equatable*) $tmp1287)->$class->itable;
while ($tmp1293->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1293 = $tmp1293->next;
}
$fn1295 $tmp1294 = $tmp1293->methods[0];
frost$core$Bit $tmp1296 = $tmp1294(((frost$core$Equatable*) $tmp1287), ((frost$core$Equatable*) $tmp1292));
bool $tmp1297 = $tmp1296.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1292)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1287)));
if ($tmp1297) goto block46; else goto block49;
block49:;
org$frostlang$frostc$Type$Kind* $tmp1298 = &$tmp1271->typeKind;
org$frostlang$frostc$Type$Kind $tmp1299 = *$tmp1298;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1300;
$tmp1300 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1300->value = $tmp1299;
frost$core$Int64 $tmp1301 = (frost$core$Int64) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1302 = &(&local21)->$rawValue;
*$tmp1302 = $tmp1301;
org$frostlang$frostc$Type$Kind $tmp1303 = *(&local21);
*(&local20) = $tmp1303;
org$frostlang$frostc$Type$Kind $tmp1304 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1305;
$tmp1305 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1305->value = $tmp1304;
ITable* $tmp1306 = ((frost$core$Equatable*) $tmp1300)->$class->itable;
while ($tmp1306->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1306 = $tmp1306->next;
}
$fn1308 $tmp1307 = $tmp1306->methods[0];
frost$core$Bit $tmp1309 = $tmp1307(((frost$core$Equatable*) $tmp1300), ((frost$core$Equatable*) $tmp1305));
bool $tmp1310 = $tmp1309.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1305)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1300)));
if ($tmp1310) goto block46; else goto block48;
block48:;
org$frostlang$frostc$Type$Kind* $tmp1311 = &$tmp1271->typeKind;
org$frostlang$frostc$Type$Kind $tmp1312 = *$tmp1311;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1313;
$tmp1313 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1313->value = $tmp1312;
frost$core$Int64 $tmp1314 = (frost$core$Int64) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1315 = &(&local23)->$rawValue;
*$tmp1315 = $tmp1314;
org$frostlang$frostc$Type$Kind $tmp1316 = *(&local23);
*(&local22) = $tmp1316;
org$frostlang$frostc$Type$Kind $tmp1317 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1318;
$tmp1318 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1318->value = $tmp1317;
ITable* $tmp1319 = ((frost$core$Equatable*) $tmp1313)->$class->itable;
while ($tmp1319->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1319 = $tmp1319->next;
}
$fn1321 $tmp1320 = $tmp1319->methods[0];
frost$core$Bit $tmp1322 = $tmp1320(((frost$core$Equatable*) $tmp1313), ((frost$core$Equatable*) $tmp1318));
bool $tmp1323 = $tmp1322.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1318)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1313)));
if ($tmp1323) goto block46; else goto block47;
block47:;
frost$core$Int64 $tmp1324 = (frost$core$Int64) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1325, $tmp1324, &$s1326);
abort(); // unreachable
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1327 = &$tmp1271->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1328 = *$tmp1327;
frost$core$Bit $tmp1329 = (frost$core$Bit) {$tmp1328 != NULL};
bool $tmp1330 = $tmp1329.value;
if ($tmp1330) goto block56; else goto block57;
block57:;
frost$core$Int64 $tmp1331 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1332, $tmp1331);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1333 = &$tmp1271->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1334 = *$tmp1333;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1335 = &$tmp1271->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1336 = *$tmp1335;
frost$core$Bit $tmp1337 = (frost$core$Bit) {$tmp1336 != NULL};
bool $tmp1338 = $tmp1337.value;
if ($tmp1338) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp1339 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1340, $tmp1339);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1341 = &$tmp1271->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1342 = *$tmp1341;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
ITable* $tmp1343 = ((frost$collections$CollectionView*) $tmp1342)->$class->itable;
while ($tmp1343->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1343 = $tmp1343->next;
}
$fn1345 $tmp1344 = $tmp1343->methods[0];
frost$core$Int64 $tmp1346 = $tmp1344(((frost$collections$CollectionView*) $tmp1342));
frost$core$Int64 $tmp1347 = (frost$core$Int64) {1u};
int64_t $tmp1348 = $tmp1346.value;
int64_t $tmp1349 = $tmp1347.value;
int64_t $tmp1350 = $tmp1348 - $tmp1349;
frost$core$Int64 $tmp1351 = (frost$core$Int64) {$tmp1350};
frost$core$Object* $tmp1352 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1334, $tmp1351);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1352)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1352);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1352)));
org$frostlang$frostc$Type* $tmp1353 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
*(&local24) = ((org$frostlang$frostc$Type*) $tmp1352);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1352)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:185
frost$collections$HashMap** $tmp1354 = &param0->binaryTypes;
frost$collections$HashMap* $tmp1355 = *$tmp1354;
*(&local25) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
frost$collections$HashMap* $tmp1356 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
*(&local25) = $tmp1355;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:186
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp1357 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp1357);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
frost$collections$HashMap** $tmp1358 = &param0->binaryTypes;
frost$collections$HashMap* $tmp1359 = *$tmp1358;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
frost$collections$HashMap** $tmp1360 = &param0->binaryTypes;
*$tmp1360 = $tmp1357;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:187
org$frostlang$frostc$Type* $tmp1361 = *(&local24);
org$frostlang$frostc$Pair* $tmp1362 = org$frostlang$frostc$Compiler$computeCoercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, param2, $tmp1361);
*(&local26) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
org$frostlang$frostc$Pair* $tmp1363 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
*(&local26) = $tmp1362;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:188
frost$collections$HashMap* $tmp1364 = *(&local25);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
frost$collections$HashMap** $tmp1365 = &param0->binaryTypes;
frost$collections$HashMap* $tmp1366 = *$tmp1365;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
frost$collections$HashMap** $tmp1367 = &param0->binaryTypes;
*$tmp1367 = $tmp1364;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:189
org$frostlang$frostc$Pair* $tmp1368 = *(&local26);
frost$core$Bit $tmp1369 = (frost$core$Bit) {$tmp1368 == NULL};
bool $tmp1370 = $tmp1369.value;
if ($tmp1370) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:190
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Pair* $tmp1371 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
*(&local26) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp1372 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
*(&local25) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp1373 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1374 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1375 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1376 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1377 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1378 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:192
org$frostlang$frostc$Pair* $tmp1379 = *(&local26);
frost$core$Object** $tmp1380 = &$tmp1379->first;
frost$core$Object* $tmp1381 = *$tmp1380;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1381)));
org$frostlang$frostc$Type* $tmp1382 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
*(&local10) = ((org$frostlang$frostc$Type*) $tmp1381);
org$frostlang$frostc$Pair* $tmp1383 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
*(&local26) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp1384 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
*(&local25) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp1385 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
goto block26;
block26:;
org$frostlang$frostc$Type* $tmp1386 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1387 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1387));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:196
org$frostlang$frostc$Type* $tmp1388 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
org$frostlang$frostc$Type* $tmp1389 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
*(&local10) = $tmp1388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:199
org$frostlang$frostc$Type* $tmp1390 = *(&local10);
frost$core$Bit $tmp1391 = (frost$core$Bit) {$tmp1390 == NULL};
bool $tmp1392 = $tmp1391.value;
if ($tmp1392) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp1393 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1394 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1395 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:202
org$frostlang$frostc$Position $tmp1396 = org$frostlang$frostc$Position$init();
frost$core$Int64 $tmp1397 = (frost$core$Int64) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Closure.frost:202:63
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1398 = &(&local28)->$rawValue;
*$tmp1398 = $tmp1397;
org$frostlang$frostc$Type$Kind $tmp1399 = *(&local28);
*(&local27) = $tmp1399;
org$frostlang$frostc$Type$Kind $tmp1400 = *(&local27);
frost$collections$Array* $tmp1401 = *(&local1);
org$frostlang$frostc$Type* $tmp1402 = *(&local10);
frost$core$Int64 $tmp1403 = (frost$core$Int64) {0u};
org$frostlang$frostc$Type* $tmp1404 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(param0, $tmp1396, $tmp1400, ((frost$collections$ListView*) $tmp1401), $tmp1402, $tmp1403);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
org$frostlang$frostc$Type* $tmp1405 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1406 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1407 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return $tmp1404;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Closure$compileTypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type* local10 = NULL;
org$frostlang$frostc$Type* local11 = NULL;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$Type$Kind local13;
frost$core$Bit local14;
org$frostlang$frostc$Type* local15 = NULL;
org$frostlang$frostc$Type$Kind local16;
org$frostlang$frostc$Type$Kind local17;
org$frostlang$frostc$Type$Kind local18;
org$frostlang$frostc$Type$Kind local19;
org$frostlang$frostc$Type$Kind local20;
org$frostlang$frostc$Type$Kind local21;
org$frostlang$frostc$Type$Kind local22;
org$frostlang$frostc$Type$Kind local23;
org$frostlang$frostc$Type$Kind local24;
org$frostlang$frostc$Type$Kind local25;
org$frostlang$frostc$MethodDecl$Kind local26;
org$frostlang$frostc$MethodDecl$Kind local27;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:210
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:211
org$frostlang$frostc$Type* $tmp1408 = org$frostlang$frostc$expression$Closure$typedLambdaType$org$frostlang$frostc$Compiler$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Type$Q(param0, ((frost$collections$ListView*) param2), param3, param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
org$frostlang$frostc$Type* $tmp1409 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
*(&local1) = $tmp1408;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:212
org$frostlang$frostc$Type* $tmp1410 = *(&local1);
frost$core$Bit $tmp1411 = (frost$core$Bit) {$tmp1410 != NULL};
bool $tmp1412 = $tmp1411.value;
if ($tmp1412) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:213
org$frostlang$frostc$Type* $tmp1413 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:213:37
org$frostlang$frostc$Type$Kind* $tmp1414 = &$tmp1413->typeKind;
org$frostlang$frostc$Type$Kind $tmp1415 = *$tmp1414;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1416;
$tmp1416 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1416->value = $tmp1415;
frost$core$Int64 $tmp1417 = (frost$core$Int64) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1418 = &(&local3)->$rawValue;
*$tmp1418 = $tmp1417;
org$frostlang$frostc$Type$Kind $tmp1419 = *(&local3);
*(&local2) = $tmp1419;
org$frostlang$frostc$Type$Kind $tmp1420 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1421;
$tmp1421 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1421->value = $tmp1420;
ITable* $tmp1422 = ((frost$core$Equatable*) $tmp1416)->$class->itable;
while ($tmp1422->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1422 = $tmp1422->next;
}
$fn1424 $tmp1423 = $tmp1422->methods[0];
frost$core$Bit $tmp1425 = $tmp1423(((frost$core$Equatable*) $tmp1416), ((frost$core$Equatable*) $tmp1421));
bool $tmp1426 = $tmp1425.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1421)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1416)));
if ($tmp1426) goto block5; else goto block9;
block9:;
org$frostlang$frostc$Type$Kind* $tmp1427 = &$tmp1413->typeKind;
org$frostlang$frostc$Type$Kind $tmp1428 = *$tmp1427;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1429;
$tmp1429 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1429->value = $tmp1428;
frost$core$Int64 $tmp1430 = (frost$core$Int64) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1431 = &(&local5)->$rawValue;
*$tmp1431 = $tmp1430;
org$frostlang$frostc$Type$Kind $tmp1432 = *(&local5);
*(&local4) = $tmp1432;
org$frostlang$frostc$Type$Kind $tmp1433 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1434;
$tmp1434 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1434->value = $tmp1433;
ITable* $tmp1435 = ((frost$core$Equatable*) $tmp1429)->$class->itable;
while ($tmp1435->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1435 = $tmp1435->next;
}
$fn1437 $tmp1436 = $tmp1435->methods[0];
frost$core$Bit $tmp1438 = $tmp1436(((frost$core$Equatable*) $tmp1429), ((frost$core$Equatable*) $tmp1434));
bool $tmp1439 = $tmp1438.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1434)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1429)));
if ($tmp1439) goto block5; else goto block8;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1440 = &$tmp1413->typeKind;
org$frostlang$frostc$Type$Kind $tmp1441 = *$tmp1440;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1442;
$tmp1442 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1442->value = $tmp1441;
frost$core$Int64 $tmp1443 = (frost$core$Int64) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1444 = &(&local7)->$rawValue;
*$tmp1444 = $tmp1443;
org$frostlang$frostc$Type$Kind $tmp1445 = *(&local7);
*(&local6) = $tmp1445;
org$frostlang$frostc$Type$Kind $tmp1446 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1447;
$tmp1447 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1447->value = $tmp1446;
ITable* $tmp1448 = ((frost$core$Equatable*) $tmp1442)->$class->itable;
while ($tmp1448->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1448 = $tmp1448->next;
}
$fn1450 $tmp1449 = $tmp1448->methods[0];
frost$core$Bit $tmp1451 = $tmp1449(((frost$core$Equatable*) $tmp1442), ((frost$core$Equatable*) $tmp1447));
bool $tmp1452 = $tmp1451.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1447)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1442)));
if ($tmp1452) goto block5; else goto block7;
block7:;
org$frostlang$frostc$Type$Kind* $tmp1453 = &$tmp1413->typeKind;
org$frostlang$frostc$Type$Kind $tmp1454 = *$tmp1453;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1455;
$tmp1455 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1455->value = $tmp1454;
frost$core$Int64 $tmp1456 = (frost$core$Int64) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1457 = &(&local9)->$rawValue;
*$tmp1457 = $tmp1456;
org$frostlang$frostc$Type$Kind $tmp1458 = *(&local9);
*(&local8) = $tmp1458;
org$frostlang$frostc$Type$Kind $tmp1459 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1460;
$tmp1460 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1460->value = $tmp1459;
ITable* $tmp1461 = ((frost$core$Equatable*) $tmp1455)->$class->itable;
while ($tmp1461->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1461 = $tmp1461->next;
}
$fn1463 $tmp1462 = $tmp1461->methods[0];
frost$core$Bit $tmp1464 = $tmp1462(((frost$core$Equatable*) $tmp1455), ((frost$core$Equatable*) $tmp1460));
bool $tmp1465 = $tmp1464.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1460)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1455)));
if ($tmp1465) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp1466 = (frost$core$Int64) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1467, $tmp1466, &$s1468);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1469 = &$tmp1413->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1470 = *$tmp1469;
frost$core$Bit $tmp1471 = (frost$core$Bit) {$tmp1470 != NULL};
bool $tmp1472 = $tmp1471.value;
if ($tmp1472) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp1473 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1474, $tmp1473);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1475 = &$tmp1413->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1476 = *$tmp1475;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1477 = &$tmp1413->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1478 = *$tmp1477;
frost$core$Bit $tmp1479 = (frost$core$Bit) {$tmp1478 != NULL};
bool $tmp1480 = $tmp1479.value;
if ($tmp1480) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp1481 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1482, $tmp1481);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1483 = &$tmp1413->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1484 = *$tmp1483;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
ITable* $tmp1485 = ((frost$collections$CollectionView*) $tmp1484)->$class->itable;
while ($tmp1485->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1485 = $tmp1485->next;
}
$fn1487 $tmp1486 = $tmp1485->methods[0];
frost$core$Int64 $tmp1488 = $tmp1486(((frost$collections$CollectionView*) $tmp1484));
frost$core$Int64 $tmp1489 = (frost$core$Int64) {1u};
int64_t $tmp1490 = $tmp1488.value;
int64_t $tmp1491 = $tmp1489.value;
int64_t $tmp1492 = $tmp1490 - $tmp1491;
frost$core$Int64 $tmp1493 = (frost$core$Int64) {$tmp1492};
frost$core$Object* $tmp1494 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1476, $tmp1493);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1494)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1494);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1494)));
org$frostlang$frostc$Type* $tmp1495 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1494);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1494)));
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:218
org$frostlang$frostc$Type** $tmp1496 = &param0->ANY_TYPE;
org$frostlang$frostc$Type* $tmp1497 = *$tmp1496;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
org$frostlang$frostc$Type* $tmp1498 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
*(&local0) = $tmp1497;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:219
frost$core$Int64* $tmp1499 = &param4->$rawValue;
frost$core$Int64 $tmp1500 = *$tmp1499;
frost$core$Int64 $tmp1501 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:220:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1502 = $tmp1500.value;
int64_t $tmp1503 = $tmp1501.value;
bool $tmp1504 = $tmp1502 == $tmp1503;
frost$core$Bit $tmp1505 = (frost$core$Bit) {$tmp1504};
bool $tmp1506 = $tmp1505.value;
if ($tmp1506) goto block21; else goto block20;
block21:;
org$frostlang$frostc$Type** $tmp1507 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp1508 = *$tmp1507;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
org$frostlang$frostc$Type* $tmp1509 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
*(&local10) = $tmp1508;
frost$core$Bit* $tmp1510 = (frost$core$Bit*) (param4->$data + 8);
frost$core$Bit $tmp1511 = *$tmp1510;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:221
org$frostlang$frostc$Type* $tmp1512 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:221:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp1513 = &$tmp1512->typeKind;
org$frostlang$frostc$Type$Kind $tmp1514 = *$tmp1513;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1515;
$tmp1515 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1515->value = $tmp1514;
frost$core$Int64 $tmp1516 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1517 = &(&local13)->$rawValue;
*$tmp1517 = $tmp1516;
org$frostlang$frostc$Type$Kind $tmp1518 = *(&local13);
*(&local12) = $tmp1518;
org$frostlang$frostc$Type$Kind $tmp1519 = *(&local12);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1520;
$tmp1520 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1520->value = $tmp1519;
ITable* $tmp1521 = ((frost$core$Equatable*) $tmp1515)->$class->itable;
while ($tmp1521->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1521 = $tmp1521->next;
}
$fn1523 $tmp1522 = $tmp1521->methods[1];
frost$core$Bit $tmp1524 = $tmp1522(((frost$core$Equatable*) $tmp1515), ((frost$core$Equatable*) $tmp1520));
bool $tmp1525 = $tmp1524.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1520)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1515)));
if ($tmp1525) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
*(&local11) = $tmp1512;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
goto block25;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1526 = &$tmp1512->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1527 = *$tmp1526;
frost$core$Bit $tmp1528 = (frost$core$Bit) {$tmp1527 != NULL};
bool $tmp1529 = $tmp1528.value;
if ($tmp1529) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp1530 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1531, $tmp1530);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1532 = &$tmp1512->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1533 = *$tmp1532;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
frost$core$Int64 $tmp1534 = (frost$core$Int64) {0u};
frost$core$Object* $tmp1535 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1533, $tmp1534);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1535)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1535);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
*(&local11) = ((org$frostlang$frostc$Type*) $tmp1535);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1535)));
goto block25;
block25:;
org$frostlang$frostc$Type* $tmp1536 = *(&local11);
// begin inline call to function org.frostlang.frostc.Type.get_isMethod():frost.core.Bit from Closure.frost:221:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:378
org$frostlang$frostc$Type$Kind* $tmp1537 = &$tmp1536->typeKind;
org$frostlang$frostc$Type$Kind $tmp1538 = *$tmp1537;
frost$core$Int64 $tmp1539 = $tmp1538.$rawValue;
frost$core$Int64 $tmp1540 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:379:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1541 = $tmp1539.value;
int64_t $tmp1542 = $tmp1540.value;
bool $tmp1543 = $tmp1541 == $tmp1542;
frost$core$Bit $tmp1544 = (frost$core$Bit) {$tmp1543};
bool $tmp1545 = $tmp1544.value;
if ($tmp1545) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp1546 = (frost$core$Int64) {15u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:379:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1547 = $tmp1539.value;
int64_t $tmp1548 = $tmp1546.value;
bool $tmp1549 = $tmp1547 == $tmp1548;
frost$core$Bit $tmp1550 = (frost$core$Bit) {$tmp1549};
bool $tmp1551 = $tmp1550.value;
if ($tmp1551) goto block34; else goto block37;
block37:;
frost$core$Int64 $tmp1552 = (frost$core$Int64) {18u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:379:50
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1553 = $tmp1539.value;
int64_t $tmp1554 = $tmp1552.value;
bool $tmp1555 = $tmp1553 == $tmp1554;
frost$core$Bit $tmp1556 = (frost$core$Bit) {$tmp1555};
bool $tmp1557 = $tmp1556.value;
if ($tmp1557) goto block34; else goto block39;
block39:;
frost$core$Int64 $tmp1558 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:379:73
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1559 = $tmp1539.value;
int64_t $tmp1560 = $tmp1558.value;
bool $tmp1561 = $tmp1559 == $tmp1560;
frost$core$Bit $tmp1562 = (frost$core$Bit) {$tmp1561};
bool $tmp1563 = $tmp1562.value;
if ($tmp1563) goto block34; else goto block41;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:380
frost$core$Bit $tmp1564 = (frost$core$Bit) {true};
*(&local14) = $tmp1564;
goto block32;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:383
frost$core$Bit $tmp1565 = (frost$core$Bit) {false};
*(&local14) = $tmp1565;
goto block32;
block33:;
goto block32;
block32:;
frost$core$Bit $tmp1566 = *(&local14);
bool $tmp1567 = $tmp1566.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
if ($tmp1567) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:222
org$frostlang$frostc$Type* $tmp1568 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:222:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp1569 = &$tmp1568->typeKind;
org$frostlang$frostc$Type$Kind $tmp1570 = *$tmp1569;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1571;
$tmp1571 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1571->value = $tmp1570;
frost$core$Int64 $tmp1572 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1573 = &(&local17)->$rawValue;
*$tmp1573 = $tmp1572;
org$frostlang$frostc$Type$Kind $tmp1574 = *(&local17);
*(&local16) = $tmp1574;
org$frostlang$frostc$Type$Kind $tmp1575 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1576;
$tmp1576 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1576->value = $tmp1575;
ITable* $tmp1577 = ((frost$core$Equatable*) $tmp1571)->$class->itable;
while ($tmp1577->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1577 = $tmp1577->next;
}
$fn1579 $tmp1578 = $tmp1577->methods[1];
frost$core$Bit $tmp1580 = $tmp1578(((frost$core$Equatable*) $tmp1571), ((frost$core$Equatable*) $tmp1576));
bool $tmp1581 = $tmp1580.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1576)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1571)));
if ($tmp1581) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
*(&local15) = $tmp1568;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
goto block43;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1582 = &$tmp1568->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1583 = *$tmp1582;
frost$core$Bit $tmp1584 = (frost$core$Bit) {$tmp1583 != NULL};
bool $tmp1585 = $tmp1584.value;
if ($tmp1585) goto block48; else goto block49;
block49:;
frost$core$Int64 $tmp1586 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1587, $tmp1586);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1588 = &$tmp1568->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1589 = *$tmp1588;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
frost$core$Int64 $tmp1590 = (frost$core$Int64) {0u};
frost$core$Object* $tmp1591 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1589, $tmp1590);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1591)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1591);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
*(&local15) = ((org$frostlang$frostc$Type*) $tmp1591);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1591)));
goto block43;
block43:;
org$frostlang$frostc$Type* $tmp1592 = *(&local15);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:222:54
org$frostlang$frostc$Type$Kind* $tmp1593 = &$tmp1592->typeKind;
org$frostlang$frostc$Type$Kind $tmp1594 = *$tmp1593;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1595;
$tmp1595 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1595->value = $tmp1594;
frost$core$Int64 $tmp1596 = (frost$core$Int64) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1597 = &(&local19)->$rawValue;
*$tmp1597 = $tmp1596;
org$frostlang$frostc$Type$Kind $tmp1598 = *(&local19);
*(&local18) = $tmp1598;
org$frostlang$frostc$Type$Kind $tmp1599 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1600;
$tmp1600 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1600->value = $tmp1599;
ITable* $tmp1601 = ((frost$core$Equatable*) $tmp1595)->$class->itable;
while ($tmp1601->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1601 = $tmp1601->next;
}
$fn1603 $tmp1602 = $tmp1601->methods[0];
frost$core$Bit $tmp1604 = $tmp1602(((frost$core$Equatable*) $tmp1595), ((frost$core$Equatable*) $tmp1600));
bool $tmp1605 = $tmp1604.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1600)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1595)));
if ($tmp1605) goto block51; else goto block55;
block55:;
org$frostlang$frostc$Type$Kind* $tmp1606 = &$tmp1592->typeKind;
org$frostlang$frostc$Type$Kind $tmp1607 = *$tmp1606;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1608;
$tmp1608 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1608->value = $tmp1607;
frost$core$Int64 $tmp1609 = (frost$core$Int64) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1610 = &(&local21)->$rawValue;
*$tmp1610 = $tmp1609;
org$frostlang$frostc$Type$Kind $tmp1611 = *(&local21);
*(&local20) = $tmp1611;
org$frostlang$frostc$Type$Kind $tmp1612 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1613;
$tmp1613 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1613->value = $tmp1612;
ITable* $tmp1614 = ((frost$core$Equatable*) $tmp1608)->$class->itable;
while ($tmp1614->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1614 = $tmp1614->next;
}
$fn1616 $tmp1615 = $tmp1614->methods[0];
frost$core$Bit $tmp1617 = $tmp1615(((frost$core$Equatable*) $tmp1608), ((frost$core$Equatable*) $tmp1613));
bool $tmp1618 = $tmp1617.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1613)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1608)));
if ($tmp1618) goto block51; else goto block54;
block54:;
org$frostlang$frostc$Type$Kind* $tmp1619 = &$tmp1592->typeKind;
org$frostlang$frostc$Type$Kind $tmp1620 = *$tmp1619;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1621;
$tmp1621 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1621->value = $tmp1620;
frost$core$Int64 $tmp1622 = (frost$core$Int64) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1623 = &(&local23)->$rawValue;
*$tmp1623 = $tmp1622;
org$frostlang$frostc$Type$Kind $tmp1624 = *(&local23);
*(&local22) = $tmp1624;
org$frostlang$frostc$Type$Kind $tmp1625 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1626;
$tmp1626 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1626->value = $tmp1625;
ITable* $tmp1627 = ((frost$core$Equatable*) $tmp1621)->$class->itable;
while ($tmp1627->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1627 = $tmp1627->next;
}
$fn1629 $tmp1628 = $tmp1627->methods[0];
frost$core$Bit $tmp1630 = $tmp1628(((frost$core$Equatable*) $tmp1621), ((frost$core$Equatable*) $tmp1626));
bool $tmp1631 = $tmp1630.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1626)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1621)));
if ($tmp1631) goto block51; else goto block53;
block53:;
org$frostlang$frostc$Type$Kind* $tmp1632 = &$tmp1592->typeKind;
org$frostlang$frostc$Type$Kind $tmp1633 = *$tmp1632;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1634;
$tmp1634 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1634->value = $tmp1633;
frost$core$Int64 $tmp1635 = (frost$core$Int64) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1636 = &(&local25)->$rawValue;
*$tmp1636 = $tmp1635;
org$frostlang$frostc$Type$Kind $tmp1637 = *(&local25);
*(&local24) = $tmp1637;
org$frostlang$frostc$Type$Kind $tmp1638 = *(&local24);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1639;
$tmp1639 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1639->value = $tmp1638;
ITable* $tmp1640 = ((frost$core$Equatable*) $tmp1634)->$class->itable;
while ($tmp1640->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1640 = $tmp1640->next;
}
$fn1642 $tmp1641 = $tmp1640->methods[0];
frost$core$Bit $tmp1643 = $tmp1641(((frost$core$Equatable*) $tmp1634), ((frost$core$Equatable*) $tmp1639));
bool $tmp1644 = $tmp1643.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1639)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1634)));
if ($tmp1644) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp1645 = (frost$core$Int64) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1646, $tmp1645, &$s1647);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1648 = &$tmp1592->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1649 = *$tmp1648;
frost$core$Bit $tmp1650 = (frost$core$Bit) {$tmp1649 != NULL};
bool $tmp1651 = $tmp1650.value;
if ($tmp1651) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp1652 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1653, $tmp1652);
abort(); // unreachable
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1654 = &$tmp1592->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1655 = *$tmp1654;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1656 = &$tmp1592->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1657 = *$tmp1656;
frost$core$Bit $tmp1658 = (frost$core$Bit) {$tmp1657 != NULL};
bool $tmp1659 = $tmp1658.value;
if ($tmp1659) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp1660 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1661, $tmp1660);
abort(); // unreachable
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1662 = &$tmp1592->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1663 = *$tmp1662;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
ITable* $tmp1664 = ((frost$collections$CollectionView*) $tmp1663)->$class->itable;
while ($tmp1664->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1664 = $tmp1664->next;
}
$fn1666 $tmp1665 = $tmp1664->methods[0];
frost$core$Int64 $tmp1667 = $tmp1665(((frost$collections$CollectionView*) $tmp1663));
frost$core$Int64 $tmp1668 = (frost$core$Int64) {1u};
int64_t $tmp1669 = $tmp1667.value;
int64_t $tmp1670 = $tmp1668.value;
int64_t $tmp1671 = $tmp1669 - $tmp1670;
frost$core$Int64 $tmp1672 = (frost$core$Int64) {$tmp1671};
frost$core$Object* $tmp1673 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1655, $tmp1672);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1673)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1673);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1673)));
org$frostlang$frostc$Type* $tmp1674 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1673);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1673)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
org$frostlang$frostc$Type* $tmp1675 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
goto block24;
block24:;
org$frostlang$frostc$Type* $tmp1676 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1676));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1677 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block20;
block20:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:227
frost$core$Int64 $tmp1678 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:227:59
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp1679 = &(&local27)->$rawValue;
*$tmp1679 = $tmp1678;
org$frostlang$frostc$MethodDecl$Kind $tmp1680 = *(&local27);
*(&local26) = $tmp1680;
org$frostlang$frostc$MethodDecl$Kind $tmp1681 = *(&local26);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1682 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1683 = (frost$core$Int64) {26u};
org$frostlang$frostc$Type* $tmp1684 = *(&local0);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:228:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3701
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1685 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1686 = (frost$core$Int64) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3701:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
org$frostlang$frostc$Type** $tmp1687 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp1688 = *$tmp1687;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1689 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1690 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp1689, $tmp1690);
frost$collections$Array$add$frost$collections$Array$T($tmp1689, ((frost$core$Object*) $tmp1684));
org$frostlang$frostc$Type* $tmp1691 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1688, ((frost$collections$ListView*) $tmp1689));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1689));
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp1685, $tmp1686, $tmp1684, $tmp1691);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1682, $tmp1683, param1, $tmp1685);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1692 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1693 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp1692, $tmp1693);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1694 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1695 = (frost$core$Int64) {38u};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp1694, $tmp1695, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp1692, ((frost$core$Object*) $tmp1694));
org$frostlang$frostc$IR$Value* $tmp1696 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1681, param2, $tmp1682, ((org$frostlang$frostc$FixedArray*) $tmp1692), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
org$frostlang$frostc$Type* $tmp1697 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1698 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1698));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1696;

}
frost$core$Bit org$frostlang$frostc$expression$Closure$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:271
frost$core$String** $tmp1699 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1700 = *$tmp1699;
frost$core$String** $tmp1701 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp1702 = *$tmp1701;
frost$core$Bit $tmp1703 = frost$core$String$$GT$frost$core$String$R$frost$core$Bit($tmp1700, $tmp1702);
return $tmp1703;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type* local4 = NULL;
frost$core$Bit local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$Type$Kind local13;
frost$collections$Array* local14 = NULL;
frost$core$Int64 local15;
org$frostlang$frostc$Position local16;
frost$core$String* local17 = NULL;
org$frostlang$frostc$Type$Kind local18;
org$frostlang$frostc$Type$Kind local19;
org$frostlang$frostc$Type$Kind local20;
org$frostlang$frostc$Type$Kind local21;
org$frostlang$frostc$Type$Kind local22;
org$frostlang$frostc$Type$Kind local23;
org$frostlang$frostc$Type$Kind local24;
org$frostlang$frostc$Type$Kind local25;
org$frostlang$frostc$Type* local26 = NULL;
org$frostlang$frostc$Type$Kind local27;
org$frostlang$frostc$Type$Kind local28;
org$frostlang$frostc$Type$Kind local29;
org$frostlang$frostc$Type$Kind local30;
org$frostlang$frostc$Type$Kind local31;
org$frostlang$frostc$Type$Kind local32;
org$frostlang$frostc$Type$Kind local33;
org$frostlang$frostc$Type$Kind local34;
org$frostlang$frostc$Type$Kind local35;
org$frostlang$frostc$Type$Kind local36;
org$frostlang$frostc$Type* local37 = NULL;
org$frostlang$frostc$MethodDecl$Kind local38;
org$frostlang$frostc$MethodDecl$Kind local39;
frost$collections$HashSet* local40 = NULL;
frost$collections$Array* local41 = NULL;
frost$core$MutableString* local42 = NULL;
frost$threads$MessageQueue* local43 = NULL;
org$frostlang$frostc$Type* local44 = NULL;
frost$threads$ScopedLock* local45 = NULL;
frost$threads$ScopedLock* local46 = NULL;
frost$core$String* local47 = NULL;
frost$core$String* local48 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:236
frost$core$Int64* $tmp1704 = &param4->$rawValue;
frost$core$Int64 $tmp1705 = *$tmp1704;
frost$core$Int64 $tmp1706 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:237:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1707 = $tmp1705.value;
int64_t $tmp1708 = $tmp1706.value;
bool $tmp1709 = $tmp1707 == $tmp1708;
frost$core$Bit $tmp1710 = (frost$core$Bit) {$tmp1709};
bool $tmp1711 = $tmp1710.value;
if ($tmp1711) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Type** $tmp1712 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp1713 = *$tmp1712;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
org$frostlang$frostc$Type* $tmp1714 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
*(&local0) = $tmp1713;
frost$core$Bit* $tmp1715 = (frost$core$Bit*) (param4->$data + 8);
frost$core$Bit $tmp1716 = *$tmp1715;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:238
org$frostlang$frostc$Type* $tmp1717 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:238:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp1718 = &$tmp1717->typeKind;
org$frostlang$frostc$Type$Kind $tmp1719 = *$tmp1718;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1720;
$tmp1720 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1720->value = $tmp1719;
frost$core$Int64 $tmp1721 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1722 = &(&local3)->$rawValue;
*$tmp1722 = $tmp1721;
org$frostlang$frostc$Type$Kind $tmp1723 = *(&local3);
*(&local2) = $tmp1723;
org$frostlang$frostc$Type$Kind $tmp1724 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1725;
$tmp1725 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1725->value = $tmp1724;
ITable* $tmp1726 = ((frost$core$Equatable*) $tmp1720)->$class->itable;
while ($tmp1726->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1726 = $tmp1726->next;
}
$fn1728 $tmp1727 = $tmp1726->methods[1];
frost$core$Bit $tmp1729 = $tmp1727(((frost$core$Equatable*) $tmp1720), ((frost$core$Equatable*) $tmp1725));
bool $tmp1730 = $tmp1729.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1725)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1720)));
if ($tmp1730) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
*(&local1) = $tmp1717;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1731 = &$tmp1717->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1732 = *$tmp1731;
frost$core$Bit $tmp1733 = (frost$core$Bit) {$tmp1732 != NULL};
bool $tmp1734 = $tmp1733.value;
if ($tmp1734) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1735 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1736, $tmp1735);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1737 = &$tmp1717->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1738 = *$tmp1737;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
frost$core$Int64 $tmp1739 = (frost$core$Int64) {0u};
frost$core$Object* $tmp1740 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1738, $tmp1739);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1740)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1740);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp1740);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1740)));
goto block4;
block4:;
org$frostlang$frostc$Type* $tmp1741 = *(&local1);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1741));
org$frostlang$frostc$Type* $tmp1742 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
*(&local4) = $tmp1741;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1741));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:239
org$frostlang$frostc$Type* $tmp1743 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_isMethod():frost.core.Bit from Closure.frost:239:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:378
org$frostlang$frostc$Type$Kind* $tmp1744 = &$tmp1743->typeKind;
org$frostlang$frostc$Type$Kind $tmp1745 = *$tmp1744;
frost$core$Int64 $tmp1746 = $tmp1745.$rawValue;
frost$core$Int64 $tmp1747 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:379:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1748 = $tmp1746.value;
int64_t $tmp1749 = $tmp1747.value;
bool $tmp1750 = $tmp1748 == $tmp1749;
frost$core$Bit $tmp1751 = (frost$core$Bit) {$tmp1750};
bool $tmp1752 = $tmp1751.value;
if ($tmp1752) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp1753 = (frost$core$Int64) {15u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:379:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1754 = $tmp1746.value;
int64_t $tmp1755 = $tmp1753.value;
bool $tmp1756 = $tmp1754 == $tmp1755;
frost$core$Bit $tmp1757 = (frost$core$Bit) {$tmp1756};
bool $tmp1758 = $tmp1757.value;
if ($tmp1758) goto block15; else goto block18;
block18:;
frost$core$Int64 $tmp1759 = (frost$core$Int64) {18u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:379:50
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1760 = $tmp1746.value;
int64_t $tmp1761 = $tmp1759.value;
bool $tmp1762 = $tmp1760 == $tmp1761;
frost$core$Bit $tmp1763 = (frost$core$Bit) {$tmp1762};
bool $tmp1764 = $tmp1763.value;
if ($tmp1764) goto block15; else goto block20;
block20:;
frost$core$Int64 $tmp1765 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:379:73
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1766 = $tmp1746.value;
int64_t $tmp1767 = $tmp1765.value;
bool $tmp1768 = $tmp1766 == $tmp1767;
frost$core$Bit $tmp1769 = (frost$core$Bit) {$tmp1768};
bool $tmp1770 = $tmp1769.value;
if ($tmp1770) goto block15; else goto block22;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:380
frost$core$Bit $tmp1771 = (frost$core$Bit) {true};
*(&local5) = $tmp1771;
goto block13;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:383
frost$core$Bit $tmp1772 = (frost$core$Bit) {false};
*(&local5) = $tmp1772;
goto block13;
block14:;
goto block13;
block13:;
frost$core$Bit $tmp1773 = *(&local5);
bool $tmp1774 = $tmp1773.value;
if ($tmp1774) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:240
ITable* $tmp1775 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp1775->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1775 = $tmp1775->next;
}
$fn1777 $tmp1776 = $tmp1775->methods[0];
frost$core$Int64 $tmp1778 = $tmp1776(((frost$collections$CollectionView*) param2));
org$frostlang$frostc$Type* $tmp1779 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_parameterCount():frost.core.Int64 from Closure.frost:240:57
org$frostlang$frostc$Type$Kind* $tmp1780 = &$tmp1779->typeKind;
org$frostlang$frostc$Type$Kind $tmp1781 = *$tmp1780;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1782;
$tmp1782 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1782->value = $tmp1781;
frost$core$Int64 $tmp1783 = (frost$core$Int64) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:420:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1784 = &(&local7)->$rawValue;
*$tmp1784 = $tmp1783;
org$frostlang$frostc$Type$Kind $tmp1785 = *(&local7);
*(&local6) = $tmp1785;
org$frostlang$frostc$Type$Kind $tmp1786 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1787;
$tmp1787 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1787->value = $tmp1786;
ITable* $tmp1788 = ((frost$core$Equatable*) $tmp1782)->$class->itable;
while ($tmp1788->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1788 = $tmp1788->next;
}
$fn1790 $tmp1789 = $tmp1788->methods[0];
frost$core$Bit $tmp1791 = $tmp1789(((frost$core$Equatable*) $tmp1782), ((frost$core$Equatable*) $tmp1787));
bool $tmp1792 = $tmp1791.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1787)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1782)));
if ($tmp1792) goto block27; else goto block31;
block31:;
org$frostlang$frostc$Type$Kind* $tmp1793 = &$tmp1779->typeKind;
org$frostlang$frostc$Type$Kind $tmp1794 = *$tmp1793;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1795;
$tmp1795 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1795->value = $tmp1794;
frost$core$Int64 $tmp1796 = (frost$core$Int64) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:420:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1797 = &(&local9)->$rawValue;
*$tmp1797 = $tmp1796;
org$frostlang$frostc$Type$Kind $tmp1798 = *(&local9);
*(&local8) = $tmp1798;
org$frostlang$frostc$Type$Kind $tmp1799 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1800;
$tmp1800 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1800->value = $tmp1799;
ITable* $tmp1801 = ((frost$core$Equatable*) $tmp1795)->$class->itable;
while ($tmp1801->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1801 = $tmp1801->next;
}
$fn1803 $tmp1802 = $tmp1801->methods[0];
frost$core$Bit $tmp1804 = $tmp1802(((frost$core$Equatable*) $tmp1795), ((frost$core$Equatable*) $tmp1800));
bool $tmp1805 = $tmp1804.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1800)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1795)));
if ($tmp1805) goto block27; else goto block30;
block30:;
org$frostlang$frostc$Type$Kind* $tmp1806 = &$tmp1779->typeKind;
org$frostlang$frostc$Type$Kind $tmp1807 = *$tmp1806;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1808;
$tmp1808 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1808->value = $tmp1807;
frost$core$Int64 $tmp1809 = (frost$core$Int64) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:420:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1810 = &(&local11)->$rawValue;
*$tmp1810 = $tmp1809;
org$frostlang$frostc$Type$Kind $tmp1811 = *(&local11);
*(&local10) = $tmp1811;
org$frostlang$frostc$Type$Kind $tmp1812 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1813;
$tmp1813 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1813->value = $tmp1812;
ITable* $tmp1814 = ((frost$core$Equatable*) $tmp1808)->$class->itable;
while ($tmp1814->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1814 = $tmp1814->next;
}
$fn1816 $tmp1815 = $tmp1814->methods[0];
frost$core$Bit $tmp1817 = $tmp1815(((frost$core$Equatable*) $tmp1808), ((frost$core$Equatable*) $tmp1813));
bool $tmp1818 = $tmp1817.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1813)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1808)));
if ($tmp1818) goto block27; else goto block29;
block29:;
org$frostlang$frostc$Type$Kind* $tmp1819 = &$tmp1779->typeKind;
org$frostlang$frostc$Type$Kind $tmp1820 = *$tmp1819;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1821;
$tmp1821 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1821->value = $tmp1820;
frost$core$Int64 $tmp1822 = (frost$core$Int64) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:421:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1823 = &(&local13)->$rawValue;
*$tmp1823 = $tmp1822;
org$frostlang$frostc$Type$Kind $tmp1824 = *(&local13);
*(&local12) = $tmp1824;
org$frostlang$frostc$Type$Kind $tmp1825 = *(&local12);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1826;
$tmp1826 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1826->value = $tmp1825;
ITable* $tmp1827 = ((frost$core$Equatable*) $tmp1821)->$class->itable;
while ($tmp1827->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1827 = $tmp1827->next;
}
$fn1829 $tmp1828 = $tmp1827->methods[0];
frost$core$Bit $tmp1830 = $tmp1828(((frost$core$Equatable*) $tmp1821), ((frost$core$Equatable*) $tmp1826));
bool $tmp1831 = $tmp1830.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1826)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1821)));
if ($tmp1831) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp1832 = (frost$core$Int64) {422u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1833, $tmp1832, &$s1834);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:423
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:423:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1835 = &$tmp1779->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1836 = *$tmp1835;
frost$core$Bit $tmp1837 = (frost$core$Bit) {$tmp1836 != NULL};
bool $tmp1838 = $tmp1837.value;
if ($tmp1838) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp1839 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1840, $tmp1839);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1841 = &$tmp1779->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1842 = *$tmp1841;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
ITable* $tmp1843 = ((frost$collections$CollectionView*) $tmp1842)->$class->itable;
while ($tmp1843->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1843 = $tmp1843->next;
}
$fn1845 $tmp1844 = $tmp1843->methods[0];
frost$core$Int64 $tmp1846 = $tmp1844(((frost$collections$CollectionView*) $tmp1842));
frost$core$Int64 $tmp1847 = (frost$core$Int64) {1u};
int64_t $tmp1848 = $tmp1846.value;
int64_t $tmp1849 = $tmp1847.value;
int64_t $tmp1850 = $tmp1848 - $tmp1849;
frost$core$Int64 $tmp1851 = (frost$core$Int64) {$tmp1850};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
int64_t $tmp1852 = $tmp1778.value;
int64_t $tmp1853 = $tmp1851.value;
bool $tmp1854 = $tmp1852 != $tmp1853;
frost$core$Bit $tmp1855 = (frost$core$Bit) {$tmp1854};
bool $tmp1856 = $tmp1855.value;
if ($tmp1856) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:241
org$frostlang$frostc$Type* $tmp1857 = *(&local0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:241:50
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1859 $tmp1858 = ($fn1859) ((frost$core$Object*) $tmp1857)->$class->vtable[0];
frost$core$String* $tmp1860 = $tmp1858(((frost$core$Object*) $tmp1857));
frost$core$String* $tmp1861 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1862, $tmp1860);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
frost$core$String* $tmp1863 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1861, &$s1864);
frost$core$String* $tmp1865 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1863, &$s1866);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1865);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:243
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1867 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1868 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1868));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1869 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:245
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1870 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1870);
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
frost$collections$Array* $tmp1871 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
*(&local14) = $tmp1870;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:246
frost$core$Int64 $tmp1872 = (frost$core$Int64) {0u};
ITable* $tmp1873 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp1873->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1873 = $tmp1873->next;
}
$fn1875 $tmp1874 = $tmp1873->methods[0];
frost$core$Int64 $tmp1876 = $tmp1874(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp1877 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1878 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1872, $tmp1876, $tmp1877);
frost$core$Int64 $tmp1879 = $tmp1878.min;
*(&local15) = $tmp1879;
frost$core$Int64 $tmp1880 = $tmp1878.max;
frost$core$Bit $tmp1881 = $tmp1878.inclusive;
bool $tmp1882 = $tmp1881.value;
frost$core$Int64 $tmp1883 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1884 = $tmp1883.value;
frost$core$UInt64 $tmp1885 = (frost$core$UInt64) {((uint64_t) $tmp1884)};
if ($tmp1882) goto block44; else goto block45;
block44:;
int64_t $tmp1886 = $tmp1879.value;
int64_t $tmp1887 = $tmp1880.value;
bool $tmp1888 = $tmp1886 <= $tmp1887;
frost$core$Bit $tmp1889 = (frost$core$Bit) {$tmp1888};
bool $tmp1890 = $tmp1889.value;
if ($tmp1890) goto block41; else goto block42;
block45:;
int64_t $tmp1891 = $tmp1879.value;
int64_t $tmp1892 = $tmp1880.value;
bool $tmp1893 = $tmp1891 < $tmp1892;
frost$core$Bit $tmp1894 = (frost$core$Bit) {$tmp1893};
bool $tmp1895 = $tmp1894.value;
if ($tmp1895) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:247
frost$core$Int64 $tmp1896 = *(&local15);
frost$core$Object* $tmp1897 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(param2, $tmp1896);
frost$core$Int64* $tmp1898 = &((org$frostlang$frostc$ASTNode*) $tmp1897)->$rawValue;
frost$core$Int64 $tmp1899 = *$tmp1898;
frost$core$Int64 $tmp1900 = (frost$core$Int64) {22u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:248:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1901 = $tmp1899.value;
int64_t $tmp1902 = $tmp1900.value;
bool $tmp1903 = $tmp1901 == $tmp1902;
frost$core$Bit $tmp1904 = (frost$core$Bit) {$tmp1903};
bool $tmp1905 = $tmp1904.value;
if ($tmp1905) goto block47; else goto block48;
block47:;
org$frostlang$frostc$Position* $tmp1906 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$ASTNode*) $tmp1897)->$data + 0);
org$frostlang$frostc$Position $tmp1907 = *$tmp1906;
*(&local16) = $tmp1907;
frost$core$String** $tmp1908 = (frost$core$String**) (((org$frostlang$frostc$ASTNode*) $tmp1897)->$data + 24);
frost$core$String* $tmp1909 = *$tmp1908;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
frost$core$String* $tmp1910 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
*(&local17) = $tmp1909;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:249
frost$collections$Array* $tmp1911 = *(&local14);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1912 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1913 = (frost$core$Int64) {34u};
org$frostlang$frostc$Position $tmp1914 = *(&local16);
frost$core$String* $tmp1915 = *(&local17);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1916 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1917 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp1918 = *(&local16);
org$frostlang$frostc$Type* $tmp1919 = *(&local4);
frost$core$Int64 $tmp1920 = *(&local15);
// begin inline call to function org.frostlang.frostc.Type.parameterType(i:frost.core.Int64):org.frostlang.frostc.Type from Closure.frost:251:90
org$frostlang$frostc$Type$Kind* $tmp1921 = &$tmp1919->typeKind;
org$frostlang$frostc$Type$Kind $tmp1922 = *$tmp1921;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1923;
$tmp1923 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1923->value = $tmp1922;
frost$core$Int64 $tmp1924 = (frost$core$Int64) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:426:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1925 = &(&local19)->$rawValue;
*$tmp1925 = $tmp1924;
org$frostlang$frostc$Type$Kind $tmp1926 = *(&local19);
*(&local18) = $tmp1926;
org$frostlang$frostc$Type$Kind $tmp1927 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1928;
$tmp1928 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1928->value = $tmp1927;
ITable* $tmp1929 = ((frost$core$Equatable*) $tmp1923)->$class->itable;
while ($tmp1929->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1929 = $tmp1929->next;
}
$fn1931 $tmp1930 = $tmp1929->methods[0];
frost$core$Bit $tmp1932 = $tmp1930(((frost$core$Equatable*) $tmp1923), ((frost$core$Equatable*) $tmp1928));
bool $tmp1933 = $tmp1932.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1928)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1923)));
if ($tmp1933) goto block54; else goto block57;
block57:;
org$frostlang$frostc$Type$Kind* $tmp1934 = &$tmp1919->typeKind;
org$frostlang$frostc$Type$Kind $tmp1935 = *$tmp1934;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1936;
$tmp1936 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1936->value = $tmp1935;
frost$core$Int64 $tmp1937 = (frost$core$Int64) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:426:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1938 = &(&local21)->$rawValue;
*$tmp1938 = $tmp1937;
org$frostlang$frostc$Type$Kind $tmp1939 = *(&local21);
*(&local20) = $tmp1939;
org$frostlang$frostc$Type$Kind $tmp1940 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1941;
$tmp1941 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1941->value = $tmp1940;
ITable* $tmp1942 = ((frost$core$Equatable*) $tmp1936)->$class->itable;
while ($tmp1942->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1942 = $tmp1942->next;
}
$fn1944 $tmp1943 = $tmp1942->methods[0];
frost$core$Bit $tmp1945 = $tmp1943(((frost$core$Equatable*) $tmp1936), ((frost$core$Equatable*) $tmp1941));
bool $tmp1946 = $tmp1945.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1941)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1936)));
if ($tmp1946) goto block54; else goto block56;
block56:;
org$frostlang$frostc$Type$Kind* $tmp1947 = &$tmp1919->typeKind;
org$frostlang$frostc$Type$Kind $tmp1948 = *$tmp1947;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1949;
$tmp1949 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1949->value = $tmp1948;
frost$core$Int64 $tmp1950 = (frost$core$Int64) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:426:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1951 = &(&local23)->$rawValue;
*$tmp1951 = $tmp1950;
org$frostlang$frostc$Type$Kind $tmp1952 = *(&local23);
*(&local22) = $tmp1952;
org$frostlang$frostc$Type$Kind $tmp1953 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1954;
$tmp1954 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1954->value = $tmp1953;
ITable* $tmp1955 = ((frost$core$Equatable*) $tmp1949)->$class->itable;
while ($tmp1955->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1955 = $tmp1955->next;
}
$fn1957 $tmp1956 = $tmp1955->methods[0];
frost$core$Bit $tmp1958 = $tmp1956(((frost$core$Equatable*) $tmp1949), ((frost$core$Equatable*) $tmp1954));
bool $tmp1959 = $tmp1958.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1954)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1949)));
if ($tmp1959) goto block54; else goto block55;
block55:;
org$frostlang$frostc$Type$Kind* $tmp1960 = &$tmp1919->typeKind;
org$frostlang$frostc$Type$Kind $tmp1961 = *$tmp1960;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1962;
$tmp1962 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1962->value = $tmp1961;
frost$core$Int64 $tmp1963 = (frost$core$Int64) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:427:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1964 = &(&local25)->$rawValue;
*$tmp1964 = $tmp1963;
org$frostlang$frostc$Type$Kind $tmp1965 = *(&local25);
*(&local24) = $tmp1965;
org$frostlang$frostc$Type$Kind $tmp1966 = *(&local24);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1967;
$tmp1967 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1967->value = $tmp1966;
ITable* $tmp1968 = ((frost$core$Equatable*) $tmp1962)->$class->itable;
while ($tmp1968->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1968 = $tmp1968->next;
}
$fn1970 $tmp1969 = $tmp1968->methods[0];
frost$core$Bit $tmp1971 = $tmp1969(((frost$core$Equatable*) $tmp1962), ((frost$core$Equatable*) $tmp1967));
bool $tmp1972 = $tmp1971.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1967)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1962)));
if ($tmp1972) goto block54; else goto block52;
block54:;
frost$core$Int64 $tmp1973 = (frost$core$Int64) {0u};
int64_t $tmp1974 = $tmp1920.value;
int64_t $tmp1975 = $tmp1973.value;
bool $tmp1976 = $tmp1974 >= $tmp1975;
frost$core$Bit $tmp1977 = (frost$core$Bit) {$tmp1976};
bool $tmp1978 = $tmp1977.value;
if ($tmp1978) goto block53; else goto block52;
block53:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:427:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1979 = &$tmp1919->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1980 = *$tmp1979;
frost$core$Bit $tmp1981 = (frost$core$Bit) {$tmp1980 != NULL};
bool $tmp1982 = $tmp1981.value;
if ($tmp1982) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp1983 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1984, $tmp1983);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1985 = &$tmp1919->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1986 = *$tmp1985;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
ITable* $tmp1987 = ((frost$collections$CollectionView*) $tmp1986)->$class->itable;
while ($tmp1987->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1987 = $tmp1987->next;
}
$fn1989 $tmp1988 = $tmp1987->methods[0];
frost$core$Int64 $tmp1990 = $tmp1988(((frost$collections$CollectionView*) $tmp1986));
frost$core$Int64 $tmp1991 = (frost$core$Int64) {1u};
int64_t $tmp1992 = $tmp1990.value;
int64_t $tmp1993 = $tmp1991.value;
int64_t $tmp1994 = $tmp1992 - $tmp1993;
frost$core$Int64 $tmp1995 = (frost$core$Int64) {$tmp1994};
int64_t $tmp1996 = $tmp1920.value;
int64_t $tmp1997 = $tmp1995.value;
bool $tmp1998 = $tmp1996 < $tmp1997;
frost$core$Bit $tmp1999 = (frost$core$Bit) {$tmp1998};
bool $tmp2000 = $tmp1999.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
if ($tmp2000) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp2001 = (frost$core$Int64) {428u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2002, $tmp2001, &$s2003);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:429
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:429:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2004 = &$tmp1919->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2005 = *$tmp2004;
frost$core$Bit $tmp2006 = (frost$core$Bit) {$tmp2005 != NULL};
bool $tmp2007 = $tmp2006.value;
if ($tmp2007) goto block66; else goto block67;
block67:;
frost$core$Int64 $tmp2008 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2009, $tmp2008);
abort(); // unreachable
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2010 = &$tmp1919->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2011 = *$tmp2010;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
frost$core$Object* $tmp2012 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2011, $tmp1920);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2012)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2012);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:251:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3701
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2013 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2014 = (frost$core$Int64) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3701:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
org$frostlang$frostc$Type** $tmp2015 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp2016 = *$tmp2015;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2017 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2018 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp2017, $tmp2018);
frost$collections$Array$add$frost$collections$Array$T($tmp2017, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2012)));
org$frostlang$frostc$Type* $tmp2019 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2016, ((frost$collections$ListView*) $tmp2017));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2017));
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp2013, $tmp2014, ((org$frostlang$frostc$Type*) $tmp2012), $tmp2019);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1916, $tmp1917, $tmp1918, $tmp2013);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp1912, $tmp1913, $tmp1914, $tmp1915, $tmp1916);
frost$collections$Array$add$frost$collections$Array$T($tmp1911, ((frost$core$Object*) $tmp1912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2012)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
frost$core$String* $tmp2020 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2020));
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1897);
frost$core$Int64 $tmp2021 = *(&local15);
int64_t $tmp2022 = $tmp1880.value;
int64_t $tmp2023 = $tmp2021.value;
int64_t $tmp2024 = $tmp2022 - $tmp2023;
frost$core$Int64 $tmp2025 = (frost$core$Int64) {$tmp2024};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2026 = $tmp2025.value;
frost$core$UInt64 $tmp2027 = (frost$core$UInt64) {((uint64_t) $tmp2026)};
if ($tmp1882) goto block72; else goto block73;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:254
frost$core$Int64 $tmp2028 = (frost$core$Int64) {254u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2029, $tmp2028);
abort(); // unreachable
block72:;
uint64_t $tmp2030 = $tmp2027.value;
uint64_t $tmp2031 = $tmp1885.value;
bool $tmp2032 = $tmp2030 >= $tmp2031;
frost$core$Bit $tmp2033 = (frost$core$Bit) {$tmp2032};
bool $tmp2034 = $tmp2033.value;
if ($tmp2034) goto block70; else goto block42;
block73:;
uint64_t $tmp2035 = $tmp2027.value;
uint64_t $tmp2036 = $tmp1885.value;
bool $tmp2037 = $tmp2035 > $tmp2036;
frost$core$Bit $tmp2038 = (frost$core$Bit) {$tmp2037};
bool $tmp2039 = $tmp2038.value;
if ($tmp2039) goto block70; else goto block42;
block70:;
int64_t $tmp2040 = $tmp2021.value;
int64_t $tmp2041 = $tmp1883.value;
int64_t $tmp2042 = $tmp2040 + $tmp2041;
frost$core$Int64 $tmp2043 = (frost$core$Int64) {$tmp2042};
*(&local15) = $tmp2043;
goto block41;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:258
org$frostlang$frostc$Type* $tmp2044 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:258:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp2045 = &$tmp2044->typeKind;
org$frostlang$frostc$Type$Kind $tmp2046 = *$tmp2045;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2047;
$tmp2047 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2047->value = $tmp2046;
frost$core$Int64 $tmp2048 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2049 = &(&local28)->$rawValue;
*$tmp2049 = $tmp2048;
org$frostlang$frostc$Type$Kind $tmp2050 = *(&local28);
*(&local27) = $tmp2050;
org$frostlang$frostc$Type$Kind $tmp2051 = *(&local27);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2052;
$tmp2052 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2052->value = $tmp2051;
ITable* $tmp2053 = ((frost$core$Equatable*) $tmp2047)->$class->itable;
while ($tmp2053->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2053 = $tmp2053->next;
}
$fn2055 $tmp2054 = $tmp2053->methods[1];
frost$core$Bit $tmp2056 = $tmp2054(((frost$core$Equatable*) $tmp2047), ((frost$core$Equatable*) $tmp2052));
bool $tmp2057 = $tmp2056.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2052)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2047)));
if ($tmp2057) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2044));
*(&local26) = $tmp2044;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2044));
goto block74;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2058 = &$tmp2044->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2059 = *$tmp2058;
frost$core$Bit $tmp2060 = (frost$core$Bit) {$tmp2059 != NULL};
bool $tmp2061 = $tmp2060.value;
if ($tmp2061) goto block79; else goto block80;
block80:;
frost$core$Int64 $tmp2062 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2063, $tmp2062);
abort(); // unreachable
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2064 = &$tmp2044->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2065 = *$tmp2064;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
frost$core$Int64 $tmp2066 = (frost$core$Int64) {0u};
frost$core$Object* $tmp2067 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2065, $tmp2066);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2067)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2067);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
*(&local26) = ((org$frostlang$frostc$Type*) $tmp2067);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2067)));
goto block74;
block74:;
org$frostlang$frostc$Type* $tmp2068 = *(&local26);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:258:54
org$frostlang$frostc$Type$Kind* $tmp2069 = &$tmp2068->typeKind;
org$frostlang$frostc$Type$Kind $tmp2070 = *$tmp2069;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2071;
$tmp2071 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2071->value = $tmp2070;
frost$core$Int64 $tmp2072 = (frost$core$Int64) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2073 = &(&local30)->$rawValue;
*$tmp2073 = $tmp2072;
org$frostlang$frostc$Type$Kind $tmp2074 = *(&local30);
*(&local29) = $tmp2074;
org$frostlang$frostc$Type$Kind $tmp2075 = *(&local29);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2076;
$tmp2076 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2076->value = $tmp2075;
ITable* $tmp2077 = ((frost$core$Equatable*) $tmp2071)->$class->itable;
while ($tmp2077->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2077 = $tmp2077->next;
}
$fn2079 $tmp2078 = $tmp2077->methods[0];
frost$core$Bit $tmp2080 = $tmp2078(((frost$core$Equatable*) $tmp2071), ((frost$core$Equatable*) $tmp2076));
bool $tmp2081 = $tmp2080.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2076)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2071)));
if ($tmp2081) goto block82; else goto block86;
block86:;
org$frostlang$frostc$Type$Kind* $tmp2082 = &$tmp2068->typeKind;
org$frostlang$frostc$Type$Kind $tmp2083 = *$tmp2082;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2084;
$tmp2084 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2084->value = $tmp2083;
frost$core$Int64 $tmp2085 = (frost$core$Int64) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2086 = &(&local32)->$rawValue;
*$tmp2086 = $tmp2085;
org$frostlang$frostc$Type$Kind $tmp2087 = *(&local32);
*(&local31) = $tmp2087;
org$frostlang$frostc$Type$Kind $tmp2088 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2089;
$tmp2089 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2089->value = $tmp2088;
ITable* $tmp2090 = ((frost$core$Equatable*) $tmp2084)->$class->itable;
while ($tmp2090->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2090 = $tmp2090->next;
}
$fn2092 $tmp2091 = $tmp2090->methods[0];
frost$core$Bit $tmp2093 = $tmp2091(((frost$core$Equatable*) $tmp2084), ((frost$core$Equatable*) $tmp2089));
bool $tmp2094 = $tmp2093.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2089)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2084)));
if ($tmp2094) goto block82; else goto block85;
block85:;
org$frostlang$frostc$Type$Kind* $tmp2095 = &$tmp2068->typeKind;
org$frostlang$frostc$Type$Kind $tmp2096 = *$tmp2095;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2097;
$tmp2097 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2097->value = $tmp2096;
frost$core$Int64 $tmp2098 = (frost$core$Int64) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2099 = &(&local34)->$rawValue;
*$tmp2099 = $tmp2098;
org$frostlang$frostc$Type$Kind $tmp2100 = *(&local34);
*(&local33) = $tmp2100;
org$frostlang$frostc$Type$Kind $tmp2101 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2102;
$tmp2102 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2102->value = $tmp2101;
ITable* $tmp2103 = ((frost$core$Equatable*) $tmp2097)->$class->itable;
while ($tmp2103->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2103 = $tmp2103->next;
}
$fn2105 $tmp2104 = $tmp2103->methods[0];
frost$core$Bit $tmp2106 = $tmp2104(((frost$core$Equatable*) $tmp2097), ((frost$core$Equatable*) $tmp2102));
bool $tmp2107 = $tmp2106.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2102)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2097)));
if ($tmp2107) goto block82; else goto block84;
block84:;
org$frostlang$frostc$Type$Kind* $tmp2108 = &$tmp2068->typeKind;
org$frostlang$frostc$Type$Kind $tmp2109 = *$tmp2108;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2110;
$tmp2110 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2110->value = $tmp2109;
frost$core$Int64 $tmp2111 = (frost$core$Int64) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2112 = &(&local36)->$rawValue;
*$tmp2112 = $tmp2111;
org$frostlang$frostc$Type$Kind $tmp2113 = *(&local36);
*(&local35) = $tmp2113;
org$frostlang$frostc$Type$Kind $tmp2114 = *(&local35);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2115;
$tmp2115 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2115->value = $tmp2114;
ITable* $tmp2116 = ((frost$core$Equatable*) $tmp2110)->$class->itable;
while ($tmp2116->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2116 = $tmp2116->next;
}
$fn2118 $tmp2117 = $tmp2116->methods[0];
frost$core$Bit $tmp2119 = $tmp2117(((frost$core$Equatable*) $tmp2110), ((frost$core$Equatable*) $tmp2115));
bool $tmp2120 = $tmp2119.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2115)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2110)));
if ($tmp2120) goto block82; else goto block83;
block83:;
frost$core$Int64 $tmp2121 = (frost$core$Int64) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2122, $tmp2121, &$s2123);
abort(); // unreachable
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2124 = &$tmp2068->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2125 = *$tmp2124;
frost$core$Bit $tmp2126 = (frost$core$Bit) {$tmp2125 != NULL};
bool $tmp2127 = $tmp2126.value;
if ($tmp2127) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp2128 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2129, $tmp2128);
abort(); // unreachable
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2130 = &$tmp2068->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2131 = *$tmp2130;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2132 = &$tmp2068->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2133 = *$tmp2132;
frost$core$Bit $tmp2134 = (frost$core$Bit) {$tmp2133 != NULL};
bool $tmp2135 = $tmp2134.value;
if ($tmp2135) goto block95; else goto block96;
block96:;
frost$core$Int64 $tmp2136 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2137, $tmp2136);
abort(); // unreachable
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2138 = &$tmp2068->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2139 = *$tmp2138;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
ITable* $tmp2140 = ((frost$collections$CollectionView*) $tmp2139)->$class->itable;
while ($tmp2140->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2140 = $tmp2140->next;
}
$fn2142 $tmp2141 = $tmp2140->methods[0];
frost$core$Int64 $tmp2143 = $tmp2141(((frost$collections$CollectionView*) $tmp2139));
frost$core$Int64 $tmp2144 = (frost$core$Int64) {1u};
int64_t $tmp2145 = $tmp2143.value;
int64_t $tmp2146 = $tmp2144.value;
int64_t $tmp2147 = $tmp2145 - $tmp2146;
frost$core$Int64 $tmp2148 = (frost$core$Int64) {$tmp2147};
frost$core$Object* $tmp2149 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2131, $tmp2148);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2149)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
*(&local37) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2149)));
org$frostlang$frostc$Type* $tmp2150 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
*(&local37) = ((org$frostlang$frostc$Type*) $tmp2149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2149)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2068));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:259
frost$core$Int64 $tmp2151 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:259:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp2152 = &(&local39)->$rawValue;
*$tmp2152 = $tmp2151;
org$frostlang$frostc$MethodDecl$Kind $tmp2153 = *(&local39);
*(&local38) = $tmp2153;
org$frostlang$frostc$MethodDecl$Kind $tmp2154 = *(&local38);
frost$collections$Array* $tmp2155 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp2156 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2155);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2157 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2158 = (frost$core$Int64) {26u};
org$frostlang$frostc$Type* $tmp2159 = *(&local37);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:261:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3701
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2160 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2161 = (frost$core$Int64) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3701:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
org$frostlang$frostc$Type** $tmp2162 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp2163 = *$tmp2162;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2164 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2165 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp2164, $tmp2165);
frost$collections$Array$add$frost$collections$Array$T($tmp2164, ((frost$core$Object*) $tmp2159));
org$frostlang$frostc$Type* $tmp2166 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2163, ((frost$collections$ListView*) $tmp2164));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp2160, $tmp2161, $tmp2159, $tmp2166);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2157, $tmp2158, param1, $tmp2160);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2167 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2168 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp2167, $tmp2168);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2169 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2170 = (frost$core$Int64) {38u};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp2169, $tmp2170, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp2167, ((frost$core$Object*) $tmp2169));
org$frostlang$frostc$FixedArray* $tmp2171 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2167);
org$frostlang$frostc$IR$Value* $tmp2172 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2154, $tmp2156, $tmp2157, $tmp2171, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
org$frostlang$frostc$Type* $tmp2173 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2173));
*(&local37) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2174 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2174));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2175 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2176 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2176));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2177 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2177));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2178 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp2172;
block12:;
org$frostlang$frostc$Type* $tmp2179 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2179));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2180 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2180));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2181 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:267
frost$collections$IdentityMap** $tmp2182 = &param0->lambdaTypes;
frost$collections$IdentityMap* $tmp2183 = *$tmp2182;
frost$core$Object* $tmp2184 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp2183, ((frost$core$Object*) param3));
*(&local40) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp2184)));
frost$collections$HashSet* $tmp2185 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
*(&local40) = ((frost$collections$HashSet*) $tmp2184);
frost$core$Frost$unref$frost$core$Object$Q($tmp2184);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:268
frost$collections$HashSet* $tmp2186 = *(&local40);
frost$core$Bit $tmp2187 = (frost$core$Bit) {$tmp2186 != NULL};
bool $tmp2188 = $tmp2187.value;
if ($tmp2188) goto block100; else goto block101;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:269
frost$collections$HashSet* $tmp2189 = *(&local40);
ITable* $tmp2190 = ((frost$collections$CollectionView*) $tmp2189)->$class->itable;
while ($tmp2190->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2190 = $tmp2190->next;
}
$fn2192 $tmp2191 = $tmp2190->methods[0];
frost$core$Int64 $tmp2193 = $tmp2191(((frost$collections$CollectionView*) $tmp2189));
frost$core$Int64 $tmp2194 = (frost$core$Int64) {1u};
int64_t $tmp2195 = $tmp2193.value;
int64_t $tmp2196 = $tmp2194.value;
bool $tmp2197 = $tmp2195 > $tmp2196;
frost$core$Bit $tmp2198 = (frost$core$Bit) {$tmp2197};
bool $tmp2199 = $tmp2198.value;
if ($tmp2199) goto block102; else goto block104;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:270
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2200 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$HashSet* $tmp2201 = *(&local40);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp2200, ((frost$collections$CollectionView*) $tmp2201));
*(&local41) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
frost$collections$Array* $tmp2202 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
*(&local41) = $tmp2200;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:271
frost$collections$Array* $tmp2203 = *(&local41);
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp2205 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Closure.frost:271:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp2206 = &$tmp2205->pointer;
*$tmp2206 = ((frost$core$Int8*) org$frostlang$frostc$expression$Closure$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp2207 = &$tmp2205->target;
frost$core$Immutable* $tmp2208 = *$tmp2207;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
frost$core$Immutable** $tmp2209 = &$tmp2205->target;
*$tmp2209 = ((frost$core$Immutable*) NULL);
ITable* $tmp2210 = ((frost$collections$ListView*) $tmp2203)->$class->itable;
while ($tmp2210->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2210 = $tmp2210->next;
}
$fn2212 $tmp2211 = $tmp2210->methods[13];
frost$collections$ListView* $tmp2213 = $tmp2211(((frost$collections$ListView*) $tmp2203), ((frost$core$MutableMethod*) $tmp2205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:272
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2214 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2214, &$s2215);
*(&local42) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
frost$core$MutableString* $tmp2216 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
*(&local42) = $tmp2214;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:273
frost$threads$MessageQueue** $tmp2217 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2218 = *$tmp2217;
*(&local43) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
frost$threads$MessageQueue* $tmp2219 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2219));
*(&local43) = $tmp2218;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:274
frost$collections$Array* $tmp2220 = *(&local41);
ITable* $tmp2221 = ((frost$collections$Iterable*) $tmp2220)->$class->itable;
while ($tmp2221->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2221 = $tmp2221->next;
}
$fn2223 $tmp2222 = $tmp2221->methods[0];
frost$collections$Iterator* $tmp2224 = $tmp2222(((frost$collections$Iterable*) $tmp2220));
goto block106;
block106:;
ITable* $tmp2225 = $tmp2224->$class->itable;
while ($tmp2225->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2225 = $tmp2225->next;
}
$fn2227 $tmp2226 = $tmp2225->methods[0];
frost$core$Bit $tmp2228 = $tmp2226($tmp2224);
bool $tmp2229 = $tmp2228.value;
if ($tmp2229) goto block108; else goto block107;
block107:;
*(&local44) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp2230 = $tmp2224->$class->itable;
while ($tmp2230->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2230 = $tmp2230->next;
}
$fn2232 $tmp2231 = $tmp2230->methods[1];
frost$core$Object* $tmp2233 = $tmp2231($tmp2224);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2233)));
org$frostlang$frostc$Type* $tmp2234 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
*(&local44) = ((org$frostlang$frostc$Type*) $tmp2233);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:275
frost$core$MutableString* $tmp2235 = *(&local42);
org$frostlang$frostc$Type* $tmp2236 = *(&local44);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:275:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn2238 $tmp2237 = ($fn2238) ((frost$core$Object*) $tmp2236)->$class->vtable[0];
frost$core$String* $tmp2239 = $tmp2237(((frost$core$Object*) $tmp2236));
frost$core$String* $tmp2240 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2241, $tmp2239);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
frost$core$String* $tmp2242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2240, &$s2243);
frost$core$MutableString$append$frost$core$String($tmp2235, $tmp2242);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:276
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp2244 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp2244);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
frost$threads$MessageQueue** $tmp2245 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2246 = *$tmp2245;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
frost$threads$MessageQueue** $tmp2247 = &param0->errorQueue;
*$tmp2247 = $tmp2244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:277
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2248 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2249 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type* $tmp2250 = *(&local44);
frost$core$Bit $tmp2251 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2248, $tmp2249, $tmp2250, $tmp2251);
org$frostlang$frostc$IR$Value* $tmp2252 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp2248);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:279
frost$threads$MessageQueue** $tmp2253 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2254 = *$tmp2253;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Closure.frost:279:58
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/threads/MessageQueue.stub:25
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int64 from MessageQueue.stub:25:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/threads/MessageQueue.stub:20
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp2255 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp2256 = &$tmp2254->lock;
frost$threads$Lock* $tmp2257 = *$tmp2256;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp2255, $tmp2257);
*(&local45) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2255));
frost$threads$ScopedLock* $tmp2258 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2258));
*(&local45) = $tmp2255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2255));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/threads/MessageQueue.stub:21
frost$core$Int64* $tmp2259 = &$tmp2254->count;
frost$core$Int64 $tmp2260 = *$tmp2259;
frost$threads$ScopedLock* $tmp2261 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
*(&local45) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int64 $tmp2262 = (frost$core$Int64) {0u};
int64_t $tmp2263 = $tmp2260.value;
int64_t $tmp2264 = $tmp2262.value;
bool $tmp2265 = $tmp2263 > $tmp2264;
frost$core$Bit $tmp2266 = (frost$core$Bit) {$tmp2265};
bool $tmp2267 = $tmp2266.value;
if ($tmp2267) goto block112; else goto block113;
block113:;
frost$core$Int64 $tmp2268 = (frost$core$Int64) {279u};
org$frostlang$frostc$Position$wrapper* $tmp2269;
$tmp2269 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp2269->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:280:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn2271 $tmp2270 = ($fn2271) ((frost$core$Object*) $tmp2269)->$class->vtable[0];
frost$core$String* $tmp2272 = $tmp2270(((frost$core$Object*) $tmp2269));
frost$core$String* $tmp2273 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2274, $tmp2272);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
frost$core$String* $tmp2275 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2273, &$s2276);
org$frostlang$frostc$Type* $tmp2277 = *(&local44);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:281:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn2279 $tmp2278 = ($fn2279) ((frost$core$Object*) $tmp2277)->$class->vtable[0];
frost$core$String* $tmp2280 = $tmp2278(((frost$core$Object*) $tmp2277));
frost$core$String* $tmp2281 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2282, $tmp2280);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2280));
frost$core$String* $tmp2283 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2281, &$s2284);
frost$core$String* $tmp2285 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2275, $tmp2283);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2286, $tmp2268, $tmp2285);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2269));
abort(); // unreachable
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:282
goto block116;
block116:;
frost$threads$MessageQueue** $tmp2287 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2288 = *$tmp2287;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Closure.frost:282:57
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/threads/MessageQueue.stub:25
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int64 from MessageQueue.stub:25:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/threads/MessageQueue.stub:20
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp2289 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp2290 = &$tmp2288->lock;
frost$threads$Lock* $tmp2291 = *$tmp2290;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp2289, $tmp2291);
*(&local46) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2289));
frost$threads$ScopedLock* $tmp2292 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
*(&local46) = $tmp2289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2289));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/threads/MessageQueue.stub:21
frost$core$Int64* $tmp2293 = &$tmp2288->count;
frost$core$Int64 $tmp2294 = *$tmp2293;
frost$threads$ScopedLock* $tmp2295 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
*(&local46) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int64 $tmp2296 = (frost$core$Int64) {0u};
int64_t $tmp2297 = $tmp2294.value;
int64_t $tmp2298 = $tmp2296.value;
bool $tmp2299 = $tmp2297 > $tmp2298;
frost$core$Bit $tmp2300 = (frost$core$Bit) {$tmp2299};
bool $tmp2301 = $tmp2300.value;
if ($tmp2301) goto block117; else goto block118;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:283
frost$threads$MessageQueue** $tmp2302 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2303 = *$tmp2302;
frost$core$Immutable* $tmp2304 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp2303);
frost$core$Int64* $tmp2305 = &((org$frostlang$frostc$Compiler$Message*) $tmp2304)->$rawValue;
frost$core$Int64 $tmp2306 = *$tmp2305;
frost$core$Int64 $tmp2307 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:284:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2308 = $tmp2306.value;
int64_t $tmp2309 = $tmp2307.value;
bool $tmp2310 = $tmp2308 == $tmp2309;
frost$core$Bit $tmp2311 = (frost$core$Bit) {$tmp2310};
bool $tmp2312 = $tmp2311.value;
if ($tmp2312) goto block122; else goto block123;
block122:;
frost$core$String** $tmp2313 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2304)->$data + 0);
frost$core$String* $tmp2314 = *$tmp2313;
frost$core$Int64* $tmp2315 = (frost$core$Int64*) (((org$frostlang$frostc$Compiler$Message*) $tmp2304)->$data + 8);
frost$core$Int64 $tmp2316 = *$tmp2315;
frost$core$Int64* $tmp2317 = (frost$core$Int64*) (((org$frostlang$frostc$Compiler$Message*) $tmp2304)->$data + 16);
frost$core$Int64 $tmp2318 = *$tmp2317;
frost$core$String** $tmp2319 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2304)->$data + 24);
frost$core$String* $tmp2320 = *$tmp2319;
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2320));
frost$core$String* $tmp2321 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
*(&local47) = $tmp2320;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:285
frost$core$MutableString* $tmp2322 = *(&local42);
frost$core$String* $tmp2323 = *(&local47);
frost$core$String* $tmp2324 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2325, $tmp2323);
frost$core$String* $tmp2326 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2324, &$s2327);
frost$core$MutableString$append$frost$core$String($tmp2322, $tmp2326);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
frost$core$String* $tmp2328 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
*(&local47) = ((frost$core$String*) NULL);
goto block121;
block123:;
frost$core$Int64 $tmp2329 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:287:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2330 = $tmp2306.value;
int64_t $tmp2331 = $tmp2329.value;
bool $tmp2332 = $tmp2330 == $tmp2331;
frost$core$Bit $tmp2333 = (frost$core$Bit) {$tmp2332};
bool $tmp2334 = $tmp2333.value;
if ($tmp2334) goto block125; else goto block121;
block125:;
frost$core$String** $tmp2335 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2304)->$data + 0);
frost$core$String* $tmp2336 = *$tmp2335;
frost$core$Int64* $tmp2337 = (frost$core$Int64*) (((org$frostlang$frostc$Compiler$Message*) $tmp2304)->$data + 8);
frost$core$Int64 $tmp2338 = *$tmp2337;
frost$core$Int64* $tmp2339 = (frost$core$Int64*) (((org$frostlang$frostc$Compiler$Message*) $tmp2304)->$data + 16);
frost$core$Int64 $tmp2340 = *$tmp2339;
frost$core$String** $tmp2341 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2304)->$data + 24);
frost$core$String* $tmp2342 = *$tmp2341;
*(&local48) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
frost$core$String* $tmp2343 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2343));
*(&local48) = $tmp2342;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:288
frost$core$MutableString* $tmp2344 = *(&local42);
frost$core$String* $tmp2345 = *(&local48);
frost$core$String* $tmp2346 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2347, $tmp2345);
frost$core$String* $tmp2348 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2346, &$s2349);
frost$core$MutableString$append$frost$core$String($tmp2344, $tmp2348);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
frost$core$String* $tmp2350 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2350));
*(&local48) = ((frost$core$String*) NULL);
goto block121;
block121:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
goto block116;
block118:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2233);
org$frostlang$frostc$Type* $tmp2351 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2351));
*(&local44) = ((org$frostlang$frostc$Type*) NULL);
goto block106;
block108:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:293
frost$threads$MessageQueue* $tmp2352 = *(&local43);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2352));
frost$threads$MessageQueue** $tmp2353 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2354 = *$tmp2353;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2354));
frost$threads$MessageQueue** $tmp2355 = &param0->errorQueue;
*$tmp2355 = $tmp2352;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:294
frost$core$MutableString* $tmp2356 = *(&local42);
frost$core$String* $tmp2357 = frost$core$MutableString$finish$R$frost$core$String($tmp2356);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2357);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2357));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:295
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$threads$MessageQueue* $tmp2358 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2358));
*(&local43) = ((frost$threads$MessageQueue*) NULL);
frost$core$MutableString* $tmp2359 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
*(&local42) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp2360 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
*(&local41) = ((frost$collections$Array*) NULL);
frost$collections$HashSet* $tmp2361 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
*(&local40) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block104:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:298
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2362 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2363 = (frost$core$Int64) {3u};
frost$collections$HashSet* $tmp2364 = *(&local40);
ITable* $tmp2365 = ((frost$collections$Iterable*) $tmp2364)->$class->itable;
while ($tmp2365->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2365 = $tmp2365->next;
}
$fn2367 $tmp2366 = $tmp2365->methods[0];
frost$collections$Iterator* $tmp2368 = $tmp2366(((frost$collections$Iterable*) $tmp2364));
ITable* $tmp2369 = $tmp2368->$class->itable;
while ($tmp2369->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2369 = $tmp2369->next;
}
$fn2371 $tmp2370 = $tmp2369->methods[1];
frost$core$Object* $tmp2372 = $tmp2370($tmp2368);
frost$core$Bit $tmp2373 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2362, $tmp2363, ((org$frostlang$frostc$Type*) $tmp2372), $tmp2373);
org$frostlang$frostc$IR$Value* $tmp2374 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp2362);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2374));
frost$core$Frost$unref$frost$core$Object$Q($tmp2372);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2362));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:300
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp2375 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2375));
*(&local40) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block103:;
goto block101;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:303
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s2376);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:305
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp2377 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
*(&local40) = ((frost$collections$HashSet*) NULL);
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
org$frostlang$frostc$MethodDecl$Kind local7;
org$frostlang$frostc$MethodDecl$Kind local8;
org$frostlang$frostc$Pair* local9 = NULL;
org$frostlang$frostc$Annotations* local10 = NULL;
org$frostlang$frostc$MethodDecl* local11 = NULL;
frost$core$Bit local12;
frost$core$Bit local13;
frost$collections$Stack* local14 = NULL;
frost$core$Bit local15;
org$frostlang$frostc$ASTNode* local16 = NULL;
org$frostlang$frostc$ClassDecl* local17 = NULL;
frost$collections$Array* local18 = NULL;
org$frostlang$frostc$Compiler$Capture* local19 = NULL;
org$frostlang$frostc$Variable* local20 = NULL;
org$frostlang$frostc$FieldDecl* local21 = NULL;
org$frostlang$frostc$IR$Value* local22 = NULL;
frost$collections$Array* local23 = NULL;
org$frostlang$frostc$Type* local24 = NULL;
org$frostlang$frostc$Type* local25 = NULL;
org$frostlang$frostc$Type* local26 = NULL;
org$frostlang$frostc$Type* local27 = NULL;
org$frostlang$frostc$Type* local28 = NULL;
frost$collections$Array* local29 = NULL;
frost$core$Int64 local30;
org$frostlang$frostc$Type$Kind local31;
org$frostlang$frostc$Type$Kind local32;
org$frostlang$frostc$Type$Kind local33;
org$frostlang$frostc$Type$Kind local34;
org$frostlang$frostc$Type$Kind local35;
org$frostlang$frostc$Type$Kind local36;
org$frostlang$frostc$Type$Kind local37;
org$frostlang$frostc$Type$Kind local38;
org$frostlang$frostc$Type$Kind local39;
org$frostlang$frostc$Type$Kind local40;
org$frostlang$frostc$Type$Kind local41;
org$frostlang$frostc$Type$Kind local42;
org$frostlang$frostc$Type$Kind local43;
org$frostlang$frostc$Type$Kind local44;
org$frostlang$frostc$Type$Kind local45;
org$frostlang$frostc$Type$Kind local46;
org$frostlang$frostc$Type$Kind local47;
org$frostlang$frostc$Type$Kind local48;
org$frostlang$frostc$Type$Kind local49;
org$frostlang$frostc$Type$Kind local50;
org$frostlang$frostc$Type$Kind local51;
org$frostlang$frostc$IR$Value* local52 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:312
frost$core$Int64* $tmp2378 = &param0->closureCount;
frost$core$Int64 $tmp2379 = *$tmp2378;
frost$core$Int64 $tmp2380 = (frost$core$Int64) {1u};
int64_t $tmp2381 = $tmp2379.value;
int64_t $tmp2382 = $tmp2380.value;
int64_t $tmp2383 = $tmp2381 + $tmp2382;
frost$core$Int64 $tmp2384 = (frost$core$Int64) {$tmp2383};
frost$core$Int64* $tmp2385 = &param0->closureCount;
*$tmp2385 = $tmp2384;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:313
frost$core$Int64* $tmp2386 = &param0->closureCount;
frost$core$Int64 $tmp2387 = *$tmp2386;
frost$core$Int64$wrapper* $tmp2388;
$tmp2388 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2388->value = $tmp2387;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:313:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn2390 $tmp2389 = ($fn2390) ((frost$core$Object*) $tmp2388)->$class->vtable[0];
frost$core$String* $tmp2391 = $tmp2389(((frost$core$Object*) $tmp2388));
frost$core$String* $tmp2392 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2393, $tmp2391);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
frost$core$String* $tmp2394 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2392, &$s2395);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
frost$core$String* $tmp2396 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
*(&local0) = $tmp2394;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2388));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:314
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2397 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2397);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
frost$collections$Array* $tmp2398 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
*(&local1) = $tmp2397;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:315
ITable* $tmp2399 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp2399->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2399 = $tmp2399->next;
}
$fn2401 $tmp2400 = $tmp2399->methods[0];
frost$collections$Iterator* $tmp2402 = $tmp2400(((frost$collections$Iterable*) param3));
goto block2;
block2:;
ITable* $tmp2403 = $tmp2402->$class->itable;
while ($tmp2403->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2403 = $tmp2403->next;
}
$fn2405 $tmp2404 = $tmp2403->methods[0];
frost$core$Bit $tmp2406 = $tmp2404($tmp2402);
bool $tmp2407 = $tmp2406.value;
if ($tmp2407) goto block4; else goto block3;
block3:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2408 = $tmp2402->$class->itable;
while ($tmp2408->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2408 = $tmp2408->next;
}
$fn2410 $tmp2409 = $tmp2408->methods[1];
frost$core$Object* $tmp2411 = $tmp2409($tmp2402);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2411)));
org$frostlang$frostc$ASTNode* $tmp2412 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp2411);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:316
org$frostlang$frostc$ASTNode* $tmp2413 = *(&local2);
frost$core$Int64* $tmp2414 = &$tmp2413->$rawValue;
frost$core$Int64 $tmp2415 = *$tmp2414;
frost$core$Int64 $tmp2416 = (frost$core$Int64) {34u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:317:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2417 = $tmp2415.value;
int64_t $tmp2418 = $tmp2416.value;
bool $tmp2419 = $tmp2417 == $tmp2418;
frost$core$Bit $tmp2420 = (frost$core$Bit) {$tmp2419};
bool $tmp2421 = $tmp2420.value;
if ($tmp2421) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp2422 = (org$frostlang$frostc$Position*) ($tmp2413->$data + 0);
org$frostlang$frostc$Position $tmp2423 = *$tmp2422;
frost$core$String** $tmp2424 = (frost$core$String**) ($tmp2413->$data + 24);
frost$core$String* $tmp2425 = *$tmp2424;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
frost$core$String* $tmp2426 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2426));
*(&local3) = $tmp2425;
org$frostlang$frostc$ASTNode** $tmp2427 = (org$frostlang$frostc$ASTNode**) ($tmp2413->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2428 = *$tmp2427;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2428));
org$frostlang$frostc$ASTNode* $tmp2429 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2429));
*(&local4) = $tmp2428;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:318
org$frostlang$frostc$Scanner** $tmp2430 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp2431 = *$tmp2430;
org$frostlang$frostc$ASTNode* $tmp2432 = *(&local4);
org$frostlang$frostc$Type* $tmp2433 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp2431, $tmp2432);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from Closure.frost:318:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:952
frost$core$Bit $tmp2434 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp2435 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp2433, $tmp2434);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
org$frostlang$frostc$Type* $tmp2436 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2436));
*(&local5) = $tmp2435;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:319
org$frostlang$frostc$Type* $tmp2437 = *(&local5);
frost$core$Bit $tmp2438 = (frost$core$Bit) {$tmp2437 == NULL};
bool $tmp2439 = $tmp2438.value;
if ($tmp2439) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:320
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2440 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2440));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2441 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2441));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2442 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2442));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2411);
org$frostlang$frostc$ASTNode* $tmp2443 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2443));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
frost$collections$Array* $tmp2444 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2444));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2445 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:322
frost$collections$Array* $tmp2446 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp2447 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp2448 = *(&local3);
org$frostlang$frostc$Type* $tmp2449 = *(&local5);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp2447, $tmp2448, $tmp2449);
frost$collections$Array$add$frost$collections$Array$T($tmp2446, ((frost$core$Object*) $tmp2447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2447));
org$frostlang$frostc$Type* $tmp2450 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2451 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2452 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2452));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2411);
org$frostlang$frostc$ASTNode* $tmp2453 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:325
frost$core$Int64 $tmp2454 = (frost$core$Int64) {325u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2455, $tmp2454);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:329
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:330
frost$core$Bit $tmp2456 = (frost$core$Bit) {param4 != NULL};
bool $tmp2457 = $tmp2456.value;
if ($tmp2457) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:331
org$frostlang$frostc$Scanner** $tmp2458 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp2459 = *$tmp2458;
org$frostlang$frostc$Type* $tmp2460 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp2459, param4);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from Closure.frost:331:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:952
frost$core$Bit $tmp2461 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp2462 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp2460, $tmp2461);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
org$frostlang$frostc$Type* $tmp2463 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
*(&local6) = $tmp2462;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:332
org$frostlang$frostc$Type* $tmp2464 = *(&local6);
frost$core$Bit $tmp2465 = (frost$core$Bit) {false};
bool $tmp2466 = $tmp2465.value;
if ($tmp2466) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:333
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2467 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2468 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2468));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2469 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2469));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block17:;
goto block13;
block14:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:337
org$frostlang$frostc$Type** $tmp2470 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2471 = *$tmp2470;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2471));
org$frostlang$frostc$Type* $tmp2472 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
*(&local6) = $tmp2471;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:338
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2473;
$tmp2473 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2473->value = param2;
frost$core$Int64 $tmp2474 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:338:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp2475 = &(&local8)->$rawValue;
*$tmp2475 = $tmp2474;
org$frostlang$frostc$MethodDecl$Kind $tmp2476 = *(&local8);
*(&local7) = $tmp2476;
org$frostlang$frostc$MethodDecl$Kind $tmp2477 = *(&local7);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2478;
$tmp2478 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2478->value = $tmp2477;
ITable* $tmp2479 = ((frost$core$Equatable*) $tmp2473)->$class->itable;
while ($tmp2479->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2479 = $tmp2479->next;
}
$fn2481 $tmp2480 = $tmp2479->methods[0];
frost$core$Bit $tmp2482 = $tmp2480(((frost$core$Equatable*) $tmp2473), ((frost$core$Equatable*) $tmp2478));
bool $tmp2483 = $tmp2482.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2478)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2473)));
if ($tmp2483) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:339
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s2484);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:340
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2485 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2485));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2486 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2486));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2487 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block19:;
goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:343
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp2488 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Stack** $tmp2489 = &param0->currentMethod;
frost$collections$Stack* $tmp2490 = *$tmp2489;
frost$core$Int64 $tmp2491 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Closure.frost:343:94
frost$core$Int64 $tmp2492 = (frost$core$Int64) {0u};
int64_t $tmp2493 = $tmp2491.value;
int64_t $tmp2494 = $tmp2492.value;
bool $tmp2495 = $tmp2493 >= $tmp2494;
frost$core$Bit $tmp2496 = (frost$core$Bit) {$tmp2495};
bool $tmp2497 = $tmp2496.value;
if ($tmp2497) goto block24; else goto block23;
block24:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp2498 = &$tmp2490->contents;
frost$collections$Array* $tmp2499 = *$tmp2498;
ITable* $tmp2500 = ((frost$collections$CollectionView*) $tmp2499)->$class->itable;
while ($tmp2500->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2500 = $tmp2500->next;
}
$fn2502 $tmp2501 = $tmp2500->methods[0];
frost$core$Int64 $tmp2503 = $tmp2501(((frost$collections$CollectionView*) $tmp2499));
int64_t $tmp2504 = $tmp2491.value;
int64_t $tmp2505 = $tmp2503.value;
bool $tmp2506 = $tmp2504 < $tmp2505;
frost$core$Bit $tmp2507 = (frost$core$Bit) {$tmp2506};
bool $tmp2508 = $tmp2507.value;
if ($tmp2508) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp2509 = (frost$core$Int64) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2510, $tmp2509, &$s2511);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp2512 = &$tmp2490->contents;
frost$collections$Array* $tmp2513 = *$tmp2512;
ITable* $tmp2514 = ((frost$collections$CollectionView*) $tmp2513)->$class->itable;
while ($tmp2514->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2514 = $tmp2514->next;
}
$fn2516 $tmp2515 = $tmp2514->methods[0];
frost$core$Int64 $tmp2517 = $tmp2515(((frost$collections$CollectionView*) $tmp2513));
int64_t $tmp2518 = $tmp2517.value;
int64_t $tmp2519 = $tmp2491.value;
bool $tmp2520 = $tmp2518 > $tmp2519;
frost$core$Bit $tmp2521 = (frost$core$Bit) {$tmp2520};
bool $tmp2522 = $tmp2521.value;
if ($tmp2522) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp2523 = (frost$core$Int64) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2524, $tmp2523);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp2525 = &$tmp2490->contents;
frost$collections$Array* $tmp2526 = *$tmp2525;
frost$collections$Array** $tmp2527 = &$tmp2490->contents;
frost$collections$Array* $tmp2528 = *$tmp2527;
ITable* $tmp2529 = ((frost$collections$CollectionView*) $tmp2528)->$class->itable;
while ($tmp2529->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2529 = $tmp2529->next;
}
$fn2531 $tmp2530 = $tmp2529->methods[0];
frost$core$Int64 $tmp2532 = $tmp2530(((frost$collections$CollectionView*) $tmp2528));
frost$core$Int64 $tmp2533 = (frost$core$Int64) {1u};
int64_t $tmp2534 = $tmp2532.value;
int64_t $tmp2535 = $tmp2533.value;
int64_t $tmp2536 = $tmp2534 - $tmp2535;
frost$core$Int64 $tmp2537 = (frost$core$Int64) {$tmp2536};
int64_t $tmp2538 = $tmp2537.value;
int64_t $tmp2539 = $tmp2491.value;
int64_t $tmp2540 = $tmp2538 - $tmp2539;
frost$core$Int64 $tmp2541 = (frost$core$Int64) {$tmp2540};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp2542 = (frost$core$Int64) {0u};
int64_t $tmp2543 = $tmp2541.value;
int64_t $tmp2544 = $tmp2542.value;
bool $tmp2545 = $tmp2543 >= $tmp2544;
frost$core$Bit $tmp2546 = (frost$core$Bit) {$tmp2545};
bool $tmp2547 = $tmp2546.value;
if ($tmp2547) goto block31; else goto block30;
block31:;
ITable* $tmp2548 = ((frost$collections$CollectionView*) $tmp2526)->$class->itable;
while ($tmp2548->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2548 = $tmp2548->next;
}
$fn2550 $tmp2549 = $tmp2548->methods[0];
frost$core$Int64 $tmp2551 = $tmp2549(((frost$collections$CollectionView*) $tmp2526));
int64_t $tmp2552 = $tmp2541.value;
int64_t $tmp2553 = $tmp2551.value;
bool $tmp2554 = $tmp2552 < $tmp2553;
frost$core$Bit $tmp2555 = (frost$core$Bit) {$tmp2554};
bool $tmp2556 = $tmp2555.value;
if ($tmp2556) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp2557 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2558, $tmp2557, &$s2559);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2560 = &$tmp2526->data;
frost$core$Object** $tmp2561 = *$tmp2560;
int64_t $tmp2562 = $tmp2541.value;
frost$core$Object* $tmp2563 = $tmp2561[$tmp2562];
frost$core$Frost$ref$frost$core$Object$Q($tmp2563);
frost$core$Frost$ref$frost$core$Object$Q($tmp2563);
frost$core$Frost$unref$frost$core$Object$Q($tmp2563);
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp2564 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2564);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp2488, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp2563)), ((frost$core$Object*) ((frost$collections$Map*) $tmp2564)));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2488));
org$frostlang$frostc$Pair* $tmp2565 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2565));
*(&local9) = $tmp2488;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
frost$core$Frost$unref$frost$core$Object$Q($tmp2563);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2488));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:345
frost$collections$Stack** $tmp2566 = &param0->captures;
frost$collections$Stack* $tmp2567 = *$tmp2566;
org$frostlang$frostc$Pair* $tmp2568 = *(&local9);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Closure.frost:345:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:16
frost$collections$Array** $tmp2569 = &$tmp2567->contents;
frost$collections$Array* $tmp2570 = *$tmp2569;
frost$collections$Array$add$frost$collections$Array$T($tmp2570, ((frost$core$Object*) $tmp2568));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:346
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp2571 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2572 = (frost$core$Int64) {16u};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2571, $tmp2572);
*(&local10) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
org$frostlang$frostc$Annotations* $tmp2573 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2573));
*(&local10) = $tmp2571;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:347
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp2574 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$collections$Stack** $tmp2575 = &param0->currentClass;
frost$collections$Stack* $tmp2576 = *$tmp2575;
frost$core$Int64 $tmp2577 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Closure.frost:347:59
frost$core$Int64 $tmp2578 = (frost$core$Int64) {0u};
int64_t $tmp2579 = $tmp2577.value;
int64_t $tmp2580 = $tmp2578.value;
bool $tmp2581 = $tmp2579 >= $tmp2580;
frost$core$Bit $tmp2582 = (frost$core$Bit) {$tmp2581};
bool $tmp2583 = $tmp2582.value;
if ($tmp2583) goto block36; else goto block35;
block36:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp2584 = &$tmp2576->contents;
frost$collections$Array* $tmp2585 = *$tmp2584;
ITable* $tmp2586 = ((frost$collections$CollectionView*) $tmp2585)->$class->itable;
while ($tmp2586->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2586 = $tmp2586->next;
}
$fn2588 $tmp2587 = $tmp2586->methods[0];
frost$core$Int64 $tmp2589 = $tmp2587(((frost$collections$CollectionView*) $tmp2585));
int64_t $tmp2590 = $tmp2577.value;
int64_t $tmp2591 = $tmp2589.value;
bool $tmp2592 = $tmp2590 < $tmp2591;
frost$core$Bit $tmp2593 = (frost$core$Bit) {$tmp2592};
bool $tmp2594 = $tmp2593.value;
if ($tmp2594) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp2595 = (frost$core$Int64) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2596, $tmp2595, &$s2597);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp2598 = &$tmp2576->contents;
frost$collections$Array* $tmp2599 = *$tmp2598;
ITable* $tmp2600 = ((frost$collections$CollectionView*) $tmp2599)->$class->itable;
while ($tmp2600->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2600 = $tmp2600->next;
}
$fn2602 $tmp2601 = $tmp2600->methods[0];
frost$core$Int64 $tmp2603 = $tmp2601(((frost$collections$CollectionView*) $tmp2599));
int64_t $tmp2604 = $tmp2603.value;
int64_t $tmp2605 = $tmp2577.value;
bool $tmp2606 = $tmp2604 > $tmp2605;
frost$core$Bit $tmp2607 = (frost$core$Bit) {$tmp2606};
bool $tmp2608 = $tmp2607.value;
if ($tmp2608) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp2609 = (frost$core$Int64) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2610, $tmp2609);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp2611 = &$tmp2576->contents;
frost$collections$Array* $tmp2612 = *$tmp2611;
frost$collections$Array** $tmp2613 = &$tmp2576->contents;
frost$collections$Array* $tmp2614 = *$tmp2613;
ITable* $tmp2615 = ((frost$collections$CollectionView*) $tmp2614)->$class->itable;
while ($tmp2615->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2615 = $tmp2615->next;
}
$fn2617 $tmp2616 = $tmp2615->methods[0];
frost$core$Int64 $tmp2618 = $tmp2616(((frost$collections$CollectionView*) $tmp2614));
frost$core$Int64 $tmp2619 = (frost$core$Int64) {1u};
int64_t $tmp2620 = $tmp2618.value;
int64_t $tmp2621 = $tmp2619.value;
int64_t $tmp2622 = $tmp2620 - $tmp2621;
frost$core$Int64 $tmp2623 = (frost$core$Int64) {$tmp2622};
int64_t $tmp2624 = $tmp2623.value;
int64_t $tmp2625 = $tmp2577.value;
int64_t $tmp2626 = $tmp2624 - $tmp2625;
frost$core$Int64 $tmp2627 = (frost$core$Int64) {$tmp2626};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp2628 = (frost$core$Int64) {0u};
int64_t $tmp2629 = $tmp2627.value;
int64_t $tmp2630 = $tmp2628.value;
bool $tmp2631 = $tmp2629 >= $tmp2630;
frost$core$Bit $tmp2632 = (frost$core$Bit) {$tmp2631};
bool $tmp2633 = $tmp2632.value;
if ($tmp2633) goto block43; else goto block42;
block43:;
ITable* $tmp2634 = ((frost$collections$CollectionView*) $tmp2612)->$class->itable;
while ($tmp2634->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2634 = $tmp2634->next;
}
$fn2636 $tmp2635 = $tmp2634->methods[0];
frost$core$Int64 $tmp2637 = $tmp2635(((frost$collections$CollectionView*) $tmp2612));
int64_t $tmp2638 = $tmp2627.value;
int64_t $tmp2639 = $tmp2637.value;
bool $tmp2640 = $tmp2638 < $tmp2639;
frost$core$Bit $tmp2641 = (frost$core$Bit) {$tmp2640};
bool $tmp2642 = $tmp2641.value;
if ($tmp2642) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp2643 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2644, $tmp2643, &$s2645);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2646 = &$tmp2612->data;
frost$core$Object** $tmp2647 = *$tmp2646;
int64_t $tmp2648 = $tmp2627.value;
frost$core$Object* $tmp2649 = $tmp2647[$tmp2648];
frost$core$Frost$ref$frost$core$Object$Q($tmp2649);
frost$core$Frost$ref$frost$core$Object$Q($tmp2649);
frost$core$Frost$unref$frost$core$Object$Q($tmp2649);
org$frostlang$frostc$Annotations* $tmp2650 = *(&local10);
frost$core$String* $tmp2651 = *(&local0);
frost$collections$Array* $tmp2652 = *(&local1);
org$frostlang$frostc$Type* $tmp2653 = *(&local6);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2574, ((org$frostlang$frostc$ClassDecl*) $tmp2649), param1, ((frost$core$String*) NULL), $tmp2650, param2, $tmp2651, ((frost$collections$Array*) NULL), $tmp2652, $tmp2653, param5);
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2574));
org$frostlang$frostc$MethodDecl* $tmp2654 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
*(&local11) = $tmp2574;
frost$core$Frost$unref$frost$core$Object$Q($tmp2649);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2574));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:351
frost$core$Bit* $tmp2655 = &param0->writeCode;
frost$core$Bit $tmp2656 = *$tmp2655;
*(&local12) = $tmp2656;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:352
frost$core$Bit* $tmp2657 = &param0->reportErrors;
frost$core$Bit $tmp2658 = *$tmp2657;
*(&local13) = $tmp2658;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:353
frost$core$Bit $tmp2659 = (frost$core$Bit) {false};
frost$core$Bit* $tmp2660 = &param0->writeCode;
*$tmp2660 = $tmp2659;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:354
frost$core$Bit $tmp2661 = (frost$core$Bit) {false};
frost$core$Bit* $tmp2662 = &param0->reportErrors;
*$tmp2662 = $tmp2661;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:355
frost$collections$Stack** $tmp2663 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2664 = *$tmp2663;
*(&local14) = ((frost$collections$Stack*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
frost$collections$Stack* $tmp2665 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2665));
*(&local14) = $tmp2664;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:356
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp2666 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp2666);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2666));
frost$collections$Stack** $tmp2667 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2668 = *$tmp2667;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
frost$collections$Stack** $tmp2669 = &param0->enclosingContexts;
*$tmp2669 = $tmp2666;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2666));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:357
org$frostlang$frostc$MethodDecl* $tmp2670 = *(&local11);
org$frostlang$frostc$SymbolTable** $tmp2671 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2672 = *$tmp2671;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp2670, $tmp2672);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:358
frost$collections$Stack* $tmp2673 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2673));
frost$collections$Stack** $tmp2674 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2675 = *$tmp2674;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
frost$collections$Stack** $tmp2676 = &param0->enclosingContexts;
*$tmp2676 = $tmp2673;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:359
frost$core$Bit $tmp2677 = *(&local12);
frost$core$Bit* $tmp2678 = &param0->writeCode;
*$tmp2678 = $tmp2677;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:360
frost$core$Bit $tmp2679 = *(&local13);
frost$core$Bit* $tmp2680 = &param0->reportErrors;
*$tmp2680 = $tmp2679;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:362
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:363
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:364
org$frostlang$frostc$Pair* $tmp2681 = *(&local9);
frost$core$Object** $tmp2682 = &$tmp2681->second;
frost$core$Object* $tmp2683 = *$tmp2682;
ITable* $tmp2684 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp2683))->$class->itable;
while ($tmp2684->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2684 = $tmp2684->next;
}
$fn2686 $tmp2685 = $tmp2684->methods[0];
frost$core$Int64 $tmp2687 = $tmp2685(((frost$collections$MapView*) ((frost$collections$Map*) $tmp2683)));
frost$core$Int64 $tmp2688 = (frost$core$Int64) {0u};
int64_t $tmp2689 = $tmp2687.value;
int64_t $tmp2690 = $tmp2688.value;
bool $tmp2691 = $tmp2689 != $tmp2690;
frost$core$Bit $tmp2692 = (frost$core$Bit) {$tmp2691};
bool $tmp2693 = $tmp2692.value;
if ($tmp2693) goto block44; else goto block46;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:366
org$frostlang$frostc$MethodDecl* $tmp2694 = *(&local11);
org$frostlang$frostc$Pair* $tmp2695 = *(&local9);
frost$core$Object** $tmp2696 = &$tmp2695->second;
frost$core$Object* $tmp2697 = *$tmp2696;
ITable* $tmp2698 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp2697))->$class->itable;
while ($tmp2698->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2698 = $tmp2698->next;
}
$fn2700 $tmp2699 = $tmp2698->methods[5];
frost$collections$Iterator* $tmp2701 = $tmp2699(((frost$collections$MapView*) ((frost$collections$Map*) $tmp2697)));
ITable* $tmp2702 = $tmp2701->$class->itable;
while ($tmp2702->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2702 = $tmp2702->next;
}
$fn2704 $tmp2703 = $tmp2702->methods[7];
frost$collections$Array* $tmp2705 = $tmp2703($tmp2701);
org$frostlang$frostc$ClassDecl* $tmp2706 = org$frostlang$frostc$expression$Closure$createClosureClass$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlang$frostc$Compiler$Capture$GT$R$org$frostlang$frostc$ClassDecl(param0, $tmp2694, ((frost$collections$CollectionView*) $tmp2705));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
org$frostlang$frostc$ClassDecl* $tmp2707 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
*(&local17) = $tmp2706;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2701));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:367
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2708 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2708);
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2708));
frost$collections$Array* $tmp2709 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2709));
*(&local18) = $tmp2708;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2708));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:368
org$frostlang$frostc$Pair* $tmp2710 = *(&local9);
frost$core$Object** $tmp2711 = &$tmp2710->second;
frost$core$Object* $tmp2712 = *$tmp2711;
ITable* $tmp2713 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp2712))->$class->itable;
while ($tmp2713->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2713 = $tmp2713->next;
}
$fn2715 $tmp2714 = $tmp2713->methods[5];
frost$collections$Iterator* $tmp2716 = $tmp2714(((frost$collections$MapView*) ((frost$collections$Map*) $tmp2712)));
goto block47;
block47:;
ITable* $tmp2717 = $tmp2716->$class->itable;
while ($tmp2717->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2717 = $tmp2717->next;
}
$fn2719 $tmp2718 = $tmp2717->methods[0];
frost$core$Bit $tmp2720 = $tmp2718($tmp2716);
bool $tmp2721 = $tmp2720.value;
if ($tmp2721) goto block49; else goto block48;
block48:;
*(&local19) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp2722 = $tmp2716->$class->itable;
while ($tmp2722->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2722 = $tmp2722->next;
}
$fn2724 $tmp2723 = $tmp2722->methods[1];
frost$core$Object* $tmp2725 = $tmp2723($tmp2716);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp2725)));
org$frostlang$frostc$Compiler$Capture* $tmp2726 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
*(&local19) = ((org$frostlang$frostc$Compiler$Capture*) $tmp2725);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:369
org$frostlang$frostc$Compiler$Capture* $tmp2727 = *(&local19);
frost$core$Int64* $tmp2728 = &$tmp2727->$rawValue;
frost$core$Int64 $tmp2729 = *$tmp2728;
frost$core$Int64 $tmp2730 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:370:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2731 = $tmp2729.value;
int64_t $tmp2732 = $tmp2730.value;
bool $tmp2733 = $tmp2731 == $tmp2732;
frost$core$Bit $tmp2734 = (frost$core$Bit) {$tmp2733};
bool $tmp2735 = $tmp2734.value;
if ($tmp2735) goto block51; else goto block52;
block51:;
org$frostlang$frostc$Variable** $tmp2736 = (org$frostlang$frostc$Variable**) ($tmp2727->$data + 0);
org$frostlang$frostc$Variable* $tmp2737 = *$tmp2736;
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
org$frostlang$frostc$Variable* $tmp2738 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
*(&local20) = $tmp2737;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:371
frost$collections$Array* $tmp2739 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2740 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2741 = (frost$core$Int64) {22u};
org$frostlang$frostc$Variable* $tmp2742 = *(&local20);
frost$core$String** $tmp2743 = &((org$frostlang$frostc$Symbol*) $tmp2742)->name;
frost$core$String* $tmp2744 = *$tmp2743;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp2740, $tmp2741, param1, $tmp2744);
frost$collections$Array$add$frost$collections$Array$T($tmp2739, ((frost$core$Object*) $tmp2740));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2740));
org$frostlang$frostc$Variable* $tmp2745 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
goto block50;
block52:;
frost$core$Int64 $tmp2746 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:373:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2747 = $tmp2729.value;
int64_t $tmp2748 = $tmp2746.value;
bool $tmp2749 = $tmp2747 == $tmp2748;
frost$core$Bit $tmp2750 = (frost$core$Bit) {$tmp2749};
bool $tmp2751 = $tmp2750.value;
if ($tmp2751) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:374
frost$collections$Array* $tmp2752 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2753 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2754 = (frost$core$Int64) {39u};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp2753, $tmp2754, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp2752, ((frost$core$Object*) $tmp2753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2753));
goto block50;
block55:;
frost$core$Int64 $tmp2755 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:376:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2756 = $tmp2729.value;
int64_t $tmp2757 = $tmp2755.value;
bool $tmp2758 = $tmp2756 == $tmp2757;
frost$core$Bit $tmp2759 = (frost$core$Bit) {$tmp2758};
bool $tmp2760 = $tmp2759.value;
if ($tmp2760) goto block57; else goto block50;
block57:;
org$frostlang$frostc$FieldDecl** $tmp2761 = (org$frostlang$frostc$FieldDecl**) ($tmp2727->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp2762 = *$tmp2761;
*(&local21) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2762));
org$frostlang$frostc$FieldDecl* $tmp2763 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
*(&local21) = $tmp2762;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:377
frost$collections$Array* $tmp2764 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2765 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2766 = (frost$core$Int64) {16u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2767 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2768 = (frost$core$Int64) {22u};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp2767, $tmp2768, param1, &$s2769);
org$frostlang$frostc$FieldDecl* $tmp2770 = *(&local21);
frost$core$String** $tmp2771 = &((org$frostlang$frostc$Symbol*) $tmp2770)->name;
frost$core$String* $tmp2772 = *$tmp2771;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp2765, $tmp2766, param1, $tmp2767, $tmp2772);
frost$collections$Array$add$frost$collections$Array$T($tmp2764, ((frost$core$Object*) $tmp2765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2765));
org$frostlang$frostc$FieldDecl* $tmp2773 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2773));
*(&local21) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block50;
block50:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2725);
org$frostlang$frostc$Compiler$Capture* $tmp2774 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2774));
*(&local19) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block47;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:383
frost$collections$Stack** $tmp2775 = &param0->captures;
frost$collections$Stack* $tmp2776 = *$tmp2775;
frost$core$Object* $tmp2777 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2776);
frost$core$Frost$unref$frost$core$Object$Q($tmp2777);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:384
frost$collections$Array** $tmp2778 = &param0->pendingClasses;
frost$collections$Array* $tmp2779 = *$tmp2778;
org$frostlang$frostc$ClassDecl* $tmp2780 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp2779, ((frost$core$Object*) $tmp2780));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:385
org$frostlang$frostc$ClassDecl* $tmp2781 = *(&local17);
org$frostlang$frostc$Type** $tmp2782 = &$tmp2781->type;
org$frostlang$frostc$Type* $tmp2783 = *$tmp2782;
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:385:83
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3701
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2784 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2785 = (frost$core$Int64) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3701:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
org$frostlang$frostc$Type** $tmp2786 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp2787 = *$tmp2786;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2788 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2789 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp2788, $tmp2789);
frost$collections$Array$add$frost$collections$Array$T($tmp2788, ((frost$core$Object*) $tmp2783));
org$frostlang$frostc$Type* $tmp2790 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2787, ((frost$collections$ListView*) $tmp2788));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2788));
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp2784, $tmp2785, $tmp2783, $tmp2790);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
frost$collections$Array* $tmp2791 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp2792 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2791);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2793 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2794 = (frost$core$Int64) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp2793, $tmp2794);
org$frostlang$frostc$IR$Value* $tmp2795 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2784, ((frost$collections$ListView*) $tmp2792), $tmp2793);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
org$frostlang$frostc$IR$Value* $tmp2796 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
*(&local22) = $tmp2795;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:387
org$frostlang$frostc$IR$Value* $tmp2797 = *(&local22);
frost$core$Bit $tmp2798 = (frost$core$Bit) {$tmp2797 == NULL};
bool $tmp2799 = $tmp2798.value;
if ($tmp2799) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:388
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp2800 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2800));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2801 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2801));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2802 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2802));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp2803 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2803));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp2804 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2804));
*(&local14) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2805 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp2806 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
*(&local10) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp2807 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp2808 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2809 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2810 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2810));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:390
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2811 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2812 = (frost$core$Int64) {26u};
org$frostlang$frostc$IR$Value* $tmp2813 = *(&local22);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2811, $tmp2812, param1, $tmp2813);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
org$frostlang$frostc$ASTNode* $tmp2814 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
*(&local16) = $tmp2811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:391
org$frostlang$frostc$ClassDecl* $tmp2815 = *(&local17);
org$frostlang$frostc$Type** $tmp2816 = &$tmp2815->type;
org$frostlang$frostc$Type* $tmp2817 = *$tmp2816;
frost$core$Bit $tmp2818 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp2817);
*(&local15) = $tmp2818;
org$frostlang$frostc$IR$Value* $tmp2819 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2819));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2820 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2820));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2821 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block45;
block46:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:395
frost$collections$Stack** $tmp2822 = &param0->captures;
frost$collections$Stack* $tmp2823 = *$tmp2822;
frost$core$Object* $tmp2824 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2823);
frost$core$Frost$unref$frost$core$Object$Q($tmp2824);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:396
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp2825 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp2825);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2825));
frost$collections$Stack** $tmp2826 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2827 = *$tmp2826;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
frost$collections$Stack** $tmp2828 = &param0->enclosingContexts;
*$tmp2828 = $tmp2825;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2825));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:397
org$frostlang$frostc$MethodDecl* $tmp2829 = *(&local11);
org$frostlang$frostc$SymbolTable** $tmp2830 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2831 = *$tmp2830;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp2829, $tmp2831);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:398
frost$collections$Stack* $tmp2832 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
frost$collections$Stack** $tmp2833 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2834 = *$tmp2833;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
frost$collections$Stack** $tmp2835 = &param0->enclosingContexts;
*$tmp2835 = $tmp2832;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:399
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2836 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2837 = (frost$core$Int64) {31u};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp2836, $tmp2837, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
org$frostlang$frostc$ASTNode* $tmp2838 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2838));
*(&local16) = $tmp2836;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:400
frost$core$Bit $tmp2839 = (frost$core$Bit) {true};
*(&local15) = $tmp2839;
goto block45;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:402
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2840 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2840);
*(&local23) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
frost$collections$Array* $tmp2841 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
*(&local23) = $tmp2840;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:403
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:404
org$frostlang$frostc$MethodDecl* $tmp2842 = *(&local11);
org$frostlang$frostc$Annotations** $tmp2843 = &$tmp2842->annotations;
org$frostlang$frostc$Annotations* $tmp2844 = *$tmp2843;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Closure.frost:404:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp2845 = &$tmp2844->flags;
frost$core$Int64 $tmp2846 = *$tmp2845;
frost$core$Int64 $tmp2847 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp2848 = $tmp2846.value;
int64_t $tmp2849 = $tmp2847.value;
int64_t $tmp2850 = $tmp2848 & $tmp2849;
frost$core$Int64 $tmp2851 = (frost$core$Int64) {$tmp2850};
frost$core$Int64 $tmp2852 = (frost$core$Int64) {0u};
int64_t $tmp2853 = $tmp2851.value;
int64_t $tmp2854 = $tmp2852.value;
bool $tmp2855 = $tmp2853 != $tmp2854;
frost$core$Bit $tmp2856 = (frost$core$Bit) {$tmp2855};
bool $tmp2857 = $tmp2856.value;
if ($tmp2857) goto block63; else goto block65;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:405
org$frostlang$frostc$MethodDecl* $tmp2858 = *(&local11);
org$frostlang$frostc$Type* $tmp2859 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp2858, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
org$frostlang$frostc$Type* $tmp2860 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2860));
*(&local24) = $tmp2859;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
goto block64;
block65:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:408
org$frostlang$frostc$MethodDecl* $tmp2861 = *(&local11);
org$frostlang$frostc$MethodDecl* $tmp2862 = *(&local11);
frost$core$Weak** $tmp2863 = &$tmp2862->owner;
frost$core$Weak* $tmp2864 = *$tmp2863;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Closure.frost:408:78
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp2865 = &$tmp2864->_valid;
frost$core$Bit $tmp2866 = *$tmp2865;
bool $tmp2867 = $tmp2866.value;
if ($tmp2867) goto block70; else goto block71;
block71:;
frost$core$Int64 $tmp2868 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2869, $tmp2868);
abort(); // unreachable
block70:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp2870 = &$tmp2864->value;
frost$core$Object* $tmp2871 = *$tmp2870;
frost$core$Frost$ref$frost$core$Object$Q($tmp2871);
org$frostlang$frostc$Type** $tmp2872 = &((org$frostlang$frostc$ClassDecl*) $tmp2871)->type;
org$frostlang$frostc$Type* $tmp2873 = *$tmp2872;
frost$core$Bit $tmp2874 = (frost$core$Bit) {false};
org$frostlang$frostc$Type* $tmp2875 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp2861, $tmp2873, $tmp2874);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
org$frostlang$frostc$Type* $tmp2876 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2876));
*(&local24) = $tmp2875;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
frost$core$Frost$unref$frost$core$Object$Q($tmp2871);
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:410
org$frostlang$frostc$Type* $tmp2877 = *(&local24);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Closure.frost:410:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:284
org$frostlang$frostc$Type** $tmp2878 = &param0->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp2879 = *$tmp2878;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2880 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2881 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp2880, $tmp2881);
frost$collections$Array$add$frost$collections$Array$T($tmp2880, ((frost$core$Object*) $tmp2877));
org$frostlang$frostc$Type* $tmp2882 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2879, ((frost$collections$ListView*) $tmp2880));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2880));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
org$frostlang$frostc$Type* $tmp2883 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2883));
*(&local25) = $tmp2882;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:411
frost$collections$Array* $tmp2884 = *(&local23);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2885 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2886 = (frost$core$Int64) {26u};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2887 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2888 = (frost$core$Int64) {3u};
org$frostlang$frostc$MethodDecl* $tmp2889 = *(&local11);
org$frostlang$frostc$Type* $tmp2890 = *(&local25);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp2887, $tmp2888, $tmp2889, $tmp2890);
org$frostlang$frostc$Type** $tmp2891 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp2892 = *$tmp2891;
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Closure.frost:412:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:284
org$frostlang$frostc$Type** $tmp2893 = &param0->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp2894 = *$tmp2893;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2895 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2896 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp2895, $tmp2896);
frost$collections$Array$add$frost$collections$Array$T($tmp2895, ((frost$core$Object*) $tmp2892));
org$frostlang$frostc$Type* $tmp2897 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2894, ((frost$collections$ListView*) $tmp2895));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2895));
org$frostlang$frostc$IR$Value* $tmp2898 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2887, $tmp2897);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2885, $tmp2886, param1, $tmp2898);
frost$collections$Array$add$frost$collections$Array$T($tmp2884, ((frost$core$Object*) $tmp2885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2885));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:414
frost$collections$Array* $tmp2899 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp2900 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp2899, ((frost$core$Object*) $tmp2900));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:415
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:416
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:417
frost$core$Bit $tmp2901 = *(&local15);
bool $tmp2902 = $tmp2901.value;
if ($tmp2902) goto block74; else goto block76;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:418
org$frostlang$frostc$Type** $tmp2903 = &param0->METHOD_TYPE;
org$frostlang$frostc$Type* $tmp2904 = *$tmp2903;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
org$frostlang$frostc$Type* $tmp2905 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
*(&local26) = $tmp2904;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:419
org$frostlang$frostc$MethodDecl* $tmp2906 = *(&local11);
org$frostlang$frostc$Type* $tmp2907 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp2906, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
org$frostlang$frostc$Type* $tmp2908 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
*(&local27) = $tmp2907;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
goto block75;
block76:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:422
org$frostlang$frostc$Type** $tmp2909 = &param0->MUTABLE_METHOD_TYPE;
org$frostlang$frostc$Type* $tmp2910 = *$tmp2909;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
org$frostlang$frostc$Type* $tmp2911 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
*(&local26) = $tmp2910;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:423
org$frostlang$frostc$MethodDecl* $tmp2912 = *(&local11);
org$frostlang$frostc$Type* $tmp2913 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp2912, param0);
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
org$frostlang$frostc$Type* $tmp2914 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
*(&local28) = $tmp2913;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:424
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2915 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2915);
*(&local29) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
frost$collections$Array* $tmp2916 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
*(&local29) = $tmp2915;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:425
frost$core$Int64 $tmp2917 = (frost$core$Int64) {0u};
org$frostlang$frostc$Type* $tmp2918 = *(&local28);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Closure.frost:425:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2919 = &$tmp2918->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2920 = *$tmp2919;
frost$core$Bit $tmp2921 = (frost$core$Bit) {$tmp2920 != NULL};
bool $tmp2922 = $tmp2921.value;
if ($tmp2922) goto block78; else goto block79;
block79:;
frost$core$Int64 $tmp2923 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2924, $tmp2923);
abort(); // unreachable
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2925 = &$tmp2918->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2926 = *$tmp2925;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
ITable* $tmp2927 = ((frost$collections$CollectionView*) $tmp2926)->$class->itable;
while ($tmp2927->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2927 = $tmp2927->next;
}
$fn2929 $tmp2928 = $tmp2927->methods[0];
frost$core$Int64 $tmp2930 = $tmp2928(((frost$collections$CollectionView*) $tmp2926));
frost$core$Int64 $tmp2931 = (frost$core$Int64) {1u};
int64_t $tmp2932 = $tmp2930.value;
int64_t $tmp2933 = $tmp2931.value;
int64_t $tmp2934 = $tmp2932 - $tmp2933;
frost$core$Int64 $tmp2935 = (frost$core$Int64) {$tmp2934};
frost$core$Bit $tmp2936 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp2937 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2917, $tmp2935, $tmp2936);
frost$core$Int64 $tmp2938 = $tmp2937.min;
*(&local30) = $tmp2938;
frost$core$Int64 $tmp2939 = $tmp2937.max;
frost$core$Bit $tmp2940 = $tmp2937.inclusive;
bool $tmp2941 = $tmp2940.value;
frost$core$Int64 $tmp2942 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2943 = $tmp2942.value;
frost$core$UInt64 $tmp2944 = (frost$core$UInt64) {((uint64_t) $tmp2943)};
if ($tmp2941) goto block84; else goto block85;
block84:;
int64_t $tmp2945 = $tmp2938.value;
int64_t $tmp2946 = $tmp2939.value;
bool $tmp2947 = $tmp2945 <= $tmp2946;
frost$core$Bit $tmp2948 = (frost$core$Bit) {$tmp2947};
bool $tmp2949 = $tmp2948.value;
if ($tmp2949) goto block81; else goto block82;
block85:;
int64_t $tmp2950 = $tmp2938.value;
int64_t $tmp2951 = $tmp2939.value;
bool $tmp2952 = $tmp2950 < $tmp2951;
frost$core$Bit $tmp2953 = (frost$core$Bit) {$tmp2952};
bool $tmp2954 = $tmp2953.value;
if ($tmp2954) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:426
frost$collections$Array* $tmp2955 = *(&local29);
org$frostlang$frostc$Type* $tmp2956 = *(&local28);
frost$core$Int64 $tmp2957 = *(&local30);
// begin inline call to function org.frostlang.frostc.Type.parameterType(i:frost.core.Int64):org.frostlang.frostc.Type from Closure.frost:426:57
org$frostlang$frostc$Type$Kind* $tmp2958 = &$tmp2956->typeKind;
org$frostlang$frostc$Type$Kind $tmp2959 = *$tmp2958;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2960;
$tmp2960 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2960->value = $tmp2959;
frost$core$Int64 $tmp2961 = (frost$core$Int64) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:426:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2962 = &(&local32)->$rawValue;
*$tmp2962 = $tmp2961;
org$frostlang$frostc$Type$Kind $tmp2963 = *(&local32);
*(&local31) = $tmp2963;
org$frostlang$frostc$Type$Kind $tmp2964 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2965;
$tmp2965 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2965->value = $tmp2964;
ITable* $tmp2966 = ((frost$core$Equatable*) $tmp2960)->$class->itable;
while ($tmp2966->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2966 = $tmp2966->next;
}
$fn2968 $tmp2967 = $tmp2966->methods[0];
frost$core$Bit $tmp2969 = $tmp2967(((frost$core$Equatable*) $tmp2960), ((frost$core$Equatable*) $tmp2965));
bool $tmp2970 = $tmp2969.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2965)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2960)));
if ($tmp2970) goto block90; else goto block93;
block93:;
org$frostlang$frostc$Type$Kind* $tmp2971 = &$tmp2956->typeKind;
org$frostlang$frostc$Type$Kind $tmp2972 = *$tmp2971;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2973;
$tmp2973 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2973->value = $tmp2972;
frost$core$Int64 $tmp2974 = (frost$core$Int64) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:426:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2975 = &(&local34)->$rawValue;
*$tmp2975 = $tmp2974;
org$frostlang$frostc$Type$Kind $tmp2976 = *(&local34);
*(&local33) = $tmp2976;
org$frostlang$frostc$Type$Kind $tmp2977 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2978;
$tmp2978 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2978->value = $tmp2977;
ITable* $tmp2979 = ((frost$core$Equatable*) $tmp2973)->$class->itable;
while ($tmp2979->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2979 = $tmp2979->next;
}
$fn2981 $tmp2980 = $tmp2979->methods[0];
frost$core$Bit $tmp2982 = $tmp2980(((frost$core$Equatable*) $tmp2973), ((frost$core$Equatable*) $tmp2978));
bool $tmp2983 = $tmp2982.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2978)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2973)));
if ($tmp2983) goto block90; else goto block92;
block92:;
org$frostlang$frostc$Type$Kind* $tmp2984 = &$tmp2956->typeKind;
org$frostlang$frostc$Type$Kind $tmp2985 = *$tmp2984;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2986;
$tmp2986 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2986->value = $tmp2985;
frost$core$Int64 $tmp2987 = (frost$core$Int64) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:426:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2988 = &(&local36)->$rawValue;
*$tmp2988 = $tmp2987;
org$frostlang$frostc$Type$Kind $tmp2989 = *(&local36);
*(&local35) = $tmp2989;
org$frostlang$frostc$Type$Kind $tmp2990 = *(&local35);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2991;
$tmp2991 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2991->value = $tmp2990;
ITable* $tmp2992 = ((frost$core$Equatable*) $tmp2986)->$class->itable;
while ($tmp2992->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2992 = $tmp2992->next;
}
$fn2994 $tmp2993 = $tmp2992->methods[0];
frost$core$Bit $tmp2995 = $tmp2993(((frost$core$Equatable*) $tmp2986), ((frost$core$Equatable*) $tmp2991));
bool $tmp2996 = $tmp2995.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2991)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2986)));
if ($tmp2996) goto block90; else goto block91;
block91:;
org$frostlang$frostc$Type$Kind* $tmp2997 = &$tmp2956->typeKind;
org$frostlang$frostc$Type$Kind $tmp2998 = *$tmp2997;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2999;
$tmp2999 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2999->value = $tmp2998;
frost$core$Int64 $tmp3000 = (frost$core$Int64) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:427:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3001 = &(&local38)->$rawValue;
*$tmp3001 = $tmp3000;
org$frostlang$frostc$Type$Kind $tmp3002 = *(&local38);
*(&local37) = $tmp3002;
org$frostlang$frostc$Type$Kind $tmp3003 = *(&local37);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3004;
$tmp3004 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3004->value = $tmp3003;
ITable* $tmp3005 = ((frost$core$Equatable*) $tmp2999)->$class->itable;
while ($tmp3005->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3005 = $tmp3005->next;
}
$fn3007 $tmp3006 = $tmp3005->methods[0];
frost$core$Bit $tmp3008 = $tmp3006(((frost$core$Equatable*) $tmp2999), ((frost$core$Equatable*) $tmp3004));
bool $tmp3009 = $tmp3008.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3004)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2999)));
if ($tmp3009) goto block90; else goto block88;
block90:;
frost$core$Int64 $tmp3010 = (frost$core$Int64) {0u};
int64_t $tmp3011 = $tmp2957.value;
int64_t $tmp3012 = $tmp3010.value;
bool $tmp3013 = $tmp3011 >= $tmp3012;
frost$core$Bit $tmp3014 = (frost$core$Bit) {$tmp3013};
bool $tmp3015 = $tmp3014.value;
if ($tmp3015) goto block89; else goto block88;
block89:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:427:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3016 = &$tmp2956->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3017 = *$tmp3016;
frost$core$Bit $tmp3018 = (frost$core$Bit) {$tmp3017 != NULL};
bool $tmp3019 = $tmp3018.value;
if ($tmp3019) goto block99; else goto block100;
block100:;
frost$core$Int64 $tmp3020 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3021, $tmp3020);
abort(); // unreachable
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3022 = &$tmp2956->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3023 = *$tmp3022;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3023));
ITable* $tmp3024 = ((frost$collections$CollectionView*) $tmp3023)->$class->itable;
while ($tmp3024->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3024 = $tmp3024->next;
}
$fn3026 $tmp3025 = $tmp3024->methods[0];
frost$core$Int64 $tmp3027 = $tmp3025(((frost$collections$CollectionView*) $tmp3023));
frost$core$Int64 $tmp3028 = (frost$core$Int64) {1u};
int64_t $tmp3029 = $tmp3027.value;
int64_t $tmp3030 = $tmp3028.value;
int64_t $tmp3031 = $tmp3029 - $tmp3030;
frost$core$Int64 $tmp3032 = (frost$core$Int64) {$tmp3031};
int64_t $tmp3033 = $tmp2957.value;
int64_t $tmp3034 = $tmp3032.value;
bool $tmp3035 = $tmp3033 < $tmp3034;
frost$core$Bit $tmp3036 = (frost$core$Bit) {$tmp3035};
bool $tmp3037 = $tmp3036.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3023));
if ($tmp3037) goto block87; else goto block88;
block88:;
frost$core$Int64 $tmp3038 = (frost$core$Int64) {428u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3039, $tmp3038, &$s3040);
abort(); // unreachable
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:429
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:429:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3041 = &$tmp2956->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3042 = *$tmp3041;
frost$core$Bit $tmp3043 = (frost$core$Bit) {$tmp3042 != NULL};
bool $tmp3044 = $tmp3043.value;
if ($tmp3044) goto block102; else goto block103;
block103:;
frost$core$Int64 $tmp3045 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3046, $tmp3045);
abort(); // unreachable
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3047 = &$tmp2956->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3048 = *$tmp3047;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3048));
frost$core$Object* $tmp3049 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3048, $tmp2957);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3049)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3049);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3048));
frost$collections$Array$add$frost$collections$Array$T($tmp2955, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3049)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3049)));
frost$core$Int64 $tmp3050 = *(&local30);
int64_t $tmp3051 = $tmp2939.value;
int64_t $tmp3052 = $tmp3050.value;
int64_t $tmp3053 = $tmp3051 - $tmp3052;
frost$core$Int64 $tmp3054 = (frost$core$Int64) {$tmp3053};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp3055 = $tmp3054.value;
frost$core$UInt64 $tmp3056 = (frost$core$UInt64) {((uint64_t) $tmp3055)};
if ($tmp2941) goto block106; else goto block107;
block106:;
uint64_t $tmp3057 = $tmp3056.value;
uint64_t $tmp3058 = $tmp2944.value;
bool $tmp3059 = $tmp3057 >= $tmp3058;
frost$core$Bit $tmp3060 = (frost$core$Bit) {$tmp3059};
bool $tmp3061 = $tmp3060.value;
if ($tmp3061) goto block104; else goto block82;
block107:;
uint64_t $tmp3062 = $tmp3056.value;
uint64_t $tmp3063 = $tmp2944.value;
bool $tmp3064 = $tmp3062 > $tmp3063;
frost$core$Bit $tmp3065 = (frost$core$Bit) {$tmp3064};
bool $tmp3066 = $tmp3065.value;
if ($tmp3066) goto block104; else goto block82;
block104:;
int64_t $tmp3067 = $tmp3050.value;
int64_t $tmp3068 = $tmp2942.value;
int64_t $tmp3069 = $tmp3067 + $tmp3068;
frost$core$Int64 $tmp3070 = (frost$core$Int64) {$tmp3069};
*(&local30) = $tmp3070;
goto block81;
block82:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:428
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:429
org$frostlang$frostc$MethodDecl* $tmp3071 = *(&local11);
org$frostlang$frostc$MethodDecl$Kind* $tmp3072 = &$tmp3071->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3073 = *$tmp3072;
frost$core$Int64 $tmp3074 = $tmp3073.$rawValue;
frost$core$Int64 $tmp3075 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:430:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3076 = $tmp3074.value;
int64_t $tmp3077 = $tmp3075.value;
bool $tmp3078 = $tmp3076 == $tmp3077;
frost$core$Bit $tmp3079 = (frost$core$Bit) {$tmp3078};
bool $tmp3080 = $tmp3079.value;
if ($tmp3080) goto block109; else goto block110;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:430
frost$core$Int64 $tmp3081 = (frost$core$Int64) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Closure.frost:430:68
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3082 = &(&local41)->$rawValue;
*$tmp3082 = $tmp3081;
org$frostlang$frostc$Type$Kind $tmp3083 = *(&local41);
*(&local40) = $tmp3083;
org$frostlang$frostc$Type$Kind $tmp3084 = *(&local40);
*(&local39) = $tmp3084;
goto block108;
block110:;
frost$core$Int64 $tmp3085 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:431:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3086 = $tmp3074.value;
int64_t $tmp3087 = $tmp3085.value;
bool $tmp3088 = $tmp3086 == $tmp3087;
frost$core$Bit $tmp3089 = (frost$core$Bit) {$tmp3088};
bool $tmp3090 = $tmp3089.value;
if ($tmp3090) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:431
frost$core$Int64 $tmp3091 = (frost$core$Int64) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Closure.frost:431:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3092 = &(&local43)->$rawValue;
*$tmp3092 = $tmp3091;
org$frostlang$frostc$Type$Kind $tmp3093 = *(&local43);
*(&local42) = $tmp3093;
org$frostlang$frostc$Type$Kind $tmp3094 = *(&local42);
*(&local39) = $tmp3094;
goto block108;
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:432
frost$core$Int64 $tmp3095 = (frost$core$Int64) {432u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3096, $tmp3095);
abort(); // unreachable
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:434
org$frostlang$frostc$Type$Kind $tmp3097 = *(&local39);
frost$collections$Array* $tmp3098 = *(&local29);
org$frostlang$frostc$Type* $tmp3099 = *(&local28);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:435:28
org$frostlang$frostc$Type$Kind* $tmp3100 = &$tmp3099->typeKind;
org$frostlang$frostc$Type$Kind $tmp3101 = *$tmp3100;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3102;
$tmp3102 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3102->value = $tmp3101;
frost$core$Int64 $tmp3103 = (frost$core$Int64) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3104 = &(&local45)->$rawValue;
*$tmp3104 = $tmp3103;
org$frostlang$frostc$Type$Kind $tmp3105 = *(&local45);
*(&local44) = $tmp3105;
org$frostlang$frostc$Type$Kind $tmp3106 = *(&local44);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3107;
$tmp3107 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3107->value = $tmp3106;
ITable* $tmp3108 = ((frost$core$Equatable*) $tmp3102)->$class->itable;
while ($tmp3108->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3108 = $tmp3108->next;
}
$fn3110 $tmp3109 = $tmp3108->methods[0];
frost$core$Bit $tmp3111 = $tmp3109(((frost$core$Equatable*) $tmp3102), ((frost$core$Equatable*) $tmp3107));
bool $tmp3112 = $tmp3111.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3107)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3102)));
if ($tmp3112) goto block118; else goto block122;
block122:;
org$frostlang$frostc$Type$Kind* $tmp3113 = &$tmp3099->typeKind;
org$frostlang$frostc$Type$Kind $tmp3114 = *$tmp3113;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3115;
$tmp3115 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3115->value = $tmp3114;
frost$core$Int64 $tmp3116 = (frost$core$Int64) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3117 = &(&local47)->$rawValue;
*$tmp3117 = $tmp3116;
org$frostlang$frostc$Type$Kind $tmp3118 = *(&local47);
*(&local46) = $tmp3118;
org$frostlang$frostc$Type$Kind $tmp3119 = *(&local46);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3120;
$tmp3120 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3120->value = $tmp3119;
ITable* $tmp3121 = ((frost$core$Equatable*) $tmp3115)->$class->itable;
while ($tmp3121->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3121 = $tmp3121->next;
}
$fn3123 $tmp3122 = $tmp3121->methods[0];
frost$core$Bit $tmp3124 = $tmp3122(((frost$core$Equatable*) $tmp3115), ((frost$core$Equatable*) $tmp3120));
bool $tmp3125 = $tmp3124.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3120)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3115)));
if ($tmp3125) goto block118; else goto block121;
block121:;
org$frostlang$frostc$Type$Kind* $tmp3126 = &$tmp3099->typeKind;
org$frostlang$frostc$Type$Kind $tmp3127 = *$tmp3126;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3128;
$tmp3128 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3128->value = $tmp3127;
frost$core$Int64 $tmp3129 = (frost$core$Int64) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3130 = &(&local49)->$rawValue;
*$tmp3130 = $tmp3129;
org$frostlang$frostc$Type$Kind $tmp3131 = *(&local49);
*(&local48) = $tmp3131;
org$frostlang$frostc$Type$Kind $tmp3132 = *(&local48);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3133;
$tmp3133 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3133->value = $tmp3132;
ITable* $tmp3134 = ((frost$core$Equatable*) $tmp3128)->$class->itable;
while ($tmp3134->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3134 = $tmp3134->next;
}
$fn3136 $tmp3135 = $tmp3134->methods[0];
frost$core$Bit $tmp3137 = $tmp3135(((frost$core$Equatable*) $tmp3128), ((frost$core$Equatable*) $tmp3133));
bool $tmp3138 = $tmp3137.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3133)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3128)));
if ($tmp3138) goto block118; else goto block120;
block120:;
org$frostlang$frostc$Type$Kind* $tmp3139 = &$tmp3099->typeKind;
org$frostlang$frostc$Type$Kind $tmp3140 = *$tmp3139;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3141;
$tmp3141 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3141->value = $tmp3140;
frost$core$Int64 $tmp3142 = (frost$core$Int64) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3143 = &(&local51)->$rawValue;
*$tmp3143 = $tmp3142;
org$frostlang$frostc$Type$Kind $tmp3144 = *(&local51);
*(&local50) = $tmp3144;
org$frostlang$frostc$Type$Kind $tmp3145 = *(&local50);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3146;
$tmp3146 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3146->value = $tmp3145;
ITable* $tmp3147 = ((frost$core$Equatable*) $tmp3141)->$class->itable;
while ($tmp3147->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3147 = $tmp3147->next;
}
$fn3149 $tmp3148 = $tmp3147->methods[0];
frost$core$Bit $tmp3150 = $tmp3148(((frost$core$Equatable*) $tmp3141), ((frost$core$Equatable*) $tmp3146));
bool $tmp3151 = $tmp3150.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3146)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3141)));
if ($tmp3151) goto block118; else goto block119;
block119:;
frost$core$Int64 $tmp3152 = (frost$core$Int64) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3153, $tmp3152, &$s3154);
abort(); // unreachable
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3155 = &$tmp3099->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3156 = *$tmp3155;
frost$core$Bit $tmp3157 = (frost$core$Bit) {$tmp3156 != NULL};
bool $tmp3158 = $tmp3157.value;
if ($tmp3158) goto block128; else goto block129;
block129:;
frost$core$Int64 $tmp3159 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3160, $tmp3159);
abort(); // unreachable
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3161 = &$tmp3099->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3162 = *$tmp3161;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3162));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3163 = &$tmp3099->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3164 = *$tmp3163;
frost$core$Bit $tmp3165 = (frost$core$Bit) {$tmp3164 != NULL};
bool $tmp3166 = $tmp3165.value;
if ($tmp3166) goto block131; else goto block132;
block132:;
frost$core$Int64 $tmp3167 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3168, $tmp3167);
abort(); // unreachable
block131:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3169 = &$tmp3099->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3170 = *$tmp3169;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3170));
ITable* $tmp3171 = ((frost$collections$CollectionView*) $tmp3170)->$class->itable;
while ($tmp3171->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3171 = $tmp3171->next;
}
$fn3173 $tmp3172 = $tmp3171->methods[0];
frost$core$Int64 $tmp3174 = $tmp3172(((frost$collections$CollectionView*) $tmp3170));
frost$core$Int64 $tmp3175 = (frost$core$Int64) {1u};
int64_t $tmp3176 = $tmp3174.value;
int64_t $tmp3177 = $tmp3175.value;
int64_t $tmp3178 = $tmp3176 - $tmp3177;
frost$core$Int64 $tmp3179 = (frost$core$Int64) {$tmp3178};
frost$core$Object* $tmp3180 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3162, $tmp3179);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3180)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3180);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3162));
org$frostlang$frostc$Type* $tmp3181 = *(&local28);
frost$core$Int64* $tmp3182 = &$tmp3181->priority;
frost$core$Int64 $tmp3183 = *$tmp3182;
org$frostlang$frostc$Type* $tmp3184 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(param0, param1, $tmp3097, ((frost$collections$ListView*) $tmp3098), ((org$frostlang$frostc$Type*) $tmp3180), $tmp3183);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3184));
org$frostlang$frostc$Type* $tmp3185 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
*(&local27) = $tmp3184;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3180)));
frost$collections$Array* $tmp3186 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
*(&local29) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3187 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
goto block75;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:437
org$frostlang$frostc$Type* $tmp3188 = *(&local26);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:438:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3701
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp3189 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3190 = (frost$core$Int64) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3701:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
org$frostlang$frostc$Type** $tmp3191 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp3192 = *$tmp3191;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3193 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp3194 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp3193, $tmp3194);
frost$collections$Array$add$frost$collections$Array$T($tmp3193, ((frost$core$Object*) $tmp3188));
org$frostlang$frostc$Type* $tmp3195 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp3192, ((frost$collections$ListView*) $tmp3193));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3193));
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp3189, $tmp3190, $tmp3188, $tmp3195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
frost$collections$Array* $tmp3196 = *(&local23);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3197 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3198 = (frost$core$Int64) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp3197, $tmp3198);
org$frostlang$frostc$IR$Value* $tmp3199 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3189, ((frost$collections$ListView*) $tmp3196), $tmp3197);
org$frostlang$frostc$Type* $tmp3200 = *(&local27);
org$frostlang$frostc$IR$Value* $tmp3201 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3199, $tmp3200);
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
org$frostlang$frostc$IR$Value* $tmp3202 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3202));
*(&local52) = $tmp3201;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:439
org$frostlang$frostc$IR$Value* $tmp3203 = *(&local52);
org$frostlang$frostc$IR$Value* $tmp3204 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3203, param6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
org$frostlang$frostc$IR$Value* $tmp3205 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3205));
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp3206 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3206));
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3207 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3207));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3208 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3208));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3209 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3209));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp3210 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3210));
*(&local23) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3211 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3211));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp3212 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3212));
*(&local14) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp3213 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3213));
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp3214 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
*(&local10) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp3215 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3215));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp3216 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3216));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp3217 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3217));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp3218 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3218));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3204;

}
void org$frostlang$frostc$expression$Closure$init(org$frostlang$frostc$expression$Closure* param0) {

return;

}
void org$frostlang$frostc$expression$Closure$cleanup(org$frostlang$frostc$expression$Closure* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:23
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

