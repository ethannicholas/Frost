#include "org/frostlang/frostc/expression/Closure.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
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
#include "frost/core/Range.LTfrost/core/Int.GT.h"
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

typedef frost$core$Int (*$fn15)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn29)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn44)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn63)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn128)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn142)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn157)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn176)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn239)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn253)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn268)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn287)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn311)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn315)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn320)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn458)(frost$core$Object*);
typedef frost$core$Int (*$fn476)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn490)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn505)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn524)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn562)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn576)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn591)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn610)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn633)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn652)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn656)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn661)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn840)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn844)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn849)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn976)(frost$core$Object*);
typedef frost$core$Int (*$fn1008)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1022)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1037)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1056)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1089)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1111)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn1222)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1272)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1285)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1298)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1311)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1321)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn1394)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1407)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1420)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1433)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1443)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn1473)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1523)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1541)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1554)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1567)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1580)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1590)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn1646)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1689)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1702)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1715)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1728)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1741)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1751)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1765)(frost$core$Object*);
typedef frost$core$Int (*$fn1781)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1835)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1848)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1861)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1874)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1887)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1945)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1963)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1976)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1989)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2002)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn2012)(frost$collections$ListView*);
typedef frost$core$Int (*$fn2056)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2068)(org$frostlang$frostc$Type*, org$frostlang$frostc$Type*);
typedef frost$collections$ListView* (*$fn2076)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn2087)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2091)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2096)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2102)(frost$core$Object*);
typedef frost$core$String* (*$fn2135)(frost$core$Object*);
typedef frost$core$String* (*$fn2143)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2231)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn2235)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2254)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2265)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2269)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2274)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2345)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn2366)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2380)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2395)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2414)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2453)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2467)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2482)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2501)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2552)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn2566)(frost$collections$MapView*);
typedef frost$collections$Array* (*$fn2570)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2581)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn2585)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2590)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2789)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2826)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2839)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2852)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2865)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn2878)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2954)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2967)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2980)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2993)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn3003)(frost$collections$ListView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65", 39, -4892953817862826951, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x6e\x6f\x6e\x2d\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x20\x6f\x77\x6e\x65\x72\x20\x66\x6f\x72\x20", 27, -2189502249250316127, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s460 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s533 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s619 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s628 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65", 9, -4675300513998866085, NULL };
static frost$core$String $s637 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s694 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s736 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s760 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 5866430320110526525, NULL };
static frost$core$String $s771 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s772 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 5866430320110526525, NULL };
static frost$core$String $s780 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 5866430320110526525, NULL };
static frost$core$String $s796 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, -733330526605839853, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s960 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 5866430320110526525, NULL };
static frost$core$String $s978 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s1016 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s1017 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s1030 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s1064 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1065 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1437 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1745 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1746 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 95, -6421234203817919051, NULL };
static frost$core$String $s1768 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, -5098893480802846476, NULL };
static frost$core$String $s1770 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x6c\x61\x6d\x62\x64\x61\x20\x77\x69\x74\x68\x20\x77\x72\x6f\x6e\x67\x20", 31, 8296972873421398743, NULL };
static frost$core$String $s1772 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 20, 2029680644997683659, NULL };
static frost$core$String $s1900 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1901 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 117, 1927758743463322527, NULL };
static frost$core$String $s1919 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2006 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2007 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s2079 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x65\x72\x72\x6f\x72", 12, 5959780354246604584, NULL };
static frost$core$String $s2105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x77\x68\x65\x6e\x20\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x64\x20\x61\x73\x20\x27", 26, -4042546728974569170, NULL };
static frost$core$String $s2107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3a", 2, 557192943631749204, NULL };
static frost$core$String $s2138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x72\x65\x63\x65\x69\x76\x65\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 51, 3365978283385468850, NULL };
static frost$core$String $s2140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20", 6, -1493373441645224251, NULL };
static frost$core$String $s2146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x20", 5, -4937494473629816297, NULL };
static frost$core$String $s2148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, -3892980340820393091, NULL };
static frost$core$String $s2191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, -3892980340820393091, NULL };
static frost$core$String $s2213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x74\x79\x70\x65\x20\x77\x61\x73\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x61\x6e\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x63\x6f\x6e\x74\x65\x78\x74", 67, -2078875877935671909, NULL };
static frost$core$String $s2257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 10, 2350954303234509524, NULL };
static frost$core$String $s2259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 4631530323501320402, NULL };
static frost$core$String $s2374 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s2375 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s2388 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s2422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2461 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s2462 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s2475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s2509 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2510 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2635 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s2735 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2891 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2892 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 117, 1927758743463322527, NULL };
static frost$core$String $s2940 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2997 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2998 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };

