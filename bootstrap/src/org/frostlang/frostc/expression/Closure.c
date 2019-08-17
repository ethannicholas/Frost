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
typedef frost$core$Bit (*$fn1278)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1291)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1304)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1317)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1341)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1420)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1433)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1446)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1459)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1483)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1519)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1575)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1599)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1612)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1625)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1638)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1662)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1724)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1773)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1786)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1799)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1812)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1825)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1841)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1855)(frost$core$Object*);
typedef frost$core$Int (*$fn1871)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1925)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1938)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1951)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1964)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1983)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2047)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2071)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2084)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2097)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2110)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn2134)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2184)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2196)(org$frostlang$frostc$Type*, org$frostlang$frostc$Type*);
typedef frost$collections$ListView* (*$fn2204)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn2215)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2219)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2224)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2230)(frost$core$Object*);
typedef frost$core$String* (*$fn2263)(frost$core$Object*);
typedef frost$core$String* (*$fn2271)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2359)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn2363)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2382)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2393)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2397)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2402)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2473)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn2494)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2508)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2523)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2542)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2581)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2595)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2610)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2629)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2680)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn2694)(frost$collections$MapView*);
typedef frost$collections$Array* (*$fn2698)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2709)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn2713)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2718)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2923)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2960)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2973)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2986)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2999)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn3018)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3100)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3113)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3126)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3139)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn3163)(frost$collections$CollectionView*);

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
static frost$core$String $s1321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1464 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1470 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1478 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1583 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1643 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1649 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1732 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1829 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1830 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 95, -6421234203817919051, NULL };
static frost$core$String $s1836 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, -5098893480802846476, NULL };
static frost$core$String $s1860 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x6c\x61\x6d\x62\x64\x61\x20\x77\x69\x74\x68\x20\x77\x72\x6f\x6e\x67\x20", 31, 8296972873421398743, NULL };
static frost$core$String $s1862 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 20, 2029680644997683659, NULL };
static frost$core$String $s1978 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1996 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1997 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 117, 1927758743463322527, NULL };
static frost$core$String $s2003 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2021 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2055 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s2121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x65\x72\x72\x6f\x72", 12, 5959780354246604584, NULL };
static frost$core$String $s2233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x77\x68\x65\x6e\x20\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x64\x20\x61\x73\x20\x27", 26, -4042546728974569170, NULL };
static frost$core$String $s2235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3a", 2, 557192943631749204, NULL };
static frost$core$String $s2266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x72\x65\x63\x65\x69\x76\x65\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 51, 3365978283385468850, NULL };
static frost$core$String $s2268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20", 6, -1493373441645224251, NULL };
static frost$core$String $s2274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x20", 5, -4937494473629816297, NULL };
static frost$core$String $s2276 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, -3892980340820393091, NULL };
static frost$core$String $s2319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, -3892980340820393091, NULL };
static frost$core$String $s2341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2368 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x74\x79\x70\x65\x20\x77\x61\x73\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x61\x6e\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x63\x6f\x6e\x74\x65\x78\x74", 67, -2078875877935671909, NULL };
static frost$core$String $s2385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 10, 2350954303234509524, NULL };
static frost$core$String $s2387 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2476 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 4631530323501320402, NULL };
static frost$core$String $s2502 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s2503 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s2516 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s2550 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2589 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s2590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s2603 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s2637 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2638 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2763 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s2863 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3013 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3031 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3032 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 117, 1927758743463322527, NULL };
static frost$core$String $s3038 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3086 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s3143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s3150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp1212 = &$tmp1211->typeKind;
org$frostlang$frostc$Type$Kind $tmp1213 = *$tmp1212;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1214;
$tmp1214 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1214->value = $tmp1213;
frost$core$Int $tmp1215 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:414:28
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
*(&local12) = $tmp1211;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
goto block25;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1225 = &$tmp1211->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1226 = *$tmp1225;
frost$core$Bit $tmp1227 = (frost$core$Bit) {$tmp1226 != NULL};
bool $tmp1228 = $tmp1227.value;
if ($tmp1228) goto block30; else goto block31;
block31:;
frost$core$Int $tmp1229 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1230, $tmp1229);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1231 = &$tmp1211->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1232 = *$tmp1231;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
frost$core$Int $tmp1233 = (frost$core$Int) {0u};
frost$core$Object* $tmp1234 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1232, $tmp1233);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1234)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1234);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp1234);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1234)));
goto block25;
block25:;
org$frostlang$frostc$Type* $tmp1235 = *(&local12);
// begin inline call to function org.frostlang.frostc.Type.get_isMethod():frost.core.Bit from Closure.frost:180:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:378
org$frostlang$frostc$Type$Kind* $tmp1236 = &$tmp1235->typeKind;
org$frostlang$frostc$Type$Kind $tmp1237 = *$tmp1236;
frost$core$Int $tmp1238 = $tmp1237.$rawValue;
frost$core$Int $tmp1239 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:379:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1240 = $tmp1238.value;
int64_t $tmp1241 = $tmp1239.value;
bool $tmp1242 = $tmp1240 == $tmp1241;
frost$core$Bit $tmp1243 = (frost$core$Bit) {$tmp1242};
bool $tmp1244 = $tmp1243.value;
if ($tmp1244) goto block34; else goto block35;
block35:;
frost$core$Int $tmp1245 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:379:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1246 = $tmp1238.value;
int64_t $tmp1247 = $tmp1245.value;
bool $tmp1248 = $tmp1246 == $tmp1247;
frost$core$Bit $tmp1249 = (frost$core$Bit) {$tmp1248};
bool $tmp1250 = $tmp1249.value;
if ($tmp1250) goto block34; else goto block37;
block37:;
frost$core$Int $tmp1251 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:379:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1252 = $tmp1238.value;
int64_t $tmp1253 = $tmp1251.value;
bool $tmp1254 = $tmp1252 == $tmp1253;
frost$core$Bit $tmp1255 = (frost$core$Bit) {$tmp1254};
bool $tmp1256 = $tmp1255.value;
if ($tmp1256) goto block34; else goto block39;
block39:;
frost$core$Int $tmp1257 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:379:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1258 = $tmp1238.value;
int64_t $tmp1259 = $tmp1257.value;
bool $tmp1260 = $tmp1258 == $tmp1259;
frost$core$Bit $tmp1261 = (frost$core$Bit) {$tmp1260};
bool $tmp1262 = $tmp1261.value;
if ($tmp1262) goto block34; else goto block41;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:380
frost$core$Bit $tmp1263 = (frost$core$Bit) {true};
*(&local15) = $tmp1263;
goto block32;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:383
frost$core$Bit $tmp1264 = (frost$core$Bit) {false};
*(&local15) = $tmp1264;
goto block32;
block33:;
goto block32;
block32:;
frost$core$Bit $tmp1265 = *(&local15);
bool $tmp1266 = $tmp1265.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
if ($tmp1266) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:181
org$frostlang$frostc$Type* $tmp1267 = *(&local11);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:181:36
org$frostlang$frostc$Type$Kind* $tmp1268 = &$tmp1267->typeKind;
org$frostlang$frostc$Type$Kind $tmp1269 = *$tmp1268;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1270;
$tmp1270 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1270->value = $tmp1269;
frost$core$Int $tmp1271 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1272 = &(&local17)->$rawValue;
*$tmp1272 = $tmp1271;
org$frostlang$frostc$Type$Kind $tmp1273 = *(&local17);
*(&local16) = $tmp1273;
org$frostlang$frostc$Type$Kind $tmp1274 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1275;
$tmp1275 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1275->value = $tmp1274;
ITable* $tmp1276 = ((frost$core$Equatable*) $tmp1270)->$class->itable;
while ($tmp1276->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1276 = $tmp1276->next;
}
$fn1278 $tmp1277 = $tmp1276->methods[0];
frost$core$Bit $tmp1279 = $tmp1277(((frost$core$Equatable*) $tmp1270), ((frost$core$Equatable*) $tmp1275));
bool $tmp1280 = $tmp1279.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1275)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1270)));
if ($tmp1280) goto block44; else goto block48;
block48:;
org$frostlang$frostc$Type$Kind* $tmp1281 = &$tmp1267->typeKind;
org$frostlang$frostc$Type$Kind $tmp1282 = *$tmp1281;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1283;
$tmp1283 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1283->value = $tmp1282;
frost$core$Int $tmp1284 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1285 = &(&local19)->$rawValue;
*$tmp1285 = $tmp1284;
org$frostlang$frostc$Type$Kind $tmp1286 = *(&local19);
*(&local18) = $tmp1286;
org$frostlang$frostc$Type$Kind $tmp1287 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1288;
$tmp1288 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1288->value = $tmp1287;
ITable* $tmp1289 = ((frost$core$Equatable*) $tmp1283)->$class->itable;
while ($tmp1289->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1289 = $tmp1289->next;
}
$fn1291 $tmp1290 = $tmp1289->methods[0];
frost$core$Bit $tmp1292 = $tmp1290(((frost$core$Equatable*) $tmp1283), ((frost$core$Equatable*) $tmp1288));
bool $tmp1293 = $tmp1292.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1288)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1283)));
if ($tmp1293) goto block44; else goto block47;
block47:;
org$frostlang$frostc$Type$Kind* $tmp1294 = &$tmp1267->typeKind;
org$frostlang$frostc$Type$Kind $tmp1295 = *$tmp1294;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1296;
$tmp1296 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1296->value = $tmp1295;
frost$core$Int $tmp1297 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1298 = &(&local21)->$rawValue;
*$tmp1298 = $tmp1297;
org$frostlang$frostc$Type$Kind $tmp1299 = *(&local21);
*(&local20) = $tmp1299;
org$frostlang$frostc$Type$Kind $tmp1300 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1301;
$tmp1301 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1301->value = $tmp1300;
ITable* $tmp1302 = ((frost$core$Equatable*) $tmp1296)->$class->itable;
while ($tmp1302->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1302 = $tmp1302->next;
}
$fn1304 $tmp1303 = $tmp1302->methods[0];
frost$core$Bit $tmp1305 = $tmp1303(((frost$core$Equatable*) $tmp1296), ((frost$core$Equatable*) $tmp1301));
bool $tmp1306 = $tmp1305.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1301)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1296)));
if ($tmp1306) goto block44; else goto block46;
block46:;
org$frostlang$frostc$Type$Kind* $tmp1307 = &$tmp1267->typeKind;
org$frostlang$frostc$Type$Kind $tmp1308 = *$tmp1307;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1309;
$tmp1309 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1309->value = $tmp1308;
frost$core$Int $tmp1310 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1311 = &(&local23)->$rawValue;
*$tmp1311 = $tmp1310;
org$frostlang$frostc$Type$Kind $tmp1312 = *(&local23);
*(&local22) = $tmp1312;
org$frostlang$frostc$Type$Kind $tmp1313 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1314;
$tmp1314 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1314->value = $tmp1313;
ITable* $tmp1315 = ((frost$core$Equatable*) $tmp1309)->$class->itable;
while ($tmp1315->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1315 = $tmp1315->next;
}
$fn1317 $tmp1316 = $tmp1315->methods[0];
frost$core$Bit $tmp1318 = $tmp1316(((frost$core$Equatable*) $tmp1309), ((frost$core$Equatable*) $tmp1314));
bool $tmp1319 = $tmp1318.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1314)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1309)));
if ($tmp1319) goto block44; else goto block45;
block45:;
frost$core$Int $tmp1320 = (frost$core$Int) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1321, $tmp1320, &$s1322);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1323 = &$tmp1267->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1324 = *$tmp1323;
frost$core$Bit $tmp1325 = (frost$core$Bit) {$tmp1324 != NULL};
bool $tmp1326 = $tmp1325.value;
if ($tmp1326) goto block54; else goto block55;
block55:;
frost$core$Int $tmp1327 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1328, $tmp1327);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1329 = &$tmp1267->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1330 = *$tmp1329;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1331 = &$tmp1267->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1332 = *$tmp1331;
frost$core$Bit $tmp1333 = (frost$core$Bit) {$tmp1332 != NULL};
bool $tmp1334 = $tmp1333.value;
if ($tmp1334) goto block57; else goto block58;
block58:;
frost$core$Int $tmp1335 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1336, $tmp1335);
abort(); // unreachable
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1337 = &$tmp1267->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1338 = *$tmp1337;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
ITable* $tmp1339 = ((frost$collections$CollectionView*) $tmp1338)->$class->itable;
while ($tmp1339->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1339 = $tmp1339->next;
}
$fn1341 $tmp1340 = $tmp1339->methods[0];
frost$core$Int $tmp1342 = $tmp1340(((frost$collections$CollectionView*) $tmp1338));
frost$core$Int $tmp1343 = (frost$core$Int) {1u};
int64_t $tmp1344 = $tmp1342.value;
int64_t $tmp1345 = $tmp1343.value;
int64_t $tmp1346 = $tmp1344 - $tmp1345;
frost$core$Int $tmp1347 = (frost$core$Int) {$tmp1346};
frost$core$Object* $tmp1348 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1330, $tmp1347);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1348)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1348);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1348)));
org$frostlang$frostc$Type* $tmp1349 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
*(&local24) = ((org$frostlang$frostc$Type*) $tmp1348);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1348)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:185
frost$collections$HashMap** $tmp1350 = &param0->binaryTypes;
frost$collections$HashMap* $tmp1351 = *$tmp1350;
*(&local25) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
frost$collections$HashMap* $tmp1352 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
*(&local25) = $tmp1351;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:186
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp1353 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp1353);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
frost$collections$HashMap** $tmp1354 = &param0->binaryTypes;
frost$collections$HashMap* $tmp1355 = *$tmp1354;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
frost$collections$HashMap** $tmp1356 = &param0->binaryTypes;
*$tmp1356 = $tmp1353;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:187
org$frostlang$frostc$Type* $tmp1357 = *(&local24);
org$frostlang$frostc$Pair* $tmp1358 = org$frostlang$frostc$Compiler$computeCoercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, param2, $tmp1357);
*(&local26) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
org$frostlang$frostc$Pair* $tmp1359 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
*(&local26) = $tmp1358;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:188
frost$collections$HashMap* $tmp1360 = *(&local25);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
frost$collections$HashMap** $tmp1361 = &param0->binaryTypes;
frost$collections$HashMap* $tmp1362 = *$tmp1361;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
frost$collections$HashMap** $tmp1363 = &param0->binaryTypes;
*$tmp1363 = $tmp1360;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:189
org$frostlang$frostc$Pair* $tmp1364 = *(&local26);
frost$core$Bit $tmp1365 = (frost$core$Bit) {$tmp1364 == NULL};
bool $tmp1366 = $tmp1365.value;
if ($tmp1366) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:190
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Pair* $tmp1367 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
*(&local26) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp1368 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
*(&local25) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp1369 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1370 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1371 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1372 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1373 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1374 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:192
org$frostlang$frostc$Pair* $tmp1375 = *(&local26);
frost$core$Object** $tmp1376 = &$tmp1375->first;
frost$core$Object* $tmp1377 = *$tmp1376;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1377)));
org$frostlang$frostc$Type* $tmp1378 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
*(&local10) = ((org$frostlang$frostc$Type*) $tmp1377);
org$frostlang$frostc$Pair* $tmp1379 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
*(&local26) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp1380 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
*(&local25) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp1381 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1381));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
goto block24;
block24:;
org$frostlang$frostc$Type* $tmp1382 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1383 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
goto block19;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:196
org$frostlang$frostc$Type* $tmp1384 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
org$frostlang$frostc$Type* $tmp1385 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
*(&local10) = $tmp1384;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:199
org$frostlang$frostc$Type* $tmp1386 = *(&local10);
frost$core$Bit $tmp1387 = (frost$core$Bit) {$tmp1386 == NULL};
bool $tmp1388 = $tmp1387.value;
if ($tmp1388) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp1389 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1390 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1391 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:202
org$frostlang$frostc$Position $tmp1392 = org$frostlang$frostc$Position$init();
frost$core$Int $tmp1393 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Closure.frost:202:63
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1394 = &(&local28)->$rawValue;
*$tmp1394 = $tmp1393;
org$frostlang$frostc$Type$Kind $tmp1395 = *(&local28);
*(&local27) = $tmp1395;
org$frostlang$frostc$Type$Kind $tmp1396 = *(&local27);
frost$collections$Array* $tmp1397 = *(&local1);
org$frostlang$frostc$Type* $tmp1398 = *(&local10);
frost$core$Int $tmp1399 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp1400 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param0, $tmp1392, $tmp1396, ((frost$collections$ListView*) $tmp1397), $tmp1398, $tmp1399);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
org$frostlang$frostc$Type* $tmp1401 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1402 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1403 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return $tmp1400;

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
org$frostlang$frostc$Type* $tmp1404 = org$frostlang$frostc$expression$Closure$typedLambdaType$org$frostlang$frostc$Compiler$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Type$Q(param0, ((frost$collections$ListView*) param2), param3, param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
org$frostlang$frostc$Type* $tmp1405 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
*(&local1) = $tmp1404;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:212
org$frostlang$frostc$Type* $tmp1406 = *(&local1);
frost$core$Bit $tmp1407 = (frost$core$Bit) {$tmp1406 != NULL};
bool $tmp1408 = $tmp1407.value;
if ($tmp1408) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:213
org$frostlang$frostc$Type* $tmp1409 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:213:37
org$frostlang$frostc$Type$Kind* $tmp1410 = &$tmp1409->typeKind;
org$frostlang$frostc$Type$Kind $tmp1411 = *$tmp1410;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1412;
$tmp1412 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1412->value = $tmp1411;
frost$core$Int $tmp1413 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1414 = &(&local3)->$rawValue;
*$tmp1414 = $tmp1413;
org$frostlang$frostc$Type$Kind $tmp1415 = *(&local3);
*(&local2) = $tmp1415;
org$frostlang$frostc$Type$Kind $tmp1416 = *(&local2);
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
if ($tmp1422) goto block5; else goto block9;
block9:;
org$frostlang$frostc$Type$Kind* $tmp1423 = &$tmp1409->typeKind;
org$frostlang$frostc$Type$Kind $tmp1424 = *$tmp1423;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1425;
$tmp1425 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1425->value = $tmp1424;
frost$core$Int $tmp1426 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1427 = &(&local5)->$rawValue;
*$tmp1427 = $tmp1426;
org$frostlang$frostc$Type$Kind $tmp1428 = *(&local5);
*(&local4) = $tmp1428;
org$frostlang$frostc$Type$Kind $tmp1429 = *(&local4);
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
if ($tmp1435) goto block5; else goto block8;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1436 = &$tmp1409->typeKind;
org$frostlang$frostc$Type$Kind $tmp1437 = *$tmp1436;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1438;
$tmp1438 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1438->value = $tmp1437;
frost$core$Int $tmp1439 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1440 = &(&local7)->$rawValue;
*$tmp1440 = $tmp1439;
org$frostlang$frostc$Type$Kind $tmp1441 = *(&local7);
*(&local6) = $tmp1441;
org$frostlang$frostc$Type$Kind $tmp1442 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1443;
$tmp1443 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1443->value = $tmp1442;
ITable* $tmp1444 = ((frost$core$Equatable*) $tmp1438)->$class->itable;
while ($tmp1444->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1444 = $tmp1444->next;
}
$fn1446 $tmp1445 = $tmp1444->methods[0];
frost$core$Bit $tmp1447 = $tmp1445(((frost$core$Equatable*) $tmp1438), ((frost$core$Equatable*) $tmp1443));
bool $tmp1448 = $tmp1447.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1443)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1438)));
if ($tmp1448) goto block5; else goto block7;
block7:;
org$frostlang$frostc$Type$Kind* $tmp1449 = &$tmp1409->typeKind;
org$frostlang$frostc$Type$Kind $tmp1450 = *$tmp1449;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1451;
$tmp1451 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1451->value = $tmp1450;
frost$core$Int $tmp1452 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1453 = &(&local9)->$rawValue;
*$tmp1453 = $tmp1452;
org$frostlang$frostc$Type$Kind $tmp1454 = *(&local9);
*(&local8) = $tmp1454;
org$frostlang$frostc$Type$Kind $tmp1455 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1456;
$tmp1456 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1456->value = $tmp1455;
ITable* $tmp1457 = ((frost$core$Equatable*) $tmp1451)->$class->itable;
while ($tmp1457->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1457 = $tmp1457->next;
}
$fn1459 $tmp1458 = $tmp1457->methods[0];
frost$core$Bit $tmp1460 = $tmp1458(((frost$core$Equatable*) $tmp1451), ((frost$core$Equatable*) $tmp1456));
bool $tmp1461 = $tmp1460.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1456)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1451)));
if ($tmp1461) goto block5; else goto block6;
block6:;
frost$core$Int $tmp1462 = (frost$core$Int) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1463, $tmp1462, &$s1464);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1465 = &$tmp1409->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1466 = *$tmp1465;
frost$core$Bit $tmp1467 = (frost$core$Bit) {$tmp1466 != NULL};
bool $tmp1468 = $tmp1467.value;
if ($tmp1468) goto block15; else goto block16;
block16:;
frost$core$Int $tmp1469 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1470, $tmp1469);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1471 = &$tmp1409->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1472 = *$tmp1471;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1473 = &$tmp1409->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1474 = *$tmp1473;
frost$core$Bit $tmp1475 = (frost$core$Bit) {$tmp1474 != NULL};
bool $tmp1476 = $tmp1475.value;
if ($tmp1476) goto block18; else goto block19;
block19:;
frost$core$Int $tmp1477 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1478, $tmp1477);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1479 = &$tmp1409->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1480 = *$tmp1479;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
ITable* $tmp1481 = ((frost$collections$CollectionView*) $tmp1480)->$class->itable;
while ($tmp1481->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1481 = $tmp1481->next;
}
$fn1483 $tmp1482 = $tmp1481->methods[0];
frost$core$Int $tmp1484 = $tmp1482(((frost$collections$CollectionView*) $tmp1480));
frost$core$Int $tmp1485 = (frost$core$Int) {1u};
int64_t $tmp1486 = $tmp1484.value;
int64_t $tmp1487 = $tmp1485.value;
int64_t $tmp1488 = $tmp1486 - $tmp1487;
frost$core$Int $tmp1489 = (frost$core$Int) {$tmp1488};
frost$core$Object* $tmp1490 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1472, $tmp1489);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1490)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1490);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1490)));
org$frostlang$frostc$Type* $tmp1491 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1490);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1490)));
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:218
org$frostlang$frostc$Type** $tmp1492 = &param0->ANY_TYPE;
org$frostlang$frostc$Type* $tmp1493 = *$tmp1492;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
org$frostlang$frostc$Type* $tmp1494 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
*(&local0) = $tmp1493;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:219
frost$core$Int* $tmp1495 = &param4->$rawValue;
frost$core$Int $tmp1496 = *$tmp1495;
frost$core$Int $tmp1497 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:220:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1498 = $tmp1496.value;
int64_t $tmp1499 = $tmp1497.value;
bool $tmp1500 = $tmp1498 == $tmp1499;
frost$core$Bit $tmp1501 = (frost$core$Bit) {$tmp1500};
bool $tmp1502 = $tmp1501.value;
if ($tmp1502) goto block21; else goto block20;
block21:;
org$frostlang$frostc$Type** $tmp1503 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp1504 = *$tmp1503;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
org$frostlang$frostc$Type* $tmp1505 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
*(&local10) = $tmp1504;
frost$core$Bit* $tmp1506 = (frost$core$Bit*) (param4->$data + 8);
frost$core$Bit $tmp1507 = *$tmp1506;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:221
org$frostlang$frostc$Type* $tmp1508 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:221:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp1509 = &$tmp1508->typeKind;
org$frostlang$frostc$Type$Kind $tmp1510 = *$tmp1509;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1511;
$tmp1511 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1511->value = $tmp1510;
frost$core$Int $tmp1512 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1513 = &(&local13)->$rawValue;
*$tmp1513 = $tmp1512;
org$frostlang$frostc$Type$Kind $tmp1514 = *(&local13);
*(&local12) = $tmp1514;
org$frostlang$frostc$Type$Kind $tmp1515 = *(&local12);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1516;
$tmp1516 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1516->value = $tmp1515;
ITable* $tmp1517 = ((frost$core$Equatable*) $tmp1511)->$class->itable;
while ($tmp1517->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1517 = $tmp1517->next;
}
$fn1519 $tmp1518 = $tmp1517->methods[1];
frost$core$Bit $tmp1520 = $tmp1518(((frost$core$Equatable*) $tmp1511), ((frost$core$Equatable*) $tmp1516));
bool $tmp1521 = $tmp1520.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1516)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1511)));
if ($tmp1521) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
*(&local11) = $tmp1508;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
goto block25;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1522 = &$tmp1508->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1523 = *$tmp1522;
frost$core$Bit $tmp1524 = (frost$core$Bit) {$tmp1523 != NULL};
bool $tmp1525 = $tmp1524.value;
if ($tmp1525) goto block30; else goto block31;
block31:;
frost$core$Int $tmp1526 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1527, $tmp1526);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1528 = &$tmp1508->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1529 = *$tmp1528;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
frost$core$Int $tmp1530 = (frost$core$Int) {0u};
frost$core$Object* $tmp1531 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1529, $tmp1530);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1531)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1531);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
*(&local11) = ((org$frostlang$frostc$Type*) $tmp1531);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1531)));
goto block25;
block25:;
org$frostlang$frostc$Type* $tmp1532 = *(&local11);
// begin inline call to function org.frostlang.frostc.Type.get_isMethod():frost.core.Bit from Closure.frost:221:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:378
org$frostlang$frostc$Type$Kind* $tmp1533 = &$tmp1532->typeKind;
org$frostlang$frostc$Type$Kind $tmp1534 = *$tmp1533;
frost$core$Int $tmp1535 = $tmp1534.$rawValue;
frost$core$Int $tmp1536 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:379:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1537 = $tmp1535.value;
int64_t $tmp1538 = $tmp1536.value;
bool $tmp1539 = $tmp1537 == $tmp1538;
frost$core$Bit $tmp1540 = (frost$core$Bit) {$tmp1539};
bool $tmp1541 = $tmp1540.value;
if ($tmp1541) goto block34; else goto block35;
block35:;
frost$core$Int $tmp1542 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:379:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1543 = $tmp1535.value;
int64_t $tmp1544 = $tmp1542.value;
bool $tmp1545 = $tmp1543 == $tmp1544;
frost$core$Bit $tmp1546 = (frost$core$Bit) {$tmp1545};
bool $tmp1547 = $tmp1546.value;
if ($tmp1547) goto block34; else goto block37;
block37:;
frost$core$Int $tmp1548 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:379:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1549 = $tmp1535.value;
int64_t $tmp1550 = $tmp1548.value;
bool $tmp1551 = $tmp1549 == $tmp1550;
frost$core$Bit $tmp1552 = (frost$core$Bit) {$tmp1551};
bool $tmp1553 = $tmp1552.value;
if ($tmp1553) goto block34; else goto block39;
block39:;
frost$core$Int $tmp1554 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:379:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1555 = $tmp1535.value;
int64_t $tmp1556 = $tmp1554.value;
bool $tmp1557 = $tmp1555 == $tmp1556;
frost$core$Bit $tmp1558 = (frost$core$Bit) {$tmp1557};
bool $tmp1559 = $tmp1558.value;
if ($tmp1559) goto block34; else goto block41;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:380
frost$core$Bit $tmp1560 = (frost$core$Bit) {true};
*(&local14) = $tmp1560;
goto block32;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:383
frost$core$Bit $tmp1561 = (frost$core$Bit) {false};
*(&local14) = $tmp1561;
goto block32;
block33:;
goto block32;
block32:;
frost$core$Bit $tmp1562 = *(&local14);
bool $tmp1563 = $tmp1562.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
if ($tmp1563) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:222
org$frostlang$frostc$Type* $tmp1564 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:222:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp1565 = &$tmp1564->typeKind;
org$frostlang$frostc$Type$Kind $tmp1566 = *$tmp1565;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1567;
$tmp1567 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1567->value = $tmp1566;
frost$core$Int $tmp1568 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1569 = &(&local17)->$rawValue;
*$tmp1569 = $tmp1568;
org$frostlang$frostc$Type$Kind $tmp1570 = *(&local17);
*(&local16) = $tmp1570;
org$frostlang$frostc$Type$Kind $tmp1571 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1572;
$tmp1572 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1572->value = $tmp1571;
ITable* $tmp1573 = ((frost$core$Equatable*) $tmp1567)->$class->itable;
while ($tmp1573->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1573 = $tmp1573->next;
}
$fn1575 $tmp1574 = $tmp1573->methods[1];
frost$core$Bit $tmp1576 = $tmp1574(((frost$core$Equatable*) $tmp1567), ((frost$core$Equatable*) $tmp1572));
bool $tmp1577 = $tmp1576.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1572)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1567)));
if ($tmp1577) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
*(&local15) = $tmp1564;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
goto block43;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1578 = &$tmp1564->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1579 = *$tmp1578;
frost$core$Bit $tmp1580 = (frost$core$Bit) {$tmp1579 != NULL};
bool $tmp1581 = $tmp1580.value;
if ($tmp1581) goto block48; else goto block49;
block49:;
frost$core$Int $tmp1582 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1583, $tmp1582);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1584 = &$tmp1564->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1585 = *$tmp1584;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
frost$core$Int $tmp1586 = (frost$core$Int) {0u};
frost$core$Object* $tmp1587 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1585, $tmp1586);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1587)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1587);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
*(&local15) = ((org$frostlang$frostc$Type*) $tmp1587);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1587)));
goto block43;
block43:;
org$frostlang$frostc$Type* $tmp1588 = *(&local15);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:222:54
org$frostlang$frostc$Type$Kind* $tmp1589 = &$tmp1588->typeKind;
org$frostlang$frostc$Type$Kind $tmp1590 = *$tmp1589;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1591;
$tmp1591 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1591->value = $tmp1590;
frost$core$Int $tmp1592 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1593 = &(&local19)->$rawValue;
*$tmp1593 = $tmp1592;
org$frostlang$frostc$Type$Kind $tmp1594 = *(&local19);
*(&local18) = $tmp1594;
org$frostlang$frostc$Type$Kind $tmp1595 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1596;
$tmp1596 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1596->value = $tmp1595;
ITable* $tmp1597 = ((frost$core$Equatable*) $tmp1591)->$class->itable;
while ($tmp1597->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1597 = $tmp1597->next;
}
$fn1599 $tmp1598 = $tmp1597->methods[0];
frost$core$Bit $tmp1600 = $tmp1598(((frost$core$Equatable*) $tmp1591), ((frost$core$Equatable*) $tmp1596));
bool $tmp1601 = $tmp1600.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1596)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1591)));
if ($tmp1601) goto block51; else goto block55;
block55:;
org$frostlang$frostc$Type$Kind* $tmp1602 = &$tmp1588->typeKind;
org$frostlang$frostc$Type$Kind $tmp1603 = *$tmp1602;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1604;
$tmp1604 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1604->value = $tmp1603;
frost$core$Int $tmp1605 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1606 = &(&local21)->$rawValue;
*$tmp1606 = $tmp1605;
org$frostlang$frostc$Type$Kind $tmp1607 = *(&local21);
*(&local20) = $tmp1607;
org$frostlang$frostc$Type$Kind $tmp1608 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1609;
$tmp1609 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1609->value = $tmp1608;
ITable* $tmp1610 = ((frost$core$Equatable*) $tmp1604)->$class->itable;
while ($tmp1610->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1610 = $tmp1610->next;
}
$fn1612 $tmp1611 = $tmp1610->methods[0];
frost$core$Bit $tmp1613 = $tmp1611(((frost$core$Equatable*) $tmp1604), ((frost$core$Equatable*) $tmp1609));
bool $tmp1614 = $tmp1613.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1609)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1604)));
if ($tmp1614) goto block51; else goto block54;
block54:;
org$frostlang$frostc$Type$Kind* $tmp1615 = &$tmp1588->typeKind;
org$frostlang$frostc$Type$Kind $tmp1616 = *$tmp1615;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1617;
$tmp1617 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1617->value = $tmp1616;
frost$core$Int $tmp1618 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1619 = &(&local23)->$rawValue;
*$tmp1619 = $tmp1618;
org$frostlang$frostc$Type$Kind $tmp1620 = *(&local23);
*(&local22) = $tmp1620;
org$frostlang$frostc$Type$Kind $tmp1621 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1622;
$tmp1622 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1622->value = $tmp1621;
ITable* $tmp1623 = ((frost$core$Equatable*) $tmp1617)->$class->itable;
while ($tmp1623->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1623 = $tmp1623->next;
}
$fn1625 $tmp1624 = $tmp1623->methods[0];
frost$core$Bit $tmp1626 = $tmp1624(((frost$core$Equatable*) $tmp1617), ((frost$core$Equatable*) $tmp1622));
bool $tmp1627 = $tmp1626.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1622)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1617)));
if ($tmp1627) goto block51; else goto block53;
block53:;
org$frostlang$frostc$Type$Kind* $tmp1628 = &$tmp1588->typeKind;
org$frostlang$frostc$Type$Kind $tmp1629 = *$tmp1628;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1630;
$tmp1630 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1630->value = $tmp1629;
frost$core$Int $tmp1631 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1632 = &(&local25)->$rawValue;
*$tmp1632 = $tmp1631;
org$frostlang$frostc$Type$Kind $tmp1633 = *(&local25);
*(&local24) = $tmp1633;
org$frostlang$frostc$Type$Kind $tmp1634 = *(&local24);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1635;
$tmp1635 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1635->value = $tmp1634;
ITable* $tmp1636 = ((frost$core$Equatable*) $tmp1630)->$class->itable;
while ($tmp1636->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1636 = $tmp1636->next;
}
$fn1638 $tmp1637 = $tmp1636->methods[0];
frost$core$Bit $tmp1639 = $tmp1637(((frost$core$Equatable*) $tmp1630), ((frost$core$Equatable*) $tmp1635));
bool $tmp1640 = $tmp1639.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1635)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1630)));
if ($tmp1640) goto block51; else goto block52;
block52:;
frost$core$Int $tmp1641 = (frost$core$Int) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1642, $tmp1641, &$s1643);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1644 = &$tmp1588->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1645 = *$tmp1644;
frost$core$Bit $tmp1646 = (frost$core$Bit) {$tmp1645 != NULL};
bool $tmp1647 = $tmp1646.value;
if ($tmp1647) goto block61; else goto block62;
block62:;
frost$core$Int $tmp1648 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1649, $tmp1648);
abort(); // unreachable
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1650 = &$tmp1588->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1651 = *$tmp1650;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1652 = &$tmp1588->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1653 = *$tmp1652;
frost$core$Bit $tmp1654 = (frost$core$Bit) {$tmp1653 != NULL};
bool $tmp1655 = $tmp1654.value;
if ($tmp1655) goto block64; else goto block65;
block65:;
frost$core$Int $tmp1656 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1657, $tmp1656);
abort(); // unreachable
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1658 = &$tmp1588->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1659 = *$tmp1658;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1659));
ITable* $tmp1660 = ((frost$collections$CollectionView*) $tmp1659)->$class->itable;
while ($tmp1660->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1660 = $tmp1660->next;
}
$fn1662 $tmp1661 = $tmp1660->methods[0];
frost$core$Int $tmp1663 = $tmp1661(((frost$collections$CollectionView*) $tmp1659));
frost$core$Int $tmp1664 = (frost$core$Int) {1u};
int64_t $tmp1665 = $tmp1663.value;
int64_t $tmp1666 = $tmp1664.value;
int64_t $tmp1667 = $tmp1665 - $tmp1666;
frost$core$Int $tmp1668 = (frost$core$Int) {$tmp1667};
frost$core$Object* $tmp1669 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1651, $tmp1668);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1669)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1669);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1659));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1669)));
org$frostlang$frostc$Type* $tmp1670 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1669);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1669)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1588));
org$frostlang$frostc$Type* $tmp1671 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
goto block24;
block24:;
org$frostlang$frostc$Type* $tmp1672 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1673 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block20;
block20:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:227
frost$core$Int $tmp1674 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:227:59
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp1675 = &(&local27)->$rawValue;
*$tmp1675 = $tmp1674;
org$frostlang$frostc$MethodDecl$Kind $tmp1676 = *(&local27);
*(&local26) = $tmp1676;
org$frostlang$frostc$MethodDecl$Kind $tmp1677 = *(&local26);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1678 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1679 = (frost$core$Int) {26u};
org$frostlang$frostc$Type* $tmp1680 = *(&local0);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:228:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3685
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1681 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1682 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3685:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
org$frostlang$frostc$Type** $tmp1683 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp1684 = *$tmp1683;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1685 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1686 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1685, $tmp1686);
frost$collections$Array$add$frost$collections$Array$T($tmp1685, ((frost$core$Object*) $tmp1680));
org$frostlang$frostc$Type* $tmp1687 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1684, ((frost$collections$ListView*) $tmp1685));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp1681, $tmp1682, $tmp1680, $tmp1687);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1678, $tmp1679, param1, $tmp1681);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1688 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1689 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1688, $tmp1689);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1690 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1691 = (frost$core$Int) {38u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp1690, $tmp1691, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp1688, ((frost$core$Object*) $tmp1690));
org$frostlang$frostc$IR$Value* $tmp1692 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1677, param2, $tmp1678, ((org$frostlang$frostc$FixedArray*) $tmp1688), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
org$frostlang$frostc$Type* $tmp1693 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1694 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1694));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1692;

}
frost$core$Bit org$frostlang$frostc$expression$Closure$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:271
frost$core$String** $tmp1695 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1696 = *$tmp1695;
frost$core$String** $tmp1697 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp1698 = *$tmp1697;
frost$core$Bit $tmp1699 = frost$core$String$$GT$frost$core$String$R$frost$core$Bit($tmp1696, $tmp1698);
return $tmp1699;

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
frost$core$Int* $tmp1700 = &param4->$rawValue;
frost$core$Int $tmp1701 = *$tmp1700;
frost$core$Int $tmp1702 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:237:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1703 = $tmp1701.value;
int64_t $tmp1704 = $tmp1702.value;
bool $tmp1705 = $tmp1703 == $tmp1704;
frost$core$Bit $tmp1706 = (frost$core$Bit) {$tmp1705};
bool $tmp1707 = $tmp1706.value;
if ($tmp1707) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Type** $tmp1708 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp1709 = *$tmp1708;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
org$frostlang$frostc$Type* $tmp1710 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
*(&local0) = $tmp1709;
frost$core$Bit* $tmp1711 = (frost$core$Bit*) (param4->$data + 8);
frost$core$Bit $tmp1712 = *$tmp1711;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:238
org$frostlang$frostc$Type* $tmp1713 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:238:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp1714 = &$tmp1713->typeKind;
org$frostlang$frostc$Type$Kind $tmp1715 = *$tmp1714;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1716;
$tmp1716 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1716->value = $tmp1715;
frost$core$Int $tmp1717 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1718 = &(&local3)->$rawValue;
*$tmp1718 = $tmp1717;
org$frostlang$frostc$Type$Kind $tmp1719 = *(&local3);
*(&local2) = $tmp1719;
org$frostlang$frostc$Type$Kind $tmp1720 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1721;
$tmp1721 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1721->value = $tmp1720;
ITable* $tmp1722 = ((frost$core$Equatable*) $tmp1716)->$class->itable;
while ($tmp1722->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1722 = $tmp1722->next;
}
$fn1724 $tmp1723 = $tmp1722->methods[1];
frost$core$Bit $tmp1725 = $tmp1723(((frost$core$Equatable*) $tmp1716), ((frost$core$Equatable*) $tmp1721));
bool $tmp1726 = $tmp1725.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1721)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1716)));
if ($tmp1726) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
*(&local1) = $tmp1713;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1727 = &$tmp1713->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1728 = *$tmp1727;
frost$core$Bit $tmp1729 = (frost$core$Bit) {$tmp1728 != NULL};
bool $tmp1730 = $tmp1729.value;
if ($tmp1730) goto block9; else goto block10;
block10:;
frost$core$Int $tmp1731 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1732, $tmp1731);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1733 = &$tmp1713->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1734 = *$tmp1733;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
frost$core$Int $tmp1735 = (frost$core$Int) {0u};
frost$core$Object* $tmp1736 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1734, $tmp1735);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1736)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1736);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp1736);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1736)));
goto block4;
block4:;
org$frostlang$frostc$Type* $tmp1737 = *(&local1);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
org$frostlang$frostc$Type* $tmp1738 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
*(&local4) = $tmp1737;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:239
org$frostlang$frostc$Type* $tmp1739 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_isMethod():frost.core.Bit from Closure.frost:239:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:378
org$frostlang$frostc$Type$Kind* $tmp1740 = &$tmp1739->typeKind;
org$frostlang$frostc$Type$Kind $tmp1741 = *$tmp1740;
frost$core$Int $tmp1742 = $tmp1741.$rawValue;
frost$core$Int $tmp1743 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:379:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1744 = $tmp1742.value;
int64_t $tmp1745 = $tmp1743.value;
bool $tmp1746 = $tmp1744 == $tmp1745;
frost$core$Bit $tmp1747 = (frost$core$Bit) {$tmp1746};
bool $tmp1748 = $tmp1747.value;
if ($tmp1748) goto block15; else goto block16;
block16:;
frost$core$Int $tmp1749 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:379:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1750 = $tmp1742.value;
int64_t $tmp1751 = $tmp1749.value;
bool $tmp1752 = $tmp1750 == $tmp1751;
frost$core$Bit $tmp1753 = (frost$core$Bit) {$tmp1752};
bool $tmp1754 = $tmp1753.value;
if ($tmp1754) goto block15; else goto block18;
block18:;
frost$core$Int $tmp1755 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:379:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1756 = $tmp1742.value;
int64_t $tmp1757 = $tmp1755.value;
bool $tmp1758 = $tmp1756 == $tmp1757;
frost$core$Bit $tmp1759 = (frost$core$Bit) {$tmp1758};
bool $tmp1760 = $tmp1759.value;
if ($tmp1760) goto block15; else goto block20;
block20:;
frost$core$Int $tmp1761 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:379:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1762 = $tmp1742.value;
int64_t $tmp1763 = $tmp1761.value;
bool $tmp1764 = $tmp1762 == $tmp1763;
frost$core$Bit $tmp1765 = (frost$core$Bit) {$tmp1764};
bool $tmp1766 = $tmp1765.value;
if ($tmp1766) goto block15; else goto block22;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:380
frost$core$Bit $tmp1767 = (frost$core$Bit) {true};
*(&local5) = $tmp1767;
goto block13;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:383
frost$core$Bit $tmp1768 = (frost$core$Bit) {false};
*(&local5) = $tmp1768;
goto block13;
block14:;
goto block13;
block13:;
frost$core$Bit $tmp1769 = *(&local5);
bool $tmp1770 = $tmp1769.value;
if ($tmp1770) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:240
ITable* $tmp1771 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp1771->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1771 = $tmp1771->next;
}
$fn1773 $tmp1772 = $tmp1771->methods[0];
frost$core$Int $tmp1774 = $tmp1772(((frost$collections$CollectionView*) param2));
org$frostlang$frostc$Type* $tmp1775 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_parameterCount():frost.core.Int from Closure.frost:240:57
org$frostlang$frostc$Type$Kind* $tmp1776 = &$tmp1775->typeKind;
org$frostlang$frostc$Type$Kind $tmp1777 = *$tmp1776;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1778;
$tmp1778 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1778->value = $tmp1777;
frost$core$Int $tmp1779 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:420:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1780 = &(&local7)->$rawValue;
*$tmp1780 = $tmp1779;
org$frostlang$frostc$Type$Kind $tmp1781 = *(&local7);
*(&local6) = $tmp1781;
org$frostlang$frostc$Type$Kind $tmp1782 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1783;
$tmp1783 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1783->value = $tmp1782;
ITable* $tmp1784 = ((frost$core$Equatable*) $tmp1778)->$class->itable;
while ($tmp1784->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1784 = $tmp1784->next;
}
$fn1786 $tmp1785 = $tmp1784->methods[0];
frost$core$Bit $tmp1787 = $tmp1785(((frost$core$Equatable*) $tmp1778), ((frost$core$Equatable*) $tmp1783));
bool $tmp1788 = $tmp1787.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1783)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1778)));
if ($tmp1788) goto block27; else goto block31;
block31:;
org$frostlang$frostc$Type$Kind* $tmp1789 = &$tmp1775->typeKind;
org$frostlang$frostc$Type$Kind $tmp1790 = *$tmp1789;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1791;
$tmp1791 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1791->value = $tmp1790;
frost$core$Int $tmp1792 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:420:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1793 = &(&local9)->$rawValue;
*$tmp1793 = $tmp1792;
org$frostlang$frostc$Type$Kind $tmp1794 = *(&local9);
*(&local8) = $tmp1794;
org$frostlang$frostc$Type$Kind $tmp1795 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1796;
$tmp1796 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1796->value = $tmp1795;
ITable* $tmp1797 = ((frost$core$Equatable*) $tmp1791)->$class->itable;
while ($tmp1797->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1797 = $tmp1797->next;
}
$fn1799 $tmp1798 = $tmp1797->methods[0];
frost$core$Bit $tmp1800 = $tmp1798(((frost$core$Equatable*) $tmp1791), ((frost$core$Equatable*) $tmp1796));
bool $tmp1801 = $tmp1800.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1796)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1791)));
if ($tmp1801) goto block27; else goto block30;
block30:;
org$frostlang$frostc$Type$Kind* $tmp1802 = &$tmp1775->typeKind;
org$frostlang$frostc$Type$Kind $tmp1803 = *$tmp1802;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1804;
$tmp1804 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1804->value = $tmp1803;
frost$core$Int $tmp1805 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:420:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1806 = &(&local11)->$rawValue;
*$tmp1806 = $tmp1805;
org$frostlang$frostc$Type$Kind $tmp1807 = *(&local11);
*(&local10) = $tmp1807;
org$frostlang$frostc$Type$Kind $tmp1808 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1809;
$tmp1809 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1809->value = $tmp1808;
ITable* $tmp1810 = ((frost$core$Equatable*) $tmp1804)->$class->itable;
while ($tmp1810->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1810 = $tmp1810->next;
}
$fn1812 $tmp1811 = $tmp1810->methods[0];
frost$core$Bit $tmp1813 = $tmp1811(((frost$core$Equatable*) $tmp1804), ((frost$core$Equatable*) $tmp1809));
bool $tmp1814 = $tmp1813.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1809)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1804)));
if ($tmp1814) goto block27; else goto block29;
block29:;
org$frostlang$frostc$Type$Kind* $tmp1815 = &$tmp1775->typeKind;
org$frostlang$frostc$Type$Kind $tmp1816 = *$tmp1815;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1817;
$tmp1817 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1817->value = $tmp1816;
frost$core$Int $tmp1818 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:421:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1819 = &(&local13)->$rawValue;
*$tmp1819 = $tmp1818;
org$frostlang$frostc$Type$Kind $tmp1820 = *(&local13);
*(&local12) = $tmp1820;
org$frostlang$frostc$Type$Kind $tmp1821 = *(&local12);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1822;
$tmp1822 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1822->value = $tmp1821;
ITable* $tmp1823 = ((frost$core$Equatable*) $tmp1817)->$class->itable;
while ($tmp1823->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1823 = $tmp1823->next;
}
$fn1825 $tmp1824 = $tmp1823->methods[0];
frost$core$Bit $tmp1826 = $tmp1824(((frost$core$Equatable*) $tmp1817), ((frost$core$Equatable*) $tmp1822));
bool $tmp1827 = $tmp1826.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1822)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1817)));
if ($tmp1827) goto block27; else goto block28;
block28:;
frost$core$Int $tmp1828 = (frost$core$Int) {422u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1829, $tmp1828, &$s1830);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:423
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:423:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1831 = &$tmp1775->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1832 = *$tmp1831;
frost$core$Bit $tmp1833 = (frost$core$Bit) {$tmp1832 != NULL};
bool $tmp1834 = $tmp1833.value;
if ($tmp1834) goto block37; else goto block38;
block38:;
frost$core$Int $tmp1835 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1836, $tmp1835);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1837 = &$tmp1775->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1838 = *$tmp1837;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
ITable* $tmp1839 = ((frost$collections$CollectionView*) $tmp1838)->$class->itable;
while ($tmp1839->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1839 = $tmp1839->next;
}
$fn1841 $tmp1840 = $tmp1839->methods[0];
frost$core$Int $tmp1842 = $tmp1840(((frost$collections$CollectionView*) $tmp1838));
frost$core$Int $tmp1843 = (frost$core$Int) {1u};
int64_t $tmp1844 = $tmp1842.value;
int64_t $tmp1845 = $tmp1843.value;
int64_t $tmp1846 = $tmp1844 - $tmp1845;
frost$core$Int $tmp1847 = (frost$core$Int) {$tmp1846};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
int64_t $tmp1848 = $tmp1774.value;
int64_t $tmp1849 = $tmp1847.value;
bool $tmp1850 = $tmp1848 != $tmp1849;
frost$core$Bit $tmp1851 = (frost$core$Bit) {$tmp1850};
bool $tmp1852 = $tmp1851.value;
if ($tmp1852) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:241
org$frostlang$frostc$Type* $tmp1853 = *(&local0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:241:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1855 $tmp1854 = ($fn1855) ((frost$core$Object*) $tmp1853)->$class->vtable[0];
frost$core$String* $tmp1856 = $tmp1854(((frost$core$Object*) $tmp1853));
frost$core$String* $tmp1857 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1858, $tmp1856);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
frost$core$String* $tmp1859 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1857, &$s1860);
frost$core$String* $tmp1861 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1859, &$s1862);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1861);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:243
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1863 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1864 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1865 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:245
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1866 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1866);
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
frost$collections$Array* $tmp1867 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
*(&local14) = $tmp1866;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:246
frost$core$Int $tmp1868 = (frost$core$Int) {0u};
ITable* $tmp1869 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp1869->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1869 = $tmp1869->next;
}
$fn1871 $tmp1870 = $tmp1869->methods[0];
frost$core$Int $tmp1872 = $tmp1870(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp1873 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1874 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1868, $tmp1872, $tmp1873);
frost$core$Int $tmp1875 = $tmp1874.min;
*(&local15) = $tmp1875;
frost$core$Int $tmp1876 = $tmp1874.max;
frost$core$Bit $tmp1877 = $tmp1874.inclusive;
bool $tmp1878 = $tmp1877.value;
frost$core$Int $tmp1879 = (frost$core$Int) {1u};
if ($tmp1878) goto block43; else goto block44;
block43:;
int64_t $tmp1880 = $tmp1875.value;
int64_t $tmp1881 = $tmp1876.value;
bool $tmp1882 = $tmp1880 <= $tmp1881;
frost$core$Bit $tmp1883 = (frost$core$Bit) {$tmp1882};
bool $tmp1884 = $tmp1883.value;
if ($tmp1884) goto block40; else goto block41;
block44:;
int64_t $tmp1885 = $tmp1875.value;
int64_t $tmp1886 = $tmp1876.value;
bool $tmp1887 = $tmp1885 < $tmp1886;
frost$core$Bit $tmp1888 = (frost$core$Bit) {$tmp1887};
bool $tmp1889 = $tmp1888.value;
if ($tmp1889) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:247
frost$core$Int $tmp1890 = *(&local15);
frost$core$Object* $tmp1891 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(param2, $tmp1890);
frost$core$Int* $tmp1892 = &((org$frostlang$frostc$ASTNode*) $tmp1891)->$rawValue;
frost$core$Int $tmp1893 = *$tmp1892;
frost$core$Int $tmp1894 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:248:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1895 = $tmp1893.value;
int64_t $tmp1896 = $tmp1894.value;
bool $tmp1897 = $tmp1895 == $tmp1896;
frost$core$Bit $tmp1898 = (frost$core$Bit) {$tmp1897};
bool $tmp1899 = $tmp1898.value;
if ($tmp1899) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp1900 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$ASTNode*) $tmp1891)->$data + 0);
org$frostlang$frostc$Position $tmp1901 = *$tmp1900;
*(&local16) = $tmp1901;
frost$core$String** $tmp1902 = (frost$core$String**) (((org$frostlang$frostc$ASTNode*) $tmp1891)->$data + 24);
frost$core$String* $tmp1903 = *$tmp1902;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
frost$core$String* $tmp1904 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
*(&local17) = $tmp1903;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:249
frost$collections$Array* $tmp1905 = *(&local14);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1906 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1907 = (frost$core$Int) {34u};
org$frostlang$frostc$Position $tmp1908 = *(&local16);
frost$core$String* $tmp1909 = *(&local17);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1910 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1911 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1912 = *(&local16);
org$frostlang$frostc$Type* $tmp1913 = *(&local4);
frost$core$Int $tmp1914 = *(&local15);
// begin inline call to function org.frostlang.frostc.Type.parameterType(i:frost.core.Int):org.frostlang.frostc.Type from Closure.frost:251:90
org$frostlang$frostc$Type$Kind* $tmp1915 = &$tmp1913->typeKind;
org$frostlang$frostc$Type$Kind $tmp1916 = *$tmp1915;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1917;
$tmp1917 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1917->value = $tmp1916;
frost$core$Int $tmp1918 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:426:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1919 = &(&local19)->$rawValue;
*$tmp1919 = $tmp1918;
org$frostlang$frostc$Type$Kind $tmp1920 = *(&local19);
*(&local18) = $tmp1920;
org$frostlang$frostc$Type$Kind $tmp1921 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1922;
$tmp1922 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1922->value = $tmp1921;
ITable* $tmp1923 = ((frost$core$Equatable*) $tmp1917)->$class->itable;
while ($tmp1923->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1923 = $tmp1923->next;
}
$fn1925 $tmp1924 = $tmp1923->methods[0];
frost$core$Bit $tmp1926 = $tmp1924(((frost$core$Equatable*) $tmp1917), ((frost$core$Equatable*) $tmp1922));
bool $tmp1927 = $tmp1926.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1922)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1917)));
if ($tmp1927) goto block53; else goto block56;
block56:;
org$frostlang$frostc$Type$Kind* $tmp1928 = &$tmp1913->typeKind;
org$frostlang$frostc$Type$Kind $tmp1929 = *$tmp1928;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1930;
$tmp1930 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1930->value = $tmp1929;
frost$core$Int $tmp1931 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:426:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1932 = &(&local21)->$rawValue;
*$tmp1932 = $tmp1931;
org$frostlang$frostc$Type$Kind $tmp1933 = *(&local21);
*(&local20) = $tmp1933;
org$frostlang$frostc$Type$Kind $tmp1934 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1935;
$tmp1935 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1935->value = $tmp1934;
ITable* $tmp1936 = ((frost$core$Equatable*) $tmp1930)->$class->itable;
while ($tmp1936->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1936 = $tmp1936->next;
}
$fn1938 $tmp1937 = $tmp1936->methods[0];
frost$core$Bit $tmp1939 = $tmp1937(((frost$core$Equatable*) $tmp1930), ((frost$core$Equatable*) $tmp1935));
bool $tmp1940 = $tmp1939.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1935)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1930)));
if ($tmp1940) goto block53; else goto block55;
block55:;
org$frostlang$frostc$Type$Kind* $tmp1941 = &$tmp1913->typeKind;
org$frostlang$frostc$Type$Kind $tmp1942 = *$tmp1941;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1943;
$tmp1943 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1943->value = $tmp1942;
frost$core$Int $tmp1944 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:426:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1945 = &(&local23)->$rawValue;
*$tmp1945 = $tmp1944;
org$frostlang$frostc$Type$Kind $tmp1946 = *(&local23);
*(&local22) = $tmp1946;
org$frostlang$frostc$Type$Kind $tmp1947 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1948;
$tmp1948 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1948->value = $tmp1947;
ITable* $tmp1949 = ((frost$core$Equatable*) $tmp1943)->$class->itable;
while ($tmp1949->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1949 = $tmp1949->next;
}
$fn1951 $tmp1950 = $tmp1949->methods[0];
frost$core$Bit $tmp1952 = $tmp1950(((frost$core$Equatable*) $tmp1943), ((frost$core$Equatable*) $tmp1948));
bool $tmp1953 = $tmp1952.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1948)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1943)));
if ($tmp1953) goto block53; else goto block54;
block54:;
org$frostlang$frostc$Type$Kind* $tmp1954 = &$tmp1913->typeKind;
org$frostlang$frostc$Type$Kind $tmp1955 = *$tmp1954;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1956;
$tmp1956 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1956->value = $tmp1955;
frost$core$Int $tmp1957 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:427:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1958 = &(&local25)->$rawValue;
*$tmp1958 = $tmp1957;
org$frostlang$frostc$Type$Kind $tmp1959 = *(&local25);
*(&local24) = $tmp1959;
org$frostlang$frostc$Type$Kind $tmp1960 = *(&local24);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1961;
$tmp1961 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1961->value = $tmp1960;
ITable* $tmp1962 = ((frost$core$Equatable*) $tmp1956)->$class->itable;
while ($tmp1962->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1962 = $tmp1962->next;
}
$fn1964 $tmp1963 = $tmp1962->methods[0];
frost$core$Bit $tmp1965 = $tmp1963(((frost$core$Equatable*) $tmp1956), ((frost$core$Equatable*) $tmp1961));
bool $tmp1966 = $tmp1965.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1961)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1956)));
if ($tmp1966) goto block53; else goto block51;
block53:;
frost$core$Int $tmp1967 = (frost$core$Int) {0u};
int64_t $tmp1968 = $tmp1914.value;
int64_t $tmp1969 = $tmp1967.value;
bool $tmp1970 = $tmp1968 >= $tmp1969;
frost$core$Bit $tmp1971 = (frost$core$Bit) {$tmp1970};
bool $tmp1972 = $tmp1971.value;
if ($tmp1972) goto block52; else goto block51;
block52:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:427:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1973 = &$tmp1913->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1974 = *$tmp1973;
frost$core$Bit $tmp1975 = (frost$core$Bit) {$tmp1974 != NULL};
bool $tmp1976 = $tmp1975.value;
if ($tmp1976) goto block62; else goto block63;
block63:;
frost$core$Int $tmp1977 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1978, $tmp1977);
abort(); // unreachable
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1979 = &$tmp1913->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1980 = *$tmp1979;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
ITable* $tmp1981 = ((frost$collections$CollectionView*) $tmp1980)->$class->itable;
while ($tmp1981->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1981 = $tmp1981->next;
}
$fn1983 $tmp1982 = $tmp1981->methods[0];
frost$core$Int $tmp1984 = $tmp1982(((frost$collections$CollectionView*) $tmp1980));
frost$core$Int $tmp1985 = (frost$core$Int) {1u};
int64_t $tmp1986 = $tmp1984.value;
int64_t $tmp1987 = $tmp1985.value;
int64_t $tmp1988 = $tmp1986 - $tmp1987;
frost$core$Int $tmp1989 = (frost$core$Int) {$tmp1988};
int64_t $tmp1990 = $tmp1914.value;
int64_t $tmp1991 = $tmp1989.value;
bool $tmp1992 = $tmp1990 < $tmp1991;
frost$core$Bit $tmp1993 = (frost$core$Bit) {$tmp1992};
bool $tmp1994 = $tmp1993.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
if ($tmp1994) goto block50; else goto block51;
block51:;
frost$core$Int $tmp1995 = (frost$core$Int) {428u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1996, $tmp1995, &$s1997);
abort(); // unreachable
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:429
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:429:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1998 = &$tmp1913->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1999 = *$tmp1998;
frost$core$Bit $tmp2000 = (frost$core$Bit) {$tmp1999 != NULL};
bool $tmp2001 = $tmp2000.value;
if ($tmp2001) goto block65; else goto block66;
block66:;
frost$core$Int $tmp2002 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2003, $tmp2002);
abort(); // unreachable
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2004 = &$tmp1913->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2005 = *$tmp2004;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
frost$core$Object* $tmp2006 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2005, $tmp1914);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2006)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2006);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:251:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3685
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2007 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2008 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3685:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
org$frostlang$frostc$Type** $tmp2009 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp2010 = *$tmp2009;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2011 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2012 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2011, $tmp2012);
frost$collections$Array$add$frost$collections$Array$T($tmp2011, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2006)));
org$frostlang$frostc$Type* $tmp2013 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2010, ((frost$collections$ListView*) $tmp2011));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp2007, $tmp2008, ((org$frostlang$frostc$Type*) $tmp2006), $tmp2013);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1910, $tmp1911, $tmp1912, $tmp2007);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp1906, $tmp1907, $tmp1908, $tmp1909, $tmp1910);
frost$collections$Array$add$frost$collections$Array$T($tmp1905, ((frost$core$Object*) $tmp1906));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2006)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
frost$core$String* $tmp2014 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2014));
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1891);
frost$core$Int $tmp2015 = *(&local15);
int64_t $tmp2016 = $tmp1876.value;
int64_t $tmp2017 = $tmp2015.value;
int64_t $tmp2018 = $tmp2016 - $tmp2017;
frost$core$Int $tmp2019 = (frost$core$Int) {$tmp2018};
if ($tmp1878) goto block70; else goto block71;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:254
frost$core$Int $tmp2020 = (frost$core$Int) {254u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2021, $tmp2020);
abort(); // unreachable
block70:;
int64_t $tmp2022 = $tmp2019.value;
int64_t $tmp2023 = $tmp1879.value;
bool $tmp2024 = $tmp2022 >= $tmp2023;
frost$core$Bit $tmp2025 = (frost$core$Bit) {$tmp2024};
bool $tmp2026 = $tmp2025.value;
if ($tmp2026) goto block69; else goto block41;
block71:;
int64_t $tmp2027 = $tmp2019.value;
int64_t $tmp2028 = $tmp1879.value;
bool $tmp2029 = $tmp2027 > $tmp2028;
frost$core$Bit $tmp2030 = (frost$core$Bit) {$tmp2029};
bool $tmp2031 = $tmp2030.value;
if ($tmp2031) goto block69; else goto block41;
block69:;
int64_t $tmp2032 = $tmp2015.value;
int64_t $tmp2033 = $tmp1879.value;
int64_t $tmp2034 = $tmp2032 + $tmp2033;
frost$core$Int $tmp2035 = (frost$core$Int) {$tmp2034};
*(&local15) = $tmp2035;
goto block40;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:258
org$frostlang$frostc$Type* $tmp2036 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:258:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp2037 = &$tmp2036->typeKind;
org$frostlang$frostc$Type$Kind $tmp2038 = *$tmp2037;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2039;
$tmp2039 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2039->value = $tmp2038;
frost$core$Int $tmp2040 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2041 = &(&local28)->$rawValue;
*$tmp2041 = $tmp2040;
org$frostlang$frostc$Type$Kind $tmp2042 = *(&local28);
*(&local27) = $tmp2042;
org$frostlang$frostc$Type$Kind $tmp2043 = *(&local27);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2044;
$tmp2044 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2044->value = $tmp2043;
ITable* $tmp2045 = ((frost$core$Equatable*) $tmp2039)->$class->itable;
while ($tmp2045->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2045 = $tmp2045->next;
}
$fn2047 $tmp2046 = $tmp2045->methods[1];
frost$core$Bit $tmp2048 = $tmp2046(((frost$core$Equatable*) $tmp2039), ((frost$core$Equatable*) $tmp2044));
bool $tmp2049 = $tmp2048.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2044)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2039)));
if ($tmp2049) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
*(&local26) = $tmp2036;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
goto block72;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2050 = &$tmp2036->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2051 = *$tmp2050;
frost$core$Bit $tmp2052 = (frost$core$Bit) {$tmp2051 != NULL};
bool $tmp2053 = $tmp2052.value;
if ($tmp2053) goto block77; else goto block78;
block78:;
frost$core$Int $tmp2054 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2055, $tmp2054);
abort(); // unreachable
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2056 = &$tmp2036->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2057 = *$tmp2056;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
frost$core$Int $tmp2058 = (frost$core$Int) {0u};
frost$core$Object* $tmp2059 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2057, $tmp2058);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2059)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2059);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
*(&local26) = ((org$frostlang$frostc$Type*) $tmp2059);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2059)));
goto block72;
block72:;
org$frostlang$frostc$Type* $tmp2060 = *(&local26);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:258:54
org$frostlang$frostc$Type$Kind* $tmp2061 = &$tmp2060->typeKind;
org$frostlang$frostc$Type$Kind $tmp2062 = *$tmp2061;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2063;
$tmp2063 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2063->value = $tmp2062;
frost$core$Int $tmp2064 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2065 = &(&local30)->$rawValue;
*$tmp2065 = $tmp2064;
org$frostlang$frostc$Type$Kind $tmp2066 = *(&local30);
*(&local29) = $tmp2066;
org$frostlang$frostc$Type$Kind $tmp2067 = *(&local29);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2068;
$tmp2068 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2068->value = $tmp2067;
ITable* $tmp2069 = ((frost$core$Equatable*) $tmp2063)->$class->itable;
while ($tmp2069->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2069 = $tmp2069->next;
}
$fn2071 $tmp2070 = $tmp2069->methods[0];
frost$core$Bit $tmp2072 = $tmp2070(((frost$core$Equatable*) $tmp2063), ((frost$core$Equatable*) $tmp2068));
bool $tmp2073 = $tmp2072.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2068)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2063)));
if ($tmp2073) goto block80; else goto block84;
block84:;
org$frostlang$frostc$Type$Kind* $tmp2074 = &$tmp2060->typeKind;
org$frostlang$frostc$Type$Kind $tmp2075 = *$tmp2074;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2076;
$tmp2076 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2076->value = $tmp2075;
frost$core$Int $tmp2077 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2078 = &(&local32)->$rawValue;
*$tmp2078 = $tmp2077;
org$frostlang$frostc$Type$Kind $tmp2079 = *(&local32);
*(&local31) = $tmp2079;
org$frostlang$frostc$Type$Kind $tmp2080 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2081;
$tmp2081 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2081->value = $tmp2080;
ITable* $tmp2082 = ((frost$core$Equatable*) $tmp2076)->$class->itable;
while ($tmp2082->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2082 = $tmp2082->next;
}
$fn2084 $tmp2083 = $tmp2082->methods[0];
frost$core$Bit $tmp2085 = $tmp2083(((frost$core$Equatable*) $tmp2076), ((frost$core$Equatable*) $tmp2081));
bool $tmp2086 = $tmp2085.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2081)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2076)));
if ($tmp2086) goto block80; else goto block83;
block83:;
org$frostlang$frostc$Type$Kind* $tmp2087 = &$tmp2060->typeKind;
org$frostlang$frostc$Type$Kind $tmp2088 = *$tmp2087;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2089;
$tmp2089 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2089->value = $tmp2088;
frost$core$Int $tmp2090 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2091 = &(&local34)->$rawValue;
*$tmp2091 = $tmp2090;
org$frostlang$frostc$Type$Kind $tmp2092 = *(&local34);
*(&local33) = $tmp2092;
org$frostlang$frostc$Type$Kind $tmp2093 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2094;
$tmp2094 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2094->value = $tmp2093;
ITable* $tmp2095 = ((frost$core$Equatable*) $tmp2089)->$class->itable;
while ($tmp2095->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2095 = $tmp2095->next;
}
$fn2097 $tmp2096 = $tmp2095->methods[0];
frost$core$Bit $tmp2098 = $tmp2096(((frost$core$Equatable*) $tmp2089), ((frost$core$Equatable*) $tmp2094));
bool $tmp2099 = $tmp2098.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2094)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2089)));
if ($tmp2099) goto block80; else goto block82;
block82:;
org$frostlang$frostc$Type$Kind* $tmp2100 = &$tmp2060->typeKind;
org$frostlang$frostc$Type$Kind $tmp2101 = *$tmp2100;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2102;
$tmp2102 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2102->value = $tmp2101;
frost$core$Int $tmp2103 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2104 = &(&local36)->$rawValue;
*$tmp2104 = $tmp2103;
org$frostlang$frostc$Type$Kind $tmp2105 = *(&local36);
*(&local35) = $tmp2105;
org$frostlang$frostc$Type$Kind $tmp2106 = *(&local35);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2107;
$tmp2107 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2107->value = $tmp2106;
ITable* $tmp2108 = ((frost$core$Equatable*) $tmp2102)->$class->itable;
while ($tmp2108->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2108 = $tmp2108->next;
}
$fn2110 $tmp2109 = $tmp2108->methods[0];
frost$core$Bit $tmp2111 = $tmp2109(((frost$core$Equatable*) $tmp2102), ((frost$core$Equatable*) $tmp2107));
bool $tmp2112 = $tmp2111.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2107)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2102)));
if ($tmp2112) goto block80; else goto block81;
block81:;
frost$core$Int $tmp2113 = (frost$core$Int) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2114, $tmp2113, &$s2115);
abort(); // unreachable
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2116 = &$tmp2060->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2117 = *$tmp2116;
frost$core$Bit $tmp2118 = (frost$core$Bit) {$tmp2117 != NULL};
bool $tmp2119 = $tmp2118.value;
if ($tmp2119) goto block90; else goto block91;
block91:;
frost$core$Int $tmp2120 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2121, $tmp2120);
abort(); // unreachable
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2122 = &$tmp2060->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2123 = *$tmp2122;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2124 = &$tmp2060->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2125 = *$tmp2124;
frost$core$Bit $tmp2126 = (frost$core$Bit) {$tmp2125 != NULL};
bool $tmp2127 = $tmp2126.value;
if ($tmp2127) goto block93; else goto block94;
block94:;
frost$core$Int $tmp2128 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2129, $tmp2128);
abort(); // unreachable
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2130 = &$tmp2060->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2131 = *$tmp2130;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
ITable* $tmp2132 = ((frost$collections$CollectionView*) $tmp2131)->$class->itable;
while ($tmp2132->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2132 = $tmp2132->next;
}
$fn2134 $tmp2133 = $tmp2132->methods[0];
frost$core$Int $tmp2135 = $tmp2133(((frost$collections$CollectionView*) $tmp2131));
frost$core$Int $tmp2136 = (frost$core$Int) {1u};
int64_t $tmp2137 = $tmp2135.value;
int64_t $tmp2138 = $tmp2136.value;
int64_t $tmp2139 = $tmp2137 - $tmp2138;
frost$core$Int $tmp2140 = (frost$core$Int) {$tmp2139};
frost$core$Object* $tmp2141 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2123, $tmp2140);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2141)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
*(&local37) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2141)));
org$frostlang$frostc$Type* $tmp2142 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2142));
*(&local37) = ((org$frostlang$frostc$Type*) $tmp2141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2141)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:259
frost$core$Int $tmp2143 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:259:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2144 = &(&local39)->$rawValue;
*$tmp2144 = $tmp2143;
org$frostlang$frostc$MethodDecl$Kind $tmp2145 = *(&local39);
*(&local38) = $tmp2145;
org$frostlang$frostc$MethodDecl$Kind $tmp2146 = *(&local38);
frost$collections$Array* $tmp2147 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp2148 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2147);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2149 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2150 = (frost$core$Int) {26u};
org$frostlang$frostc$Type* $tmp2151 = *(&local37);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:261:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3685
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2152 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2153 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3685:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
org$frostlang$frostc$Type** $tmp2154 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp2155 = *$tmp2154;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2156 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2157 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2156, $tmp2157);
frost$collections$Array$add$frost$collections$Array$T($tmp2156, ((frost$core$Object*) $tmp2151));
org$frostlang$frostc$Type* $tmp2158 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2155, ((frost$collections$ListView*) $tmp2156));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp2152, $tmp2153, $tmp2151, $tmp2158);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2149, $tmp2150, param1, $tmp2152);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2159 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2160 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2159, $tmp2160);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2161 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2162 = (frost$core$Int) {38u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp2161, $tmp2162, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp2159, ((frost$core$Object*) $tmp2161));
org$frostlang$frostc$FixedArray* $tmp2163 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2159);
org$frostlang$frostc$IR$Value* $tmp2164 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2146, $tmp2148, $tmp2149, $tmp2163, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
org$frostlang$frostc$Type* $tmp2165 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2165));
*(&local37) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2166 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2167 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2167));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2168 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2169 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2170 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp2164;
block12:;
org$frostlang$frostc$Type* $tmp2171 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2171));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2172 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2173 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2173));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:267
frost$collections$IdentityMap** $tmp2174 = &param0->lambdaTypes;
frost$collections$IdentityMap* $tmp2175 = *$tmp2174;
frost$core$Object* $tmp2176 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp2175, ((frost$core$Object*) param3));
*(&local40) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp2176)));
frost$collections$HashSet* $tmp2177 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2177));
*(&local40) = ((frost$collections$HashSet*) $tmp2176);
frost$core$Frost$unref$frost$core$Object$Q($tmp2176);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:268
frost$collections$HashSet* $tmp2178 = *(&local40);
frost$core$Bit $tmp2179 = (frost$core$Bit) {$tmp2178 != NULL};
bool $tmp2180 = $tmp2179.value;
if ($tmp2180) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:269
frost$collections$HashSet* $tmp2181 = *(&local40);
ITable* $tmp2182 = ((frost$collections$CollectionView*) $tmp2181)->$class->itable;
while ($tmp2182->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2182 = $tmp2182->next;
}
$fn2184 $tmp2183 = $tmp2182->methods[0];
frost$core$Int $tmp2185 = $tmp2183(((frost$collections$CollectionView*) $tmp2181));
frost$core$Int $tmp2186 = (frost$core$Int) {1u};
int64_t $tmp2187 = $tmp2185.value;
int64_t $tmp2188 = $tmp2186.value;
bool $tmp2189 = $tmp2187 > $tmp2188;
frost$core$Bit $tmp2190 = (frost$core$Bit) {$tmp2189};
bool $tmp2191 = $tmp2190.value;
if ($tmp2191) goto block100; else goto block102;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:270
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2192 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$HashSet* $tmp2193 = *(&local40);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp2192, ((frost$collections$CollectionView*) $tmp2193));
*(&local41) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
frost$collections$Array* $tmp2194 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
*(&local41) = $tmp2192;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:271
frost$collections$Array* $tmp2195 = *(&local41);
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp2197 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Closure.frost:271:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp2198 = &$tmp2197->pointer;
*$tmp2198 = ((frost$core$Int8*) org$frostlang$frostc$expression$Closure$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp2199 = &$tmp2197->target;
frost$core$Immutable* $tmp2200 = *$tmp2199;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
frost$core$Immutable** $tmp2201 = &$tmp2197->target;
*$tmp2201 = ((frost$core$Immutable*) NULL);
ITable* $tmp2202 = ((frost$collections$ListView*) $tmp2195)->$class->itable;
while ($tmp2202->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2202 = $tmp2202->next;
}
$fn2204 $tmp2203 = $tmp2202->methods[15];
frost$collections$ListView* $tmp2205 = $tmp2203(((frost$collections$ListView*) $tmp2195), ((frost$core$MutableMethod*) $tmp2197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:272
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2206 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2206, &$s2207);
*(&local42) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2206));
frost$core$MutableString* $tmp2208 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
*(&local42) = $tmp2206;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2206));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:273
frost$threads$MessageQueue** $tmp2209 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2210 = *$tmp2209;
*(&local43) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2210));
frost$threads$MessageQueue* $tmp2211 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
*(&local43) = $tmp2210;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:274
frost$collections$Array* $tmp2212 = *(&local41);
ITable* $tmp2213 = ((frost$collections$Iterable*) $tmp2212)->$class->itable;
while ($tmp2213->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2213 = $tmp2213->next;
}
$fn2215 $tmp2214 = $tmp2213->methods[0];
frost$collections$Iterator* $tmp2216 = $tmp2214(((frost$collections$Iterable*) $tmp2212));
goto block104;
block104:;
ITable* $tmp2217 = $tmp2216->$class->itable;
while ($tmp2217->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2217 = $tmp2217->next;
}
$fn2219 $tmp2218 = $tmp2217->methods[0];
frost$core$Bit $tmp2220 = $tmp2218($tmp2216);
bool $tmp2221 = $tmp2220.value;
if ($tmp2221) goto block106; else goto block105;
block105:;
*(&local44) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp2222 = $tmp2216->$class->itable;
while ($tmp2222->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2222 = $tmp2222->next;
}
$fn2224 $tmp2223 = $tmp2222->methods[1];
frost$core$Object* $tmp2225 = $tmp2223($tmp2216);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2225)));
org$frostlang$frostc$Type* $tmp2226 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
*(&local44) = ((org$frostlang$frostc$Type*) $tmp2225);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:275
frost$core$MutableString* $tmp2227 = *(&local42);
org$frostlang$frostc$Type* $tmp2228 = *(&local44);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:275:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2230 $tmp2229 = ($fn2230) ((frost$core$Object*) $tmp2228)->$class->vtable[0];
frost$core$String* $tmp2231 = $tmp2229(((frost$core$Object*) $tmp2228));
frost$core$String* $tmp2232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2233, $tmp2231);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
frost$core$String* $tmp2234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2232, &$s2235);
frost$core$MutableString$append$frost$core$String($tmp2227, $tmp2234);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:276
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp2236 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp2236);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
frost$threads$MessageQueue** $tmp2237 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2238 = *$tmp2237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2238));
frost$threads$MessageQueue** $tmp2239 = &param0->errorQueue;
*$tmp2239 = $tmp2236;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:277
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2240 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2241 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp2242 = *(&local44);
frost$core$Bit $tmp2243 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2240, $tmp2241, $tmp2242, $tmp2243);
org$frostlang$frostc$IR$Value* $tmp2244 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp2240);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:279
frost$threads$MessageQueue** $tmp2245 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2246 = *$tmp2245;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Closure.frost:279:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp2247 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp2248 = &$tmp2246->lock;
frost$threads$Lock* $tmp2249 = *$tmp2248;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp2247, $tmp2249);
*(&local45) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
frost$threads$ScopedLock* $tmp2250 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2250));
*(&local45) = $tmp2247;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp2251 = &$tmp2246->count;
frost$core$Int $tmp2252 = *$tmp2251;
frost$threads$ScopedLock* $tmp2253 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
*(&local45) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp2254 = (frost$core$Int) {0u};
int64_t $tmp2255 = $tmp2252.value;
int64_t $tmp2256 = $tmp2254.value;
bool $tmp2257 = $tmp2255 > $tmp2256;
frost$core$Bit $tmp2258 = (frost$core$Bit) {$tmp2257};
bool $tmp2259 = $tmp2258.value;
if ($tmp2259) goto block110; else goto block111;
block111:;
frost$core$Int $tmp2260 = (frost$core$Int) {279u};
org$frostlang$frostc$Position$wrapper* $tmp2261;
$tmp2261 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp2261->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:280:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2263 $tmp2262 = ($fn2263) ((frost$core$Object*) $tmp2261)->$class->vtable[0];
frost$core$String* $tmp2264 = $tmp2262(((frost$core$Object*) $tmp2261));
frost$core$String* $tmp2265 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2266, $tmp2264);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
frost$core$String* $tmp2267 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2265, &$s2268);
org$frostlang$frostc$Type* $tmp2269 = *(&local44);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:281:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2271 $tmp2270 = ($fn2271) ((frost$core$Object*) $tmp2269)->$class->vtable[0];
frost$core$String* $tmp2272 = $tmp2270(((frost$core$Object*) $tmp2269));
frost$core$String* $tmp2273 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2274, $tmp2272);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
frost$core$String* $tmp2275 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2273, &$s2276);
frost$core$String* $tmp2277 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2267, $tmp2275);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2278, $tmp2260, $tmp2277);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
abort(); // unreachable
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:282
goto block114;
block114:;
frost$threads$MessageQueue** $tmp2279 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2280 = *$tmp2279;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Closure.frost:282:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp2281 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp2282 = &$tmp2280->lock;
frost$threads$Lock* $tmp2283 = *$tmp2282;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp2281, $tmp2283);
*(&local46) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2281));
frost$threads$ScopedLock* $tmp2284 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2284));
*(&local46) = $tmp2281;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2281));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp2285 = &$tmp2280->count;
frost$core$Int $tmp2286 = *$tmp2285;
frost$threads$ScopedLock* $tmp2287 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
*(&local46) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp2288 = (frost$core$Int) {0u};
int64_t $tmp2289 = $tmp2286.value;
int64_t $tmp2290 = $tmp2288.value;
bool $tmp2291 = $tmp2289 > $tmp2290;
frost$core$Bit $tmp2292 = (frost$core$Bit) {$tmp2291};
bool $tmp2293 = $tmp2292.value;
if ($tmp2293) goto block115; else goto block116;
block115:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:283
frost$threads$MessageQueue** $tmp2294 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2295 = *$tmp2294;
frost$core$Immutable* $tmp2296 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp2295);
frost$core$Int* $tmp2297 = &((org$frostlang$frostc$Compiler$Message*) $tmp2296)->$rawValue;
frost$core$Int $tmp2298 = *$tmp2297;
frost$core$Int $tmp2299 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:284:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2300 = $tmp2298.value;
int64_t $tmp2301 = $tmp2299.value;
bool $tmp2302 = $tmp2300 == $tmp2301;
frost$core$Bit $tmp2303 = (frost$core$Bit) {$tmp2302};
bool $tmp2304 = $tmp2303.value;
if ($tmp2304) goto block120; else goto block121;
block120:;
frost$core$String** $tmp2305 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2296)->$data + 0);
frost$core$String* $tmp2306 = *$tmp2305;
frost$core$Int* $tmp2307 = (frost$core$Int*) (((org$frostlang$frostc$Compiler$Message*) $tmp2296)->$data + 8);
frost$core$Int $tmp2308 = *$tmp2307;
frost$core$Int* $tmp2309 = (frost$core$Int*) (((org$frostlang$frostc$Compiler$Message*) $tmp2296)->$data + 16);
frost$core$Int $tmp2310 = *$tmp2309;
frost$core$String** $tmp2311 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2296)->$data + 24);
frost$core$String* $tmp2312 = *$tmp2311;
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2312));
frost$core$String* $tmp2313 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
*(&local47) = $tmp2312;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:285
frost$core$MutableString* $tmp2314 = *(&local42);
frost$core$String* $tmp2315 = *(&local47);
frost$core$String* $tmp2316 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2317, $tmp2315);
frost$core$String* $tmp2318 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2316, &$s2319);
frost$core$MutableString$append$frost$core$String($tmp2314, $tmp2318);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
frost$core$String* $tmp2320 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2320));
*(&local47) = ((frost$core$String*) NULL);
goto block119;
block121:;
frost$core$Int $tmp2321 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:287:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2322 = $tmp2298.value;
int64_t $tmp2323 = $tmp2321.value;
bool $tmp2324 = $tmp2322 == $tmp2323;
frost$core$Bit $tmp2325 = (frost$core$Bit) {$tmp2324};
bool $tmp2326 = $tmp2325.value;
if ($tmp2326) goto block123; else goto block119;
block123:;
frost$core$String** $tmp2327 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2296)->$data + 0);
frost$core$String* $tmp2328 = *$tmp2327;
frost$core$Int* $tmp2329 = (frost$core$Int*) (((org$frostlang$frostc$Compiler$Message*) $tmp2296)->$data + 8);
frost$core$Int $tmp2330 = *$tmp2329;
frost$core$Int* $tmp2331 = (frost$core$Int*) (((org$frostlang$frostc$Compiler$Message*) $tmp2296)->$data + 16);
frost$core$Int $tmp2332 = *$tmp2331;
frost$core$String** $tmp2333 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2296)->$data + 24);
frost$core$String* $tmp2334 = *$tmp2333;
*(&local48) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2334));
frost$core$String* $tmp2335 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2335));
*(&local48) = $tmp2334;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:288
frost$core$MutableString* $tmp2336 = *(&local42);
frost$core$String* $tmp2337 = *(&local48);
frost$core$String* $tmp2338 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2339, $tmp2337);
frost$core$String* $tmp2340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2338, &$s2341);
frost$core$MutableString$append$frost$core$String($tmp2336, $tmp2340);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
frost$core$String* $tmp2342 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
*(&local48) = ((frost$core$String*) NULL);
goto block119;
block119:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2296));
goto block114;
block116:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2225);
org$frostlang$frostc$Type* $tmp2343 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2343));
*(&local44) = ((org$frostlang$frostc$Type*) NULL);
goto block104;
block106:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:293
frost$threads$MessageQueue* $tmp2344 = *(&local43);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2344));
frost$threads$MessageQueue** $tmp2345 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2346 = *$tmp2345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
frost$threads$MessageQueue** $tmp2347 = &param0->errorQueue;
*$tmp2347 = $tmp2344;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:294
frost$core$MutableString* $tmp2348 = *(&local42);
frost$core$String* $tmp2349 = frost$core$MutableString$finish$R$frost$core$String($tmp2348);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2349);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2349));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:295
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$threads$MessageQueue* $tmp2350 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2350));
*(&local43) = ((frost$threads$MessageQueue*) NULL);
frost$core$MutableString* $tmp2351 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2351));
*(&local42) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp2352 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2352));
*(&local41) = ((frost$collections$Array*) NULL);
frost$collections$HashSet* $tmp2353 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2353));
*(&local40) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block102:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:298
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2354 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2355 = (frost$core$Int) {3u};
frost$collections$HashSet* $tmp2356 = *(&local40);
ITable* $tmp2357 = ((frost$collections$Iterable*) $tmp2356)->$class->itable;
while ($tmp2357->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2357 = $tmp2357->next;
}
$fn2359 $tmp2358 = $tmp2357->methods[0];
frost$collections$Iterator* $tmp2360 = $tmp2358(((frost$collections$Iterable*) $tmp2356));
ITable* $tmp2361 = $tmp2360->$class->itable;
while ($tmp2361->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2361 = $tmp2361->next;
}
$fn2363 $tmp2362 = $tmp2361->methods[1];
frost$core$Object* $tmp2364 = $tmp2362($tmp2360);
frost$core$Bit $tmp2365 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2354, $tmp2355, ((org$frostlang$frostc$Type*) $tmp2364), $tmp2365);
org$frostlang$frostc$IR$Value* $tmp2366 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp2354);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2366));
frost$core$Frost$unref$frost$core$Object$Q($tmp2364);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2354));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:300
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp2367 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2367));
*(&local40) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block101:;
goto block99;
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:303
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s2368);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:305
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp2369 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2369));
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
frost$core$Int* $tmp2370 = &param0->closureCount;
frost$core$Int $tmp2371 = *$tmp2370;
frost$core$Int $tmp2372 = (frost$core$Int) {1u};
int64_t $tmp2373 = $tmp2371.value;
int64_t $tmp2374 = $tmp2372.value;
int64_t $tmp2375 = $tmp2373 + $tmp2374;
frost$core$Int $tmp2376 = (frost$core$Int) {$tmp2375};
frost$core$Int* $tmp2377 = &param0->closureCount;
*$tmp2377 = $tmp2376;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:313
frost$core$Int* $tmp2378 = &param0->closureCount;
frost$core$Int $tmp2379 = *$tmp2378;
frost$core$Int$wrapper* $tmp2380;
$tmp2380 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp2380->value = $tmp2379;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:313:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2382 $tmp2381 = ($fn2382) ((frost$core$Object*) $tmp2380)->$class->vtable[0];
frost$core$String* $tmp2383 = $tmp2381(((frost$core$Object*) $tmp2380));
frost$core$String* $tmp2384 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2385, $tmp2383);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2383));
frost$core$String* $tmp2386 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2384, &$s2387);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
frost$core$String* $tmp2388 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2388));
*(&local0) = $tmp2386;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2380));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:314
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2389 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2389);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2389));
frost$collections$Array* $tmp2390 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
*(&local1) = $tmp2389;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2389));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:315
ITable* $tmp2391 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp2391->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2391 = $tmp2391->next;
}
$fn2393 $tmp2392 = $tmp2391->methods[0];
frost$collections$Iterator* $tmp2394 = $tmp2392(((frost$collections$Iterable*) param3));
goto block2;
block2:;
ITable* $tmp2395 = $tmp2394->$class->itable;
while ($tmp2395->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2395 = $tmp2395->next;
}
$fn2397 $tmp2396 = $tmp2395->methods[0];
frost$core$Bit $tmp2398 = $tmp2396($tmp2394);
bool $tmp2399 = $tmp2398.value;
if ($tmp2399) goto block4; else goto block3;
block3:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2400 = $tmp2394->$class->itable;
while ($tmp2400->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2400 = $tmp2400->next;
}
$fn2402 $tmp2401 = $tmp2400->methods[1];
frost$core$Object* $tmp2403 = $tmp2401($tmp2394);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2403)));
org$frostlang$frostc$ASTNode* $tmp2404 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2404));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp2403);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:316
org$frostlang$frostc$ASTNode* $tmp2405 = *(&local2);
frost$core$Int* $tmp2406 = &$tmp2405->$rawValue;
frost$core$Int $tmp2407 = *$tmp2406;
frost$core$Int $tmp2408 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:317:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2409 = $tmp2407.value;
int64_t $tmp2410 = $tmp2408.value;
bool $tmp2411 = $tmp2409 == $tmp2410;
frost$core$Bit $tmp2412 = (frost$core$Bit) {$tmp2411};
bool $tmp2413 = $tmp2412.value;
if ($tmp2413) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp2414 = (org$frostlang$frostc$Position*) ($tmp2405->$data + 0);
org$frostlang$frostc$Position $tmp2415 = *$tmp2414;
frost$core$String** $tmp2416 = (frost$core$String**) ($tmp2405->$data + 24);
frost$core$String* $tmp2417 = *$tmp2416;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2417));
frost$core$String* $tmp2418 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2418));
*(&local3) = $tmp2417;
org$frostlang$frostc$ASTNode** $tmp2419 = (org$frostlang$frostc$ASTNode**) ($tmp2405->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2420 = *$tmp2419;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
org$frostlang$frostc$ASTNode* $tmp2421 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2421));
*(&local4) = $tmp2420;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:318
org$frostlang$frostc$Scanner** $tmp2422 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp2423 = *$tmp2422;
org$frostlang$frostc$ASTNode* $tmp2424 = *(&local4);
org$frostlang$frostc$Type* $tmp2425 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp2423, $tmp2424);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from Closure.frost:318:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:965
frost$core$Bit $tmp2426 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp2427 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp2425, $tmp2426);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2427));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2427));
org$frostlang$frostc$Type* $tmp2428 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2428));
*(&local5) = $tmp2427;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:319
org$frostlang$frostc$Type* $tmp2429 = *(&local5);
frost$core$Bit $tmp2430 = (frost$core$Bit) {$tmp2429 == NULL};
bool $tmp2431 = $tmp2430.value;
if ($tmp2431) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:320
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2432 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2433 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2434 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2403);
org$frostlang$frostc$ASTNode* $tmp2435 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
frost$collections$Array* $tmp2436 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2436));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2437 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2437));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:322
frost$collections$Array* $tmp2438 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp2439 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp2440 = *(&local3);
org$frostlang$frostc$Type* $tmp2441 = *(&local5);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp2439, $tmp2440, $tmp2441);
frost$collections$Array$add$frost$collections$Array$T($tmp2438, ((frost$core$Object*) $tmp2439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
org$frostlang$frostc$Type* $tmp2442 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2442));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2443 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2443));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2444 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2444));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2403);
org$frostlang$frostc$ASTNode* $tmp2445 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:325
frost$core$Int $tmp2446 = (frost$core$Int) {325u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2447, $tmp2446);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:329
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:330
frost$core$Bit $tmp2448 = (frost$core$Bit) {param4 != NULL};
bool $tmp2449 = $tmp2448.value;
if ($tmp2449) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:331
org$frostlang$frostc$Scanner** $tmp2450 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp2451 = *$tmp2450;
org$frostlang$frostc$Type* $tmp2452 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp2451, param4);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from Closure.frost:331:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:965
frost$core$Bit $tmp2453 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp2454 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp2452, $tmp2453);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2454));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2454));
org$frostlang$frostc$Type* $tmp2455 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
*(&local6) = $tmp2454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2452));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:332
org$frostlang$frostc$Type* $tmp2456 = *(&local6);
frost$core$Bit $tmp2457 = (frost$core$Bit) {false};
bool $tmp2458 = $tmp2457.value;
if ($tmp2458) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:333
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2459 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2460 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2461 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block17:;
goto block13;
block14:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:337
org$frostlang$frostc$Type** $tmp2462 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2463 = *$tmp2462;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
org$frostlang$frostc$Type* $tmp2464 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
*(&local6) = $tmp2463;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:338
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2465;
$tmp2465 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2465->value = param2;
frost$core$Int $tmp2466 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:338:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2467 = &(&local8)->$rawValue;
*$tmp2467 = $tmp2466;
org$frostlang$frostc$MethodDecl$Kind $tmp2468 = *(&local8);
*(&local7) = $tmp2468;
org$frostlang$frostc$MethodDecl$Kind $tmp2469 = *(&local7);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2470;
$tmp2470 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2470->value = $tmp2469;
ITable* $tmp2471 = ((frost$core$Equatable*) $tmp2465)->$class->itable;
while ($tmp2471->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2471 = $tmp2471->next;
}
$fn2473 $tmp2472 = $tmp2471->methods[0];
frost$core$Bit $tmp2474 = $tmp2472(((frost$core$Equatable*) $tmp2465), ((frost$core$Equatable*) $tmp2470));
bool $tmp2475 = $tmp2474.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2470)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2465)));
if ($tmp2475) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:339
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s2476);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:340
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2477 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2477));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2478 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2478));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2479 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2479));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block19:;
goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:343
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp2480 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Stack** $tmp2481 = &param0->currentMethod;
frost$collections$Stack* $tmp2482 = *$tmp2481;
frost$core$Int $tmp2483 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Closure.frost:343:94
frost$core$Int $tmp2484 = (frost$core$Int) {0u};
int64_t $tmp2485 = $tmp2483.value;
int64_t $tmp2486 = $tmp2484.value;
bool $tmp2487 = $tmp2485 >= $tmp2486;
frost$core$Bit $tmp2488 = (frost$core$Bit) {$tmp2487};
bool $tmp2489 = $tmp2488.value;
if ($tmp2489) goto block24; else goto block23;
block24:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp2490 = &$tmp2482->contents;
frost$collections$Array* $tmp2491 = *$tmp2490;
ITable* $tmp2492 = ((frost$collections$CollectionView*) $tmp2491)->$class->itable;
while ($tmp2492->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2492 = $tmp2492->next;
}
$fn2494 $tmp2493 = $tmp2492->methods[0];
frost$core$Int $tmp2495 = $tmp2493(((frost$collections$CollectionView*) $tmp2491));
int64_t $tmp2496 = $tmp2483.value;
int64_t $tmp2497 = $tmp2495.value;
bool $tmp2498 = $tmp2496 < $tmp2497;
frost$core$Bit $tmp2499 = (frost$core$Bit) {$tmp2498};
bool $tmp2500 = $tmp2499.value;
if ($tmp2500) goto block22; else goto block23;
block23:;
frost$core$Int $tmp2501 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2502, $tmp2501, &$s2503);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp2504 = &$tmp2482->contents;
frost$collections$Array* $tmp2505 = *$tmp2504;
ITable* $tmp2506 = ((frost$collections$CollectionView*) $tmp2505)->$class->itable;
while ($tmp2506->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2506 = $tmp2506->next;
}
$fn2508 $tmp2507 = $tmp2506->methods[0];
frost$core$Int $tmp2509 = $tmp2507(((frost$collections$CollectionView*) $tmp2505));
int64_t $tmp2510 = $tmp2509.value;
int64_t $tmp2511 = $tmp2483.value;
bool $tmp2512 = $tmp2510 > $tmp2511;
frost$core$Bit $tmp2513 = (frost$core$Bit) {$tmp2512};
bool $tmp2514 = $tmp2513.value;
if ($tmp2514) goto block26; else goto block27;
block27:;
frost$core$Int $tmp2515 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2516, $tmp2515);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp2517 = &$tmp2482->contents;
frost$collections$Array* $tmp2518 = *$tmp2517;
frost$collections$Array** $tmp2519 = &$tmp2482->contents;
frost$collections$Array* $tmp2520 = *$tmp2519;
ITable* $tmp2521 = ((frost$collections$CollectionView*) $tmp2520)->$class->itable;
while ($tmp2521->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2521 = $tmp2521->next;
}
$fn2523 $tmp2522 = $tmp2521->methods[0];
frost$core$Int $tmp2524 = $tmp2522(((frost$collections$CollectionView*) $tmp2520));
frost$core$Int $tmp2525 = (frost$core$Int) {1u};
int64_t $tmp2526 = $tmp2524.value;
int64_t $tmp2527 = $tmp2525.value;
int64_t $tmp2528 = $tmp2526 - $tmp2527;
frost$core$Int $tmp2529 = (frost$core$Int) {$tmp2528};
int64_t $tmp2530 = $tmp2529.value;
int64_t $tmp2531 = $tmp2483.value;
int64_t $tmp2532 = $tmp2530 - $tmp2531;
frost$core$Int $tmp2533 = (frost$core$Int) {$tmp2532};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp2534 = (frost$core$Int) {0u};
int64_t $tmp2535 = $tmp2533.value;
int64_t $tmp2536 = $tmp2534.value;
bool $tmp2537 = $tmp2535 >= $tmp2536;
frost$core$Bit $tmp2538 = (frost$core$Bit) {$tmp2537};
bool $tmp2539 = $tmp2538.value;
if ($tmp2539) goto block31; else goto block30;
block31:;
ITable* $tmp2540 = ((frost$collections$CollectionView*) $tmp2518)->$class->itable;
while ($tmp2540->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2540 = $tmp2540->next;
}
$fn2542 $tmp2541 = $tmp2540->methods[0];
frost$core$Int $tmp2543 = $tmp2541(((frost$collections$CollectionView*) $tmp2518));
int64_t $tmp2544 = $tmp2533.value;
int64_t $tmp2545 = $tmp2543.value;
bool $tmp2546 = $tmp2544 < $tmp2545;
frost$core$Bit $tmp2547 = (frost$core$Bit) {$tmp2546};
bool $tmp2548 = $tmp2547.value;
if ($tmp2548) goto block29; else goto block30;
block30:;
frost$core$Int $tmp2549 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2550, $tmp2549, &$s2551);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2552 = &$tmp2518->data;
frost$core$Object** $tmp2553 = *$tmp2552;
frost$core$Int64 $tmp2554 = frost$core$Int64$init$frost$core$Int($tmp2533);
int64_t $tmp2555 = $tmp2554.value;
frost$core$Object* $tmp2556 = $tmp2553[$tmp2555];
frost$core$Frost$ref$frost$core$Object$Q($tmp2556);
frost$core$Frost$ref$frost$core$Object$Q($tmp2556);
frost$core$Frost$unref$frost$core$Object$Q($tmp2556);
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp2557 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2557);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp2480, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp2556)), ((frost$core$Object*) ((frost$collections$Map*) $tmp2557)));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
org$frostlang$frostc$Pair* $tmp2558 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2558));
*(&local9) = $tmp2480;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2557));
frost$core$Frost$unref$frost$core$Object$Q($tmp2556);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:345
frost$collections$Stack** $tmp2559 = &param0->captures;
frost$collections$Stack* $tmp2560 = *$tmp2559;
org$frostlang$frostc$Pair* $tmp2561 = *(&local9);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Closure.frost:345:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp2562 = &$tmp2560->contents;
frost$collections$Array* $tmp2563 = *$tmp2562;
frost$collections$Array$add$frost$collections$Array$T($tmp2563, ((frost$core$Object*) $tmp2561));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:346
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp2564 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp2565 = (frost$core$Int) {16u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp2564, $tmp2565);
*(&local10) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
org$frostlang$frostc$Annotations* $tmp2566 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2566));
*(&local10) = $tmp2564;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:347
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp2567 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$collections$Stack** $tmp2568 = &param0->currentClass;
frost$collections$Stack* $tmp2569 = *$tmp2568;
frost$core$Int $tmp2570 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Closure.frost:347:59
frost$core$Int $tmp2571 = (frost$core$Int) {0u};
int64_t $tmp2572 = $tmp2570.value;
int64_t $tmp2573 = $tmp2571.value;
bool $tmp2574 = $tmp2572 >= $tmp2573;
frost$core$Bit $tmp2575 = (frost$core$Bit) {$tmp2574};
bool $tmp2576 = $tmp2575.value;
if ($tmp2576) goto block36; else goto block35;
block36:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp2577 = &$tmp2569->contents;
frost$collections$Array* $tmp2578 = *$tmp2577;
ITable* $tmp2579 = ((frost$collections$CollectionView*) $tmp2578)->$class->itable;
while ($tmp2579->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2579 = $tmp2579->next;
}
$fn2581 $tmp2580 = $tmp2579->methods[0];
frost$core$Int $tmp2582 = $tmp2580(((frost$collections$CollectionView*) $tmp2578));
int64_t $tmp2583 = $tmp2570.value;
int64_t $tmp2584 = $tmp2582.value;
bool $tmp2585 = $tmp2583 < $tmp2584;
frost$core$Bit $tmp2586 = (frost$core$Bit) {$tmp2585};
bool $tmp2587 = $tmp2586.value;
if ($tmp2587) goto block34; else goto block35;
block35:;
frost$core$Int $tmp2588 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2589, $tmp2588, &$s2590);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp2591 = &$tmp2569->contents;
frost$collections$Array* $tmp2592 = *$tmp2591;
ITable* $tmp2593 = ((frost$collections$CollectionView*) $tmp2592)->$class->itable;
while ($tmp2593->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2593 = $tmp2593->next;
}
$fn2595 $tmp2594 = $tmp2593->methods[0];
frost$core$Int $tmp2596 = $tmp2594(((frost$collections$CollectionView*) $tmp2592));
int64_t $tmp2597 = $tmp2596.value;
int64_t $tmp2598 = $tmp2570.value;
bool $tmp2599 = $tmp2597 > $tmp2598;
frost$core$Bit $tmp2600 = (frost$core$Bit) {$tmp2599};
bool $tmp2601 = $tmp2600.value;
if ($tmp2601) goto block38; else goto block39;
block39:;
frost$core$Int $tmp2602 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2603, $tmp2602);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp2604 = &$tmp2569->contents;
frost$collections$Array* $tmp2605 = *$tmp2604;
frost$collections$Array** $tmp2606 = &$tmp2569->contents;
frost$collections$Array* $tmp2607 = *$tmp2606;
ITable* $tmp2608 = ((frost$collections$CollectionView*) $tmp2607)->$class->itable;
while ($tmp2608->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2608 = $tmp2608->next;
}
$fn2610 $tmp2609 = $tmp2608->methods[0];
frost$core$Int $tmp2611 = $tmp2609(((frost$collections$CollectionView*) $tmp2607));
frost$core$Int $tmp2612 = (frost$core$Int) {1u};
int64_t $tmp2613 = $tmp2611.value;
int64_t $tmp2614 = $tmp2612.value;
int64_t $tmp2615 = $tmp2613 - $tmp2614;
frost$core$Int $tmp2616 = (frost$core$Int) {$tmp2615};
int64_t $tmp2617 = $tmp2616.value;
int64_t $tmp2618 = $tmp2570.value;
int64_t $tmp2619 = $tmp2617 - $tmp2618;
frost$core$Int $tmp2620 = (frost$core$Int) {$tmp2619};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp2621 = (frost$core$Int) {0u};
int64_t $tmp2622 = $tmp2620.value;
int64_t $tmp2623 = $tmp2621.value;
bool $tmp2624 = $tmp2622 >= $tmp2623;
frost$core$Bit $tmp2625 = (frost$core$Bit) {$tmp2624};
bool $tmp2626 = $tmp2625.value;
if ($tmp2626) goto block43; else goto block42;
block43:;
ITable* $tmp2627 = ((frost$collections$CollectionView*) $tmp2605)->$class->itable;
while ($tmp2627->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2627 = $tmp2627->next;
}
$fn2629 $tmp2628 = $tmp2627->methods[0];
frost$core$Int $tmp2630 = $tmp2628(((frost$collections$CollectionView*) $tmp2605));
int64_t $tmp2631 = $tmp2620.value;
int64_t $tmp2632 = $tmp2630.value;
bool $tmp2633 = $tmp2631 < $tmp2632;
frost$core$Bit $tmp2634 = (frost$core$Bit) {$tmp2633};
bool $tmp2635 = $tmp2634.value;
if ($tmp2635) goto block41; else goto block42;
block42:;
frost$core$Int $tmp2636 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2637, $tmp2636, &$s2638);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2639 = &$tmp2605->data;
frost$core$Object** $tmp2640 = *$tmp2639;
frost$core$Int64 $tmp2641 = frost$core$Int64$init$frost$core$Int($tmp2620);
int64_t $tmp2642 = $tmp2641.value;
frost$core$Object* $tmp2643 = $tmp2640[$tmp2642];
frost$core$Frost$ref$frost$core$Object$Q($tmp2643);
frost$core$Frost$ref$frost$core$Object$Q($tmp2643);
frost$core$Frost$unref$frost$core$Object$Q($tmp2643);
org$frostlang$frostc$Annotations* $tmp2644 = *(&local10);
frost$core$String* $tmp2645 = *(&local0);
frost$collections$Array* $tmp2646 = *(&local1);
org$frostlang$frostc$Type* $tmp2647 = *(&local6);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2567, ((org$frostlang$frostc$ClassDecl*) $tmp2643), param1, ((frost$core$String*) NULL), $tmp2644, param2, $tmp2645, ((frost$collections$Array*) NULL), $tmp2646, $tmp2647, param5);
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
org$frostlang$frostc$MethodDecl* $tmp2648 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
*(&local11) = $tmp2567;
frost$core$Frost$unref$frost$core$Object$Q($tmp2643);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:351
frost$core$Bit* $tmp2649 = &param0->writeCode;
frost$core$Bit $tmp2650 = *$tmp2649;
*(&local12) = $tmp2650;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:352
frost$core$Bit* $tmp2651 = &param0->reportErrors;
frost$core$Bit $tmp2652 = *$tmp2651;
*(&local13) = $tmp2652;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:353
frost$core$Bit $tmp2653 = (frost$core$Bit) {false};
frost$core$Bit* $tmp2654 = &param0->writeCode;
*$tmp2654 = $tmp2653;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:354
frost$core$Bit $tmp2655 = (frost$core$Bit) {false};
frost$core$Bit* $tmp2656 = &param0->reportErrors;
*$tmp2656 = $tmp2655;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:355
frost$collections$Stack** $tmp2657 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2658 = *$tmp2657;
*(&local14) = ((frost$collections$Stack*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2658));
frost$collections$Stack* $tmp2659 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
*(&local14) = $tmp2658;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:356
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp2660 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp2660);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
frost$collections$Stack** $tmp2661 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2662 = *$tmp2661;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
frost$collections$Stack** $tmp2663 = &param0->enclosingContexts;
*$tmp2663 = $tmp2660;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:357
org$frostlang$frostc$MethodDecl* $tmp2664 = *(&local11);
org$frostlang$frostc$SymbolTable** $tmp2665 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2666 = *$tmp2665;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp2664, $tmp2666);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:358
frost$collections$Stack* $tmp2667 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2667));
frost$collections$Stack** $tmp2668 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2669 = *$tmp2668;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2669));
frost$collections$Stack** $tmp2670 = &param0->enclosingContexts;
*$tmp2670 = $tmp2667;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:359
frost$core$Bit $tmp2671 = *(&local12);
frost$core$Bit* $tmp2672 = &param0->writeCode;
*$tmp2672 = $tmp2671;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:360
frost$core$Bit $tmp2673 = *(&local13);
frost$core$Bit* $tmp2674 = &param0->reportErrors;
*$tmp2674 = $tmp2673;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:362
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:363
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:364
org$frostlang$frostc$Pair* $tmp2675 = *(&local9);
frost$core$Object** $tmp2676 = &$tmp2675->second;
frost$core$Object* $tmp2677 = *$tmp2676;
ITable* $tmp2678 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp2677))->$class->itable;
while ($tmp2678->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2678 = $tmp2678->next;
}
$fn2680 $tmp2679 = $tmp2678->methods[0];
frost$core$Int $tmp2681 = $tmp2679(((frost$collections$MapView*) ((frost$collections$Map*) $tmp2677)));
frost$core$Int $tmp2682 = (frost$core$Int) {0u};
int64_t $tmp2683 = $tmp2681.value;
int64_t $tmp2684 = $tmp2682.value;
bool $tmp2685 = $tmp2683 != $tmp2684;
frost$core$Bit $tmp2686 = (frost$core$Bit) {$tmp2685};
bool $tmp2687 = $tmp2686.value;
if ($tmp2687) goto block44; else goto block46;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:366
org$frostlang$frostc$MethodDecl* $tmp2688 = *(&local11);
org$frostlang$frostc$Pair* $tmp2689 = *(&local9);
frost$core$Object** $tmp2690 = &$tmp2689->second;
frost$core$Object* $tmp2691 = *$tmp2690;
ITable* $tmp2692 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp2691))->$class->itable;
while ($tmp2692->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2692 = $tmp2692->next;
}
$fn2694 $tmp2693 = $tmp2692->methods[5];
frost$collections$Iterator* $tmp2695 = $tmp2693(((frost$collections$MapView*) ((frost$collections$Map*) $tmp2691)));
ITable* $tmp2696 = $tmp2695->$class->itable;
while ($tmp2696->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2696 = $tmp2696->next;
}
$fn2698 $tmp2697 = $tmp2696->methods[7];
frost$collections$Array* $tmp2699 = $tmp2697($tmp2695);
org$frostlang$frostc$ClassDecl* $tmp2700 = org$frostlang$frostc$expression$Closure$createClosureClass$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlang$frostc$Compiler$Capture$GT$R$org$frostlang$frostc$ClassDecl(param0, $tmp2688, ((frost$collections$CollectionView*) $tmp2699));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
org$frostlang$frostc$ClassDecl* $tmp2701 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2701));
*(&local17) = $tmp2700;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2695));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:367
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2702 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2702);
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
frost$collections$Array* $tmp2703 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
*(&local18) = $tmp2702;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:368
org$frostlang$frostc$Pair* $tmp2704 = *(&local9);
frost$core$Object** $tmp2705 = &$tmp2704->second;
frost$core$Object* $tmp2706 = *$tmp2705;
ITable* $tmp2707 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp2706))->$class->itable;
while ($tmp2707->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2707 = $tmp2707->next;
}
$fn2709 $tmp2708 = $tmp2707->methods[5];
frost$collections$Iterator* $tmp2710 = $tmp2708(((frost$collections$MapView*) ((frost$collections$Map*) $tmp2706)));
goto block47;
block47:;
ITable* $tmp2711 = $tmp2710->$class->itable;
while ($tmp2711->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2711 = $tmp2711->next;
}
$fn2713 $tmp2712 = $tmp2711->methods[0];
frost$core$Bit $tmp2714 = $tmp2712($tmp2710);
bool $tmp2715 = $tmp2714.value;
if ($tmp2715) goto block49; else goto block48;
block48:;
*(&local19) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp2716 = $tmp2710->$class->itable;
while ($tmp2716->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2716 = $tmp2716->next;
}
$fn2718 $tmp2717 = $tmp2716->methods[1];
frost$core$Object* $tmp2719 = $tmp2717($tmp2710);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp2719)));
org$frostlang$frostc$Compiler$Capture* $tmp2720 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
*(&local19) = ((org$frostlang$frostc$Compiler$Capture*) $tmp2719);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:369
org$frostlang$frostc$Compiler$Capture* $tmp2721 = *(&local19);
frost$core$Int* $tmp2722 = &$tmp2721->$rawValue;
frost$core$Int $tmp2723 = *$tmp2722;
frost$core$Int $tmp2724 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:370:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2725 = $tmp2723.value;
int64_t $tmp2726 = $tmp2724.value;
bool $tmp2727 = $tmp2725 == $tmp2726;
frost$core$Bit $tmp2728 = (frost$core$Bit) {$tmp2727};
bool $tmp2729 = $tmp2728.value;
if ($tmp2729) goto block51; else goto block52;
block51:;
org$frostlang$frostc$Variable** $tmp2730 = (org$frostlang$frostc$Variable**) ($tmp2721->$data + 0);
org$frostlang$frostc$Variable* $tmp2731 = *$tmp2730;
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
org$frostlang$frostc$Variable* $tmp2732 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
*(&local20) = $tmp2731;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:371
frost$collections$Array* $tmp2733 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2734 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2735 = (frost$core$Int) {22u};
org$frostlang$frostc$Variable* $tmp2736 = *(&local20);
frost$core$String** $tmp2737 = &((org$frostlang$frostc$Symbol*) $tmp2736)->name;
frost$core$String* $tmp2738 = *$tmp2737;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp2734, $tmp2735, param1, $tmp2738);
frost$collections$Array$add$frost$collections$Array$T($tmp2733, ((frost$core$Object*) $tmp2734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2734));
org$frostlang$frostc$Variable* $tmp2739 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2739));
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
goto block50;
block52:;
frost$core$Int $tmp2740 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:373:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2741 = $tmp2723.value;
int64_t $tmp2742 = $tmp2740.value;
bool $tmp2743 = $tmp2741 == $tmp2742;
frost$core$Bit $tmp2744 = (frost$core$Bit) {$tmp2743};
bool $tmp2745 = $tmp2744.value;
if ($tmp2745) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:374
frost$collections$Array* $tmp2746 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2747 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2748 = (frost$core$Int) {39u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position($tmp2747, $tmp2748, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp2746, ((frost$core$Object*) $tmp2747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2747));
goto block50;
block55:;
frost$core$Int $tmp2749 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:376:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2750 = $tmp2723.value;
int64_t $tmp2751 = $tmp2749.value;
bool $tmp2752 = $tmp2750 == $tmp2751;
frost$core$Bit $tmp2753 = (frost$core$Bit) {$tmp2752};
bool $tmp2754 = $tmp2753.value;
if ($tmp2754) goto block57; else goto block50;
block57:;
org$frostlang$frostc$FieldDecl** $tmp2755 = (org$frostlang$frostc$FieldDecl**) ($tmp2721->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp2756 = *$tmp2755;
*(&local21) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2756));
org$frostlang$frostc$FieldDecl* $tmp2757 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
*(&local21) = $tmp2756;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:377
frost$collections$Array* $tmp2758 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2759 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2760 = (frost$core$Int) {16u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2761 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2762 = (frost$core$Int) {22u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp2761, $tmp2762, param1, &$s2763);
org$frostlang$frostc$FieldDecl* $tmp2764 = *(&local21);
frost$core$String** $tmp2765 = &((org$frostlang$frostc$Symbol*) $tmp2764)->name;
frost$core$String* $tmp2766 = *$tmp2765;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp2759, $tmp2760, param1, $tmp2761, $tmp2766);
frost$collections$Array$add$frost$collections$Array$T($tmp2758, ((frost$core$Object*) $tmp2759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
org$frostlang$frostc$FieldDecl* $tmp2767 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2767));
*(&local21) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block50;
block50:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2719);
org$frostlang$frostc$Compiler$Capture* $tmp2768 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2768));
*(&local19) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block47;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:383
frost$collections$Stack** $tmp2769 = &param0->captures;
frost$collections$Stack* $tmp2770 = *$tmp2769;
frost$core$Object* $tmp2771 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2770);
frost$core$Frost$unref$frost$core$Object$Q($tmp2771);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:384
frost$collections$Array** $tmp2772 = &param0->pendingClasses;
frost$collections$Array* $tmp2773 = *$tmp2772;
org$frostlang$frostc$ClassDecl* $tmp2774 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp2773, ((frost$core$Object*) $tmp2774));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:385
org$frostlang$frostc$ClassDecl* $tmp2775 = *(&local17);
org$frostlang$frostc$Type** $tmp2776 = &$tmp2775->type;
org$frostlang$frostc$Type* $tmp2777 = *$tmp2776;
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:385:83
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3685
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2778 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2779 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3685:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
org$frostlang$frostc$Type** $tmp2780 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp2781 = *$tmp2780;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2782 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2783 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2782, $tmp2783);
frost$collections$Array$add$frost$collections$Array$T($tmp2782, ((frost$core$Object*) $tmp2777));
org$frostlang$frostc$Type* $tmp2784 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2781, ((frost$collections$ListView*) $tmp2782));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp2778, $tmp2779, $tmp2777, $tmp2784);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
frost$collections$Array* $tmp2785 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp2786 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2785);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2787 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2788 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp2787, $tmp2788);
org$frostlang$frostc$IR$Value* $tmp2789 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2778, ((frost$collections$ListView*) $tmp2786), $tmp2787);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2789));
org$frostlang$frostc$IR$Value* $tmp2790 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
*(&local22) = $tmp2789;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:387
org$frostlang$frostc$IR$Value* $tmp2791 = *(&local22);
frost$core$Bit $tmp2792 = (frost$core$Bit) {$tmp2791 == NULL};
bool $tmp2793 = $tmp2792.value;
if ($tmp2793) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:388
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp2794 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2794));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2795 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2796 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp2797 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp2798 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2798));
*(&local14) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2799 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2799));
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp2800 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2800));
*(&local10) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp2801 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2801));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp2802 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2802));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2803 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2803));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2804 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2804));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:390
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2805 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2806 = (frost$core$Int) {26u};
org$frostlang$frostc$IR$Value* $tmp2807 = *(&local22);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2805, $tmp2806, param1, $tmp2807);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
org$frostlang$frostc$ASTNode* $tmp2808 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
*(&local16) = $tmp2805;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:391
org$frostlang$frostc$ClassDecl* $tmp2809 = *(&local17);
org$frostlang$frostc$Type** $tmp2810 = &$tmp2809->type;
org$frostlang$frostc$Type* $tmp2811 = *$tmp2810;
frost$core$Bit $tmp2812 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp2811);
*(&local15) = $tmp2812;
org$frostlang$frostc$IR$Value* $tmp2813 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2814 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2815 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2815));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block45;
block46:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:395
frost$collections$Stack** $tmp2816 = &param0->captures;
frost$collections$Stack* $tmp2817 = *$tmp2816;
frost$core$Object* $tmp2818 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2817);
frost$core$Frost$unref$frost$core$Object$Q($tmp2818);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:396
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp2819 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp2819);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2819));
frost$collections$Stack** $tmp2820 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2821 = *$tmp2820;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
frost$collections$Stack** $tmp2822 = &param0->enclosingContexts;
*$tmp2822 = $tmp2819;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2819));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:397
org$frostlang$frostc$MethodDecl* $tmp2823 = *(&local11);
org$frostlang$frostc$SymbolTable** $tmp2824 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2825 = *$tmp2824;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp2823, $tmp2825);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:398
frost$collections$Stack* $tmp2826 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
frost$collections$Stack** $tmp2827 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2828 = *$tmp2827;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
frost$collections$Stack** $tmp2829 = &param0->enclosingContexts;
*$tmp2829 = $tmp2826;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:399
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2830 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2831 = (frost$core$Int) {31u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position($tmp2830, $tmp2831, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
org$frostlang$frostc$ASTNode* $tmp2832 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
*(&local16) = $tmp2830;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:400
frost$core$Bit $tmp2833 = (frost$core$Bit) {true};
*(&local15) = $tmp2833;
goto block45;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:402
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2834 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2834);
*(&local23) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
frost$collections$Array* $tmp2835 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2835));
*(&local23) = $tmp2834;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:403
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:404
org$frostlang$frostc$MethodDecl* $tmp2836 = *(&local11);
org$frostlang$frostc$Annotations** $tmp2837 = &$tmp2836->annotations;
org$frostlang$frostc$Annotations* $tmp2838 = *$tmp2837;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Closure.frost:404:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int* $tmp2839 = &$tmp2838->flags;
frost$core$Int $tmp2840 = *$tmp2839;
frost$core$Int $tmp2841 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2842 = $tmp2840.value;
int64_t $tmp2843 = $tmp2841.value;
int64_t $tmp2844 = $tmp2842 & $tmp2843;
frost$core$Int $tmp2845 = (frost$core$Int) {$tmp2844};
frost$core$Int $tmp2846 = (frost$core$Int) {0u};
int64_t $tmp2847 = $tmp2845.value;
int64_t $tmp2848 = $tmp2846.value;
bool $tmp2849 = $tmp2847 != $tmp2848;
frost$core$Bit $tmp2850 = (frost$core$Bit) {$tmp2849};
bool $tmp2851 = $tmp2850.value;
if ($tmp2851) goto block63; else goto block65;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:405
org$frostlang$frostc$MethodDecl* $tmp2852 = *(&local11);
org$frostlang$frostc$Type* $tmp2853 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp2852, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2853));
org$frostlang$frostc$Type* $tmp2854 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2854));
*(&local24) = $tmp2853;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2853));
goto block64;
block65:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:408
org$frostlang$frostc$MethodDecl* $tmp2855 = *(&local11);
org$frostlang$frostc$MethodDecl* $tmp2856 = *(&local11);
frost$core$Weak** $tmp2857 = &$tmp2856->owner;
frost$core$Weak* $tmp2858 = *$tmp2857;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Closure.frost:408:78
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2859 = &$tmp2858->_valid;
frost$core$Bit $tmp2860 = *$tmp2859;
bool $tmp2861 = $tmp2860.value;
if ($tmp2861) goto block70; else goto block71;
block71:;
frost$core$Int $tmp2862 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2863, $tmp2862);
abort(); // unreachable
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2864 = &$tmp2858->value;
frost$core$Object* $tmp2865 = *$tmp2864;
frost$core$Frost$ref$frost$core$Object$Q($tmp2865);
org$frostlang$frostc$Type** $tmp2866 = &((org$frostlang$frostc$ClassDecl*) $tmp2865)->type;
org$frostlang$frostc$Type* $tmp2867 = *$tmp2866;
frost$core$Bit $tmp2868 = (frost$core$Bit) {false};
org$frostlang$frostc$Type* $tmp2869 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp2855, $tmp2867, $tmp2868);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
org$frostlang$frostc$Type* $tmp2870 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2870));
*(&local24) = $tmp2869;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
frost$core$Frost$unref$frost$core$Object$Q($tmp2865);
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:410
org$frostlang$frostc$Type* $tmp2871 = *(&local24);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Closure.frost:410:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:284
org$frostlang$frostc$Type** $tmp2872 = &param0->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp2873 = *$tmp2872;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2874 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2875 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2874, $tmp2875);
frost$collections$Array$add$frost$collections$Array$T($tmp2874, ((frost$core$Object*) $tmp2871));
org$frostlang$frostc$Type* $tmp2876 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2873, ((frost$collections$ListView*) $tmp2874));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2876));
org$frostlang$frostc$Type* $tmp2877 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2877));
*(&local25) = $tmp2876;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2876));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:411
frost$collections$Array* $tmp2878 = *(&local23);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2879 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2880 = (frost$core$Int) {26u};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2881 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2882 = (frost$core$Int) {3u};
org$frostlang$frostc$MethodDecl* $tmp2883 = *(&local11);
org$frostlang$frostc$Type* $tmp2884 = *(&local25);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp2881, $tmp2882, $tmp2883, $tmp2884);
org$frostlang$frostc$Type** $tmp2885 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp2886 = *$tmp2885;
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Closure.frost:412:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:284
org$frostlang$frostc$Type** $tmp2887 = &param0->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp2888 = *$tmp2887;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2889 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2890 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2889, $tmp2890);
frost$collections$Array$add$frost$collections$Array$T($tmp2889, ((frost$core$Object*) $tmp2886));
org$frostlang$frostc$Type* $tmp2891 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2888, ((frost$collections$ListView*) $tmp2889));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
org$frostlang$frostc$IR$Value* $tmp2892 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2881, $tmp2891);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2879, $tmp2880, param1, $tmp2892);
frost$collections$Array$add$frost$collections$Array$T($tmp2878, ((frost$core$Object*) $tmp2879));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2881));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2879));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:414
frost$collections$Array* $tmp2893 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp2894 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp2893, ((frost$core$Object*) $tmp2894));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:415
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:416
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:417
frost$core$Bit $tmp2895 = *(&local15);
bool $tmp2896 = $tmp2895.value;
if ($tmp2896) goto block74; else goto block76;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:418
org$frostlang$frostc$Type** $tmp2897 = &param0->METHOD_TYPE;
org$frostlang$frostc$Type* $tmp2898 = *$tmp2897;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
org$frostlang$frostc$Type* $tmp2899 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
*(&local26) = $tmp2898;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:419
org$frostlang$frostc$MethodDecl* $tmp2900 = *(&local11);
org$frostlang$frostc$Type* $tmp2901 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp2900, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
org$frostlang$frostc$Type* $tmp2902 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
*(&local27) = $tmp2901;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
goto block75;
block76:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:422
org$frostlang$frostc$Type** $tmp2903 = &param0->MUTABLE_METHOD_TYPE;
org$frostlang$frostc$Type* $tmp2904 = *$tmp2903;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
org$frostlang$frostc$Type* $tmp2905 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
*(&local26) = $tmp2904;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:423
org$frostlang$frostc$MethodDecl* $tmp2906 = *(&local11);
org$frostlang$frostc$Type* $tmp2907 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp2906, param0);
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
org$frostlang$frostc$Type* $tmp2908 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
*(&local28) = $tmp2907;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:424
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2909 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2909);
*(&local29) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
frost$collections$Array* $tmp2910 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
*(&local29) = $tmp2909;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:425
frost$core$Int $tmp2911 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp2912 = *(&local28);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Closure.frost:425:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2913 = &$tmp2912->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2914 = *$tmp2913;
frost$core$Bit $tmp2915 = (frost$core$Bit) {$tmp2914 != NULL};
bool $tmp2916 = $tmp2915.value;
if ($tmp2916) goto block78; else goto block79;
block79:;
frost$core$Int $tmp2917 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2918, $tmp2917);
abort(); // unreachable
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2919 = &$tmp2912->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2920 = *$tmp2919;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
ITable* $tmp2921 = ((frost$collections$CollectionView*) $tmp2920)->$class->itable;
while ($tmp2921->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2921 = $tmp2921->next;
}
$fn2923 $tmp2922 = $tmp2921->methods[0];
frost$core$Int $tmp2924 = $tmp2922(((frost$collections$CollectionView*) $tmp2920));
frost$core$Int $tmp2925 = (frost$core$Int) {1u};
int64_t $tmp2926 = $tmp2924.value;
int64_t $tmp2927 = $tmp2925.value;
int64_t $tmp2928 = $tmp2926 - $tmp2927;
frost$core$Int $tmp2929 = (frost$core$Int) {$tmp2928};
frost$core$Bit $tmp2930 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2931 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2911, $tmp2929, $tmp2930);
frost$core$Int $tmp2932 = $tmp2931.min;
*(&local30) = $tmp2932;
frost$core$Int $tmp2933 = $tmp2931.max;
frost$core$Bit $tmp2934 = $tmp2931.inclusive;
bool $tmp2935 = $tmp2934.value;
frost$core$Int $tmp2936 = (frost$core$Int) {1u};
if ($tmp2935) goto block83; else goto block84;
block83:;
int64_t $tmp2937 = $tmp2932.value;
int64_t $tmp2938 = $tmp2933.value;
bool $tmp2939 = $tmp2937 <= $tmp2938;
frost$core$Bit $tmp2940 = (frost$core$Bit) {$tmp2939};
bool $tmp2941 = $tmp2940.value;
if ($tmp2941) goto block80; else goto block81;
block84:;
int64_t $tmp2942 = $tmp2932.value;
int64_t $tmp2943 = $tmp2933.value;
bool $tmp2944 = $tmp2942 < $tmp2943;
frost$core$Bit $tmp2945 = (frost$core$Bit) {$tmp2944};
bool $tmp2946 = $tmp2945.value;
if ($tmp2946) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:426
frost$collections$Array* $tmp2947 = *(&local29);
org$frostlang$frostc$Type* $tmp2948 = *(&local28);
frost$core$Int $tmp2949 = *(&local30);
// begin inline call to function org.frostlang.frostc.Type.parameterType(i:frost.core.Int):org.frostlang.frostc.Type from Closure.frost:426:57
org$frostlang$frostc$Type$Kind* $tmp2950 = &$tmp2948->typeKind;
org$frostlang$frostc$Type$Kind $tmp2951 = *$tmp2950;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2952;
$tmp2952 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2952->value = $tmp2951;
frost$core$Int $tmp2953 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:426:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2954 = &(&local32)->$rawValue;
*$tmp2954 = $tmp2953;
org$frostlang$frostc$Type$Kind $tmp2955 = *(&local32);
*(&local31) = $tmp2955;
org$frostlang$frostc$Type$Kind $tmp2956 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2957;
$tmp2957 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2957->value = $tmp2956;
ITable* $tmp2958 = ((frost$core$Equatable*) $tmp2952)->$class->itable;
while ($tmp2958->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2958 = $tmp2958->next;
}
$fn2960 $tmp2959 = $tmp2958->methods[0];
frost$core$Bit $tmp2961 = $tmp2959(((frost$core$Equatable*) $tmp2952), ((frost$core$Equatable*) $tmp2957));
bool $tmp2962 = $tmp2961.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2957)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2952)));
if ($tmp2962) goto block89; else goto block92;
block92:;
org$frostlang$frostc$Type$Kind* $tmp2963 = &$tmp2948->typeKind;
org$frostlang$frostc$Type$Kind $tmp2964 = *$tmp2963;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2965;
$tmp2965 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2965->value = $tmp2964;
frost$core$Int $tmp2966 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:426:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2967 = &(&local34)->$rawValue;
*$tmp2967 = $tmp2966;
org$frostlang$frostc$Type$Kind $tmp2968 = *(&local34);
*(&local33) = $tmp2968;
org$frostlang$frostc$Type$Kind $tmp2969 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2970;
$tmp2970 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2970->value = $tmp2969;
ITable* $tmp2971 = ((frost$core$Equatable*) $tmp2965)->$class->itable;
while ($tmp2971->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2971 = $tmp2971->next;
}
$fn2973 $tmp2972 = $tmp2971->methods[0];
frost$core$Bit $tmp2974 = $tmp2972(((frost$core$Equatable*) $tmp2965), ((frost$core$Equatable*) $tmp2970));
bool $tmp2975 = $tmp2974.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2970)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2965)));
if ($tmp2975) goto block89; else goto block91;
block91:;
org$frostlang$frostc$Type$Kind* $tmp2976 = &$tmp2948->typeKind;
org$frostlang$frostc$Type$Kind $tmp2977 = *$tmp2976;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2978;
$tmp2978 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2978->value = $tmp2977;
frost$core$Int $tmp2979 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:426:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2980 = &(&local36)->$rawValue;
*$tmp2980 = $tmp2979;
org$frostlang$frostc$Type$Kind $tmp2981 = *(&local36);
*(&local35) = $tmp2981;
org$frostlang$frostc$Type$Kind $tmp2982 = *(&local35);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2983;
$tmp2983 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2983->value = $tmp2982;
ITable* $tmp2984 = ((frost$core$Equatable*) $tmp2978)->$class->itable;
while ($tmp2984->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2984 = $tmp2984->next;
}
$fn2986 $tmp2985 = $tmp2984->methods[0];
frost$core$Bit $tmp2987 = $tmp2985(((frost$core$Equatable*) $tmp2978), ((frost$core$Equatable*) $tmp2983));
bool $tmp2988 = $tmp2987.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2983)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2978)));
if ($tmp2988) goto block89; else goto block90;
block90:;
org$frostlang$frostc$Type$Kind* $tmp2989 = &$tmp2948->typeKind;
org$frostlang$frostc$Type$Kind $tmp2990 = *$tmp2989;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2991;
$tmp2991 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2991->value = $tmp2990;
frost$core$Int $tmp2992 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:427:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2993 = &(&local38)->$rawValue;
*$tmp2993 = $tmp2992;
org$frostlang$frostc$Type$Kind $tmp2994 = *(&local38);
*(&local37) = $tmp2994;
org$frostlang$frostc$Type$Kind $tmp2995 = *(&local37);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2996;
$tmp2996 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2996->value = $tmp2995;
ITable* $tmp2997 = ((frost$core$Equatable*) $tmp2991)->$class->itable;
while ($tmp2997->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2997 = $tmp2997->next;
}
$fn2999 $tmp2998 = $tmp2997->methods[0];
frost$core$Bit $tmp3000 = $tmp2998(((frost$core$Equatable*) $tmp2991), ((frost$core$Equatable*) $tmp2996));
bool $tmp3001 = $tmp3000.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2996)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2991)));
if ($tmp3001) goto block89; else goto block87;
block89:;
frost$core$Int $tmp3002 = (frost$core$Int) {0u};
int64_t $tmp3003 = $tmp2949.value;
int64_t $tmp3004 = $tmp3002.value;
bool $tmp3005 = $tmp3003 >= $tmp3004;
frost$core$Bit $tmp3006 = (frost$core$Bit) {$tmp3005};
bool $tmp3007 = $tmp3006.value;
if ($tmp3007) goto block88; else goto block87;
block88:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:427:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3008 = &$tmp2948->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3009 = *$tmp3008;
frost$core$Bit $tmp3010 = (frost$core$Bit) {$tmp3009 != NULL};
bool $tmp3011 = $tmp3010.value;
if ($tmp3011) goto block98; else goto block99;
block99:;
frost$core$Int $tmp3012 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3013, $tmp3012);
abort(); // unreachable
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3014 = &$tmp2948->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3015 = *$tmp3014;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
ITable* $tmp3016 = ((frost$collections$CollectionView*) $tmp3015)->$class->itable;
while ($tmp3016->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3016 = $tmp3016->next;
}
$fn3018 $tmp3017 = $tmp3016->methods[0];
frost$core$Int $tmp3019 = $tmp3017(((frost$collections$CollectionView*) $tmp3015));
frost$core$Int $tmp3020 = (frost$core$Int) {1u};
int64_t $tmp3021 = $tmp3019.value;
int64_t $tmp3022 = $tmp3020.value;
int64_t $tmp3023 = $tmp3021 - $tmp3022;
frost$core$Int $tmp3024 = (frost$core$Int) {$tmp3023};
int64_t $tmp3025 = $tmp2949.value;
int64_t $tmp3026 = $tmp3024.value;
bool $tmp3027 = $tmp3025 < $tmp3026;
frost$core$Bit $tmp3028 = (frost$core$Bit) {$tmp3027};
bool $tmp3029 = $tmp3028.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
if ($tmp3029) goto block86; else goto block87;
block87:;
frost$core$Int $tmp3030 = (frost$core$Int) {428u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3031, $tmp3030, &$s3032);
abort(); // unreachable
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:429
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:429:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3033 = &$tmp2948->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3034 = *$tmp3033;
frost$core$Bit $tmp3035 = (frost$core$Bit) {$tmp3034 != NULL};
bool $tmp3036 = $tmp3035.value;
if ($tmp3036) goto block101; else goto block102;
block102:;
frost$core$Int $tmp3037 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3038, $tmp3037);
abort(); // unreachable
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3039 = &$tmp2948->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3040 = *$tmp3039;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
frost$core$Object* $tmp3041 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3040, $tmp2949);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3041)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3041);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
frost$collections$Array$add$frost$collections$Array$T($tmp2947, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3041)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3041)));
frost$core$Int $tmp3042 = *(&local30);
int64_t $tmp3043 = $tmp2933.value;
int64_t $tmp3044 = $tmp3042.value;
int64_t $tmp3045 = $tmp3043 - $tmp3044;
frost$core$Int $tmp3046 = (frost$core$Int) {$tmp3045};
if ($tmp2935) goto block104; else goto block105;
block104:;
int64_t $tmp3047 = $tmp3046.value;
int64_t $tmp3048 = $tmp2936.value;
bool $tmp3049 = $tmp3047 >= $tmp3048;
frost$core$Bit $tmp3050 = (frost$core$Bit) {$tmp3049};
bool $tmp3051 = $tmp3050.value;
if ($tmp3051) goto block103; else goto block81;
block105:;
int64_t $tmp3052 = $tmp3046.value;
int64_t $tmp3053 = $tmp2936.value;
bool $tmp3054 = $tmp3052 > $tmp3053;
frost$core$Bit $tmp3055 = (frost$core$Bit) {$tmp3054};
bool $tmp3056 = $tmp3055.value;
if ($tmp3056) goto block103; else goto block81;
block103:;
int64_t $tmp3057 = $tmp3042.value;
int64_t $tmp3058 = $tmp2936.value;
int64_t $tmp3059 = $tmp3057 + $tmp3058;
frost$core$Int $tmp3060 = (frost$core$Int) {$tmp3059};
*(&local30) = $tmp3060;
goto block80;
block81:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:428
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:429
org$frostlang$frostc$MethodDecl* $tmp3061 = *(&local11);
org$frostlang$frostc$MethodDecl$Kind* $tmp3062 = &$tmp3061->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3063 = *$tmp3062;
frost$core$Int $tmp3064 = $tmp3063.$rawValue;
frost$core$Int $tmp3065 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:430:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3066 = $tmp3064.value;
int64_t $tmp3067 = $tmp3065.value;
bool $tmp3068 = $tmp3066 == $tmp3067;
frost$core$Bit $tmp3069 = (frost$core$Bit) {$tmp3068};
bool $tmp3070 = $tmp3069.value;
if ($tmp3070) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:430
frost$core$Int $tmp3071 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Closure.frost:430:68
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3072 = &(&local41)->$rawValue;
*$tmp3072 = $tmp3071;
org$frostlang$frostc$Type$Kind $tmp3073 = *(&local41);
*(&local40) = $tmp3073;
org$frostlang$frostc$Type$Kind $tmp3074 = *(&local40);
*(&local39) = $tmp3074;
goto block106;
block108:;
frost$core$Int $tmp3075 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:431:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3076 = $tmp3064.value;
int64_t $tmp3077 = $tmp3075.value;
bool $tmp3078 = $tmp3076 == $tmp3077;
frost$core$Bit $tmp3079 = (frost$core$Bit) {$tmp3078};
bool $tmp3080 = $tmp3079.value;
if ($tmp3080) goto block111; else goto block112;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:431
frost$core$Int $tmp3081 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Closure.frost:431:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3082 = &(&local43)->$rawValue;
*$tmp3082 = $tmp3081;
org$frostlang$frostc$Type$Kind $tmp3083 = *(&local43);
*(&local42) = $tmp3083;
org$frostlang$frostc$Type$Kind $tmp3084 = *(&local42);
*(&local39) = $tmp3084;
goto block106;
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:432
frost$core$Int $tmp3085 = (frost$core$Int) {432u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3086, $tmp3085);
abort(); // unreachable
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:434
org$frostlang$frostc$Type$Kind $tmp3087 = *(&local39);
frost$collections$Array* $tmp3088 = *(&local29);
org$frostlang$frostc$Type* $tmp3089 = *(&local28);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:435:28
org$frostlang$frostc$Type$Kind* $tmp3090 = &$tmp3089->typeKind;
org$frostlang$frostc$Type$Kind $tmp3091 = *$tmp3090;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3092;
$tmp3092 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3092->value = $tmp3091;
frost$core$Int $tmp3093 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3094 = &(&local45)->$rawValue;
*$tmp3094 = $tmp3093;
org$frostlang$frostc$Type$Kind $tmp3095 = *(&local45);
*(&local44) = $tmp3095;
org$frostlang$frostc$Type$Kind $tmp3096 = *(&local44);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3097;
$tmp3097 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3097->value = $tmp3096;
ITable* $tmp3098 = ((frost$core$Equatable*) $tmp3092)->$class->itable;
while ($tmp3098->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3098 = $tmp3098->next;
}
$fn3100 $tmp3099 = $tmp3098->methods[0];
frost$core$Bit $tmp3101 = $tmp3099(((frost$core$Equatable*) $tmp3092), ((frost$core$Equatable*) $tmp3097));
bool $tmp3102 = $tmp3101.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3097)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3092)));
if ($tmp3102) goto block116; else goto block120;
block120:;
org$frostlang$frostc$Type$Kind* $tmp3103 = &$tmp3089->typeKind;
org$frostlang$frostc$Type$Kind $tmp3104 = *$tmp3103;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3105;
$tmp3105 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3105->value = $tmp3104;
frost$core$Int $tmp3106 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3107 = &(&local47)->$rawValue;
*$tmp3107 = $tmp3106;
org$frostlang$frostc$Type$Kind $tmp3108 = *(&local47);
*(&local46) = $tmp3108;
org$frostlang$frostc$Type$Kind $tmp3109 = *(&local46);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3110;
$tmp3110 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3110->value = $tmp3109;
ITable* $tmp3111 = ((frost$core$Equatable*) $tmp3105)->$class->itable;
while ($tmp3111->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3111 = $tmp3111->next;
}
$fn3113 $tmp3112 = $tmp3111->methods[0];
frost$core$Bit $tmp3114 = $tmp3112(((frost$core$Equatable*) $tmp3105), ((frost$core$Equatable*) $tmp3110));
bool $tmp3115 = $tmp3114.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3110)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3105)));
if ($tmp3115) goto block116; else goto block119;
block119:;
org$frostlang$frostc$Type$Kind* $tmp3116 = &$tmp3089->typeKind;
org$frostlang$frostc$Type$Kind $tmp3117 = *$tmp3116;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3118;
$tmp3118 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3118->value = $tmp3117;
frost$core$Int $tmp3119 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3120 = &(&local49)->$rawValue;
*$tmp3120 = $tmp3119;
org$frostlang$frostc$Type$Kind $tmp3121 = *(&local49);
*(&local48) = $tmp3121;
org$frostlang$frostc$Type$Kind $tmp3122 = *(&local48);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3123;
$tmp3123 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3123->value = $tmp3122;
ITable* $tmp3124 = ((frost$core$Equatable*) $tmp3118)->$class->itable;
while ($tmp3124->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3124 = $tmp3124->next;
}
$fn3126 $tmp3125 = $tmp3124->methods[0];
frost$core$Bit $tmp3127 = $tmp3125(((frost$core$Equatable*) $tmp3118), ((frost$core$Equatable*) $tmp3123));
bool $tmp3128 = $tmp3127.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3123)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3118)));
if ($tmp3128) goto block116; else goto block118;
block118:;
org$frostlang$frostc$Type$Kind* $tmp3129 = &$tmp3089->typeKind;
org$frostlang$frostc$Type$Kind $tmp3130 = *$tmp3129;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3131;
$tmp3131 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3131->value = $tmp3130;
frost$core$Int $tmp3132 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3133 = &(&local51)->$rawValue;
*$tmp3133 = $tmp3132;
org$frostlang$frostc$Type$Kind $tmp3134 = *(&local51);
*(&local50) = $tmp3134;
org$frostlang$frostc$Type$Kind $tmp3135 = *(&local50);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3136;
$tmp3136 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3136->value = $tmp3135;
ITable* $tmp3137 = ((frost$core$Equatable*) $tmp3131)->$class->itable;
while ($tmp3137->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3137 = $tmp3137->next;
}
$fn3139 $tmp3138 = $tmp3137->methods[0];
frost$core$Bit $tmp3140 = $tmp3138(((frost$core$Equatable*) $tmp3131), ((frost$core$Equatable*) $tmp3136));
bool $tmp3141 = $tmp3140.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3136)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3131)));
if ($tmp3141) goto block116; else goto block117;
block117:;
frost$core$Int $tmp3142 = (frost$core$Int) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3143, $tmp3142, &$s3144);
abort(); // unreachable
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3145 = &$tmp3089->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3146 = *$tmp3145;
frost$core$Bit $tmp3147 = (frost$core$Bit) {$tmp3146 != NULL};
bool $tmp3148 = $tmp3147.value;
if ($tmp3148) goto block126; else goto block127;
block127:;
frost$core$Int $tmp3149 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3150, $tmp3149);
abort(); // unreachable
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3151 = &$tmp3089->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3152 = *$tmp3151;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3152));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3153 = &$tmp3089->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3154 = *$tmp3153;
frost$core$Bit $tmp3155 = (frost$core$Bit) {$tmp3154 != NULL};
bool $tmp3156 = $tmp3155.value;
if ($tmp3156) goto block129; else goto block130;
block130:;
frost$core$Int $tmp3157 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3158, $tmp3157);
abort(); // unreachable
block129:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3159 = &$tmp3089->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3160 = *$tmp3159;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
ITable* $tmp3161 = ((frost$collections$CollectionView*) $tmp3160)->$class->itable;
while ($tmp3161->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3161 = $tmp3161->next;
}
$fn3163 $tmp3162 = $tmp3161->methods[0];
frost$core$Int $tmp3164 = $tmp3162(((frost$collections$CollectionView*) $tmp3160));
frost$core$Int $tmp3165 = (frost$core$Int) {1u};
int64_t $tmp3166 = $tmp3164.value;
int64_t $tmp3167 = $tmp3165.value;
int64_t $tmp3168 = $tmp3166 - $tmp3167;
frost$core$Int $tmp3169 = (frost$core$Int) {$tmp3168};
frost$core$Object* $tmp3170 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3152, $tmp3169);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3170)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3170);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3152));
org$frostlang$frostc$Type* $tmp3171 = *(&local28);
frost$core$Int* $tmp3172 = &$tmp3171->priority;
frost$core$Int $tmp3173 = *$tmp3172;
org$frostlang$frostc$Type* $tmp3174 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param0, param1, $tmp3087, ((frost$collections$ListView*) $tmp3088), ((org$frostlang$frostc$Type*) $tmp3170), $tmp3173);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3174));
org$frostlang$frostc$Type* $tmp3175 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3175));
*(&local27) = $tmp3174;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3170)));
frost$collections$Array* $tmp3176 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3176));
*(&local29) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3177 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3177));
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
goto block75;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:437
org$frostlang$frostc$Type* $tmp3178 = *(&local26);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:438:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3685
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp3179 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp3180 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3685:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
org$frostlang$frostc$Type** $tmp3181 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp3182 = *$tmp3181;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3183 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3184 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp3183, $tmp3184);
frost$collections$Array$add$frost$collections$Array$T($tmp3183, ((frost$core$Object*) $tmp3178));
org$frostlang$frostc$Type* $tmp3185 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp3182, ((frost$collections$ListView*) $tmp3183));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3183));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp3179, $tmp3180, $tmp3178, $tmp3185);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3179));
frost$collections$Array* $tmp3186 = *(&local23);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3187 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3188 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp3187, $tmp3188);
org$frostlang$frostc$IR$Value* $tmp3189 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3179, ((frost$collections$ListView*) $tmp3186), $tmp3187);
org$frostlang$frostc$Type* $tmp3190 = *(&local27);
org$frostlang$frostc$IR$Value* $tmp3191 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3189, $tmp3190);
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
org$frostlang$frostc$IR$Value* $tmp3192 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
*(&local52) = $tmp3191;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3179));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:439
org$frostlang$frostc$IR$Value* $tmp3193 = *(&local52);
org$frostlang$frostc$IR$Value* $tmp3194 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3193, param6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3194));
org$frostlang$frostc$IR$Value* $tmp3195 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3195));
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp3196 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3196));
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3197 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3197));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3198 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3198));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3199 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3199));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp3200 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3200));
*(&local23) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3201 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp3202 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3202));
*(&local14) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp3203 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3203));
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp3204 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
*(&local10) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp3205 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3205));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp3206 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3206));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp3207 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3207));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp3208 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3208));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3194;

}
void org$frostlang$frostc$expression$Closure$init(org$frostlang$frostc$expression$Closure* param0) {

return;

}
void org$frostlang$frostc$expression$Closure$cleanup(org$frostlang$frostc$expression$Closure* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:23
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

