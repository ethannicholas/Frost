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
typedef frost$core$Bit (*$fn1277)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1290)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1303)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1316)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1331)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn1404)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1417)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1430)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1443)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1458)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn1488)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1543)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1566)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1579)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1592)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1605)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1620)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn1676)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1724)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1737)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1750)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1763)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1776)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1791)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1805)(frost$core$Object*);
typedef frost$core$Int (*$fn1821)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1875)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1888)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1901)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1914)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1932)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1995)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2018)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2031)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2044)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2057)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn2072)(frost$collections$ListView*);
typedef frost$core$Int (*$fn2116)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2128)(org$frostlang$frostc$Type*, org$frostlang$frostc$Type*);
typedef frost$collections$ListView* (*$fn2136)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn2147)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2151)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2156)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2162)(frost$core$Object*);
typedef frost$core$String* (*$fn2195)(frost$core$Object*);
typedef frost$core$String* (*$fn2203)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2291)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn2295)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2314)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2325)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2329)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2334)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2405)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn2426)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2440)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2455)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2474)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2513)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2527)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2542)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2561)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2612)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn2626)(frost$collections$MapView*);
typedef frost$collections$Array* (*$fn2630)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2641)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn2645)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2650)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2854)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2891)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2904)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2917)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2930)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn2948)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3029)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3042)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3055)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3068)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn3083)(frost$collections$ListView*);

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
static frost$core$String $s1230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1448 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1455 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1609 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1610 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1616 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1617 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1684 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1685 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1780 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1781 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 95, -6421234203817919051, NULL };
static frost$core$String $s1787 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1788 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1808 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, -5098893480802846476, NULL };
static frost$core$String $s1810 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x6c\x61\x6d\x62\x64\x61\x20\x77\x69\x74\x68\x20\x77\x72\x6f\x6e\x67\x20", 31, 8296972873421398743, NULL };
static frost$core$String $s1812 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 20, 2029680644997683659, NULL };
static frost$core$String $s1928 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1929 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1945 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1946 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 117, 1927758743463322527, NULL };
static frost$core$String $s1952 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1953 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1969 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2003 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2004 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2061 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2062 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s2068 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2069 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x65\x72\x72\x6f\x72", 12, 5959780354246604584, NULL };
static frost$core$String $s2165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x77\x68\x65\x6e\x20\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x64\x20\x61\x73\x20\x27", 26, -4042546728974569170, NULL };
static frost$core$String $s2167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3a", 2, 557192943631749204, NULL };
static frost$core$String $s2198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x72\x65\x63\x65\x69\x76\x65\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 51, 3365978283385468850, NULL };
static frost$core$String $s2200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20", 6, -1493373441645224251, NULL };
static frost$core$String $s2206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x20", 5, -4937494473629816297, NULL };
static frost$core$String $s2208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, -3892980340820393091, NULL };
static frost$core$String $s2251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, -3892980340820393091, NULL };
static frost$core$String $s2273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x74\x79\x70\x65\x20\x77\x61\x73\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x61\x6e\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x63\x6f\x6e\x74\x65\x78\x74", 67, -2078875877935671909, NULL };
static frost$core$String $s2317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 10, 2350954303234509524, NULL };
static frost$core$String $s2319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 4631530323501320402, NULL };
static frost$core$String $s2434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s2435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s2448 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s2482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s2522 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s2535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s2569 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2570 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2695 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s2795 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2851 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2944 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2945 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2961 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2962 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 117, 1927758743463322527, NULL };
static frost$core$String $s2968 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2969 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3015 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s3072 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3073 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s3079 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3080 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:158
frost$core$Int* $tmp82 = &$tmp81->flags;
frost$core$Int $tmp83 = *$tmp82;
frost$core$Int $tmp84 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:158:22
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:889
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
frost$core$Bit $tmp1227 = (frost$core$Bit) {$tmp1226 != NULL};
bool $tmp1228 = $tmp1227.value;
if ($tmp1228) goto block30; else goto block31;
block31:;
frost$core$Int $tmp1229 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1230, $tmp1229, &$s1231);
abort(); // unreachable
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
frost$core$Int $tmp1232 = (frost$core$Int) {0u};
frost$core$Object* $tmp1233 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1226, $tmp1232);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1233)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1233);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp1233);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1233)));
goto block25;
block25:;
org$frostlang$frostc$Type* $tmp1234 = *(&local12);
// begin inline call to function org.frostlang.frostc.Type.get_isMethod():frost.core.Bit from Closure.frost:180:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:377
org$frostlang$frostc$Type$Kind* $tmp1235 = &$tmp1234->typeKind;
org$frostlang$frostc$Type$Kind $tmp1236 = *$tmp1235;
frost$core$Int $tmp1237 = $tmp1236.$rawValue;
frost$core$Int $tmp1238 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1239 = $tmp1237.value;
int64_t $tmp1240 = $tmp1238.value;
bool $tmp1241 = $tmp1239 == $tmp1240;
frost$core$Bit $tmp1242 = (frost$core$Bit) {$tmp1241};
bool $tmp1243 = $tmp1242.value;
if ($tmp1243) goto block34; else goto block35;
block35:;
frost$core$Int $tmp1244 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1245 = $tmp1237.value;
int64_t $tmp1246 = $tmp1244.value;
bool $tmp1247 = $tmp1245 == $tmp1246;
frost$core$Bit $tmp1248 = (frost$core$Bit) {$tmp1247};
bool $tmp1249 = $tmp1248.value;
if ($tmp1249) goto block34; else goto block37;
block37:;
frost$core$Int $tmp1250 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1251 = $tmp1237.value;
int64_t $tmp1252 = $tmp1250.value;
bool $tmp1253 = $tmp1251 == $tmp1252;
frost$core$Bit $tmp1254 = (frost$core$Bit) {$tmp1253};
bool $tmp1255 = $tmp1254.value;
if ($tmp1255) goto block34; else goto block39;
block39:;
frost$core$Int $tmp1256 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1257 = $tmp1237.value;
int64_t $tmp1258 = $tmp1256.value;
bool $tmp1259 = $tmp1257 == $tmp1258;
frost$core$Bit $tmp1260 = (frost$core$Bit) {$tmp1259};
bool $tmp1261 = $tmp1260.value;
if ($tmp1261) goto block34; else goto block41;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:379
frost$core$Bit $tmp1262 = (frost$core$Bit) {true};
*(&local15) = $tmp1262;
goto block32;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:382
frost$core$Bit $tmp1263 = (frost$core$Bit) {false};
*(&local15) = $tmp1263;
goto block32;
block33:;
goto block32;
block32:;
frost$core$Bit $tmp1264 = *(&local15);
bool $tmp1265 = $tmp1264.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
if ($tmp1265) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:181
org$frostlang$frostc$Type* $tmp1266 = *(&local11);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:181:36
org$frostlang$frostc$Type$Kind* $tmp1267 = &$tmp1266->typeKind;
org$frostlang$frostc$Type$Kind $tmp1268 = *$tmp1267;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1269;
$tmp1269 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1269->value = $tmp1268;
frost$core$Int $tmp1270 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1271 = &(&local17)->$rawValue;
*$tmp1271 = $tmp1270;
org$frostlang$frostc$Type$Kind $tmp1272 = *(&local17);
*(&local16) = $tmp1272;
org$frostlang$frostc$Type$Kind $tmp1273 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1274;
$tmp1274 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1274->value = $tmp1273;
ITable* $tmp1275 = ((frost$core$Equatable*) $tmp1269)->$class->itable;
while ($tmp1275->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1275 = $tmp1275->next;
}
$fn1277 $tmp1276 = $tmp1275->methods[0];
frost$core$Bit $tmp1278 = $tmp1276(((frost$core$Equatable*) $tmp1269), ((frost$core$Equatable*) $tmp1274));
bool $tmp1279 = $tmp1278.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1274)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1269)));
if ($tmp1279) goto block44; else goto block48;
block48:;
org$frostlang$frostc$Type$Kind* $tmp1280 = &$tmp1266->typeKind;
org$frostlang$frostc$Type$Kind $tmp1281 = *$tmp1280;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1282;
$tmp1282 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1282->value = $tmp1281;
frost$core$Int $tmp1283 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1284 = &(&local19)->$rawValue;
*$tmp1284 = $tmp1283;
org$frostlang$frostc$Type$Kind $tmp1285 = *(&local19);
*(&local18) = $tmp1285;
org$frostlang$frostc$Type$Kind $tmp1286 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1287;
$tmp1287 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1287->value = $tmp1286;
ITable* $tmp1288 = ((frost$core$Equatable*) $tmp1282)->$class->itable;
while ($tmp1288->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1288 = $tmp1288->next;
}
$fn1290 $tmp1289 = $tmp1288->methods[0];
frost$core$Bit $tmp1291 = $tmp1289(((frost$core$Equatable*) $tmp1282), ((frost$core$Equatable*) $tmp1287));
bool $tmp1292 = $tmp1291.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1287)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1282)));
if ($tmp1292) goto block44; else goto block47;
block47:;
org$frostlang$frostc$Type$Kind* $tmp1293 = &$tmp1266->typeKind;
org$frostlang$frostc$Type$Kind $tmp1294 = *$tmp1293;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1295;
$tmp1295 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1295->value = $tmp1294;
frost$core$Int $tmp1296 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1297 = &(&local21)->$rawValue;
*$tmp1297 = $tmp1296;
org$frostlang$frostc$Type$Kind $tmp1298 = *(&local21);
*(&local20) = $tmp1298;
org$frostlang$frostc$Type$Kind $tmp1299 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1300;
$tmp1300 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1300->value = $tmp1299;
ITable* $tmp1301 = ((frost$core$Equatable*) $tmp1295)->$class->itable;
while ($tmp1301->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1301 = $tmp1301->next;
}
$fn1303 $tmp1302 = $tmp1301->methods[0];
frost$core$Bit $tmp1304 = $tmp1302(((frost$core$Equatable*) $tmp1295), ((frost$core$Equatable*) $tmp1300));
bool $tmp1305 = $tmp1304.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1300)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1295)));
if ($tmp1305) goto block44; else goto block46;
block46:;
org$frostlang$frostc$Type$Kind* $tmp1306 = &$tmp1266->typeKind;
org$frostlang$frostc$Type$Kind $tmp1307 = *$tmp1306;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1308;
$tmp1308 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1308->value = $tmp1307;
frost$core$Int $tmp1309 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1310 = &(&local23)->$rawValue;
*$tmp1310 = $tmp1309;
org$frostlang$frostc$Type$Kind $tmp1311 = *(&local23);
*(&local22) = $tmp1311;
org$frostlang$frostc$Type$Kind $tmp1312 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1313;
$tmp1313 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1313->value = $tmp1312;
ITable* $tmp1314 = ((frost$core$Equatable*) $tmp1308)->$class->itable;
while ($tmp1314->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1314 = $tmp1314->next;
}
$fn1316 $tmp1315 = $tmp1314->methods[0];
frost$core$Bit $tmp1317 = $tmp1315(((frost$core$Equatable*) $tmp1308), ((frost$core$Equatable*) $tmp1313));
bool $tmp1318 = $tmp1317.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1313)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1308)));
if ($tmp1318) goto block44; else goto block45;
block45:;
frost$core$Int $tmp1319 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1320, $tmp1319, &$s1321);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1322 = &$tmp1266->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1323 = *$tmp1322;
frost$core$Bit $tmp1324 = (frost$core$Bit) {$tmp1323 != NULL};
bool $tmp1325 = $tmp1324.value;
if ($tmp1325) goto block54; else goto block55;
block55:;
frost$core$Int $tmp1326 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1327, $tmp1326, &$s1328);
abort(); // unreachable
block54:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
ITable* $tmp1329 = ((frost$collections$ListView*) $tmp1323)->$class->itable;
while ($tmp1329->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1329 = $tmp1329->next;
}
$fn1331 $tmp1330 = $tmp1329->methods[5];
frost$core$Object* $tmp1332 = $tmp1330(((frost$collections$ListView*) $tmp1323));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1332)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1332);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1332)));
org$frostlang$frostc$Type* $tmp1333 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
*(&local24) = ((org$frostlang$frostc$Type*) $tmp1332);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1332)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:185
frost$collections$HashMap** $tmp1334 = &param0->binaryTypes;
frost$collections$HashMap* $tmp1335 = *$tmp1334;
*(&local25) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
frost$collections$HashMap* $tmp1336 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
*(&local25) = $tmp1335;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:186
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp1337 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp1337);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
frost$collections$HashMap** $tmp1338 = &param0->binaryTypes;
frost$collections$HashMap* $tmp1339 = *$tmp1338;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
frost$collections$HashMap** $tmp1340 = &param0->binaryTypes;
*$tmp1340 = $tmp1337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:187
org$frostlang$frostc$Type* $tmp1341 = *(&local24);
org$frostlang$frostc$Pair* $tmp1342 = org$frostlang$frostc$Compiler$computeCoercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, param2, $tmp1341);
*(&local26) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
org$frostlang$frostc$Pair* $tmp1343 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
*(&local26) = $tmp1342;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:188
frost$collections$HashMap* $tmp1344 = *(&local25);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
frost$collections$HashMap** $tmp1345 = &param0->binaryTypes;
frost$collections$HashMap* $tmp1346 = *$tmp1345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
frost$collections$HashMap** $tmp1347 = &param0->binaryTypes;
*$tmp1347 = $tmp1344;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:189
org$frostlang$frostc$Pair* $tmp1348 = *(&local26);
frost$core$Bit $tmp1349 = (frost$core$Bit) {$tmp1348 == NULL};
bool $tmp1350 = $tmp1349.value;
if ($tmp1350) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:190
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Pair* $tmp1351 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
*(&local26) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp1352 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
*(&local25) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp1353 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1354 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1355 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1356 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1357 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1358 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:192
org$frostlang$frostc$Pair* $tmp1359 = *(&local26);
frost$core$Object** $tmp1360 = &$tmp1359->first;
frost$core$Object* $tmp1361 = *$tmp1360;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1361)));
org$frostlang$frostc$Type* $tmp1362 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
*(&local10) = ((org$frostlang$frostc$Type*) $tmp1361);
org$frostlang$frostc$Pair* $tmp1363 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
*(&local26) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp1364 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
*(&local25) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp1365 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
goto block24;
block24:;
org$frostlang$frostc$Type* $tmp1366 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1367 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
goto block19;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:196
org$frostlang$frostc$Type* $tmp1368 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
org$frostlang$frostc$Type* $tmp1369 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
*(&local10) = $tmp1368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:199
org$frostlang$frostc$Type* $tmp1370 = *(&local10);
frost$core$Bit $tmp1371 = (frost$core$Bit) {$tmp1370 == NULL};
bool $tmp1372 = $tmp1371.value;
if ($tmp1372) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp1373 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1374 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1375 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:202
org$frostlang$frostc$Position $tmp1376 = org$frostlang$frostc$Position$init();
frost$core$Int $tmp1377 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Closure.frost:202:63
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1378 = &(&local28)->$rawValue;
*$tmp1378 = $tmp1377;
org$frostlang$frostc$Type$Kind $tmp1379 = *(&local28);
*(&local27) = $tmp1379;
org$frostlang$frostc$Type$Kind $tmp1380 = *(&local27);
frost$collections$Array* $tmp1381 = *(&local1);
org$frostlang$frostc$Type* $tmp1382 = *(&local10);
frost$core$Int $tmp1383 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp1384 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param0, $tmp1376, $tmp1380, ((frost$collections$ListView*) $tmp1381), $tmp1382, $tmp1383);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
org$frostlang$frostc$Type* $tmp1385 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1386 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1387 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1387));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return $tmp1384;

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
org$frostlang$frostc$Type* $tmp1388 = org$frostlang$frostc$expression$Closure$typedLambdaType$org$frostlang$frostc$Compiler$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Type$Q(param0, ((frost$collections$ListView*) param2), param3, param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
org$frostlang$frostc$Type* $tmp1389 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
*(&local1) = $tmp1388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:212
org$frostlang$frostc$Type* $tmp1390 = *(&local1);
frost$core$Bit $tmp1391 = (frost$core$Bit) {$tmp1390 != NULL};
bool $tmp1392 = $tmp1391.value;
if ($tmp1392) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:213
org$frostlang$frostc$Type* $tmp1393 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:213:37
org$frostlang$frostc$Type$Kind* $tmp1394 = &$tmp1393->typeKind;
org$frostlang$frostc$Type$Kind $tmp1395 = *$tmp1394;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1396;
$tmp1396 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1396->value = $tmp1395;
frost$core$Int $tmp1397 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1398 = &(&local3)->$rawValue;
*$tmp1398 = $tmp1397;
org$frostlang$frostc$Type$Kind $tmp1399 = *(&local3);
*(&local2) = $tmp1399;
org$frostlang$frostc$Type$Kind $tmp1400 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1401;
$tmp1401 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1401->value = $tmp1400;
ITable* $tmp1402 = ((frost$core$Equatable*) $tmp1396)->$class->itable;
while ($tmp1402->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1402 = $tmp1402->next;
}
$fn1404 $tmp1403 = $tmp1402->methods[0];
frost$core$Bit $tmp1405 = $tmp1403(((frost$core$Equatable*) $tmp1396), ((frost$core$Equatable*) $tmp1401));
bool $tmp1406 = $tmp1405.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1401)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1396)));
if ($tmp1406) goto block5; else goto block9;
block9:;
org$frostlang$frostc$Type$Kind* $tmp1407 = &$tmp1393->typeKind;
org$frostlang$frostc$Type$Kind $tmp1408 = *$tmp1407;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1409;
$tmp1409 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1409->value = $tmp1408;
frost$core$Int $tmp1410 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1411 = &(&local5)->$rawValue;
*$tmp1411 = $tmp1410;
org$frostlang$frostc$Type$Kind $tmp1412 = *(&local5);
*(&local4) = $tmp1412;
org$frostlang$frostc$Type$Kind $tmp1413 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1414;
$tmp1414 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1414->value = $tmp1413;
ITable* $tmp1415 = ((frost$core$Equatable*) $tmp1409)->$class->itable;
while ($tmp1415->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1415 = $tmp1415->next;
}
$fn1417 $tmp1416 = $tmp1415->methods[0];
frost$core$Bit $tmp1418 = $tmp1416(((frost$core$Equatable*) $tmp1409), ((frost$core$Equatable*) $tmp1414));
bool $tmp1419 = $tmp1418.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1414)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1409)));
if ($tmp1419) goto block5; else goto block8;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1420 = &$tmp1393->typeKind;
org$frostlang$frostc$Type$Kind $tmp1421 = *$tmp1420;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1422;
$tmp1422 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1422->value = $tmp1421;
frost$core$Int $tmp1423 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1424 = &(&local7)->$rawValue;
*$tmp1424 = $tmp1423;
org$frostlang$frostc$Type$Kind $tmp1425 = *(&local7);
*(&local6) = $tmp1425;
org$frostlang$frostc$Type$Kind $tmp1426 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1427;
$tmp1427 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1427->value = $tmp1426;
ITable* $tmp1428 = ((frost$core$Equatable*) $tmp1422)->$class->itable;
while ($tmp1428->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1428 = $tmp1428->next;
}
$fn1430 $tmp1429 = $tmp1428->methods[0];
frost$core$Bit $tmp1431 = $tmp1429(((frost$core$Equatable*) $tmp1422), ((frost$core$Equatable*) $tmp1427));
bool $tmp1432 = $tmp1431.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1427)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1422)));
if ($tmp1432) goto block5; else goto block7;
block7:;
org$frostlang$frostc$Type$Kind* $tmp1433 = &$tmp1393->typeKind;
org$frostlang$frostc$Type$Kind $tmp1434 = *$tmp1433;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1435;
$tmp1435 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1435->value = $tmp1434;
frost$core$Int $tmp1436 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1437 = &(&local9)->$rawValue;
*$tmp1437 = $tmp1436;
org$frostlang$frostc$Type$Kind $tmp1438 = *(&local9);
*(&local8) = $tmp1438;
org$frostlang$frostc$Type$Kind $tmp1439 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1440;
$tmp1440 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1440->value = $tmp1439;
ITable* $tmp1441 = ((frost$core$Equatable*) $tmp1435)->$class->itable;
while ($tmp1441->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1441 = $tmp1441->next;
}
$fn1443 $tmp1442 = $tmp1441->methods[0];
frost$core$Bit $tmp1444 = $tmp1442(((frost$core$Equatable*) $tmp1435), ((frost$core$Equatable*) $tmp1440));
bool $tmp1445 = $tmp1444.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1440)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1435)));
if ($tmp1445) goto block5; else goto block6;
block6:;
frost$core$Int $tmp1446 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1447, $tmp1446, &$s1448);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1449 = &$tmp1393->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1450 = *$tmp1449;
frost$core$Bit $tmp1451 = (frost$core$Bit) {$tmp1450 != NULL};
bool $tmp1452 = $tmp1451.value;
if ($tmp1452) goto block15; else goto block16;
block16:;
frost$core$Int $tmp1453 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1454, $tmp1453, &$s1455);
abort(); // unreachable
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
ITable* $tmp1456 = ((frost$collections$ListView*) $tmp1450)->$class->itable;
while ($tmp1456->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1456 = $tmp1456->next;
}
$fn1458 $tmp1457 = $tmp1456->methods[5];
frost$core$Object* $tmp1459 = $tmp1457(((frost$collections$ListView*) $tmp1450));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1459)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1459);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1459)));
org$frostlang$frostc$Type* $tmp1460 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1459);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1459)));
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:218
org$frostlang$frostc$Type** $tmp1461 = &param0->ANY_TYPE;
org$frostlang$frostc$Type* $tmp1462 = *$tmp1461;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
org$frostlang$frostc$Type* $tmp1463 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
*(&local0) = $tmp1462;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:219
frost$core$Int* $tmp1464 = &param4->$rawValue;
frost$core$Int $tmp1465 = *$tmp1464;
frost$core$Int $tmp1466 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:220:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1467 = $tmp1465.value;
int64_t $tmp1468 = $tmp1466.value;
bool $tmp1469 = $tmp1467 == $tmp1468;
frost$core$Bit $tmp1470 = (frost$core$Bit) {$tmp1469};
bool $tmp1471 = $tmp1470.value;
if ($tmp1471) goto block18; else goto block17;
block18:;
org$frostlang$frostc$Type** $tmp1472 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp1473 = *$tmp1472;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
org$frostlang$frostc$Type* $tmp1474 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
*(&local10) = $tmp1473;
frost$core$Bit* $tmp1475 = (frost$core$Bit*) (param4->$data + 8);
frost$core$Bit $tmp1476 = *$tmp1475;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:221
org$frostlang$frostc$Type* $tmp1477 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:221:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1478 = &$tmp1477->typeKind;
org$frostlang$frostc$Type$Kind $tmp1479 = *$tmp1478;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1480;
$tmp1480 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1480->value = $tmp1479;
frost$core$Int $tmp1481 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1482 = &(&local13)->$rawValue;
*$tmp1482 = $tmp1481;
org$frostlang$frostc$Type$Kind $tmp1483 = *(&local13);
*(&local12) = $tmp1483;
org$frostlang$frostc$Type$Kind $tmp1484 = *(&local12);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1485;
$tmp1485 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1485->value = $tmp1484;
ITable* $tmp1486 = ((frost$core$Equatable*) $tmp1480)->$class->itable;
while ($tmp1486->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1486 = $tmp1486->next;
}
$fn1488 $tmp1487 = $tmp1486->methods[1];
frost$core$Bit $tmp1489 = $tmp1487(((frost$core$Equatable*) $tmp1480), ((frost$core$Equatable*) $tmp1485));
bool $tmp1490 = $tmp1489.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1485)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1480)));
if ($tmp1490) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
*(&local11) = $tmp1477;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
goto block22;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1491 = &$tmp1477->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1492 = *$tmp1491;
frost$core$Bit $tmp1493 = (frost$core$Bit) {$tmp1492 != NULL};
bool $tmp1494 = $tmp1493.value;
if ($tmp1494) goto block27; else goto block28;
block28:;
frost$core$Int $tmp1495 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1496, $tmp1495, &$s1497);
abort(); // unreachable
block27:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
frost$core$Int $tmp1498 = (frost$core$Int) {0u};
frost$core$Object* $tmp1499 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1492, $tmp1498);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1499)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1499);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
*(&local11) = ((org$frostlang$frostc$Type*) $tmp1499);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1499)));
goto block22;
block22:;
org$frostlang$frostc$Type* $tmp1500 = *(&local11);
// begin inline call to function org.frostlang.frostc.Type.get_isMethod():frost.core.Bit from Closure.frost:221:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:377
org$frostlang$frostc$Type$Kind* $tmp1501 = &$tmp1500->typeKind;
org$frostlang$frostc$Type$Kind $tmp1502 = *$tmp1501;
frost$core$Int $tmp1503 = $tmp1502.$rawValue;
frost$core$Int $tmp1504 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1505 = $tmp1503.value;
int64_t $tmp1506 = $tmp1504.value;
bool $tmp1507 = $tmp1505 == $tmp1506;
frost$core$Bit $tmp1508 = (frost$core$Bit) {$tmp1507};
bool $tmp1509 = $tmp1508.value;
if ($tmp1509) goto block31; else goto block32;
block32:;
frost$core$Int $tmp1510 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1511 = $tmp1503.value;
int64_t $tmp1512 = $tmp1510.value;
bool $tmp1513 = $tmp1511 == $tmp1512;
frost$core$Bit $tmp1514 = (frost$core$Bit) {$tmp1513};
bool $tmp1515 = $tmp1514.value;
if ($tmp1515) goto block31; else goto block34;
block34:;
frost$core$Int $tmp1516 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1517 = $tmp1503.value;
int64_t $tmp1518 = $tmp1516.value;
bool $tmp1519 = $tmp1517 == $tmp1518;
frost$core$Bit $tmp1520 = (frost$core$Bit) {$tmp1519};
bool $tmp1521 = $tmp1520.value;
if ($tmp1521) goto block31; else goto block36;
block36:;
frost$core$Int $tmp1522 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1523 = $tmp1503.value;
int64_t $tmp1524 = $tmp1522.value;
bool $tmp1525 = $tmp1523 == $tmp1524;
frost$core$Bit $tmp1526 = (frost$core$Bit) {$tmp1525};
bool $tmp1527 = $tmp1526.value;
if ($tmp1527) goto block31; else goto block38;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:379
frost$core$Bit $tmp1528 = (frost$core$Bit) {true};
*(&local14) = $tmp1528;
goto block29;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:382
frost$core$Bit $tmp1529 = (frost$core$Bit) {false};
*(&local14) = $tmp1529;
goto block29;
block30:;
goto block29;
block29:;
frost$core$Bit $tmp1530 = *(&local14);
bool $tmp1531 = $tmp1530.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
if ($tmp1531) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:222
org$frostlang$frostc$Type* $tmp1532 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:222:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1533 = &$tmp1532->typeKind;
org$frostlang$frostc$Type$Kind $tmp1534 = *$tmp1533;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1535;
$tmp1535 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1535->value = $tmp1534;
frost$core$Int $tmp1536 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1537 = &(&local17)->$rawValue;
*$tmp1537 = $tmp1536;
org$frostlang$frostc$Type$Kind $tmp1538 = *(&local17);
*(&local16) = $tmp1538;
org$frostlang$frostc$Type$Kind $tmp1539 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1540;
$tmp1540 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1540->value = $tmp1539;
ITable* $tmp1541 = ((frost$core$Equatable*) $tmp1535)->$class->itable;
while ($tmp1541->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1541 = $tmp1541->next;
}
$fn1543 $tmp1542 = $tmp1541->methods[1];
frost$core$Bit $tmp1544 = $tmp1542(((frost$core$Equatable*) $tmp1535), ((frost$core$Equatable*) $tmp1540));
bool $tmp1545 = $tmp1544.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1540)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1535)));
if ($tmp1545) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
*(&local15) = $tmp1532;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
goto block40;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1546 = &$tmp1532->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1547 = *$tmp1546;
frost$core$Bit $tmp1548 = (frost$core$Bit) {$tmp1547 != NULL};
bool $tmp1549 = $tmp1548.value;
if ($tmp1549) goto block45; else goto block46;
block46:;
frost$core$Int $tmp1550 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1551, $tmp1550, &$s1552);
abort(); // unreachable
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
frost$core$Int $tmp1553 = (frost$core$Int) {0u};
frost$core$Object* $tmp1554 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1547, $tmp1553);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1554)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1554);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
*(&local15) = ((org$frostlang$frostc$Type*) $tmp1554);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1554)));
goto block40;
block40:;
org$frostlang$frostc$Type* $tmp1555 = *(&local15);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:222:54
org$frostlang$frostc$Type$Kind* $tmp1556 = &$tmp1555->typeKind;
org$frostlang$frostc$Type$Kind $tmp1557 = *$tmp1556;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1558;
$tmp1558 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1558->value = $tmp1557;
frost$core$Int $tmp1559 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1560 = &(&local19)->$rawValue;
*$tmp1560 = $tmp1559;
org$frostlang$frostc$Type$Kind $tmp1561 = *(&local19);
*(&local18) = $tmp1561;
org$frostlang$frostc$Type$Kind $tmp1562 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1563;
$tmp1563 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1563->value = $tmp1562;
ITable* $tmp1564 = ((frost$core$Equatable*) $tmp1558)->$class->itable;
while ($tmp1564->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1564 = $tmp1564->next;
}
$fn1566 $tmp1565 = $tmp1564->methods[0];
frost$core$Bit $tmp1567 = $tmp1565(((frost$core$Equatable*) $tmp1558), ((frost$core$Equatable*) $tmp1563));
bool $tmp1568 = $tmp1567.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1563)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1558)));
if ($tmp1568) goto block48; else goto block52;
block52:;
org$frostlang$frostc$Type$Kind* $tmp1569 = &$tmp1555->typeKind;
org$frostlang$frostc$Type$Kind $tmp1570 = *$tmp1569;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1571;
$tmp1571 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1571->value = $tmp1570;
frost$core$Int $tmp1572 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1573 = &(&local21)->$rawValue;
*$tmp1573 = $tmp1572;
org$frostlang$frostc$Type$Kind $tmp1574 = *(&local21);
*(&local20) = $tmp1574;
org$frostlang$frostc$Type$Kind $tmp1575 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1576;
$tmp1576 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1576->value = $tmp1575;
ITable* $tmp1577 = ((frost$core$Equatable*) $tmp1571)->$class->itable;
while ($tmp1577->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1577 = $tmp1577->next;
}
$fn1579 $tmp1578 = $tmp1577->methods[0];
frost$core$Bit $tmp1580 = $tmp1578(((frost$core$Equatable*) $tmp1571), ((frost$core$Equatable*) $tmp1576));
bool $tmp1581 = $tmp1580.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1576)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1571)));
if ($tmp1581) goto block48; else goto block51;
block51:;
org$frostlang$frostc$Type$Kind* $tmp1582 = &$tmp1555->typeKind;
org$frostlang$frostc$Type$Kind $tmp1583 = *$tmp1582;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1584;
$tmp1584 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1584->value = $tmp1583;
frost$core$Int $tmp1585 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1586 = &(&local23)->$rawValue;
*$tmp1586 = $tmp1585;
org$frostlang$frostc$Type$Kind $tmp1587 = *(&local23);
*(&local22) = $tmp1587;
org$frostlang$frostc$Type$Kind $tmp1588 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1589;
$tmp1589 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1589->value = $tmp1588;
ITable* $tmp1590 = ((frost$core$Equatable*) $tmp1584)->$class->itable;
while ($tmp1590->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1590 = $tmp1590->next;
}
$fn1592 $tmp1591 = $tmp1590->methods[0];
frost$core$Bit $tmp1593 = $tmp1591(((frost$core$Equatable*) $tmp1584), ((frost$core$Equatable*) $tmp1589));
bool $tmp1594 = $tmp1593.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1589)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1584)));
if ($tmp1594) goto block48; else goto block50;
block50:;
org$frostlang$frostc$Type$Kind* $tmp1595 = &$tmp1555->typeKind;
org$frostlang$frostc$Type$Kind $tmp1596 = *$tmp1595;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1597;
$tmp1597 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1597->value = $tmp1596;
frost$core$Int $tmp1598 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1599 = &(&local25)->$rawValue;
*$tmp1599 = $tmp1598;
org$frostlang$frostc$Type$Kind $tmp1600 = *(&local25);
*(&local24) = $tmp1600;
org$frostlang$frostc$Type$Kind $tmp1601 = *(&local24);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1602;
$tmp1602 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1602->value = $tmp1601;
ITable* $tmp1603 = ((frost$core$Equatable*) $tmp1597)->$class->itable;
while ($tmp1603->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1603 = $tmp1603->next;
}
$fn1605 $tmp1604 = $tmp1603->methods[0];
frost$core$Bit $tmp1606 = $tmp1604(((frost$core$Equatable*) $tmp1597), ((frost$core$Equatable*) $tmp1602));
bool $tmp1607 = $tmp1606.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1602)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1597)));
if ($tmp1607) goto block48; else goto block49;
block49:;
frost$core$Int $tmp1608 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1609, $tmp1608, &$s1610);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1611 = &$tmp1555->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1612 = *$tmp1611;
frost$core$Bit $tmp1613 = (frost$core$Bit) {$tmp1612 != NULL};
bool $tmp1614 = $tmp1613.value;
if ($tmp1614) goto block58; else goto block59;
block59:;
frost$core$Int $tmp1615 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1616, $tmp1615, &$s1617);
abort(); // unreachable
block58:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
ITable* $tmp1618 = ((frost$collections$ListView*) $tmp1612)->$class->itable;
while ($tmp1618->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1618 = $tmp1618->next;
}
$fn1620 $tmp1619 = $tmp1618->methods[5];
frost$core$Object* $tmp1621 = $tmp1619(((frost$collections$ListView*) $tmp1612));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1621)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1621);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1621)));
org$frostlang$frostc$Type* $tmp1622 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1622));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1621);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1621)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
org$frostlang$frostc$Type* $tmp1623 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
goto block21;
block21:;
org$frostlang$frostc$Type* $tmp1624 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1625 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block17;
block17:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:227
frost$core$Int $tmp1626 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:227:59
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp1627 = &(&local27)->$rawValue;
*$tmp1627 = $tmp1626;
org$frostlang$frostc$MethodDecl$Kind $tmp1628 = *(&local27);
*(&local26) = $tmp1628;
org$frostlang$frostc$MethodDecl$Kind $tmp1629 = *(&local26);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1630 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1631 = (frost$core$Int) {26u};
org$frostlang$frostc$Type* $tmp1632 = *(&local0);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:228:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3710
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1633 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1634 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3710:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp1635 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp1636 = *$tmp1635;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1637 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1638 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1637, $tmp1638);
frost$collections$Array$add$frost$collections$Array$T($tmp1637, ((frost$core$Object*) $tmp1632));
org$frostlang$frostc$Type* $tmp1639 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1636, ((frost$collections$ListView*) $tmp1637));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp1633, $tmp1634, $tmp1632, $tmp1639);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1630, $tmp1631, param1, $tmp1633);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1640 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1641 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1640, $tmp1641);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1642 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1643 = (frost$core$Int) {38u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp1642, $tmp1643, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp1640, ((frost$core$Object*) $tmp1642));
org$frostlang$frostc$IR$Value* $tmp1644 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1629, param2, $tmp1630, ((org$frostlang$frostc$FixedArray*) $tmp1640), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
org$frostlang$frostc$Type* $tmp1645 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1645));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1646 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1644;

}
frost$core$Bit org$frostlang$frostc$expression$Closure$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:271
frost$core$String** $tmp1647 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1648 = *$tmp1647;
frost$core$String** $tmp1649 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp1650 = *$tmp1649;
frost$core$Bit $tmp1651 = frost$core$String$$GT$frost$core$String$R$frost$core$Bit($tmp1648, $tmp1650);
return $tmp1651;

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
frost$core$Int* $tmp1652 = &param4->$rawValue;
frost$core$Int $tmp1653 = *$tmp1652;
frost$core$Int $tmp1654 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:237:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1655 = $tmp1653.value;
int64_t $tmp1656 = $tmp1654.value;
bool $tmp1657 = $tmp1655 == $tmp1656;
frost$core$Bit $tmp1658 = (frost$core$Bit) {$tmp1657};
bool $tmp1659 = $tmp1658.value;
if ($tmp1659) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Type** $tmp1660 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp1661 = *$tmp1660;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
org$frostlang$frostc$Type* $tmp1662 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
*(&local0) = $tmp1661;
frost$core$Bit* $tmp1663 = (frost$core$Bit*) (param4->$data + 8);
frost$core$Bit $tmp1664 = *$tmp1663;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:238
org$frostlang$frostc$Type* $tmp1665 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:238:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1666 = &$tmp1665->typeKind;
org$frostlang$frostc$Type$Kind $tmp1667 = *$tmp1666;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1668;
$tmp1668 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1668->value = $tmp1667;
frost$core$Int $tmp1669 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1670 = &(&local3)->$rawValue;
*$tmp1670 = $tmp1669;
org$frostlang$frostc$Type$Kind $tmp1671 = *(&local3);
*(&local2) = $tmp1671;
org$frostlang$frostc$Type$Kind $tmp1672 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1673;
$tmp1673 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1673->value = $tmp1672;
ITable* $tmp1674 = ((frost$core$Equatable*) $tmp1668)->$class->itable;
while ($tmp1674->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1674 = $tmp1674->next;
}
$fn1676 $tmp1675 = $tmp1674->methods[1];
frost$core$Bit $tmp1677 = $tmp1675(((frost$core$Equatable*) $tmp1668), ((frost$core$Equatable*) $tmp1673));
bool $tmp1678 = $tmp1677.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1673)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1668)));
if ($tmp1678) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
*(&local1) = $tmp1665;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1679 = &$tmp1665->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1680 = *$tmp1679;
frost$core$Bit $tmp1681 = (frost$core$Bit) {$tmp1680 != NULL};
bool $tmp1682 = $tmp1681.value;
if ($tmp1682) goto block9; else goto block10;
block10:;
frost$core$Int $tmp1683 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1684, $tmp1683, &$s1685);
abort(); // unreachable
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
frost$core$Int $tmp1686 = (frost$core$Int) {0u};
frost$core$Object* $tmp1687 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1680, $tmp1686);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1687)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1687);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp1687);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1687)));
goto block4;
block4:;
org$frostlang$frostc$Type* $tmp1688 = *(&local1);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
org$frostlang$frostc$Type* $tmp1689 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1689));
*(&local4) = $tmp1688;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:239
org$frostlang$frostc$Type* $tmp1690 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_isMethod():frost.core.Bit from Closure.frost:239:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:377
org$frostlang$frostc$Type$Kind* $tmp1691 = &$tmp1690->typeKind;
org$frostlang$frostc$Type$Kind $tmp1692 = *$tmp1691;
frost$core$Int $tmp1693 = $tmp1692.$rawValue;
frost$core$Int $tmp1694 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1695 = $tmp1693.value;
int64_t $tmp1696 = $tmp1694.value;
bool $tmp1697 = $tmp1695 == $tmp1696;
frost$core$Bit $tmp1698 = (frost$core$Bit) {$tmp1697};
bool $tmp1699 = $tmp1698.value;
if ($tmp1699) goto block15; else goto block16;
block16:;
frost$core$Int $tmp1700 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1701 = $tmp1693.value;
int64_t $tmp1702 = $tmp1700.value;
bool $tmp1703 = $tmp1701 == $tmp1702;
frost$core$Bit $tmp1704 = (frost$core$Bit) {$tmp1703};
bool $tmp1705 = $tmp1704.value;
if ($tmp1705) goto block15; else goto block18;
block18:;
frost$core$Int $tmp1706 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1707 = $tmp1693.value;
int64_t $tmp1708 = $tmp1706.value;
bool $tmp1709 = $tmp1707 == $tmp1708;
frost$core$Bit $tmp1710 = (frost$core$Bit) {$tmp1709};
bool $tmp1711 = $tmp1710.value;
if ($tmp1711) goto block15; else goto block20;
block20:;
frost$core$Int $tmp1712 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1713 = $tmp1693.value;
int64_t $tmp1714 = $tmp1712.value;
bool $tmp1715 = $tmp1713 == $tmp1714;
frost$core$Bit $tmp1716 = (frost$core$Bit) {$tmp1715};
bool $tmp1717 = $tmp1716.value;
if ($tmp1717) goto block15; else goto block22;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:379
frost$core$Bit $tmp1718 = (frost$core$Bit) {true};
*(&local5) = $tmp1718;
goto block13;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:382
frost$core$Bit $tmp1719 = (frost$core$Bit) {false};
*(&local5) = $tmp1719;
goto block13;
block14:;
goto block13;
block13:;
frost$core$Bit $tmp1720 = *(&local5);
bool $tmp1721 = $tmp1720.value;
if ($tmp1721) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:240
ITable* $tmp1722 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp1722->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1722 = $tmp1722->next;
}
$fn1724 $tmp1723 = $tmp1722->methods[0];
frost$core$Int $tmp1725 = $tmp1723(((frost$collections$CollectionView*) param2));
org$frostlang$frostc$Type* $tmp1726 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_parameterCount():frost.core.Int from Closure.frost:240:57
org$frostlang$frostc$Type$Kind* $tmp1727 = &$tmp1726->typeKind;
org$frostlang$frostc$Type$Kind $tmp1728 = *$tmp1727;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1729;
$tmp1729 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1729->value = $tmp1728;
frost$core$Int $tmp1730 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1731 = &(&local7)->$rawValue;
*$tmp1731 = $tmp1730;
org$frostlang$frostc$Type$Kind $tmp1732 = *(&local7);
*(&local6) = $tmp1732;
org$frostlang$frostc$Type$Kind $tmp1733 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1734;
$tmp1734 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1734->value = $tmp1733;
ITable* $tmp1735 = ((frost$core$Equatable*) $tmp1729)->$class->itable;
while ($tmp1735->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1735 = $tmp1735->next;
}
$fn1737 $tmp1736 = $tmp1735->methods[0];
frost$core$Bit $tmp1738 = $tmp1736(((frost$core$Equatable*) $tmp1729), ((frost$core$Equatable*) $tmp1734));
bool $tmp1739 = $tmp1738.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1734)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1729)));
if ($tmp1739) goto block27; else goto block31;
block31:;
org$frostlang$frostc$Type$Kind* $tmp1740 = &$tmp1726->typeKind;
org$frostlang$frostc$Type$Kind $tmp1741 = *$tmp1740;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1742;
$tmp1742 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1742->value = $tmp1741;
frost$core$Int $tmp1743 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1744 = &(&local9)->$rawValue;
*$tmp1744 = $tmp1743;
org$frostlang$frostc$Type$Kind $tmp1745 = *(&local9);
*(&local8) = $tmp1745;
org$frostlang$frostc$Type$Kind $tmp1746 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1747;
$tmp1747 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1747->value = $tmp1746;
ITable* $tmp1748 = ((frost$core$Equatable*) $tmp1742)->$class->itable;
while ($tmp1748->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1748 = $tmp1748->next;
}
$fn1750 $tmp1749 = $tmp1748->methods[0];
frost$core$Bit $tmp1751 = $tmp1749(((frost$core$Equatable*) $tmp1742), ((frost$core$Equatable*) $tmp1747));
bool $tmp1752 = $tmp1751.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1747)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1742)));
if ($tmp1752) goto block27; else goto block30;
block30:;
org$frostlang$frostc$Type$Kind* $tmp1753 = &$tmp1726->typeKind;
org$frostlang$frostc$Type$Kind $tmp1754 = *$tmp1753;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1755;
$tmp1755 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1755->value = $tmp1754;
frost$core$Int $tmp1756 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1757 = &(&local11)->$rawValue;
*$tmp1757 = $tmp1756;
org$frostlang$frostc$Type$Kind $tmp1758 = *(&local11);
*(&local10) = $tmp1758;
org$frostlang$frostc$Type$Kind $tmp1759 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1760;
$tmp1760 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1760->value = $tmp1759;
ITable* $tmp1761 = ((frost$core$Equatable*) $tmp1755)->$class->itable;
while ($tmp1761->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1761 = $tmp1761->next;
}
$fn1763 $tmp1762 = $tmp1761->methods[0];
frost$core$Bit $tmp1764 = $tmp1762(((frost$core$Equatable*) $tmp1755), ((frost$core$Equatable*) $tmp1760));
bool $tmp1765 = $tmp1764.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1760)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1755)));
if ($tmp1765) goto block27; else goto block29;
block29:;
org$frostlang$frostc$Type$Kind* $tmp1766 = &$tmp1726->typeKind;
org$frostlang$frostc$Type$Kind $tmp1767 = *$tmp1766;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1768;
$tmp1768 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1768->value = $tmp1767;
frost$core$Int $tmp1769 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:420:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1770 = &(&local13)->$rawValue;
*$tmp1770 = $tmp1769;
org$frostlang$frostc$Type$Kind $tmp1771 = *(&local13);
*(&local12) = $tmp1771;
org$frostlang$frostc$Type$Kind $tmp1772 = *(&local12);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1773;
$tmp1773 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1773->value = $tmp1772;
ITable* $tmp1774 = ((frost$core$Equatable*) $tmp1768)->$class->itable;
while ($tmp1774->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1774 = $tmp1774->next;
}
$fn1776 $tmp1775 = $tmp1774->methods[0];
frost$core$Bit $tmp1777 = $tmp1775(((frost$core$Equatable*) $tmp1768), ((frost$core$Equatable*) $tmp1773));
bool $tmp1778 = $tmp1777.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1773)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1768)));
if ($tmp1778) goto block27; else goto block28;
block28:;
frost$core$Int $tmp1779 = (frost$core$Int) {421u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1780, $tmp1779, &$s1781);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:422
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:422:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1782 = &$tmp1726->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1783 = *$tmp1782;
frost$core$Bit $tmp1784 = (frost$core$Bit) {$tmp1783 != NULL};
bool $tmp1785 = $tmp1784.value;
if ($tmp1785) goto block37; else goto block38;
block38:;
frost$core$Int $tmp1786 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1787, $tmp1786, &$s1788);
abort(); // unreachable
block37:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
ITable* $tmp1789 = ((frost$collections$CollectionView*) $tmp1783)->$class->itable;
while ($tmp1789->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1789 = $tmp1789->next;
}
$fn1791 $tmp1790 = $tmp1789->methods[0];
frost$core$Int $tmp1792 = $tmp1790(((frost$collections$CollectionView*) $tmp1783));
frost$core$Int $tmp1793 = (frost$core$Int) {1u};
int64_t $tmp1794 = $tmp1792.value;
int64_t $tmp1795 = $tmp1793.value;
int64_t $tmp1796 = $tmp1794 - $tmp1795;
frost$core$Int $tmp1797 = (frost$core$Int) {$tmp1796};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
int64_t $tmp1798 = $tmp1725.value;
int64_t $tmp1799 = $tmp1797.value;
bool $tmp1800 = $tmp1798 != $tmp1799;
frost$core$Bit $tmp1801 = (frost$core$Bit) {$tmp1800};
bool $tmp1802 = $tmp1801.value;
if ($tmp1802) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:241
org$frostlang$frostc$Type* $tmp1803 = *(&local0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:241:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1805 $tmp1804 = ($fn1805) ((frost$core$Object*) $tmp1803)->$class->vtable[0];
frost$core$String* $tmp1806 = $tmp1804(((frost$core$Object*) $tmp1803));
frost$core$String* $tmp1807 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1808, $tmp1806);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
frost$core$String* $tmp1809 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1807, &$s1810);
frost$core$String* $tmp1811 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1809, &$s1812);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1811);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:243
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1813 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1813));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1814 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1815 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:245
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1816 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1816);
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
frost$collections$Array* $tmp1817 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
*(&local14) = $tmp1816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:246
frost$core$Int $tmp1818 = (frost$core$Int) {0u};
ITable* $tmp1819 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp1819->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1819 = $tmp1819->next;
}
$fn1821 $tmp1820 = $tmp1819->methods[0];
frost$core$Int $tmp1822 = $tmp1820(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp1823 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1824 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1818, $tmp1822, $tmp1823);
frost$core$Int $tmp1825 = $tmp1824.min;
*(&local15) = $tmp1825;
frost$core$Int $tmp1826 = $tmp1824.max;
frost$core$Bit $tmp1827 = $tmp1824.inclusive;
bool $tmp1828 = $tmp1827.value;
frost$core$Int $tmp1829 = (frost$core$Int) {1u};
if ($tmp1828) goto block43; else goto block44;
block43:;
int64_t $tmp1830 = $tmp1825.value;
int64_t $tmp1831 = $tmp1826.value;
bool $tmp1832 = $tmp1830 <= $tmp1831;
frost$core$Bit $tmp1833 = (frost$core$Bit) {$tmp1832};
bool $tmp1834 = $tmp1833.value;
if ($tmp1834) goto block40; else goto block41;
block44:;
int64_t $tmp1835 = $tmp1825.value;
int64_t $tmp1836 = $tmp1826.value;
bool $tmp1837 = $tmp1835 < $tmp1836;
frost$core$Bit $tmp1838 = (frost$core$Bit) {$tmp1837};
bool $tmp1839 = $tmp1838.value;
if ($tmp1839) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:247
frost$core$Int $tmp1840 = *(&local15);
frost$core$Object* $tmp1841 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(param2, $tmp1840);
frost$core$Int* $tmp1842 = &((org$frostlang$frostc$ASTNode*) $tmp1841)->$rawValue;
frost$core$Int $tmp1843 = *$tmp1842;
frost$core$Int $tmp1844 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:248:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1845 = $tmp1843.value;
int64_t $tmp1846 = $tmp1844.value;
bool $tmp1847 = $tmp1845 == $tmp1846;
frost$core$Bit $tmp1848 = (frost$core$Bit) {$tmp1847};
bool $tmp1849 = $tmp1848.value;
if ($tmp1849) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp1850 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$ASTNode*) $tmp1841)->$data + 0);
org$frostlang$frostc$Position $tmp1851 = *$tmp1850;
*(&local16) = $tmp1851;
frost$core$String** $tmp1852 = (frost$core$String**) (((org$frostlang$frostc$ASTNode*) $tmp1841)->$data + 24);
frost$core$String* $tmp1853 = *$tmp1852;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1853));
frost$core$String* $tmp1854 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
*(&local17) = $tmp1853;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:249
frost$collections$Array* $tmp1855 = *(&local14);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1856 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1857 = (frost$core$Int) {34u};
org$frostlang$frostc$Position $tmp1858 = *(&local16);
frost$core$String* $tmp1859 = *(&local17);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1860 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1861 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1862 = *(&local16);
org$frostlang$frostc$Type* $tmp1863 = *(&local4);
frost$core$Int $tmp1864 = *(&local15);
// begin inline call to function org.frostlang.frostc.Type.parameterType(i:frost.core.Int):org.frostlang.frostc.Type from Closure.frost:251:90
org$frostlang$frostc$Type$Kind* $tmp1865 = &$tmp1863->typeKind;
org$frostlang$frostc$Type$Kind $tmp1866 = *$tmp1865;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1867;
$tmp1867 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1867->value = $tmp1866;
frost$core$Int $tmp1868 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1869 = &(&local19)->$rawValue;
*$tmp1869 = $tmp1868;
org$frostlang$frostc$Type$Kind $tmp1870 = *(&local19);
*(&local18) = $tmp1870;
org$frostlang$frostc$Type$Kind $tmp1871 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1872;
$tmp1872 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1872->value = $tmp1871;
ITable* $tmp1873 = ((frost$core$Equatable*) $tmp1867)->$class->itable;
while ($tmp1873->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1873 = $tmp1873->next;
}
$fn1875 $tmp1874 = $tmp1873->methods[0];
frost$core$Bit $tmp1876 = $tmp1874(((frost$core$Equatable*) $tmp1867), ((frost$core$Equatable*) $tmp1872));
bool $tmp1877 = $tmp1876.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1872)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1867)));
if ($tmp1877) goto block53; else goto block56;
block56:;
org$frostlang$frostc$Type$Kind* $tmp1878 = &$tmp1863->typeKind;
org$frostlang$frostc$Type$Kind $tmp1879 = *$tmp1878;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1880;
$tmp1880 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1880->value = $tmp1879;
frost$core$Int $tmp1881 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1882 = &(&local21)->$rawValue;
*$tmp1882 = $tmp1881;
org$frostlang$frostc$Type$Kind $tmp1883 = *(&local21);
*(&local20) = $tmp1883;
org$frostlang$frostc$Type$Kind $tmp1884 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1885;
$tmp1885 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1885->value = $tmp1884;
ITable* $tmp1886 = ((frost$core$Equatable*) $tmp1880)->$class->itable;
while ($tmp1886->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1886 = $tmp1886->next;
}
$fn1888 $tmp1887 = $tmp1886->methods[0];
frost$core$Bit $tmp1889 = $tmp1887(((frost$core$Equatable*) $tmp1880), ((frost$core$Equatable*) $tmp1885));
bool $tmp1890 = $tmp1889.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1885)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1880)));
if ($tmp1890) goto block53; else goto block55;
block55:;
org$frostlang$frostc$Type$Kind* $tmp1891 = &$tmp1863->typeKind;
org$frostlang$frostc$Type$Kind $tmp1892 = *$tmp1891;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1893;
$tmp1893 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1893->value = $tmp1892;
frost$core$Int $tmp1894 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1895 = &(&local23)->$rawValue;
*$tmp1895 = $tmp1894;
org$frostlang$frostc$Type$Kind $tmp1896 = *(&local23);
*(&local22) = $tmp1896;
org$frostlang$frostc$Type$Kind $tmp1897 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1898;
$tmp1898 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1898->value = $tmp1897;
ITable* $tmp1899 = ((frost$core$Equatable*) $tmp1893)->$class->itable;
while ($tmp1899->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1899 = $tmp1899->next;
}
$fn1901 $tmp1900 = $tmp1899->methods[0];
frost$core$Bit $tmp1902 = $tmp1900(((frost$core$Equatable*) $tmp1893), ((frost$core$Equatable*) $tmp1898));
bool $tmp1903 = $tmp1902.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1898)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1893)));
if ($tmp1903) goto block53; else goto block54;
block54:;
org$frostlang$frostc$Type$Kind* $tmp1904 = &$tmp1863->typeKind;
org$frostlang$frostc$Type$Kind $tmp1905 = *$tmp1904;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1906;
$tmp1906 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1906->value = $tmp1905;
frost$core$Int $tmp1907 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:426:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1908 = &(&local25)->$rawValue;
*$tmp1908 = $tmp1907;
org$frostlang$frostc$Type$Kind $tmp1909 = *(&local25);
*(&local24) = $tmp1909;
org$frostlang$frostc$Type$Kind $tmp1910 = *(&local24);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1911;
$tmp1911 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1911->value = $tmp1910;
ITable* $tmp1912 = ((frost$core$Equatable*) $tmp1906)->$class->itable;
while ($tmp1912->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1912 = $tmp1912->next;
}
$fn1914 $tmp1913 = $tmp1912->methods[0];
frost$core$Bit $tmp1915 = $tmp1913(((frost$core$Equatable*) $tmp1906), ((frost$core$Equatable*) $tmp1911));
bool $tmp1916 = $tmp1915.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1911)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1906)));
if ($tmp1916) goto block53; else goto block51;
block53:;
frost$core$Int $tmp1917 = (frost$core$Int) {0u};
int64_t $tmp1918 = $tmp1864.value;
int64_t $tmp1919 = $tmp1917.value;
bool $tmp1920 = $tmp1918 >= $tmp1919;
frost$core$Bit $tmp1921 = (frost$core$Bit) {$tmp1920};
bool $tmp1922 = $tmp1921.value;
if ($tmp1922) goto block52; else goto block51;
block52:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:426:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1923 = &$tmp1863->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1924 = *$tmp1923;
frost$core$Bit $tmp1925 = (frost$core$Bit) {$tmp1924 != NULL};
bool $tmp1926 = $tmp1925.value;
if ($tmp1926) goto block62; else goto block63;
block63:;
frost$core$Int $tmp1927 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1928, $tmp1927, &$s1929);
abort(); // unreachable
block62:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
ITable* $tmp1930 = ((frost$collections$CollectionView*) $tmp1924)->$class->itable;
while ($tmp1930->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1930 = $tmp1930->next;
}
$fn1932 $tmp1931 = $tmp1930->methods[0];
frost$core$Int $tmp1933 = $tmp1931(((frost$collections$CollectionView*) $tmp1924));
frost$core$Int $tmp1934 = (frost$core$Int) {1u};
int64_t $tmp1935 = $tmp1933.value;
int64_t $tmp1936 = $tmp1934.value;
int64_t $tmp1937 = $tmp1935 - $tmp1936;
frost$core$Int $tmp1938 = (frost$core$Int) {$tmp1937};
int64_t $tmp1939 = $tmp1864.value;
int64_t $tmp1940 = $tmp1938.value;
bool $tmp1941 = $tmp1939 < $tmp1940;
frost$core$Bit $tmp1942 = (frost$core$Bit) {$tmp1941};
bool $tmp1943 = $tmp1942.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
if ($tmp1943) goto block50; else goto block51;
block51:;
frost$core$Int $tmp1944 = (frost$core$Int) {427u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1945, $tmp1944, &$s1946);
abort(); // unreachable
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:428
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:428:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1947 = &$tmp1863->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1948 = *$tmp1947;
frost$core$Bit $tmp1949 = (frost$core$Bit) {$tmp1948 != NULL};
bool $tmp1950 = $tmp1949.value;
if ($tmp1950) goto block65; else goto block66;
block66:;
frost$core$Int $tmp1951 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1952, $tmp1951, &$s1953);
abort(); // unreachable
block65:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
frost$core$Object* $tmp1954 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1948, $tmp1864);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1954)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1954);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:251:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3710
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1955 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1956 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3710:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp1957 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp1958 = *$tmp1957;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1959 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1960 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1959, $tmp1960);
frost$collections$Array$add$frost$collections$Array$T($tmp1959, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1954)));
org$frostlang$frostc$Type* $tmp1961 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1958, ((frost$collections$ListView*) $tmp1959));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp1955, $tmp1956, ((org$frostlang$frostc$Type*) $tmp1954), $tmp1961);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1955));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1955));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1860, $tmp1861, $tmp1862, $tmp1955);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp1856, $tmp1857, $tmp1858, $tmp1859, $tmp1860);
frost$collections$Array$add$frost$collections$Array$T($tmp1855, ((frost$core$Object*) $tmp1856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1955));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1954)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
frost$core$String* $tmp1962 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1841);
frost$core$Int $tmp1963 = *(&local15);
int64_t $tmp1964 = $tmp1826.value;
int64_t $tmp1965 = $tmp1963.value;
int64_t $tmp1966 = $tmp1964 - $tmp1965;
frost$core$Int $tmp1967 = (frost$core$Int) {$tmp1966};
if ($tmp1828) goto block70; else goto block71;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:254
frost$core$Int $tmp1968 = (frost$core$Int) {254u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1969, $tmp1968);
abort(); // unreachable
block70:;
int64_t $tmp1970 = $tmp1967.value;
int64_t $tmp1971 = $tmp1829.value;
bool $tmp1972 = $tmp1970 >= $tmp1971;
frost$core$Bit $tmp1973 = (frost$core$Bit) {$tmp1972};
bool $tmp1974 = $tmp1973.value;
if ($tmp1974) goto block69; else goto block41;
block71:;
int64_t $tmp1975 = $tmp1967.value;
int64_t $tmp1976 = $tmp1829.value;
bool $tmp1977 = $tmp1975 > $tmp1976;
frost$core$Bit $tmp1978 = (frost$core$Bit) {$tmp1977};
bool $tmp1979 = $tmp1978.value;
if ($tmp1979) goto block69; else goto block41;
block69:;
int64_t $tmp1980 = $tmp1963.value;
int64_t $tmp1981 = $tmp1829.value;
int64_t $tmp1982 = $tmp1980 + $tmp1981;
frost$core$Int $tmp1983 = (frost$core$Int) {$tmp1982};
*(&local15) = $tmp1983;
goto block40;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:258
org$frostlang$frostc$Type* $tmp1984 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:258:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1985 = &$tmp1984->typeKind;
org$frostlang$frostc$Type$Kind $tmp1986 = *$tmp1985;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1987;
$tmp1987 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1987->value = $tmp1986;
frost$core$Int $tmp1988 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1989 = &(&local28)->$rawValue;
*$tmp1989 = $tmp1988;
org$frostlang$frostc$Type$Kind $tmp1990 = *(&local28);
*(&local27) = $tmp1990;
org$frostlang$frostc$Type$Kind $tmp1991 = *(&local27);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1992;
$tmp1992 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1992->value = $tmp1991;
ITable* $tmp1993 = ((frost$core$Equatable*) $tmp1987)->$class->itable;
while ($tmp1993->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1993 = $tmp1993->next;
}
$fn1995 $tmp1994 = $tmp1993->methods[1];
frost$core$Bit $tmp1996 = $tmp1994(((frost$core$Equatable*) $tmp1987), ((frost$core$Equatable*) $tmp1992));
bool $tmp1997 = $tmp1996.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1992)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1987)));
if ($tmp1997) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
*(&local26) = $tmp1984;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
goto block72;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1998 = &$tmp1984->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1999 = *$tmp1998;
frost$core$Bit $tmp2000 = (frost$core$Bit) {$tmp1999 != NULL};
bool $tmp2001 = $tmp2000.value;
if ($tmp2001) goto block77; else goto block78;
block78:;
frost$core$Int $tmp2002 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2003, $tmp2002, &$s2004);
abort(); // unreachable
block77:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
frost$core$Int $tmp2005 = (frost$core$Int) {0u};
frost$core$Object* $tmp2006 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1999, $tmp2005);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2006)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2006);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
*(&local26) = ((org$frostlang$frostc$Type*) $tmp2006);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2006)));
goto block72;
block72:;
org$frostlang$frostc$Type* $tmp2007 = *(&local26);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:258:54
org$frostlang$frostc$Type$Kind* $tmp2008 = &$tmp2007->typeKind;
org$frostlang$frostc$Type$Kind $tmp2009 = *$tmp2008;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2010;
$tmp2010 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2010->value = $tmp2009;
frost$core$Int $tmp2011 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2012 = &(&local30)->$rawValue;
*$tmp2012 = $tmp2011;
org$frostlang$frostc$Type$Kind $tmp2013 = *(&local30);
*(&local29) = $tmp2013;
org$frostlang$frostc$Type$Kind $tmp2014 = *(&local29);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2015;
$tmp2015 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2015->value = $tmp2014;
ITable* $tmp2016 = ((frost$core$Equatable*) $tmp2010)->$class->itable;
while ($tmp2016->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2016 = $tmp2016->next;
}
$fn2018 $tmp2017 = $tmp2016->methods[0];
frost$core$Bit $tmp2019 = $tmp2017(((frost$core$Equatable*) $tmp2010), ((frost$core$Equatable*) $tmp2015));
bool $tmp2020 = $tmp2019.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2015)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2010)));
if ($tmp2020) goto block80; else goto block84;
block84:;
org$frostlang$frostc$Type$Kind* $tmp2021 = &$tmp2007->typeKind;
org$frostlang$frostc$Type$Kind $tmp2022 = *$tmp2021;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2023;
$tmp2023 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2023->value = $tmp2022;
frost$core$Int $tmp2024 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2025 = &(&local32)->$rawValue;
*$tmp2025 = $tmp2024;
org$frostlang$frostc$Type$Kind $tmp2026 = *(&local32);
*(&local31) = $tmp2026;
org$frostlang$frostc$Type$Kind $tmp2027 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2028;
$tmp2028 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2028->value = $tmp2027;
ITable* $tmp2029 = ((frost$core$Equatable*) $tmp2023)->$class->itable;
while ($tmp2029->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2029 = $tmp2029->next;
}
$fn2031 $tmp2030 = $tmp2029->methods[0];
frost$core$Bit $tmp2032 = $tmp2030(((frost$core$Equatable*) $tmp2023), ((frost$core$Equatable*) $tmp2028));
bool $tmp2033 = $tmp2032.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2028)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2023)));
if ($tmp2033) goto block80; else goto block83;
block83:;
org$frostlang$frostc$Type$Kind* $tmp2034 = &$tmp2007->typeKind;
org$frostlang$frostc$Type$Kind $tmp2035 = *$tmp2034;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2036;
$tmp2036 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2036->value = $tmp2035;
frost$core$Int $tmp2037 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2038 = &(&local34)->$rawValue;
*$tmp2038 = $tmp2037;
org$frostlang$frostc$Type$Kind $tmp2039 = *(&local34);
*(&local33) = $tmp2039;
org$frostlang$frostc$Type$Kind $tmp2040 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2041;
$tmp2041 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2041->value = $tmp2040;
ITable* $tmp2042 = ((frost$core$Equatable*) $tmp2036)->$class->itable;
while ($tmp2042->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2042 = $tmp2042->next;
}
$fn2044 $tmp2043 = $tmp2042->methods[0];
frost$core$Bit $tmp2045 = $tmp2043(((frost$core$Equatable*) $tmp2036), ((frost$core$Equatable*) $tmp2041));
bool $tmp2046 = $tmp2045.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2041)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2036)));
if ($tmp2046) goto block80; else goto block82;
block82:;
org$frostlang$frostc$Type$Kind* $tmp2047 = &$tmp2007->typeKind;
org$frostlang$frostc$Type$Kind $tmp2048 = *$tmp2047;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2049;
$tmp2049 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2049->value = $tmp2048;
frost$core$Int $tmp2050 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2051 = &(&local36)->$rawValue;
*$tmp2051 = $tmp2050;
org$frostlang$frostc$Type$Kind $tmp2052 = *(&local36);
*(&local35) = $tmp2052;
org$frostlang$frostc$Type$Kind $tmp2053 = *(&local35);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2054;
$tmp2054 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2054->value = $tmp2053;
ITable* $tmp2055 = ((frost$core$Equatable*) $tmp2049)->$class->itable;
while ($tmp2055->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2055 = $tmp2055->next;
}
$fn2057 $tmp2056 = $tmp2055->methods[0];
frost$core$Bit $tmp2058 = $tmp2056(((frost$core$Equatable*) $tmp2049), ((frost$core$Equatable*) $tmp2054));
bool $tmp2059 = $tmp2058.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2054)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2049)));
if ($tmp2059) goto block80; else goto block81;
block81:;
frost$core$Int $tmp2060 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2061, $tmp2060, &$s2062);
abort(); // unreachable
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2063 = &$tmp2007->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2064 = *$tmp2063;
frost$core$Bit $tmp2065 = (frost$core$Bit) {$tmp2064 != NULL};
bool $tmp2066 = $tmp2065.value;
if ($tmp2066) goto block90; else goto block91;
block91:;
frost$core$Int $tmp2067 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2068, $tmp2067, &$s2069);
abort(); // unreachable
block90:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
ITable* $tmp2070 = ((frost$collections$ListView*) $tmp2064)->$class->itable;
while ($tmp2070->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2070 = $tmp2070->next;
}
$fn2072 $tmp2071 = $tmp2070->methods[5];
frost$core$Object* $tmp2073 = $tmp2071(((frost$collections$ListView*) $tmp2064));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2073)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2073);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
*(&local37) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2073)));
org$frostlang$frostc$Type* $tmp2074 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
*(&local37) = ((org$frostlang$frostc$Type*) $tmp2073);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2073)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:259
frost$core$Int $tmp2075 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:259:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2076 = &(&local39)->$rawValue;
*$tmp2076 = $tmp2075;
org$frostlang$frostc$MethodDecl$Kind $tmp2077 = *(&local39);
*(&local38) = $tmp2077;
org$frostlang$frostc$MethodDecl$Kind $tmp2078 = *(&local38);
frost$collections$Array* $tmp2079 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp2080 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2079);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2081 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2082 = (frost$core$Int) {26u};
org$frostlang$frostc$Type* $tmp2083 = *(&local37);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:261:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3710
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2084 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2085 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3710:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp2086 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp2087 = *$tmp2086;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2088 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2089 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2088, $tmp2089);
frost$collections$Array$add$frost$collections$Array$T($tmp2088, ((frost$core$Object*) $tmp2083));
org$frostlang$frostc$Type* $tmp2090 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2087, ((frost$collections$ListView*) $tmp2088));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp2084, $tmp2085, $tmp2083, $tmp2090);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2081, $tmp2082, param1, $tmp2084);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2091 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2092 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2091, $tmp2092);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2093 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2094 = (frost$core$Int) {38u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp2093, $tmp2094, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp2091, ((frost$core$Object*) $tmp2093));
org$frostlang$frostc$FixedArray* $tmp2095 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2091);
org$frostlang$frostc$IR$Value* $tmp2096 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2078, $tmp2080, $tmp2081, $tmp2095, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
org$frostlang$frostc$Type* $tmp2097 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
*(&local37) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2098 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2099 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2100 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2100));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2101 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2101));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2102 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp2096;
block12:;
org$frostlang$frostc$Type* $tmp2103 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2103));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2104 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2105 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:267
frost$collections$IdentityMap** $tmp2106 = &param0->lambdaTypes;
frost$collections$IdentityMap* $tmp2107 = *$tmp2106;
frost$core$Object* $tmp2108 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp2107, ((frost$core$Object*) param3));
*(&local40) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp2108)));
frost$collections$HashSet* $tmp2109 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
*(&local40) = ((frost$collections$HashSet*) $tmp2108);
frost$core$Frost$unref$frost$core$Object$Q($tmp2108);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:268
frost$collections$HashSet* $tmp2110 = *(&local40);
frost$core$Bit $tmp2111 = (frost$core$Bit) {$tmp2110 != NULL};
bool $tmp2112 = $tmp2111.value;
if ($tmp2112) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:269
frost$collections$HashSet* $tmp2113 = *(&local40);
ITable* $tmp2114 = ((frost$collections$CollectionView*) $tmp2113)->$class->itable;
while ($tmp2114->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2114 = $tmp2114->next;
}
$fn2116 $tmp2115 = $tmp2114->methods[0];
frost$core$Int $tmp2117 = $tmp2115(((frost$collections$CollectionView*) $tmp2113));
frost$core$Int $tmp2118 = (frost$core$Int) {1u};
int64_t $tmp2119 = $tmp2117.value;
int64_t $tmp2120 = $tmp2118.value;
bool $tmp2121 = $tmp2119 > $tmp2120;
frost$core$Bit $tmp2122 = (frost$core$Bit) {$tmp2121};
bool $tmp2123 = $tmp2122.value;
if ($tmp2123) goto block97; else goto block99;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:270
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2124 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$HashSet* $tmp2125 = *(&local40);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp2124, ((frost$collections$CollectionView*) $tmp2125));
*(&local41) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
frost$collections$Array* $tmp2126 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
*(&local41) = $tmp2124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:271
frost$collections$Array* $tmp2127 = *(&local41);
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp2129 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Closure.frost:271:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp2130 = &$tmp2129->pointer;
*$tmp2130 = ((frost$core$Int8*) org$frostlang$frostc$expression$Closure$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp2131 = &$tmp2129->target;
frost$core$Immutable* $tmp2132 = *$tmp2131;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
frost$core$Immutable** $tmp2133 = &$tmp2129->target;
*$tmp2133 = ((frost$core$Immutable*) NULL);
ITable* $tmp2134 = ((frost$collections$ListView*) $tmp2127)->$class->itable;
while ($tmp2134->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2134 = $tmp2134->next;
}
$fn2136 $tmp2135 = $tmp2134->methods[15];
frost$collections$ListView* $tmp2137 = $tmp2135(((frost$collections$ListView*) $tmp2127), ((frost$core$MutableMethod*) $tmp2129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:272
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2138 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2138, &$s2139);
*(&local42) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
frost$core$MutableString* $tmp2140 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2140));
*(&local42) = $tmp2138;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:273
frost$threads$MessageQueue** $tmp2141 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2142 = *$tmp2141;
*(&local43) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2142));
frost$threads$MessageQueue* $tmp2143 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2143));
*(&local43) = $tmp2142;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:274
frost$collections$Array* $tmp2144 = *(&local41);
ITable* $tmp2145 = ((frost$collections$Iterable*) $tmp2144)->$class->itable;
while ($tmp2145->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2145 = $tmp2145->next;
}
$fn2147 $tmp2146 = $tmp2145->methods[0];
frost$collections$Iterator* $tmp2148 = $tmp2146(((frost$collections$Iterable*) $tmp2144));
goto block101;
block101:;
ITable* $tmp2149 = $tmp2148->$class->itable;
while ($tmp2149->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2149 = $tmp2149->next;
}
$fn2151 $tmp2150 = $tmp2149->methods[0];
frost$core$Bit $tmp2152 = $tmp2150($tmp2148);
bool $tmp2153 = $tmp2152.value;
if ($tmp2153) goto block103; else goto block102;
block102:;
*(&local44) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp2154 = $tmp2148->$class->itable;
while ($tmp2154->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2154 = $tmp2154->next;
}
$fn2156 $tmp2155 = $tmp2154->methods[1];
frost$core$Object* $tmp2157 = $tmp2155($tmp2148);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2157)));
org$frostlang$frostc$Type* $tmp2158 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
*(&local44) = ((org$frostlang$frostc$Type*) $tmp2157);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:275
frost$core$MutableString* $tmp2159 = *(&local42);
org$frostlang$frostc$Type* $tmp2160 = *(&local44);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:275:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2162 $tmp2161 = ($fn2162) ((frost$core$Object*) $tmp2160)->$class->vtable[0];
frost$core$String* $tmp2163 = $tmp2161(((frost$core$Object*) $tmp2160));
frost$core$String* $tmp2164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2165, $tmp2163);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
frost$core$String* $tmp2166 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2164, &$s2167);
frost$core$MutableString$append$frost$core$String($tmp2159, $tmp2166);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:276
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp2168 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp2168);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
frost$threads$MessageQueue** $tmp2169 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2170 = *$tmp2169;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
frost$threads$MessageQueue** $tmp2171 = &param0->errorQueue;
*$tmp2171 = $tmp2168;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:277
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2172 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2173 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp2174 = *(&local44);
frost$core$Bit $tmp2175 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2172, $tmp2173, $tmp2174, $tmp2175);
org$frostlang$frostc$IR$Value* $tmp2176 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp2172);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:279
frost$threads$MessageQueue** $tmp2177 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2178 = *$tmp2177;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Closure.frost:279:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp2179 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp2180 = &$tmp2178->lock;
frost$threads$Lock* $tmp2181 = *$tmp2180;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp2179, $tmp2181);
*(&local45) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2179));
frost$threads$ScopedLock* $tmp2182 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
*(&local45) = $tmp2179;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2179));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp2183 = &$tmp2178->count;
frost$core$Int $tmp2184 = *$tmp2183;
frost$threads$ScopedLock* $tmp2185 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
*(&local45) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp2186 = (frost$core$Int) {0u};
int64_t $tmp2187 = $tmp2184.value;
int64_t $tmp2188 = $tmp2186.value;
bool $tmp2189 = $tmp2187 > $tmp2188;
frost$core$Bit $tmp2190 = (frost$core$Bit) {$tmp2189};
bool $tmp2191 = $tmp2190.value;
if ($tmp2191) goto block107; else goto block108;
block108:;
frost$core$Int $tmp2192 = (frost$core$Int) {279u};
org$frostlang$frostc$Position$wrapper* $tmp2193;
$tmp2193 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp2193->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:280:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2195 $tmp2194 = ($fn2195) ((frost$core$Object*) $tmp2193)->$class->vtable[0];
frost$core$String* $tmp2196 = $tmp2194(((frost$core$Object*) $tmp2193));
frost$core$String* $tmp2197 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2198, $tmp2196);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
frost$core$String* $tmp2199 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2197, &$s2200);
org$frostlang$frostc$Type* $tmp2201 = *(&local44);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:281:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2203 $tmp2202 = ($fn2203) ((frost$core$Object*) $tmp2201)->$class->vtable[0];
frost$core$String* $tmp2204 = $tmp2202(((frost$core$Object*) $tmp2201));
frost$core$String* $tmp2205 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2206, $tmp2204);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2204));
frost$core$String* $tmp2207 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2205, &$s2208);
frost$core$String* $tmp2209 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2199, $tmp2207);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2210, $tmp2192, $tmp2209);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
abort(); // unreachable
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:282
goto block111;
block111:;
frost$threads$MessageQueue** $tmp2211 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2212 = *$tmp2211;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Closure.frost:282:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp2213 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp2214 = &$tmp2212->lock;
frost$threads$Lock* $tmp2215 = *$tmp2214;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp2213, $tmp2215);
*(&local46) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2213));
frost$threads$ScopedLock* $tmp2216 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
*(&local46) = $tmp2213;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2213));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp2217 = &$tmp2212->count;
frost$core$Int $tmp2218 = *$tmp2217;
frost$threads$ScopedLock* $tmp2219 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2219));
*(&local46) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp2220 = (frost$core$Int) {0u};
int64_t $tmp2221 = $tmp2218.value;
int64_t $tmp2222 = $tmp2220.value;
bool $tmp2223 = $tmp2221 > $tmp2222;
frost$core$Bit $tmp2224 = (frost$core$Bit) {$tmp2223};
bool $tmp2225 = $tmp2224.value;
if ($tmp2225) goto block112; else goto block113;
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:283
frost$threads$MessageQueue** $tmp2226 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2227 = *$tmp2226;
frost$core$Immutable* $tmp2228 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp2227);
frost$core$Int* $tmp2229 = &((org$frostlang$frostc$Compiler$Message*) $tmp2228)->$rawValue;
frost$core$Int $tmp2230 = *$tmp2229;
frost$core$Int $tmp2231 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:284:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2232 = $tmp2230.value;
int64_t $tmp2233 = $tmp2231.value;
bool $tmp2234 = $tmp2232 == $tmp2233;
frost$core$Bit $tmp2235 = (frost$core$Bit) {$tmp2234};
bool $tmp2236 = $tmp2235.value;
if ($tmp2236) goto block117; else goto block118;
block117:;
frost$core$String** $tmp2237 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2228)->$data + 0);
frost$core$String* $tmp2238 = *$tmp2237;
frost$core$Int* $tmp2239 = (frost$core$Int*) (((org$frostlang$frostc$Compiler$Message*) $tmp2228)->$data + 8);
frost$core$Int $tmp2240 = *$tmp2239;
frost$core$Int* $tmp2241 = (frost$core$Int*) (((org$frostlang$frostc$Compiler$Message*) $tmp2228)->$data + 16);
frost$core$Int $tmp2242 = *$tmp2241;
frost$core$String** $tmp2243 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2228)->$data + 24);
frost$core$String* $tmp2244 = *$tmp2243;
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
frost$core$String* $tmp2245 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2245));
*(&local47) = $tmp2244;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:285
frost$core$MutableString* $tmp2246 = *(&local42);
frost$core$String* $tmp2247 = *(&local47);
frost$core$String* $tmp2248 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2249, $tmp2247);
frost$core$String* $tmp2250 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2248, &$s2251);
frost$core$MutableString$append$frost$core$String($tmp2246, $tmp2250);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
frost$core$String* $tmp2252 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
*(&local47) = ((frost$core$String*) NULL);
goto block116;
block118:;
frost$core$Int $tmp2253 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:287:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2254 = $tmp2230.value;
int64_t $tmp2255 = $tmp2253.value;
bool $tmp2256 = $tmp2254 == $tmp2255;
frost$core$Bit $tmp2257 = (frost$core$Bit) {$tmp2256};
bool $tmp2258 = $tmp2257.value;
if ($tmp2258) goto block120; else goto block116;
block120:;
frost$core$String** $tmp2259 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2228)->$data + 0);
frost$core$String* $tmp2260 = *$tmp2259;
frost$core$Int* $tmp2261 = (frost$core$Int*) (((org$frostlang$frostc$Compiler$Message*) $tmp2228)->$data + 8);
frost$core$Int $tmp2262 = *$tmp2261;
frost$core$Int* $tmp2263 = (frost$core$Int*) (((org$frostlang$frostc$Compiler$Message*) $tmp2228)->$data + 16);
frost$core$Int $tmp2264 = *$tmp2263;
frost$core$String** $tmp2265 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2228)->$data + 24);
frost$core$String* $tmp2266 = *$tmp2265;
*(&local48) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
frost$core$String* $tmp2267 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
*(&local48) = $tmp2266;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:288
frost$core$MutableString* $tmp2268 = *(&local42);
frost$core$String* $tmp2269 = *(&local48);
frost$core$String* $tmp2270 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2271, $tmp2269);
frost$core$String* $tmp2272 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2270, &$s2273);
frost$core$MutableString$append$frost$core$String($tmp2268, $tmp2272);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
frost$core$String* $tmp2274 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2274));
*(&local48) = ((frost$core$String*) NULL);
goto block116;
block116:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
goto block111;
block113:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2157);
org$frostlang$frostc$Type* $tmp2275 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
*(&local44) = ((org$frostlang$frostc$Type*) NULL);
goto block101;
block103:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:293
frost$threads$MessageQueue* $tmp2276 = *(&local43);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
frost$threads$MessageQueue** $tmp2277 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2278 = *$tmp2277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2278));
frost$threads$MessageQueue** $tmp2279 = &param0->errorQueue;
*$tmp2279 = $tmp2276;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:294
frost$core$MutableString* $tmp2280 = *(&local42);
frost$core$String* $tmp2281 = frost$core$MutableString$finish$R$frost$core$String($tmp2280);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2281);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2281));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:295
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$threads$MessageQueue* $tmp2282 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2282));
*(&local43) = ((frost$threads$MessageQueue*) NULL);
frost$core$MutableString* $tmp2283 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2283));
*(&local42) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp2284 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2284));
*(&local41) = ((frost$collections$Array*) NULL);
frost$collections$HashSet* $tmp2285 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
*(&local40) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block99:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:298
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2286 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2287 = (frost$core$Int) {3u};
frost$collections$HashSet* $tmp2288 = *(&local40);
ITable* $tmp2289 = ((frost$collections$Iterable*) $tmp2288)->$class->itable;
while ($tmp2289->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2289 = $tmp2289->next;
}
$fn2291 $tmp2290 = $tmp2289->methods[0];
frost$collections$Iterator* $tmp2292 = $tmp2290(((frost$collections$Iterable*) $tmp2288));
ITable* $tmp2293 = $tmp2292->$class->itable;
while ($tmp2293->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2293 = $tmp2293->next;
}
$fn2295 $tmp2294 = $tmp2293->methods[1];
frost$core$Object* $tmp2296 = $tmp2294($tmp2292);
frost$core$Bit $tmp2297 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2286, $tmp2287, ((org$frostlang$frostc$Type*) $tmp2296), $tmp2297);
org$frostlang$frostc$IR$Value* $tmp2298 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp2286);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2298));
frost$core$Frost$unref$frost$core$Object$Q($tmp2296);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2286));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:300
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp2299 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
*(&local40) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block98:;
goto block96;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:303
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s2300);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:305
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp2301 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2301));
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
frost$core$Int* $tmp2302 = &param0->closureCount;
frost$core$Int $tmp2303 = *$tmp2302;
frost$core$Int $tmp2304 = (frost$core$Int) {1u};
int64_t $tmp2305 = $tmp2303.value;
int64_t $tmp2306 = $tmp2304.value;
int64_t $tmp2307 = $tmp2305 + $tmp2306;
frost$core$Int $tmp2308 = (frost$core$Int) {$tmp2307};
frost$core$Int* $tmp2309 = &param0->closureCount;
*$tmp2309 = $tmp2308;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:313
frost$core$Int* $tmp2310 = &param0->closureCount;
frost$core$Int $tmp2311 = *$tmp2310;
frost$core$Int$wrapper* $tmp2312;
$tmp2312 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp2312->value = $tmp2311;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:313:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2314 $tmp2313 = ($fn2314) ((frost$core$Object*) $tmp2312)->$class->vtable[0];
frost$core$String* $tmp2315 = $tmp2313(((frost$core$Object*) $tmp2312));
frost$core$String* $tmp2316 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2317, $tmp2315);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
frost$core$String* $tmp2318 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2316, &$s2319);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2318));
frost$core$String* $tmp2320 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2320));
*(&local0) = $tmp2318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2312));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:314
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2321 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2321);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
frost$collections$Array* $tmp2322 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
*(&local1) = $tmp2321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:315
ITable* $tmp2323 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp2323->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2323 = $tmp2323->next;
}
$fn2325 $tmp2324 = $tmp2323->methods[0];
frost$collections$Iterator* $tmp2326 = $tmp2324(((frost$collections$Iterable*) param3));
goto block2;
block2:;
ITable* $tmp2327 = $tmp2326->$class->itable;
while ($tmp2327->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2327 = $tmp2327->next;
}
$fn2329 $tmp2328 = $tmp2327->methods[0];
frost$core$Bit $tmp2330 = $tmp2328($tmp2326);
bool $tmp2331 = $tmp2330.value;
if ($tmp2331) goto block4; else goto block3;
block3:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2332 = $tmp2326->$class->itable;
while ($tmp2332->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2332 = $tmp2332->next;
}
$fn2334 $tmp2333 = $tmp2332->methods[1];
frost$core$Object* $tmp2335 = $tmp2333($tmp2326);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2335)));
org$frostlang$frostc$ASTNode* $tmp2336 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2336));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp2335);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:316
org$frostlang$frostc$ASTNode* $tmp2337 = *(&local2);
frost$core$Int* $tmp2338 = &$tmp2337->$rawValue;
frost$core$Int $tmp2339 = *$tmp2338;
frost$core$Int $tmp2340 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:317:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2341 = $tmp2339.value;
int64_t $tmp2342 = $tmp2340.value;
bool $tmp2343 = $tmp2341 == $tmp2342;
frost$core$Bit $tmp2344 = (frost$core$Bit) {$tmp2343};
bool $tmp2345 = $tmp2344.value;
if ($tmp2345) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp2346 = (org$frostlang$frostc$Position*) ($tmp2337->$data + 0);
org$frostlang$frostc$Position $tmp2347 = *$tmp2346;
frost$core$String** $tmp2348 = (frost$core$String**) ($tmp2337->$data + 24);
frost$core$String* $tmp2349 = *$tmp2348;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2349));
frost$core$String* $tmp2350 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2350));
*(&local3) = $tmp2349;
org$frostlang$frostc$ASTNode** $tmp2351 = (org$frostlang$frostc$ASTNode**) ($tmp2337->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2352 = *$tmp2351;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2352));
org$frostlang$frostc$ASTNode* $tmp2353 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2353));
*(&local4) = $tmp2352;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:318
org$frostlang$frostc$Scanner** $tmp2354 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp2355 = *$tmp2354;
org$frostlang$frostc$ASTNode* $tmp2356 = *(&local4);
org$frostlang$frostc$Type* $tmp2357 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp2355, $tmp2356);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from Closure.frost:318:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:889
frost$core$Bit $tmp2358 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp2359 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp2357, $tmp2358);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
org$frostlang$frostc$Type* $tmp2360 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
*(&local5) = $tmp2359;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2357));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:319
org$frostlang$frostc$Type* $tmp2361 = *(&local5);
frost$core$Bit $tmp2362 = (frost$core$Bit) {$tmp2361 == NULL};
bool $tmp2363 = $tmp2362.value;
if ($tmp2363) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:320
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2364 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2365 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2365));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2366 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2366));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2335);
org$frostlang$frostc$ASTNode* $tmp2367 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2367));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
frost$collections$Array* $tmp2368 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2368));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2369 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2369));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:322
frost$collections$Array* $tmp2370 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp2371 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp2372 = *(&local3);
org$frostlang$frostc$Type* $tmp2373 = *(&local5);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp2371, $tmp2372, $tmp2373);
frost$collections$Array$add$frost$collections$Array$T($tmp2370, ((frost$core$Object*) $tmp2371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2371));
org$frostlang$frostc$Type* $tmp2374 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2374));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2375 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2375));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2376 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2335);
org$frostlang$frostc$ASTNode* $tmp2377 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:325
frost$core$Int $tmp2378 = (frost$core$Int) {325u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2379, $tmp2378);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:329
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:330
frost$core$Bit $tmp2380 = (frost$core$Bit) {param4 != NULL};
bool $tmp2381 = $tmp2380.value;
if ($tmp2381) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:331
org$frostlang$frostc$Scanner** $tmp2382 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp2383 = *$tmp2382;
org$frostlang$frostc$Type* $tmp2384 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp2383, param4);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from Closure.frost:331:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:889
frost$core$Bit $tmp2385 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp2386 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp2384, $tmp2385);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
org$frostlang$frostc$Type* $tmp2387 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
*(&local6) = $tmp2386;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:332
org$frostlang$frostc$Type* $tmp2388 = *(&local6);
frost$core$Bit $tmp2389 = (frost$core$Bit) {false};
bool $tmp2390 = $tmp2389.value;
if ($tmp2390) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:333
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2391 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2392 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2393 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block17:;
goto block13;
block14:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:337
org$frostlang$frostc$Type** $tmp2394 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2395 = *$tmp2394;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2395));
org$frostlang$frostc$Type* $tmp2396 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
*(&local6) = $tmp2395;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:338
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2397;
$tmp2397 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2397->value = param2;
frost$core$Int $tmp2398 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:338:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2399 = &(&local8)->$rawValue;
*$tmp2399 = $tmp2398;
org$frostlang$frostc$MethodDecl$Kind $tmp2400 = *(&local8);
*(&local7) = $tmp2400;
org$frostlang$frostc$MethodDecl$Kind $tmp2401 = *(&local7);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2402;
$tmp2402 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2402->value = $tmp2401;
ITable* $tmp2403 = ((frost$core$Equatable*) $tmp2397)->$class->itable;
while ($tmp2403->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2403 = $tmp2403->next;
}
$fn2405 $tmp2404 = $tmp2403->methods[0];
frost$core$Bit $tmp2406 = $tmp2404(((frost$core$Equatable*) $tmp2397), ((frost$core$Equatable*) $tmp2402));
bool $tmp2407 = $tmp2406.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2402)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2397)));
if ($tmp2407) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:339
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s2408);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:340
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2409 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2410 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2411 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block19:;
goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:343
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp2412 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Stack** $tmp2413 = &param0->currentMethod;
frost$collections$Stack* $tmp2414 = *$tmp2413;
frost$core$Int $tmp2415 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Closure.frost:343:94
frost$core$Int $tmp2416 = (frost$core$Int) {0u};
int64_t $tmp2417 = $tmp2415.value;
int64_t $tmp2418 = $tmp2416.value;
bool $tmp2419 = $tmp2417 >= $tmp2418;
frost$core$Bit $tmp2420 = (frost$core$Bit) {$tmp2419};
bool $tmp2421 = $tmp2420.value;
if ($tmp2421) goto block24; else goto block23;
block24:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp2422 = &$tmp2414->contents;
frost$collections$Array* $tmp2423 = *$tmp2422;
ITable* $tmp2424 = ((frost$collections$CollectionView*) $tmp2423)->$class->itable;
while ($tmp2424->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2424 = $tmp2424->next;
}
$fn2426 $tmp2425 = $tmp2424->methods[0];
frost$core$Int $tmp2427 = $tmp2425(((frost$collections$CollectionView*) $tmp2423));
int64_t $tmp2428 = $tmp2415.value;
int64_t $tmp2429 = $tmp2427.value;
bool $tmp2430 = $tmp2428 < $tmp2429;
frost$core$Bit $tmp2431 = (frost$core$Bit) {$tmp2430};
bool $tmp2432 = $tmp2431.value;
if ($tmp2432) goto block22; else goto block23;
block23:;
frost$core$Int $tmp2433 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2434, $tmp2433, &$s2435);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp2436 = &$tmp2414->contents;
frost$collections$Array* $tmp2437 = *$tmp2436;
ITable* $tmp2438 = ((frost$collections$CollectionView*) $tmp2437)->$class->itable;
while ($tmp2438->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2438 = $tmp2438->next;
}
$fn2440 $tmp2439 = $tmp2438->methods[0];
frost$core$Int $tmp2441 = $tmp2439(((frost$collections$CollectionView*) $tmp2437));
int64_t $tmp2442 = $tmp2441.value;
int64_t $tmp2443 = $tmp2415.value;
bool $tmp2444 = $tmp2442 > $tmp2443;
frost$core$Bit $tmp2445 = (frost$core$Bit) {$tmp2444};
bool $tmp2446 = $tmp2445.value;
if ($tmp2446) goto block26; else goto block27;
block27:;
frost$core$Int $tmp2447 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2448, $tmp2447);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp2449 = &$tmp2414->contents;
frost$collections$Array* $tmp2450 = *$tmp2449;
frost$collections$Array** $tmp2451 = &$tmp2414->contents;
frost$collections$Array* $tmp2452 = *$tmp2451;
ITable* $tmp2453 = ((frost$collections$CollectionView*) $tmp2452)->$class->itable;
while ($tmp2453->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2453 = $tmp2453->next;
}
$fn2455 $tmp2454 = $tmp2453->methods[0];
frost$core$Int $tmp2456 = $tmp2454(((frost$collections$CollectionView*) $tmp2452));
frost$core$Int $tmp2457 = (frost$core$Int) {1u};
int64_t $tmp2458 = $tmp2456.value;
int64_t $tmp2459 = $tmp2457.value;
int64_t $tmp2460 = $tmp2458 - $tmp2459;
frost$core$Int $tmp2461 = (frost$core$Int) {$tmp2460};
int64_t $tmp2462 = $tmp2461.value;
int64_t $tmp2463 = $tmp2415.value;
int64_t $tmp2464 = $tmp2462 - $tmp2463;
frost$core$Int $tmp2465 = (frost$core$Int) {$tmp2464};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp2466 = (frost$core$Int) {0u};
int64_t $tmp2467 = $tmp2465.value;
int64_t $tmp2468 = $tmp2466.value;
bool $tmp2469 = $tmp2467 >= $tmp2468;
frost$core$Bit $tmp2470 = (frost$core$Bit) {$tmp2469};
bool $tmp2471 = $tmp2470.value;
if ($tmp2471) goto block31; else goto block30;
block31:;
ITable* $tmp2472 = ((frost$collections$CollectionView*) $tmp2450)->$class->itable;
while ($tmp2472->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2472 = $tmp2472->next;
}
$fn2474 $tmp2473 = $tmp2472->methods[0];
frost$core$Int $tmp2475 = $tmp2473(((frost$collections$CollectionView*) $tmp2450));
int64_t $tmp2476 = $tmp2465.value;
int64_t $tmp2477 = $tmp2475.value;
bool $tmp2478 = $tmp2476 < $tmp2477;
frost$core$Bit $tmp2479 = (frost$core$Bit) {$tmp2478};
bool $tmp2480 = $tmp2479.value;
if ($tmp2480) goto block29; else goto block30;
block30:;
frost$core$Int $tmp2481 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2482, $tmp2481, &$s2483);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2484 = &$tmp2450->data;
frost$core$Object** $tmp2485 = *$tmp2484;
frost$core$Int64 $tmp2486 = frost$core$Int64$init$frost$core$Int($tmp2465);
int64_t $tmp2487 = $tmp2486.value;
frost$core$Object* $tmp2488 = $tmp2485[$tmp2487];
frost$core$Frost$ref$frost$core$Object$Q($tmp2488);
frost$core$Frost$ref$frost$core$Object$Q($tmp2488);
frost$core$Frost$unref$frost$core$Object$Q($tmp2488);
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp2489 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2489);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp2412, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp2488)), ((frost$core$Object*) ((frost$collections$Map*) $tmp2489)));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
org$frostlang$frostc$Pair* $tmp2490 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2490));
*(&local9) = $tmp2412;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2489));
frost$core$Frost$unref$frost$core$Object$Q($tmp2488);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:345
frost$collections$Stack** $tmp2491 = &param0->captures;
frost$collections$Stack* $tmp2492 = *$tmp2491;
org$frostlang$frostc$Pair* $tmp2493 = *(&local9);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Closure.frost:345:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp2494 = &$tmp2492->contents;
frost$collections$Array* $tmp2495 = *$tmp2494;
frost$collections$Array$add$frost$collections$Array$T($tmp2495, ((frost$core$Object*) $tmp2493));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:346
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp2496 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp2497 = (frost$core$Int) {16u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp2496, $tmp2497);
*(&local10) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
org$frostlang$frostc$Annotations* $tmp2498 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
*(&local10) = $tmp2496;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:347
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp2499 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$collections$Stack** $tmp2500 = &param0->currentClass;
frost$collections$Stack* $tmp2501 = *$tmp2500;
frost$core$Int $tmp2502 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Closure.frost:347:59
frost$core$Int $tmp2503 = (frost$core$Int) {0u};
int64_t $tmp2504 = $tmp2502.value;
int64_t $tmp2505 = $tmp2503.value;
bool $tmp2506 = $tmp2504 >= $tmp2505;
frost$core$Bit $tmp2507 = (frost$core$Bit) {$tmp2506};
bool $tmp2508 = $tmp2507.value;
if ($tmp2508) goto block36; else goto block35;
block36:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp2509 = &$tmp2501->contents;
frost$collections$Array* $tmp2510 = *$tmp2509;
ITable* $tmp2511 = ((frost$collections$CollectionView*) $tmp2510)->$class->itable;
while ($tmp2511->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2511 = $tmp2511->next;
}
$fn2513 $tmp2512 = $tmp2511->methods[0];
frost$core$Int $tmp2514 = $tmp2512(((frost$collections$CollectionView*) $tmp2510));
int64_t $tmp2515 = $tmp2502.value;
int64_t $tmp2516 = $tmp2514.value;
bool $tmp2517 = $tmp2515 < $tmp2516;
frost$core$Bit $tmp2518 = (frost$core$Bit) {$tmp2517};
bool $tmp2519 = $tmp2518.value;
if ($tmp2519) goto block34; else goto block35;
block35:;
frost$core$Int $tmp2520 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2521, $tmp2520, &$s2522);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp2523 = &$tmp2501->contents;
frost$collections$Array* $tmp2524 = *$tmp2523;
ITable* $tmp2525 = ((frost$collections$CollectionView*) $tmp2524)->$class->itable;
while ($tmp2525->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2525 = $tmp2525->next;
}
$fn2527 $tmp2526 = $tmp2525->methods[0];
frost$core$Int $tmp2528 = $tmp2526(((frost$collections$CollectionView*) $tmp2524));
int64_t $tmp2529 = $tmp2528.value;
int64_t $tmp2530 = $tmp2502.value;
bool $tmp2531 = $tmp2529 > $tmp2530;
frost$core$Bit $tmp2532 = (frost$core$Bit) {$tmp2531};
bool $tmp2533 = $tmp2532.value;
if ($tmp2533) goto block38; else goto block39;
block39:;
frost$core$Int $tmp2534 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2535, $tmp2534);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp2536 = &$tmp2501->contents;
frost$collections$Array* $tmp2537 = *$tmp2536;
frost$collections$Array** $tmp2538 = &$tmp2501->contents;
frost$collections$Array* $tmp2539 = *$tmp2538;
ITable* $tmp2540 = ((frost$collections$CollectionView*) $tmp2539)->$class->itable;
while ($tmp2540->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2540 = $tmp2540->next;
}
$fn2542 $tmp2541 = $tmp2540->methods[0];
frost$core$Int $tmp2543 = $tmp2541(((frost$collections$CollectionView*) $tmp2539));
frost$core$Int $tmp2544 = (frost$core$Int) {1u};
int64_t $tmp2545 = $tmp2543.value;
int64_t $tmp2546 = $tmp2544.value;
int64_t $tmp2547 = $tmp2545 - $tmp2546;
frost$core$Int $tmp2548 = (frost$core$Int) {$tmp2547};
int64_t $tmp2549 = $tmp2548.value;
int64_t $tmp2550 = $tmp2502.value;
int64_t $tmp2551 = $tmp2549 - $tmp2550;
frost$core$Int $tmp2552 = (frost$core$Int) {$tmp2551};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp2553 = (frost$core$Int) {0u};
int64_t $tmp2554 = $tmp2552.value;
int64_t $tmp2555 = $tmp2553.value;
bool $tmp2556 = $tmp2554 >= $tmp2555;
frost$core$Bit $tmp2557 = (frost$core$Bit) {$tmp2556};
bool $tmp2558 = $tmp2557.value;
if ($tmp2558) goto block43; else goto block42;
block43:;
ITable* $tmp2559 = ((frost$collections$CollectionView*) $tmp2537)->$class->itable;
while ($tmp2559->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2559 = $tmp2559->next;
}
$fn2561 $tmp2560 = $tmp2559->methods[0];
frost$core$Int $tmp2562 = $tmp2560(((frost$collections$CollectionView*) $tmp2537));
int64_t $tmp2563 = $tmp2552.value;
int64_t $tmp2564 = $tmp2562.value;
bool $tmp2565 = $tmp2563 < $tmp2564;
frost$core$Bit $tmp2566 = (frost$core$Bit) {$tmp2565};
bool $tmp2567 = $tmp2566.value;
if ($tmp2567) goto block41; else goto block42;
block42:;
frost$core$Int $tmp2568 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2569, $tmp2568, &$s2570);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2571 = &$tmp2537->data;
frost$core$Object** $tmp2572 = *$tmp2571;
frost$core$Int64 $tmp2573 = frost$core$Int64$init$frost$core$Int($tmp2552);
int64_t $tmp2574 = $tmp2573.value;
frost$core$Object* $tmp2575 = $tmp2572[$tmp2574];
frost$core$Frost$ref$frost$core$Object$Q($tmp2575);
frost$core$Frost$ref$frost$core$Object$Q($tmp2575);
frost$core$Frost$unref$frost$core$Object$Q($tmp2575);
org$frostlang$frostc$Annotations* $tmp2576 = *(&local10);
frost$core$String* $tmp2577 = *(&local0);
frost$collections$Array* $tmp2578 = *(&local1);
org$frostlang$frostc$Type* $tmp2579 = *(&local6);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2499, ((org$frostlang$frostc$ClassDecl*) $tmp2575), param1, ((frost$core$String*) NULL), $tmp2576, param2, $tmp2577, ((frost$collections$Array*) NULL), $tmp2578, $tmp2579, param5);
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
org$frostlang$frostc$MethodDecl* $tmp2580 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
*(&local11) = $tmp2499;
frost$core$Frost$unref$frost$core$Object$Q($tmp2575);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:351
frost$core$Bit* $tmp2581 = &param0->writeCode;
frost$core$Bit $tmp2582 = *$tmp2581;
*(&local12) = $tmp2582;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:352
frost$core$Bit* $tmp2583 = &param0->reportErrors;
frost$core$Bit $tmp2584 = *$tmp2583;
*(&local13) = $tmp2584;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:353
frost$core$Bit $tmp2585 = (frost$core$Bit) {false};
frost$core$Bit* $tmp2586 = &param0->writeCode;
*$tmp2586 = $tmp2585;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:354
frost$core$Bit $tmp2587 = (frost$core$Bit) {false};
frost$core$Bit* $tmp2588 = &param0->reportErrors;
*$tmp2588 = $tmp2587;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:355
frost$collections$Stack** $tmp2589 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2590 = *$tmp2589;
*(&local14) = ((frost$collections$Stack*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
frost$collections$Stack* $tmp2591 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2591));
*(&local14) = $tmp2590;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:356
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp2592 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp2592);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
frost$collections$Stack** $tmp2593 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2594 = *$tmp2593;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
frost$collections$Stack** $tmp2595 = &param0->enclosingContexts;
*$tmp2595 = $tmp2592;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:357
org$frostlang$frostc$MethodDecl* $tmp2596 = *(&local11);
org$frostlang$frostc$SymbolTable** $tmp2597 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2598 = *$tmp2597;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp2596, $tmp2598);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:358
frost$collections$Stack* $tmp2599 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2599));
frost$collections$Stack** $tmp2600 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2601 = *$tmp2600;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2601));
frost$collections$Stack** $tmp2602 = &param0->enclosingContexts;
*$tmp2602 = $tmp2599;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:359
frost$core$Bit $tmp2603 = *(&local12);
frost$core$Bit* $tmp2604 = &param0->writeCode;
*$tmp2604 = $tmp2603;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:360
frost$core$Bit $tmp2605 = *(&local13);
frost$core$Bit* $tmp2606 = &param0->reportErrors;
*$tmp2606 = $tmp2605;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:362
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:363
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:364
org$frostlang$frostc$Pair* $tmp2607 = *(&local9);
frost$core$Object** $tmp2608 = &$tmp2607->second;
frost$core$Object* $tmp2609 = *$tmp2608;
ITable* $tmp2610 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp2609))->$class->itable;
while ($tmp2610->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2610 = $tmp2610->next;
}
$fn2612 $tmp2611 = $tmp2610->methods[0];
frost$core$Int $tmp2613 = $tmp2611(((frost$collections$MapView*) ((frost$collections$Map*) $tmp2609)));
frost$core$Int $tmp2614 = (frost$core$Int) {0u};
int64_t $tmp2615 = $tmp2613.value;
int64_t $tmp2616 = $tmp2614.value;
bool $tmp2617 = $tmp2615 != $tmp2616;
frost$core$Bit $tmp2618 = (frost$core$Bit) {$tmp2617};
bool $tmp2619 = $tmp2618.value;
if ($tmp2619) goto block44; else goto block46;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:366
org$frostlang$frostc$MethodDecl* $tmp2620 = *(&local11);
org$frostlang$frostc$Pair* $tmp2621 = *(&local9);
frost$core$Object** $tmp2622 = &$tmp2621->second;
frost$core$Object* $tmp2623 = *$tmp2622;
ITable* $tmp2624 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp2623))->$class->itable;
while ($tmp2624->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2624 = $tmp2624->next;
}
$fn2626 $tmp2625 = $tmp2624->methods[5];
frost$collections$Iterator* $tmp2627 = $tmp2625(((frost$collections$MapView*) ((frost$collections$Map*) $tmp2623)));
ITable* $tmp2628 = $tmp2627->$class->itable;
while ($tmp2628->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2628 = $tmp2628->next;
}
$fn2630 $tmp2629 = $tmp2628->methods[7];
frost$collections$Array* $tmp2631 = $tmp2629($tmp2627);
org$frostlang$frostc$ClassDecl* $tmp2632 = org$frostlang$frostc$expression$Closure$createClosureClass$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlang$frostc$Compiler$Capture$GT$R$org$frostlang$frostc$ClassDecl(param0, $tmp2620, ((frost$collections$CollectionView*) $tmp2631));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
org$frostlang$frostc$ClassDecl* $tmp2633 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2633));
*(&local17) = $tmp2632;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:367
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2634 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2634);
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2634));
frost$collections$Array* $tmp2635 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2635));
*(&local18) = $tmp2634;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2634));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:368
org$frostlang$frostc$Pair* $tmp2636 = *(&local9);
frost$core$Object** $tmp2637 = &$tmp2636->second;
frost$core$Object* $tmp2638 = *$tmp2637;
ITable* $tmp2639 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp2638))->$class->itable;
while ($tmp2639->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2639 = $tmp2639->next;
}
$fn2641 $tmp2640 = $tmp2639->methods[5];
frost$collections$Iterator* $tmp2642 = $tmp2640(((frost$collections$MapView*) ((frost$collections$Map*) $tmp2638)));
goto block47;
block47:;
ITable* $tmp2643 = $tmp2642->$class->itable;
while ($tmp2643->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2643 = $tmp2643->next;
}
$fn2645 $tmp2644 = $tmp2643->methods[0];
frost$core$Bit $tmp2646 = $tmp2644($tmp2642);
bool $tmp2647 = $tmp2646.value;
if ($tmp2647) goto block49; else goto block48;
block48:;
*(&local19) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp2648 = $tmp2642->$class->itable;
while ($tmp2648->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2648 = $tmp2648->next;
}
$fn2650 $tmp2649 = $tmp2648->methods[1];
frost$core$Object* $tmp2651 = $tmp2649($tmp2642);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp2651)));
org$frostlang$frostc$Compiler$Capture* $tmp2652 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2652));
*(&local19) = ((org$frostlang$frostc$Compiler$Capture*) $tmp2651);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:369
org$frostlang$frostc$Compiler$Capture* $tmp2653 = *(&local19);
frost$core$Int* $tmp2654 = &$tmp2653->$rawValue;
frost$core$Int $tmp2655 = *$tmp2654;
frost$core$Int $tmp2656 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:370:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2657 = $tmp2655.value;
int64_t $tmp2658 = $tmp2656.value;
bool $tmp2659 = $tmp2657 == $tmp2658;
frost$core$Bit $tmp2660 = (frost$core$Bit) {$tmp2659};
bool $tmp2661 = $tmp2660.value;
if ($tmp2661) goto block51; else goto block52;
block51:;
org$frostlang$frostc$Variable** $tmp2662 = (org$frostlang$frostc$Variable**) ($tmp2653->$data + 0);
org$frostlang$frostc$Variable* $tmp2663 = *$tmp2662;
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2663));
org$frostlang$frostc$Variable* $tmp2664 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
*(&local20) = $tmp2663;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:371
frost$collections$Array* $tmp2665 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2666 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2667 = (frost$core$Int) {22u};
org$frostlang$frostc$Variable* $tmp2668 = *(&local20);
frost$core$String** $tmp2669 = &((org$frostlang$frostc$Symbol*) $tmp2668)->name;
frost$core$String* $tmp2670 = *$tmp2669;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp2666, $tmp2667, param1, $tmp2670);
frost$collections$Array$add$frost$collections$Array$T($tmp2665, ((frost$core$Object*) $tmp2666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2666));
org$frostlang$frostc$Variable* $tmp2671 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
goto block50;
block52:;
frost$core$Int $tmp2672 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:373:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2673 = $tmp2655.value;
int64_t $tmp2674 = $tmp2672.value;
bool $tmp2675 = $tmp2673 == $tmp2674;
frost$core$Bit $tmp2676 = (frost$core$Bit) {$tmp2675};
bool $tmp2677 = $tmp2676.value;
if ($tmp2677) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:374
frost$collections$Array* $tmp2678 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2679 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2680 = (frost$core$Int) {39u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position($tmp2679, $tmp2680, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp2678, ((frost$core$Object*) $tmp2679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
goto block50;
block55:;
frost$core$Int $tmp2681 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:376:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2682 = $tmp2655.value;
int64_t $tmp2683 = $tmp2681.value;
bool $tmp2684 = $tmp2682 == $tmp2683;
frost$core$Bit $tmp2685 = (frost$core$Bit) {$tmp2684};
bool $tmp2686 = $tmp2685.value;
if ($tmp2686) goto block57; else goto block50;
block57:;
org$frostlang$frostc$FieldDecl** $tmp2687 = (org$frostlang$frostc$FieldDecl**) ($tmp2653->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp2688 = *$tmp2687;
*(&local21) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
org$frostlang$frostc$FieldDecl* $tmp2689 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2689));
*(&local21) = $tmp2688;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:377
frost$collections$Array* $tmp2690 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2691 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2692 = (frost$core$Int) {16u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2693 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2694 = (frost$core$Int) {22u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp2693, $tmp2694, param1, &$s2695);
org$frostlang$frostc$FieldDecl* $tmp2696 = *(&local21);
frost$core$String** $tmp2697 = &((org$frostlang$frostc$Symbol*) $tmp2696)->name;
frost$core$String* $tmp2698 = *$tmp2697;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp2691, $tmp2692, param1, $tmp2693, $tmp2698);
frost$collections$Array$add$frost$collections$Array$T($tmp2690, ((frost$core$Object*) $tmp2691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
org$frostlang$frostc$FieldDecl* $tmp2699 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
*(&local21) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block50;
block50:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2651);
org$frostlang$frostc$Compiler$Capture* $tmp2700 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
*(&local19) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block47;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:383
frost$collections$Stack** $tmp2701 = &param0->captures;
frost$collections$Stack* $tmp2702 = *$tmp2701;
frost$core$Object* $tmp2703 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2702);
frost$core$Frost$unref$frost$core$Object$Q($tmp2703);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:384
frost$collections$Array** $tmp2704 = &param0->pendingClasses;
frost$collections$Array* $tmp2705 = *$tmp2704;
org$frostlang$frostc$ClassDecl* $tmp2706 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp2705, ((frost$core$Object*) $tmp2706));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:385
org$frostlang$frostc$ClassDecl* $tmp2707 = *(&local17);
org$frostlang$frostc$Type** $tmp2708 = &$tmp2707->type;
org$frostlang$frostc$Type* $tmp2709 = *$tmp2708;
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:385:83
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3710
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2710 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2711 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3710:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp2712 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp2713 = *$tmp2712;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2714 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2715 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2714, $tmp2715);
frost$collections$Array$add$frost$collections$Array$T($tmp2714, ((frost$core$Object*) $tmp2709));
org$frostlang$frostc$Type* $tmp2716 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2713, ((frost$collections$ListView*) $tmp2714));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2714));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp2710, $tmp2711, $tmp2709, $tmp2716);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
frost$collections$Array* $tmp2717 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp2718 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2717);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2719 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2720 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp2719, $tmp2720);
org$frostlang$frostc$IR$Value* $tmp2721 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2710, ((frost$collections$ListView*) $tmp2718), $tmp2719);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
org$frostlang$frostc$IR$Value* $tmp2722 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2722));
*(&local22) = $tmp2721;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:387
org$frostlang$frostc$IR$Value* $tmp2723 = *(&local22);
frost$core$Bit $tmp2724 = (frost$core$Bit) {$tmp2723 == NULL};
bool $tmp2725 = $tmp2724.value;
if ($tmp2725) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:388
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp2726 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2727 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2728 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp2729 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp2730 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
*(&local14) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2731 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp2732 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
*(&local10) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp2733 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2733));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp2734 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2734));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2735 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2735));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2736 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2736));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:390
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2737 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2738 = (frost$core$Int) {26u};
org$frostlang$frostc$IR$Value* $tmp2739 = *(&local22);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2737, $tmp2738, param1, $tmp2739);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
org$frostlang$frostc$ASTNode* $tmp2740 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2740));
*(&local16) = $tmp2737;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:391
org$frostlang$frostc$ClassDecl* $tmp2741 = *(&local17);
org$frostlang$frostc$Type** $tmp2742 = &$tmp2741->type;
org$frostlang$frostc$Type* $tmp2743 = *$tmp2742;
frost$core$Bit $tmp2744 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp2743);
*(&local15) = $tmp2744;
org$frostlang$frostc$IR$Value* $tmp2745 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2746 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2746));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2747 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2747));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block45;
block46:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:395
frost$collections$Stack** $tmp2748 = &param0->captures;
frost$collections$Stack* $tmp2749 = *$tmp2748;
frost$core$Object* $tmp2750 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2749);
frost$core$Frost$unref$frost$core$Object$Q($tmp2750);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:396
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp2751 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp2751);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2751));
frost$collections$Stack** $tmp2752 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2753 = *$tmp2752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2753));
frost$collections$Stack** $tmp2754 = &param0->enclosingContexts;
*$tmp2754 = $tmp2751;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2751));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:397
org$frostlang$frostc$MethodDecl* $tmp2755 = *(&local11);
org$frostlang$frostc$SymbolTable** $tmp2756 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2757 = *$tmp2756;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp2755, $tmp2757);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:398
frost$collections$Stack* $tmp2758 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
frost$collections$Stack** $tmp2759 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2760 = *$tmp2759;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
frost$collections$Stack** $tmp2761 = &param0->enclosingContexts;
*$tmp2761 = $tmp2758;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:399
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2762 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2763 = (frost$core$Int) {31u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position($tmp2762, $tmp2763, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2762));
org$frostlang$frostc$ASTNode* $tmp2764 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2764));
*(&local16) = $tmp2762;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2762));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:400
frost$core$Bit $tmp2765 = (frost$core$Bit) {true};
*(&local15) = $tmp2765;
goto block45;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:402
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2766 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2766);
*(&local23) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2766));
frost$collections$Array* $tmp2767 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2767));
*(&local23) = $tmp2766;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2766));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:403
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:404
org$frostlang$frostc$MethodDecl* $tmp2768 = *(&local11);
org$frostlang$frostc$Annotations** $tmp2769 = &$tmp2768->annotations;
org$frostlang$frostc$Annotations* $tmp2770 = *$tmp2769;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Closure.frost:404:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp2771 = &$tmp2770->flags;
frost$core$Int $tmp2772 = *$tmp2771;
frost$core$Int $tmp2773 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2774 = $tmp2772.value;
int64_t $tmp2775 = $tmp2773.value;
int64_t $tmp2776 = $tmp2774 & $tmp2775;
frost$core$Int $tmp2777 = (frost$core$Int) {$tmp2776};
frost$core$Int $tmp2778 = (frost$core$Int) {0u};
int64_t $tmp2779 = $tmp2777.value;
int64_t $tmp2780 = $tmp2778.value;
bool $tmp2781 = $tmp2779 != $tmp2780;
frost$core$Bit $tmp2782 = (frost$core$Bit) {$tmp2781};
bool $tmp2783 = $tmp2782.value;
if ($tmp2783) goto block63; else goto block65;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:405
org$frostlang$frostc$MethodDecl* $tmp2784 = *(&local11);
org$frostlang$frostc$Type* $tmp2785 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp2784, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2785));
org$frostlang$frostc$Type* $tmp2786 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
*(&local24) = $tmp2785;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2785));
goto block64;
block65:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:408
org$frostlang$frostc$MethodDecl* $tmp2787 = *(&local11);
org$frostlang$frostc$MethodDecl* $tmp2788 = *(&local11);
frost$core$Weak** $tmp2789 = &$tmp2788->owner;
frost$core$Weak* $tmp2790 = *$tmp2789;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Closure.frost:408:78
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2791 = &$tmp2790->_valid;
frost$core$Bit $tmp2792 = *$tmp2791;
bool $tmp2793 = $tmp2792.value;
if ($tmp2793) goto block70; else goto block71;
block71:;
frost$core$Int $tmp2794 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2795, $tmp2794);
abort(); // unreachable
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2796 = &$tmp2790->value;
frost$core$Object* $tmp2797 = *$tmp2796;
frost$core$Frost$ref$frost$core$Object$Q($tmp2797);
org$frostlang$frostc$Type** $tmp2798 = &((org$frostlang$frostc$ClassDecl*) $tmp2797)->type;
org$frostlang$frostc$Type* $tmp2799 = *$tmp2798;
frost$core$Bit $tmp2800 = (frost$core$Bit) {false};
org$frostlang$frostc$Type* $tmp2801 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp2787, $tmp2799, $tmp2800);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2801));
org$frostlang$frostc$Type* $tmp2802 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2802));
*(&local24) = $tmp2801;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2801));
frost$core$Frost$unref$frost$core$Object$Q($tmp2797);
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:410
org$frostlang$frostc$Type* $tmp2803 = *(&local24);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Closure.frost:410:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:283
org$frostlang$frostc$Type** $tmp2804 = &param0->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp2805 = *$tmp2804;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2806 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2807 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2806, $tmp2807);
frost$collections$Array$add$frost$collections$Array$T($tmp2806, ((frost$core$Object*) $tmp2803));
org$frostlang$frostc$Type* $tmp2808 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2805, ((frost$collections$ListView*) $tmp2806));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
org$frostlang$frostc$Type* $tmp2809 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
*(&local25) = $tmp2808;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:411
frost$collections$Array* $tmp2810 = *(&local23);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2811 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2812 = (frost$core$Int) {26u};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2813 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2814 = (frost$core$Int) {3u};
org$frostlang$frostc$MethodDecl* $tmp2815 = *(&local11);
org$frostlang$frostc$Type* $tmp2816 = *(&local25);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp2813, $tmp2814, $tmp2815, $tmp2816);
org$frostlang$frostc$Type** $tmp2817 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp2818 = *$tmp2817;
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Closure.frost:412:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:283
org$frostlang$frostc$Type** $tmp2819 = &param0->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp2820 = *$tmp2819;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2821 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2822 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2821, $tmp2822);
frost$collections$Array$add$frost$collections$Array$T($tmp2821, ((frost$core$Object*) $tmp2818));
org$frostlang$frostc$Type* $tmp2823 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2820, ((frost$collections$ListView*) $tmp2821));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
org$frostlang$frostc$IR$Value* $tmp2824 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2813, $tmp2823);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2811, $tmp2812, param1, $tmp2824);
frost$collections$Array$add$frost$collections$Array$T($tmp2810, ((frost$core$Object*) $tmp2811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:414
frost$collections$Array* $tmp2825 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp2826 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp2825, ((frost$core$Object*) $tmp2826));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:415
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:416
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:417
frost$core$Bit $tmp2827 = *(&local15);
bool $tmp2828 = $tmp2827.value;
if ($tmp2828) goto block74; else goto block76;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:418
org$frostlang$frostc$Type** $tmp2829 = &param0->METHOD_TYPE;
org$frostlang$frostc$Type* $tmp2830 = *$tmp2829;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
org$frostlang$frostc$Type* $tmp2831 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
*(&local26) = $tmp2830;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:419
org$frostlang$frostc$MethodDecl* $tmp2832 = *(&local11);
org$frostlang$frostc$Type* $tmp2833 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp2832, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
org$frostlang$frostc$Type* $tmp2834 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
*(&local27) = $tmp2833;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
goto block75;
block76:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:422
org$frostlang$frostc$Type** $tmp2835 = &param0->MUTABLE_METHOD_TYPE;
org$frostlang$frostc$Type* $tmp2836 = *$tmp2835;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
org$frostlang$frostc$Type* $tmp2837 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2837));
*(&local26) = $tmp2836;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:423
org$frostlang$frostc$MethodDecl* $tmp2838 = *(&local11);
org$frostlang$frostc$Type* $tmp2839 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp2838, param0);
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
org$frostlang$frostc$Type* $tmp2840 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
*(&local28) = $tmp2839;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:424
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2841 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2841);
*(&local29) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
frost$collections$Array* $tmp2842 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
*(&local29) = $tmp2841;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:425
frost$core$Int $tmp2843 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp2844 = *(&local28);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Closure.frost:425:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2845 = &$tmp2844->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2846 = *$tmp2845;
frost$core$Bit $tmp2847 = (frost$core$Bit) {$tmp2846 != NULL};
bool $tmp2848 = $tmp2847.value;
if ($tmp2848) goto block78; else goto block79;
block79:;
frost$core$Int $tmp2849 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2850, $tmp2849, &$s2851);
abort(); // unreachable
block78:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
ITable* $tmp2852 = ((frost$collections$CollectionView*) $tmp2846)->$class->itable;
while ($tmp2852->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2852 = $tmp2852->next;
}
$fn2854 $tmp2853 = $tmp2852->methods[0];
frost$core$Int $tmp2855 = $tmp2853(((frost$collections$CollectionView*) $tmp2846));
frost$core$Int $tmp2856 = (frost$core$Int) {1u};
int64_t $tmp2857 = $tmp2855.value;
int64_t $tmp2858 = $tmp2856.value;
int64_t $tmp2859 = $tmp2857 - $tmp2858;
frost$core$Int $tmp2860 = (frost$core$Int) {$tmp2859};
frost$core$Bit $tmp2861 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2862 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2843, $tmp2860, $tmp2861);
frost$core$Int $tmp2863 = $tmp2862.min;
*(&local30) = $tmp2863;
frost$core$Int $tmp2864 = $tmp2862.max;
frost$core$Bit $tmp2865 = $tmp2862.inclusive;
bool $tmp2866 = $tmp2865.value;
frost$core$Int $tmp2867 = (frost$core$Int) {1u};
if ($tmp2866) goto block83; else goto block84;
block83:;
int64_t $tmp2868 = $tmp2863.value;
int64_t $tmp2869 = $tmp2864.value;
bool $tmp2870 = $tmp2868 <= $tmp2869;
frost$core$Bit $tmp2871 = (frost$core$Bit) {$tmp2870};
bool $tmp2872 = $tmp2871.value;
if ($tmp2872) goto block80; else goto block81;
block84:;
int64_t $tmp2873 = $tmp2863.value;
int64_t $tmp2874 = $tmp2864.value;
bool $tmp2875 = $tmp2873 < $tmp2874;
frost$core$Bit $tmp2876 = (frost$core$Bit) {$tmp2875};
bool $tmp2877 = $tmp2876.value;
if ($tmp2877) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:426
frost$collections$Array* $tmp2878 = *(&local29);
org$frostlang$frostc$Type* $tmp2879 = *(&local28);
frost$core$Int $tmp2880 = *(&local30);
// begin inline call to function org.frostlang.frostc.Type.parameterType(i:frost.core.Int):org.frostlang.frostc.Type from Closure.frost:426:57
org$frostlang$frostc$Type$Kind* $tmp2881 = &$tmp2879->typeKind;
org$frostlang$frostc$Type$Kind $tmp2882 = *$tmp2881;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2883;
$tmp2883 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2883->value = $tmp2882;
frost$core$Int $tmp2884 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2885 = &(&local32)->$rawValue;
*$tmp2885 = $tmp2884;
org$frostlang$frostc$Type$Kind $tmp2886 = *(&local32);
*(&local31) = $tmp2886;
org$frostlang$frostc$Type$Kind $tmp2887 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2888;
$tmp2888 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2888->value = $tmp2887;
ITable* $tmp2889 = ((frost$core$Equatable*) $tmp2883)->$class->itable;
while ($tmp2889->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2889 = $tmp2889->next;
}
$fn2891 $tmp2890 = $tmp2889->methods[0];
frost$core$Bit $tmp2892 = $tmp2890(((frost$core$Equatable*) $tmp2883), ((frost$core$Equatable*) $tmp2888));
bool $tmp2893 = $tmp2892.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2888)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2883)));
if ($tmp2893) goto block89; else goto block92;
block92:;
org$frostlang$frostc$Type$Kind* $tmp2894 = &$tmp2879->typeKind;
org$frostlang$frostc$Type$Kind $tmp2895 = *$tmp2894;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2896;
$tmp2896 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2896->value = $tmp2895;
frost$core$Int $tmp2897 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2898 = &(&local34)->$rawValue;
*$tmp2898 = $tmp2897;
org$frostlang$frostc$Type$Kind $tmp2899 = *(&local34);
*(&local33) = $tmp2899;
org$frostlang$frostc$Type$Kind $tmp2900 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2901;
$tmp2901 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2901->value = $tmp2900;
ITable* $tmp2902 = ((frost$core$Equatable*) $tmp2896)->$class->itable;
while ($tmp2902->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2902 = $tmp2902->next;
}
$fn2904 $tmp2903 = $tmp2902->methods[0];
frost$core$Bit $tmp2905 = $tmp2903(((frost$core$Equatable*) $tmp2896), ((frost$core$Equatable*) $tmp2901));
bool $tmp2906 = $tmp2905.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2901)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2896)));
if ($tmp2906) goto block89; else goto block91;
block91:;
org$frostlang$frostc$Type$Kind* $tmp2907 = &$tmp2879->typeKind;
org$frostlang$frostc$Type$Kind $tmp2908 = *$tmp2907;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2909;
$tmp2909 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2909->value = $tmp2908;
frost$core$Int $tmp2910 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2911 = &(&local36)->$rawValue;
*$tmp2911 = $tmp2910;
org$frostlang$frostc$Type$Kind $tmp2912 = *(&local36);
*(&local35) = $tmp2912;
org$frostlang$frostc$Type$Kind $tmp2913 = *(&local35);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2914;
$tmp2914 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2914->value = $tmp2913;
ITable* $tmp2915 = ((frost$core$Equatable*) $tmp2909)->$class->itable;
while ($tmp2915->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2915 = $tmp2915->next;
}
$fn2917 $tmp2916 = $tmp2915->methods[0];
frost$core$Bit $tmp2918 = $tmp2916(((frost$core$Equatable*) $tmp2909), ((frost$core$Equatable*) $tmp2914));
bool $tmp2919 = $tmp2918.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2914)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2909)));
if ($tmp2919) goto block89; else goto block90;
block90:;
org$frostlang$frostc$Type$Kind* $tmp2920 = &$tmp2879->typeKind;
org$frostlang$frostc$Type$Kind $tmp2921 = *$tmp2920;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2922;
$tmp2922 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2922->value = $tmp2921;
frost$core$Int $tmp2923 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:426:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2924 = &(&local38)->$rawValue;
*$tmp2924 = $tmp2923;
org$frostlang$frostc$Type$Kind $tmp2925 = *(&local38);
*(&local37) = $tmp2925;
org$frostlang$frostc$Type$Kind $tmp2926 = *(&local37);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2927;
$tmp2927 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2927->value = $tmp2926;
ITable* $tmp2928 = ((frost$core$Equatable*) $tmp2922)->$class->itable;
while ($tmp2928->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2928 = $tmp2928->next;
}
$fn2930 $tmp2929 = $tmp2928->methods[0];
frost$core$Bit $tmp2931 = $tmp2929(((frost$core$Equatable*) $tmp2922), ((frost$core$Equatable*) $tmp2927));
bool $tmp2932 = $tmp2931.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2927)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2922)));
if ($tmp2932) goto block89; else goto block87;
block89:;
frost$core$Int $tmp2933 = (frost$core$Int) {0u};
int64_t $tmp2934 = $tmp2880.value;
int64_t $tmp2935 = $tmp2933.value;
bool $tmp2936 = $tmp2934 >= $tmp2935;
frost$core$Bit $tmp2937 = (frost$core$Bit) {$tmp2936};
bool $tmp2938 = $tmp2937.value;
if ($tmp2938) goto block88; else goto block87;
block88:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:426:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2939 = &$tmp2879->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2940 = *$tmp2939;
frost$core$Bit $tmp2941 = (frost$core$Bit) {$tmp2940 != NULL};
bool $tmp2942 = $tmp2941.value;
if ($tmp2942) goto block98; else goto block99;
block99:;
frost$core$Int $tmp2943 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2944, $tmp2943, &$s2945);
abort(); // unreachable
block98:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2940));
ITable* $tmp2946 = ((frost$collections$CollectionView*) $tmp2940)->$class->itable;
while ($tmp2946->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2946 = $tmp2946->next;
}
$fn2948 $tmp2947 = $tmp2946->methods[0];
frost$core$Int $tmp2949 = $tmp2947(((frost$collections$CollectionView*) $tmp2940));
frost$core$Int $tmp2950 = (frost$core$Int) {1u};
int64_t $tmp2951 = $tmp2949.value;
int64_t $tmp2952 = $tmp2950.value;
int64_t $tmp2953 = $tmp2951 - $tmp2952;
frost$core$Int $tmp2954 = (frost$core$Int) {$tmp2953};
int64_t $tmp2955 = $tmp2880.value;
int64_t $tmp2956 = $tmp2954.value;
bool $tmp2957 = $tmp2955 < $tmp2956;
frost$core$Bit $tmp2958 = (frost$core$Bit) {$tmp2957};
bool $tmp2959 = $tmp2958.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2940));
if ($tmp2959) goto block86; else goto block87;
block87:;
frost$core$Int $tmp2960 = (frost$core$Int) {427u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2961, $tmp2960, &$s2962);
abort(); // unreachable
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:428
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:428:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2963 = &$tmp2879->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2964 = *$tmp2963;
frost$core$Bit $tmp2965 = (frost$core$Bit) {$tmp2964 != NULL};
bool $tmp2966 = $tmp2965.value;
if ($tmp2966) goto block101; else goto block102;
block102:;
frost$core$Int $tmp2967 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2968, $tmp2967, &$s2969);
abort(); // unreachable
block101:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
frost$core$Object* $tmp2970 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2964, $tmp2880);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2970)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2970);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
frost$collections$Array$add$frost$collections$Array$T($tmp2878, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2970)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2970)));
frost$core$Int $tmp2971 = *(&local30);
int64_t $tmp2972 = $tmp2864.value;
int64_t $tmp2973 = $tmp2971.value;
int64_t $tmp2974 = $tmp2972 - $tmp2973;
frost$core$Int $tmp2975 = (frost$core$Int) {$tmp2974};
if ($tmp2866) goto block104; else goto block105;
block104:;
int64_t $tmp2976 = $tmp2975.value;
int64_t $tmp2977 = $tmp2867.value;
bool $tmp2978 = $tmp2976 >= $tmp2977;
frost$core$Bit $tmp2979 = (frost$core$Bit) {$tmp2978};
bool $tmp2980 = $tmp2979.value;
if ($tmp2980) goto block103; else goto block81;
block105:;
int64_t $tmp2981 = $tmp2975.value;
int64_t $tmp2982 = $tmp2867.value;
bool $tmp2983 = $tmp2981 > $tmp2982;
frost$core$Bit $tmp2984 = (frost$core$Bit) {$tmp2983};
bool $tmp2985 = $tmp2984.value;
if ($tmp2985) goto block103; else goto block81;
block103:;
int64_t $tmp2986 = $tmp2971.value;
int64_t $tmp2987 = $tmp2867.value;
int64_t $tmp2988 = $tmp2986 + $tmp2987;
frost$core$Int $tmp2989 = (frost$core$Int) {$tmp2988};
*(&local30) = $tmp2989;
goto block80;
block81:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:428
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:429
org$frostlang$frostc$MethodDecl* $tmp2990 = *(&local11);
org$frostlang$frostc$MethodDecl$Kind* $tmp2991 = &$tmp2990->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2992 = *$tmp2991;
frost$core$Int $tmp2993 = $tmp2992.$rawValue;
frost$core$Int $tmp2994 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:430:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2995 = $tmp2993.value;
int64_t $tmp2996 = $tmp2994.value;
bool $tmp2997 = $tmp2995 == $tmp2996;
frost$core$Bit $tmp2998 = (frost$core$Bit) {$tmp2997};
bool $tmp2999 = $tmp2998.value;
if ($tmp2999) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:430
frost$core$Int $tmp3000 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Closure.frost:430:68
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3001 = &(&local41)->$rawValue;
*$tmp3001 = $tmp3000;
org$frostlang$frostc$Type$Kind $tmp3002 = *(&local41);
*(&local40) = $tmp3002;
org$frostlang$frostc$Type$Kind $tmp3003 = *(&local40);
*(&local39) = $tmp3003;
goto block106;
block108:;
frost$core$Int $tmp3004 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:431:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3005 = $tmp2993.value;
int64_t $tmp3006 = $tmp3004.value;
bool $tmp3007 = $tmp3005 == $tmp3006;
frost$core$Bit $tmp3008 = (frost$core$Bit) {$tmp3007};
bool $tmp3009 = $tmp3008.value;
if ($tmp3009) goto block111; else goto block112;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:431
frost$core$Int $tmp3010 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Closure.frost:431:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3011 = &(&local43)->$rawValue;
*$tmp3011 = $tmp3010;
org$frostlang$frostc$Type$Kind $tmp3012 = *(&local43);
*(&local42) = $tmp3012;
org$frostlang$frostc$Type$Kind $tmp3013 = *(&local42);
*(&local39) = $tmp3013;
goto block106;
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:432
frost$core$Int $tmp3014 = (frost$core$Int) {432u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3015, $tmp3014);
abort(); // unreachable
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:434
org$frostlang$frostc$Type$Kind $tmp3016 = *(&local39);
frost$collections$Array* $tmp3017 = *(&local29);
org$frostlang$frostc$Type* $tmp3018 = *(&local28);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:435:28
org$frostlang$frostc$Type$Kind* $tmp3019 = &$tmp3018->typeKind;
org$frostlang$frostc$Type$Kind $tmp3020 = *$tmp3019;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3021;
$tmp3021 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3021->value = $tmp3020;
frost$core$Int $tmp3022 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3023 = &(&local45)->$rawValue;
*$tmp3023 = $tmp3022;
org$frostlang$frostc$Type$Kind $tmp3024 = *(&local45);
*(&local44) = $tmp3024;
org$frostlang$frostc$Type$Kind $tmp3025 = *(&local44);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3026;
$tmp3026 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3026->value = $tmp3025;
ITable* $tmp3027 = ((frost$core$Equatable*) $tmp3021)->$class->itable;
while ($tmp3027->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3027 = $tmp3027->next;
}
$fn3029 $tmp3028 = $tmp3027->methods[0];
frost$core$Bit $tmp3030 = $tmp3028(((frost$core$Equatable*) $tmp3021), ((frost$core$Equatable*) $tmp3026));
bool $tmp3031 = $tmp3030.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3026)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3021)));
if ($tmp3031) goto block116; else goto block120;
block120:;
org$frostlang$frostc$Type$Kind* $tmp3032 = &$tmp3018->typeKind;
org$frostlang$frostc$Type$Kind $tmp3033 = *$tmp3032;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3034;
$tmp3034 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3034->value = $tmp3033;
frost$core$Int $tmp3035 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3036 = &(&local47)->$rawValue;
*$tmp3036 = $tmp3035;
org$frostlang$frostc$Type$Kind $tmp3037 = *(&local47);
*(&local46) = $tmp3037;
org$frostlang$frostc$Type$Kind $tmp3038 = *(&local46);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3039;
$tmp3039 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3039->value = $tmp3038;
ITable* $tmp3040 = ((frost$core$Equatable*) $tmp3034)->$class->itable;
while ($tmp3040->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3040 = $tmp3040->next;
}
$fn3042 $tmp3041 = $tmp3040->methods[0];
frost$core$Bit $tmp3043 = $tmp3041(((frost$core$Equatable*) $tmp3034), ((frost$core$Equatable*) $tmp3039));
bool $tmp3044 = $tmp3043.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3039)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3034)));
if ($tmp3044) goto block116; else goto block119;
block119:;
org$frostlang$frostc$Type$Kind* $tmp3045 = &$tmp3018->typeKind;
org$frostlang$frostc$Type$Kind $tmp3046 = *$tmp3045;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3047;
$tmp3047 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3047->value = $tmp3046;
frost$core$Int $tmp3048 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3049 = &(&local49)->$rawValue;
*$tmp3049 = $tmp3048;
org$frostlang$frostc$Type$Kind $tmp3050 = *(&local49);
*(&local48) = $tmp3050;
org$frostlang$frostc$Type$Kind $tmp3051 = *(&local48);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3052;
$tmp3052 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3052->value = $tmp3051;
ITable* $tmp3053 = ((frost$core$Equatable*) $tmp3047)->$class->itable;
while ($tmp3053->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3053 = $tmp3053->next;
}
$fn3055 $tmp3054 = $tmp3053->methods[0];
frost$core$Bit $tmp3056 = $tmp3054(((frost$core$Equatable*) $tmp3047), ((frost$core$Equatable*) $tmp3052));
bool $tmp3057 = $tmp3056.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3052)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3047)));
if ($tmp3057) goto block116; else goto block118;
block118:;
org$frostlang$frostc$Type$Kind* $tmp3058 = &$tmp3018->typeKind;
org$frostlang$frostc$Type$Kind $tmp3059 = *$tmp3058;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3060;
$tmp3060 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3060->value = $tmp3059;
frost$core$Int $tmp3061 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3062 = &(&local51)->$rawValue;
*$tmp3062 = $tmp3061;
org$frostlang$frostc$Type$Kind $tmp3063 = *(&local51);
*(&local50) = $tmp3063;
org$frostlang$frostc$Type$Kind $tmp3064 = *(&local50);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3065;
$tmp3065 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3065->value = $tmp3064;
ITable* $tmp3066 = ((frost$core$Equatable*) $tmp3060)->$class->itable;
while ($tmp3066->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3066 = $tmp3066->next;
}
$fn3068 $tmp3067 = $tmp3066->methods[0];
frost$core$Bit $tmp3069 = $tmp3067(((frost$core$Equatable*) $tmp3060), ((frost$core$Equatable*) $tmp3065));
bool $tmp3070 = $tmp3069.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3065)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3060)));
if ($tmp3070) goto block116; else goto block117;
block117:;
frost$core$Int $tmp3071 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3072, $tmp3071, &$s3073);
abort(); // unreachable
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3074 = &$tmp3018->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3075 = *$tmp3074;
frost$core$Bit $tmp3076 = (frost$core$Bit) {$tmp3075 != NULL};
bool $tmp3077 = $tmp3076.value;
if ($tmp3077) goto block126; else goto block127;
block127:;
frost$core$Int $tmp3078 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3079, $tmp3078, &$s3080);
abort(); // unreachable
block126:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3075));
ITable* $tmp3081 = ((frost$collections$ListView*) $tmp3075)->$class->itable;
while ($tmp3081->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp3081 = $tmp3081->next;
}
$fn3083 $tmp3082 = $tmp3081->methods[5];
frost$core$Object* $tmp3084 = $tmp3082(((frost$collections$ListView*) $tmp3075));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3084)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3084);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3075));
org$frostlang$frostc$Type* $tmp3085 = *(&local28);
frost$core$Int* $tmp3086 = &$tmp3085->priority;
frost$core$Int $tmp3087 = *$tmp3086;
org$frostlang$frostc$Type* $tmp3088 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param0, param1, $tmp3016, ((frost$collections$ListView*) $tmp3017), ((org$frostlang$frostc$Type*) $tmp3084), $tmp3087);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
org$frostlang$frostc$Type* $tmp3089 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3089));
*(&local27) = $tmp3088;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3084)));
frost$collections$Array* $tmp3090 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
*(&local29) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3091 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3091));
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
goto block75;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:437
org$frostlang$frostc$Type* $tmp3092 = *(&local26);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:438:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3710
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp3093 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp3094 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3710:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp3095 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp3096 = *$tmp3095;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3097 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3098 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp3097, $tmp3098);
frost$collections$Array$add$frost$collections$Array$T($tmp3097, ((frost$core$Object*) $tmp3092));
org$frostlang$frostc$Type* $tmp3099 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp3096, ((frost$collections$ListView*) $tmp3097));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3097));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp3093, $tmp3094, $tmp3092, $tmp3099);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
frost$collections$Array* $tmp3100 = *(&local23);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3101 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3102 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp3101, $tmp3102);
org$frostlang$frostc$IR$Value* $tmp3103 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3093, ((frost$collections$ListView*) $tmp3100), $tmp3101);
org$frostlang$frostc$Type* $tmp3104 = *(&local27);
org$frostlang$frostc$IR$Value* $tmp3105 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3103, $tmp3104);
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
org$frostlang$frostc$IR$Value* $tmp3106 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
*(&local52) = $tmp3105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:439
org$frostlang$frostc$IR$Value* $tmp3107 = *(&local52);
org$frostlang$frostc$IR$Value* $tmp3108 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3107, param6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3108));
org$frostlang$frostc$IR$Value* $tmp3109 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3109));
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp3110 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3110));
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3111 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3111));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3112 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3113 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3113));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp3114 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3114));
*(&local23) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3115 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3115));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp3116 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3116));
*(&local14) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp3117 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3117));
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp3118 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3118));
*(&local10) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp3119 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3119));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp3120 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp3121 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp3122 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3122));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3108;

}
void org$frostlang$frostc$expression$Closure$init(org$frostlang$frostc$expression$Closure* param0) {

return;

}
void org$frostlang$frostc$expression$Closure$cleanup(org$frostlang$frostc$expression$Closure* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:23
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