org$frostlang$frostc$Type* org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:26
frost$collections$Stack** $tmp2 = &param0->currentClass;
frost$collections$Stack* $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Closure.frost:26:40
frost$core$Int $tmp5 = (frost$core$Int) {0u};
int64_t $tmp6 = $tmp4.value;
int64_t $tmp7 = $tmp5.value;
bool $tmp8 = $tmp6 >= $tmp7;
frost$core$Bit $tmp9 = (frost$core$Bit) {$tmp8};
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp11 = &$tmp3->contents;
frost$collections$Array* $tmp12 = *$tmp11;
ITable* $tmp13 = ((frost$collections$CollectionView*) $tmp12)->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[0];
frost$core$Int $tmp16 = $tmp14(((frost$collections$CollectionView*) $tmp12));
int64_t $tmp17 = $tmp4.value;
int64_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 < $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block2; else goto block3;
block3:;
frost$core$Int $tmp22 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp25 = &$tmp3->contents;
frost$collections$Array* $tmp26 = *$tmp25;
ITable* $tmp27 = ((frost$collections$CollectionView*) $tmp26)->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp27 = $tmp27->next;
}
$fn29 $tmp28 = $tmp27->methods[0];
frost$core$Int $tmp30 = $tmp28(((frost$collections$CollectionView*) $tmp26));
int64_t $tmp31 = $tmp30.value;
int64_t $tmp32 = $tmp4.value;
bool $tmp33 = $tmp31 > $tmp32;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block6; else goto block7;
block7:;
frost$core$Int $tmp36 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s37, $tmp36);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp38 = &$tmp3->contents;
frost$collections$Array* $tmp39 = *$tmp38;
frost$collections$Array** $tmp40 = &$tmp3->contents;
frost$collections$Array* $tmp41 = *$tmp40;
ITable* $tmp42 = ((frost$collections$CollectionView*) $tmp41)->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp42 = $tmp42->next;
}
$fn44 $tmp43 = $tmp42->methods[0];
frost$core$Int $tmp45 = $tmp43(((frost$collections$CollectionView*) $tmp41));
frost$core$Int $tmp46 = (frost$core$Int) {1u};
int64_t $tmp47 = $tmp45.value;
int64_t $tmp48 = $tmp46.value;
int64_t $tmp49 = $tmp47 - $tmp48;
frost$core$Int $tmp50 = (frost$core$Int) {$tmp49};
int64_t $tmp51 = $tmp50.value;
int64_t $tmp52 = $tmp4.value;
int64_t $tmp53 = $tmp51 - $tmp52;
frost$core$Int $tmp54 = (frost$core$Int) {$tmp53};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp55 = (frost$core$Int) {0u};
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
frost$core$Int $tmp64 = $tmp62(((frost$collections$CollectionView*) $tmp39));
int64_t $tmp65 = $tmp54.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 < $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block9; else goto block10;
block10:;
frost$core$Int $tmp70 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp73 = &$tmp39->data;
frost$core$Object** $tmp74 = *$tmp73;
frost$core$Int64 $tmp75 = frost$core$Int64$init$frost$core$Int($tmp54);
int64_t $tmp76 = $tmp75.value;
frost$core$Object* $tmp77 = $tmp74[$tmp76];
frost$core$Frost$ref$frost$core$Object$Q($tmp77);
frost$core$Frost$ref$frost$core$Object$Q($tmp77);
frost$core$Frost$unref$frost$core$Object$Q($tmp77);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp77)));
org$frostlang$frostc$ClassDecl* $tmp78 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp77);
frost$core$Frost$unref$frost$core$Object$Q($tmp77);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:27
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:28
org$frostlang$frostc$ClassDecl* $tmp79 = *(&local0);
org$frostlang$frostc$Annotations** $tmp80 = &$tmp79->annotations;
org$frostlang$frostc$Annotations* $tmp81 = *$tmp80;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from Closure.frost:28:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:155
frost$core$Int* $tmp82 = &$tmp81->flags;
frost$core$Int $tmp83 = *$tmp82;
frost$core$Int $tmp84 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84.value;
int64_t $tmp87 = $tmp85 & $tmp86;
frost$core$Int $tmp88 = (frost$core$Int) {$tmp87};
frost$core$Int $tmp89 = (frost$core$Int) {0u};
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89.value;
bool $tmp92 = $tmp90 != $tmp91;
frost$core$Bit $tmp93 = (frost$core$Bit) {$tmp92};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Closure.frost:28:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp94 = $tmp93.value;
bool $tmp95 = !$tmp94;
frost$core$Bit $tmp96 = (frost$core$Bit) {$tmp95};
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:29
org$frostlang$frostc$ClassDecl* $tmp98 = *(&local0);
org$frostlang$frostc$Type** $tmp99 = &$tmp98->type;
org$frostlang$frostc$Type* $tmp100 = *$tmp99;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
org$frostlang$frostc$ClassDecl* $tmp101 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp100;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:31
org$frostlang$frostc$ClassDecl* $tmp102 = *(&local0);
frost$core$Weak** $tmp103 = &$tmp102->owner;
frost$core$Weak* $tmp104 = *$tmp103;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Closure.frost:31:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp105 = &$tmp104->_valid;
frost$core$Bit $tmp106 = *$tmp105;
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block21; else goto block22;
block22:;
frost$core$Int $tmp108 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s109, $tmp108);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp110 = &$tmp104->value;
frost$core$Object* $tmp111 = *$tmp110;
frost$core$Frost$ref$frost$core$Object$Q($tmp111);
frost$core$Bit $tmp112 = (frost$core$Bit) {((org$frostlang$frostc$ClassDecl*) $tmp111) != NULL};
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block23; else goto block24;
block24:;
frost$core$Int $tmp114 = (frost$core$Int) {31u};
frost$collections$Stack** $tmp115 = &param0->currentClass;
frost$collections$Stack* $tmp116 = *$tmp115;
frost$core$Int $tmp117 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Closure.frost:31:90
frost$core$Int $tmp118 = (frost$core$Int) {0u};
int64_t $tmp119 = $tmp117.value;
int64_t $tmp120 = $tmp118.value;
bool $tmp121 = $tmp119 >= $tmp120;
frost$core$Bit $tmp122 = (frost$core$Bit) {$tmp121};
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block28; else goto block27;
block28:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp124 = &$tmp116->contents;
frost$collections$Array* $tmp125 = *$tmp124;
ITable* $tmp126 = ((frost$collections$CollectionView*) $tmp125)->$class->itable;
while ($tmp126->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp126 = $tmp126->next;
}
$fn128 $tmp127 = $tmp126->methods[0];
frost$core$Int $tmp129 = $tmp127(((frost$collections$CollectionView*) $tmp125));
int64_t $tmp130 = $tmp117.value;
int64_t $tmp131 = $tmp129.value;
bool $tmp132 = $tmp130 < $tmp131;
frost$core$Bit $tmp133 = (frost$core$Bit) {$tmp132};
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block26; else goto block27;
block27:;
frost$core$Int $tmp135 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s136, $tmp135, &$s137);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp138 = &$tmp116->contents;
frost$collections$Array* $tmp139 = *$tmp138;
ITable* $tmp140 = ((frost$collections$CollectionView*) $tmp139)->$class->itable;
while ($tmp140->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp140 = $tmp140->next;
}
$fn142 $tmp141 = $tmp140->methods[0];
frost$core$Int $tmp143 = $tmp141(((frost$collections$CollectionView*) $tmp139));
int64_t $tmp144 = $tmp143.value;
int64_t $tmp145 = $tmp117.value;
bool $tmp146 = $tmp144 > $tmp145;
frost$core$Bit $tmp147 = (frost$core$Bit) {$tmp146};
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block30; else goto block31;
block31:;
frost$core$Int $tmp149 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s150, $tmp149);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp151 = &$tmp116->contents;
frost$collections$Array* $tmp152 = *$tmp151;
frost$collections$Array** $tmp153 = &$tmp116->contents;
frost$collections$Array* $tmp154 = *$tmp153;
ITable* $tmp155 = ((frost$collections$CollectionView*) $tmp154)->$class->itable;
while ($tmp155->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[0];
frost$core$Int $tmp158 = $tmp156(((frost$collections$CollectionView*) $tmp154));
frost$core$Int $tmp159 = (frost$core$Int) {1u};
int64_t $tmp160 = $tmp158.value;
int64_t $tmp161 = $tmp159.value;
int64_t $tmp162 = $tmp160 - $tmp161;
frost$core$Int $tmp163 = (frost$core$Int) {$tmp162};
int64_t $tmp164 = $tmp163.value;
int64_t $tmp165 = $tmp117.value;
int64_t $tmp166 = $tmp164 - $tmp165;
frost$core$Int $tmp167 = (frost$core$Int) {$tmp166};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp168 = (frost$core$Int) {0u};
int64_t $tmp169 = $tmp167.value;
int64_t $tmp170 = $tmp168.value;
bool $tmp171 = $tmp169 >= $tmp170;
frost$core$Bit $tmp172 = (frost$core$Bit) {$tmp171};
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block35; else goto block34;
block35:;
ITable* $tmp174 = ((frost$collections$CollectionView*) $tmp152)->$class->itable;
while ($tmp174->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp174 = $tmp174->next;
}
$fn176 $tmp175 = $tmp174->methods[0];
frost$core$Int $tmp177 = $tmp175(((frost$collections$CollectionView*) $tmp152));
int64_t $tmp178 = $tmp167.value;
int64_t $tmp179 = $tmp177.value;
bool $tmp180 = $tmp178 < $tmp179;
frost$core$Bit $tmp181 = (frost$core$Bit) {$tmp180};
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block33; else goto block34;
block34:;
frost$core$Int $tmp183 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s184, $tmp183, &$s185);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp186 = &$tmp152->data;
frost$core$Object** $tmp187 = *$tmp186;
frost$core$Int64 $tmp188 = frost$core$Int64$init$frost$core$Int($tmp167);
int64_t $tmp189 = $tmp188.value;
frost$core$Object* $tmp190 = $tmp187[$tmp189];
frost$core$Frost$ref$frost$core$Object$Q($tmp190);
frost$core$Frost$ref$frost$core$Object$Q($tmp190);
frost$core$Frost$unref$frost$core$Object$Q($tmp190);
frost$core$String** $tmp191 = &((org$frostlang$frostc$ClassDecl*) $tmp190)->name;
frost$core$String* $tmp192 = *$tmp191;
frost$core$String* $tmp193 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s194, $tmp192);
frost$core$String* $tmp195 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp193, &$s196);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s197, $tmp114, $tmp195);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q($tmp190);
abort(); // unreachable
block23:;
frost$core$Frost$unref$frost$core$Object$Q($tmp111);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:32
org$frostlang$frostc$ClassDecl* $tmp198 = *(&local0);
frost$core$Weak** $tmp199 = &$tmp198->owner;
frost$core$Weak* $tmp200 = *$tmp199;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Closure.frost:32:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp201 = &$tmp200->_valid;
frost$core$Bit $tmp202 = *$tmp201;
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block38; else goto block39;
block39:;
frost$core$Int $tmp204 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s205, $tmp204);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp206 = &$tmp200->value;
frost$core$Object* $tmp207 = *$tmp206;
frost$core$Frost$ref$frost$core$Object$Q($tmp207);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp207)));
org$frostlang$frostc$ClassDecl* $tmp208 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp207);
frost$core$Frost$unref$frost$core$Object$Q($tmp207);
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
frost$core$Int local4;
frost$core$Int local5;
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
org$frostlang$frostc$Position* $tmp209 = &((org$frostlang$frostc$Symbol*) param1)->position;
org$frostlang$frostc$Position $tmp210 = *$tmp209;
*(&local0) = $tmp210;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:40
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp211 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp212 = (frost$core$Int) {0u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp211, $tmp212);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
org$frostlang$frostc$Annotations** $tmp213 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp214 = *$tmp213;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
org$frostlang$frostc$Annotations** $tmp215 = &param1->annotations;
*$tmp215 = $tmp211;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:41
frost$core$Int* $tmp216 = &param0->closureCount;
frost$core$Int $tmp217 = *$tmp216;
frost$core$Int $tmp218 = (frost$core$Int) {1u};
int64_t $tmp219 = $tmp217.value;
int64_t $tmp220 = $tmp218.value;
int64_t $tmp221 = $tmp219 + $tmp220;
frost$core$Int $tmp222 = (frost$core$Int) {$tmp221};
frost$core$Int* $tmp223 = &param0->closureCount;
*$tmp223 = $tmp222;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:42
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp224 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp224);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$collections$Array* $tmp225 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
*(&local1) = $tmp224;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:43
frost$collections$Stack** $tmp226 = &param0->currentClass;
frost$collections$Stack* $tmp227 = *$tmp226;
frost$core$Int $tmp228 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Closure.frost:43:54
frost$core$Int $tmp229 = (frost$core$Int) {0u};
int64_t $tmp230 = $tmp228.value;
int64_t $tmp231 = $tmp229.value;
bool $tmp232 = $tmp230 >= $tmp231;
frost$core$Bit $tmp233 = (frost$core$Bit) {$tmp232};
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block6; else goto block5;
block6:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp235 = &$tmp227->contents;
frost$collections$Array* $tmp236 = *$tmp235;
ITable* $tmp237 = ((frost$collections$CollectionView*) $tmp236)->$class->itable;
while ($tmp237->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp237 = $tmp237->next;
}
$fn239 $tmp238 = $tmp237->methods[0];
frost$core$Int $tmp240 = $tmp238(((frost$collections$CollectionView*) $tmp236));
int64_t $tmp241 = $tmp228.value;
int64_t $tmp242 = $tmp240.value;
bool $tmp243 = $tmp241 < $tmp242;
frost$core$Bit $tmp244 = (frost$core$Bit) {$tmp243};
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block4; else goto block5;
block5:;
frost$core$Int $tmp246 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s247, $tmp246, &$s248);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp249 = &$tmp227->contents;
frost$collections$Array* $tmp250 = *$tmp249;
ITable* $tmp251 = ((frost$collections$CollectionView*) $tmp250)->$class->itable;
while ($tmp251->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[0];
frost$core$Int $tmp254 = $tmp252(((frost$collections$CollectionView*) $tmp250));
int64_t $tmp255 = $tmp254.value;
int64_t $tmp256 = $tmp228.value;
bool $tmp257 = $tmp255 > $tmp256;
frost$core$Bit $tmp258 = (frost$core$Bit) {$tmp257};
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block8; else goto block9;
block9:;
frost$core$Int $tmp260 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s261, $tmp260);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp262 = &$tmp227->contents;
frost$collections$Array* $tmp263 = *$tmp262;
frost$collections$Array** $tmp264 = &$tmp227->contents;
frost$collections$Array* $tmp265 = *$tmp264;
ITable* $tmp266 = ((frost$collections$CollectionView*) $tmp265)->$class->itable;
while ($tmp266->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp266 = $tmp266->next;
}
$fn268 $tmp267 = $tmp266->methods[0];
frost$core$Int $tmp269 = $tmp267(((frost$collections$CollectionView*) $tmp265));
frost$core$Int $tmp270 = (frost$core$Int) {1u};
int64_t $tmp271 = $tmp269.value;
int64_t $tmp272 = $tmp270.value;
int64_t $tmp273 = $tmp271 - $tmp272;
frost$core$Int $tmp274 = (frost$core$Int) {$tmp273};
int64_t $tmp275 = $tmp274.value;
int64_t $tmp276 = $tmp228.value;
int64_t $tmp277 = $tmp275 - $tmp276;
frost$core$Int $tmp278 = (frost$core$Int) {$tmp277};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp279 = (frost$core$Int) {0u};
int64_t $tmp280 = $tmp278.value;
int64_t $tmp281 = $tmp279.value;
bool $tmp282 = $tmp280 >= $tmp281;
frost$core$Bit $tmp283 = (frost$core$Bit) {$tmp282};
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block13; else goto block12;
block13:;
ITable* $tmp285 = ((frost$collections$CollectionView*) $tmp263)->$class->itable;
while ($tmp285->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp285 = $tmp285->next;
}
$fn287 $tmp286 = $tmp285->methods[0];
frost$core$Int $tmp288 = $tmp286(((frost$collections$CollectionView*) $tmp263));
int64_t $tmp289 = $tmp278.value;
int64_t $tmp290 = $tmp288.value;
bool $tmp291 = $tmp289 < $tmp290;
frost$core$Bit $tmp292 = (frost$core$Bit) {$tmp291};
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block11; else goto block12;
block12:;
frost$core$Int $tmp294 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s295, $tmp294, &$s296);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp297 = &$tmp263->data;
frost$core$Object** $tmp298 = *$tmp297;
frost$core$Int64 $tmp299 = frost$core$Int64$init$frost$core$Int($tmp278);
int64_t $tmp300 = $tmp299.value;
frost$core$Object* $tmp301 = $tmp298[$tmp300];
frost$core$Frost$ref$frost$core$Object$Q($tmp301);
frost$core$Frost$ref$frost$core$Object$Q($tmp301);
frost$core$Frost$unref$frost$core$Object$Q($tmp301);
org$frostlang$frostc$Type** $tmp302 = &((org$frostlang$frostc$ClassDecl*) $tmp301)->type;
org$frostlang$frostc$Type* $tmp303 = *$tmp302;
frost$core$Bit $tmp304 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp303);
bool $tmp305 = $tmp304.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp301);
if ($tmp305) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:44
frost$collections$Array* $tmp306 = *(&local1);
org$frostlang$frostc$Type** $tmp307 = &param0->IMMUTABLE_TYPE;
org$frostlang$frostc$Type* $tmp308 = *$tmp307;
frost$collections$Array$add$frost$collections$Array$T($tmp306, ((frost$core$Object*) $tmp308));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:45
ITable* $tmp309 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp309->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp309 = $tmp309->next;
}
$fn311 $tmp310 = $tmp309->methods[0];
frost$collections$Iterator* $tmp312 = $tmp310(((frost$collections$Iterable*) param2));
goto block14;
block14:;
ITable* $tmp313 = $tmp312->$class->itable;
while ($tmp313->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp313 = $tmp313->next;
}
$fn315 $tmp314 = $tmp313->methods[0];
frost$core$Bit $tmp316 = $tmp314($tmp312);
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block16; else goto block15;
block15:;
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp318 = $tmp312->$class->itable;
while ($tmp318->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp318 = $tmp318->next;
}
$fn320 $tmp319 = $tmp318->methods[1];
frost$core$Object* $tmp321 = $tmp319($tmp312);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp321)));
org$frostlang$frostc$Compiler$Capture* $tmp322 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) $tmp321);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:46
org$frostlang$frostc$Compiler$Capture* $tmp323 = *(&local2);
frost$core$Int* $tmp324 = &$tmp323->$rawValue;
frost$core$Int $tmp325 = *$tmp324;
frost$core$Int $tmp326 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:47:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp327 = $tmp325.value;
int64_t $tmp328 = $tmp326.value;
bool $tmp329 = $tmp327 == $tmp328;
frost$core$Bit $tmp330 = (frost$core$Bit) {$tmp329};
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Variable** $tmp332 = (org$frostlang$frostc$Variable**) ($tmp323->$data + 0);
org$frostlang$frostc$Variable* $tmp333 = *$tmp332;
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
org$frostlang$frostc$Variable* $tmp334 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
*(&local3) = $tmp333;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:48
org$frostlang$frostc$Variable* $tmp335 = *(&local3);
org$frostlang$frostc$Type** $tmp336 = &$tmp335->type;
org$frostlang$frostc$Type* $tmp337 = *$tmp336;
frost$core$Bit $tmp338 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp337);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Closure.frost:48:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp339 = $tmp338.value;
bool $tmp340 = !$tmp339;
frost$core$Bit $tmp341 = (frost$core$Bit) {$tmp340};
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:49
frost$collections$Array* $tmp343 = *(&local1);
// begin inline call to method frost.collections.Array.clear() from Closure.frost:49:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
frost$core$Int $tmp344 = (frost$core$Int) {0u};
frost$core$Int* $tmp345 = &$tmp343->_count;
*$tmp345 = $tmp344;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
frost$core$Int $tmp346 = (frost$core$Int) {0u};
frost$core$Int* $tmp347 = &$tmp343->capacity;
frost$core$Int $tmp348 = *$tmp347;
frost$core$Bit $tmp349 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp350 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp346, $tmp348, $tmp349);
frost$core$Int $tmp351 = $tmp350.min;
*(&local4) = $tmp351;
frost$core$Int $tmp352 = $tmp350.max;
frost$core$Bit $tmp353 = $tmp350.inclusive;
bool $tmp354 = $tmp353.value;
frost$core$Int $tmp355 = (frost$core$Int) {1u};
if ($tmp354) goto block28; else goto block29;
block28:;
int64_t $tmp356 = $tmp351.value;
int64_t $tmp357 = $tmp352.value;
bool $tmp358 = $tmp356 <= $tmp357;
frost$core$Bit $tmp359 = (frost$core$Bit) {$tmp358};
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block25; else goto block26;
block29:;
int64_t $tmp361 = $tmp351.value;
int64_t $tmp362 = $tmp352.value;
bool $tmp363 = $tmp361 < $tmp362;
frost$core$Bit $tmp364 = (frost$core$Bit) {$tmp363};
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp366 = &$tmp343->data;
frost$core$Object** $tmp367 = *$tmp366;
frost$core$Int $tmp368 = *(&local4);
frost$core$Int64 $tmp369 = frost$core$Int64$init$frost$core$Int($tmp368);
int64_t $tmp370 = $tmp369.value;
frost$core$Object* $tmp371 = $tmp367[$tmp370];
frost$core$Frost$unref$frost$core$Object$Q($tmp371);
$tmp367[$tmp370] = ((frost$core$Object*) NULL);
frost$core$Int $tmp372 = *(&local4);
int64_t $tmp373 = $tmp352.value;
int64_t $tmp374 = $tmp372.value;
int64_t $tmp375 = $tmp373 - $tmp374;
frost$core$Int $tmp376 = (frost$core$Int) {$tmp375};
if ($tmp354) goto block31; else goto block32;
block31:;
int64_t $tmp377 = $tmp376.value;
int64_t $tmp378 = $tmp355.value;
bool $tmp379 = $tmp377 >= $tmp378;
frost$core$Bit $tmp380 = (frost$core$Bit) {$tmp379};
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block30; else goto block26;
block32:;
int64_t $tmp382 = $tmp376.value;
int64_t $tmp383 = $tmp355.value;
bool $tmp384 = $tmp382 > $tmp383;
frost$core$Bit $tmp385 = (frost$core$Bit) {$tmp384};
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block30; else goto block26;
block30:;
int64_t $tmp387 = $tmp372.value;
int64_t $tmp388 = $tmp355.value;
int64_t $tmp389 = $tmp387 + $tmp388;
frost$core$Int $tmp390 = (frost$core$Int) {$tmp389};
*(&local4) = $tmp390;
goto block25;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:50
org$frostlang$frostc$Variable* $tmp391 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp321);
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
frost$core$Int $tmp394 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:53:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp395 = $tmp325.value;
int64_t $tmp396 = $tmp394.value;
bool $tmp397 = $tmp395 == $tmp396;
frost$core$Bit $tmp398 = (frost$core$Bit) {$tmp397};
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:54
org$frostlang$frostc$Type* $tmp400 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
frost$core$Bit $tmp401 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp400);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Closure.frost:54:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp402 = $tmp401.value;
bool $tmp403 = !$tmp402;
frost$core$Bit $tmp404 = (frost$core$Bit) {$tmp403};
bool $tmp405 = $tmp404.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
if ($tmp405) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:55
frost$collections$Array* $tmp406 = *(&local1);
// begin inline call to method frost.collections.Array.clear() from Closure.frost:55:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
frost$core$Int $tmp407 = (frost$core$Int) {0u};
frost$core$Int* $tmp408 = &$tmp406->_count;
*$tmp408 = $tmp407;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
frost$core$Int $tmp409 = (frost$core$Int) {0u};
frost$core$Int* $tmp410 = &$tmp406->capacity;
frost$core$Int $tmp411 = *$tmp410;
frost$core$Bit $tmp412 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp413 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp409, $tmp411, $tmp412);
frost$core$Int $tmp414 = $tmp413.min;
*(&local5) = $tmp414;
frost$core$Int $tmp415 = $tmp413.max;
frost$core$Bit $tmp416 = $tmp413.inclusive;
bool $tmp417 = $tmp416.value;
frost$core$Int $tmp418 = (frost$core$Int) {1u};
if ($tmp417) goto block43; else goto block44;
block43:;
int64_t $tmp419 = $tmp414.value;
int64_t $tmp420 = $tmp415.value;
bool $tmp421 = $tmp419 <= $tmp420;
frost$core$Bit $tmp422 = (frost$core$Bit) {$tmp421};
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block40; else goto block41;
block44:;
int64_t $tmp424 = $tmp414.value;
int64_t $tmp425 = $tmp415.value;
bool $tmp426 = $tmp424 < $tmp425;
frost$core$Bit $tmp427 = (frost$core$Bit) {$tmp426};
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp429 = &$tmp406->data;
frost$core$Object** $tmp430 = *$tmp429;
frost$core$Int $tmp431 = *(&local5);
frost$core$Int64 $tmp432 = frost$core$Int64$init$frost$core$Int($tmp431);
int64_t $tmp433 = $tmp432.value;
frost$core$Object* $tmp434 = $tmp430[$tmp433];
frost$core$Frost$unref$frost$core$Object$Q($tmp434);
$tmp430[$tmp433] = ((frost$core$Object*) NULL);
frost$core$Int $tmp435 = *(&local5);
int64_t $tmp436 = $tmp415.value;
int64_t $tmp437 = $tmp435.value;
int64_t $tmp438 = $tmp436 - $tmp437;
frost$core$Int $tmp439 = (frost$core$Int) {$tmp438};
if ($tmp417) goto block46; else goto block47;
block46:;
int64_t $tmp440 = $tmp439.value;
int64_t $tmp441 = $tmp418.value;
bool $tmp442 = $tmp440 >= $tmp441;
frost$core$Bit $tmp443 = (frost$core$Bit) {$tmp442};
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block45; else goto block41;
block47:;
int64_t $tmp445 = $tmp439.value;
int64_t $tmp446 = $tmp418.value;
bool $tmp447 = $tmp445 > $tmp446;
frost$core$Bit $tmp448 = (frost$core$Bit) {$tmp447};
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block45; else goto block41;
block45:;
int64_t $tmp450 = $tmp435.value;
int64_t $tmp451 = $tmp418.value;
int64_t $tmp452 = $tmp450 + $tmp451;
frost$core$Int $tmp453 = (frost$core$Int) {$tmp452};
*(&local5) = $tmp453;
goto block40;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:56
frost$core$Frost$unref$frost$core$Object$Q($tmp321);
org$frostlang$frostc$Compiler$Capture* $tmp454 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block16;
block37:;
goto block17;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:60
frost$core$Int $tmp455 = (frost$core$Int) {60u};
org$frostlang$frostc$Compiler$Capture* $tmp456 = *(&local2);
$fn458 $tmp457 = ($fn458) ((frost$core$Object*) $tmp456)->$class->vtable[0];
frost$core$String* $tmp459 = $tmp457(((frost$core$Object*) $tmp456));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s460, $tmp455, $tmp459);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
abort(); // unreachable
block17:;
frost$core$Frost$unref$frost$core$Object$Q($tmp321);
org$frostlang$frostc$Compiler$Capture* $tmp461 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:65
FROST_ASSERT(208 == sizeof(org$frostlang$frostc$ClassDecl));
org$frostlang$frostc$ClassDecl* $tmp462 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$collections$Stack** $tmp463 = &param0->currentClass;
frost$collections$Stack* $tmp464 = *$tmp463;
frost$core$Int $tmp465 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Closure.frost:65:54
frost$core$Int $tmp466 = (frost$core$Int) {0u};
int64_t $tmp467 = $tmp465.value;
int64_t $tmp468 = $tmp466.value;
bool $tmp469 = $tmp467 >= $tmp468;
frost$core$Bit $tmp470 = (frost$core$Bit) {$tmp469};
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block51; else goto block50;
block51:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp472 = &$tmp464->contents;
frost$collections$Array* $tmp473 = *$tmp472;
ITable* $tmp474 = ((frost$collections$CollectionView*) $tmp473)->$class->itable;
while ($tmp474->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp474 = $tmp474->next;
}
$fn476 $tmp475 = $tmp474->methods[0];
frost$core$Int $tmp477 = $tmp475(((frost$collections$CollectionView*) $tmp473));
int64_t $tmp478 = $tmp465.value;
int64_t $tmp479 = $tmp477.value;
bool $tmp480 = $tmp478 < $tmp479;
frost$core$Bit $tmp481 = (frost$core$Bit) {$tmp480};
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block49; else goto block50;
block50:;
frost$core$Int $tmp483 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s484, $tmp483, &$s485);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp486 = &$tmp464->contents;
frost$collections$Array* $tmp487 = *$tmp486;
ITable* $tmp488 = ((frost$collections$CollectionView*) $tmp487)->$class->itable;
while ($tmp488->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp488 = $tmp488->next;
}
$fn490 $tmp489 = $tmp488->methods[0];
frost$core$Int $tmp491 = $tmp489(((frost$collections$CollectionView*) $tmp487));
int64_t $tmp492 = $tmp491.value;
int64_t $tmp493 = $tmp465.value;
bool $tmp494 = $tmp492 > $tmp493;
frost$core$Bit $tmp495 = (frost$core$Bit) {$tmp494};
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block53; else goto block54;
block54:;
frost$core$Int $tmp497 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s498, $tmp497);
abort(); // unreachable
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp499 = &$tmp464->contents;
frost$collections$Array* $tmp500 = *$tmp499;
frost$collections$Array** $tmp501 = &$tmp464->contents;
frost$collections$Array* $tmp502 = *$tmp501;
ITable* $tmp503 = ((frost$collections$CollectionView*) $tmp502)->$class->itable;
while ($tmp503->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp503 = $tmp503->next;
}
$fn505 $tmp504 = $tmp503->methods[0];
frost$core$Int $tmp506 = $tmp504(((frost$collections$CollectionView*) $tmp502));
frost$core$Int $tmp507 = (frost$core$Int) {1u};
int64_t $tmp508 = $tmp506.value;
int64_t $tmp509 = $tmp507.value;
int64_t $tmp510 = $tmp508 - $tmp509;
frost$core$Int $tmp511 = (frost$core$Int) {$tmp510};
int64_t $tmp512 = $tmp511.value;
int64_t $tmp513 = $tmp465.value;
int64_t $tmp514 = $tmp512 - $tmp513;
frost$core$Int $tmp515 = (frost$core$Int) {$tmp514};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp516 = (frost$core$Int) {0u};
int64_t $tmp517 = $tmp515.value;
int64_t $tmp518 = $tmp516.value;
bool $tmp519 = $tmp517 >= $tmp518;
frost$core$Bit $tmp520 = (frost$core$Bit) {$tmp519};
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block58; else goto block57;
block58:;
ITable* $tmp522 = ((frost$collections$CollectionView*) $tmp500)->$class->itable;
while ($tmp522->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp522 = $tmp522->next;
}
$fn524 $tmp523 = $tmp522->methods[0];
frost$core$Int $tmp525 = $tmp523(((frost$collections$CollectionView*) $tmp500));
int64_t $tmp526 = $tmp515.value;
int64_t $tmp527 = $tmp525.value;
bool $tmp528 = $tmp526 < $tmp527;
frost$core$Bit $tmp529 = (frost$core$Bit) {$tmp528};
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block56; else goto block57;
block57:;
frost$core$Int $tmp531 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s532, $tmp531, &$s533);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp534 = &$tmp500->data;
frost$core$Object** $tmp535 = *$tmp534;
frost$core$Int64 $tmp536 = frost$core$Int64$init$frost$core$Int($tmp515);
int64_t $tmp537 = $tmp536.value;
frost$core$Object* $tmp538 = $tmp535[$tmp537];
frost$core$Frost$ref$frost$core$Object$Q($tmp538);
frost$core$Frost$ref$frost$core$Object$Q($tmp538);
frost$core$Frost$unref$frost$core$Object$Q($tmp538);
frost$io$File** $tmp539 = &((org$frostlang$frostc$ClassDecl*) $tmp538)->source;
frost$io$File* $tmp540 = *$tmp539;
org$frostlang$frostc$Position $tmp541 = *(&local0);
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp542 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp542);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp543 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp544 = (frost$core$Int) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp543, $tmp544);
frost$core$Int $tmp545 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Closure.frost:66:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp546 = &(&local7)->$rawValue;
*$tmp546 = $tmp545;
org$frostlang$frostc$ClassDecl$Kind $tmp547 = *(&local7);
*(&local6) = $tmp547;
org$frostlang$frostc$ClassDecl$Kind $tmp548 = *(&local6);
frost$collections$Stack** $tmp549 = &param0->currentClass;
frost$collections$Stack* $tmp550 = *$tmp549;
frost$core$Int $tmp551 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Closure.frost:67:41
frost$core$Int $tmp552 = (frost$core$Int) {0u};
int64_t $tmp553 = $tmp551.value;
int64_t $tmp554 = $tmp552.value;
bool $tmp555 = $tmp553 >= $tmp554;
frost$core$Bit $tmp556 = (frost$core$Bit) {$tmp555};
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block63; else goto block62;
block63:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp558 = &$tmp550->contents;
frost$collections$Array* $tmp559 = *$tmp558;
ITable* $tmp560 = ((frost$collections$CollectionView*) $tmp559)->$class->itable;
while ($tmp560->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp560 = $tmp560->next;
}
$fn562 $tmp561 = $tmp560->methods[0];
frost$core$Int $tmp563 = $tmp561(((frost$collections$CollectionView*) $tmp559));
int64_t $tmp564 = $tmp551.value;
int64_t $tmp565 = $tmp563.value;
bool $tmp566 = $tmp564 < $tmp565;
frost$core$Bit $tmp567 = (frost$core$Bit) {$tmp566};
bool $tmp568 = $tmp567.value;
if ($tmp568) goto block61; else goto block62;
block62:;
frost$core$Int $tmp569 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s570, $tmp569, &$s571);
abort(); // unreachable
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp572 = &$tmp550->contents;
frost$collections$Array* $tmp573 = *$tmp572;
ITable* $tmp574 = ((frost$collections$CollectionView*) $tmp573)->$class->itable;
while ($tmp574->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp574 = $tmp574->next;
}
$fn576 $tmp575 = $tmp574->methods[0];
frost$core$Int $tmp577 = $tmp575(((frost$collections$CollectionView*) $tmp573));
int64_t $tmp578 = $tmp577.value;
int64_t $tmp579 = $tmp551.value;
bool $tmp580 = $tmp578 > $tmp579;
frost$core$Bit $tmp581 = (frost$core$Bit) {$tmp580};
bool $tmp582 = $tmp581.value;
if ($tmp582) goto block65; else goto block66;
block66:;
frost$core$Int $tmp583 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s584, $tmp583);
abort(); // unreachable
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp585 = &$tmp550->contents;
frost$collections$Array* $tmp586 = *$tmp585;
frost$collections$Array** $tmp587 = &$tmp550->contents;
frost$collections$Array* $tmp588 = *$tmp587;
ITable* $tmp589 = ((frost$collections$CollectionView*) $tmp588)->$class->itable;
while ($tmp589->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp589 = $tmp589->next;
}
$fn591 $tmp590 = $tmp589->methods[0];
frost$core$Int $tmp592 = $tmp590(((frost$collections$CollectionView*) $tmp588));
frost$core$Int $tmp593 = (frost$core$Int) {1u};
int64_t $tmp594 = $tmp592.value;
int64_t $tmp595 = $tmp593.value;
int64_t $tmp596 = $tmp594 - $tmp595;
frost$core$Int $tmp597 = (frost$core$Int) {$tmp596};
int64_t $tmp598 = $tmp597.value;
int64_t $tmp599 = $tmp551.value;
int64_t $tmp600 = $tmp598 - $tmp599;
frost$core$Int $tmp601 = (frost$core$Int) {$tmp600};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp602 = (frost$core$Int) {0u};
int64_t $tmp603 = $tmp601.value;
int64_t $tmp604 = $tmp602.value;
bool $tmp605 = $tmp603 >= $tmp604;
frost$core$Bit $tmp606 = (frost$core$Bit) {$tmp605};
bool $tmp607 = $tmp606.value;
if ($tmp607) goto block70; else goto block69;
block70:;
ITable* $tmp608 = ((frost$collections$CollectionView*) $tmp586)->$class->itable;
while ($tmp608->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp608 = $tmp608->next;
}
$fn610 $tmp609 = $tmp608->methods[0];
frost$core$Int $tmp611 = $tmp609(((frost$collections$CollectionView*) $tmp586));
int64_t $tmp612 = $tmp601.value;
int64_t $tmp613 = $tmp611.value;
bool $tmp614 = $tmp612 < $tmp613;
frost$core$Bit $tmp615 = (frost$core$Bit) {$tmp614};
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block68; else goto block69;
block69:;
frost$core$Int $tmp617 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s618, $tmp617, &$s619);
abort(); // unreachable
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp620 = &$tmp586->data;
frost$core$Object** $tmp621 = *$tmp620;
frost$core$Int64 $tmp622 = frost$core$Int64$init$frost$core$Int($tmp601);
int64_t $tmp623 = $tmp622.value;
frost$core$Object* $tmp624 = $tmp621[$tmp623];
frost$core$Frost$ref$frost$core$Object$Q($tmp624);
frost$core$Frost$ref$frost$core$Object$Q($tmp624);
frost$core$Frost$unref$frost$core$Object$Q($tmp624);
frost$core$String** $tmp625 = &((org$frostlang$frostc$ClassDecl*) $tmp624)->name;
frost$core$String* $tmp626 = *$tmp625;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Closure.frost:67:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$String* $tmp627 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp626, &$s628);
frost$core$Int* $tmp629 = &param0->closureCount;
frost$core$Int $tmp630 = *$tmp629;
frost$core$Int$wrapper* $tmp631;
$tmp631 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp631->value = $tmp630;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:67:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn633 $tmp632 = ($fn633) ((frost$core$Object*) $tmp631)->$class->vtable[0];
frost$core$String* $tmp634 = $tmp632(((frost$core$Object*) $tmp631));
frost$core$String* $tmp635 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp627, $tmp634);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
frost$core$String* $tmp636 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp635, &$s637);
frost$collections$Array* $tmp638 = *(&local1);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp639 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp639);
org$frostlang$frostc$SymbolTable** $tmp640 = &param0->root;
org$frostlang$frostc$SymbolTable* $tmp641 = *$tmp640;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp462, $tmp540, $tmp541, ((frost$collections$MapView*) $tmp542), ((frost$core$String*) NULL), $tmp543, $tmp548, $tmp636, ((frost$collections$ListView*) $tmp638), $tmp639, $tmp641);
*(&local8) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
org$frostlang$frostc$ClassDecl* $tmp642 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
*(&local8) = $tmp462;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$Frost$unref$frost$core$Object$Q($tmp624);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
frost$core$Frost$unref$frost$core$Object$Q($tmp538);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:69
org$frostlang$frostc$ClassDecl* $tmp643 = *(&local8);
frost$core$Bit $tmp644 = (frost$core$Bit) {false};
frost$core$Bit* $tmp645 = &$tmp643->external;
*$tmp645 = $tmp644;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp646 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp646);
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
frost$collections$Array* $tmp647 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local9) = $tmp646;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:73
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp648 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp648);
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
frost$collections$Array* $tmp649 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local10) = $tmp648;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:74
ITable* $tmp650 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp650->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp650 = $tmp650->next;
}
$fn652 $tmp651 = $tmp650->methods[0];
frost$collections$Iterator* $tmp653 = $tmp651(((frost$collections$Iterable*) param2));
goto block73;
block73:;
ITable* $tmp654 = $tmp653->$class->itable;
while ($tmp654->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp654 = $tmp654->next;
}
$fn656 $tmp655 = $tmp654->methods[0];
frost$core$Bit $tmp657 = $tmp655($tmp653);
bool $tmp658 = $tmp657.value;
if ($tmp658) goto block75; else goto block74;
block74:;
*(&local11) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp659 = $tmp653->$class->itable;
while ($tmp659->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp659 = $tmp659->next;
}
$fn661 $tmp660 = $tmp659->methods[1];
frost$core$Object* $tmp662 = $tmp660($tmp653);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp662)));
org$frostlang$frostc$Compiler$Capture* $tmp663 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local11) = ((org$frostlang$frostc$Compiler$Capture*) $tmp662);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:75
org$frostlang$frostc$Compiler$Capture* $tmp664 = *(&local11);
frost$core$Int* $tmp665 = &$tmp664->$rawValue;
frost$core$Int $tmp666 = *$tmp665;
frost$core$Int $tmp667 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:76:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp668 = $tmp666.value;
int64_t $tmp669 = $tmp667.value;
bool $tmp670 = $tmp668 == $tmp669;
frost$core$Bit $tmp671 = (frost$core$Bit) {$tmp670};
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block77; else goto block78;
block77:;
org$frostlang$frostc$Variable** $tmp673 = (org$frostlang$frostc$Variable**) ($tmp664->$data + 0);
org$frostlang$frostc$Variable* $tmp674 = *$tmp673;
*(&local12) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
org$frostlang$frostc$Variable* $tmp675 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local12) = $tmp674;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:77
frost$collections$Array* $tmp676 = *(&local10);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp677 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$Variable* $tmp678 = *(&local12);
frost$core$String** $tmp679 = &((org$frostlang$frostc$Symbol*) $tmp678)->name;
frost$core$String* $tmp680 = *$tmp679;
org$frostlang$frostc$Variable* $tmp681 = *(&local12);
org$frostlang$frostc$Type** $tmp682 = &$tmp681->type;
org$frostlang$frostc$Type* $tmp683 = *$tmp682;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp677, $tmp680, $tmp683);
frost$collections$Array$add$frost$collections$Array$T($tmp676, ((frost$core$Object*) $tmp677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:79
frost$collections$Array* $tmp684 = *(&local9);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp685 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp686 = (frost$core$Int) {5u};
org$frostlang$frostc$Position $tmp687 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp688 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp689 = (frost$core$Int) {16u};
org$frostlang$frostc$Position $tmp690 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp691 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp692 = (frost$core$Int) {22u};
org$frostlang$frostc$Position $tmp693 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp691, $tmp692, $tmp693, &$s694);
org$frostlang$frostc$Variable* $tmp695 = *(&local12);
frost$core$String** $tmp696 = &((org$frostlang$frostc$Symbol*) $tmp695)->name;
frost$core$String* $tmp697 = *$tmp696;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp688, $tmp689, $tmp690, $tmp691, $tmp697);
frost$core$Int $tmp698 = (frost$core$Int) {24u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Closure.frost:81:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp699 = &(&local14)->$rawValue;
*$tmp699 = $tmp698;
org$frostlang$frostc$expression$Binary$Operator $tmp700 = *(&local14);
*(&local13) = $tmp700;
org$frostlang$frostc$expression$Binary$Operator $tmp701 = *(&local13);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp702 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp703 = (frost$core$Int) {22u};
org$frostlang$frostc$Position $tmp704 = *(&local0);
org$frostlang$frostc$Variable* $tmp705 = *(&local12);
frost$core$String** $tmp706 = &((org$frostlang$frostc$Symbol*) $tmp705)->name;
frost$core$String* $tmp707 = *$tmp706;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp702, $tmp703, $tmp704, $tmp707);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp685, $tmp686, $tmp687, $tmp688, $tmp701, $tmp702);
frost$collections$Array$add$frost$collections$Array$T($tmp684, ((frost$core$Object*) $tmp685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
org$frostlang$frostc$Variable* $tmp708 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
*(&local12) = ((org$frostlang$frostc$Variable*) NULL);
goto block76;
block78:;
frost$core$Int $tmp709 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:83:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp710 = $tmp666.value;
int64_t $tmp711 = $tmp709.value;
bool $tmp712 = $tmp710 == $tmp711;
frost$core$Bit $tmp713 = (frost$core$Bit) {$tmp712};
bool $tmp714 = $tmp713.value;
if ($tmp714) goto block81; else goto block82;
block81:;
org$frostlang$frostc$FieldDecl** $tmp715 = (org$frostlang$frostc$FieldDecl**) ($tmp664->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp716 = *$tmp715;
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
org$frostlang$frostc$FieldDecl* $tmp717 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
*(&local15) = $tmp716;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:84
frost$collections$Array* $tmp718 = *(&local10);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp719 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$FieldDecl* $tmp720 = *(&local15);
frost$core$String** $tmp721 = &((org$frostlang$frostc$Symbol*) $tmp720)->name;
frost$core$String* $tmp722 = *$tmp721;
org$frostlang$frostc$FieldDecl* $tmp723 = *(&local15);
org$frostlang$frostc$Type** $tmp724 = &$tmp723->type;
org$frostlang$frostc$Type* $tmp725 = *$tmp724;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp719, $tmp722, $tmp725);
frost$collections$Array$add$frost$collections$Array$T($tmp718, ((frost$core$Object*) $tmp719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:86
frost$collections$Array* $tmp726 = *(&local9);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp727 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp728 = (frost$core$Int) {5u};
org$frostlang$frostc$Position $tmp729 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp730 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp731 = (frost$core$Int) {16u};
org$frostlang$frostc$Position $tmp732 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp733 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp734 = (frost$core$Int) {22u};
org$frostlang$frostc$Position $tmp735 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp733, $tmp734, $tmp735, &$s736);
org$frostlang$frostc$FieldDecl* $tmp737 = *(&local15);
frost$core$String** $tmp738 = &((org$frostlang$frostc$Symbol*) $tmp737)->name;
frost$core$String* $tmp739 = *$tmp738;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp730, $tmp731, $tmp732, $tmp733, $tmp739);
frost$core$Int $tmp740 = (frost$core$Int) {24u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Closure.frost:88:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp741 = &(&local17)->$rawValue;
*$tmp741 = $tmp740;
org$frostlang$frostc$expression$Binary$Operator $tmp742 = *(&local17);
*(&local16) = $tmp742;
org$frostlang$frostc$expression$Binary$Operator $tmp743 = *(&local16);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp744 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp745 = (frost$core$Int) {22u};
org$frostlang$frostc$Position $tmp746 = *(&local0);
org$frostlang$frostc$FieldDecl* $tmp747 = *(&local15);
frost$core$String** $tmp748 = &((org$frostlang$frostc$Symbol*) $tmp747)->name;
frost$core$String* $tmp749 = *$tmp748;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp744, $tmp745, $tmp746, $tmp749);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp727, $tmp728, $tmp729, $tmp730, $tmp743, $tmp744);
frost$collections$Array$add$frost$collections$Array$T($tmp726, ((frost$core$Object*) $tmp727));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
org$frostlang$frostc$FieldDecl* $tmp750 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block76;
block82:;
frost$core$Int $tmp751 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:90:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp752 = $tmp666.value;
int64_t $tmp753 = $tmp751.value;
bool $tmp754 = $tmp752 == $tmp753;
frost$core$Bit $tmp755 = (frost$core$Bit) {$tmp754};
bool $tmp756 = $tmp755.value;
if ($tmp756) goto block85; else goto block76;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:91
frost$collections$Array* $tmp757 = *(&local10);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp758 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$Type* $tmp759 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp758, &$s760, $tmp759);
frost$collections$Array$add$frost$collections$Array$T($tmp757, ((frost$core$Object*) $tmp758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:94
frost$collections$Array* $tmp761 = *(&local9);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp762 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp763 = (frost$core$Int) {5u};
org$frostlang$frostc$Position $tmp764 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp765 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp766 = (frost$core$Int) {16u};
org$frostlang$frostc$Position $tmp767 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp768 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp769 = (frost$core$Int) {22u};
org$frostlang$frostc$Position $tmp770 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp768, $tmp769, $tmp770, &$s771);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp765, $tmp766, $tmp767, $tmp768, &$s772);
frost$core$Int $tmp773 = (frost$core$Int) {24u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Closure.frost:97:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp774 = &(&local19)->$rawValue;
*$tmp774 = $tmp773;
org$frostlang$frostc$expression$Binary$Operator $tmp775 = *(&local19);
*(&local18) = $tmp775;
org$frostlang$frostc$expression$Binary$Operator $tmp776 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp777 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp778 = (frost$core$Int) {22u};
org$frostlang$frostc$Position $tmp779 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp777, $tmp778, $tmp779, &$s780);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp762, $tmp763, $tmp764, $tmp765, $tmp776, $tmp777);
frost$collections$Array$add$frost$collections$Array$T($tmp761, ((frost$core$Object*) $tmp762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
goto block76;
block76:;
frost$core$Frost$unref$frost$core$Object$Q($tmp662);
org$frostlang$frostc$Compiler$Capture* $tmp781 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
*(&local11) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block73;
block75:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:102
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp782 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp783 = *(&local8);
org$frostlang$frostc$Position $tmp784 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp785 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp786 = (frost$core$Int) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp785, $tmp786);
frost$core$Int $tmp787 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:103:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp788 = &(&local21)->$rawValue;
*$tmp788 = $tmp787;
org$frostlang$frostc$MethodDecl$Kind $tmp789 = *(&local21);
*(&local20) = $tmp789;
org$frostlang$frostc$MethodDecl$Kind $tmp790 = *(&local20);
frost$collections$Array* $tmp791 = *(&local10);
org$frostlang$frostc$Type** $tmp792 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp793 = *$tmp792;
frost$collections$Array* $tmp794 = *(&local9);
org$frostlang$frostc$FixedArray* $tmp795 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp794);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp782, $tmp783, $tmp784, ((frost$core$String*) NULL), $tmp785, $tmp790, &$s796, ((frost$collections$Array*) NULL), $tmp791, $tmp793, $tmp795);
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
org$frostlang$frostc$MethodDecl* $tmp797 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
*(&local22) = $tmp782;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:106
org$frostlang$frostc$ClassDecl* $tmp798 = *(&local8);
frost$collections$Array** $tmp799 = &$tmp798->methods;
frost$collections$Array* $tmp800 = *$tmp799;
org$frostlang$frostc$MethodDecl* $tmp801 = *(&local22);
frost$collections$Array$add$frost$collections$Array$T($tmp800, ((frost$core$Object*) $tmp801));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:107
org$frostlang$frostc$ClassDecl* $tmp802 = *(&local8);
org$frostlang$frostc$SymbolTable** $tmp803 = &$tmp802->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp804 = *$tmp803;
org$frostlang$frostc$MethodDecl* $tmp805 = *(&local22);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:107:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp806 = &((org$frostlang$frostc$Symbol*) $tmp805)->name;
frost$core$String* $tmp807 = *$tmp806;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp804, ((org$frostlang$frostc$Symbol*) $tmp805), $tmp807);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:110
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp808 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp809 = *(&local8);
org$frostlang$frostc$Position $tmp810 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp811 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp812 = (frost$core$Int) {32u};
frost$core$Int $tmp813 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Closure.frost:111:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp814 = $tmp812.value;
int64_t $tmp815 = $tmp813.value;
int64_t $tmp816 = $tmp814 | $tmp815;
frost$core$Int $tmp817 = (frost$core$Int) {$tmp816};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp811, $tmp817);
frost$core$Int $tmp818 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:112:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp819 = &(&local24)->$rawValue;
*$tmp819 = $tmp818;
org$frostlang$frostc$MethodDecl$Kind $tmp820 = *(&local24);
*(&local23) = $tmp820;
org$frostlang$frostc$MethodDecl$Kind $tmp821 = *(&local23);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp822 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp822);
org$frostlang$frostc$Type** $tmp823 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp824 = *$tmp823;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp825 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp825);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp808, $tmp809, $tmp810, ((frost$core$String*) NULL), $tmp811, $tmp821, &$s826, ((frost$collections$Array*) NULL), $tmp822, $tmp824, $tmp825);
*(&local25) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
org$frostlang$frostc$MethodDecl* $tmp827 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
*(&local25) = $tmp808;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:114
org$frostlang$frostc$ClassDecl* $tmp828 = *(&local8);
frost$collections$Array** $tmp829 = &$tmp828->methods;
frost$collections$Array* $tmp830 = *$tmp829;
org$frostlang$frostc$MethodDecl* $tmp831 = *(&local25);
frost$collections$Array$add$frost$collections$Array$T($tmp830, ((frost$core$Object*) $tmp831));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:115
org$frostlang$frostc$ClassDecl* $tmp832 = *(&local8);
org$frostlang$frostc$SymbolTable** $tmp833 = &$tmp832->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp834 = *$tmp833;
org$frostlang$frostc$MethodDecl* $tmp835 = *(&local25);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:115:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp836 = &((org$frostlang$frostc$Symbol*) $tmp835)->name;
frost$core$String* $tmp837 = *$tmp836;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp834, ((org$frostlang$frostc$Symbol*) $tmp835), $tmp837);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:118
ITable* $tmp838 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp838->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp838 = $tmp838->next;
}
$fn840 $tmp839 = $tmp838->methods[0];
frost$collections$Iterator* $tmp841 = $tmp839(((frost$collections$Iterable*) param2));
goto block93;
block93:;
ITable* $tmp842 = $tmp841->$class->itable;
while ($tmp842->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp842 = $tmp842->next;
}
$fn844 $tmp843 = $tmp842->methods[0];
frost$core$Bit $tmp845 = $tmp843($tmp841);
bool $tmp846 = $tmp845.value;
if ($tmp846) goto block95; else goto block94;
block94:;
*(&local26) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp847 = $tmp841->$class->itable;
while ($tmp847->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp847 = $tmp847->next;
}
$fn849 $tmp848 = $tmp847->methods[1];
frost$core$Object* $tmp850 = $tmp848($tmp841);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp850)));
org$frostlang$frostc$Compiler$Capture* $tmp851 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
*(&local26) = ((org$frostlang$frostc$Compiler$Capture*) $tmp850);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:119
org$frostlang$frostc$Compiler$Capture* $tmp852 = *(&local26);
frost$core$Int* $tmp853 = &$tmp852->$rawValue;
frost$core$Int $tmp854 = *$tmp853;
frost$core$Int $tmp855 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:120:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp856 = $tmp854.value;
int64_t $tmp857 = $tmp855.value;
bool $tmp858 = $tmp856 == $tmp857;
frost$core$Bit $tmp859 = (frost$core$Bit) {$tmp858};
bool $tmp860 = $tmp859.value;
if ($tmp860) goto block97; else goto block98;
block97:;
org$frostlang$frostc$Variable** $tmp861 = (org$frostlang$frostc$Variable**) ($tmp852->$data + 0);
org$frostlang$frostc$Variable* $tmp862 = *$tmp861;
*(&local27) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
org$frostlang$frostc$Variable* $tmp863 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
*(&local27) = $tmp862;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:121
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp864 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp865 = *(&local8);
org$frostlang$frostc$Position $tmp866 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp867 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp868 = (frost$core$Int) {8192u};
frost$core$Int $tmp869 = (frost$core$Int) {65536u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Closure.frost:122:68
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp870 = $tmp868.value;
int64_t $tmp871 = $tmp869.value;
int64_t $tmp872 = $tmp870 | $tmp871;
frost$core$Int $tmp873 = (frost$core$Int) {$tmp872};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp867, $tmp873);
frost$core$Int $tmp874 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Closure.frost:123:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp875 = &(&local29)->$rawValue;
*$tmp875 = $tmp874;
org$frostlang$frostc$FieldDecl$Kind $tmp876 = *(&local29);
*(&local28) = $tmp876;
org$frostlang$frostc$FieldDecl$Kind $tmp877 = *(&local28);
org$frostlang$frostc$Variable* $tmp878 = *(&local27);
frost$core$String** $tmp879 = &((org$frostlang$frostc$Symbol*) $tmp878)->name;
frost$core$String* $tmp880 = *$tmp879;
org$frostlang$frostc$Variable* $tmp881 = *(&local27);
org$frostlang$frostc$Type** $tmp882 = &$tmp881->type;
org$frostlang$frostc$Type* $tmp883 = *$tmp882;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp864, $tmp865, $tmp866, ((frost$core$String*) NULL), $tmp867, $tmp877, $tmp880, $tmp883, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local30) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
org$frostlang$frostc$FieldDecl* $tmp884 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
*(&local30) = $tmp864;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:124
org$frostlang$frostc$ClassDecl* $tmp885 = *(&local8);
org$frostlang$frostc$SymbolTable** $tmp886 = &$tmp885->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp887 = *$tmp886;
org$frostlang$frostc$FieldDecl* $tmp888 = *(&local30);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:124:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp889 = &((org$frostlang$frostc$Symbol*) $tmp888)->name;
frost$core$String* $tmp890 = *$tmp889;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp887, ((org$frostlang$frostc$Symbol*) $tmp888), $tmp890);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:125
org$frostlang$frostc$ClassDecl* $tmp891 = *(&local8);
frost$collections$Array** $tmp892 = &$tmp891->fields;
frost$collections$Array* $tmp893 = *$tmp892;
org$frostlang$frostc$FieldDecl* $tmp894 = *(&local30);
frost$collections$Array$add$frost$collections$Array$T($tmp893, ((frost$core$Object*) $tmp894));
org$frostlang$frostc$FieldDecl* $tmp895 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
*(&local30) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Variable* $tmp896 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
*(&local27) = ((org$frostlang$frostc$Variable*) NULL);
goto block96;
block98:;
frost$core$Int $tmp897 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:127:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp898 = $tmp854.value;
int64_t $tmp899 = $tmp897.value;
bool $tmp900 = $tmp898 == $tmp899;
frost$core$Bit $tmp901 = (frost$core$Bit) {$tmp900};
bool $tmp902 = $tmp901.value;
if ($tmp902) goto block103; else goto block104;
block103:;
org$frostlang$frostc$FieldDecl** $tmp903 = (org$frostlang$frostc$FieldDecl**) ($tmp852->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp904 = *$tmp903;
*(&local31) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
org$frostlang$frostc$FieldDecl* $tmp905 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
*(&local31) = $tmp904;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:128
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp906 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp907 = *(&local8);
org$frostlang$frostc$Position $tmp908 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp909 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp910 = (frost$core$Int) {8192u};
frost$core$Int $tmp911 = (frost$core$Int) {65536u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Closure.frost:129:68
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp912 = $tmp910.value;
int64_t $tmp913 = $tmp911.value;
int64_t $tmp914 = $tmp912 | $tmp913;
frost$core$Int $tmp915 = (frost$core$Int) {$tmp914};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp909, $tmp915);
frost$core$Int $tmp916 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Closure.frost:130:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp917 = &(&local33)->$rawValue;
*$tmp917 = $tmp916;
org$frostlang$frostc$FieldDecl$Kind $tmp918 = *(&local33);
*(&local32) = $tmp918;
org$frostlang$frostc$FieldDecl$Kind $tmp919 = *(&local32);
org$frostlang$frostc$FieldDecl* $tmp920 = *(&local31);
frost$core$String** $tmp921 = &((org$frostlang$frostc$Symbol*) $tmp920)->name;
frost$core$String* $tmp922 = *$tmp921;
org$frostlang$frostc$FieldDecl* $tmp923 = *(&local31);
org$frostlang$frostc$Type** $tmp924 = &$tmp923->type;
org$frostlang$frostc$Type* $tmp925 = *$tmp924;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp906, $tmp907, $tmp908, ((frost$core$String*) NULL), $tmp909, $tmp919, $tmp922, $tmp925, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local34) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
org$frostlang$frostc$FieldDecl* $tmp926 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
*(&local34) = $tmp906;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:131
org$frostlang$frostc$ClassDecl* $tmp927 = *(&local8);
org$frostlang$frostc$SymbolTable** $tmp928 = &$tmp927->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp929 = *$tmp928;
org$frostlang$frostc$FieldDecl* $tmp930 = *(&local34);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:131:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp931 = &((org$frostlang$frostc$Symbol*) $tmp930)->name;
frost$core$String* $tmp932 = *$tmp931;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp929, ((org$frostlang$frostc$Symbol*) $tmp930), $tmp932);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:132
org$frostlang$frostc$ClassDecl* $tmp933 = *(&local8);
frost$collections$Array** $tmp934 = &$tmp933->fields;
frost$collections$Array* $tmp935 = *$tmp934;
org$frostlang$frostc$FieldDecl* $tmp936 = *(&local34);
frost$collections$Array$add$frost$collections$Array$T($tmp935, ((frost$core$Object*) $tmp936));
org$frostlang$frostc$FieldDecl* $tmp937 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
*(&local34) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp938 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
*(&local31) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block96;
block104:;
frost$core$Int $tmp939 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:134:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp940 = $tmp854.value;
int64_t $tmp941 = $tmp939.value;
bool $tmp942 = $tmp940 == $tmp941;
frost$core$Bit $tmp943 = (frost$core$Bit) {$tmp942};
bool $tmp944 = $tmp943.value;
if ($tmp944) goto block109; else goto block110;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:135
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp945 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp946 = *(&local8);
org$frostlang$frostc$Position $tmp947 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp948 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp949 = (frost$core$Int) {8192u};
frost$core$Int $tmp950 = (frost$core$Int) {65536u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Closure.frost:136:68
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp951 = $tmp949.value;
int64_t $tmp952 = $tmp950.value;
int64_t $tmp953 = $tmp951 | $tmp952;
frost$core$Int $tmp954 = (frost$core$Int) {$tmp953};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp948, $tmp954);
frost$core$Int $tmp955 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Closure.frost:137:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp956 = &(&local36)->$rawValue;
*$tmp956 = $tmp955;
org$frostlang$frostc$FieldDecl$Kind $tmp957 = *(&local36);
*(&local35) = $tmp957;
org$frostlang$frostc$FieldDecl$Kind $tmp958 = *(&local35);
org$frostlang$frostc$Type* $tmp959 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp945, $tmp946, $tmp947, ((frost$core$String*) NULL), $tmp948, $tmp958, &$s960, $tmp959, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local37) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
org$frostlang$frostc$FieldDecl* $tmp961 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
*(&local37) = $tmp945;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:139
org$frostlang$frostc$ClassDecl* $tmp962 = *(&local8);
org$frostlang$frostc$SymbolTable** $tmp963 = &$tmp962->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp964 = *$tmp963;
org$frostlang$frostc$FieldDecl* $tmp965 = *(&local37);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:139:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp966 = &((org$frostlang$frostc$Symbol*) $tmp965)->name;
frost$core$String* $tmp967 = *$tmp966;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp964, ((org$frostlang$frostc$Symbol*) $tmp965), $tmp967);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:140
org$frostlang$frostc$ClassDecl* $tmp968 = *(&local8);
frost$collections$Array** $tmp969 = &$tmp968->fields;
frost$collections$Array* $tmp970 = *$tmp969;
org$frostlang$frostc$FieldDecl* $tmp971 = *(&local37);
frost$collections$Array$add$frost$collections$Array$T($tmp970, ((frost$core$Object*) $tmp971));
org$frostlang$frostc$FieldDecl* $tmp972 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
*(&local37) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block96;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:143
frost$core$Int $tmp973 = (frost$core$Int) {143u};
org$frostlang$frostc$Compiler$Capture* $tmp974 = *(&local26);
$fn976 $tmp975 = ($fn976) ((frost$core$Object*) $tmp974)->$class->vtable[0];
frost$core$String* $tmp977 = $tmp975(((frost$core$Object*) $tmp974));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s978, $tmp973, $tmp977);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
abort(); // unreachable
block96:;
frost$core$Frost$unref$frost$core$Object$Q($tmp850);
org$frostlang$frostc$Compiler$Capture* $tmp979 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
*(&local26) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block93;
block95:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:147
org$frostlang$frostc$ClassDecl* $tmp980 = *(&local8);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp981 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp981, ((frost$core$Object*) $tmp980));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
frost$core$Weak** $tmp982 = &param1->owner;
frost$core$Weak* $tmp983 = *$tmp982;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
frost$core$Weak** $tmp984 = &param1->owner;
*$tmp984 = $tmp981;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:148
org$frostlang$frostc$ClassDecl* $tmp985 = *(&local8);
frost$collections$Array** $tmp986 = &$tmp985->methods;
frost$collections$Array* $tmp987 = *$tmp986;
frost$collections$Array$add$frost$collections$Array$T($tmp987, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:149
frost$collections$HashMap** $tmp988 = &param0->classes;
frost$collections$HashMap* $tmp989 = *$tmp988;
org$frostlang$frostc$ClassDecl* $tmp990 = *(&local8);
frost$core$String** $tmp991 = &$tmp990->name;
frost$core$String* $tmp992 = *$tmp991;
org$frostlang$frostc$ClassDecl* $tmp993 = *(&local8);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp989, ((frost$collections$Key*) $tmp992), ((frost$core$Object*) $tmp993));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:150
org$frostlang$frostc$ClassDecl* $tmp994 = *(&local8);
frost$collections$Stack** $tmp995 = &param0->currentClass;
frost$collections$Stack* $tmp996 = *$tmp995;
frost$core$Int $tmp997 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Closure.frost:150:46
frost$core$Int $tmp998 = (frost$core$Int) {0u};
int64_t $tmp999 = $tmp997.value;
int64_t $tmp1000 = $tmp998.value;
bool $tmp1001 = $tmp999 >= $tmp1000;
frost$core$Bit $tmp1002 = (frost$core$Bit) {$tmp1001};
bool $tmp1003 = $tmp1002.value;
if ($tmp1003) goto block118; else goto block117;
block118:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp1004 = &$tmp996->contents;
frost$collections$Array* $tmp1005 = *$tmp1004;
ITable* $tmp1006 = ((frost$collections$CollectionView*) $tmp1005)->$class->itable;
while ($tmp1006->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1006 = $tmp1006->next;
}
$fn1008 $tmp1007 = $tmp1006->methods[0];
frost$core$Int $tmp1009 = $tmp1007(((frost$collections$CollectionView*) $tmp1005));
int64_t $tmp1010 = $tmp997.value;
int64_t $tmp1011 = $tmp1009.value;
bool $tmp1012 = $tmp1010 < $tmp1011;
frost$core$Bit $tmp1013 = (frost$core$Bit) {$tmp1012};
bool $tmp1014 = $tmp1013.value;
if ($tmp1014) goto block116; else goto block117;
block117:;
frost$core$Int $tmp1015 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1016, $tmp1015, &$s1017);
abort(); // unreachable
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp1018 = &$tmp996->contents;
frost$collections$Array* $tmp1019 = *$tmp1018;
ITable* $tmp1020 = ((frost$collections$CollectionView*) $tmp1019)->$class->itable;
while ($tmp1020->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1020 = $tmp1020->next;
}
$fn1022 $tmp1021 = $tmp1020->methods[0];
frost$core$Int $tmp1023 = $tmp1021(((frost$collections$CollectionView*) $tmp1019));
int64_t $tmp1024 = $tmp1023.value;
int64_t $tmp1025 = $tmp997.value;
bool $tmp1026 = $tmp1024 > $tmp1025;
frost$core$Bit $tmp1027 = (frost$core$Bit) {$tmp1026};
bool $tmp1028 = $tmp1027.value;
if ($tmp1028) goto block120; else goto block121;
block121:;
frost$core$Int $tmp1029 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1030, $tmp1029);
abort(); // unreachable
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp1031 = &$tmp996->contents;
frost$collections$Array* $tmp1032 = *$tmp1031;
frost$collections$Array** $tmp1033 = &$tmp996->contents;
frost$collections$Array* $tmp1034 = *$tmp1033;
ITable* $tmp1035 = ((frost$collections$CollectionView*) $tmp1034)->$class->itable;
while ($tmp1035->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1035 = $tmp1035->next;
}
$fn1037 $tmp1036 = $tmp1035->methods[0];
frost$core$Int $tmp1038 = $tmp1036(((frost$collections$CollectionView*) $tmp1034));
frost$core$Int $tmp1039 = (frost$core$Int) {1u};
int64_t $tmp1040 = $tmp1038.value;
int64_t $tmp1041 = $tmp1039.value;
int64_t $tmp1042 = $tmp1040 - $tmp1041;
frost$core$Int $tmp1043 = (frost$core$Int) {$tmp1042};
int64_t $tmp1044 = $tmp1043.value;
int64_t $tmp1045 = $tmp997.value;
int64_t $tmp1046 = $tmp1044 - $tmp1045;
frost$core$Int $tmp1047 = (frost$core$Int) {$tmp1046};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp1048 = (frost$core$Int) {0u};
int64_t $tmp1049 = $tmp1047.value;
int64_t $tmp1050 = $tmp1048.value;
bool $tmp1051 = $tmp1049 >= $tmp1050;
frost$core$Bit $tmp1052 = (frost$core$Bit) {$tmp1051};
bool $tmp1053 = $tmp1052.value;
if ($tmp1053) goto block125; else goto block124;
block125:;
ITable* $tmp1054 = ((frost$collections$CollectionView*) $tmp1032)->$class->itable;
while ($tmp1054->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1054 = $tmp1054->next;
}
$fn1056 $tmp1055 = $tmp1054->methods[0];
frost$core$Int $tmp1057 = $tmp1055(((frost$collections$CollectionView*) $tmp1032));
int64_t $tmp1058 = $tmp1047.value;
int64_t $tmp1059 = $tmp1057.value;
bool $tmp1060 = $tmp1058 < $tmp1059;
frost$core$Bit $tmp1061 = (frost$core$Bit) {$tmp1060};
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block123; else goto block124;
block124:;
frost$core$Int $tmp1063 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1064, $tmp1063, &$s1065);
abort(); // unreachable
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1066 = &$tmp1032->data;
frost$core$Object** $tmp1067 = *$tmp1066;
frost$core$Int64 $tmp1068 = frost$core$Int64$init$frost$core$Int($tmp1047);
int64_t $tmp1069 = $tmp1068.value;
frost$core$Object* $tmp1070 = $tmp1067[$tmp1069];
frost$core$Frost$ref$frost$core$Object$Q($tmp1070);
frost$core$Frost$ref$frost$core$Object$Q($tmp1070);
frost$core$Frost$unref$frost$core$Object$Q($tmp1070);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp1071 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp1071, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1070)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
frost$core$Weak** $tmp1072 = &$tmp994->owner;
frost$core$Weak* $tmp1073 = *$tmp1072;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
frost$core$Weak** $tmp1074 = &$tmp994->owner;
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
frost$core$Int local2;
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
frost$core$Int $tmp1086 = (frost$core$Int) {0u};
ITable* $tmp1087 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp1087->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1087 = $tmp1087->next;
}
$fn1089 $tmp1088 = $tmp1087->methods[0];
frost$core$Int $tmp1090 = $tmp1088(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp1091 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1092 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1086, $tmp1090, $tmp1091);
frost$core$Int $tmp1093 = $tmp1092.min;
*(&local2) = $tmp1093;
frost$core$Int $tmp1094 = $tmp1092.max;
frost$core$Bit $tmp1095 = $tmp1092.inclusive;
bool $tmp1096 = $tmp1095.value;
frost$core$Int $tmp1097 = (frost$core$Int) {1u};
if ($tmp1096) goto block4; else goto block5;
block4:;
int64_t $tmp1098 = $tmp1093.value;
int64_t $tmp1099 = $tmp1094.value;
bool $tmp1100 = $tmp1098 <= $tmp1099;
frost$core$Bit $tmp1101 = (frost$core$Bit) {$tmp1100};
bool $tmp1102 = $tmp1101.value;
if ($tmp1102) goto block1; else goto block2;
block5:;
int64_t $tmp1103 = $tmp1093.value;
int64_t $tmp1104 = $tmp1094.value;
bool $tmp1105 = $tmp1103 < $tmp1104;
frost$core$Bit $tmp1106 = (frost$core$Bit) {$tmp1105};
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:160
frost$core$Int $tmp1108 = *(&local2);
ITable* $tmp1109 = param1->$class->itable;
while ($tmp1109->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1109 = $tmp1109->next;
}
$fn1111 $tmp1110 = $tmp1109->methods[0];
frost$core$Object* $tmp1112 = $tmp1110(param1, $tmp1108);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1112)));
org$frostlang$frostc$ASTNode* $tmp1113 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp1112);
frost$core$Frost$unref$frost$core$Object$Q($tmp1112);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:161
org$frostlang$frostc$ASTNode* $tmp1114 = *(&local3);
frost$core$Int* $tmp1115 = &$tmp1114->$rawValue;
frost$core$Int $tmp1116 = *$tmp1115;
frost$core$Int $tmp1117 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:162:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1118 = $tmp1116.value;
int64_t $tmp1119 = $tmp1117.value;
bool $tmp1120 = $tmp1118 == $tmp1119;
frost$core$Bit $tmp1121 = (frost$core$Bit) {$tmp1120};
bool $tmp1122 = $tmp1121.value;
if ($tmp1122) goto block7; else goto block6;
block7:;
org$frostlang$frostc$Position* $tmp1123 = (org$frostlang$frostc$Position*) ($tmp1114->$data + 0);
org$frostlang$frostc$Position $tmp1124 = *$tmp1123;
*(&local4) = $tmp1124;
frost$core$String** $tmp1125 = (frost$core$String**) ($tmp1114->$data + 24);
frost$core$String* $tmp1126 = *$tmp1125;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
frost$core$String* $tmp1127 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
*(&local5) = $tmp1126;
org$frostlang$frostc$ASTNode** $tmp1128 = (org$frostlang$frostc$ASTNode**) ($tmp1114->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1129 = *$tmp1128;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
org$frostlang$frostc$ASTNode* $tmp1130 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
*(&local6) = $tmp1129;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:163
org$frostlang$frostc$Scanner** $tmp1131 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1132 = *$tmp1131;
org$frostlang$frostc$ASTNode* $tmp1133 = *(&local6);
org$frostlang$frostc$Type* $tmp1134 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1132, $tmp1133);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
org$frostlang$frostc$Type* $tmp1135 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
*(&local7) = $tmp1134;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:164
org$frostlang$frostc$Type* $tmp1136 = *(&local7);
frost$core$Bit $tmp1137 = (frost$core$Bit) {$tmp1136 == NULL};
bool $tmp1138 = $tmp1137.value;
if ($tmp1138) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:165
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp1139 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1140 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1141 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1142 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1143 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1144 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:167
org$frostlang$frostc$Type* $tmp1145 = *(&local7);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from Closure.frost:167:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:965
frost$core$Bit $tmp1146 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp1147 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp1145, $tmp1146);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
org$frostlang$frostc$Type* $tmp1148 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
*(&local7) = $tmp1147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:168
org$frostlang$frostc$Type* $tmp1149 = *(&local7);
frost$core$Bit $tmp1150 = (frost$core$Bit) {$tmp1149 == NULL};
bool $tmp1151 = $tmp1150.value;
if ($tmp1151) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:169
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp1152 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1153 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1154 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1155 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1156 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1157 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:171
frost$collections$Array* $tmp1158 = *(&local1);
org$frostlang$frostc$Type* $tmp1159 = *(&local7);
frost$collections$Array$add$frost$collections$Array$T($tmp1158, ((frost$core$Object*) $tmp1159));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:172
org$frostlang$frostc$SymbolTable** $tmp1160 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1161 = *$tmp1160;
FROST_ASSERT(88 == sizeof(org$frostlang$frostc$Variable));
org$frostlang$frostc$Variable* $tmp1162 = (org$frostlang$frostc$Variable*) frostObjectAlloc(88, (frost$core$Class*) &org$frostlang$frostc$Variable$class);
org$frostlang$frostc$Position $tmp1163 = *(&local4);
frost$core$Int $tmp1164 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Variable.Kind from Closure.frost:172:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int* $tmp1165 = &(&local9)->$rawValue;
*$tmp1165 = $tmp1164;
org$frostlang$frostc$Variable$Kind $tmp1166 = *(&local9);
*(&local8) = $tmp1166;
org$frostlang$frostc$Variable$Kind $tmp1167 = *(&local8);
frost$core$String* $tmp1168 = *(&local5);
org$frostlang$frostc$Type* $tmp1169 = *(&local7);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Variable$Storage));
org$frostlang$frostc$Variable$Storage* $tmp1170 = (org$frostlang$frostc$Variable$Storage*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Variable$Storage$class);
frost$core$Int $tmp1171 = (frost$core$Int) {1u};
frost$core$Int $tmp1172 = (frost$core$Int) {18446744073709551615u};
org$frostlang$frostc$Variable$Storage$init$frost$core$Int$frost$core$Int($tmp1170, $tmp1171, $tmp1172);
org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage($tmp1162, $tmp1163, $tmp1167, $tmp1168, $tmp1169, $tmp1170);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:172:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp1173 = &((org$frostlang$frostc$Symbol*) $tmp1162)->name;
frost$core$String* $tmp1174 = *$tmp1173;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp1161, ((org$frostlang$frostc$Symbol*) $tmp1162), $tmp1174);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
org$frostlang$frostc$Type* $tmp1175 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1176 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1177 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
*(&local5) = ((frost$core$String*) NULL);
goto block6;
block6:;
org$frostlang$frostc$ASTNode* $tmp1178 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Int $tmp1179 = *(&local2);
int64_t $tmp1180 = $tmp1094.value;
int64_t $tmp1181 = $tmp1179.value;
int64_t $tmp1182 = $tmp1180 - $tmp1181;
frost$core$Int $tmp1183 = (frost$core$Int) {$tmp1182};
if ($tmp1096) goto block17; else goto block18;
block17:;
int64_t $tmp1184 = $tmp1183.value;
int64_t $tmp1185 = $tmp1097.value;
bool $tmp1186 = $tmp1184 >= $tmp1185;
frost$core$Bit $tmp1187 = (frost$core$Bit) {$tmp1186};
bool $tmp1188 = $tmp1187.value;
if ($tmp1188) goto block16; else goto block2;
block18:;
int64_t $tmp1189 = $tmp1183.value;
int64_t $tmp1190 = $tmp1097.value;
bool $tmp1191 = $tmp1189 > $tmp1190;
frost$core$Bit $tmp1192 = (frost$core$Bit) {$tmp1191};
bool $tmp1193 = $tmp1192.value;
if ($tmp1193) goto block16; else goto block2;
block16:;
int64_t $tmp1194 = $tmp1179.value;
int64_t $tmp1195 = $tmp1097.value;
int64_t $tmp1196 = $tmp1194 + $tmp1195;
frost$core$Int $tmp1197 = (frost$core$Int) {$tmp1196};
*(&local2) = $tmp1197;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:177
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:178
frost$core$Int* $tmp1198 = &param3->$rawValue;
frost$core$Int $tmp1199 = *$tmp1198;
frost$core$Int $tmp1200 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:179:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1201 = $tmp1199.value;
int64_t $tmp1202 = $tmp1200.value;
bool $tmp1203 = $tmp1201 == $tmp1202;
frost$core$Bit $tmp1204 = (frost$core$Bit) {$tmp1203};
bool $tmp1205 = $tmp1204.value;
if ($tmp1205) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Type** $tmp1206 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp1207 = *$tmp1206;
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
org$frostlang$frostc$Type* $tmp1208 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
*(&local11) = $tmp1207;
frost$core$Bit* $tmp1209 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp1210 = *$tmp1209;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:180
org$frostlang$frostc$Type* $tmp1211 = *(&local11);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:180:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1212 = &$tmp1211->typeKind;
org$frostlang$frostc$Type$Kind $tmp1213 = *$tmp1212;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1214;
$tmp1214 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1214->value = $tmp1213;
frost$core$Int $tmp1215 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1216 = &(&local14)->$rawValue;
*$tmp1216 = $tmp1215;
org$frostlang$frostc$Type$Kind $tmp1217 = *(&local14);
*(&local13) = $tmp1217;
org$frostlang$frostc$Type$Kind $tmp1218 = *(&local13);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1219;
$tmp1219 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1219->value = $tmp1218;
ITable* $tmp1220 = ((frost$core$Equatable*) $tmp1214)->$class->itable;
while ($tmp1220->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1220 = $tmp1220->next;
}
$fn1222 $tmp1221 = $tmp1220->methods[1];
frost$core$Bit $tmp1223 = $tmp1221(((frost$core$Equatable*) $tmp1214), ((frost$core$Equatable*) $tmp1219));
bool $tmp1224 = $tmp1223.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1219)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1214)));
if ($tmp1224) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
*(&local12) = $tmp1211;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
goto block25;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1225 = &$tmp1211->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1226 = *$tmp1225;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
frost$core$Int $tmp1227 = (frost$core$Int) {0u};
frost$core$Object* $tmp1228 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1226, $tmp1227);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1228)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1228);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp1228);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1228)));
goto block25;
block25:;
org$frostlang$frostc$Type* $tmp1229 = *(&local12);
// begin inline call to function org.frostlang.frostc.Type.get_isMethod():frost.core.Bit from Closure.frost:180:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:377
org$frostlang$frostc$Type$Kind* $tmp1230 = &$tmp1229->typeKind;
org$frostlang$frostc$Type$Kind $tmp1231 = *$tmp1230;
frost$core$Int $tmp1232 = $tmp1231.$rawValue;
frost$core$Int $tmp1233 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1234 = $tmp1232.value;
int64_t $tmp1235 = $tmp1233.value;
bool $tmp1236 = $tmp1234 == $tmp1235;
frost$core$Bit $tmp1237 = (frost$core$Bit) {$tmp1236};
bool $tmp1238 = $tmp1237.value;
if ($tmp1238) goto block32; else goto block33;
block33:;
frost$core$Int $tmp1239 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1240 = $tmp1232.value;
int64_t $tmp1241 = $tmp1239.value;
bool $tmp1242 = $tmp1240 == $tmp1241;
frost$core$Bit $tmp1243 = (frost$core$Bit) {$tmp1242};
bool $tmp1244 = $tmp1243.value;
if ($tmp1244) goto block32; else goto block35;
block35:;
frost$core$Int $tmp1245 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1246 = $tmp1232.value;
int64_t $tmp1247 = $tmp1245.value;
bool $tmp1248 = $tmp1246 == $tmp1247;
frost$core$Bit $tmp1249 = (frost$core$Bit) {$tmp1248};
bool $tmp1250 = $tmp1249.value;
if ($tmp1250) goto block32; else goto block37;
block37:;
frost$core$Int $tmp1251 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1252 = $tmp1232.value;
int64_t $tmp1253 = $tmp1251.value;
bool $tmp1254 = $tmp1252 == $tmp1253;
frost$core$Bit $tmp1255 = (frost$core$Bit) {$tmp1254};
bool $tmp1256 = $tmp1255.value;
if ($tmp1256) goto block32; else goto block39;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:379
frost$core$Bit $tmp1257 = (frost$core$Bit) {true};
*(&local15) = $tmp1257;
goto block30;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:382
frost$core$Bit $tmp1258 = (frost$core$Bit) {false};
*(&local15) = $tmp1258;
goto block30;
block31:;
goto block30;
block30:;
frost$core$Bit $tmp1259 = *(&local15);
bool $tmp1260 = $tmp1259.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
if ($tmp1260) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:181
org$frostlang$frostc$Type* $tmp1261 = *(&local11);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:181:36
org$frostlang$frostc$Type$Kind* $tmp1262 = &$tmp1261->typeKind;
org$frostlang$frostc$Type$Kind $tmp1263 = *$tmp1262;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1264;
$tmp1264 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1264->value = $tmp1263;
frost$core$Int $tmp1265 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1266 = &(&local17)->$rawValue;
*$tmp1266 = $tmp1265;
org$frostlang$frostc$Type$Kind $tmp1267 = *(&local17);
*(&local16) = $tmp1267;
org$frostlang$frostc$Type$Kind $tmp1268 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1269;
$tmp1269 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1269->value = $tmp1268;
ITable* $tmp1270 = ((frost$core$Equatable*) $tmp1264)->$class->itable;
while ($tmp1270->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1270 = $tmp1270->next;
}
$fn1272 $tmp1271 = $tmp1270->methods[0];
frost$core$Bit $tmp1273 = $tmp1271(((frost$core$Equatable*) $tmp1264), ((frost$core$Equatable*) $tmp1269));
bool $tmp1274 = $tmp1273.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1269)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1264)));
if ($tmp1274) goto block42; else goto block46;
block46:;
org$frostlang$frostc$Type$Kind* $tmp1275 = &$tmp1261->typeKind;
org$frostlang$frostc$Type$Kind $tmp1276 = *$tmp1275;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1277;
$tmp1277 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1277->value = $tmp1276;
frost$core$Int $tmp1278 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1279 = &(&local19)->$rawValue;
*$tmp1279 = $tmp1278;
org$frostlang$frostc$Type$Kind $tmp1280 = *(&local19);
*(&local18) = $tmp1280;
org$frostlang$frostc$Type$Kind $tmp1281 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1282;
$tmp1282 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1282->value = $tmp1281;
ITable* $tmp1283 = ((frost$core$Equatable*) $tmp1277)->$class->itable;
while ($tmp1283->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1283 = $tmp1283->next;
}
$fn1285 $tmp1284 = $tmp1283->methods[0];
frost$core$Bit $tmp1286 = $tmp1284(((frost$core$Equatable*) $tmp1277), ((frost$core$Equatable*) $tmp1282));
bool $tmp1287 = $tmp1286.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1282)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1277)));
if ($tmp1287) goto block42; else goto block45;
block45:;
org$frostlang$frostc$Type$Kind* $tmp1288 = &$tmp1261->typeKind;
org$frostlang$frostc$Type$Kind $tmp1289 = *$tmp1288;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1290;
$tmp1290 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1290->value = $tmp1289;
frost$core$Int $tmp1291 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1292 = &(&local21)->$rawValue;
*$tmp1292 = $tmp1291;
org$frostlang$frostc$Type$Kind $tmp1293 = *(&local21);
*(&local20) = $tmp1293;
org$frostlang$frostc$Type$Kind $tmp1294 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1295;
$tmp1295 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1295->value = $tmp1294;
ITable* $tmp1296 = ((frost$core$Equatable*) $tmp1290)->$class->itable;
while ($tmp1296->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1296 = $tmp1296->next;
}
$fn1298 $tmp1297 = $tmp1296->methods[0];
frost$core$Bit $tmp1299 = $tmp1297(((frost$core$Equatable*) $tmp1290), ((frost$core$Equatable*) $tmp1295));
bool $tmp1300 = $tmp1299.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1295)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1290)));
if ($tmp1300) goto block42; else goto block44;
block44:;
org$frostlang$frostc$Type$Kind* $tmp1301 = &$tmp1261->typeKind;
org$frostlang$frostc$Type$Kind $tmp1302 = *$tmp1301;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1303;
$tmp1303 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1303->value = $tmp1302;
frost$core$Int $tmp1304 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1305 = &(&local23)->$rawValue;
*$tmp1305 = $tmp1304;
org$frostlang$frostc$Type$Kind $tmp1306 = *(&local23);
*(&local22) = $tmp1306;
org$frostlang$frostc$Type$Kind $tmp1307 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1308;
$tmp1308 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1308->value = $tmp1307;
ITable* $tmp1309 = ((frost$core$Equatable*) $tmp1303)->$class->itable;
while ($tmp1309->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1309 = $tmp1309->next;
}
$fn1311 $tmp1310 = $tmp1309->methods[0];
frost$core$Bit $tmp1312 = $tmp1310(((frost$core$Equatable*) $tmp1303), ((frost$core$Equatable*) $tmp1308));
bool $tmp1313 = $tmp1312.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1308)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1303)));
if ($tmp1313) goto block42; else goto block43;
block43:;
frost$core$Int $tmp1314 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1315, $tmp1314, &$s1316);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1317 = &$tmp1261->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1318 = *$tmp1317;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
ITable* $tmp1319 = ((frost$collections$ListView*) $tmp1318)->$class->itable;
while ($tmp1319->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1319 = $tmp1319->next;
}
$fn1321 $tmp1320 = $tmp1319->methods[5];
frost$core$Object* $tmp1322 = $tmp1320(((frost$collections$ListView*) $tmp1318));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1322)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1322);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1322)));
org$frostlang$frostc$Type* $tmp1323 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
*(&local24) = ((org$frostlang$frostc$Type*) $tmp1322);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1322)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:185
frost$collections$HashMap** $tmp1324 = &param0->binaryTypes;
frost$collections$HashMap* $tmp1325 = *$tmp1324;
*(&local25) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
frost$collections$HashMap* $tmp1326 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
*(&local25) = $tmp1325;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:186
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp1327 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp1327);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$collections$HashMap** $tmp1328 = &param0->binaryTypes;
frost$collections$HashMap* $tmp1329 = *$tmp1328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
frost$collections$HashMap** $tmp1330 = &param0->binaryTypes;
*$tmp1330 = $tmp1327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:187
org$frostlang$frostc$Type* $tmp1331 = *(&local24);
org$frostlang$frostc$Pair* $tmp1332 = org$frostlang$frostc$Compiler$computeCoercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, param2, $tmp1331);
*(&local26) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
org$frostlang$frostc$Pair* $tmp1333 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
*(&local26) = $tmp1332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:188
frost$collections$HashMap* $tmp1334 = *(&local25);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
frost$collections$HashMap** $tmp1335 = &param0->binaryTypes;
frost$collections$HashMap* $tmp1336 = *$tmp1335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
frost$collections$HashMap** $tmp1337 = &param0->binaryTypes;
*$tmp1337 = $tmp1334;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:189
org$frostlang$frostc$Pair* $tmp1338 = *(&local26);
frost$core$Bit $tmp1339 = (frost$core$Bit) {$tmp1338 == NULL};
bool $tmp1340 = $tmp1339.value;
if ($tmp1340) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:190
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Pair* $tmp1341 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
*(&local26) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp1342 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local25) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp1343 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1344 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1345 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1346 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1347 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1348 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:192
org$frostlang$frostc$Pair* $tmp1349 = *(&local26);
frost$core$Object** $tmp1350 = &$tmp1349->first;
frost$core$Object* $tmp1351 = *$tmp1350;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1351)));
org$frostlang$frostc$Type* $tmp1352 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
*(&local10) = ((org$frostlang$frostc$Type*) $tmp1351);
org$frostlang$frostc$Pair* $tmp1353 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
*(&local26) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp1354 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
*(&local25) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp1355 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
goto block24;
block24:;
org$frostlang$frostc$Type* $tmp1356 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1357 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
goto block19;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:196
org$frostlang$frostc$Type* $tmp1358 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
org$frostlang$frostc$Type* $tmp1359 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
*(&local10) = $tmp1358;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:199
org$frostlang$frostc$Type* $tmp1360 = *(&local10);
frost$core$Bit $tmp1361 = (frost$core$Bit) {$tmp1360 == NULL};
bool $tmp1362 = $tmp1361.value;
if ($tmp1362) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp1363 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1364 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1365 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:202
org$frostlang$frostc$Position $tmp1366 = org$frostlang$frostc$Position$init();
frost$core$Int $tmp1367 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Closure.frost:202:63
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1368 = &(&local28)->$rawValue;
*$tmp1368 = $tmp1367;
org$frostlang$frostc$Type$Kind $tmp1369 = *(&local28);
*(&local27) = $tmp1369;
org$frostlang$frostc$Type$Kind $tmp1370 = *(&local27);
frost$collections$Array* $tmp1371 = *(&local1);
org$frostlang$frostc$Type* $tmp1372 = *(&local10);
frost$core$Int $tmp1373 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp1374 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param0, $tmp1366, $tmp1370, ((frost$collections$ListView*) $tmp1371), $tmp1372, $tmp1373);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
org$frostlang$frostc$Type* $tmp1375 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1376 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1377 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return $tmp1374;

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
org$frostlang$frostc$Type* $tmp1378 = org$frostlang$frostc$expression$Closure$typedLambdaType$org$frostlang$frostc$Compiler$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Type$Q(param0, ((frost$collections$ListView*) param2), param3, param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
org$frostlang$frostc$Type* $tmp1379 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
*(&local1) = $tmp1378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:212
org$frostlang$frostc$Type* $tmp1380 = *(&local1);
frost$core$Bit $tmp1381 = (frost$core$Bit) {$tmp1380 != NULL};
bool $tmp1382 = $tmp1381.value;
if ($tmp1382) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:213
org$frostlang$frostc$Type* $tmp1383 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:213:37
org$frostlang$frostc$Type$Kind* $tmp1384 = &$tmp1383->typeKind;
org$frostlang$frostc$Type$Kind $tmp1385 = *$tmp1384;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1386;
$tmp1386 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1386->value = $tmp1385;
frost$core$Int $tmp1387 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1388 = &(&local3)->$rawValue;
*$tmp1388 = $tmp1387;
org$frostlang$frostc$Type$Kind $tmp1389 = *(&local3);
*(&local2) = $tmp1389;
org$frostlang$frostc$Type$Kind $tmp1390 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1391;
$tmp1391 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1391->value = $tmp1390;
ITable* $tmp1392 = ((frost$core$Equatable*) $tmp1386)->$class->itable;
while ($tmp1392->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1392 = $tmp1392->next;
}
$fn1394 $tmp1393 = $tmp1392->methods[0];
frost$core$Bit $tmp1395 = $tmp1393(((frost$core$Equatable*) $tmp1386), ((frost$core$Equatable*) $tmp1391));
bool $tmp1396 = $tmp1395.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1391)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1386)));
if ($tmp1396) goto block5; else goto block9;
block9:;
org$frostlang$frostc$Type$Kind* $tmp1397 = &$tmp1383->typeKind;
org$frostlang$frostc$Type$Kind $tmp1398 = *$tmp1397;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1399;
$tmp1399 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1399->value = $tmp1398;
frost$core$Int $tmp1400 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1401 = &(&local5)->$rawValue;
*$tmp1401 = $tmp1400;
org$frostlang$frostc$Type$Kind $tmp1402 = *(&local5);
*(&local4) = $tmp1402;
org$frostlang$frostc$Type$Kind $tmp1403 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1404;
$tmp1404 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1404->value = $tmp1403;
ITable* $tmp1405 = ((frost$core$Equatable*) $tmp1399)->$class->itable;
while ($tmp1405->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1405 = $tmp1405->next;
}
$fn1407 $tmp1406 = $tmp1405->methods[0];
frost$core$Bit $tmp1408 = $tmp1406(((frost$core$Equatable*) $tmp1399), ((frost$core$Equatable*) $tmp1404));
bool $tmp1409 = $tmp1408.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1404)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1399)));
if ($tmp1409) goto block5; else goto block8;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1410 = &$tmp1383->typeKind;
org$frostlang$frostc$Type$Kind $tmp1411 = *$tmp1410;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1412;
$tmp1412 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1412->value = $tmp1411;
frost$core$Int $tmp1413 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1414 = &(&local7)->$rawValue;
*$tmp1414 = $tmp1413;
org$frostlang$frostc$Type$Kind $tmp1415 = *(&local7);
*(&local6) = $tmp1415;
org$frostlang$frostc$Type$Kind $tmp1416 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1417;
$tmp1417 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1417->value = $tmp1416;
ITable* $tmp1418 = ((frost$core$Equatable*) $tmp1412)->$class->itable;
while ($tmp1418->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1418 = $tmp1418->next;
}
$fn1420 $tmp1419 = $tmp1418->methods[0];
frost$core$Bit $tmp1421 = $tmp1419(((frost$core$Equatable*) $tmp1412), ((frost$core$Equatable*) $tmp1417));
bool $tmp1422 = $tmp1421.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1417)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1412)));
if ($tmp1422) goto block5; else goto block7;
block7:;
org$frostlang$frostc$Type$Kind* $tmp1423 = &$tmp1383->typeKind;
org$frostlang$frostc$Type$Kind $tmp1424 = *$tmp1423;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1425;
$tmp1425 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1425->value = $tmp1424;
frost$core$Int $tmp1426 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1427 = &(&local9)->$rawValue;
*$tmp1427 = $tmp1426;
org$frostlang$frostc$Type$Kind $tmp1428 = *(&local9);
*(&local8) = $tmp1428;
org$frostlang$frostc$Type$Kind $tmp1429 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1430;
$tmp1430 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1430->value = $tmp1429;
ITable* $tmp1431 = ((frost$core$Equatable*) $tmp1425)->$class->itable;
while ($tmp1431->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1431 = $tmp1431->next;
}
$fn1433 $tmp1432 = $tmp1431->methods[0];
frost$core$Bit $tmp1434 = $tmp1432(((frost$core$Equatable*) $tmp1425), ((frost$core$Equatable*) $tmp1430));
bool $tmp1435 = $tmp1434.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1430)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1425)));
if ($tmp1435) goto block5; else goto block6;
block6:;
frost$core$Int $tmp1436 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1437, $tmp1436, &$s1438);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1439 = &$tmp1383->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1440 = *$tmp1439;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
ITable* $tmp1441 = ((frost$collections$ListView*) $tmp1440)->$class->itable;
while ($tmp1441->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1441 = $tmp1441->next;
}
$fn1443 $tmp1442 = $tmp1441->methods[5];
frost$core$Object* $tmp1444 = $tmp1442(((frost$collections$ListView*) $tmp1440));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1444)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1444);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1444)));
org$frostlang$frostc$Type* $tmp1445 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1444);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1444)));
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:218
org$frostlang$frostc$Type** $tmp1446 = &param0->ANY_TYPE;
org$frostlang$frostc$Type* $tmp1447 = *$tmp1446;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
org$frostlang$frostc$Type* $tmp1448 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
*(&local0) = $tmp1447;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:219
frost$core$Int* $tmp1449 = &param4->$rawValue;
frost$core$Int $tmp1450 = *$tmp1449;
frost$core$Int $tmp1451 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:220:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1452 = $tmp1450.value;
int64_t $tmp1453 = $tmp1451.value;
bool $tmp1454 = $tmp1452 == $tmp1453;
frost$core$Bit $tmp1455 = (frost$core$Bit) {$tmp1454};
bool $tmp1456 = $tmp1455.value;
if ($tmp1456) goto block16; else goto block15;
block16:;
org$frostlang$frostc$Type** $tmp1457 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp1458 = *$tmp1457;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
org$frostlang$frostc$Type* $tmp1459 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
*(&local10) = $tmp1458;
frost$core$Bit* $tmp1460 = (frost$core$Bit*) (param4->$data + 8);
frost$core$Bit $tmp1461 = *$tmp1460;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:221
org$frostlang$frostc$Type* $tmp1462 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:221:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1463 = &$tmp1462->typeKind;
org$frostlang$frostc$Type$Kind $tmp1464 = *$tmp1463;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1465;
$tmp1465 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1465->value = $tmp1464;
frost$core$Int $tmp1466 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1467 = &(&local13)->$rawValue;
*$tmp1467 = $tmp1466;
org$frostlang$frostc$Type$Kind $tmp1468 = *(&local13);
*(&local12) = $tmp1468;
org$frostlang$frostc$Type$Kind $tmp1469 = *(&local12);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1470;
$tmp1470 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1470->value = $tmp1469;
ITable* $tmp1471 = ((frost$core$Equatable*) $tmp1465)->$class->itable;
while ($tmp1471->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1471 = $tmp1471->next;
}
$fn1473 $tmp1472 = $tmp1471->methods[1];
frost$core$Bit $tmp1474 = $tmp1472(((frost$core$Equatable*) $tmp1465), ((frost$core$Equatable*) $tmp1470));
bool $tmp1475 = $tmp1474.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1470)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1465)));
if ($tmp1475) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
*(&local11) = $tmp1462;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
goto block20;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1476 = &$tmp1462->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1477 = *$tmp1476;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
frost$core$Int $tmp1478 = (frost$core$Int) {0u};
frost$core$Object* $tmp1479 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1477, $tmp1478);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1479)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1479);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
*(&local11) = ((org$frostlang$frostc$Type*) $tmp1479);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1479)));
goto block20;
block20:;
org$frostlang$frostc$Type* $tmp1480 = *(&local11);
// begin inline call to function org.frostlang.frostc.Type.get_isMethod():frost.core.Bit from Closure.frost:221:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:377
org$frostlang$frostc$Type$Kind* $tmp1481 = &$tmp1480->typeKind;
org$frostlang$frostc$Type$Kind $tmp1482 = *$tmp1481;
frost$core$Int $tmp1483 = $tmp1482.$rawValue;
frost$core$Int $tmp1484 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1485 = $tmp1483.value;
int64_t $tmp1486 = $tmp1484.value;
bool $tmp1487 = $tmp1485 == $tmp1486;
frost$core$Bit $tmp1488 = (frost$core$Bit) {$tmp1487};
bool $tmp1489 = $tmp1488.value;
if ($tmp1489) goto block27; else goto block28;
block28:;
frost$core$Int $tmp1490 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1491 = $tmp1483.value;
int64_t $tmp1492 = $tmp1490.value;
bool $tmp1493 = $tmp1491 == $tmp1492;
frost$core$Bit $tmp1494 = (frost$core$Bit) {$tmp1493};
bool $tmp1495 = $tmp1494.value;
if ($tmp1495) goto block27; else goto block30;
block30:;
frost$core$Int $tmp1496 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1497 = $tmp1483.value;
int64_t $tmp1498 = $tmp1496.value;
bool $tmp1499 = $tmp1497 == $tmp1498;
frost$core$Bit $tmp1500 = (frost$core$Bit) {$tmp1499};
bool $tmp1501 = $tmp1500.value;
if ($tmp1501) goto block27; else goto block32;
block32:;
frost$core$Int $tmp1502 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1503 = $tmp1483.value;
int64_t $tmp1504 = $tmp1502.value;
bool $tmp1505 = $tmp1503 == $tmp1504;
frost$core$Bit $tmp1506 = (frost$core$Bit) {$tmp1505};
bool $tmp1507 = $tmp1506.value;
if ($tmp1507) goto block27; else goto block34;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:379
frost$core$Bit $tmp1508 = (frost$core$Bit) {true};
*(&local14) = $tmp1508;
goto block25;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:382
frost$core$Bit $tmp1509 = (frost$core$Bit) {false};
*(&local14) = $tmp1509;
goto block25;
block26:;
goto block25;
block25:;
frost$core$Bit $tmp1510 = *(&local14);
bool $tmp1511 = $tmp1510.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
if ($tmp1511) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:222
org$frostlang$frostc$Type* $tmp1512 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:222:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1513 = &$tmp1512->typeKind;
org$frostlang$frostc$Type$Kind $tmp1514 = *$tmp1513;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1515;
$tmp1515 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1515->value = $tmp1514;
frost$core$Int $tmp1516 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1517 = &(&local17)->$rawValue;
*$tmp1517 = $tmp1516;
org$frostlang$frostc$Type$Kind $tmp1518 = *(&local17);
*(&local16) = $tmp1518;
org$frostlang$frostc$Type$Kind $tmp1519 = *(&local16);
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
if ($tmp1525) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
*(&local15) = $tmp1512;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
goto block36;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1526 = &$tmp1512->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1527 = *$tmp1526;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
frost$core$Int $tmp1528 = (frost$core$Int) {0u};
frost$core$Object* $tmp1529 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1527, $tmp1528);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1529)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1529);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
*(&local15) = ((org$frostlang$frostc$Type*) $tmp1529);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1529)));
goto block36;
block36:;
org$frostlang$frostc$Type* $tmp1530 = *(&local15);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:222:54
org$frostlang$frostc$Type$Kind* $tmp1531 = &$tmp1530->typeKind;
org$frostlang$frostc$Type$Kind $tmp1532 = *$tmp1531;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1533;
$tmp1533 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1533->value = $tmp1532;
frost$core$Int $tmp1534 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1535 = &(&local19)->$rawValue;
*$tmp1535 = $tmp1534;
org$frostlang$frostc$Type$Kind $tmp1536 = *(&local19);
*(&local18) = $tmp1536;
org$frostlang$frostc$Type$Kind $tmp1537 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1538;
$tmp1538 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1538->value = $tmp1537;
ITable* $tmp1539 = ((frost$core$Equatable*) $tmp1533)->$class->itable;
while ($tmp1539->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1539 = $tmp1539->next;
}
$fn1541 $tmp1540 = $tmp1539->methods[0];
frost$core$Bit $tmp1542 = $tmp1540(((frost$core$Equatable*) $tmp1533), ((frost$core$Equatable*) $tmp1538));
bool $tmp1543 = $tmp1542.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1538)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1533)));
if ($tmp1543) goto block42; else goto block46;
block46:;
org$frostlang$frostc$Type$Kind* $tmp1544 = &$tmp1530->typeKind;
org$frostlang$frostc$Type$Kind $tmp1545 = *$tmp1544;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1546;
$tmp1546 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1546->value = $tmp1545;
frost$core$Int $tmp1547 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1548 = &(&local21)->$rawValue;
*$tmp1548 = $tmp1547;
org$frostlang$frostc$Type$Kind $tmp1549 = *(&local21);
*(&local20) = $tmp1549;
org$frostlang$frostc$Type$Kind $tmp1550 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1551;
$tmp1551 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1551->value = $tmp1550;
ITable* $tmp1552 = ((frost$core$Equatable*) $tmp1546)->$class->itable;
while ($tmp1552->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1552 = $tmp1552->next;
}
$fn1554 $tmp1553 = $tmp1552->methods[0];
frost$core$Bit $tmp1555 = $tmp1553(((frost$core$Equatable*) $tmp1546), ((frost$core$Equatable*) $tmp1551));
bool $tmp1556 = $tmp1555.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1551)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1546)));
if ($tmp1556) goto block42; else goto block45;
block45:;
org$frostlang$frostc$Type$Kind* $tmp1557 = &$tmp1530->typeKind;
org$frostlang$frostc$Type$Kind $tmp1558 = *$tmp1557;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1559;
$tmp1559 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1559->value = $tmp1558;
frost$core$Int $tmp1560 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1561 = &(&local23)->$rawValue;
*$tmp1561 = $tmp1560;
org$frostlang$frostc$Type$Kind $tmp1562 = *(&local23);
*(&local22) = $tmp1562;
org$frostlang$frostc$Type$Kind $tmp1563 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1564;
$tmp1564 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1564->value = $tmp1563;
ITable* $tmp1565 = ((frost$core$Equatable*) $tmp1559)->$class->itable;
while ($tmp1565->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1565 = $tmp1565->next;
}
$fn1567 $tmp1566 = $tmp1565->methods[0];
frost$core$Bit $tmp1568 = $tmp1566(((frost$core$Equatable*) $tmp1559), ((frost$core$Equatable*) $tmp1564));
bool $tmp1569 = $tmp1568.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1564)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1559)));
if ($tmp1569) goto block42; else goto block44;
block44:;
org$frostlang$frostc$Type$Kind* $tmp1570 = &$tmp1530->typeKind;
org$frostlang$frostc$Type$Kind $tmp1571 = *$tmp1570;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1572;
$tmp1572 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1572->value = $tmp1571;
frost$core$Int $tmp1573 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1574 = &(&local25)->$rawValue;
*$tmp1574 = $tmp1573;
org$frostlang$frostc$Type$Kind $tmp1575 = *(&local25);
*(&local24) = $tmp1575;
org$frostlang$frostc$Type$Kind $tmp1576 = *(&local24);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1577;
$tmp1577 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1577->value = $tmp1576;
ITable* $tmp1578 = ((frost$core$Equatable*) $tmp1572)->$class->itable;
while ($tmp1578->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1578 = $tmp1578->next;
}
$fn1580 $tmp1579 = $tmp1578->methods[0];
frost$core$Bit $tmp1581 = $tmp1579(((frost$core$Equatable*) $tmp1572), ((frost$core$Equatable*) $tmp1577));
bool $tmp1582 = $tmp1581.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1577)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1572)));
if ($tmp1582) goto block42; else goto block43;
block43:;
frost$core$Int $tmp1583 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1584, $tmp1583, &$s1585);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1586 = &$tmp1530->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1587 = *$tmp1586;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1587));
ITable* $tmp1588 = ((frost$collections$ListView*) $tmp1587)->$class->itable;
while ($tmp1588->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1588 = $tmp1588->next;
}
$fn1590 $tmp1589 = $tmp1588->methods[5];
frost$core$Object* $tmp1591 = $tmp1589(((frost$collections$ListView*) $tmp1587));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1591)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1591);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1587));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1591)));
org$frostlang$frostc$Type* $tmp1592 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1591);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1591)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
org$frostlang$frostc$Type* $tmp1593 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
goto block19;
block19:;
org$frostlang$frostc$Type* $tmp1594 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1595 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block15;
block15:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:227
frost$core$Int $tmp1596 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:227:59
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp1597 = &(&local27)->$rawValue;
*$tmp1597 = $tmp1596;
org$frostlang$frostc$MethodDecl$Kind $tmp1598 = *(&local27);
*(&local26) = $tmp1598;
org$frostlang$frostc$MethodDecl$Kind $tmp1599 = *(&local26);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1600 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1601 = (frost$core$Int) {26u};
org$frostlang$frostc$Type* $tmp1602 = *(&local0);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:228:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3685
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1603 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1604 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3685:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp1605 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp1606 = *$tmp1605;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1607 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1608 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1607, $tmp1608);
frost$collections$Array$add$frost$collections$Array$T($tmp1607, ((frost$core$Object*) $tmp1602));
org$frostlang$frostc$Type* $tmp1609 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1606, ((frost$collections$ListView*) $tmp1607));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1609));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1609));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp1603, $tmp1604, $tmp1602, $tmp1609);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1609));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1600, $tmp1601, param1, $tmp1603);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1610 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1611 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1610, $tmp1611);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1612 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1613 = (frost$core$Int) {38u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp1612, $tmp1613, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp1610, ((frost$core$Object*) $tmp1612));
org$frostlang$frostc$IR$Value* $tmp1614 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1599, param2, $tmp1600, ((org$frostlang$frostc$FixedArray*) $tmp1610), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
org$frostlang$frostc$Type* $tmp1615 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1615));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1616 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1614;

}
frost$core$Bit org$frostlang$frostc$expression$Closure$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:271
frost$core$String** $tmp1617 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1618 = *$tmp1617;
frost$core$String** $tmp1619 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp1620 = *$tmp1619;
frost$core$Bit $tmp1621 = frost$core$String$$GT$frost$core$String$R$frost$core$Bit($tmp1618, $tmp1620);
return $tmp1621;

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
frost$core$Int local15;
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
frost$core$Int* $tmp1622 = &param4->$rawValue;
frost$core$Int $tmp1623 = *$tmp1622;
frost$core$Int $tmp1624 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:237:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1625 = $tmp1623.value;
int64_t $tmp1626 = $tmp1624.value;
bool $tmp1627 = $tmp1625 == $tmp1626;
frost$core$Bit $tmp1628 = (frost$core$Bit) {$tmp1627};
bool $tmp1629 = $tmp1628.value;
if ($tmp1629) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Type** $tmp1630 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp1631 = *$tmp1630;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1631));
org$frostlang$frostc$Type* $tmp1632 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1632));
*(&local0) = $tmp1631;
frost$core$Bit* $tmp1633 = (frost$core$Bit*) (param4->$data + 8);
frost$core$Bit $tmp1634 = *$tmp1633;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:238
org$frostlang$frostc$Type* $tmp1635 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:238:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1636 = &$tmp1635->typeKind;
org$frostlang$frostc$Type$Kind $tmp1637 = *$tmp1636;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1638;
$tmp1638 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1638->value = $tmp1637;
frost$core$Int $tmp1639 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1640 = &(&local3)->$rawValue;
*$tmp1640 = $tmp1639;
org$frostlang$frostc$Type$Kind $tmp1641 = *(&local3);
*(&local2) = $tmp1641;
org$frostlang$frostc$Type$Kind $tmp1642 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1643;
$tmp1643 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1643->value = $tmp1642;
ITable* $tmp1644 = ((frost$core$Equatable*) $tmp1638)->$class->itable;
while ($tmp1644->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1644 = $tmp1644->next;
}
$fn1646 $tmp1645 = $tmp1644->methods[1];
frost$core$Bit $tmp1647 = $tmp1645(((frost$core$Equatable*) $tmp1638), ((frost$core$Equatable*) $tmp1643));
bool $tmp1648 = $tmp1647.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1643)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1638)));
if ($tmp1648) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
*(&local1) = $tmp1635;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1649 = &$tmp1635->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1650 = *$tmp1649;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
frost$core$Int $tmp1651 = (frost$core$Int) {0u};
frost$core$Object* $tmp1652 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1650, $tmp1651);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1652)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1652);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp1652);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1652)));
goto block4;
block4:;
org$frostlang$frostc$Type* $tmp1653 = *(&local1);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
org$frostlang$frostc$Type* $tmp1654 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
*(&local4) = $tmp1653;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:239
org$frostlang$frostc$Type* $tmp1655 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_isMethod():frost.core.Bit from Closure.frost:239:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:377
org$frostlang$frostc$Type$Kind* $tmp1656 = &$tmp1655->typeKind;
org$frostlang$frostc$Type$Kind $tmp1657 = *$tmp1656;
frost$core$Int $tmp1658 = $tmp1657.$rawValue;
frost$core$Int $tmp1659 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1660 = $tmp1658.value;
int64_t $tmp1661 = $tmp1659.value;
bool $tmp1662 = $tmp1660 == $tmp1661;
frost$core$Bit $tmp1663 = (frost$core$Bit) {$tmp1662};
bool $tmp1664 = $tmp1663.value;
if ($tmp1664) goto block13; else goto block14;
block14:;
frost$core$Int $tmp1665 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1666 = $tmp1658.value;
int64_t $tmp1667 = $tmp1665.value;
bool $tmp1668 = $tmp1666 == $tmp1667;
frost$core$Bit $tmp1669 = (frost$core$Bit) {$tmp1668};
bool $tmp1670 = $tmp1669.value;
if ($tmp1670) goto block13; else goto block16;
block16:;
frost$core$Int $tmp1671 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1672 = $tmp1658.value;
int64_t $tmp1673 = $tmp1671.value;
bool $tmp1674 = $tmp1672 == $tmp1673;
frost$core$Bit $tmp1675 = (frost$core$Bit) {$tmp1674};
bool $tmp1676 = $tmp1675.value;
if ($tmp1676) goto block13; else goto block18;
block18:;
frost$core$Int $tmp1677 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1678 = $tmp1658.value;
int64_t $tmp1679 = $tmp1677.value;
bool $tmp1680 = $tmp1678 == $tmp1679;
frost$core$Bit $tmp1681 = (frost$core$Bit) {$tmp1680};
bool $tmp1682 = $tmp1681.value;
if ($tmp1682) goto block13; else goto block20;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:379
frost$core$Bit $tmp1683 = (frost$core$Bit) {true};
*(&local5) = $tmp1683;
goto block11;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:382
frost$core$Bit $tmp1684 = (frost$core$Bit) {false};
*(&local5) = $tmp1684;
goto block11;
block12:;
goto block11;
block11:;
frost$core$Bit $tmp1685 = *(&local5);
bool $tmp1686 = $tmp1685.value;
if ($tmp1686) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:240
ITable* $tmp1687 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp1687->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1687 = $tmp1687->next;
}
$fn1689 $tmp1688 = $tmp1687->methods[0];
frost$core$Int $tmp1690 = $tmp1688(((frost$collections$CollectionView*) param2));
org$frostlang$frostc$Type* $tmp1691 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_parameterCount():frost.core.Int from Closure.frost:240:57
org$frostlang$frostc$Type$Kind* $tmp1692 = &$tmp1691->typeKind;
org$frostlang$frostc$Type$Kind $tmp1693 = *$tmp1692;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1694;
$tmp1694 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1694->value = $tmp1693;
frost$core$Int $tmp1695 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1696 = &(&local7)->$rawValue;
*$tmp1696 = $tmp1695;
org$frostlang$frostc$Type$Kind $tmp1697 = *(&local7);
*(&local6) = $tmp1697;
org$frostlang$frostc$Type$Kind $tmp1698 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1699;
$tmp1699 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1699->value = $tmp1698;
ITable* $tmp1700 = ((frost$core$Equatable*) $tmp1694)->$class->itable;
while ($tmp1700->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1700 = $tmp1700->next;
}
$fn1702 $tmp1701 = $tmp1700->methods[0];
frost$core$Bit $tmp1703 = $tmp1701(((frost$core$Equatable*) $tmp1694), ((frost$core$Equatable*) $tmp1699));
bool $tmp1704 = $tmp1703.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1699)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1694)));
if ($tmp1704) goto block25; else goto block29;
block29:;
org$frostlang$frostc$Type$Kind* $tmp1705 = &$tmp1691->typeKind;
org$frostlang$frostc$Type$Kind $tmp1706 = *$tmp1705;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1707;
$tmp1707 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1707->value = $tmp1706;
frost$core$Int $tmp1708 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1709 = &(&local9)->$rawValue;
*$tmp1709 = $tmp1708;
org$frostlang$frostc$Type$Kind $tmp1710 = *(&local9);
*(&local8) = $tmp1710;
org$frostlang$frostc$Type$Kind $tmp1711 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1712;
$tmp1712 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1712->value = $tmp1711;
ITable* $tmp1713 = ((frost$core$Equatable*) $tmp1707)->$class->itable;
while ($tmp1713->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1713 = $tmp1713->next;
}
$fn1715 $tmp1714 = $tmp1713->methods[0];
frost$core$Bit $tmp1716 = $tmp1714(((frost$core$Equatable*) $tmp1707), ((frost$core$Equatable*) $tmp1712));
bool $tmp1717 = $tmp1716.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1712)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1707)));
if ($tmp1717) goto block25; else goto block28;
block28:;
org$frostlang$frostc$Type$Kind* $tmp1718 = &$tmp1691->typeKind;
org$frostlang$frostc$Type$Kind $tmp1719 = *$tmp1718;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1720;
$tmp1720 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1720->value = $tmp1719;
frost$core$Int $tmp1721 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1722 = &(&local11)->$rawValue;
*$tmp1722 = $tmp1721;
org$frostlang$frostc$Type$Kind $tmp1723 = *(&local11);
*(&local10) = $tmp1723;
org$frostlang$frostc$Type$Kind $tmp1724 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1725;
$tmp1725 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1725->value = $tmp1724;
ITable* $tmp1726 = ((frost$core$Equatable*) $tmp1720)->$class->itable;
while ($tmp1726->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1726 = $tmp1726->next;
}
$fn1728 $tmp1727 = $tmp1726->methods[0];
frost$core$Bit $tmp1729 = $tmp1727(((frost$core$Equatable*) $tmp1720), ((frost$core$Equatable*) $tmp1725));
bool $tmp1730 = $tmp1729.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1725)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1720)));
if ($tmp1730) goto block25; else goto block27;
block27:;
org$frostlang$frostc$Type$Kind* $tmp1731 = &$tmp1691->typeKind;
org$frostlang$frostc$Type$Kind $tmp1732 = *$tmp1731;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1733;
$tmp1733 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1733->value = $tmp1732;
frost$core$Int $tmp1734 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:420:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1735 = &(&local13)->$rawValue;
*$tmp1735 = $tmp1734;
org$frostlang$frostc$Type$Kind $tmp1736 = *(&local13);
*(&local12) = $tmp1736;
org$frostlang$frostc$Type$Kind $tmp1737 = *(&local12);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1738;
$tmp1738 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1738->value = $tmp1737;
ITable* $tmp1739 = ((frost$core$Equatable*) $tmp1733)->$class->itable;
while ($tmp1739->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1739 = $tmp1739->next;
}
$fn1741 $tmp1740 = $tmp1739->methods[0];
frost$core$Bit $tmp1742 = $tmp1740(((frost$core$Equatable*) $tmp1733), ((frost$core$Equatable*) $tmp1738));
bool $tmp1743 = $tmp1742.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1738)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1733)));
if ($tmp1743) goto block25; else goto block26;
block26:;
frost$core$Int $tmp1744 = (frost$core$Int) {421u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1745, $tmp1744, &$s1746);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:422
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:422:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1747 = &$tmp1691->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1748 = *$tmp1747;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1748));
ITable* $tmp1749 = ((frost$collections$CollectionView*) $tmp1748)->$class->itable;
while ($tmp1749->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1749 = $tmp1749->next;
}
$fn1751 $tmp1750 = $tmp1749->methods[0];
frost$core$Int $tmp1752 = $tmp1750(((frost$collections$CollectionView*) $tmp1748));
frost$core$Int $tmp1753 = (frost$core$Int) {1u};
int64_t $tmp1754 = $tmp1752.value;
int64_t $tmp1755 = $tmp1753.value;
int64_t $tmp1756 = $tmp1754 - $tmp1755;
frost$core$Int $tmp1757 = (frost$core$Int) {$tmp1756};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1748));
int64_t $tmp1758 = $tmp1690.value;
int64_t $tmp1759 = $tmp1757.value;
bool $tmp1760 = $tmp1758 != $tmp1759;
frost$core$Bit $tmp1761 = (frost$core$Bit) {$tmp1760};
bool $tmp1762 = $tmp1761.value;
if ($tmp1762) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:241
org$frostlang$frostc$Type* $tmp1763 = *(&local0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:241:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1765 $tmp1764 = ($fn1765) ((frost$core$Object*) $tmp1763)->$class->vtable[0];
frost$core$String* $tmp1766 = $tmp1764(((frost$core$Object*) $tmp1763));
frost$core$String* $tmp1767 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1768, $tmp1766);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1766));
frost$core$String* $tmp1769 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1767, &$s1770);
frost$core$String* $tmp1771 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1769, &$s1772);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1771);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:243
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1773 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1773));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1774 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1774));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1775 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:245
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1776 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1776);
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
frost$collections$Array* $tmp1777 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
*(&local14) = $tmp1776;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:246
frost$core$Int $tmp1778 = (frost$core$Int) {0u};
ITable* $tmp1779 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp1779->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1779 = $tmp1779->next;
}
$fn1781 $tmp1780 = $tmp1779->methods[0];
frost$core$Int $tmp1782 = $tmp1780(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp1783 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1784 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1778, $tmp1782, $tmp1783);
frost$core$Int $tmp1785 = $tmp1784.min;
*(&local15) = $tmp1785;
frost$core$Int $tmp1786 = $tmp1784.max;
frost$core$Bit $tmp1787 = $tmp1784.inclusive;
bool $tmp1788 = $tmp1787.value;
frost$core$Int $tmp1789 = (frost$core$Int) {1u};
if ($tmp1788) goto block39; else goto block40;
block39:;
int64_t $tmp1790 = $tmp1785.value;
int64_t $tmp1791 = $tmp1786.value;
bool $tmp1792 = $tmp1790 <= $tmp1791;
frost$core$Bit $tmp1793 = (frost$core$Bit) {$tmp1792};
bool $tmp1794 = $tmp1793.value;
if ($tmp1794) goto block36; else goto block37;
block40:;
int64_t $tmp1795 = $tmp1785.value;
int64_t $tmp1796 = $tmp1786.value;
bool $tmp1797 = $tmp1795 < $tmp1796;
frost$core$Bit $tmp1798 = (frost$core$Bit) {$tmp1797};
bool $tmp1799 = $tmp1798.value;
if ($tmp1799) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:247
frost$core$Int $tmp1800 = *(&local15);
frost$core$Object* $tmp1801 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(param2, $tmp1800);
frost$core$Int* $tmp1802 = &((org$frostlang$frostc$ASTNode*) $tmp1801)->$rawValue;
frost$core$Int $tmp1803 = *$tmp1802;
frost$core$Int $tmp1804 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:248:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1805 = $tmp1803.value;
int64_t $tmp1806 = $tmp1804.value;
bool $tmp1807 = $tmp1805 == $tmp1806;
frost$core$Bit $tmp1808 = (frost$core$Bit) {$tmp1807};
bool $tmp1809 = $tmp1808.value;
if ($tmp1809) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp1810 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$ASTNode*) $tmp1801)->$data + 0);
org$frostlang$frostc$Position $tmp1811 = *$tmp1810;
*(&local16) = $tmp1811;
frost$core$String** $tmp1812 = (frost$core$String**) (((org$frostlang$frostc$ASTNode*) $tmp1801)->$data + 24);
frost$core$String* $tmp1813 = *$tmp1812;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1813));
frost$core$String* $tmp1814 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
*(&local17) = $tmp1813;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:249
frost$collections$Array* $tmp1815 = *(&local14);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1816 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1817 = (frost$core$Int) {34u};
org$frostlang$frostc$Position $tmp1818 = *(&local16);
frost$core$String* $tmp1819 = *(&local17);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1820 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1821 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1822 = *(&local16);
org$frostlang$frostc$Type* $tmp1823 = *(&local4);
frost$core$Int $tmp1824 = *(&local15);
// begin inline call to function org.frostlang.frostc.Type.parameterType(i:frost.core.Int):org.frostlang.frostc.Type from Closure.frost:251:90
org$frostlang$frostc$Type$Kind* $tmp1825 = &$tmp1823->typeKind;
org$frostlang$frostc$Type$Kind $tmp1826 = *$tmp1825;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1827;
$tmp1827 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1827->value = $tmp1826;
frost$core$Int $tmp1828 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1829 = &(&local19)->$rawValue;
*$tmp1829 = $tmp1828;
org$frostlang$frostc$Type$Kind $tmp1830 = *(&local19);
*(&local18) = $tmp1830;
org$frostlang$frostc$Type$Kind $tmp1831 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1832;
$tmp1832 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1832->value = $tmp1831;
ITable* $tmp1833 = ((frost$core$Equatable*) $tmp1827)->$class->itable;
while ($tmp1833->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1833 = $tmp1833->next;
}
$fn1835 $tmp1834 = $tmp1833->methods[0];
frost$core$Bit $tmp1836 = $tmp1834(((frost$core$Equatable*) $tmp1827), ((frost$core$Equatable*) $tmp1832));
bool $tmp1837 = $tmp1836.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1832)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1827)));
if ($tmp1837) goto block49; else goto block52;
block52:;
org$frostlang$frostc$Type$Kind* $tmp1838 = &$tmp1823->typeKind;
org$frostlang$frostc$Type$Kind $tmp1839 = *$tmp1838;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1840;
$tmp1840 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1840->value = $tmp1839;
frost$core$Int $tmp1841 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1842 = &(&local21)->$rawValue;
*$tmp1842 = $tmp1841;
org$frostlang$frostc$Type$Kind $tmp1843 = *(&local21);
*(&local20) = $tmp1843;
org$frostlang$frostc$Type$Kind $tmp1844 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1845;
$tmp1845 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1845->value = $tmp1844;
ITable* $tmp1846 = ((frost$core$Equatable*) $tmp1840)->$class->itable;
while ($tmp1846->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1846 = $tmp1846->next;
}
$fn1848 $tmp1847 = $tmp1846->methods[0];
frost$core$Bit $tmp1849 = $tmp1847(((frost$core$Equatable*) $tmp1840), ((frost$core$Equatable*) $tmp1845));
bool $tmp1850 = $tmp1849.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1845)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1840)));
if ($tmp1850) goto block49; else goto block51;
block51:;
org$frostlang$frostc$Type$Kind* $tmp1851 = &$tmp1823->typeKind;
org$frostlang$frostc$Type$Kind $tmp1852 = *$tmp1851;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1853;
$tmp1853 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1853->value = $tmp1852;
frost$core$Int $tmp1854 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1855 = &(&local23)->$rawValue;
*$tmp1855 = $tmp1854;
org$frostlang$frostc$Type$Kind $tmp1856 = *(&local23);
*(&local22) = $tmp1856;
org$frostlang$frostc$Type$Kind $tmp1857 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1858;
$tmp1858 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1858->value = $tmp1857;
ITable* $tmp1859 = ((frost$core$Equatable*) $tmp1853)->$class->itable;
while ($tmp1859->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1859 = $tmp1859->next;
}
$fn1861 $tmp1860 = $tmp1859->methods[0];
frost$core$Bit $tmp1862 = $tmp1860(((frost$core$Equatable*) $tmp1853), ((frost$core$Equatable*) $tmp1858));
bool $tmp1863 = $tmp1862.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1858)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1853)));
if ($tmp1863) goto block49; else goto block50;
block50:;
org$frostlang$frostc$Type$Kind* $tmp1864 = &$tmp1823->typeKind;
org$frostlang$frostc$Type$Kind $tmp1865 = *$tmp1864;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1866;
$tmp1866 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1866->value = $tmp1865;
frost$core$Int $tmp1867 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:426:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1868 = &(&local25)->$rawValue;
*$tmp1868 = $tmp1867;
org$frostlang$frostc$Type$Kind $tmp1869 = *(&local25);
*(&local24) = $tmp1869;
org$frostlang$frostc$Type$Kind $tmp1870 = *(&local24);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1871;
$tmp1871 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1871->value = $tmp1870;
ITable* $tmp1872 = ((frost$core$Equatable*) $tmp1866)->$class->itable;
while ($tmp1872->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1872 = $tmp1872->next;
}
$fn1874 $tmp1873 = $tmp1872->methods[0];
frost$core$Bit $tmp1875 = $tmp1873(((frost$core$Equatable*) $tmp1866), ((frost$core$Equatable*) $tmp1871));
bool $tmp1876 = $tmp1875.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1871)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1866)));
if ($tmp1876) goto block49; else goto block47;
block49:;
frost$core$Int $tmp1877 = (frost$core$Int) {0u};
int64_t $tmp1878 = $tmp1824.value;
int64_t $tmp1879 = $tmp1877.value;
bool $tmp1880 = $tmp1878 >= $tmp1879;
frost$core$Bit $tmp1881 = (frost$core$Bit) {$tmp1880};
bool $tmp1882 = $tmp1881.value;
if ($tmp1882) goto block48; else goto block47;
block48:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:426:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1883 = &$tmp1823->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1884 = *$tmp1883;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1884));
ITable* $tmp1885 = ((frost$collections$CollectionView*) $tmp1884)->$class->itable;
while ($tmp1885->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1885 = $tmp1885->next;
}
$fn1887 $tmp1886 = $tmp1885->methods[0];
frost$core$Int $tmp1888 = $tmp1886(((frost$collections$CollectionView*) $tmp1884));
frost$core$Int $tmp1889 = (frost$core$Int) {1u};
int64_t $tmp1890 = $tmp1888.value;
int64_t $tmp1891 = $tmp1889.value;
int64_t $tmp1892 = $tmp1890 - $tmp1891;
frost$core$Int $tmp1893 = (frost$core$Int) {$tmp1892};
int64_t $tmp1894 = $tmp1824.value;
int64_t $tmp1895 = $tmp1893.value;
bool $tmp1896 = $tmp1894 < $tmp1895;
frost$core$Bit $tmp1897 = (frost$core$Bit) {$tmp1896};
bool $tmp1898 = $tmp1897.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1884));
if ($tmp1898) goto block46; else goto block47;
block47:;
frost$core$Int $tmp1899 = (frost$core$Int) {427u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1900, $tmp1899, &$s1901);
abort(); // unreachable
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:428
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:428:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1902 = &$tmp1823->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1903 = *$tmp1902;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
frost$core$Object* $tmp1904 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1903, $tmp1824);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1904)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1904);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:251:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3685
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1905 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1906 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3685:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp1907 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp1908 = *$tmp1907;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1909 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1910 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1909, $tmp1910);
frost$collections$Array$add$frost$collections$Array$T($tmp1909, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1904)));
org$frostlang$frostc$Type* $tmp1911 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1908, ((frost$collections$ListView*) $tmp1909));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp1905, $tmp1906, ((org$frostlang$frostc$Type*) $tmp1904), $tmp1911);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1820, $tmp1821, $tmp1822, $tmp1905);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp1816, $tmp1817, $tmp1818, $tmp1819, $tmp1820);
frost$collections$Array$add$frost$collections$Array$T($tmp1815, ((frost$core$Object*) $tmp1816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1904)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
frost$core$String* $tmp1912 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1801);
frost$core$Int $tmp1913 = *(&local15);
int64_t $tmp1914 = $tmp1786.value;
int64_t $tmp1915 = $tmp1913.value;
int64_t $tmp1916 = $tmp1914 - $tmp1915;
frost$core$Int $tmp1917 = (frost$core$Int) {$tmp1916};
if ($tmp1788) goto block62; else goto block63;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:254
frost$core$Int $tmp1918 = (frost$core$Int) {254u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1919, $tmp1918);
abort(); // unreachable
block62:;
int64_t $tmp1920 = $tmp1917.value;
int64_t $tmp1921 = $tmp1789.value;
bool $tmp1922 = $tmp1920 >= $tmp1921;
frost$core$Bit $tmp1923 = (frost$core$Bit) {$tmp1922};
bool $tmp1924 = $tmp1923.value;
if ($tmp1924) goto block61; else goto block37;
block63:;
int64_t $tmp1925 = $tmp1917.value;
int64_t $tmp1926 = $tmp1789.value;
bool $tmp1927 = $tmp1925 > $tmp1926;
frost$core$Bit $tmp1928 = (frost$core$Bit) {$tmp1927};
bool $tmp1929 = $tmp1928.value;
if ($tmp1929) goto block61; else goto block37;
block61:;
int64_t $tmp1930 = $tmp1913.value;
int64_t $tmp1931 = $tmp1789.value;
int64_t $tmp1932 = $tmp1930 + $tmp1931;
frost$core$Int $tmp1933 = (frost$core$Int) {$tmp1932};
*(&local15) = $tmp1933;
goto block36;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:258
org$frostlang$frostc$Type* $tmp1934 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:258:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1935 = &$tmp1934->typeKind;
org$frostlang$frostc$Type$Kind $tmp1936 = *$tmp1935;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1937;
$tmp1937 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1937->value = $tmp1936;
frost$core$Int $tmp1938 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1939 = &(&local28)->$rawValue;
*$tmp1939 = $tmp1938;
org$frostlang$frostc$Type$Kind $tmp1940 = *(&local28);
*(&local27) = $tmp1940;
org$frostlang$frostc$Type$Kind $tmp1941 = *(&local27);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1942;
$tmp1942 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1942->value = $tmp1941;
ITable* $tmp1943 = ((frost$core$Equatable*) $tmp1937)->$class->itable;
while ($tmp1943->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1943 = $tmp1943->next;
}
$fn1945 $tmp1944 = $tmp1943->methods[1];
frost$core$Bit $tmp1946 = $tmp1944(((frost$core$Equatable*) $tmp1937), ((frost$core$Equatable*) $tmp1942));
bool $tmp1947 = $tmp1946.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1942)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1937)));
if ($tmp1947) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
*(&local26) = $tmp1934;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
goto block64;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1948 = &$tmp1934->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1949 = *$tmp1948;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
frost$core$Int $tmp1950 = (frost$core$Int) {0u};
frost$core$Object* $tmp1951 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1949, $tmp1950);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1951)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1951);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
*(&local26) = ((org$frostlang$frostc$Type*) $tmp1951);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1951)));
goto block64;
block64:;
org$frostlang$frostc$Type* $tmp1952 = *(&local26);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:258:54
org$frostlang$frostc$Type$Kind* $tmp1953 = &$tmp1952->typeKind;
org$frostlang$frostc$Type$Kind $tmp1954 = *$tmp1953;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1955;
$tmp1955 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1955->value = $tmp1954;
frost$core$Int $tmp1956 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1957 = &(&local30)->$rawValue;
*$tmp1957 = $tmp1956;
org$frostlang$frostc$Type$Kind $tmp1958 = *(&local30);
*(&local29) = $tmp1958;
org$frostlang$frostc$Type$Kind $tmp1959 = *(&local29);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1960;
$tmp1960 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1960->value = $tmp1959;
ITable* $tmp1961 = ((frost$core$Equatable*) $tmp1955)->$class->itable;
while ($tmp1961->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1961 = $tmp1961->next;
}
$fn1963 $tmp1962 = $tmp1961->methods[0];
frost$core$Bit $tmp1964 = $tmp1962(((frost$core$Equatable*) $tmp1955), ((frost$core$Equatable*) $tmp1960));
bool $tmp1965 = $tmp1964.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1960)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1955)));
if ($tmp1965) goto block70; else goto block74;
block74:;
org$frostlang$frostc$Type$Kind* $tmp1966 = &$tmp1952->typeKind;
org$frostlang$frostc$Type$Kind $tmp1967 = *$tmp1966;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1968;
$tmp1968 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1968->value = $tmp1967;
frost$core$Int $tmp1969 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1970 = &(&local32)->$rawValue;
*$tmp1970 = $tmp1969;
org$frostlang$frostc$Type$Kind $tmp1971 = *(&local32);
*(&local31) = $tmp1971;
org$frostlang$frostc$Type$Kind $tmp1972 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1973;
$tmp1973 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1973->value = $tmp1972;
ITable* $tmp1974 = ((frost$core$Equatable*) $tmp1968)->$class->itable;
while ($tmp1974->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1974 = $tmp1974->next;
}
$fn1976 $tmp1975 = $tmp1974->methods[0];
frost$core$Bit $tmp1977 = $tmp1975(((frost$core$Equatable*) $tmp1968), ((frost$core$Equatable*) $tmp1973));
bool $tmp1978 = $tmp1977.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1973)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1968)));
if ($tmp1978) goto block70; else goto block73;
block73:;
org$frostlang$frostc$Type$Kind* $tmp1979 = &$tmp1952->typeKind;
org$frostlang$frostc$Type$Kind $tmp1980 = *$tmp1979;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1981;
$tmp1981 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1981->value = $tmp1980;
frost$core$Int $tmp1982 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1983 = &(&local34)->$rawValue;
*$tmp1983 = $tmp1982;
org$frostlang$frostc$Type$Kind $tmp1984 = *(&local34);
*(&local33) = $tmp1984;
org$frostlang$frostc$Type$Kind $tmp1985 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1986;
$tmp1986 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1986->value = $tmp1985;
ITable* $tmp1987 = ((frost$core$Equatable*) $tmp1981)->$class->itable;
while ($tmp1987->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1987 = $tmp1987->next;
}
$fn1989 $tmp1988 = $tmp1987->methods[0];
frost$core$Bit $tmp1990 = $tmp1988(((frost$core$Equatable*) $tmp1981), ((frost$core$Equatable*) $tmp1986));
bool $tmp1991 = $tmp1990.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1986)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1981)));
if ($tmp1991) goto block70; else goto block72;
block72:;
org$frostlang$frostc$Type$Kind* $tmp1992 = &$tmp1952->typeKind;
org$frostlang$frostc$Type$Kind $tmp1993 = *$tmp1992;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1994;
$tmp1994 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1994->value = $tmp1993;
frost$core$Int $tmp1995 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1996 = &(&local36)->$rawValue;
*$tmp1996 = $tmp1995;
org$frostlang$frostc$Type$Kind $tmp1997 = *(&local36);
*(&local35) = $tmp1997;
org$frostlang$frostc$Type$Kind $tmp1998 = *(&local35);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1999;
$tmp1999 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1999->value = $tmp1998;
ITable* $tmp2000 = ((frost$core$Equatable*) $tmp1994)->$class->itable;
while ($tmp2000->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2000 = $tmp2000->next;
}
$fn2002 $tmp2001 = $tmp2000->methods[0];
frost$core$Bit $tmp2003 = $tmp2001(((frost$core$Equatable*) $tmp1994), ((frost$core$Equatable*) $tmp1999));
bool $tmp2004 = $tmp2003.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1999)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1994)));
if ($tmp2004) goto block70; else goto block71;
block71:;
frost$core$Int $tmp2005 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2006, $tmp2005, &$s2007);
abort(); // unreachable
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2008 = &$tmp1952->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2009 = *$tmp2008;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
ITable* $tmp2010 = ((frost$collections$ListView*) $tmp2009)->$class->itable;
while ($tmp2010->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2010 = $tmp2010->next;
}
$fn2012 $tmp2011 = $tmp2010->methods[5];
frost$core$Object* $tmp2013 = $tmp2011(((frost$collections$ListView*) $tmp2009));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2013)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2013);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
*(&local37) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2013)));
org$frostlang$frostc$Type* $tmp2014 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2014));
*(&local37) = ((org$frostlang$frostc$Type*) $tmp2013);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2013)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:259
frost$core$Int $tmp2015 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:259:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2016 = &(&local39)->$rawValue;
*$tmp2016 = $tmp2015;
org$frostlang$frostc$MethodDecl$Kind $tmp2017 = *(&local39);
*(&local38) = $tmp2017;
org$frostlang$frostc$MethodDecl$Kind $tmp2018 = *(&local38);
frost$collections$Array* $tmp2019 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp2020 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2019);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2021 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2022 = (frost$core$Int) {26u};
org$frostlang$frostc$Type* $tmp2023 = *(&local37);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:261:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3685
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2024 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2025 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3685:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp2026 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp2027 = *$tmp2026;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2028 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2029 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2028, $tmp2029);
frost$collections$Array$add$frost$collections$Array$T($tmp2028, ((frost$core$Object*) $tmp2023));
org$frostlang$frostc$Type* $tmp2030 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2027, ((frost$collections$ListView*) $tmp2028));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp2024, $tmp2025, $tmp2023, $tmp2030);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2021, $tmp2022, param1, $tmp2024);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2031 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2032 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2031, $tmp2032);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2033 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2034 = (frost$core$Int) {38u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp2033, $tmp2034, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp2031, ((frost$core$Object*) $tmp2033));
org$frostlang$frostc$FixedArray* $tmp2035 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2031);
org$frostlang$frostc$IR$Value* $tmp2036 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2018, $tmp2020, $tmp2021, $tmp2035, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2020));
org$frostlang$frostc$Type* $tmp2037 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2037));
*(&local37) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2038 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2038));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2039 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2040 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2041 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2041));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2042 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2042));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp2036;
block10:;
org$frostlang$frostc$Type* $tmp2043 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2044 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2044));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2045 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:267
frost$collections$IdentityMap** $tmp2046 = &param0->lambdaTypes;
frost$collections$IdentityMap* $tmp2047 = *$tmp2046;
frost$core$Object* $tmp2048 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp2047, ((frost$core$Object*) param3));
*(&local40) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp2048)));
frost$collections$HashSet* $tmp2049 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
*(&local40) = ((frost$collections$HashSet*) $tmp2048);
frost$core$Frost$unref$frost$core$Object$Q($tmp2048);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:268
frost$collections$HashSet* $tmp2050 = *(&local40);
frost$core$Bit $tmp2051 = (frost$core$Bit) {$tmp2050 != NULL};
bool $tmp2052 = $tmp2051.value;
if ($tmp2052) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:269
frost$collections$HashSet* $tmp2053 = *(&local40);
ITable* $tmp2054 = ((frost$collections$CollectionView*) $tmp2053)->$class->itable;
while ($tmp2054->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2054 = $tmp2054->next;
}
$fn2056 $tmp2055 = $tmp2054->methods[0];
frost$core$Int $tmp2057 = $tmp2055(((frost$collections$CollectionView*) $tmp2053));
frost$core$Int $tmp2058 = (frost$core$Int) {1u};
int64_t $tmp2059 = $tmp2057.value;
int64_t $tmp2060 = $tmp2058.value;
bool $tmp2061 = $tmp2059 > $tmp2060;
frost$core$Bit $tmp2062 = (frost$core$Bit) {$tmp2061};
bool $tmp2063 = $tmp2062.value;
if ($tmp2063) goto block85; else goto block87;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:270
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2064 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$HashSet* $tmp2065 = *(&local40);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp2064, ((frost$collections$CollectionView*) $tmp2065));
*(&local41) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
frost$collections$Array* $tmp2066 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
*(&local41) = $tmp2064;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:271
frost$collections$Array* $tmp2067 = *(&local41);
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp2069 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Closure.frost:271:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp2070 = &$tmp2069->pointer;
*$tmp2070 = ((frost$core$Int8*) org$frostlang$frostc$expression$Closure$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp2071 = &$tmp2069->target;
frost$core$Immutable* $tmp2072 = *$tmp2071;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
frost$core$Immutable** $tmp2073 = &$tmp2069->target;
*$tmp2073 = ((frost$core$Immutable*) NULL);
ITable* $tmp2074 = ((frost$collections$ListView*) $tmp2067)->$class->itable;
while ($tmp2074->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2074 = $tmp2074->next;
}
$fn2076 $tmp2075 = $tmp2074->methods[15];
frost$collections$ListView* $tmp2077 = $tmp2075(((frost$collections$ListView*) $tmp2067), ((frost$core$MutableMethod*) $tmp2069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2077));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:272
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2078 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2078, &$s2079);
*(&local42) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
frost$core$MutableString* $tmp2080 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
*(&local42) = $tmp2078;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:273
frost$threads$MessageQueue** $tmp2081 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2082 = *$tmp2081;
*(&local43) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
frost$threads$MessageQueue* $tmp2083 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
*(&local43) = $tmp2082;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:274
frost$collections$Array* $tmp2084 = *(&local41);
ITable* $tmp2085 = ((frost$collections$Iterable*) $tmp2084)->$class->itable;
while ($tmp2085->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2085 = $tmp2085->next;
}
$fn2087 $tmp2086 = $tmp2085->methods[0];
frost$collections$Iterator* $tmp2088 = $tmp2086(((frost$collections$Iterable*) $tmp2084));
goto block89;
block89:;
ITable* $tmp2089 = $tmp2088->$class->itable;
while ($tmp2089->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2089 = $tmp2089->next;
}
$fn2091 $tmp2090 = $tmp2089->methods[0];
frost$core$Bit $tmp2092 = $tmp2090($tmp2088);
bool $tmp2093 = $tmp2092.value;
if ($tmp2093) goto block91; else goto block90;
block90:;
*(&local44) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp2094 = $tmp2088->$class->itable;
while ($tmp2094->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2094 = $tmp2094->next;
}
$fn2096 $tmp2095 = $tmp2094->methods[1];
frost$core$Object* $tmp2097 = $tmp2095($tmp2088);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2097)));
org$frostlang$frostc$Type* $tmp2098 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
*(&local44) = ((org$frostlang$frostc$Type*) $tmp2097);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:275
frost$core$MutableString* $tmp2099 = *(&local42);
org$frostlang$frostc$Type* $tmp2100 = *(&local44);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:275:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2102 $tmp2101 = ($fn2102) ((frost$core$Object*) $tmp2100)->$class->vtable[0];
frost$core$String* $tmp2103 = $tmp2101(((frost$core$Object*) $tmp2100));
frost$core$String* $tmp2104 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2105, $tmp2103);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2103));
frost$core$String* $tmp2106 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2104, &$s2107);
frost$core$MutableString$append$frost$core$String($tmp2099, $tmp2106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:276
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp2108 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp2108);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
frost$threads$MessageQueue** $tmp2109 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2110 = *$tmp2109;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
frost$threads$MessageQueue** $tmp2111 = &param0->errorQueue;
*$tmp2111 = $tmp2108;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:277
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2112 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2113 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp2114 = *(&local44);
frost$core$Bit $tmp2115 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2112, $tmp2113, $tmp2114, $tmp2115);
org$frostlang$frostc$IR$Value* $tmp2116 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp2112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:279
frost$threads$MessageQueue** $tmp2117 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2118 = *$tmp2117;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Closure.frost:279:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp2119 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp2120 = &$tmp2118->lock;
frost$threads$Lock* $tmp2121 = *$tmp2120;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp2119, $tmp2121);
*(&local45) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
frost$threads$ScopedLock* $tmp2122 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
*(&local45) = $tmp2119;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp2123 = &$tmp2118->count;
frost$core$Int $tmp2124 = *$tmp2123;
frost$threads$ScopedLock* $tmp2125 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
*(&local45) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp2126 = (frost$core$Int) {0u};
int64_t $tmp2127 = $tmp2124.value;
int64_t $tmp2128 = $tmp2126.value;
bool $tmp2129 = $tmp2127 > $tmp2128;
frost$core$Bit $tmp2130 = (frost$core$Bit) {$tmp2129};
bool $tmp2131 = $tmp2130.value;
if ($tmp2131) goto block95; else goto block96;
block96:;
frost$core$Int $tmp2132 = (frost$core$Int) {279u};
org$frostlang$frostc$Position$wrapper* $tmp2133;
$tmp2133 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp2133->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:280:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2135 $tmp2134 = ($fn2135) ((frost$core$Object*) $tmp2133)->$class->vtable[0];
frost$core$String* $tmp2136 = $tmp2134(((frost$core$Object*) $tmp2133));
frost$core$String* $tmp2137 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2138, $tmp2136);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
frost$core$String* $tmp2139 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2137, &$s2140);
org$frostlang$frostc$Type* $tmp2141 = *(&local44);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:281:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2143 $tmp2142 = ($fn2143) ((frost$core$Object*) $tmp2141)->$class->vtable[0];
frost$core$String* $tmp2144 = $tmp2142(((frost$core$Object*) $tmp2141));
frost$core$String* $tmp2145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2146, $tmp2144);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2144));
frost$core$String* $tmp2147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2145, &$s2148);
frost$core$String* $tmp2149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2139, $tmp2147);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2150, $tmp2132, $tmp2149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
abort(); // unreachable
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:282
goto block99;
block99:;
frost$threads$MessageQueue** $tmp2151 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2152 = *$tmp2151;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Closure.frost:282:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp2153 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp2154 = &$tmp2152->lock;
frost$threads$Lock* $tmp2155 = *$tmp2154;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp2153, $tmp2155);
*(&local46) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
frost$threads$ScopedLock* $tmp2156 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
*(&local46) = $tmp2153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp2157 = &$tmp2152->count;
frost$core$Int $tmp2158 = *$tmp2157;
frost$threads$ScopedLock* $tmp2159 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
*(&local46) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp2160 = (frost$core$Int) {0u};
int64_t $tmp2161 = $tmp2158.value;
int64_t $tmp2162 = $tmp2160.value;
bool $tmp2163 = $tmp2161 > $tmp2162;
frost$core$Bit $tmp2164 = (frost$core$Bit) {$tmp2163};
bool $tmp2165 = $tmp2164.value;
if ($tmp2165) goto block100; else goto block101;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:283
frost$threads$MessageQueue** $tmp2166 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2167 = *$tmp2166;
frost$core$Immutable* $tmp2168 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp2167);
frost$core$Int* $tmp2169 = &((org$frostlang$frostc$Compiler$Message*) $tmp2168)->$rawValue;
frost$core$Int $tmp2170 = *$tmp2169;
frost$core$Int $tmp2171 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:284:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2172 = $tmp2170.value;
int64_t $tmp2173 = $tmp2171.value;
bool $tmp2174 = $tmp2172 == $tmp2173;
frost$core$Bit $tmp2175 = (frost$core$Bit) {$tmp2174};
bool $tmp2176 = $tmp2175.value;
if ($tmp2176) goto block105; else goto block106;
block105:;
frost$core$String** $tmp2177 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2168)->$data + 0);
frost$core$String* $tmp2178 = *$tmp2177;
frost$core$Int* $tmp2179 = (frost$core$Int*) (((org$frostlang$frostc$Compiler$Message*) $tmp2168)->$data + 8);
frost$core$Int $tmp2180 = *$tmp2179;
frost$core$Int* $tmp2181 = (frost$core$Int*) (((org$frostlang$frostc$Compiler$Message*) $tmp2168)->$data + 16);
frost$core$Int $tmp2182 = *$tmp2181;
frost$core$String** $tmp2183 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2168)->$data + 24);
frost$core$String* $tmp2184 = *$tmp2183;
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
frost$core$String* $tmp2185 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
*(&local47) = $tmp2184;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:285
frost$core$MutableString* $tmp2186 = *(&local42);
frost$core$String* $tmp2187 = *(&local47);
frost$core$String* $tmp2188 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2189, $tmp2187);
frost$core$String* $tmp2190 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2188, &$s2191);
frost$core$MutableString$append$frost$core$String($tmp2186, $tmp2190);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
frost$core$String* $tmp2192 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
*(&local47) = ((frost$core$String*) NULL);
goto block104;
block106:;
frost$core$Int $tmp2193 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:287:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2194 = $tmp2170.value;
int64_t $tmp2195 = $tmp2193.value;
bool $tmp2196 = $tmp2194 == $tmp2195;
frost$core$Bit $tmp2197 = (frost$core$Bit) {$tmp2196};
bool $tmp2198 = $tmp2197.value;
if ($tmp2198) goto block108; else goto block104;
block108:;
frost$core$String** $tmp2199 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2168)->$data + 0);
frost$core$String* $tmp2200 = *$tmp2199;
frost$core$Int* $tmp2201 = (frost$core$Int*) (((org$frostlang$frostc$Compiler$Message*) $tmp2168)->$data + 8);
frost$core$Int $tmp2202 = *$tmp2201;
frost$core$Int* $tmp2203 = (frost$core$Int*) (((org$frostlang$frostc$Compiler$Message*) $tmp2168)->$data + 16);
frost$core$Int $tmp2204 = *$tmp2203;
frost$core$String** $tmp2205 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2168)->$data + 24);
frost$core$String* $tmp2206 = *$tmp2205;
*(&local48) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2206));
frost$core$String* $tmp2207 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2207));
*(&local48) = $tmp2206;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:288
frost$core$MutableString* $tmp2208 = *(&local42);
frost$core$String* $tmp2209 = *(&local48);
frost$core$String* $tmp2210 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2211, $tmp2209);
frost$core$String* $tmp2212 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2210, &$s2213);
frost$core$MutableString$append$frost$core$String($tmp2208, $tmp2212);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2210));
frost$core$String* $tmp2214 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
*(&local48) = ((frost$core$String*) NULL);
goto block104;
block104:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
goto block99;
block101:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2097);
org$frostlang$frostc$Type* $tmp2215 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2215));
*(&local44) = ((org$frostlang$frostc$Type*) NULL);
goto block89;
block91:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:293
frost$threads$MessageQueue* $tmp2216 = *(&local43);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
frost$threads$MessageQueue** $tmp2217 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2218 = *$tmp2217;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
frost$threads$MessageQueue** $tmp2219 = &param0->errorQueue;
*$tmp2219 = $tmp2216;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:294
frost$core$MutableString* $tmp2220 = *(&local42);
frost$core$String* $tmp2221 = frost$core$MutableString$finish$R$frost$core$String($tmp2220);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2221);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:295
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$threads$MessageQueue* $tmp2222 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
*(&local43) = ((frost$threads$MessageQueue*) NULL);
frost$core$MutableString* $tmp2223 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
*(&local42) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp2224 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
*(&local41) = ((frost$collections$Array*) NULL);
frost$collections$HashSet* $tmp2225 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2225));
*(&local40) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block87:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:298
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2226 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2227 = (frost$core$Int) {3u};
frost$collections$HashSet* $tmp2228 = *(&local40);
ITable* $tmp2229 = ((frost$collections$Iterable*) $tmp2228)->$class->itable;
while ($tmp2229->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2229 = $tmp2229->next;
}
$fn2231 $tmp2230 = $tmp2229->methods[0];
frost$collections$Iterator* $tmp2232 = $tmp2230(((frost$collections$Iterable*) $tmp2228));
ITable* $tmp2233 = $tmp2232->$class->itable;
while ($tmp2233->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2233 = $tmp2233->next;
}
$fn2235 $tmp2234 = $tmp2233->methods[1];
frost$core$Object* $tmp2236 = $tmp2234($tmp2232);
frost$core$Bit $tmp2237 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2226, $tmp2227, ((org$frostlang$frostc$Type*) $tmp2236), $tmp2237);
org$frostlang$frostc$IR$Value* $tmp2238 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp2226);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2238));
frost$core$Frost$unref$frost$core$Object$Q($tmp2236);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:300
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp2239 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
*(&local40) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block86:;
goto block84;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:303
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s2240);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:305
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp2241 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
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
frost$core$Int local30;
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
frost$core$Int* $tmp2242 = &param0->closureCount;
frost$core$Int $tmp2243 = *$tmp2242;
frost$core$Int $tmp2244 = (frost$core$Int) {1u};
int64_t $tmp2245 = $tmp2243.value;
int64_t $tmp2246 = $tmp2244.value;
int64_t $tmp2247 = $tmp2245 + $tmp2246;
frost$core$Int $tmp2248 = (frost$core$Int) {$tmp2247};
frost$core$Int* $tmp2249 = &param0->closureCount;
*$tmp2249 = $tmp2248;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:313
frost$core$Int* $tmp2250 = &param0->closureCount;
frost$core$Int $tmp2251 = *$tmp2250;
frost$core$Int$wrapper* $tmp2252;
$tmp2252 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp2252->value = $tmp2251;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:313:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2254 $tmp2253 = ($fn2254) ((frost$core$Object*) $tmp2252)->$class->vtable[0];
frost$core$String* $tmp2255 = $tmp2253(((frost$core$Object*) $tmp2252));
frost$core$String* $tmp2256 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2257, $tmp2255);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2255));
frost$core$String* $tmp2258 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2256, &$s2259);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2258));
frost$core$String* $tmp2260 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
*(&local0) = $tmp2258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:314
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2261 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2261);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
frost$collections$Array* $tmp2262 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2262));
*(&local1) = $tmp2261;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:315
ITable* $tmp2263 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp2263->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2263 = $tmp2263->next;
}
$fn2265 $tmp2264 = $tmp2263->methods[0];
frost$collections$Iterator* $tmp2266 = $tmp2264(((frost$collections$Iterable*) param3));
goto block2;
block2:;
ITable* $tmp2267 = $tmp2266->$class->itable;
while ($tmp2267->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2267 = $tmp2267->next;
}
$fn2269 $tmp2268 = $tmp2267->methods[0];
frost$core$Bit $tmp2270 = $tmp2268($tmp2266);
bool $tmp2271 = $tmp2270.value;
if ($tmp2271) goto block4; else goto block3;
block3:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2272 = $tmp2266->$class->itable;
while ($tmp2272->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2272 = $tmp2272->next;
}
$fn2274 $tmp2273 = $tmp2272->methods[1];
frost$core$Object* $tmp2275 = $tmp2273($tmp2266);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2275)));
org$frostlang$frostc$ASTNode* $tmp2276 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp2275);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:316
org$frostlang$frostc$ASTNode* $tmp2277 = *(&local2);
frost$core$Int* $tmp2278 = &$tmp2277->$rawValue;
frost$core$Int $tmp2279 = *$tmp2278;
frost$core$Int $tmp2280 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:317:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2281 = $tmp2279.value;
int64_t $tmp2282 = $tmp2280.value;
bool $tmp2283 = $tmp2281 == $tmp2282;
frost$core$Bit $tmp2284 = (frost$core$Bit) {$tmp2283};
bool $tmp2285 = $tmp2284.value;
if ($tmp2285) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp2286 = (org$frostlang$frostc$Position*) ($tmp2277->$data + 0);
org$frostlang$frostc$Position $tmp2287 = *$tmp2286;
frost$core$String** $tmp2288 = (frost$core$String**) ($tmp2277->$data + 24);
frost$core$String* $tmp2289 = *$tmp2288;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2289));
frost$core$String* $tmp2290 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
*(&local3) = $tmp2289;
org$frostlang$frostc$ASTNode** $tmp2291 = (org$frostlang$frostc$ASTNode**) ($tmp2277->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2292 = *$tmp2291;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
org$frostlang$frostc$ASTNode* $tmp2293 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
*(&local4) = $tmp2292;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:318
org$frostlang$frostc$Scanner** $tmp2294 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp2295 = *$tmp2294;
org$frostlang$frostc$ASTNode* $tmp2296 = *(&local4);
org$frostlang$frostc$Type* $tmp2297 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp2295, $tmp2296);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from Closure.frost:318:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:965
frost$core$Bit $tmp2298 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp2299 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp2297, $tmp2298);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
org$frostlang$frostc$Type* $tmp2300 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
*(&local5) = $tmp2299;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2297));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:319
org$frostlang$frostc$Type* $tmp2301 = *(&local5);
frost$core$Bit $tmp2302 = (frost$core$Bit) {$tmp2301 == NULL};
bool $tmp2303 = $tmp2302.value;
if ($tmp2303) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:320
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2304 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2305 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2306 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2306));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2275);
org$frostlang$frostc$ASTNode* $tmp2307 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
frost$collections$Array* $tmp2308 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2308));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2309 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:322
frost$collections$Array* $tmp2310 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp2311 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp2312 = *(&local3);
org$frostlang$frostc$Type* $tmp2313 = *(&local5);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp2311, $tmp2312, $tmp2313);
frost$collections$Array$add$frost$collections$Array$T($tmp2310, ((frost$core$Object*) $tmp2311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
org$frostlang$frostc$Type* $tmp2314 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2314));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2315 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2316 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2275);
org$frostlang$frostc$ASTNode* $tmp2317 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:325
frost$core$Int $tmp2318 = (frost$core$Int) {325u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2319, $tmp2318);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:329
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:330
frost$core$Bit $tmp2320 = (frost$core$Bit) {param4 != NULL};
bool $tmp2321 = $tmp2320.value;
if ($tmp2321) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:331
org$frostlang$frostc$Scanner** $tmp2322 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp2323 = *$tmp2322;
org$frostlang$frostc$Type* $tmp2324 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp2323, param4);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from Closure.frost:331:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:965
frost$core$Bit $tmp2325 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp2326 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp2324, $tmp2325);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
org$frostlang$frostc$Type* $tmp2327 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
*(&local6) = $tmp2326;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:332
org$frostlang$frostc$Type* $tmp2328 = *(&local6);
frost$core$Bit $tmp2329 = (frost$core$Bit) {false};
bool $tmp2330 = $tmp2329.value;
if ($tmp2330) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:333
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2331 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2331));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2332 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2333 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2333));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block17:;
goto block13;
block14:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:337
org$frostlang$frostc$Type** $tmp2334 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2335 = *$tmp2334;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2335));
org$frostlang$frostc$Type* $tmp2336 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2336));
*(&local6) = $tmp2335;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:338
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2337;
$tmp2337 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2337->value = param2;
frost$core$Int $tmp2338 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:338:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2339 = &(&local8)->$rawValue;
*$tmp2339 = $tmp2338;
org$frostlang$frostc$MethodDecl$Kind $tmp2340 = *(&local8);
*(&local7) = $tmp2340;
org$frostlang$frostc$MethodDecl$Kind $tmp2341 = *(&local7);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2342;
$tmp2342 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2342->value = $tmp2341;
ITable* $tmp2343 = ((frost$core$Equatable*) $tmp2337)->$class->itable;
while ($tmp2343->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2343 = $tmp2343->next;
}
$fn2345 $tmp2344 = $tmp2343->methods[0];
frost$core$Bit $tmp2346 = $tmp2344(((frost$core$Equatable*) $tmp2337), ((frost$core$Equatable*) $tmp2342));
bool $tmp2347 = $tmp2346.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2342)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2337)));
if ($tmp2347) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:339
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s2348);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:340
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2349 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2349));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2350 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2350));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2351 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2351));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block19:;
goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:343
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp2352 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Stack** $tmp2353 = &param0->currentMethod;
frost$collections$Stack* $tmp2354 = *$tmp2353;
frost$core$Int $tmp2355 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Closure.frost:343:94
frost$core$Int $tmp2356 = (frost$core$Int) {0u};
int64_t $tmp2357 = $tmp2355.value;
int64_t $tmp2358 = $tmp2356.value;
bool $tmp2359 = $tmp2357 >= $tmp2358;
frost$core$Bit $tmp2360 = (frost$core$Bit) {$tmp2359};
bool $tmp2361 = $tmp2360.value;
if ($tmp2361) goto block24; else goto block23;
block24:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp2362 = &$tmp2354->contents;
frost$collections$Array* $tmp2363 = *$tmp2362;
ITable* $tmp2364 = ((frost$collections$CollectionView*) $tmp2363)->$class->itable;
while ($tmp2364->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2364 = $tmp2364->next;
}
$fn2366 $tmp2365 = $tmp2364->methods[0];
frost$core$Int $tmp2367 = $tmp2365(((frost$collections$CollectionView*) $tmp2363));
int64_t $tmp2368 = $tmp2355.value;
int64_t $tmp2369 = $tmp2367.value;
bool $tmp2370 = $tmp2368 < $tmp2369;
frost$core$Bit $tmp2371 = (frost$core$Bit) {$tmp2370};
bool $tmp2372 = $tmp2371.value;
if ($tmp2372) goto block22; else goto block23;
block23:;
frost$core$Int $tmp2373 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2374, $tmp2373, &$s2375);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp2376 = &$tmp2354->contents;
frost$collections$Array* $tmp2377 = *$tmp2376;
ITable* $tmp2378 = ((frost$collections$CollectionView*) $tmp2377)->$class->itable;
while ($tmp2378->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2378 = $tmp2378->next;
}
$fn2380 $tmp2379 = $tmp2378->methods[0];
frost$core$Int $tmp2381 = $tmp2379(((frost$collections$CollectionView*) $tmp2377));
int64_t $tmp2382 = $tmp2381.value;
int64_t $tmp2383 = $tmp2355.value;
bool $tmp2384 = $tmp2382 > $tmp2383;
frost$core$Bit $tmp2385 = (frost$core$Bit) {$tmp2384};
bool $tmp2386 = $tmp2385.value;
if ($tmp2386) goto block26; else goto block27;
block27:;
frost$core$Int $tmp2387 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2388, $tmp2387);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp2389 = &$tmp2354->contents;
frost$collections$Array* $tmp2390 = *$tmp2389;
frost$collections$Array** $tmp2391 = &$tmp2354->contents;
frost$collections$Array* $tmp2392 = *$tmp2391;
ITable* $tmp2393 = ((frost$collections$CollectionView*) $tmp2392)->$class->itable;
while ($tmp2393->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2393 = $tmp2393->next;
}
$fn2395 $tmp2394 = $tmp2393->methods[0];
frost$core$Int $tmp2396 = $tmp2394(((frost$collections$CollectionView*) $tmp2392));
frost$core$Int $tmp2397 = (frost$core$Int) {1u};
int64_t $tmp2398 = $tmp2396.value;
int64_t $tmp2399 = $tmp2397.value;
int64_t $tmp2400 = $tmp2398 - $tmp2399;
frost$core$Int $tmp2401 = (frost$core$Int) {$tmp2400};
int64_t $tmp2402 = $tmp2401.value;
int64_t $tmp2403 = $tmp2355.value;
int64_t $tmp2404 = $tmp2402 - $tmp2403;
frost$core$Int $tmp2405 = (frost$core$Int) {$tmp2404};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp2406 = (frost$core$Int) {0u};
int64_t $tmp2407 = $tmp2405.value;
int64_t $tmp2408 = $tmp2406.value;
bool $tmp2409 = $tmp2407 >= $tmp2408;
frost$core$Bit $tmp2410 = (frost$core$Bit) {$tmp2409};
bool $tmp2411 = $tmp2410.value;
if ($tmp2411) goto block31; else goto block30;
block31:;
ITable* $tmp2412 = ((frost$collections$CollectionView*) $tmp2390)->$class->itable;
while ($tmp2412->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2412 = $tmp2412->next;
}
$fn2414 $tmp2413 = $tmp2412->methods[0];
frost$core$Int $tmp2415 = $tmp2413(((frost$collections$CollectionView*) $tmp2390));
int64_t $tmp2416 = $tmp2405.value;
int64_t $tmp2417 = $tmp2415.value;
bool $tmp2418 = $tmp2416 < $tmp2417;
frost$core$Bit $tmp2419 = (frost$core$Bit) {$tmp2418};
bool $tmp2420 = $tmp2419.value;
if ($tmp2420) goto block29; else goto block30;
block30:;
frost$core$Int $tmp2421 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2422, $tmp2421, &$s2423);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2424 = &$tmp2390->data;
frost$core$Object** $tmp2425 = *$tmp2424;
frost$core$Int64 $tmp2426 = frost$core$Int64$init$frost$core$Int($tmp2405);
int64_t $tmp2427 = $tmp2426.value;
frost$core$Object* $tmp2428 = $tmp2425[$tmp2427];
frost$core$Frost$ref$frost$core$Object$Q($tmp2428);
frost$core$Frost$ref$frost$core$Object$Q($tmp2428);
frost$core$Frost$unref$frost$core$Object$Q($tmp2428);
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp2429 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2429);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp2352, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp2428)), ((frost$core$Object*) ((frost$collections$Map*) $tmp2429)));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2352));
org$frostlang$frostc$Pair* $tmp2430 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2430));
*(&local9) = $tmp2352;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2429));
frost$core$Frost$unref$frost$core$Object$Q($tmp2428);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2352));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:345
frost$collections$Stack** $tmp2431 = &param0->captures;
frost$collections$Stack* $tmp2432 = *$tmp2431;
org$frostlang$frostc$Pair* $tmp2433 = *(&local9);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Closure.frost:345:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp2434 = &$tmp2432->contents;
frost$collections$Array* $tmp2435 = *$tmp2434;
frost$collections$Array$add$frost$collections$Array$T($tmp2435, ((frost$core$Object*) $tmp2433));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:346
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp2436 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp2437 = (frost$core$Int) {16u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp2436, $tmp2437);
*(&local10) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2436));
org$frostlang$frostc$Annotations* $tmp2438 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
*(&local10) = $tmp2436;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2436));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:347
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp2439 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$collections$Stack** $tmp2440 = &param0->currentClass;
frost$collections$Stack* $tmp2441 = *$tmp2440;
frost$core$Int $tmp2442 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Closure.frost:347:59
frost$core$Int $tmp2443 = (frost$core$Int) {0u};
int64_t $tmp2444 = $tmp2442.value;
int64_t $tmp2445 = $tmp2443.value;
bool $tmp2446 = $tmp2444 >= $tmp2445;
frost$core$Bit $tmp2447 = (frost$core$Bit) {$tmp2446};
bool $tmp2448 = $tmp2447.value;
if ($tmp2448) goto block36; else goto block35;
block36:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp2449 = &$tmp2441->contents;
frost$collections$Array* $tmp2450 = *$tmp2449;
ITable* $tmp2451 = ((frost$collections$CollectionView*) $tmp2450)->$class->itable;
while ($tmp2451->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2451 = $tmp2451->next;
}
$fn2453 $tmp2452 = $tmp2451->methods[0];
frost$core$Int $tmp2454 = $tmp2452(((frost$collections$CollectionView*) $tmp2450));
int64_t $tmp2455 = $tmp2442.value;
int64_t $tmp2456 = $tmp2454.value;
bool $tmp2457 = $tmp2455 < $tmp2456;
frost$core$Bit $tmp2458 = (frost$core$Bit) {$tmp2457};
bool $tmp2459 = $tmp2458.value;
if ($tmp2459) goto block34; else goto block35;
block35:;
frost$core$Int $tmp2460 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2461, $tmp2460, &$s2462);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp2463 = &$tmp2441->contents;
frost$collections$Array* $tmp2464 = *$tmp2463;
ITable* $tmp2465 = ((frost$collections$CollectionView*) $tmp2464)->$class->itable;
while ($tmp2465->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2465 = $tmp2465->next;
}
$fn2467 $tmp2466 = $tmp2465->methods[0];
frost$core$Int $tmp2468 = $tmp2466(((frost$collections$CollectionView*) $tmp2464));
int64_t $tmp2469 = $tmp2468.value;
int64_t $tmp2470 = $tmp2442.value;
bool $tmp2471 = $tmp2469 > $tmp2470;
frost$core$Bit $tmp2472 = (frost$core$Bit) {$tmp2471};
bool $tmp2473 = $tmp2472.value;
if ($tmp2473) goto block38; else goto block39;
block39:;
frost$core$Int $tmp2474 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2475, $tmp2474);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp2476 = &$tmp2441->contents;
frost$collections$Array* $tmp2477 = *$tmp2476;
frost$collections$Array** $tmp2478 = &$tmp2441->contents;
frost$collections$Array* $tmp2479 = *$tmp2478;
ITable* $tmp2480 = ((frost$collections$CollectionView*) $tmp2479)->$class->itable;
while ($tmp2480->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2480 = $tmp2480->next;
}
$fn2482 $tmp2481 = $tmp2480->methods[0];
frost$core$Int $tmp2483 = $tmp2481(((frost$collections$CollectionView*) $tmp2479));
frost$core$Int $tmp2484 = (frost$core$Int) {1u};
int64_t $tmp2485 = $tmp2483.value;
int64_t $tmp2486 = $tmp2484.value;
int64_t $tmp2487 = $tmp2485 - $tmp2486;
frost$core$Int $tmp2488 = (frost$core$Int) {$tmp2487};
int64_t $tmp2489 = $tmp2488.value;
int64_t $tmp2490 = $tmp2442.value;
int64_t $tmp2491 = $tmp2489 - $tmp2490;
frost$core$Int $tmp2492 = (frost$core$Int) {$tmp2491};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp2493 = (frost$core$Int) {0u};
int64_t $tmp2494 = $tmp2492.value;
int64_t $tmp2495 = $tmp2493.value;
bool $tmp2496 = $tmp2494 >= $tmp2495;
frost$core$Bit $tmp2497 = (frost$core$Bit) {$tmp2496};
bool $tmp2498 = $tmp2497.value;
if ($tmp2498) goto block43; else goto block42;
block43:;
ITable* $tmp2499 = ((frost$collections$CollectionView*) $tmp2477)->$class->itable;
while ($tmp2499->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2499 = $tmp2499->next;
}
$fn2501 $tmp2500 = $tmp2499->methods[0];
frost$core$Int $tmp2502 = $tmp2500(((frost$collections$CollectionView*) $tmp2477));
int64_t $tmp2503 = $tmp2492.value;
int64_t $tmp2504 = $tmp2502.value;
bool $tmp2505 = $tmp2503 < $tmp2504;
frost$core$Bit $tmp2506 = (frost$core$Bit) {$tmp2505};
bool $tmp2507 = $tmp2506.value;
if ($tmp2507) goto block41; else goto block42;
block42:;
frost$core$Int $tmp2508 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2509, $tmp2508, &$s2510);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2511 = &$tmp2477->data;
frost$core$Object** $tmp2512 = *$tmp2511;
frost$core$Int64 $tmp2513 = frost$core$Int64$init$frost$core$Int($tmp2492);
int64_t $tmp2514 = $tmp2513.value;
frost$core$Object* $tmp2515 = $tmp2512[$tmp2514];
frost$core$Frost$ref$frost$core$Object$Q($tmp2515);
frost$core$Frost$ref$frost$core$Object$Q($tmp2515);
frost$core$Frost$unref$frost$core$Object$Q($tmp2515);
org$frostlang$frostc$Annotations* $tmp2516 = *(&local10);
frost$core$String* $tmp2517 = *(&local0);
frost$collections$Array* $tmp2518 = *(&local1);
org$frostlang$frostc$Type* $tmp2519 = *(&local6);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2439, ((org$frostlang$frostc$ClassDecl*) $tmp2515), param1, ((frost$core$String*) NULL), $tmp2516, param2, $tmp2517, ((frost$collections$Array*) NULL), $tmp2518, $tmp2519, param5);
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
org$frostlang$frostc$MethodDecl* $tmp2520 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2520));
*(&local11) = $tmp2439;
frost$core$Frost$unref$frost$core$Object$Q($tmp2515);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:351
frost$core$Bit* $tmp2521 = &param0->writeCode;
frost$core$Bit $tmp2522 = *$tmp2521;
*(&local12) = $tmp2522;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:352
frost$core$Bit* $tmp2523 = &param0->reportErrors;
frost$core$Bit $tmp2524 = *$tmp2523;
*(&local13) = $tmp2524;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:353
frost$core$Bit $tmp2525 = (frost$core$Bit) {false};
frost$core$Bit* $tmp2526 = &param0->writeCode;
*$tmp2526 = $tmp2525;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:354
frost$core$Bit $tmp2527 = (frost$core$Bit) {false};
frost$core$Bit* $tmp2528 = &param0->reportErrors;
*$tmp2528 = $tmp2527;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:355
frost$collections$Stack** $tmp2529 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2530 = *$tmp2529;
*(&local14) = ((frost$collections$Stack*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
frost$collections$Stack* $tmp2531 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
*(&local14) = $tmp2530;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:356
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp2532 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp2532);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
frost$collections$Stack** $tmp2533 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2534 = *$tmp2533;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
frost$collections$Stack** $tmp2535 = &param0->enclosingContexts;
*$tmp2535 = $tmp2532;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:357
org$frostlang$frostc$MethodDecl* $tmp2536 = *(&local11);
org$frostlang$frostc$SymbolTable** $tmp2537 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2538 = *$tmp2537;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp2536, $tmp2538);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:358
frost$collections$Stack* $tmp2539 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2539));
frost$collections$Stack** $tmp2540 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2541 = *$tmp2540;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2541));
frost$collections$Stack** $tmp2542 = &param0->enclosingContexts;
*$tmp2542 = $tmp2539;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:359
frost$core$Bit $tmp2543 = *(&local12);
frost$core$Bit* $tmp2544 = &param0->writeCode;
*$tmp2544 = $tmp2543;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:360
frost$core$Bit $tmp2545 = *(&local13);
frost$core$Bit* $tmp2546 = &param0->reportErrors;
*$tmp2546 = $tmp2545;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:362
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:363
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:364
org$frostlang$frostc$Pair* $tmp2547 = *(&local9);
frost$core$Object** $tmp2548 = &$tmp2547->second;
frost$core$Object* $tmp2549 = *$tmp2548;
ITable* $tmp2550 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp2549))->$class->itable;
while ($tmp2550->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2550 = $tmp2550->next;
}
$fn2552 $tmp2551 = $tmp2550->methods[0];
frost$core$Int $tmp2553 = $tmp2551(((frost$collections$MapView*) ((frost$collections$Map*) $tmp2549)));
frost$core$Int $tmp2554 = (frost$core$Int) {0u};
int64_t $tmp2555 = $tmp2553.value;
int64_t $tmp2556 = $tmp2554.value;
bool $tmp2557 = $tmp2555 != $tmp2556;
frost$core$Bit $tmp2558 = (frost$core$Bit) {$tmp2557};
bool $tmp2559 = $tmp2558.value;
if ($tmp2559) goto block44; else goto block46;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:366
org$frostlang$frostc$MethodDecl* $tmp2560 = *(&local11);
org$frostlang$frostc$Pair* $tmp2561 = *(&local9);
frost$core$Object** $tmp2562 = &$tmp2561->second;
frost$core$Object* $tmp2563 = *$tmp2562;
ITable* $tmp2564 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp2563))->$class->itable;
while ($tmp2564->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2564 = $tmp2564->next;
}
$fn2566 $tmp2565 = $tmp2564->methods[5];
frost$collections$Iterator* $tmp2567 = $tmp2565(((frost$collections$MapView*) ((frost$collections$Map*) $tmp2563)));
ITable* $tmp2568 = $tmp2567->$class->itable;
while ($tmp2568->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2568 = $tmp2568->next;
}
$fn2570 $tmp2569 = $tmp2568->methods[7];
frost$collections$Array* $tmp2571 = $tmp2569($tmp2567);
org$frostlang$frostc$ClassDecl* $tmp2572 = org$frostlang$frostc$expression$Closure$createClosureClass$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlang$frostc$Compiler$Capture$GT$R$org$frostlang$frostc$ClassDecl(param0, $tmp2560, ((frost$collections$CollectionView*) $tmp2571));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
org$frostlang$frostc$ClassDecl* $tmp2573 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2573));
*(&local17) = $tmp2572;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:367
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2574 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2574);
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2574));
frost$collections$Array* $tmp2575 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2575));
*(&local18) = $tmp2574;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2574));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:368
org$frostlang$frostc$Pair* $tmp2576 = *(&local9);
frost$core$Object** $tmp2577 = &$tmp2576->second;
frost$core$Object* $tmp2578 = *$tmp2577;
ITable* $tmp2579 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp2578))->$class->itable;
while ($tmp2579->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2579 = $tmp2579->next;
}
$fn2581 $tmp2580 = $tmp2579->methods[5];
frost$collections$Iterator* $tmp2582 = $tmp2580(((frost$collections$MapView*) ((frost$collections$Map*) $tmp2578)));
goto block47;
block47:;
ITable* $tmp2583 = $tmp2582->$class->itable;
while ($tmp2583->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2583 = $tmp2583->next;
}
$fn2585 $tmp2584 = $tmp2583->methods[0];
frost$core$Bit $tmp2586 = $tmp2584($tmp2582);
bool $tmp2587 = $tmp2586.value;
if ($tmp2587) goto block49; else goto block48;
block48:;
*(&local19) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp2588 = $tmp2582->$class->itable;
while ($tmp2588->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2588 = $tmp2588->next;
}
$fn2590 $tmp2589 = $tmp2588->methods[1];
frost$core$Object* $tmp2591 = $tmp2589($tmp2582);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp2591)));
org$frostlang$frostc$Compiler$Capture* $tmp2592 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
*(&local19) = ((org$frostlang$frostc$Compiler$Capture*) $tmp2591);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:369
org$frostlang$frostc$Compiler$Capture* $tmp2593 = *(&local19);
frost$core$Int* $tmp2594 = &$tmp2593->$rawValue;
frost$core$Int $tmp2595 = *$tmp2594;
frost$core$Int $tmp2596 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:370:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2597 = $tmp2595.value;
int64_t $tmp2598 = $tmp2596.value;
bool $tmp2599 = $tmp2597 == $tmp2598;
frost$core$Bit $tmp2600 = (frost$core$Bit) {$tmp2599};
bool $tmp2601 = $tmp2600.value;
if ($tmp2601) goto block51; else goto block52;
block51:;
org$frostlang$frostc$Variable** $tmp2602 = (org$frostlang$frostc$Variable**) ($tmp2593->$data + 0);
org$frostlang$frostc$Variable* $tmp2603 = *$tmp2602;
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2603));
org$frostlang$frostc$Variable* $tmp2604 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2604));
*(&local20) = $tmp2603;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:371
frost$collections$Array* $tmp2605 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2606 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2607 = (frost$core$Int) {22u};
org$frostlang$frostc$Variable* $tmp2608 = *(&local20);
frost$core$String** $tmp2609 = &((org$frostlang$frostc$Symbol*) $tmp2608)->name;
frost$core$String* $tmp2610 = *$tmp2609;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp2606, $tmp2607, param1, $tmp2610);
frost$collections$Array$add$frost$collections$Array$T($tmp2605, ((frost$core$Object*) $tmp2606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2606));
org$frostlang$frostc$Variable* $tmp2611 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
goto block50;
block52:;
frost$core$Int $tmp2612 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:373:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2613 = $tmp2595.value;
int64_t $tmp2614 = $tmp2612.value;
bool $tmp2615 = $tmp2613 == $tmp2614;
frost$core$Bit $tmp2616 = (frost$core$Bit) {$tmp2615};
bool $tmp2617 = $tmp2616.value;
if ($tmp2617) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:374
frost$collections$Array* $tmp2618 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2619 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2620 = (frost$core$Int) {39u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position($tmp2619, $tmp2620, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp2618, ((frost$core$Object*) $tmp2619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2619));
goto block50;
block55:;
frost$core$Int $tmp2621 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:376:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2622 = $tmp2595.value;
int64_t $tmp2623 = $tmp2621.value;
bool $tmp2624 = $tmp2622 == $tmp2623;
frost$core$Bit $tmp2625 = (frost$core$Bit) {$tmp2624};
bool $tmp2626 = $tmp2625.value;
if ($tmp2626) goto block57; else goto block50;
block57:;
org$frostlang$frostc$FieldDecl** $tmp2627 = (org$frostlang$frostc$FieldDecl**) ($tmp2593->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp2628 = *$tmp2627;
*(&local21) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
org$frostlang$frostc$FieldDecl* $tmp2629 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
*(&local21) = $tmp2628;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:377
frost$collections$Array* $tmp2630 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2631 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2632 = (frost$core$Int) {16u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2633 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2634 = (frost$core$Int) {22u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp2633, $tmp2634, param1, &$s2635);
org$frostlang$frostc$FieldDecl* $tmp2636 = *(&local21);
frost$core$String** $tmp2637 = &((org$frostlang$frostc$Symbol*) $tmp2636)->name;
frost$core$String* $tmp2638 = *$tmp2637;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp2631, $tmp2632, param1, $tmp2633, $tmp2638);
frost$collections$Array$add$frost$collections$Array$T($tmp2630, ((frost$core$Object*) $tmp2631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
org$frostlang$frostc$FieldDecl* $tmp2639 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2639));
*(&local21) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block50;
block50:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2591);
org$frostlang$frostc$Compiler$Capture* $tmp2640 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
*(&local19) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block47;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:383
frost$collections$Stack** $tmp2641 = &param0->captures;
frost$collections$Stack* $tmp2642 = *$tmp2641;
frost$core$Object* $tmp2643 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2642);
frost$core$Frost$unref$frost$core$Object$Q($tmp2643);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:384
frost$collections$Array** $tmp2644 = &param0->pendingClasses;
frost$collections$Array* $tmp2645 = *$tmp2644;
org$frostlang$frostc$ClassDecl* $tmp2646 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp2645, ((frost$core$Object*) $tmp2646));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:385
org$frostlang$frostc$ClassDecl* $tmp2647 = *(&local17);
org$frostlang$frostc$Type** $tmp2648 = &$tmp2647->type;
org$frostlang$frostc$Type* $tmp2649 = *$tmp2648;
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:385:83
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3685
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2650 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2651 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3685:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp2652 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp2653 = *$tmp2652;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2654 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2655 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2654, $tmp2655);
frost$collections$Array$add$frost$collections$Array$T($tmp2654, ((frost$core$Object*) $tmp2649));
org$frostlang$frostc$Type* $tmp2656 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2653, ((frost$collections$ListView*) $tmp2654));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp2650, $tmp2651, $tmp2649, $tmp2656);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
frost$collections$Array* $tmp2657 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp2658 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2657);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2659 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2660 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp2659, $tmp2660);
org$frostlang$frostc$IR$Value* $tmp2661 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2650, ((frost$collections$ListView*) $tmp2658), $tmp2659);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
org$frostlang$frostc$IR$Value* $tmp2662 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
*(&local22) = $tmp2661;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:387
org$frostlang$frostc$IR$Value* $tmp2663 = *(&local22);
frost$core$Bit $tmp2664 = (frost$core$Bit) {$tmp2663 == NULL};
bool $tmp2665 = $tmp2664.value;
if ($tmp2665) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:388
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp2666 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2666));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2667 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2667));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2668 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp2669 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2669));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp2670 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2670));
*(&local14) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2671 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp2672 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
*(&local10) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp2673 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2673));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp2674 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2674));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2675 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2676 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2676));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:390
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2677 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2678 = (frost$core$Int) {26u};
org$frostlang$frostc$IR$Value* $tmp2679 = *(&local22);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2677, $tmp2678, param1, $tmp2679);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2677));
org$frostlang$frostc$ASTNode* $tmp2680 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2680));
*(&local16) = $tmp2677;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2677));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:391
org$frostlang$frostc$ClassDecl* $tmp2681 = *(&local17);
org$frostlang$frostc$Type** $tmp2682 = &$tmp2681->type;
org$frostlang$frostc$Type* $tmp2683 = *$tmp2682;
frost$core$Bit $tmp2684 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp2683);
*(&local15) = $tmp2684;
org$frostlang$frostc$IR$Value* $tmp2685 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2685));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2686 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2686));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2687 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2687));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block45;
block46:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:395
frost$collections$Stack** $tmp2688 = &param0->captures;
frost$collections$Stack* $tmp2689 = *$tmp2688;
frost$core$Object* $tmp2690 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2689);
frost$core$Frost$unref$frost$core$Object$Q($tmp2690);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:396
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp2691 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp2691);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
frost$collections$Stack** $tmp2692 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2693 = *$tmp2692;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2693));
frost$collections$Stack** $tmp2694 = &param0->enclosingContexts;
*$tmp2694 = $tmp2691;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:397
org$frostlang$frostc$MethodDecl* $tmp2695 = *(&local11);
org$frostlang$frostc$SymbolTable** $tmp2696 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2697 = *$tmp2696;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp2695, $tmp2697);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:398
frost$collections$Stack* $tmp2698 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
frost$collections$Stack** $tmp2699 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2700 = *$tmp2699;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
frost$collections$Stack** $tmp2701 = &param0->enclosingContexts;
*$tmp2701 = $tmp2698;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:399
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2702 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2703 = (frost$core$Int) {31u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position($tmp2702, $tmp2703, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
org$frostlang$frostc$ASTNode* $tmp2704 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
*(&local16) = $tmp2702;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:400
frost$core$Bit $tmp2705 = (frost$core$Bit) {true};
*(&local15) = $tmp2705;
goto block45;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:402
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2706 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2706);
*(&local23) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
frost$collections$Array* $tmp2707 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
*(&local23) = $tmp2706;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:403
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:404
org$frostlang$frostc$MethodDecl* $tmp2708 = *(&local11);
org$frostlang$frostc$Annotations** $tmp2709 = &$tmp2708->annotations;
org$frostlang$frostc$Annotations* $tmp2710 = *$tmp2709;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Closure.frost:404:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int* $tmp2711 = &$tmp2710->flags;
frost$core$Int $tmp2712 = *$tmp2711;
frost$core$Int $tmp2713 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2714 = $tmp2712.value;
int64_t $tmp2715 = $tmp2713.value;
int64_t $tmp2716 = $tmp2714 & $tmp2715;
frost$core$Int $tmp2717 = (frost$core$Int) {$tmp2716};
frost$core$Int $tmp2718 = (frost$core$Int) {0u};
int64_t $tmp2719 = $tmp2717.value;
int64_t $tmp2720 = $tmp2718.value;
bool $tmp2721 = $tmp2719 != $tmp2720;
frost$core$Bit $tmp2722 = (frost$core$Bit) {$tmp2721};
bool $tmp2723 = $tmp2722.value;
if ($tmp2723) goto block63; else goto block65;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:405
org$frostlang$frostc$MethodDecl* $tmp2724 = *(&local11);
org$frostlang$frostc$Type* $tmp2725 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp2724, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
org$frostlang$frostc$Type* $tmp2726 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
*(&local24) = $tmp2725;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
goto block64;
block65:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:408
org$frostlang$frostc$MethodDecl* $tmp2727 = *(&local11);
org$frostlang$frostc$MethodDecl* $tmp2728 = *(&local11);
frost$core$Weak** $tmp2729 = &$tmp2728->owner;
frost$core$Weak* $tmp2730 = *$tmp2729;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Closure.frost:408:78
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2731 = &$tmp2730->_valid;
frost$core$Bit $tmp2732 = *$tmp2731;
bool $tmp2733 = $tmp2732.value;
if ($tmp2733) goto block70; else goto block71;
block71:;
frost$core$Int $tmp2734 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2735, $tmp2734);
abort(); // unreachable
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2736 = &$tmp2730->value;
frost$core$Object* $tmp2737 = *$tmp2736;
frost$core$Frost$ref$frost$core$Object$Q($tmp2737);
org$frostlang$frostc$Type** $tmp2738 = &((org$frostlang$frostc$ClassDecl*) $tmp2737)->type;
org$frostlang$frostc$Type* $tmp2739 = *$tmp2738;
frost$core$Bit $tmp2740 = (frost$core$Bit) {false};
org$frostlang$frostc$Type* $tmp2741 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp2727, $tmp2739, $tmp2740);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2741));
org$frostlang$frostc$Type* $tmp2742 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
*(&local24) = $tmp2741;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2741));
frost$core$Frost$unref$frost$core$Object$Q($tmp2737);
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:410
org$frostlang$frostc$Type* $tmp2743 = *(&local24);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Closure.frost:410:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:283
org$frostlang$frostc$Type** $tmp2744 = &param0->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp2745 = *$tmp2744;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2746 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2747 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2746, $tmp2747);
frost$collections$Array$add$frost$collections$Array$T($tmp2746, ((frost$core$Object*) $tmp2743));
org$frostlang$frostc$Type* $tmp2748 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2745, ((frost$collections$ListView*) $tmp2746));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2746));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2748));
org$frostlang$frostc$Type* $tmp2749 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2749));
*(&local25) = $tmp2748;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2748));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:411
frost$collections$Array* $tmp2750 = *(&local23);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2751 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2752 = (frost$core$Int) {26u};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2753 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2754 = (frost$core$Int) {3u};
org$frostlang$frostc$MethodDecl* $tmp2755 = *(&local11);
org$frostlang$frostc$Type* $tmp2756 = *(&local25);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp2753, $tmp2754, $tmp2755, $tmp2756);
org$frostlang$frostc$Type** $tmp2757 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp2758 = *$tmp2757;
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Closure.frost:412:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:283
org$frostlang$frostc$Type** $tmp2759 = &param0->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp2760 = *$tmp2759;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2761 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2762 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2761, $tmp2762);
frost$collections$Array$add$frost$collections$Array$T($tmp2761, ((frost$core$Object*) $tmp2758));
org$frostlang$frostc$Type* $tmp2763 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2760, ((frost$collections$ListView*) $tmp2761));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
org$frostlang$frostc$IR$Value* $tmp2764 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2753, $tmp2763);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2751, $tmp2752, param1, $tmp2764);
frost$collections$Array$add$frost$collections$Array$T($tmp2750, ((frost$core$Object*) $tmp2751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2751));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:414
frost$collections$Array* $tmp2765 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp2766 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp2765, ((frost$core$Object*) $tmp2766));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:415
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:416
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:417
frost$core$Bit $tmp2767 = *(&local15);
bool $tmp2768 = $tmp2767.value;
if ($tmp2768) goto block74; else goto block76;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:418
org$frostlang$frostc$Type** $tmp2769 = &param0->METHOD_TYPE;
org$frostlang$frostc$Type* $tmp2770 = *$tmp2769;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2770));
org$frostlang$frostc$Type* $tmp2771 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
*(&local26) = $tmp2770;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:419
org$frostlang$frostc$MethodDecl* $tmp2772 = *(&local11);
org$frostlang$frostc$Type* $tmp2773 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp2772, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2773));
org$frostlang$frostc$Type* $tmp2774 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2774));
*(&local27) = $tmp2773;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2773));
goto block75;
block76:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:422
org$frostlang$frostc$Type** $tmp2775 = &param0->MUTABLE_METHOD_TYPE;
org$frostlang$frostc$Type* $tmp2776 = *$tmp2775;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2776));
org$frostlang$frostc$Type* $tmp2777 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2777));
*(&local26) = $tmp2776;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:423
org$frostlang$frostc$MethodDecl* $tmp2778 = *(&local11);
org$frostlang$frostc$Type* $tmp2779 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp2778, param0);
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
org$frostlang$frostc$Type* $tmp2780 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
*(&local28) = $tmp2779;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:424
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2781 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2781);
*(&local29) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
frost$collections$Array* $tmp2782 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
*(&local29) = $tmp2781;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:425
frost$core$Int $tmp2783 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp2784 = *(&local28);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Closure.frost:425:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2785 = &$tmp2784->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2786 = *$tmp2785;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
ITable* $tmp2787 = ((frost$collections$CollectionView*) $tmp2786)->$class->itable;
while ($tmp2787->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2787 = $tmp2787->next;
}
$fn2789 $tmp2788 = $tmp2787->methods[0];
frost$core$Int $tmp2790 = $tmp2788(((frost$collections$CollectionView*) $tmp2786));
frost$core$Int $tmp2791 = (frost$core$Int) {1u};
int64_t $tmp2792 = $tmp2790.value;
int64_t $tmp2793 = $tmp2791.value;
int64_t $tmp2794 = $tmp2792 - $tmp2793;
frost$core$Int $tmp2795 = (frost$core$Int) {$tmp2794};
frost$core$Bit $tmp2796 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2797 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2783, $tmp2795, $tmp2796);
frost$core$Int $tmp2798 = $tmp2797.min;
*(&local30) = $tmp2798;
frost$core$Int $tmp2799 = $tmp2797.max;
frost$core$Bit $tmp2800 = $tmp2797.inclusive;
bool $tmp2801 = $tmp2800.value;
frost$core$Int $tmp2802 = (frost$core$Int) {1u};
if ($tmp2801) goto block81; else goto block82;
block81:;
int64_t $tmp2803 = $tmp2798.value;
int64_t $tmp2804 = $tmp2799.value;
bool $tmp2805 = $tmp2803 <= $tmp2804;
frost$core$Bit $tmp2806 = (frost$core$Bit) {$tmp2805};
bool $tmp2807 = $tmp2806.value;
if ($tmp2807) goto block78; else goto block79;
block82:;
int64_t $tmp2808 = $tmp2798.value;
int64_t $tmp2809 = $tmp2799.value;
bool $tmp2810 = $tmp2808 < $tmp2809;
frost$core$Bit $tmp2811 = (frost$core$Bit) {$tmp2810};
bool $tmp2812 = $tmp2811.value;
if ($tmp2812) goto block78; else goto block79;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:426
frost$collections$Array* $tmp2813 = *(&local29);
org$frostlang$frostc$Type* $tmp2814 = *(&local28);
frost$core$Int $tmp2815 = *(&local30);
// begin inline call to function org.frostlang.frostc.Type.parameterType(i:frost.core.Int):org.frostlang.frostc.Type from Closure.frost:426:57
org$frostlang$frostc$Type$Kind* $tmp2816 = &$tmp2814->typeKind;
org$frostlang$frostc$Type$Kind $tmp2817 = *$tmp2816;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2818;
$tmp2818 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2818->value = $tmp2817;
frost$core$Int $tmp2819 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2820 = &(&local32)->$rawValue;
*$tmp2820 = $tmp2819;
org$frostlang$frostc$Type$Kind $tmp2821 = *(&local32);
*(&local31) = $tmp2821;
org$frostlang$frostc$Type$Kind $tmp2822 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2823;
$tmp2823 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2823->value = $tmp2822;
ITable* $tmp2824 = ((frost$core$Equatable*) $tmp2818)->$class->itable;
while ($tmp2824->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2824 = $tmp2824->next;
}
$fn2826 $tmp2825 = $tmp2824->methods[0];
frost$core$Bit $tmp2827 = $tmp2825(((frost$core$Equatable*) $tmp2818), ((frost$core$Equatable*) $tmp2823));
bool $tmp2828 = $tmp2827.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2823)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2818)));
if ($tmp2828) goto block87; else goto block90;
block90:;
org$frostlang$frostc$Type$Kind* $tmp2829 = &$tmp2814->typeKind;
org$frostlang$frostc$Type$Kind $tmp2830 = *$tmp2829;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2831;
$tmp2831 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2831->value = $tmp2830;
frost$core$Int $tmp2832 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2833 = &(&local34)->$rawValue;
*$tmp2833 = $tmp2832;
org$frostlang$frostc$Type$Kind $tmp2834 = *(&local34);
*(&local33) = $tmp2834;
org$frostlang$frostc$Type$Kind $tmp2835 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2836;
$tmp2836 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2836->value = $tmp2835;
ITable* $tmp2837 = ((frost$core$Equatable*) $tmp2831)->$class->itable;
while ($tmp2837->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2837 = $tmp2837->next;
}
$fn2839 $tmp2838 = $tmp2837->methods[0];
frost$core$Bit $tmp2840 = $tmp2838(((frost$core$Equatable*) $tmp2831), ((frost$core$Equatable*) $tmp2836));
bool $tmp2841 = $tmp2840.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2836)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2831)));
if ($tmp2841) goto block87; else goto block89;
block89:;
org$frostlang$frostc$Type$Kind* $tmp2842 = &$tmp2814->typeKind;
org$frostlang$frostc$Type$Kind $tmp2843 = *$tmp2842;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2844;
$tmp2844 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2844->value = $tmp2843;
frost$core$Int $tmp2845 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2846 = &(&local36)->$rawValue;
*$tmp2846 = $tmp2845;
org$frostlang$frostc$Type$Kind $tmp2847 = *(&local36);
*(&local35) = $tmp2847;
org$frostlang$frostc$Type$Kind $tmp2848 = *(&local35);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2849;
$tmp2849 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2849->value = $tmp2848;
ITable* $tmp2850 = ((frost$core$Equatable*) $tmp2844)->$class->itable;
while ($tmp2850->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2850 = $tmp2850->next;
}
$fn2852 $tmp2851 = $tmp2850->methods[0];
frost$core$Bit $tmp2853 = $tmp2851(((frost$core$Equatable*) $tmp2844), ((frost$core$Equatable*) $tmp2849));
bool $tmp2854 = $tmp2853.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2849)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2844)));
if ($tmp2854) goto block87; else goto block88;
block88:;
org$frostlang$frostc$Type$Kind* $tmp2855 = &$tmp2814->typeKind;
org$frostlang$frostc$Type$Kind $tmp2856 = *$tmp2855;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2857;
$tmp2857 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2857->value = $tmp2856;
frost$core$Int $tmp2858 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:426:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2859 = &(&local38)->$rawValue;
*$tmp2859 = $tmp2858;
org$frostlang$frostc$Type$Kind $tmp2860 = *(&local38);
*(&local37) = $tmp2860;
org$frostlang$frostc$Type$Kind $tmp2861 = *(&local37);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2862;
$tmp2862 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2862->value = $tmp2861;
ITable* $tmp2863 = ((frost$core$Equatable*) $tmp2857)->$class->itable;
while ($tmp2863->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2863 = $tmp2863->next;
}
$fn2865 $tmp2864 = $tmp2863->methods[0];
frost$core$Bit $tmp2866 = $tmp2864(((frost$core$Equatable*) $tmp2857), ((frost$core$Equatable*) $tmp2862));
bool $tmp2867 = $tmp2866.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2862)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2857)));
if ($tmp2867) goto block87; else goto block85;
block87:;
frost$core$Int $tmp2868 = (frost$core$Int) {0u};
int64_t $tmp2869 = $tmp2815.value;
int64_t $tmp2870 = $tmp2868.value;
bool $tmp2871 = $tmp2869 >= $tmp2870;
frost$core$Bit $tmp2872 = (frost$core$Bit) {$tmp2871};
bool $tmp2873 = $tmp2872.value;
if ($tmp2873) goto block86; else goto block85;
block86:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:426:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2874 = &$tmp2814->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2875 = *$tmp2874;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
ITable* $tmp2876 = ((frost$collections$CollectionView*) $tmp2875)->$class->itable;
while ($tmp2876->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2876 = $tmp2876->next;
}
$fn2878 $tmp2877 = $tmp2876->methods[0];
frost$core$Int $tmp2879 = $tmp2877(((frost$collections$CollectionView*) $tmp2875));
frost$core$Int $tmp2880 = (frost$core$Int) {1u};
int64_t $tmp2881 = $tmp2879.value;
int64_t $tmp2882 = $tmp2880.value;
int64_t $tmp2883 = $tmp2881 - $tmp2882;
frost$core$Int $tmp2884 = (frost$core$Int) {$tmp2883};
int64_t $tmp2885 = $tmp2815.value;
int64_t $tmp2886 = $tmp2884.value;
bool $tmp2887 = $tmp2885 < $tmp2886;
frost$core$Bit $tmp2888 = (frost$core$Bit) {$tmp2887};
bool $tmp2889 = $tmp2888.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
if ($tmp2889) goto block84; else goto block85;
block85:;
frost$core$Int $tmp2890 = (frost$core$Int) {427u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2891, $tmp2890, &$s2892);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:428
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:428:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2893 = &$tmp2814->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2894 = *$tmp2893;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
frost$core$Object* $tmp2895 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2894, $tmp2815);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2895)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2895);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
frost$collections$Array$add$frost$collections$Array$T($tmp2813, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2895)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2895)));
frost$core$Int $tmp2896 = *(&local30);
int64_t $tmp2897 = $tmp2799.value;
int64_t $tmp2898 = $tmp2896.value;
int64_t $tmp2899 = $tmp2897 - $tmp2898;
frost$core$Int $tmp2900 = (frost$core$Int) {$tmp2899};
if ($tmp2801) goto block98; else goto block99;
block98:;
int64_t $tmp2901 = $tmp2900.value;
int64_t $tmp2902 = $tmp2802.value;
bool $tmp2903 = $tmp2901 >= $tmp2902;
frost$core$Bit $tmp2904 = (frost$core$Bit) {$tmp2903};
bool $tmp2905 = $tmp2904.value;
if ($tmp2905) goto block97; else goto block79;
block99:;
int64_t $tmp2906 = $tmp2900.value;
int64_t $tmp2907 = $tmp2802.value;
bool $tmp2908 = $tmp2906 > $tmp2907;
frost$core$Bit $tmp2909 = (frost$core$Bit) {$tmp2908};
bool $tmp2910 = $tmp2909.value;
if ($tmp2910) goto block97; else goto block79;
block97:;
int64_t $tmp2911 = $tmp2896.value;
int64_t $tmp2912 = $tmp2802.value;
int64_t $tmp2913 = $tmp2911 + $tmp2912;
frost$core$Int $tmp2914 = (frost$core$Int) {$tmp2913};
*(&local30) = $tmp2914;
goto block78;
block79:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:428
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:429
org$frostlang$frostc$MethodDecl* $tmp2915 = *(&local11);
org$frostlang$frostc$MethodDecl$Kind* $tmp2916 = &$tmp2915->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2917 = *$tmp2916;
frost$core$Int $tmp2918 = $tmp2917.$rawValue;
frost$core$Int $tmp2919 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:430:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2920 = $tmp2918.value;
int64_t $tmp2921 = $tmp2919.value;
bool $tmp2922 = $tmp2920 == $tmp2921;
frost$core$Bit $tmp2923 = (frost$core$Bit) {$tmp2922};
bool $tmp2924 = $tmp2923.value;
if ($tmp2924) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:430
frost$core$Int $tmp2925 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Closure.frost:430:68
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2926 = &(&local41)->$rawValue;
*$tmp2926 = $tmp2925;
org$frostlang$frostc$Type$Kind $tmp2927 = *(&local41);
*(&local40) = $tmp2927;
org$frostlang$frostc$Type$Kind $tmp2928 = *(&local40);
*(&local39) = $tmp2928;
goto block100;
block102:;
frost$core$Int $tmp2929 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:431:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2930 = $tmp2918.value;
int64_t $tmp2931 = $tmp2929.value;
bool $tmp2932 = $tmp2930 == $tmp2931;
frost$core$Bit $tmp2933 = (frost$core$Bit) {$tmp2932};
bool $tmp2934 = $tmp2933.value;
if ($tmp2934) goto block105; else goto block106;
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:431
frost$core$Int $tmp2935 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Closure.frost:431:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2936 = &(&local43)->$rawValue;
*$tmp2936 = $tmp2935;
org$frostlang$frostc$Type$Kind $tmp2937 = *(&local43);
*(&local42) = $tmp2937;
org$frostlang$frostc$Type$Kind $tmp2938 = *(&local42);
*(&local39) = $tmp2938;
goto block100;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:432
frost$core$Int $tmp2939 = (frost$core$Int) {432u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2940, $tmp2939);
abort(); // unreachable
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:434
org$frostlang$frostc$Type$Kind $tmp2941 = *(&local39);
frost$collections$Array* $tmp2942 = *(&local29);
org$frostlang$frostc$Type* $tmp2943 = *(&local28);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:435:28
org$frostlang$frostc$Type$Kind* $tmp2944 = &$tmp2943->typeKind;
org$frostlang$frostc$Type$Kind $tmp2945 = *$tmp2944;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2946;
$tmp2946 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2946->value = $tmp2945;
frost$core$Int $tmp2947 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2948 = &(&local45)->$rawValue;
*$tmp2948 = $tmp2947;
org$frostlang$frostc$Type$Kind $tmp2949 = *(&local45);
*(&local44) = $tmp2949;
org$frostlang$frostc$Type$Kind $tmp2950 = *(&local44);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2951;
$tmp2951 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2951->value = $tmp2950;
ITable* $tmp2952 = ((frost$core$Equatable*) $tmp2946)->$class->itable;
while ($tmp2952->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2952 = $tmp2952->next;
}
$fn2954 $tmp2953 = $tmp2952->methods[0];
frost$core$Bit $tmp2955 = $tmp2953(((frost$core$Equatable*) $tmp2946), ((frost$core$Equatable*) $tmp2951));
bool $tmp2956 = $tmp2955.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2951)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2946)));
if ($tmp2956) goto block110; else goto block114;
block114:;
org$frostlang$frostc$Type$Kind* $tmp2957 = &$tmp2943->typeKind;
org$frostlang$frostc$Type$Kind $tmp2958 = *$tmp2957;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2959;
$tmp2959 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2959->value = $tmp2958;
frost$core$Int $tmp2960 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2961 = &(&local47)->$rawValue;
*$tmp2961 = $tmp2960;
org$frostlang$frostc$Type$Kind $tmp2962 = *(&local47);
*(&local46) = $tmp2962;
org$frostlang$frostc$Type$Kind $tmp2963 = *(&local46);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2964;
$tmp2964 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2964->value = $tmp2963;
ITable* $tmp2965 = ((frost$core$Equatable*) $tmp2959)->$class->itable;
while ($tmp2965->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2965 = $tmp2965->next;
}
$fn2967 $tmp2966 = $tmp2965->methods[0];
frost$core$Bit $tmp2968 = $tmp2966(((frost$core$Equatable*) $tmp2959), ((frost$core$Equatable*) $tmp2964));
bool $tmp2969 = $tmp2968.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2964)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2959)));
if ($tmp2969) goto block110; else goto block113;
block113:;
org$frostlang$frostc$Type$Kind* $tmp2970 = &$tmp2943->typeKind;
org$frostlang$frostc$Type$Kind $tmp2971 = *$tmp2970;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2972;
$tmp2972 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2972->value = $tmp2971;
frost$core$Int $tmp2973 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2974 = &(&local49)->$rawValue;
*$tmp2974 = $tmp2973;
org$frostlang$frostc$Type$Kind $tmp2975 = *(&local49);
*(&local48) = $tmp2975;
org$frostlang$frostc$Type$Kind $tmp2976 = *(&local48);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2977;
$tmp2977 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2977->value = $tmp2976;
ITable* $tmp2978 = ((frost$core$Equatable*) $tmp2972)->$class->itable;
while ($tmp2978->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2978 = $tmp2978->next;
}
$fn2980 $tmp2979 = $tmp2978->methods[0];
frost$core$Bit $tmp2981 = $tmp2979(((frost$core$Equatable*) $tmp2972), ((frost$core$Equatable*) $tmp2977));
bool $tmp2982 = $tmp2981.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2977)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2972)));
if ($tmp2982) goto block110; else goto block112;
block112:;
org$frostlang$frostc$Type$Kind* $tmp2983 = &$tmp2943->typeKind;
org$frostlang$frostc$Type$Kind $tmp2984 = *$tmp2983;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2985;
$tmp2985 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2985->value = $tmp2984;
frost$core$Int $tmp2986 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2987 = &(&local51)->$rawValue;
*$tmp2987 = $tmp2986;
org$frostlang$frostc$Type$Kind $tmp2988 = *(&local51);
*(&local50) = $tmp2988;
org$frostlang$frostc$Type$Kind $tmp2989 = *(&local50);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2990;
$tmp2990 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2990->value = $tmp2989;
ITable* $tmp2991 = ((frost$core$Equatable*) $tmp2985)->$class->itable;
while ($tmp2991->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2991 = $tmp2991->next;
}
$fn2993 $tmp2992 = $tmp2991->methods[0];
frost$core$Bit $tmp2994 = $tmp2992(((frost$core$Equatable*) $tmp2985), ((frost$core$Equatable*) $tmp2990));
bool $tmp2995 = $tmp2994.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2990)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2985)));
if ($tmp2995) goto block110; else goto block111;
block111:;
frost$core$Int $tmp2996 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2997, $tmp2996, &$s2998);
abort(); // unreachable
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2999 = &$tmp2943->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3000 = *$tmp2999;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3000));
ITable* $tmp3001 = ((frost$collections$ListView*) $tmp3000)->$class->itable;
while ($tmp3001->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp3001 = $tmp3001->next;
}
$fn3003 $tmp3002 = $tmp3001->methods[5];
frost$core$Object* $tmp3004 = $tmp3002(((frost$collections$ListView*) $tmp3000));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3004)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3004);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3000));
org$frostlang$frostc$Type* $tmp3005 = *(&local28);
frost$core$Int* $tmp3006 = &$tmp3005->priority;
frost$core$Int $tmp3007 = *$tmp3006;
org$frostlang$frostc$Type* $tmp3008 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param0, param1, $tmp2941, ((frost$collections$ListView*) $tmp2942), ((org$frostlang$frostc$Type*) $tmp3004), $tmp3007);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3008));
org$frostlang$frostc$Type* $tmp3009 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3009));
*(&local27) = $tmp3008;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3008));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3004)));
frost$collections$Array* $tmp3010 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3010));
*(&local29) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3011 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3011));
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
goto block75;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:437
org$frostlang$frostc$Type* $tmp3012 = *(&local26);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:438:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3685
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp3013 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp3014 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3685:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp3015 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp3016 = *$tmp3015;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3017 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3018 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp3017, $tmp3018);
frost$collections$Array$add$frost$collections$Array$T($tmp3017, ((frost$core$Object*) $tmp3012));
org$frostlang$frostc$Type* $tmp3019 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp3016, ((frost$collections$ListView*) $tmp3017));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3017));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp3013, $tmp3014, $tmp3012, $tmp3019);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
frost$collections$Array* $tmp3020 = *(&local23);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3021 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3022 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp3021, $tmp3022);
org$frostlang$frostc$IR$Value* $tmp3023 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3013, ((frost$collections$ListView*) $tmp3020), $tmp3021);
org$frostlang$frostc$Type* $tmp3024 = *(&local27);
org$frostlang$frostc$IR$Value* $tmp3025 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3023, $tmp3024);
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
org$frostlang$frostc$IR$Value* $tmp3026 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3026));
*(&local52) = $tmp3025;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:439
org$frostlang$frostc$IR$Value* $tmp3027 = *(&local52);
org$frostlang$frostc$IR$Value* $tmp3028 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3027, param6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3028));
org$frostlang$frostc$IR$Value* $tmp3029 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3029));
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp3030 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3030));
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3031 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3031));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3032 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3032));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3033 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3033));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp3034 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
*(&local23) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3035 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3035));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp3036 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3036));
*(&local14) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp3037 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3037));
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp3038 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3038));
*(&local10) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp3039 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp3040 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp3041 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp3042 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3028;

}
void org$frostlang$frostc$expression$Closure$init(org$frostlang$frostc$expression$Closure* param0) {

return;

}
void org$frostlang$frostc$expression$Closure$cleanup(org$frostlang$frostc$expression$Closure* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:23
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

