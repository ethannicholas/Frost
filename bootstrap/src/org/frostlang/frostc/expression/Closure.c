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
#include "frost/collections/HashKey.h"
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
typedef frost$core$Int (*$fn244)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn258)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn273)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn292)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn316)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn320)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn325)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn463)(frost$core$Object*);
typedef frost$core$Int (*$fn481)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn495)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn510)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn529)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn567)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn581)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn596)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn615)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn638)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn657)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn661)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn666)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn845)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn849)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn854)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn981)(frost$core$Object*);
typedef frost$core$Int (*$fn1013)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1027)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1042)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1061)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1094)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1116)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn1242)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1297)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1310)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1323)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1336)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1351)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn1439)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1452)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1465)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1478)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1493)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn1523)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1578)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1601)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1614)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1627)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1640)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1655)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn1711)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1759)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1772)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1785)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1798)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1811)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1826)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1840)(frost$core$Object*);
typedef frost$core$Int (*$fn1856)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1910)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1923)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1936)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1949)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1967)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2030)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2053)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2066)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2079)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2092)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn2107)(frost$collections$ListView*);
typedef frost$core$Int (*$fn2156)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2173)(org$frostlang$frostc$Type*, org$frostlang$frostc$Type*);
typedef frost$collections$ListView* (*$fn2181)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn2192)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2196)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2201)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2207)(frost$core$Object*);
typedef frost$core$String* (*$fn2240)(frost$core$Object*);
typedef frost$core$String* (*$fn2248)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2341)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn2345)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2364)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2375)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2379)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2384)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2470)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn2491)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2505)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2520)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2539)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2578)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2592)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2607)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2626)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2677)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn2691)(frost$collections$MapView*);
typedef frost$collections$Array* (*$fn2695)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2706)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn2710)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2715)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2934)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2971)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2984)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2997)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3010)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn3028)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3109)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3122)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3135)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3148)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn3163)(frost$collections$ListView*);

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
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s490 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s503 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s576 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s589 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s623 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s624 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65", 9, -4675300513998866085, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s699 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s741 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s765 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 5866430320110526525, NULL };
static frost$core$String $s776 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s777 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 5866430320110526525, NULL };
static frost$core$String $s785 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 5866430320110526525, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, -733330526605839853, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s965 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 5866430320110526525, NULL };
static frost$core$String $s983 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s1021 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s1022 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s1035 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s1069 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1070 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s1155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s1173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s1174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s1188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s1189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s1250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s1384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 132, 3365872483370042718, NULL };
static frost$core$String $s1411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s1412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s1427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s1428 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s1482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1490 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1531 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1532 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1587 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1645 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1651 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1652 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1719 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1720 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1816 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 95, -6421234203817919051, NULL };
static frost$core$String $s1822 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1823 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1843 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, -5098893480802846476, NULL };
static frost$core$String $s1845 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x6c\x61\x6d\x62\x64\x61\x20\x77\x69\x74\x68\x20\x77\x72\x6f\x6e\x67\x20", 31, 8296972873421398743, NULL };
static frost$core$String $s1847 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 20, 2029680644997683659, NULL };
static frost$core$String $s1963 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1964 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1980 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1981 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 117, 1927758743463322527, NULL };
static frost$core$String $s1987 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1988 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2004 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2038 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2039 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2096 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2097 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s2103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s2152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 123, -543374651263163857, NULL };
static frost$core$String $s2169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 150, -6280214603342802922, NULL };
static frost$core$String $s2184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x65\x72\x72\x6f\x72", 12, 5959780354246604584, NULL };
static frost$core$String $s2210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x77\x68\x65\x6e\x20\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x64\x20\x61\x73\x20\x27", 26, -4042546728974569170, NULL };
static frost$core$String $s2212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3a", 2, 557192943631749204, NULL };
static frost$core$String $s2243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x72\x65\x63\x65\x69\x76\x65\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 51, 3365978283385468850, NULL };
static frost$core$String $s2245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20", 6, -1493373441645224251, NULL };
static frost$core$String $s2251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x20", 5, -4937494473629816297, NULL };
static frost$core$String $s2253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, -3892980340820393091, NULL };
static frost$core$String $s2296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, -3892980340820393091, NULL };
static frost$core$String $s2318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2338 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 117, 2608421625850791536, NULL };
static frost$core$String $s2350 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x74\x79\x70\x65\x20\x77\x61\x73\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x61\x6e\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x63\x6f\x6e\x74\x65\x78\x74", 67, -2078875877935671909, NULL };
static frost$core$String $s2367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 10, 2350954303234509524, NULL };
static frost$core$String $s2369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2428 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s2434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s2450 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2451 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s2473 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 4631530323501320402, NULL };
static frost$core$String $s2499 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s2500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s2513 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s2547 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s2587 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s2600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s2634 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2635 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2760 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s2808 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2809 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2865 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2898 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2899 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s2905 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s2906 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s2930 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2931 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3024 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3025 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3041 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3042 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 117, 1927758743463322527, NULL };
static frost$core$String $s3048 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3049 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s3095 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 7078417371384260942, NULL };
static frost$core$String $s3152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s3159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s3160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };

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
frost$core$Bit $tmp208 = (frost$core$Bit) {((org$frostlang$frostc$ClassDecl*) $tmp207) != NULL};
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block40; else goto block41;
block41:;
frost$core$Int $tmp210 = (frost$core$Int) {32u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s211, $tmp210, &$s212);
abort(); // unreachable
block40:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp207)));
org$frostlang$frostc$ClassDecl* $tmp213 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp207);
frost$core$Frost$unref$frost$core$Object$Q($tmp207);
goto block12;
block13:;
goto block42;
block42:;

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
org$frostlang$frostc$Position* $tmp214 = &((org$frostlang$frostc$Symbol*) param1)->position;
org$frostlang$frostc$Position $tmp215 = *$tmp214;
*(&local0) = $tmp215;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:40
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp216 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp217 = (frost$core$Int) {0u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp216, $tmp217);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
org$frostlang$frostc$Annotations** $tmp218 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp219 = *$tmp218;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
org$frostlang$frostc$Annotations** $tmp220 = &param1->annotations;
*$tmp220 = $tmp216;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:41
frost$core$Int* $tmp221 = &param0->closureCount;
frost$core$Int $tmp222 = *$tmp221;
frost$core$Int $tmp223 = (frost$core$Int) {1u};
int64_t $tmp224 = $tmp222.value;
int64_t $tmp225 = $tmp223.value;
int64_t $tmp226 = $tmp224 + $tmp225;
frost$core$Int $tmp227 = (frost$core$Int) {$tmp226};
frost$core$Int* $tmp228 = &param0->closureCount;
*$tmp228 = $tmp227;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:42
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp229 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp229);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$collections$Array* $tmp230 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
*(&local1) = $tmp229;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:43
frost$collections$Stack** $tmp231 = &param0->currentClass;
frost$collections$Stack* $tmp232 = *$tmp231;
frost$core$Int $tmp233 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Closure.frost:43:54
frost$core$Int $tmp234 = (frost$core$Int) {0u};
int64_t $tmp235 = $tmp233.value;
int64_t $tmp236 = $tmp234.value;
bool $tmp237 = $tmp235 >= $tmp236;
frost$core$Bit $tmp238 = (frost$core$Bit) {$tmp237};
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block6; else goto block5;
block6:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp240 = &$tmp232->contents;
frost$collections$Array* $tmp241 = *$tmp240;
ITable* $tmp242 = ((frost$collections$CollectionView*) $tmp241)->$class->itable;
while ($tmp242->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp242 = $tmp242->next;
}
$fn244 $tmp243 = $tmp242->methods[0];
frost$core$Int $tmp245 = $tmp243(((frost$collections$CollectionView*) $tmp241));
int64_t $tmp246 = $tmp233.value;
int64_t $tmp247 = $tmp245.value;
bool $tmp248 = $tmp246 < $tmp247;
frost$core$Bit $tmp249 = (frost$core$Bit) {$tmp248};
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block4; else goto block5;
block5:;
frost$core$Int $tmp251 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s252, $tmp251, &$s253);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp254 = &$tmp232->contents;
frost$collections$Array* $tmp255 = *$tmp254;
ITable* $tmp256 = ((frost$collections$CollectionView*) $tmp255)->$class->itable;
while ($tmp256->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[0];
frost$core$Int $tmp259 = $tmp257(((frost$collections$CollectionView*) $tmp255));
int64_t $tmp260 = $tmp259.value;
int64_t $tmp261 = $tmp233.value;
bool $tmp262 = $tmp260 > $tmp261;
frost$core$Bit $tmp263 = (frost$core$Bit) {$tmp262};
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block8; else goto block9;
block9:;
frost$core$Int $tmp265 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s266, $tmp265);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp267 = &$tmp232->contents;
frost$collections$Array* $tmp268 = *$tmp267;
frost$collections$Array** $tmp269 = &$tmp232->contents;
frost$collections$Array* $tmp270 = *$tmp269;
ITable* $tmp271 = ((frost$collections$CollectionView*) $tmp270)->$class->itable;
while ($tmp271->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp271 = $tmp271->next;
}
$fn273 $tmp272 = $tmp271->methods[0];
frost$core$Int $tmp274 = $tmp272(((frost$collections$CollectionView*) $tmp270));
frost$core$Int $tmp275 = (frost$core$Int) {1u};
int64_t $tmp276 = $tmp274.value;
int64_t $tmp277 = $tmp275.value;
int64_t $tmp278 = $tmp276 - $tmp277;
frost$core$Int $tmp279 = (frost$core$Int) {$tmp278};
int64_t $tmp280 = $tmp279.value;
int64_t $tmp281 = $tmp233.value;
int64_t $tmp282 = $tmp280 - $tmp281;
frost$core$Int $tmp283 = (frost$core$Int) {$tmp282};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp284 = (frost$core$Int) {0u};
int64_t $tmp285 = $tmp283.value;
int64_t $tmp286 = $tmp284.value;
bool $tmp287 = $tmp285 >= $tmp286;
frost$core$Bit $tmp288 = (frost$core$Bit) {$tmp287};
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block13; else goto block12;
block13:;
ITable* $tmp290 = ((frost$collections$CollectionView*) $tmp268)->$class->itable;
while ($tmp290->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp290 = $tmp290->next;
}
$fn292 $tmp291 = $tmp290->methods[0];
frost$core$Int $tmp293 = $tmp291(((frost$collections$CollectionView*) $tmp268));
int64_t $tmp294 = $tmp283.value;
int64_t $tmp295 = $tmp293.value;
bool $tmp296 = $tmp294 < $tmp295;
frost$core$Bit $tmp297 = (frost$core$Bit) {$tmp296};
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block11; else goto block12;
block12:;
frost$core$Int $tmp299 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s300, $tmp299, &$s301);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp302 = &$tmp268->data;
frost$core$Object** $tmp303 = *$tmp302;
frost$core$Int64 $tmp304 = frost$core$Int64$init$frost$core$Int($tmp283);
int64_t $tmp305 = $tmp304.value;
frost$core$Object* $tmp306 = $tmp303[$tmp305];
frost$core$Frost$ref$frost$core$Object$Q($tmp306);
frost$core$Frost$ref$frost$core$Object$Q($tmp306);
frost$core$Frost$unref$frost$core$Object$Q($tmp306);
org$frostlang$frostc$Type** $tmp307 = &((org$frostlang$frostc$ClassDecl*) $tmp306)->type;
org$frostlang$frostc$Type* $tmp308 = *$tmp307;
frost$core$Bit $tmp309 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp308);
bool $tmp310 = $tmp309.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp306);
if ($tmp310) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:44
frost$collections$Array* $tmp311 = *(&local1);
org$frostlang$frostc$Type** $tmp312 = &param0->IMMUTABLE_TYPE;
org$frostlang$frostc$Type* $tmp313 = *$tmp312;
frost$collections$Array$add$frost$collections$Array$T($tmp311, ((frost$core$Object*) $tmp313));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:45
ITable* $tmp314 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp314->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp314 = $tmp314->next;
}
$fn316 $tmp315 = $tmp314->methods[0];
frost$collections$Iterator* $tmp317 = $tmp315(((frost$collections$Iterable*) param2));
goto block14;
block14:;
ITable* $tmp318 = $tmp317->$class->itable;
while ($tmp318->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp318 = $tmp318->next;
}
$fn320 $tmp319 = $tmp318->methods[0];
frost$core$Bit $tmp321 = $tmp319($tmp317);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block16; else goto block15;
block15:;
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp323 = $tmp317->$class->itable;
while ($tmp323->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp323 = $tmp323->next;
}
$fn325 $tmp324 = $tmp323->methods[1];
frost$core$Object* $tmp326 = $tmp324($tmp317);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp326)));
org$frostlang$frostc$Compiler$Capture* $tmp327 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) $tmp326);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:46
org$frostlang$frostc$Compiler$Capture* $tmp328 = *(&local2);
frost$core$Int* $tmp329 = &$tmp328->$rawValue;
frost$core$Int $tmp330 = *$tmp329;
frost$core$Int $tmp331 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:47:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp332 = $tmp330.value;
int64_t $tmp333 = $tmp331.value;
bool $tmp334 = $tmp332 == $tmp333;
frost$core$Bit $tmp335 = (frost$core$Bit) {$tmp334};
bool $tmp336 = $tmp335.value;
if ($tmp336) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Variable** $tmp337 = (org$frostlang$frostc$Variable**) ($tmp328->$data + 0);
org$frostlang$frostc$Variable* $tmp338 = *$tmp337;
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
org$frostlang$frostc$Variable* $tmp339 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
*(&local3) = $tmp338;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:48
org$frostlang$frostc$Variable* $tmp340 = *(&local3);
org$frostlang$frostc$Type** $tmp341 = &$tmp340->type;
org$frostlang$frostc$Type* $tmp342 = *$tmp341;
frost$core$Bit $tmp343 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp342);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Closure.frost:48:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp344 = $tmp343.value;
bool $tmp345 = !$tmp344;
frost$core$Bit $tmp346 = (frost$core$Bit) {$tmp345};
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:49
frost$collections$Array* $tmp348 = *(&local1);
// begin inline call to method frost.collections.Array.clear() from Closure.frost:49:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
frost$core$Int $tmp349 = (frost$core$Int) {0u};
frost$core$Int* $tmp350 = &$tmp348->_count;
*$tmp350 = $tmp349;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
frost$core$Int $tmp351 = (frost$core$Int) {0u};
frost$core$Int* $tmp352 = &$tmp348->capacity;
frost$core$Int $tmp353 = *$tmp352;
frost$core$Bit $tmp354 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp355 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp351, $tmp353, $tmp354);
frost$core$Int $tmp356 = $tmp355.min;
*(&local4) = $tmp356;
frost$core$Int $tmp357 = $tmp355.max;
frost$core$Bit $tmp358 = $tmp355.inclusive;
bool $tmp359 = $tmp358.value;
frost$core$Int $tmp360 = (frost$core$Int) {1u};
if ($tmp359) goto block28; else goto block29;
block28:;
int64_t $tmp361 = $tmp356.value;
int64_t $tmp362 = $tmp357.value;
bool $tmp363 = $tmp361 <= $tmp362;
frost$core$Bit $tmp364 = (frost$core$Bit) {$tmp363};
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block25; else goto block26;
block29:;
int64_t $tmp366 = $tmp356.value;
int64_t $tmp367 = $tmp357.value;
bool $tmp368 = $tmp366 < $tmp367;
frost$core$Bit $tmp369 = (frost$core$Bit) {$tmp368};
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp371 = &$tmp348->data;
frost$core$Object** $tmp372 = *$tmp371;
frost$core$Int $tmp373 = *(&local4);
frost$core$Int64 $tmp374 = frost$core$Int64$init$frost$core$Int($tmp373);
int64_t $tmp375 = $tmp374.value;
frost$core$Object* $tmp376 = $tmp372[$tmp375];
frost$core$Frost$unref$frost$core$Object$Q($tmp376);
$tmp372[$tmp375] = ((frost$core$Object*) NULL);
frost$core$Int $tmp377 = *(&local4);
int64_t $tmp378 = $tmp357.value;
int64_t $tmp379 = $tmp377.value;
int64_t $tmp380 = $tmp378 - $tmp379;
frost$core$Int $tmp381 = (frost$core$Int) {$tmp380};
if ($tmp359) goto block31; else goto block32;
block31:;
int64_t $tmp382 = $tmp381.value;
int64_t $tmp383 = $tmp360.value;
bool $tmp384 = $tmp382 >= $tmp383;
frost$core$Bit $tmp385 = (frost$core$Bit) {$tmp384};
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block30; else goto block26;
block32:;
int64_t $tmp387 = $tmp381.value;
int64_t $tmp388 = $tmp360.value;
bool $tmp389 = $tmp387 > $tmp388;
frost$core$Bit $tmp390 = (frost$core$Bit) {$tmp389};
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block30; else goto block26;
block30:;
int64_t $tmp392 = $tmp377.value;
int64_t $tmp393 = $tmp360.value;
int64_t $tmp394 = $tmp392 + $tmp393;
frost$core$Int $tmp395 = (frost$core$Int) {$tmp394};
*(&local4) = $tmp395;
goto block25;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:50
org$frostlang$frostc$Variable* $tmp396 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp326);
org$frostlang$frostc$Compiler$Capture* $tmp397 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block16;
block22:;
org$frostlang$frostc$Variable* $tmp398 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local3) = ((org$frostlang$frostc$Variable*) NULL);
goto block17;
block19:;
frost$core$Int $tmp399 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:53:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp400 = $tmp330.value;
int64_t $tmp401 = $tmp399.value;
bool $tmp402 = $tmp400 == $tmp401;
frost$core$Bit $tmp403 = (frost$core$Bit) {$tmp402};
bool $tmp404 = $tmp403.value;
if ($tmp404) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:54
org$frostlang$frostc$Type* $tmp405 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
frost$core$Bit $tmp406 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp405);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Closure.frost:54:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp407 = $tmp406.value;
bool $tmp408 = !$tmp407;
frost$core$Bit $tmp409 = (frost$core$Bit) {$tmp408};
bool $tmp410 = $tmp409.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
if ($tmp410) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:55
frost$collections$Array* $tmp411 = *(&local1);
// begin inline call to method frost.collections.Array.clear() from Closure.frost:55:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
frost$core$Int $tmp412 = (frost$core$Int) {0u};
frost$core$Int* $tmp413 = &$tmp411->_count;
*$tmp413 = $tmp412;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
frost$core$Int $tmp414 = (frost$core$Int) {0u};
frost$core$Int* $tmp415 = &$tmp411->capacity;
frost$core$Int $tmp416 = *$tmp415;
frost$core$Bit $tmp417 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp418 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp414, $tmp416, $tmp417);
frost$core$Int $tmp419 = $tmp418.min;
*(&local5) = $tmp419;
frost$core$Int $tmp420 = $tmp418.max;
frost$core$Bit $tmp421 = $tmp418.inclusive;
bool $tmp422 = $tmp421.value;
frost$core$Int $tmp423 = (frost$core$Int) {1u};
if ($tmp422) goto block43; else goto block44;
block43:;
int64_t $tmp424 = $tmp419.value;
int64_t $tmp425 = $tmp420.value;
bool $tmp426 = $tmp424 <= $tmp425;
frost$core$Bit $tmp427 = (frost$core$Bit) {$tmp426};
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block40; else goto block41;
block44:;
int64_t $tmp429 = $tmp419.value;
int64_t $tmp430 = $tmp420.value;
bool $tmp431 = $tmp429 < $tmp430;
frost$core$Bit $tmp432 = (frost$core$Bit) {$tmp431};
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp434 = &$tmp411->data;
frost$core$Object** $tmp435 = *$tmp434;
frost$core$Int $tmp436 = *(&local5);
frost$core$Int64 $tmp437 = frost$core$Int64$init$frost$core$Int($tmp436);
int64_t $tmp438 = $tmp437.value;
frost$core$Object* $tmp439 = $tmp435[$tmp438];
frost$core$Frost$unref$frost$core$Object$Q($tmp439);
$tmp435[$tmp438] = ((frost$core$Object*) NULL);
frost$core$Int $tmp440 = *(&local5);
int64_t $tmp441 = $tmp420.value;
int64_t $tmp442 = $tmp440.value;
int64_t $tmp443 = $tmp441 - $tmp442;
frost$core$Int $tmp444 = (frost$core$Int) {$tmp443};
if ($tmp422) goto block46; else goto block47;
block46:;
int64_t $tmp445 = $tmp444.value;
int64_t $tmp446 = $tmp423.value;
bool $tmp447 = $tmp445 >= $tmp446;
frost$core$Bit $tmp448 = (frost$core$Bit) {$tmp447};
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block45; else goto block41;
block47:;
int64_t $tmp450 = $tmp444.value;
int64_t $tmp451 = $tmp423.value;
bool $tmp452 = $tmp450 > $tmp451;
frost$core$Bit $tmp453 = (frost$core$Bit) {$tmp452};
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block45; else goto block41;
block45:;
int64_t $tmp455 = $tmp440.value;
int64_t $tmp456 = $tmp423.value;
int64_t $tmp457 = $tmp455 + $tmp456;
frost$core$Int $tmp458 = (frost$core$Int) {$tmp457};
*(&local5) = $tmp458;
goto block40;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:56
frost$core$Frost$unref$frost$core$Object$Q($tmp326);
org$frostlang$frostc$Compiler$Capture* $tmp459 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block16;
block37:;
goto block17;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:60
frost$core$Int $tmp460 = (frost$core$Int) {60u};
org$frostlang$frostc$Compiler$Capture* $tmp461 = *(&local2);
$fn463 $tmp462 = ($fn463) ((frost$core$Object*) $tmp461)->$class->vtable[0];
frost$core$String* $tmp464 = $tmp462(((frost$core$Object*) $tmp461));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s465, $tmp460, $tmp464);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
abort(); // unreachable
block17:;
frost$core$Frost$unref$frost$core$Object$Q($tmp326);
org$frostlang$frostc$Compiler$Capture* $tmp466 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
*(&local2) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:65
FROST_ASSERT(208 == sizeof(org$frostlang$frostc$ClassDecl));
org$frostlang$frostc$ClassDecl* $tmp467 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$collections$Stack** $tmp468 = &param0->currentClass;
frost$collections$Stack* $tmp469 = *$tmp468;
frost$core$Int $tmp470 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Closure.frost:65:54
frost$core$Int $tmp471 = (frost$core$Int) {0u};
int64_t $tmp472 = $tmp470.value;
int64_t $tmp473 = $tmp471.value;
bool $tmp474 = $tmp472 >= $tmp473;
frost$core$Bit $tmp475 = (frost$core$Bit) {$tmp474};
bool $tmp476 = $tmp475.value;
if ($tmp476) goto block51; else goto block50;
block51:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp477 = &$tmp469->contents;
frost$collections$Array* $tmp478 = *$tmp477;
ITable* $tmp479 = ((frost$collections$CollectionView*) $tmp478)->$class->itable;
while ($tmp479->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp479 = $tmp479->next;
}
$fn481 $tmp480 = $tmp479->methods[0];
frost$core$Int $tmp482 = $tmp480(((frost$collections$CollectionView*) $tmp478));
int64_t $tmp483 = $tmp470.value;
int64_t $tmp484 = $tmp482.value;
bool $tmp485 = $tmp483 < $tmp484;
frost$core$Bit $tmp486 = (frost$core$Bit) {$tmp485};
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block49; else goto block50;
block50:;
frost$core$Int $tmp488 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s489, $tmp488, &$s490);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp491 = &$tmp469->contents;
frost$collections$Array* $tmp492 = *$tmp491;
ITable* $tmp493 = ((frost$collections$CollectionView*) $tmp492)->$class->itable;
while ($tmp493->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp493 = $tmp493->next;
}
$fn495 $tmp494 = $tmp493->methods[0];
frost$core$Int $tmp496 = $tmp494(((frost$collections$CollectionView*) $tmp492));
int64_t $tmp497 = $tmp496.value;
int64_t $tmp498 = $tmp470.value;
bool $tmp499 = $tmp497 > $tmp498;
frost$core$Bit $tmp500 = (frost$core$Bit) {$tmp499};
bool $tmp501 = $tmp500.value;
if ($tmp501) goto block53; else goto block54;
block54:;
frost$core$Int $tmp502 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s503, $tmp502);
abort(); // unreachable
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp504 = &$tmp469->contents;
frost$collections$Array* $tmp505 = *$tmp504;
frost$collections$Array** $tmp506 = &$tmp469->contents;
frost$collections$Array* $tmp507 = *$tmp506;
ITable* $tmp508 = ((frost$collections$CollectionView*) $tmp507)->$class->itable;
while ($tmp508->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp508 = $tmp508->next;
}
$fn510 $tmp509 = $tmp508->methods[0];
frost$core$Int $tmp511 = $tmp509(((frost$collections$CollectionView*) $tmp507));
frost$core$Int $tmp512 = (frost$core$Int) {1u};
int64_t $tmp513 = $tmp511.value;
int64_t $tmp514 = $tmp512.value;
int64_t $tmp515 = $tmp513 - $tmp514;
frost$core$Int $tmp516 = (frost$core$Int) {$tmp515};
int64_t $tmp517 = $tmp516.value;
int64_t $tmp518 = $tmp470.value;
int64_t $tmp519 = $tmp517 - $tmp518;
frost$core$Int $tmp520 = (frost$core$Int) {$tmp519};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp521 = (frost$core$Int) {0u};
int64_t $tmp522 = $tmp520.value;
int64_t $tmp523 = $tmp521.value;
bool $tmp524 = $tmp522 >= $tmp523;
frost$core$Bit $tmp525 = (frost$core$Bit) {$tmp524};
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block58; else goto block57;
block58:;
ITable* $tmp527 = ((frost$collections$CollectionView*) $tmp505)->$class->itable;
while ($tmp527->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp527 = $tmp527->next;
}
$fn529 $tmp528 = $tmp527->methods[0];
frost$core$Int $tmp530 = $tmp528(((frost$collections$CollectionView*) $tmp505));
int64_t $tmp531 = $tmp520.value;
int64_t $tmp532 = $tmp530.value;
bool $tmp533 = $tmp531 < $tmp532;
frost$core$Bit $tmp534 = (frost$core$Bit) {$tmp533};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block56; else goto block57;
block57:;
frost$core$Int $tmp536 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s537, $tmp536, &$s538);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp539 = &$tmp505->data;
frost$core$Object** $tmp540 = *$tmp539;
frost$core$Int64 $tmp541 = frost$core$Int64$init$frost$core$Int($tmp520);
int64_t $tmp542 = $tmp541.value;
frost$core$Object* $tmp543 = $tmp540[$tmp542];
frost$core$Frost$ref$frost$core$Object$Q($tmp543);
frost$core$Frost$ref$frost$core$Object$Q($tmp543);
frost$core$Frost$unref$frost$core$Object$Q($tmp543);
frost$io$File** $tmp544 = &((org$frostlang$frostc$ClassDecl*) $tmp543)->source;
frost$io$File* $tmp545 = *$tmp544;
org$frostlang$frostc$Position $tmp546 = *(&local0);
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp547 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp547);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp548 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp549 = (frost$core$Int) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp548, $tmp549);
frost$core$Int $tmp550 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Closure.frost:66:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp551 = &(&local7)->$rawValue;
*$tmp551 = $tmp550;
org$frostlang$frostc$ClassDecl$Kind $tmp552 = *(&local7);
*(&local6) = $tmp552;
org$frostlang$frostc$ClassDecl$Kind $tmp553 = *(&local6);
frost$collections$Stack** $tmp554 = &param0->currentClass;
frost$collections$Stack* $tmp555 = *$tmp554;
frost$core$Int $tmp556 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Closure.frost:67:41
frost$core$Int $tmp557 = (frost$core$Int) {0u};
int64_t $tmp558 = $tmp556.value;
int64_t $tmp559 = $tmp557.value;
bool $tmp560 = $tmp558 >= $tmp559;
frost$core$Bit $tmp561 = (frost$core$Bit) {$tmp560};
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block63; else goto block62;
block63:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp563 = &$tmp555->contents;
frost$collections$Array* $tmp564 = *$tmp563;
ITable* $tmp565 = ((frost$collections$CollectionView*) $tmp564)->$class->itable;
while ($tmp565->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp565 = $tmp565->next;
}
$fn567 $tmp566 = $tmp565->methods[0];
frost$core$Int $tmp568 = $tmp566(((frost$collections$CollectionView*) $tmp564));
int64_t $tmp569 = $tmp556.value;
int64_t $tmp570 = $tmp568.value;
bool $tmp571 = $tmp569 < $tmp570;
frost$core$Bit $tmp572 = (frost$core$Bit) {$tmp571};
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block61; else goto block62;
block62:;
frost$core$Int $tmp574 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s575, $tmp574, &$s576);
abort(); // unreachable
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp577 = &$tmp555->contents;
frost$collections$Array* $tmp578 = *$tmp577;
ITable* $tmp579 = ((frost$collections$CollectionView*) $tmp578)->$class->itable;
while ($tmp579->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp579 = $tmp579->next;
}
$fn581 $tmp580 = $tmp579->methods[0];
frost$core$Int $tmp582 = $tmp580(((frost$collections$CollectionView*) $tmp578));
int64_t $tmp583 = $tmp582.value;
int64_t $tmp584 = $tmp556.value;
bool $tmp585 = $tmp583 > $tmp584;
frost$core$Bit $tmp586 = (frost$core$Bit) {$tmp585};
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block65; else goto block66;
block66:;
frost$core$Int $tmp588 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s589, $tmp588);
abort(); // unreachable
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp590 = &$tmp555->contents;
frost$collections$Array* $tmp591 = *$tmp590;
frost$collections$Array** $tmp592 = &$tmp555->contents;
frost$collections$Array* $tmp593 = *$tmp592;
ITable* $tmp594 = ((frost$collections$CollectionView*) $tmp593)->$class->itable;
while ($tmp594->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp594 = $tmp594->next;
}
$fn596 $tmp595 = $tmp594->methods[0];
frost$core$Int $tmp597 = $tmp595(((frost$collections$CollectionView*) $tmp593));
frost$core$Int $tmp598 = (frost$core$Int) {1u};
int64_t $tmp599 = $tmp597.value;
int64_t $tmp600 = $tmp598.value;
int64_t $tmp601 = $tmp599 - $tmp600;
frost$core$Int $tmp602 = (frost$core$Int) {$tmp601};
int64_t $tmp603 = $tmp602.value;
int64_t $tmp604 = $tmp556.value;
int64_t $tmp605 = $tmp603 - $tmp604;
frost$core$Int $tmp606 = (frost$core$Int) {$tmp605};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp607 = (frost$core$Int) {0u};
int64_t $tmp608 = $tmp606.value;
int64_t $tmp609 = $tmp607.value;
bool $tmp610 = $tmp608 >= $tmp609;
frost$core$Bit $tmp611 = (frost$core$Bit) {$tmp610};
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block70; else goto block69;
block70:;
ITable* $tmp613 = ((frost$collections$CollectionView*) $tmp591)->$class->itable;
while ($tmp613->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp613 = $tmp613->next;
}
$fn615 $tmp614 = $tmp613->methods[0];
frost$core$Int $tmp616 = $tmp614(((frost$collections$CollectionView*) $tmp591));
int64_t $tmp617 = $tmp606.value;
int64_t $tmp618 = $tmp616.value;
bool $tmp619 = $tmp617 < $tmp618;
frost$core$Bit $tmp620 = (frost$core$Bit) {$tmp619};
bool $tmp621 = $tmp620.value;
if ($tmp621) goto block68; else goto block69;
block69:;
frost$core$Int $tmp622 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s623, $tmp622, &$s624);
abort(); // unreachable
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp625 = &$tmp591->data;
frost$core$Object** $tmp626 = *$tmp625;
frost$core$Int64 $tmp627 = frost$core$Int64$init$frost$core$Int($tmp606);
int64_t $tmp628 = $tmp627.value;
frost$core$Object* $tmp629 = $tmp626[$tmp628];
frost$core$Frost$ref$frost$core$Object$Q($tmp629);
frost$core$Frost$ref$frost$core$Object$Q($tmp629);
frost$core$Frost$unref$frost$core$Object$Q($tmp629);
frost$core$String** $tmp630 = &((org$frostlang$frostc$ClassDecl*) $tmp629)->name;
frost$core$String* $tmp631 = *$tmp630;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Closure.frost:67:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
frost$core$String* $tmp632 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp631, &$s633);
frost$core$Int* $tmp634 = &param0->closureCount;
frost$core$Int $tmp635 = *$tmp634;
frost$core$Int$wrapper* $tmp636;
$tmp636 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp636->value = $tmp635;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:67:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn638 $tmp637 = ($fn638) ((frost$core$Object*) $tmp636)->$class->vtable[0];
frost$core$String* $tmp639 = $tmp637(((frost$core$Object*) $tmp636));
frost$core$String* $tmp640 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp632, $tmp639);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$String* $tmp641 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp640, &$s642);
frost$collections$Array* $tmp643 = *(&local1);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp644 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp644);
org$frostlang$frostc$SymbolTable** $tmp645 = &param0->root;
org$frostlang$frostc$SymbolTable* $tmp646 = *$tmp645;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp467, $tmp545, $tmp546, ((frost$collections$MapView*) $tmp547), ((frost$core$String*) NULL), $tmp548, $tmp553, $tmp641, ((frost$collections$ListView*) $tmp643), $tmp644, $tmp646);
*(&local8) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
org$frostlang$frostc$ClassDecl* $tmp647 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local8) = $tmp467;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
frost$core$Frost$unref$frost$core$Object$Q($tmp629);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$core$Frost$unref$frost$core$Object$Q($tmp543);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:69
org$frostlang$frostc$ClassDecl* $tmp648 = *(&local8);
frost$core$Bit $tmp649 = (frost$core$Bit) {false};
frost$core$Bit* $tmp650 = &$tmp648->external;
*$tmp650 = $tmp649;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp651 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp651);
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
frost$collections$Array* $tmp652 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local9) = $tmp651;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:73
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp653 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp653);
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$collections$Array* $tmp654 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local10) = $tmp653;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:74
ITable* $tmp655 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp655->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp655 = $tmp655->next;
}
$fn657 $tmp656 = $tmp655->methods[0];
frost$collections$Iterator* $tmp658 = $tmp656(((frost$collections$Iterable*) param2));
goto block73;
block73:;
ITable* $tmp659 = $tmp658->$class->itable;
while ($tmp659->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp659 = $tmp659->next;
}
$fn661 $tmp660 = $tmp659->methods[0];
frost$core$Bit $tmp662 = $tmp660($tmp658);
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block75; else goto block74;
block74:;
*(&local11) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp664 = $tmp658->$class->itable;
while ($tmp664->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp664 = $tmp664->next;
}
$fn666 $tmp665 = $tmp664->methods[1];
frost$core$Object* $tmp667 = $tmp665($tmp658);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp667)));
org$frostlang$frostc$Compiler$Capture* $tmp668 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
*(&local11) = ((org$frostlang$frostc$Compiler$Capture*) $tmp667);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:75
org$frostlang$frostc$Compiler$Capture* $tmp669 = *(&local11);
frost$core$Int* $tmp670 = &$tmp669->$rawValue;
frost$core$Int $tmp671 = *$tmp670;
frost$core$Int $tmp672 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:76:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp673 = $tmp671.value;
int64_t $tmp674 = $tmp672.value;
bool $tmp675 = $tmp673 == $tmp674;
frost$core$Bit $tmp676 = (frost$core$Bit) {$tmp675};
bool $tmp677 = $tmp676.value;
if ($tmp677) goto block77; else goto block78;
block77:;
org$frostlang$frostc$Variable** $tmp678 = (org$frostlang$frostc$Variable**) ($tmp669->$data + 0);
org$frostlang$frostc$Variable* $tmp679 = *$tmp678;
*(&local12) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
org$frostlang$frostc$Variable* $tmp680 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
*(&local12) = $tmp679;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:77
frost$collections$Array* $tmp681 = *(&local10);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp682 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$Variable* $tmp683 = *(&local12);
frost$core$String** $tmp684 = &((org$frostlang$frostc$Symbol*) $tmp683)->name;
frost$core$String* $tmp685 = *$tmp684;
org$frostlang$frostc$Variable* $tmp686 = *(&local12);
org$frostlang$frostc$Type** $tmp687 = &$tmp686->type;
org$frostlang$frostc$Type* $tmp688 = *$tmp687;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp682, $tmp685, $tmp688);
frost$collections$Array$add$frost$collections$Array$T($tmp681, ((frost$core$Object*) $tmp682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:79
frost$collections$Array* $tmp689 = *(&local9);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp690 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp691 = (frost$core$Int) {5u};
org$frostlang$frostc$Position $tmp692 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp693 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp694 = (frost$core$Int) {16u};
org$frostlang$frostc$Position $tmp695 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp696 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp697 = (frost$core$Int) {22u};
org$frostlang$frostc$Position $tmp698 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp696, $tmp697, $tmp698, &$s699);
org$frostlang$frostc$Variable* $tmp700 = *(&local12);
frost$core$String** $tmp701 = &((org$frostlang$frostc$Symbol*) $tmp700)->name;
frost$core$String* $tmp702 = *$tmp701;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp693, $tmp694, $tmp695, $tmp696, $tmp702);
frost$core$Int $tmp703 = (frost$core$Int) {24u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Closure.frost:81:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp704 = &(&local14)->$rawValue;
*$tmp704 = $tmp703;
org$frostlang$frostc$expression$Binary$Operator $tmp705 = *(&local14);
*(&local13) = $tmp705;
org$frostlang$frostc$expression$Binary$Operator $tmp706 = *(&local13);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp707 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp708 = (frost$core$Int) {22u};
org$frostlang$frostc$Position $tmp709 = *(&local0);
org$frostlang$frostc$Variable* $tmp710 = *(&local12);
frost$core$String** $tmp711 = &((org$frostlang$frostc$Symbol*) $tmp710)->name;
frost$core$String* $tmp712 = *$tmp711;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp707, $tmp708, $tmp709, $tmp712);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp690, $tmp691, $tmp692, $tmp693, $tmp706, $tmp707);
frost$collections$Array$add$frost$collections$Array$T($tmp689, ((frost$core$Object*) $tmp690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
org$frostlang$frostc$Variable* $tmp713 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
*(&local12) = ((org$frostlang$frostc$Variable*) NULL);
goto block76;
block78:;
frost$core$Int $tmp714 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:83:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp715 = $tmp671.value;
int64_t $tmp716 = $tmp714.value;
bool $tmp717 = $tmp715 == $tmp716;
frost$core$Bit $tmp718 = (frost$core$Bit) {$tmp717};
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block81; else goto block82;
block81:;
org$frostlang$frostc$FieldDecl** $tmp720 = (org$frostlang$frostc$FieldDecl**) ($tmp669->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp721 = *$tmp720;
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
org$frostlang$frostc$FieldDecl* $tmp722 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local15) = $tmp721;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:84
frost$collections$Array* $tmp723 = *(&local10);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp724 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$FieldDecl* $tmp725 = *(&local15);
frost$core$String** $tmp726 = &((org$frostlang$frostc$Symbol*) $tmp725)->name;
frost$core$String* $tmp727 = *$tmp726;
org$frostlang$frostc$FieldDecl* $tmp728 = *(&local15);
org$frostlang$frostc$Type** $tmp729 = &$tmp728->type;
org$frostlang$frostc$Type* $tmp730 = *$tmp729;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp724, $tmp727, $tmp730);
frost$collections$Array$add$frost$collections$Array$T($tmp723, ((frost$core$Object*) $tmp724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:86
frost$collections$Array* $tmp731 = *(&local9);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp732 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp733 = (frost$core$Int) {5u};
org$frostlang$frostc$Position $tmp734 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp735 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp736 = (frost$core$Int) {16u};
org$frostlang$frostc$Position $tmp737 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp738 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp739 = (frost$core$Int) {22u};
org$frostlang$frostc$Position $tmp740 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp738, $tmp739, $tmp740, &$s741);
org$frostlang$frostc$FieldDecl* $tmp742 = *(&local15);
frost$core$String** $tmp743 = &((org$frostlang$frostc$Symbol*) $tmp742)->name;
frost$core$String* $tmp744 = *$tmp743;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp735, $tmp736, $tmp737, $tmp738, $tmp744);
frost$core$Int $tmp745 = (frost$core$Int) {24u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Closure.frost:88:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp746 = &(&local17)->$rawValue;
*$tmp746 = $tmp745;
org$frostlang$frostc$expression$Binary$Operator $tmp747 = *(&local17);
*(&local16) = $tmp747;
org$frostlang$frostc$expression$Binary$Operator $tmp748 = *(&local16);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp749 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp750 = (frost$core$Int) {22u};
org$frostlang$frostc$Position $tmp751 = *(&local0);
org$frostlang$frostc$FieldDecl* $tmp752 = *(&local15);
frost$core$String** $tmp753 = &((org$frostlang$frostc$Symbol*) $tmp752)->name;
frost$core$String* $tmp754 = *$tmp753;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp749, $tmp750, $tmp751, $tmp754);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp732, $tmp733, $tmp734, $tmp735, $tmp748, $tmp749);
frost$collections$Array$add$frost$collections$Array$T($tmp731, ((frost$core$Object*) $tmp732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
org$frostlang$frostc$FieldDecl* $tmp755 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block76;
block82:;
frost$core$Int $tmp756 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:90:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp757 = $tmp671.value;
int64_t $tmp758 = $tmp756.value;
bool $tmp759 = $tmp757 == $tmp758;
frost$core$Bit $tmp760 = (frost$core$Bit) {$tmp759};
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block85; else goto block76;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:91
frost$collections$Array* $tmp762 = *(&local10);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp763 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$Type* $tmp764 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp763, &$s765, $tmp764);
frost$collections$Array$add$frost$collections$Array$T($tmp762, ((frost$core$Object*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:94
frost$collections$Array* $tmp766 = *(&local9);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp767 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp768 = (frost$core$Int) {5u};
org$frostlang$frostc$Position $tmp769 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp770 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp771 = (frost$core$Int) {16u};
org$frostlang$frostc$Position $tmp772 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp773 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp774 = (frost$core$Int) {22u};
org$frostlang$frostc$Position $tmp775 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp773, $tmp774, $tmp775, &$s776);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp770, $tmp771, $tmp772, $tmp773, &$s777);
frost$core$Int $tmp778 = (frost$core$Int) {24u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Closure.frost:97:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp779 = &(&local19)->$rawValue;
*$tmp779 = $tmp778;
org$frostlang$frostc$expression$Binary$Operator $tmp780 = *(&local19);
*(&local18) = $tmp780;
org$frostlang$frostc$expression$Binary$Operator $tmp781 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp782 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp783 = (frost$core$Int) {22u};
org$frostlang$frostc$Position $tmp784 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp782, $tmp783, $tmp784, &$s785);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp767, $tmp768, $tmp769, $tmp770, $tmp781, $tmp782);
frost$collections$Array$add$frost$collections$Array$T($tmp766, ((frost$core$Object*) $tmp767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
goto block76;
block76:;
frost$core$Frost$unref$frost$core$Object$Q($tmp667);
org$frostlang$frostc$Compiler$Capture* $tmp786 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
*(&local11) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block73;
block75:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:102
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp787 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp788 = *(&local8);
org$frostlang$frostc$Position $tmp789 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp790 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp791 = (frost$core$Int) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp790, $tmp791);
frost$core$Int $tmp792 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:103:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp793 = &(&local21)->$rawValue;
*$tmp793 = $tmp792;
org$frostlang$frostc$MethodDecl$Kind $tmp794 = *(&local21);
*(&local20) = $tmp794;
org$frostlang$frostc$MethodDecl$Kind $tmp795 = *(&local20);
frost$collections$Array* $tmp796 = *(&local10);
org$frostlang$frostc$Type** $tmp797 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp798 = *$tmp797;
frost$collections$Array* $tmp799 = *(&local9);
org$frostlang$frostc$FixedArray* $tmp800 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp799);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp787, $tmp788, $tmp789, ((frost$core$String*) NULL), $tmp790, $tmp795, &$s801, ((frost$collections$Array*) NULL), $tmp796, $tmp798, $tmp800);
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
org$frostlang$frostc$MethodDecl* $tmp802 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
*(&local22) = $tmp787;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:106
org$frostlang$frostc$ClassDecl* $tmp803 = *(&local8);
frost$collections$Array** $tmp804 = &$tmp803->methods;
frost$collections$Array* $tmp805 = *$tmp804;
org$frostlang$frostc$MethodDecl* $tmp806 = *(&local22);
frost$collections$Array$add$frost$collections$Array$T($tmp805, ((frost$core$Object*) $tmp806));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:107
org$frostlang$frostc$ClassDecl* $tmp807 = *(&local8);
org$frostlang$frostc$SymbolTable** $tmp808 = &$tmp807->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp809 = *$tmp808;
org$frostlang$frostc$MethodDecl* $tmp810 = *(&local22);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:107:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp811 = &((org$frostlang$frostc$Symbol*) $tmp810)->name;
frost$core$String* $tmp812 = *$tmp811;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp809, ((org$frostlang$frostc$Symbol*) $tmp810), $tmp812);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:110
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp813 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp814 = *(&local8);
org$frostlang$frostc$Position $tmp815 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp816 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp817 = (frost$core$Int) {32u};
frost$core$Int $tmp818 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Closure.frost:111:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp819 = $tmp817.value;
int64_t $tmp820 = $tmp818.value;
int64_t $tmp821 = $tmp819 | $tmp820;
frost$core$Int $tmp822 = (frost$core$Int) {$tmp821};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp816, $tmp822);
frost$core$Int $tmp823 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:112:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp824 = &(&local24)->$rawValue;
*$tmp824 = $tmp823;
org$frostlang$frostc$MethodDecl$Kind $tmp825 = *(&local24);
*(&local23) = $tmp825;
org$frostlang$frostc$MethodDecl$Kind $tmp826 = *(&local23);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp827 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp827);
org$frostlang$frostc$Type** $tmp828 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp829 = *$tmp828;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp830 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp830);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp813, $tmp814, $tmp815, ((frost$core$String*) NULL), $tmp816, $tmp826, &$s831, ((frost$collections$Array*) NULL), $tmp827, $tmp829, $tmp830);
*(&local25) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
org$frostlang$frostc$MethodDecl* $tmp832 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local25) = $tmp813;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:114
org$frostlang$frostc$ClassDecl* $tmp833 = *(&local8);
frost$collections$Array** $tmp834 = &$tmp833->methods;
frost$collections$Array* $tmp835 = *$tmp834;
org$frostlang$frostc$MethodDecl* $tmp836 = *(&local25);
frost$collections$Array$add$frost$collections$Array$T($tmp835, ((frost$core$Object*) $tmp836));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:115
org$frostlang$frostc$ClassDecl* $tmp837 = *(&local8);
org$frostlang$frostc$SymbolTable** $tmp838 = &$tmp837->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp839 = *$tmp838;
org$frostlang$frostc$MethodDecl* $tmp840 = *(&local25);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:115:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp841 = &((org$frostlang$frostc$Symbol*) $tmp840)->name;
frost$core$String* $tmp842 = *$tmp841;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp839, ((org$frostlang$frostc$Symbol*) $tmp840), $tmp842);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:118
ITable* $tmp843 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp843->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp843 = $tmp843->next;
}
$fn845 $tmp844 = $tmp843->methods[0];
frost$collections$Iterator* $tmp846 = $tmp844(((frost$collections$Iterable*) param2));
goto block93;
block93:;
ITable* $tmp847 = $tmp846->$class->itable;
while ($tmp847->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp847 = $tmp847->next;
}
$fn849 $tmp848 = $tmp847->methods[0];
frost$core$Bit $tmp850 = $tmp848($tmp846);
bool $tmp851 = $tmp850.value;
if ($tmp851) goto block95; else goto block94;
block94:;
*(&local26) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp852 = $tmp846->$class->itable;
while ($tmp852->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp852 = $tmp852->next;
}
$fn854 $tmp853 = $tmp852->methods[1];
frost$core$Object* $tmp855 = $tmp853($tmp846);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp855)));
org$frostlang$frostc$Compiler$Capture* $tmp856 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
*(&local26) = ((org$frostlang$frostc$Compiler$Capture*) $tmp855);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:119
org$frostlang$frostc$Compiler$Capture* $tmp857 = *(&local26);
frost$core$Int* $tmp858 = &$tmp857->$rawValue;
frost$core$Int $tmp859 = *$tmp858;
frost$core$Int $tmp860 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:120:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp861 = $tmp859.value;
int64_t $tmp862 = $tmp860.value;
bool $tmp863 = $tmp861 == $tmp862;
frost$core$Bit $tmp864 = (frost$core$Bit) {$tmp863};
bool $tmp865 = $tmp864.value;
if ($tmp865) goto block97; else goto block98;
block97:;
org$frostlang$frostc$Variable** $tmp866 = (org$frostlang$frostc$Variable**) ($tmp857->$data + 0);
org$frostlang$frostc$Variable* $tmp867 = *$tmp866;
*(&local27) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
org$frostlang$frostc$Variable* $tmp868 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
*(&local27) = $tmp867;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:121
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp869 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp870 = *(&local8);
org$frostlang$frostc$Position $tmp871 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp872 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp873 = (frost$core$Int) {8192u};
frost$core$Int $tmp874 = (frost$core$Int) {65536u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Closure.frost:122:68
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp875 = $tmp873.value;
int64_t $tmp876 = $tmp874.value;
int64_t $tmp877 = $tmp875 | $tmp876;
frost$core$Int $tmp878 = (frost$core$Int) {$tmp877};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp872, $tmp878);
frost$core$Int $tmp879 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Closure.frost:123:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp880 = &(&local29)->$rawValue;
*$tmp880 = $tmp879;
org$frostlang$frostc$FieldDecl$Kind $tmp881 = *(&local29);
*(&local28) = $tmp881;
org$frostlang$frostc$FieldDecl$Kind $tmp882 = *(&local28);
org$frostlang$frostc$Variable* $tmp883 = *(&local27);
frost$core$String** $tmp884 = &((org$frostlang$frostc$Symbol*) $tmp883)->name;
frost$core$String* $tmp885 = *$tmp884;
org$frostlang$frostc$Variable* $tmp886 = *(&local27);
org$frostlang$frostc$Type** $tmp887 = &$tmp886->type;
org$frostlang$frostc$Type* $tmp888 = *$tmp887;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp869, $tmp870, $tmp871, ((frost$core$String*) NULL), $tmp872, $tmp882, $tmp885, $tmp888, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local30) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
org$frostlang$frostc$FieldDecl* $tmp889 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
*(&local30) = $tmp869;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:124
org$frostlang$frostc$ClassDecl* $tmp890 = *(&local8);
org$frostlang$frostc$SymbolTable** $tmp891 = &$tmp890->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp892 = *$tmp891;
org$frostlang$frostc$FieldDecl* $tmp893 = *(&local30);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:124:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp894 = &((org$frostlang$frostc$Symbol*) $tmp893)->name;
frost$core$String* $tmp895 = *$tmp894;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp892, ((org$frostlang$frostc$Symbol*) $tmp893), $tmp895);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:125
org$frostlang$frostc$ClassDecl* $tmp896 = *(&local8);
frost$collections$Array** $tmp897 = &$tmp896->fields;
frost$collections$Array* $tmp898 = *$tmp897;
org$frostlang$frostc$FieldDecl* $tmp899 = *(&local30);
frost$collections$Array$add$frost$collections$Array$T($tmp898, ((frost$core$Object*) $tmp899));
org$frostlang$frostc$FieldDecl* $tmp900 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
*(&local30) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Variable* $tmp901 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
*(&local27) = ((org$frostlang$frostc$Variable*) NULL);
goto block96;
block98:;
frost$core$Int $tmp902 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:127:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp903 = $tmp859.value;
int64_t $tmp904 = $tmp902.value;
bool $tmp905 = $tmp903 == $tmp904;
frost$core$Bit $tmp906 = (frost$core$Bit) {$tmp905};
bool $tmp907 = $tmp906.value;
if ($tmp907) goto block103; else goto block104;
block103:;
org$frostlang$frostc$FieldDecl** $tmp908 = (org$frostlang$frostc$FieldDecl**) ($tmp857->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp909 = *$tmp908;
*(&local31) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
org$frostlang$frostc$FieldDecl* $tmp910 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
*(&local31) = $tmp909;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:128
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp911 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp912 = *(&local8);
org$frostlang$frostc$Position $tmp913 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp914 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp915 = (frost$core$Int) {8192u};
frost$core$Int $tmp916 = (frost$core$Int) {65536u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Closure.frost:129:68
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp917 = $tmp915.value;
int64_t $tmp918 = $tmp916.value;
int64_t $tmp919 = $tmp917 | $tmp918;
frost$core$Int $tmp920 = (frost$core$Int) {$tmp919};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp914, $tmp920);
frost$core$Int $tmp921 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Closure.frost:130:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp922 = &(&local33)->$rawValue;
*$tmp922 = $tmp921;
org$frostlang$frostc$FieldDecl$Kind $tmp923 = *(&local33);
*(&local32) = $tmp923;
org$frostlang$frostc$FieldDecl$Kind $tmp924 = *(&local32);
org$frostlang$frostc$FieldDecl* $tmp925 = *(&local31);
frost$core$String** $tmp926 = &((org$frostlang$frostc$Symbol*) $tmp925)->name;
frost$core$String* $tmp927 = *$tmp926;
org$frostlang$frostc$FieldDecl* $tmp928 = *(&local31);
org$frostlang$frostc$Type** $tmp929 = &$tmp928->type;
org$frostlang$frostc$Type* $tmp930 = *$tmp929;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp911, $tmp912, $tmp913, ((frost$core$String*) NULL), $tmp914, $tmp924, $tmp927, $tmp930, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local34) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
org$frostlang$frostc$FieldDecl* $tmp931 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
*(&local34) = $tmp911;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:131
org$frostlang$frostc$ClassDecl* $tmp932 = *(&local8);
org$frostlang$frostc$SymbolTable** $tmp933 = &$tmp932->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp934 = *$tmp933;
org$frostlang$frostc$FieldDecl* $tmp935 = *(&local34);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:131:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp936 = &((org$frostlang$frostc$Symbol*) $tmp935)->name;
frost$core$String* $tmp937 = *$tmp936;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp934, ((org$frostlang$frostc$Symbol*) $tmp935), $tmp937);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:132
org$frostlang$frostc$ClassDecl* $tmp938 = *(&local8);
frost$collections$Array** $tmp939 = &$tmp938->fields;
frost$collections$Array* $tmp940 = *$tmp939;
org$frostlang$frostc$FieldDecl* $tmp941 = *(&local34);
frost$collections$Array$add$frost$collections$Array$T($tmp940, ((frost$core$Object*) $tmp941));
org$frostlang$frostc$FieldDecl* $tmp942 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
*(&local34) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp943 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
*(&local31) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block96;
block104:;
frost$core$Int $tmp944 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:134:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp945 = $tmp859.value;
int64_t $tmp946 = $tmp944.value;
bool $tmp947 = $tmp945 == $tmp946;
frost$core$Bit $tmp948 = (frost$core$Bit) {$tmp947};
bool $tmp949 = $tmp948.value;
if ($tmp949) goto block109; else goto block110;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:135
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp950 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp951 = *(&local8);
org$frostlang$frostc$Position $tmp952 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp953 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp954 = (frost$core$Int) {8192u};
frost$core$Int $tmp955 = (frost$core$Int) {65536u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Closure.frost:136:68
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp956 = $tmp954.value;
int64_t $tmp957 = $tmp955.value;
int64_t $tmp958 = $tmp956 | $tmp957;
frost$core$Int $tmp959 = (frost$core$Int) {$tmp958};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp953, $tmp959);
frost$core$Int $tmp960 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Closure.frost:137:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp961 = &(&local36)->$rawValue;
*$tmp961 = $tmp960;
org$frostlang$frostc$FieldDecl$Kind $tmp962 = *(&local36);
*(&local35) = $tmp962;
org$frostlang$frostc$FieldDecl$Kind $tmp963 = *(&local35);
org$frostlang$frostc$Type* $tmp964 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp950, $tmp951, $tmp952, ((frost$core$String*) NULL), $tmp953, $tmp963, &$s965, $tmp964, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local37) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
org$frostlang$frostc$FieldDecl* $tmp966 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
*(&local37) = $tmp950;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:139
org$frostlang$frostc$ClassDecl* $tmp967 = *(&local8);
org$frostlang$frostc$SymbolTable** $tmp968 = &$tmp967->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp969 = *$tmp968;
org$frostlang$frostc$FieldDecl* $tmp970 = *(&local37);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:139:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp971 = &((org$frostlang$frostc$Symbol*) $tmp970)->name;
frost$core$String* $tmp972 = *$tmp971;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp969, ((org$frostlang$frostc$Symbol*) $tmp970), $tmp972);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:140
org$frostlang$frostc$ClassDecl* $tmp973 = *(&local8);
frost$collections$Array** $tmp974 = &$tmp973->fields;
frost$collections$Array* $tmp975 = *$tmp974;
org$frostlang$frostc$FieldDecl* $tmp976 = *(&local37);
frost$collections$Array$add$frost$collections$Array$T($tmp975, ((frost$core$Object*) $tmp976));
org$frostlang$frostc$FieldDecl* $tmp977 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
*(&local37) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block96;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:143
frost$core$Int $tmp978 = (frost$core$Int) {143u};
org$frostlang$frostc$Compiler$Capture* $tmp979 = *(&local26);
$fn981 $tmp980 = ($fn981) ((frost$core$Object*) $tmp979)->$class->vtable[0];
frost$core$String* $tmp982 = $tmp980(((frost$core$Object*) $tmp979));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s983, $tmp978, $tmp982);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
abort(); // unreachable
block96:;
frost$core$Frost$unref$frost$core$Object$Q($tmp855);
org$frostlang$frostc$Compiler$Capture* $tmp984 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
*(&local26) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block93;
block95:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:147
org$frostlang$frostc$ClassDecl* $tmp985 = *(&local8);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp986 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp986, ((frost$core$Object*) $tmp985));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
frost$core$Weak** $tmp987 = &param1->owner;
frost$core$Weak* $tmp988 = *$tmp987;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
frost$core$Weak** $tmp989 = &param1->owner;
*$tmp989 = $tmp986;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:148
org$frostlang$frostc$ClassDecl* $tmp990 = *(&local8);
frost$collections$Array** $tmp991 = &$tmp990->methods;
frost$collections$Array* $tmp992 = *$tmp991;
frost$collections$Array$add$frost$collections$Array$T($tmp992, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:149
frost$collections$HashMap** $tmp993 = &param0->classes;
frost$collections$HashMap* $tmp994 = *$tmp993;
org$frostlang$frostc$ClassDecl* $tmp995 = *(&local8);
frost$core$String** $tmp996 = &$tmp995->name;
frost$core$String* $tmp997 = *$tmp996;
org$frostlang$frostc$ClassDecl* $tmp998 = *(&local8);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp994, ((frost$collections$HashKey*) $tmp997), ((frost$core$Object*) $tmp998));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:150
org$frostlang$frostc$ClassDecl* $tmp999 = *(&local8);
frost$collections$Stack** $tmp1000 = &param0->currentClass;
frost$collections$Stack* $tmp1001 = *$tmp1000;
frost$core$Int $tmp1002 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Closure.frost:150:46
frost$core$Int $tmp1003 = (frost$core$Int) {0u};
int64_t $tmp1004 = $tmp1002.value;
int64_t $tmp1005 = $tmp1003.value;
bool $tmp1006 = $tmp1004 >= $tmp1005;
frost$core$Bit $tmp1007 = (frost$core$Bit) {$tmp1006};
bool $tmp1008 = $tmp1007.value;
if ($tmp1008) goto block118; else goto block117;
block118:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp1009 = &$tmp1001->contents;
frost$collections$Array* $tmp1010 = *$tmp1009;
ITable* $tmp1011 = ((frost$collections$CollectionView*) $tmp1010)->$class->itable;
while ($tmp1011->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1011 = $tmp1011->next;
}
$fn1013 $tmp1012 = $tmp1011->methods[0];
frost$core$Int $tmp1014 = $tmp1012(((frost$collections$CollectionView*) $tmp1010));
int64_t $tmp1015 = $tmp1002.value;
int64_t $tmp1016 = $tmp1014.value;
bool $tmp1017 = $tmp1015 < $tmp1016;
frost$core$Bit $tmp1018 = (frost$core$Bit) {$tmp1017};
bool $tmp1019 = $tmp1018.value;
if ($tmp1019) goto block116; else goto block117;
block117:;
frost$core$Int $tmp1020 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1021, $tmp1020, &$s1022);
abort(); // unreachable
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp1023 = &$tmp1001->contents;
frost$collections$Array* $tmp1024 = *$tmp1023;
ITable* $tmp1025 = ((frost$collections$CollectionView*) $tmp1024)->$class->itable;
while ($tmp1025->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1025 = $tmp1025->next;
}
$fn1027 $tmp1026 = $tmp1025->methods[0];
frost$core$Int $tmp1028 = $tmp1026(((frost$collections$CollectionView*) $tmp1024));
int64_t $tmp1029 = $tmp1028.value;
int64_t $tmp1030 = $tmp1002.value;
bool $tmp1031 = $tmp1029 > $tmp1030;
frost$core$Bit $tmp1032 = (frost$core$Bit) {$tmp1031};
bool $tmp1033 = $tmp1032.value;
if ($tmp1033) goto block120; else goto block121;
block121:;
frost$core$Int $tmp1034 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1035, $tmp1034);
abort(); // unreachable
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp1036 = &$tmp1001->contents;
frost$collections$Array* $tmp1037 = *$tmp1036;
frost$collections$Array** $tmp1038 = &$tmp1001->contents;
frost$collections$Array* $tmp1039 = *$tmp1038;
ITable* $tmp1040 = ((frost$collections$CollectionView*) $tmp1039)->$class->itable;
while ($tmp1040->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1040 = $tmp1040->next;
}
$fn1042 $tmp1041 = $tmp1040->methods[0];
frost$core$Int $tmp1043 = $tmp1041(((frost$collections$CollectionView*) $tmp1039));
frost$core$Int $tmp1044 = (frost$core$Int) {1u};
int64_t $tmp1045 = $tmp1043.value;
int64_t $tmp1046 = $tmp1044.value;
int64_t $tmp1047 = $tmp1045 - $tmp1046;
frost$core$Int $tmp1048 = (frost$core$Int) {$tmp1047};
int64_t $tmp1049 = $tmp1048.value;
int64_t $tmp1050 = $tmp1002.value;
int64_t $tmp1051 = $tmp1049 - $tmp1050;
frost$core$Int $tmp1052 = (frost$core$Int) {$tmp1051};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp1053 = (frost$core$Int) {0u};
int64_t $tmp1054 = $tmp1052.value;
int64_t $tmp1055 = $tmp1053.value;
bool $tmp1056 = $tmp1054 >= $tmp1055;
frost$core$Bit $tmp1057 = (frost$core$Bit) {$tmp1056};
bool $tmp1058 = $tmp1057.value;
if ($tmp1058) goto block125; else goto block124;
block125:;
ITable* $tmp1059 = ((frost$collections$CollectionView*) $tmp1037)->$class->itable;
while ($tmp1059->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1059 = $tmp1059->next;
}
$fn1061 $tmp1060 = $tmp1059->methods[0];
frost$core$Int $tmp1062 = $tmp1060(((frost$collections$CollectionView*) $tmp1037));
int64_t $tmp1063 = $tmp1052.value;
int64_t $tmp1064 = $tmp1062.value;
bool $tmp1065 = $tmp1063 < $tmp1064;
frost$core$Bit $tmp1066 = (frost$core$Bit) {$tmp1065};
bool $tmp1067 = $tmp1066.value;
if ($tmp1067) goto block123; else goto block124;
block124:;
frost$core$Int $tmp1068 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1069, $tmp1068, &$s1070);
abort(); // unreachable
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1071 = &$tmp1037->data;
frost$core$Object** $tmp1072 = *$tmp1071;
frost$core$Int64 $tmp1073 = frost$core$Int64$init$frost$core$Int($tmp1052);
int64_t $tmp1074 = $tmp1073.value;
frost$core$Object* $tmp1075 = $tmp1072[$tmp1074];
frost$core$Frost$ref$frost$core$Object$Q($tmp1075);
frost$core$Frost$ref$frost$core$Object$Q($tmp1075);
frost$core$Frost$unref$frost$core$Object$Q($tmp1075);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp1076 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp1076, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1075)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
frost$core$Weak** $tmp1077 = &$tmp999->owner;
frost$core$Weak* $tmp1078 = *$tmp1077;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
frost$core$Weak** $tmp1079 = &$tmp999->owner;
*$tmp1079 = $tmp1076;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
frost$core$Frost$unref$frost$core$Object$Q($tmp1075);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:151
org$frostlang$frostc$ClassDecl* $tmp1080 = *(&local8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
org$frostlang$frostc$MethodDecl* $tmp1081 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
*(&local25) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1082 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$collections$Array* $tmp1083 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
*(&local10) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1084 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
*(&local9) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1085 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
*(&local8) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp1086 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp1080;

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
org$frostlang$frostc$Compiler$AutoScope* $tmp1087 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1087, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
org$frostlang$frostc$Compiler$AutoScope* $tmp1088 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
*(&local0) = $tmp1087;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:158
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1089 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1089);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
frost$collections$Array* $tmp1090 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
*(&local1) = $tmp1089;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:159
frost$core$Int $tmp1091 = (frost$core$Int) {0u};
ITable* $tmp1092 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp1092->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1092 = $tmp1092->next;
}
$fn1094 $tmp1093 = $tmp1092->methods[0];
frost$core$Int $tmp1095 = $tmp1093(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp1096 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1097 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1091, $tmp1095, $tmp1096);
frost$core$Int $tmp1098 = $tmp1097.min;
*(&local2) = $tmp1098;
frost$core$Int $tmp1099 = $tmp1097.max;
frost$core$Bit $tmp1100 = $tmp1097.inclusive;
bool $tmp1101 = $tmp1100.value;
frost$core$Int $tmp1102 = (frost$core$Int) {1u};
if ($tmp1101) goto block4; else goto block5;
block4:;
int64_t $tmp1103 = $tmp1098.value;
int64_t $tmp1104 = $tmp1099.value;
bool $tmp1105 = $tmp1103 <= $tmp1104;
frost$core$Bit $tmp1106 = (frost$core$Bit) {$tmp1105};
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block1; else goto block2;
block5:;
int64_t $tmp1108 = $tmp1098.value;
int64_t $tmp1109 = $tmp1099.value;
bool $tmp1110 = $tmp1108 < $tmp1109;
frost$core$Bit $tmp1111 = (frost$core$Bit) {$tmp1110};
bool $tmp1112 = $tmp1111.value;
if ($tmp1112) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:160
frost$core$Int $tmp1113 = *(&local2);
ITable* $tmp1114 = param1->$class->itable;
while ($tmp1114->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1114 = $tmp1114->next;
}
$fn1116 $tmp1115 = $tmp1114->methods[0];
frost$core$Object* $tmp1117 = $tmp1115(param1, $tmp1113);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1117)));
org$frostlang$frostc$ASTNode* $tmp1118 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp1117);
frost$core$Frost$unref$frost$core$Object$Q($tmp1117);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:161
org$frostlang$frostc$ASTNode* $tmp1119 = *(&local3);
frost$core$Int* $tmp1120 = &$tmp1119->$rawValue;
frost$core$Int $tmp1121 = *$tmp1120;
frost$core$Int $tmp1122 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:162:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1123 = $tmp1121.value;
int64_t $tmp1124 = $tmp1122.value;
bool $tmp1125 = $tmp1123 == $tmp1124;
frost$core$Bit $tmp1126 = (frost$core$Bit) {$tmp1125};
bool $tmp1127 = $tmp1126.value;
if ($tmp1127) goto block7; else goto block6;
block7:;
org$frostlang$frostc$Position* $tmp1128 = (org$frostlang$frostc$Position*) ($tmp1119->$data + 0);
org$frostlang$frostc$Position $tmp1129 = *$tmp1128;
*(&local4) = $tmp1129;
frost$core$String** $tmp1130 = (frost$core$String**) ($tmp1119->$data + 24);
frost$core$String* $tmp1131 = *$tmp1130;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
frost$core$String* $tmp1132 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
*(&local5) = $tmp1131;
org$frostlang$frostc$ASTNode** $tmp1133 = (org$frostlang$frostc$ASTNode**) ($tmp1119->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1134 = *$tmp1133;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
org$frostlang$frostc$ASTNode* $tmp1135 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
*(&local6) = $tmp1134;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:163
org$frostlang$frostc$Scanner** $tmp1136 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1137 = *$tmp1136;
org$frostlang$frostc$ASTNode* $tmp1138 = *(&local6);
org$frostlang$frostc$Type* $tmp1139 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1137, $tmp1138);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
org$frostlang$frostc$Type* $tmp1140 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
*(&local7) = $tmp1139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:164
org$frostlang$frostc$Type* $tmp1141 = *(&local7);
frost$core$Bit $tmp1142 = (frost$core$Bit) {$tmp1141 == NULL};
bool $tmp1143 = $tmp1142.value;
if ($tmp1143) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:165
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp1144 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1145 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1146 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1147 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1148 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1149 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:167
org$frostlang$frostc$Type* $tmp1150 = *(&local7);
frost$core$Bit $tmp1151 = (frost$core$Bit) {$tmp1150 != NULL};
bool $tmp1152 = $tmp1151.value;
if ($tmp1152) goto block11; else goto block12;
block12:;
frost$core$Int $tmp1153 = (frost$core$Int) {167u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1154, $tmp1153, &$s1155);
abort(); // unreachable
block11:;
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from Closure.frost:167:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:891
frost$core$Bit $tmp1156 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp1157 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp1150, $tmp1156);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
org$frostlang$frostc$Type* $tmp1158 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
*(&local7) = $tmp1157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:168
org$frostlang$frostc$Type* $tmp1159 = *(&local7);
frost$core$Bit $tmp1160 = (frost$core$Bit) {$tmp1159 == NULL};
bool $tmp1161 = $tmp1160.value;
if ($tmp1161) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:169
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp1162 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1163 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1164 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1165 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1166 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1167 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:171
frost$collections$Array* $tmp1168 = *(&local1);
org$frostlang$frostc$Type* $tmp1169 = *(&local7);
frost$core$Bit $tmp1170 = (frost$core$Bit) {$tmp1169 != NULL};
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block16; else goto block17;
block17:;
frost$core$Int $tmp1172 = (frost$core$Int) {171u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1173, $tmp1172, &$s1174);
abort(); // unreachable
block16:;
frost$collections$Array$add$frost$collections$Array$T($tmp1168, ((frost$core$Object*) $tmp1169));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:172
org$frostlang$frostc$SymbolTable** $tmp1175 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1176 = *$tmp1175;
FROST_ASSERT(88 == sizeof(org$frostlang$frostc$Variable));
org$frostlang$frostc$Variable* $tmp1177 = (org$frostlang$frostc$Variable*) frostObjectAlloc(88, (frost$core$Class*) &org$frostlang$frostc$Variable$class);
org$frostlang$frostc$Position $tmp1178 = *(&local4);
frost$core$Int $tmp1179 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Variable.Kind from Closure.frost:172:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int* $tmp1180 = &(&local9)->$rawValue;
*$tmp1180 = $tmp1179;
org$frostlang$frostc$Variable$Kind $tmp1181 = *(&local9);
*(&local8) = $tmp1181;
org$frostlang$frostc$Variable$Kind $tmp1182 = *(&local8);
frost$core$String* $tmp1183 = *(&local5);
org$frostlang$frostc$Type* $tmp1184 = *(&local7);
frost$core$Bit $tmp1185 = (frost$core$Bit) {$tmp1184 != NULL};
bool $tmp1186 = $tmp1185.value;
if ($tmp1186) goto block19; else goto block20;
block20:;
frost$core$Int $tmp1187 = (frost$core$Int) {172u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1188, $tmp1187, &$s1189);
abort(); // unreachable
block19:;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Variable$Storage));
org$frostlang$frostc$Variable$Storage* $tmp1190 = (org$frostlang$frostc$Variable$Storage*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Variable$Storage$class);
frost$core$Int $tmp1191 = (frost$core$Int) {1u};
frost$core$Int $tmp1192 = (frost$core$Int) {18446744073709551615u};
org$frostlang$frostc$Variable$Storage$init$frost$core$Int$frost$core$Int($tmp1190, $tmp1191, $tmp1192);
org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage($tmp1177, $tmp1178, $tmp1182, $tmp1183, $tmp1184, $tmp1190);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:172:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp1193 = &((org$frostlang$frostc$Symbol*) $tmp1177)->name;
frost$core$String* $tmp1194 = *$tmp1193;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp1176, ((org$frostlang$frostc$Symbol*) $tmp1177), $tmp1194);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
org$frostlang$frostc$Type* $tmp1195 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1196 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1197 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
*(&local5) = ((frost$core$String*) NULL);
goto block6;
block6:;
org$frostlang$frostc$ASTNode* $tmp1198 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Int $tmp1199 = *(&local2);
int64_t $tmp1200 = $tmp1099.value;
int64_t $tmp1201 = $tmp1199.value;
int64_t $tmp1202 = $tmp1200 - $tmp1201;
frost$core$Int $tmp1203 = (frost$core$Int) {$tmp1202};
if ($tmp1101) goto block23; else goto block24;
block23:;
int64_t $tmp1204 = $tmp1203.value;
int64_t $tmp1205 = $tmp1102.value;
bool $tmp1206 = $tmp1204 >= $tmp1205;
frost$core$Bit $tmp1207 = (frost$core$Bit) {$tmp1206};
bool $tmp1208 = $tmp1207.value;
if ($tmp1208) goto block22; else goto block2;
block24:;
int64_t $tmp1209 = $tmp1203.value;
int64_t $tmp1210 = $tmp1102.value;
bool $tmp1211 = $tmp1209 > $tmp1210;
frost$core$Bit $tmp1212 = (frost$core$Bit) {$tmp1211};
bool $tmp1213 = $tmp1212.value;
if ($tmp1213) goto block22; else goto block2;
block22:;
int64_t $tmp1214 = $tmp1199.value;
int64_t $tmp1215 = $tmp1102.value;
int64_t $tmp1216 = $tmp1214 + $tmp1215;
frost$core$Int $tmp1217 = (frost$core$Int) {$tmp1216};
*(&local2) = $tmp1217;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:177
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:178
frost$core$Int* $tmp1218 = &param3->$rawValue;
frost$core$Int $tmp1219 = *$tmp1218;
frost$core$Int $tmp1220 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:179:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1221 = $tmp1219.value;
int64_t $tmp1222 = $tmp1220.value;
bool $tmp1223 = $tmp1221 == $tmp1222;
frost$core$Bit $tmp1224 = (frost$core$Bit) {$tmp1223};
bool $tmp1225 = $tmp1224.value;
if ($tmp1225) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Type** $tmp1226 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp1227 = *$tmp1226;
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
org$frostlang$frostc$Type* $tmp1228 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
*(&local11) = $tmp1227;
frost$core$Bit* $tmp1229 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp1230 = *$tmp1229;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:180
org$frostlang$frostc$Type* $tmp1231 = *(&local11);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:180:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1232 = &$tmp1231->typeKind;
org$frostlang$frostc$Type$Kind $tmp1233 = *$tmp1232;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1234;
$tmp1234 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1234->value = $tmp1233;
frost$core$Int $tmp1235 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1236 = &(&local14)->$rawValue;
*$tmp1236 = $tmp1235;
org$frostlang$frostc$Type$Kind $tmp1237 = *(&local14);
*(&local13) = $tmp1237;
org$frostlang$frostc$Type$Kind $tmp1238 = *(&local13);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1239;
$tmp1239 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1239->value = $tmp1238;
ITable* $tmp1240 = ((frost$core$Equatable*) $tmp1234)->$class->itable;
while ($tmp1240->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1240 = $tmp1240->next;
}
$fn1242 $tmp1241 = $tmp1240->methods[1];
frost$core$Bit $tmp1243 = $tmp1241(((frost$core$Equatable*) $tmp1234), ((frost$core$Equatable*) $tmp1239));
bool $tmp1244 = $tmp1243.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1239)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1234)));
if ($tmp1244) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
*(&local12) = $tmp1231;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
goto block31;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1245 = &$tmp1231->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1246 = *$tmp1245;
frost$core$Bit $tmp1247 = (frost$core$Bit) {$tmp1246 != NULL};
bool $tmp1248 = $tmp1247.value;
if ($tmp1248) goto block36; else goto block37;
block37:;
frost$core$Int $tmp1249 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1250, $tmp1249, &$s1251);
abort(); // unreachable
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
frost$core$Int $tmp1252 = (frost$core$Int) {0u};
frost$core$Object* $tmp1253 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1246, $tmp1252);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1253)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1253);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp1253);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1253)));
goto block31;
block31:;
org$frostlang$frostc$Type* $tmp1254 = *(&local12);
// begin inline call to function org.frostlang.frostc.Type.get_isMethod():frost.core.Bit from Closure.frost:180:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:377
org$frostlang$frostc$Type$Kind* $tmp1255 = &$tmp1254->typeKind;
org$frostlang$frostc$Type$Kind $tmp1256 = *$tmp1255;
frost$core$Int $tmp1257 = $tmp1256.$rawValue;
frost$core$Int $tmp1258 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1259 = $tmp1257.value;
int64_t $tmp1260 = $tmp1258.value;
bool $tmp1261 = $tmp1259 == $tmp1260;
frost$core$Bit $tmp1262 = (frost$core$Bit) {$tmp1261};
bool $tmp1263 = $tmp1262.value;
if ($tmp1263) goto block40; else goto block41;
block41:;
frost$core$Int $tmp1264 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1265 = $tmp1257.value;
int64_t $tmp1266 = $tmp1264.value;
bool $tmp1267 = $tmp1265 == $tmp1266;
frost$core$Bit $tmp1268 = (frost$core$Bit) {$tmp1267};
bool $tmp1269 = $tmp1268.value;
if ($tmp1269) goto block40; else goto block43;
block43:;
frost$core$Int $tmp1270 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1271 = $tmp1257.value;
int64_t $tmp1272 = $tmp1270.value;
bool $tmp1273 = $tmp1271 == $tmp1272;
frost$core$Bit $tmp1274 = (frost$core$Bit) {$tmp1273};
bool $tmp1275 = $tmp1274.value;
if ($tmp1275) goto block40; else goto block45;
block45:;
frost$core$Int $tmp1276 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1277 = $tmp1257.value;
int64_t $tmp1278 = $tmp1276.value;
bool $tmp1279 = $tmp1277 == $tmp1278;
frost$core$Bit $tmp1280 = (frost$core$Bit) {$tmp1279};
bool $tmp1281 = $tmp1280.value;
if ($tmp1281) goto block40; else goto block47;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:379
frost$core$Bit $tmp1282 = (frost$core$Bit) {true};
*(&local15) = $tmp1282;
goto block38;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:382
frost$core$Bit $tmp1283 = (frost$core$Bit) {false};
*(&local15) = $tmp1283;
goto block38;
block39:;
goto block38;
block38:;
frost$core$Bit $tmp1284 = *(&local15);
bool $tmp1285 = $tmp1284.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
if ($tmp1285) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:181
org$frostlang$frostc$Type* $tmp1286 = *(&local11);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:181:36
org$frostlang$frostc$Type$Kind* $tmp1287 = &$tmp1286->typeKind;
org$frostlang$frostc$Type$Kind $tmp1288 = *$tmp1287;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1289;
$tmp1289 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1289->value = $tmp1288;
frost$core$Int $tmp1290 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1291 = &(&local17)->$rawValue;
*$tmp1291 = $tmp1290;
org$frostlang$frostc$Type$Kind $tmp1292 = *(&local17);
*(&local16) = $tmp1292;
org$frostlang$frostc$Type$Kind $tmp1293 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1294;
$tmp1294 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1294->value = $tmp1293;
ITable* $tmp1295 = ((frost$core$Equatable*) $tmp1289)->$class->itable;
while ($tmp1295->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1295 = $tmp1295->next;
}
$fn1297 $tmp1296 = $tmp1295->methods[0];
frost$core$Bit $tmp1298 = $tmp1296(((frost$core$Equatable*) $tmp1289), ((frost$core$Equatable*) $tmp1294));
bool $tmp1299 = $tmp1298.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1294)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1289)));
if ($tmp1299) goto block50; else goto block54;
block54:;
org$frostlang$frostc$Type$Kind* $tmp1300 = &$tmp1286->typeKind;
org$frostlang$frostc$Type$Kind $tmp1301 = *$tmp1300;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1302;
$tmp1302 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1302->value = $tmp1301;
frost$core$Int $tmp1303 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1304 = &(&local19)->$rawValue;
*$tmp1304 = $tmp1303;
org$frostlang$frostc$Type$Kind $tmp1305 = *(&local19);
*(&local18) = $tmp1305;
org$frostlang$frostc$Type$Kind $tmp1306 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1307;
$tmp1307 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1307->value = $tmp1306;
ITable* $tmp1308 = ((frost$core$Equatable*) $tmp1302)->$class->itable;
while ($tmp1308->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1308 = $tmp1308->next;
}
$fn1310 $tmp1309 = $tmp1308->methods[0];
frost$core$Bit $tmp1311 = $tmp1309(((frost$core$Equatable*) $tmp1302), ((frost$core$Equatable*) $tmp1307));
bool $tmp1312 = $tmp1311.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1307)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1302)));
if ($tmp1312) goto block50; else goto block53;
block53:;
org$frostlang$frostc$Type$Kind* $tmp1313 = &$tmp1286->typeKind;
org$frostlang$frostc$Type$Kind $tmp1314 = *$tmp1313;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1315;
$tmp1315 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1315->value = $tmp1314;
frost$core$Int $tmp1316 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1317 = &(&local21)->$rawValue;
*$tmp1317 = $tmp1316;
org$frostlang$frostc$Type$Kind $tmp1318 = *(&local21);
*(&local20) = $tmp1318;
org$frostlang$frostc$Type$Kind $tmp1319 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1320;
$tmp1320 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1320->value = $tmp1319;
ITable* $tmp1321 = ((frost$core$Equatable*) $tmp1315)->$class->itable;
while ($tmp1321->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1321 = $tmp1321->next;
}
$fn1323 $tmp1322 = $tmp1321->methods[0];
frost$core$Bit $tmp1324 = $tmp1322(((frost$core$Equatable*) $tmp1315), ((frost$core$Equatable*) $tmp1320));
bool $tmp1325 = $tmp1324.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1320)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1315)));
if ($tmp1325) goto block50; else goto block52;
block52:;
org$frostlang$frostc$Type$Kind* $tmp1326 = &$tmp1286->typeKind;
org$frostlang$frostc$Type$Kind $tmp1327 = *$tmp1326;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1328;
$tmp1328 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1328->value = $tmp1327;
frost$core$Int $tmp1329 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1330 = &(&local23)->$rawValue;
*$tmp1330 = $tmp1329;
org$frostlang$frostc$Type$Kind $tmp1331 = *(&local23);
*(&local22) = $tmp1331;
org$frostlang$frostc$Type$Kind $tmp1332 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1333;
$tmp1333 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1333->value = $tmp1332;
ITable* $tmp1334 = ((frost$core$Equatable*) $tmp1328)->$class->itable;
while ($tmp1334->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1334 = $tmp1334->next;
}
$fn1336 $tmp1335 = $tmp1334->methods[0];
frost$core$Bit $tmp1337 = $tmp1335(((frost$core$Equatable*) $tmp1328), ((frost$core$Equatable*) $tmp1333));
bool $tmp1338 = $tmp1337.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1333)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1328)));
if ($tmp1338) goto block50; else goto block51;
block51:;
frost$core$Int $tmp1339 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1340, $tmp1339, &$s1341);
abort(); // unreachable
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1342 = &$tmp1286->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1343 = *$tmp1342;
frost$core$Bit $tmp1344 = (frost$core$Bit) {$tmp1343 != NULL};
bool $tmp1345 = $tmp1344.value;
if ($tmp1345) goto block60; else goto block61;
block61:;
frost$core$Int $tmp1346 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1347, $tmp1346, &$s1348);
abort(); // unreachable
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
ITable* $tmp1349 = ((frost$collections$ListView*) $tmp1343)->$class->itable;
while ($tmp1349->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1349 = $tmp1349->next;
}
$fn1351 $tmp1350 = $tmp1349->methods[5];
frost$core$Object* $tmp1352 = $tmp1350(((frost$collections$ListView*) $tmp1343));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1352)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1352);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
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
org$frostlang$frostc$Pair* $tmp1362 = org$frostlang$frostc$Compiler$computeCoercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, param2, $tmp1361);
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
if ($tmp1370) goto block62; else goto block63;
block62:;
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
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:192
org$frostlang$frostc$Pair* $tmp1379 = *(&local26);
frost$core$Bit $tmp1380 = (frost$core$Bit) {$tmp1379 != NULL};
bool $tmp1381 = $tmp1380.value;
if ($tmp1381) goto block64; else goto block65;
block65:;
frost$core$Int $tmp1382 = (frost$core$Int) {192u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1383, $tmp1382, &$s1384);
abort(); // unreachable
block64:;
frost$core$Object** $tmp1385 = &$tmp1379->first;
frost$core$Object* $tmp1386 = *$tmp1385;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1386)));
org$frostlang$frostc$Type* $tmp1387 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1387));
*(&local10) = ((org$frostlang$frostc$Type*) $tmp1386);
org$frostlang$frostc$Pair* $tmp1388 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local26) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp1389 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
*(&local25) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp1390 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
goto block30;
block30:;
org$frostlang$frostc$Type* $tmp1391 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1392 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
goto block25;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:196
org$frostlang$frostc$Type* $tmp1393 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
org$frostlang$frostc$Type* $tmp1394 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
*(&local10) = $tmp1393;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
goto block25;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:199
org$frostlang$frostc$Type* $tmp1395 = *(&local10);
frost$core$Bit $tmp1396 = (frost$core$Bit) {$tmp1395 == NULL};
bool $tmp1397 = $tmp1396.value;
if ($tmp1397) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp1398 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1399 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1400 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:202
org$frostlang$frostc$Position $tmp1401 = org$frostlang$frostc$Position$init();
frost$core$Int $tmp1402 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Closure.frost:202:63
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1403 = &(&local28)->$rawValue;
*$tmp1403 = $tmp1402;
org$frostlang$frostc$Type$Kind $tmp1404 = *(&local28);
*(&local27) = $tmp1404;
org$frostlang$frostc$Type$Kind $tmp1405 = *(&local27);
frost$collections$Array* $tmp1406 = *(&local1);
org$frostlang$frostc$Type* $tmp1407 = *(&local10);
frost$core$Bit $tmp1408 = (frost$core$Bit) {$tmp1407 != NULL};
bool $tmp1409 = $tmp1408.value;
if ($tmp1409) goto block69; else goto block70;
block70:;
frost$core$Int $tmp1410 = (frost$core$Int) {203u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1411, $tmp1410, &$s1412);
abort(); // unreachable
block69:;
frost$core$Int $tmp1413 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp1414 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param0, $tmp1401, $tmp1405, ((frost$collections$ListView*) $tmp1406), $tmp1407, $tmp1413);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
org$frostlang$frostc$Type* $tmp1415 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1416 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1417 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return $tmp1414;

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
org$frostlang$frostc$Type* $tmp1418 = org$frostlang$frostc$expression$Closure$typedLambdaType$org$frostlang$frostc$Compiler$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Type$Q(param0, ((frost$collections$ListView*) param2), param3, param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
org$frostlang$frostc$Type* $tmp1419 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
*(&local1) = $tmp1418;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:212
org$frostlang$frostc$Type* $tmp1420 = *(&local1);
frost$core$Bit $tmp1421 = (frost$core$Bit) {$tmp1420 != NULL};
bool $tmp1422 = $tmp1421.value;
if ($tmp1422) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:213
org$frostlang$frostc$Type* $tmp1423 = *(&local1);
frost$core$Bit $tmp1424 = (frost$core$Bit) {$tmp1423 != NULL};
bool $tmp1425 = $tmp1424.value;
if ($tmp1425) goto block4; else goto block5;
block5:;
frost$core$Int $tmp1426 = (frost$core$Int) {213u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1427, $tmp1426, &$s1428);
abort(); // unreachable
block4:;
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:213:37
org$frostlang$frostc$Type$Kind* $tmp1429 = &$tmp1423->typeKind;
org$frostlang$frostc$Type$Kind $tmp1430 = *$tmp1429;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1431;
$tmp1431 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1431->value = $tmp1430;
frost$core$Int $tmp1432 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1433 = &(&local3)->$rawValue;
*$tmp1433 = $tmp1432;
org$frostlang$frostc$Type$Kind $tmp1434 = *(&local3);
*(&local2) = $tmp1434;
org$frostlang$frostc$Type$Kind $tmp1435 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1436;
$tmp1436 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1436->value = $tmp1435;
ITable* $tmp1437 = ((frost$core$Equatable*) $tmp1431)->$class->itable;
while ($tmp1437->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1437 = $tmp1437->next;
}
$fn1439 $tmp1438 = $tmp1437->methods[0];
frost$core$Bit $tmp1440 = $tmp1438(((frost$core$Equatable*) $tmp1431), ((frost$core$Equatable*) $tmp1436));
bool $tmp1441 = $tmp1440.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1436)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1431)));
if ($tmp1441) goto block7; else goto block11;
block11:;
org$frostlang$frostc$Type$Kind* $tmp1442 = &$tmp1423->typeKind;
org$frostlang$frostc$Type$Kind $tmp1443 = *$tmp1442;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1444;
$tmp1444 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1444->value = $tmp1443;
frost$core$Int $tmp1445 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1446 = &(&local5)->$rawValue;
*$tmp1446 = $tmp1445;
org$frostlang$frostc$Type$Kind $tmp1447 = *(&local5);
*(&local4) = $tmp1447;
org$frostlang$frostc$Type$Kind $tmp1448 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1449;
$tmp1449 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1449->value = $tmp1448;
ITable* $tmp1450 = ((frost$core$Equatable*) $tmp1444)->$class->itable;
while ($tmp1450->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1450 = $tmp1450->next;
}
$fn1452 $tmp1451 = $tmp1450->methods[0];
frost$core$Bit $tmp1453 = $tmp1451(((frost$core$Equatable*) $tmp1444), ((frost$core$Equatable*) $tmp1449));
bool $tmp1454 = $tmp1453.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1449)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1444)));
if ($tmp1454) goto block7; else goto block10;
block10:;
org$frostlang$frostc$Type$Kind* $tmp1455 = &$tmp1423->typeKind;
org$frostlang$frostc$Type$Kind $tmp1456 = *$tmp1455;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1457;
$tmp1457 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1457->value = $tmp1456;
frost$core$Int $tmp1458 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1459 = &(&local7)->$rawValue;
*$tmp1459 = $tmp1458;
org$frostlang$frostc$Type$Kind $tmp1460 = *(&local7);
*(&local6) = $tmp1460;
org$frostlang$frostc$Type$Kind $tmp1461 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1462;
$tmp1462 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1462->value = $tmp1461;
ITable* $tmp1463 = ((frost$core$Equatable*) $tmp1457)->$class->itable;
while ($tmp1463->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1463 = $tmp1463->next;
}
$fn1465 $tmp1464 = $tmp1463->methods[0];
frost$core$Bit $tmp1466 = $tmp1464(((frost$core$Equatable*) $tmp1457), ((frost$core$Equatable*) $tmp1462));
bool $tmp1467 = $tmp1466.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1462)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1457)));
if ($tmp1467) goto block7; else goto block9;
block9:;
org$frostlang$frostc$Type$Kind* $tmp1468 = &$tmp1423->typeKind;
org$frostlang$frostc$Type$Kind $tmp1469 = *$tmp1468;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1470;
$tmp1470 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1470->value = $tmp1469;
frost$core$Int $tmp1471 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1472 = &(&local9)->$rawValue;
*$tmp1472 = $tmp1471;
org$frostlang$frostc$Type$Kind $tmp1473 = *(&local9);
*(&local8) = $tmp1473;
org$frostlang$frostc$Type$Kind $tmp1474 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1475;
$tmp1475 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1475->value = $tmp1474;
ITable* $tmp1476 = ((frost$core$Equatable*) $tmp1470)->$class->itable;
while ($tmp1476->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1476 = $tmp1476->next;
}
$fn1478 $tmp1477 = $tmp1476->methods[0];
frost$core$Bit $tmp1479 = $tmp1477(((frost$core$Equatable*) $tmp1470), ((frost$core$Equatable*) $tmp1475));
bool $tmp1480 = $tmp1479.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1475)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1470)));
if ($tmp1480) goto block7; else goto block8;
block8:;
frost$core$Int $tmp1481 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1482, $tmp1481, &$s1483);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1484 = &$tmp1423->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1485 = *$tmp1484;
frost$core$Bit $tmp1486 = (frost$core$Bit) {$tmp1485 != NULL};
bool $tmp1487 = $tmp1486.value;
if ($tmp1487) goto block17; else goto block18;
block18:;
frost$core$Int $tmp1488 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1489, $tmp1488, &$s1490);
abort(); // unreachable
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1485));
ITable* $tmp1491 = ((frost$collections$ListView*) $tmp1485)->$class->itable;
while ($tmp1491->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1491 = $tmp1491->next;
}
$fn1493 $tmp1492 = $tmp1491->methods[5];
frost$core$Object* $tmp1494 = $tmp1492(((frost$collections$ListView*) $tmp1485));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1494)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1494);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1485));
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
frost$core$Int* $tmp1499 = &param4->$rawValue;
frost$core$Int $tmp1500 = *$tmp1499;
frost$core$Int $tmp1501 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:220:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1502 = $tmp1500.value;
int64_t $tmp1503 = $tmp1501.value;
bool $tmp1504 = $tmp1502 == $tmp1503;
frost$core$Bit $tmp1505 = (frost$core$Bit) {$tmp1504};
bool $tmp1506 = $tmp1505.value;
if ($tmp1506) goto block20; else goto block19;
block20:;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1513 = &$tmp1512->typeKind;
org$frostlang$frostc$Type$Kind $tmp1514 = *$tmp1513;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1515;
$tmp1515 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1515->value = $tmp1514;
frost$core$Int $tmp1516 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1517 = &(&local13)->$rawValue;
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
if ($tmp1525) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
*(&local11) = $tmp1512;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
goto block24;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1526 = &$tmp1512->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1527 = *$tmp1526;
frost$core$Bit $tmp1528 = (frost$core$Bit) {$tmp1527 != NULL};
bool $tmp1529 = $tmp1528.value;
if ($tmp1529) goto block29; else goto block30;
block30:;
frost$core$Int $tmp1530 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1531, $tmp1530, &$s1532);
abort(); // unreachable
block29:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
frost$core$Int $tmp1533 = (frost$core$Int) {0u};
frost$core$Object* $tmp1534 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1527, $tmp1533);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1534)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1534);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
*(&local11) = ((org$frostlang$frostc$Type*) $tmp1534);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1534)));
goto block24;
block24:;
org$frostlang$frostc$Type* $tmp1535 = *(&local11);
// begin inline call to function org.frostlang.frostc.Type.get_isMethod():frost.core.Bit from Closure.frost:221:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:377
org$frostlang$frostc$Type$Kind* $tmp1536 = &$tmp1535->typeKind;
org$frostlang$frostc$Type$Kind $tmp1537 = *$tmp1536;
frost$core$Int $tmp1538 = $tmp1537.$rawValue;
frost$core$Int $tmp1539 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1540 = $tmp1538.value;
int64_t $tmp1541 = $tmp1539.value;
bool $tmp1542 = $tmp1540 == $tmp1541;
frost$core$Bit $tmp1543 = (frost$core$Bit) {$tmp1542};
bool $tmp1544 = $tmp1543.value;
if ($tmp1544) goto block33; else goto block34;
block34:;
frost$core$Int $tmp1545 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1546 = $tmp1538.value;
int64_t $tmp1547 = $tmp1545.value;
bool $tmp1548 = $tmp1546 == $tmp1547;
frost$core$Bit $tmp1549 = (frost$core$Bit) {$tmp1548};
bool $tmp1550 = $tmp1549.value;
if ($tmp1550) goto block33; else goto block36;
block36:;
frost$core$Int $tmp1551 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1552 = $tmp1538.value;
int64_t $tmp1553 = $tmp1551.value;
bool $tmp1554 = $tmp1552 == $tmp1553;
frost$core$Bit $tmp1555 = (frost$core$Bit) {$tmp1554};
bool $tmp1556 = $tmp1555.value;
if ($tmp1556) goto block33; else goto block38;
block38:;
frost$core$Int $tmp1557 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1558 = $tmp1538.value;
int64_t $tmp1559 = $tmp1557.value;
bool $tmp1560 = $tmp1558 == $tmp1559;
frost$core$Bit $tmp1561 = (frost$core$Bit) {$tmp1560};
bool $tmp1562 = $tmp1561.value;
if ($tmp1562) goto block33; else goto block40;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:379
frost$core$Bit $tmp1563 = (frost$core$Bit) {true};
*(&local14) = $tmp1563;
goto block31;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:382
frost$core$Bit $tmp1564 = (frost$core$Bit) {false};
*(&local14) = $tmp1564;
goto block31;
block32:;
goto block31;
block31:;
frost$core$Bit $tmp1565 = *(&local14);
bool $tmp1566 = $tmp1565.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
if ($tmp1566) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:222
org$frostlang$frostc$Type* $tmp1567 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:222:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1568 = &$tmp1567->typeKind;
org$frostlang$frostc$Type$Kind $tmp1569 = *$tmp1568;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1570;
$tmp1570 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1570->value = $tmp1569;
frost$core$Int $tmp1571 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1572 = &(&local17)->$rawValue;
*$tmp1572 = $tmp1571;
org$frostlang$frostc$Type$Kind $tmp1573 = *(&local17);
*(&local16) = $tmp1573;
org$frostlang$frostc$Type$Kind $tmp1574 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1575;
$tmp1575 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1575->value = $tmp1574;
ITable* $tmp1576 = ((frost$core$Equatable*) $tmp1570)->$class->itable;
while ($tmp1576->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1576 = $tmp1576->next;
}
$fn1578 $tmp1577 = $tmp1576->methods[1];
frost$core$Bit $tmp1579 = $tmp1577(((frost$core$Equatable*) $tmp1570), ((frost$core$Equatable*) $tmp1575));
bool $tmp1580 = $tmp1579.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1575)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1570)));
if ($tmp1580) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
*(&local15) = $tmp1567;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
goto block42;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1581 = &$tmp1567->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1582 = *$tmp1581;
frost$core$Bit $tmp1583 = (frost$core$Bit) {$tmp1582 != NULL};
bool $tmp1584 = $tmp1583.value;
if ($tmp1584) goto block47; else goto block48;
block48:;
frost$core$Int $tmp1585 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1586, $tmp1585, &$s1587);
abort(); // unreachable
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
frost$core$Int $tmp1588 = (frost$core$Int) {0u};
frost$core$Object* $tmp1589 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1582, $tmp1588);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1589)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1589);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
*(&local15) = ((org$frostlang$frostc$Type*) $tmp1589);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1589)));
goto block42;
block42:;
org$frostlang$frostc$Type* $tmp1590 = *(&local15);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:222:54
org$frostlang$frostc$Type$Kind* $tmp1591 = &$tmp1590->typeKind;
org$frostlang$frostc$Type$Kind $tmp1592 = *$tmp1591;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1593;
$tmp1593 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1593->value = $tmp1592;
frost$core$Int $tmp1594 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1595 = &(&local19)->$rawValue;
*$tmp1595 = $tmp1594;
org$frostlang$frostc$Type$Kind $tmp1596 = *(&local19);
*(&local18) = $tmp1596;
org$frostlang$frostc$Type$Kind $tmp1597 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1598;
$tmp1598 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1598->value = $tmp1597;
ITable* $tmp1599 = ((frost$core$Equatable*) $tmp1593)->$class->itable;
while ($tmp1599->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1599 = $tmp1599->next;
}
$fn1601 $tmp1600 = $tmp1599->methods[0];
frost$core$Bit $tmp1602 = $tmp1600(((frost$core$Equatable*) $tmp1593), ((frost$core$Equatable*) $tmp1598));
bool $tmp1603 = $tmp1602.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1598)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1593)));
if ($tmp1603) goto block50; else goto block54;
block54:;
org$frostlang$frostc$Type$Kind* $tmp1604 = &$tmp1590->typeKind;
org$frostlang$frostc$Type$Kind $tmp1605 = *$tmp1604;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1606;
$tmp1606 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1606->value = $tmp1605;
frost$core$Int $tmp1607 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1608 = &(&local21)->$rawValue;
*$tmp1608 = $tmp1607;
org$frostlang$frostc$Type$Kind $tmp1609 = *(&local21);
*(&local20) = $tmp1609;
org$frostlang$frostc$Type$Kind $tmp1610 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1611;
$tmp1611 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1611->value = $tmp1610;
ITable* $tmp1612 = ((frost$core$Equatable*) $tmp1606)->$class->itable;
while ($tmp1612->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1612 = $tmp1612->next;
}
$fn1614 $tmp1613 = $tmp1612->methods[0];
frost$core$Bit $tmp1615 = $tmp1613(((frost$core$Equatable*) $tmp1606), ((frost$core$Equatable*) $tmp1611));
bool $tmp1616 = $tmp1615.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1611)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1606)));
if ($tmp1616) goto block50; else goto block53;
block53:;
org$frostlang$frostc$Type$Kind* $tmp1617 = &$tmp1590->typeKind;
org$frostlang$frostc$Type$Kind $tmp1618 = *$tmp1617;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1619;
$tmp1619 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1619->value = $tmp1618;
frost$core$Int $tmp1620 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1621 = &(&local23)->$rawValue;
*$tmp1621 = $tmp1620;
org$frostlang$frostc$Type$Kind $tmp1622 = *(&local23);
*(&local22) = $tmp1622;
org$frostlang$frostc$Type$Kind $tmp1623 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1624;
$tmp1624 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1624->value = $tmp1623;
ITable* $tmp1625 = ((frost$core$Equatable*) $tmp1619)->$class->itable;
while ($tmp1625->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1625 = $tmp1625->next;
}
$fn1627 $tmp1626 = $tmp1625->methods[0];
frost$core$Bit $tmp1628 = $tmp1626(((frost$core$Equatable*) $tmp1619), ((frost$core$Equatable*) $tmp1624));
bool $tmp1629 = $tmp1628.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1624)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1619)));
if ($tmp1629) goto block50; else goto block52;
block52:;
org$frostlang$frostc$Type$Kind* $tmp1630 = &$tmp1590->typeKind;
org$frostlang$frostc$Type$Kind $tmp1631 = *$tmp1630;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1632;
$tmp1632 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1632->value = $tmp1631;
frost$core$Int $tmp1633 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1634 = &(&local25)->$rawValue;
*$tmp1634 = $tmp1633;
org$frostlang$frostc$Type$Kind $tmp1635 = *(&local25);
*(&local24) = $tmp1635;
org$frostlang$frostc$Type$Kind $tmp1636 = *(&local24);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1637;
$tmp1637 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1637->value = $tmp1636;
ITable* $tmp1638 = ((frost$core$Equatable*) $tmp1632)->$class->itable;
while ($tmp1638->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1638 = $tmp1638->next;
}
$fn1640 $tmp1639 = $tmp1638->methods[0];
frost$core$Bit $tmp1641 = $tmp1639(((frost$core$Equatable*) $tmp1632), ((frost$core$Equatable*) $tmp1637));
bool $tmp1642 = $tmp1641.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1637)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1632)));
if ($tmp1642) goto block50; else goto block51;
block51:;
frost$core$Int $tmp1643 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1644, $tmp1643, &$s1645);
abort(); // unreachable
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1646 = &$tmp1590->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1647 = *$tmp1646;
frost$core$Bit $tmp1648 = (frost$core$Bit) {$tmp1647 != NULL};
bool $tmp1649 = $tmp1648.value;
if ($tmp1649) goto block60; else goto block61;
block61:;
frost$core$Int $tmp1650 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1651, $tmp1650, &$s1652);
abort(); // unreachable
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
ITable* $tmp1653 = ((frost$collections$ListView*) $tmp1647)->$class->itable;
while ($tmp1653->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1653 = $tmp1653->next;
}
$fn1655 $tmp1654 = $tmp1653->methods[5];
frost$core$Object* $tmp1656 = $tmp1654(((frost$collections$ListView*) $tmp1647));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1656)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1656);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1656)));
org$frostlang$frostc$Type* $tmp1657 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1656);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1656)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1590));
org$frostlang$frostc$Type* $tmp1658 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
goto block23;
block23:;
org$frostlang$frostc$Type* $tmp1659 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1659));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1660 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block19;
block19:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:227
frost$core$Int $tmp1661 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:227:59
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp1662 = &(&local27)->$rawValue;
*$tmp1662 = $tmp1661;
org$frostlang$frostc$MethodDecl$Kind $tmp1663 = *(&local27);
*(&local26) = $tmp1663;
org$frostlang$frostc$MethodDecl$Kind $tmp1664 = *(&local26);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1665 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1666 = (frost$core$Int) {26u};
org$frostlang$frostc$Type* $tmp1667 = *(&local0);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:228:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3712
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1668 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1669 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3712:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp1670 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp1671 = *$tmp1670;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1672 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1673 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1672, $tmp1673);
frost$collections$Array$add$frost$collections$Array$T($tmp1672, ((frost$core$Object*) $tmp1667));
org$frostlang$frostc$Type* $tmp1674 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1671, ((frost$collections$ListView*) $tmp1672));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp1668, $tmp1669, $tmp1667, $tmp1674);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1665, $tmp1666, param1, $tmp1668);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1675 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1676 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1675, $tmp1676);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1677 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1678 = (frost$core$Int) {38u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp1677, $tmp1678, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp1675, ((frost$core$Object*) $tmp1677));
org$frostlang$frostc$IR$Value* $tmp1679 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1664, param2, $tmp1665, ((org$frostlang$frostc$FixedArray*) $tmp1675), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
org$frostlang$frostc$Type* $tmp1680 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1681 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1679;

}
frost$core$Bit org$frostlang$frostc$expression$Closure$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:271
frost$core$String** $tmp1682 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1683 = *$tmp1682;
frost$core$String** $tmp1684 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp1685 = *$tmp1684;
frost$core$Bit $tmp1686 = frost$core$String$$GT$frost$core$String$R$frost$core$Bit($tmp1683, $tmp1685);
return $tmp1686;

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
frost$core$Int* $tmp1687 = &param4->$rawValue;
frost$core$Int $tmp1688 = *$tmp1687;
frost$core$Int $tmp1689 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:237:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1690 = $tmp1688.value;
int64_t $tmp1691 = $tmp1689.value;
bool $tmp1692 = $tmp1690 == $tmp1691;
frost$core$Bit $tmp1693 = (frost$core$Bit) {$tmp1692};
bool $tmp1694 = $tmp1693.value;
if ($tmp1694) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Type** $tmp1695 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp1696 = *$tmp1695;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
org$frostlang$frostc$Type* $tmp1697 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
*(&local0) = $tmp1696;
frost$core$Bit* $tmp1698 = (frost$core$Bit*) (param4->$data + 8);
frost$core$Bit $tmp1699 = *$tmp1698;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:238
org$frostlang$frostc$Type* $tmp1700 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:238:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1701 = &$tmp1700->typeKind;
org$frostlang$frostc$Type$Kind $tmp1702 = *$tmp1701;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1703;
$tmp1703 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1703->value = $tmp1702;
frost$core$Int $tmp1704 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1705 = &(&local3)->$rawValue;
*$tmp1705 = $tmp1704;
org$frostlang$frostc$Type$Kind $tmp1706 = *(&local3);
*(&local2) = $tmp1706;
org$frostlang$frostc$Type$Kind $tmp1707 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1708;
$tmp1708 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1708->value = $tmp1707;
ITable* $tmp1709 = ((frost$core$Equatable*) $tmp1703)->$class->itable;
while ($tmp1709->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1709 = $tmp1709->next;
}
$fn1711 $tmp1710 = $tmp1709->methods[1];
frost$core$Bit $tmp1712 = $tmp1710(((frost$core$Equatable*) $tmp1703), ((frost$core$Equatable*) $tmp1708));
bool $tmp1713 = $tmp1712.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1708)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1703)));
if ($tmp1713) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
*(&local1) = $tmp1700;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1714 = &$tmp1700->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1715 = *$tmp1714;
frost$core$Bit $tmp1716 = (frost$core$Bit) {$tmp1715 != NULL};
bool $tmp1717 = $tmp1716.value;
if ($tmp1717) goto block9; else goto block10;
block10:;
frost$core$Int $tmp1718 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1719, $tmp1718, &$s1720);
abort(); // unreachable
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
frost$core$Int $tmp1721 = (frost$core$Int) {0u};
frost$core$Object* $tmp1722 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1715, $tmp1721);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1722)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1722);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp1722);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1722)));
goto block4;
block4:;
org$frostlang$frostc$Type* $tmp1723 = *(&local1);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
org$frostlang$frostc$Type* $tmp1724 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
*(&local4) = $tmp1723;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:239
org$frostlang$frostc$Type* $tmp1725 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_isMethod():frost.core.Bit from Closure.frost:239:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:377
org$frostlang$frostc$Type$Kind* $tmp1726 = &$tmp1725->typeKind;
org$frostlang$frostc$Type$Kind $tmp1727 = *$tmp1726;
frost$core$Int $tmp1728 = $tmp1727.$rawValue;
frost$core$Int $tmp1729 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1730 = $tmp1728.value;
int64_t $tmp1731 = $tmp1729.value;
bool $tmp1732 = $tmp1730 == $tmp1731;
frost$core$Bit $tmp1733 = (frost$core$Bit) {$tmp1732};
bool $tmp1734 = $tmp1733.value;
if ($tmp1734) goto block15; else goto block16;
block16:;
frost$core$Int $tmp1735 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1736 = $tmp1728.value;
int64_t $tmp1737 = $tmp1735.value;
bool $tmp1738 = $tmp1736 == $tmp1737;
frost$core$Bit $tmp1739 = (frost$core$Bit) {$tmp1738};
bool $tmp1740 = $tmp1739.value;
if ($tmp1740) goto block15; else goto block18;
block18:;
frost$core$Int $tmp1741 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1742 = $tmp1728.value;
int64_t $tmp1743 = $tmp1741.value;
bool $tmp1744 = $tmp1742 == $tmp1743;
frost$core$Bit $tmp1745 = (frost$core$Bit) {$tmp1744};
bool $tmp1746 = $tmp1745.value;
if ($tmp1746) goto block15; else goto block20;
block20:;
frost$core$Int $tmp1747 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1748 = $tmp1728.value;
int64_t $tmp1749 = $tmp1747.value;
bool $tmp1750 = $tmp1748 == $tmp1749;
frost$core$Bit $tmp1751 = (frost$core$Bit) {$tmp1750};
bool $tmp1752 = $tmp1751.value;
if ($tmp1752) goto block15; else goto block22;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:379
frost$core$Bit $tmp1753 = (frost$core$Bit) {true};
*(&local5) = $tmp1753;
goto block13;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:382
frost$core$Bit $tmp1754 = (frost$core$Bit) {false};
*(&local5) = $tmp1754;
goto block13;
block14:;
goto block13;
block13:;
frost$core$Bit $tmp1755 = *(&local5);
bool $tmp1756 = $tmp1755.value;
if ($tmp1756) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:240
ITable* $tmp1757 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp1757->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1757 = $tmp1757->next;
}
$fn1759 $tmp1758 = $tmp1757->methods[0];
frost$core$Int $tmp1760 = $tmp1758(((frost$collections$CollectionView*) param2));
org$frostlang$frostc$Type* $tmp1761 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_parameterCount():frost.core.Int from Closure.frost:240:57
org$frostlang$frostc$Type$Kind* $tmp1762 = &$tmp1761->typeKind;
org$frostlang$frostc$Type$Kind $tmp1763 = *$tmp1762;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1764;
$tmp1764 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1764->value = $tmp1763;
frost$core$Int $tmp1765 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1766 = &(&local7)->$rawValue;
*$tmp1766 = $tmp1765;
org$frostlang$frostc$Type$Kind $tmp1767 = *(&local7);
*(&local6) = $tmp1767;
org$frostlang$frostc$Type$Kind $tmp1768 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1769;
$tmp1769 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1769->value = $tmp1768;
ITable* $tmp1770 = ((frost$core$Equatable*) $tmp1764)->$class->itable;
while ($tmp1770->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1770 = $tmp1770->next;
}
$fn1772 $tmp1771 = $tmp1770->methods[0];
frost$core$Bit $tmp1773 = $tmp1771(((frost$core$Equatable*) $tmp1764), ((frost$core$Equatable*) $tmp1769));
bool $tmp1774 = $tmp1773.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1769)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1764)));
if ($tmp1774) goto block27; else goto block31;
block31:;
org$frostlang$frostc$Type$Kind* $tmp1775 = &$tmp1761->typeKind;
org$frostlang$frostc$Type$Kind $tmp1776 = *$tmp1775;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1777;
$tmp1777 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1777->value = $tmp1776;
frost$core$Int $tmp1778 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1779 = &(&local9)->$rawValue;
*$tmp1779 = $tmp1778;
org$frostlang$frostc$Type$Kind $tmp1780 = *(&local9);
*(&local8) = $tmp1780;
org$frostlang$frostc$Type$Kind $tmp1781 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1782;
$tmp1782 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1782->value = $tmp1781;
ITable* $tmp1783 = ((frost$core$Equatable*) $tmp1777)->$class->itable;
while ($tmp1783->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1783 = $tmp1783->next;
}
$fn1785 $tmp1784 = $tmp1783->methods[0];
frost$core$Bit $tmp1786 = $tmp1784(((frost$core$Equatable*) $tmp1777), ((frost$core$Equatable*) $tmp1782));
bool $tmp1787 = $tmp1786.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1782)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1777)));
if ($tmp1787) goto block27; else goto block30;
block30:;
org$frostlang$frostc$Type$Kind* $tmp1788 = &$tmp1761->typeKind;
org$frostlang$frostc$Type$Kind $tmp1789 = *$tmp1788;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1790;
$tmp1790 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1790->value = $tmp1789;
frost$core$Int $tmp1791 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1792 = &(&local11)->$rawValue;
*$tmp1792 = $tmp1791;
org$frostlang$frostc$Type$Kind $tmp1793 = *(&local11);
*(&local10) = $tmp1793;
org$frostlang$frostc$Type$Kind $tmp1794 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1795;
$tmp1795 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1795->value = $tmp1794;
ITable* $tmp1796 = ((frost$core$Equatable*) $tmp1790)->$class->itable;
while ($tmp1796->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1796 = $tmp1796->next;
}
$fn1798 $tmp1797 = $tmp1796->methods[0];
frost$core$Bit $tmp1799 = $tmp1797(((frost$core$Equatable*) $tmp1790), ((frost$core$Equatable*) $tmp1795));
bool $tmp1800 = $tmp1799.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1795)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1790)));
if ($tmp1800) goto block27; else goto block29;
block29:;
org$frostlang$frostc$Type$Kind* $tmp1801 = &$tmp1761->typeKind;
org$frostlang$frostc$Type$Kind $tmp1802 = *$tmp1801;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1803;
$tmp1803 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1803->value = $tmp1802;
frost$core$Int $tmp1804 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:420:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1805 = &(&local13)->$rawValue;
*$tmp1805 = $tmp1804;
org$frostlang$frostc$Type$Kind $tmp1806 = *(&local13);
*(&local12) = $tmp1806;
org$frostlang$frostc$Type$Kind $tmp1807 = *(&local12);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1808;
$tmp1808 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1808->value = $tmp1807;
ITable* $tmp1809 = ((frost$core$Equatable*) $tmp1803)->$class->itable;
while ($tmp1809->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1809 = $tmp1809->next;
}
$fn1811 $tmp1810 = $tmp1809->methods[0];
frost$core$Bit $tmp1812 = $tmp1810(((frost$core$Equatable*) $tmp1803), ((frost$core$Equatable*) $tmp1808));
bool $tmp1813 = $tmp1812.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1808)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1803)));
if ($tmp1813) goto block27; else goto block28;
block28:;
frost$core$Int $tmp1814 = (frost$core$Int) {421u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1815, $tmp1814, &$s1816);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:422
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:422:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1817 = &$tmp1761->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1818 = *$tmp1817;
frost$core$Bit $tmp1819 = (frost$core$Bit) {$tmp1818 != NULL};
bool $tmp1820 = $tmp1819.value;
if ($tmp1820) goto block37; else goto block38;
block38:;
frost$core$Int $tmp1821 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1822, $tmp1821, &$s1823);
abort(); // unreachable
block37:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
ITable* $tmp1824 = ((frost$collections$CollectionView*) $tmp1818)->$class->itable;
while ($tmp1824->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1824 = $tmp1824->next;
}
$fn1826 $tmp1825 = $tmp1824->methods[0];
frost$core$Int $tmp1827 = $tmp1825(((frost$collections$CollectionView*) $tmp1818));
frost$core$Int $tmp1828 = (frost$core$Int) {1u};
int64_t $tmp1829 = $tmp1827.value;
int64_t $tmp1830 = $tmp1828.value;
int64_t $tmp1831 = $tmp1829 - $tmp1830;
frost$core$Int $tmp1832 = (frost$core$Int) {$tmp1831};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
int64_t $tmp1833 = $tmp1760.value;
int64_t $tmp1834 = $tmp1832.value;
bool $tmp1835 = $tmp1833 != $tmp1834;
frost$core$Bit $tmp1836 = (frost$core$Bit) {$tmp1835};
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:241
org$frostlang$frostc$Type* $tmp1838 = *(&local0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:241:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1840 $tmp1839 = ($fn1840) ((frost$core$Object*) $tmp1838)->$class->vtable[0];
frost$core$String* $tmp1841 = $tmp1839(((frost$core$Object*) $tmp1838));
frost$core$String* $tmp1842 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1843, $tmp1841);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
frost$core$String* $tmp1844 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1842, &$s1845);
frost$core$String* $tmp1846 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1844, &$s1847);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1846);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:243
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1848 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1849 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1850 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:245
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1851 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1851);
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
frost$collections$Array* $tmp1852 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
*(&local14) = $tmp1851;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:246
frost$core$Int $tmp1853 = (frost$core$Int) {0u};
ITable* $tmp1854 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp1854->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1854 = $tmp1854->next;
}
$fn1856 $tmp1855 = $tmp1854->methods[0];
frost$core$Int $tmp1857 = $tmp1855(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp1858 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1859 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1853, $tmp1857, $tmp1858);
frost$core$Int $tmp1860 = $tmp1859.min;
*(&local15) = $tmp1860;
frost$core$Int $tmp1861 = $tmp1859.max;
frost$core$Bit $tmp1862 = $tmp1859.inclusive;
bool $tmp1863 = $tmp1862.value;
frost$core$Int $tmp1864 = (frost$core$Int) {1u};
if ($tmp1863) goto block43; else goto block44;
block43:;
int64_t $tmp1865 = $tmp1860.value;
int64_t $tmp1866 = $tmp1861.value;
bool $tmp1867 = $tmp1865 <= $tmp1866;
frost$core$Bit $tmp1868 = (frost$core$Bit) {$tmp1867};
bool $tmp1869 = $tmp1868.value;
if ($tmp1869) goto block40; else goto block41;
block44:;
int64_t $tmp1870 = $tmp1860.value;
int64_t $tmp1871 = $tmp1861.value;
bool $tmp1872 = $tmp1870 < $tmp1871;
frost$core$Bit $tmp1873 = (frost$core$Bit) {$tmp1872};
bool $tmp1874 = $tmp1873.value;
if ($tmp1874) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:247
frost$core$Int $tmp1875 = *(&local15);
frost$core$Object* $tmp1876 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(param2, $tmp1875);
frost$core$Int* $tmp1877 = &((org$frostlang$frostc$ASTNode*) $tmp1876)->$rawValue;
frost$core$Int $tmp1878 = *$tmp1877;
frost$core$Int $tmp1879 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:248:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1880 = $tmp1878.value;
int64_t $tmp1881 = $tmp1879.value;
bool $tmp1882 = $tmp1880 == $tmp1881;
frost$core$Bit $tmp1883 = (frost$core$Bit) {$tmp1882};
bool $tmp1884 = $tmp1883.value;
if ($tmp1884) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp1885 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$ASTNode*) $tmp1876)->$data + 0);
org$frostlang$frostc$Position $tmp1886 = *$tmp1885;
*(&local16) = $tmp1886;
frost$core$String** $tmp1887 = (frost$core$String**) (((org$frostlang$frostc$ASTNode*) $tmp1876)->$data + 24);
frost$core$String* $tmp1888 = *$tmp1887;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
frost$core$String* $tmp1889 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
*(&local17) = $tmp1888;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:249
frost$collections$Array* $tmp1890 = *(&local14);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1891 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1892 = (frost$core$Int) {34u};
org$frostlang$frostc$Position $tmp1893 = *(&local16);
frost$core$String* $tmp1894 = *(&local17);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1895 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1896 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp1897 = *(&local16);
org$frostlang$frostc$Type* $tmp1898 = *(&local4);
frost$core$Int $tmp1899 = *(&local15);
// begin inline call to function org.frostlang.frostc.Type.parameterType(i:frost.core.Int):org.frostlang.frostc.Type from Closure.frost:251:90
org$frostlang$frostc$Type$Kind* $tmp1900 = &$tmp1898->typeKind;
org$frostlang$frostc$Type$Kind $tmp1901 = *$tmp1900;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1902;
$tmp1902 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1902->value = $tmp1901;
frost$core$Int $tmp1903 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1904 = &(&local19)->$rawValue;
*$tmp1904 = $tmp1903;
org$frostlang$frostc$Type$Kind $tmp1905 = *(&local19);
*(&local18) = $tmp1905;
org$frostlang$frostc$Type$Kind $tmp1906 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1907;
$tmp1907 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1907->value = $tmp1906;
ITable* $tmp1908 = ((frost$core$Equatable*) $tmp1902)->$class->itable;
while ($tmp1908->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1908 = $tmp1908->next;
}
$fn1910 $tmp1909 = $tmp1908->methods[0];
frost$core$Bit $tmp1911 = $tmp1909(((frost$core$Equatable*) $tmp1902), ((frost$core$Equatable*) $tmp1907));
bool $tmp1912 = $tmp1911.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1907)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1902)));
if ($tmp1912) goto block53; else goto block56;
block56:;
org$frostlang$frostc$Type$Kind* $tmp1913 = &$tmp1898->typeKind;
org$frostlang$frostc$Type$Kind $tmp1914 = *$tmp1913;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1915;
$tmp1915 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1915->value = $tmp1914;
frost$core$Int $tmp1916 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1917 = &(&local21)->$rawValue;
*$tmp1917 = $tmp1916;
org$frostlang$frostc$Type$Kind $tmp1918 = *(&local21);
*(&local20) = $tmp1918;
org$frostlang$frostc$Type$Kind $tmp1919 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1920;
$tmp1920 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1920->value = $tmp1919;
ITable* $tmp1921 = ((frost$core$Equatable*) $tmp1915)->$class->itable;
while ($tmp1921->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1921 = $tmp1921->next;
}
$fn1923 $tmp1922 = $tmp1921->methods[0];
frost$core$Bit $tmp1924 = $tmp1922(((frost$core$Equatable*) $tmp1915), ((frost$core$Equatable*) $tmp1920));
bool $tmp1925 = $tmp1924.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1920)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1915)));
if ($tmp1925) goto block53; else goto block55;
block55:;
org$frostlang$frostc$Type$Kind* $tmp1926 = &$tmp1898->typeKind;
org$frostlang$frostc$Type$Kind $tmp1927 = *$tmp1926;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1928;
$tmp1928 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1928->value = $tmp1927;
frost$core$Int $tmp1929 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1930 = &(&local23)->$rawValue;
*$tmp1930 = $tmp1929;
org$frostlang$frostc$Type$Kind $tmp1931 = *(&local23);
*(&local22) = $tmp1931;
org$frostlang$frostc$Type$Kind $tmp1932 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1933;
$tmp1933 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1933->value = $tmp1932;
ITable* $tmp1934 = ((frost$core$Equatable*) $tmp1928)->$class->itable;
while ($tmp1934->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1934 = $tmp1934->next;
}
$fn1936 $tmp1935 = $tmp1934->methods[0];
frost$core$Bit $tmp1937 = $tmp1935(((frost$core$Equatable*) $tmp1928), ((frost$core$Equatable*) $tmp1933));
bool $tmp1938 = $tmp1937.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1933)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1928)));
if ($tmp1938) goto block53; else goto block54;
block54:;
org$frostlang$frostc$Type$Kind* $tmp1939 = &$tmp1898->typeKind;
org$frostlang$frostc$Type$Kind $tmp1940 = *$tmp1939;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1941;
$tmp1941 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1941->value = $tmp1940;
frost$core$Int $tmp1942 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:426:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1943 = &(&local25)->$rawValue;
*$tmp1943 = $tmp1942;
org$frostlang$frostc$Type$Kind $tmp1944 = *(&local25);
*(&local24) = $tmp1944;
org$frostlang$frostc$Type$Kind $tmp1945 = *(&local24);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1946;
$tmp1946 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1946->value = $tmp1945;
ITable* $tmp1947 = ((frost$core$Equatable*) $tmp1941)->$class->itable;
while ($tmp1947->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1947 = $tmp1947->next;
}
$fn1949 $tmp1948 = $tmp1947->methods[0];
frost$core$Bit $tmp1950 = $tmp1948(((frost$core$Equatable*) $tmp1941), ((frost$core$Equatable*) $tmp1946));
bool $tmp1951 = $tmp1950.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1946)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1941)));
if ($tmp1951) goto block53; else goto block51;
block53:;
frost$core$Int $tmp1952 = (frost$core$Int) {0u};
int64_t $tmp1953 = $tmp1899.value;
int64_t $tmp1954 = $tmp1952.value;
bool $tmp1955 = $tmp1953 >= $tmp1954;
frost$core$Bit $tmp1956 = (frost$core$Bit) {$tmp1955};
bool $tmp1957 = $tmp1956.value;
if ($tmp1957) goto block52; else goto block51;
block52:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:426:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1958 = &$tmp1898->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1959 = *$tmp1958;
frost$core$Bit $tmp1960 = (frost$core$Bit) {$tmp1959 != NULL};
bool $tmp1961 = $tmp1960.value;
if ($tmp1961) goto block62; else goto block63;
block63:;
frost$core$Int $tmp1962 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1963, $tmp1962, &$s1964);
abort(); // unreachable
block62:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
ITable* $tmp1965 = ((frost$collections$CollectionView*) $tmp1959)->$class->itable;
while ($tmp1965->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1965 = $tmp1965->next;
}
$fn1967 $tmp1966 = $tmp1965->methods[0];
frost$core$Int $tmp1968 = $tmp1966(((frost$collections$CollectionView*) $tmp1959));
frost$core$Int $tmp1969 = (frost$core$Int) {1u};
int64_t $tmp1970 = $tmp1968.value;
int64_t $tmp1971 = $tmp1969.value;
int64_t $tmp1972 = $tmp1970 - $tmp1971;
frost$core$Int $tmp1973 = (frost$core$Int) {$tmp1972};
int64_t $tmp1974 = $tmp1899.value;
int64_t $tmp1975 = $tmp1973.value;
bool $tmp1976 = $tmp1974 < $tmp1975;
frost$core$Bit $tmp1977 = (frost$core$Bit) {$tmp1976};
bool $tmp1978 = $tmp1977.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
if ($tmp1978) goto block50; else goto block51;
block51:;
frost$core$Int $tmp1979 = (frost$core$Int) {427u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1980, $tmp1979, &$s1981);
abort(); // unreachable
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:428
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:428:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1982 = &$tmp1898->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1983 = *$tmp1982;
frost$core$Bit $tmp1984 = (frost$core$Bit) {$tmp1983 != NULL};
bool $tmp1985 = $tmp1984.value;
if ($tmp1985) goto block65; else goto block66;
block66:;
frost$core$Int $tmp1986 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1987, $tmp1986, &$s1988);
abort(); // unreachable
block65:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
frost$core$Object* $tmp1989 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1983, $tmp1899);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1989)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1989);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:251:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3712
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1990 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1991 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3712:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp1992 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp1993 = *$tmp1992;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1994 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1995 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1994, $tmp1995);
frost$collections$Array$add$frost$collections$Array$T($tmp1994, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1989)));
org$frostlang$frostc$Type* $tmp1996 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1993, ((frost$collections$ListView*) $tmp1994));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp1990, $tmp1991, ((org$frostlang$frostc$Type*) $tmp1989), $tmp1996);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1895, $tmp1896, $tmp1897, $tmp1990);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp1891, $tmp1892, $tmp1893, $tmp1894, $tmp1895);
frost$collections$Array$add$frost$collections$Array$T($tmp1890, ((frost$core$Object*) $tmp1891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1989)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
frost$core$String* $tmp1997 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1876);
frost$core$Int $tmp1998 = *(&local15);
int64_t $tmp1999 = $tmp1861.value;
int64_t $tmp2000 = $tmp1998.value;
int64_t $tmp2001 = $tmp1999 - $tmp2000;
frost$core$Int $tmp2002 = (frost$core$Int) {$tmp2001};
if ($tmp1863) goto block70; else goto block71;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:254
frost$core$Int $tmp2003 = (frost$core$Int) {254u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2004, $tmp2003);
abort(); // unreachable
block70:;
int64_t $tmp2005 = $tmp2002.value;
int64_t $tmp2006 = $tmp1864.value;
bool $tmp2007 = $tmp2005 >= $tmp2006;
frost$core$Bit $tmp2008 = (frost$core$Bit) {$tmp2007};
bool $tmp2009 = $tmp2008.value;
if ($tmp2009) goto block69; else goto block41;
block71:;
int64_t $tmp2010 = $tmp2002.value;
int64_t $tmp2011 = $tmp1864.value;
bool $tmp2012 = $tmp2010 > $tmp2011;
frost$core$Bit $tmp2013 = (frost$core$Bit) {$tmp2012};
bool $tmp2014 = $tmp2013.value;
if ($tmp2014) goto block69; else goto block41;
block69:;
int64_t $tmp2015 = $tmp1998.value;
int64_t $tmp2016 = $tmp1864.value;
int64_t $tmp2017 = $tmp2015 + $tmp2016;
frost$core$Int $tmp2018 = (frost$core$Int) {$tmp2017};
*(&local15) = $tmp2018;
goto block40;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:258
org$frostlang$frostc$Type* $tmp2019 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:258:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp2020 = &$tmp2019->typeKind;
org$frostlang$frostc$Type$Kind $tmp2021 = *$tmp2020;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2022;
$tmp2022 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2022->value = $tmp2021;
frost$core$Int $tmp2023 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2024 = &(&local28)->$rawValue;
*$tmp2024 = $tmp2023;
org$frostlang$frostc$Type$Kind $tmp2025 = *(&local28);
*(&local27) = $tmp2025;
org$frostlang$frostc$Type$Kind $tmp2026 = *(&local27);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2027;
$tmp2027 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2027->value = $tmp2026;
ITable* $tmp2028 = ((frost$core$Equatable*) $tmp2022)->$class->itable;
while ($tmp2028->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2028 = $tmp2028->next;
}
$fn2030 $tmp2029 = $tmp2028->methods[1];
frost$core$Bit $tmp2031 = $tmp2029(((frost$core$Equatable*) $tmp2022), ((frost$core$Equatable*) $tmp2027));
bool $tmp2032 = $tmp2031.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2027)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2022)));
if ($tmp2032) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
*(&local26) = $tmp2019;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
goto block72;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2033 = &$tmp2019->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2034 = *$tmp2033;
frost$core$Bit $tmp2035 = (frost$core$Bit) {$tmp2034 != NULL};
bool $tmp2036 = $tmp2035.value;
if ($tmp2036) goto block77; else goto block78;
block78:;
frost$core$Int $tmp2037 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2038, $tmp2037, &$s2039);
abort(); // unreachable
block77:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
frost$core$Int $tmp2040 = (frost$core$Int) {0u};
frost$core$Object* $tmp2041 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp2034, $tmp2040);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2041)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2041);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
*(&local26) = ((org$frostlang$frostc$Type*) $tmp2041);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2041)));
goto block72;
block72:;
org$frostlang$frostc$Type* $tmp2042 = *(&local26);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:258:54
org$frostlang$frostc$Type$Kind* $tmp2043 = &$tmp2042->typeKind;
org$frostlang$frostc$Type$Kind $tmp2044 = *$tmp2043;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2045;
$tmp2045 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2045->value = $tmp2044;
frost$core$Int $tmp2046 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2047 = &(&local30)->$rawValue;
*$tmp2047 = $tmp2046;
org$frostlang$frostc$Type$Kind $tmp2048 = *(&local30);
*(&local29) = $tmp2048;
org$frostlang$frostc$Type$Kind $tmp2049 = *(&local29);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2050;
$tmp2050 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2050->value = $tmp2049;
ITable* $tmp2051 = ((frost$core$Equatable*) $tmp2045)->$class->itable;
while ($tmp2051->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2051 = $tmp2051->next;
}
$fn2053 $tmp2052 = $tmp2051->methods[0];
frost$core$Bit $tmp2054 = $tmp2052(((frost$core$Equatable*) $tmp2045), ((frost$core$Equatable*) $tmp2050));
bool $tmp2055 = $tmp2054.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2050)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2045)));
if ($tmp2055) goto block80; else goto block84;
block84:;
org$frostlang$frostc$Type$Kind* $tmp2056 = &$tmp2042->typeKind;
org$frostlang$frostc$Type$Kind $tmp2057 = *$tmp2056;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2058;
$tmp2058 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2058->value = $tmp2057;
frost$core$Int $tmp2059 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2060 = &(&local32)->$rawValue;
*$tmp2060 = $tmp2059;
org$frostlang$frostc$Type$Kind $tmp2061 = *(&local32);
*(&local31) = $tmp2061;
org$frostlang$frostc$Type$Kind $tmp2062 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2063;
$tmp2063 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2063->value = $tmp2062;
ITable* $tmp2064 = ((frost$core$Equatable*) $tmp2058)->$class->itable;
while ($tmp2064->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2064 = $tmp2064->next;
}
$fn2066 $tmp2065 = $tmp2064->methods[0];
frost$core$Bit $tmp2067 = $tmp2065(((frost$core$Equatable*) $tmp2058), ((frost$core$Equatable*) $tmp2063));
bool $tmp2068 = $tmp2067.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2063)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2058)));
if ($tmp2068) goto block80; else goto block83;
block83:;
org$frostlang$frostc$Type$Kind* $tmp2069 = &$tmp2042->typeKind;
org$frostlang$frostc$Type$Kind $tmp2070 = *$tmp2069;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2071;
$tmp2071 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2071->value = $tmp2070;
frost$core$Int $tmp2072 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2073 = &(&local34)->$rawValue;
*$tmp2073 = $tmp2072;
org$frostlang$frostc$Type$Kind $tmp2074 = *(&local34);
*(&local33) = $tmp2074;
org$frostlang$frostc$Type$Kind $tmp2075 = *(&local33);
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
if ($tmp2081) goto block80; else goto block82;
block82:;
org$frostlang$frostc$Type$Kind* $tmp2082 = &$tmp2042->typeKind;
org$frostlang$frostc$Type$Kind $tmp2083 = *$tmp2082;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2084;
$tmp2084 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2084->value = $tmp2083;
frost$core$Int $tmp2085 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2086 = &(&local36)->$rawValue;
*$tmp2086 = $tmp2085;
org$frostlang$frostc$Type$Kind $tmp2087 = *(&local36);
*(&local35) = $tmp2087;
org$frostlang$frostc$Type$Kind $tmp2088 = *(&local35);
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
if ($tmp2094) goto block80; else goto block81;
block81:;
frost$core$Int $tmp2095 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2096, $tmp2095, &$s2097);
abort(); // unreachable
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2098 = &$tmp2042->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2099 = *$tmp2098;
frost$core$Bit $tmp2100 = (frost$core$Bit) {$tmp2099 != NULL};
bool $tmp2101 = $tmp2100.value;
if ($tmp2101) goto block90; else goto block91;
block91:;
frost$core$Int $tmp2102 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2103, $tmp2102, &$s2104);
abort(); // unreachable
block90:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
ITable* $tmp2105 = ((frost$collections$ListView*) $tmp2099)->$class->itable;
while ($tmp2105->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2105 = $tmp2105->next;
}
$fn2107 $tmp2106 = $tmp2105->methods[5];
frost$core$Object* $tmp2108 = $tmp2106(((frost$collections$ListView*) $tmp2099));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2108)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
*(&local37) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2108)));
org$frostlang$frostc$Type* $tmp2109 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
*(&local37) = ((org$frostlang$frostc$Type*) $tmp2108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2108)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2042));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:259
frost$core$Int $tmp2110 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:259:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2111 = &(&local39)->$rawValue;
*$tmp2111 = $tmp2110;
org$frostlang$frostc$MethodDecl$Kind $tmp2112 = *(&local39);
*(&local38) = $tmp2112;
org$frostlang$frostc$MethodDecl$Kind $tmp2113 = *(&local38);
frost$collections$Array* $tmp2114 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp2115 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2114);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2116 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2117 = (frost$core$Int) {26u};
org$frostlang$frostc$Type* $tmp2118 = *(&local37);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:261:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3712
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2119 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2120 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3712:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp2121 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp2122 = *$tmp2121;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2123 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2124 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2123, $tmp2124);
frost$collections$Array$add$frost$collections$Array$T($tmp2123, ((frost$core$Object*) $tmp2118));
org$frostlang$frostc$Type* $tmp2125 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2122, ((frost$collections$ListView*) $tmp2123));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp2119, $tmp2120, $tmp2118, $tmp2125);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2116, $tmp2117, param1, $tmp2119);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2126 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2127 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2126, $tmp2127);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2128 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2129 = (frost$core$Int) {38u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp2128, $tmp2129, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp2126, ((frost$core$Object*) $tmp2128));
org$frostlang$frostc$FixedArray* $tmp2130 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2126);
org$frostlang$frostc$IR$Value* $tmp2131 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2113, $tmp2115, $tmp2116, $tmp2130, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
org$frostlang$frostc$Type* $tmp2132 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
*(&local37) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2133 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2134 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2135 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2135));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2136 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2137 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp2131;
block12:;
org$frostlang$frostc$Type* $tmp2138 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2139 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2140 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2140));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:267
frost$collections$IdentityMap** $tmp2141 = &param0->lambdaTypes;
frost$collections$IdentityMap* $tmp2142 = *$tmp2141;
frost$core$Object* $tmp2143 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp2142, ((frost$core$Object*) param3));
*(&local40) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp2143)));
frost$collections$HashSet* $tmp2144 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2144));
*(&local40) = ((frost$collections$HashSet*) $tmp2143);
frost$core$Frost$unref$frost$core$Object$Q($tmp2143);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:268
frost$collections$HashSet* $tmp2145 = *(&local40);
frost$core$Bit $tmp2146 = (frost$core$Bit) {$tmp2145 != NULL};
bool $tmp2147 = $tmp2146.value;
if ($tmp2147) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:269
frost$collections$HashSet* $tmp2148 = *(&local40);
frost$core$Bit $tmp2149 = (frost$core$Bit) {$tmp2148 != NULL};
bool $tmp2150 = $tmp2149.value;
if ($tmp2150) goto block100; else goto block101;
block101:;
frost$core$Int $tmp2151 = (frost$core$Int) {269u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2152, $tmp2151, &$s2153);
abort(); // unreachable
block100:;
ITable* $tmp2154 = ((frost$collections$CollectionView*) $tmp2148)->$class->itable;
while ($tmp2154->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2154 = $tmp2154->next;
}
$fn2156 $tmp2155 = $tmp2154->methods[0];
frost$core$Int $tmp2157 = $tmp2155(((frost$collections$CollectionView*) $tmp2148));
frost$core$Int $tmp2158 = (frost$core$Int) {1u};
int64_t $tmp2159 = $tmp2157.value;
int64_t $tmp2160 = $tmp2158.value;
bool $tmp2161 = $tmp2159 > $tmp2160;
frost$core$Bit $tmp2162 = (frost$core$Bit) {$tmp2161};
bool $tmp2163 = $tmp2162.value;
if ($tmp2163) goto block97; else goto block99;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:270
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2164 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$HashSet* $tmp2165 = *(&local40);
frost$core$Bit $tmp2166 = (frost$core$Bit) {$tmp2165 != NULL};
bool $tmp2167 = $tmp2166.value;
if ($tmp2167) goto block102; else goto block103;
block103:;
frost$core$Int $tmp2168 = (frost$core$Int) {270u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2169, $tmp2168, &$s2170);
abort(); // unreachable
block102:;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp2164, ((frost$collections$CollectionView*) $tmp2165));
*(&local41) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
frost$collections$Array* $tmp2171 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2171));
*(&local41) = $tmp2164;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:271
frost$collections$Array* $tmp2172 = *(&local41);
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp2174 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Closure.frost:271:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp2175 = &$tmp2174->pointer;
*$tmp2175 = ((frost$core$Int8*) org$frostlang$frostc$expression$Closure$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp2176 = &$tmp2174->target;
frost$core$Immutable* $tmp2177 = *$tmp2176;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2177));
frost$core$Immutable** $tmp2178 = &$tmp2174->target;
*$tmp2178 = ((frost$core$Immutable*) NULL);
ITable* $tmp2179 = ((frost$collections$ListView*) $tmp2172)->$class->itable;
while ($tmp2179->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2179 = $tmp2179->next;
}
$fn2181 $tmp2180 = $tmp2179->methods[15];
frost$collections$ListView* $tmp2182 = $tmp2180(((frost$collections$ListView*) $tmp2172), ((frost$core$MutableMethod*) $tmp2174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2174));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:272
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2183 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2183, &$s2184);
*(&local42) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
frost$core$MutableString* $tmp2185 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
*(&local42) = $tmp2183;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:273
frost$threads$MessageQueue** $tmp2186 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2187 = *$tmp2186;
*(&local43) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
frost$threads$MessageQueue* $tmp2188 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
*(&local43) = $tmp2187;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:274
frost$collections$Array* $tmp2189 = *(&local41);
ITable* $tmp2190 = ((frost$collections$Iterable*) $tmp2189)->$class->itable;
while ($tmp2190->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2190 = $tmp2190->next;
}
$fn2192 $tmp2191 = $tmp2190->methods[0];
frost$collections$Iterator* $tmp2193 = $tmp2191(((frost$collections$Iterable*) $tmp2189));
goto block105;
block105:;
ITable* $tmp2194 = $tmp2193->$class->itable;
while ($tmp2194->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2194 = $tmp2194->next;
}
$fn2196 $tmp2195 = $tmp2194->methods[0];
frost$core$Bit $tmp2197 = $tmp2195($tmp2193);
bool $tmp2198 = $tmp2197.value;
if ($tmp2198) goto block107; else goto block106;
block106:;
*(&local44) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp2199 = $tmp2193->$class->itable;
while ($tmp2199->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2199 = $tmp2199->next;
}
$fn2201 $tmp2200 = $tmp2199->methods[1];
frost$core$Object* $tmp2202 = $tmp2200($tmp2193);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2202)));
org$frostlang$frostc$Type* $tmp2203 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2203));
*(&local44) = ((org$frostlang$frostc$Type*) $tmp2202);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:275
frost$core$MutableString* $tmp2204 = *(&local42);
org$frostlang$frostc$Type* $tmp2205 = *(&local44);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:275:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2207 $tmp2206 = ($fn2207) ((frost$core$Object*) $tmp2205)->$class->vtable[0];
frost$core$String* $tmp2208 = $tmp2206(((frost$core$Object*) $tmp2205));
frost$core$String* $tmp2209 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2210, $tmp2208);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
frost$core$String* $tmp2211 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2209, &$s2212);
frost$core$MutableString$append$frost$core$String($tmp2204, $tmp2211);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2209));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:276
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp2213 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp2213);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2213));
frost$threads$MessageQueue** $tmp2214 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2215 = *$tmp2214;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2215));
frost$threads$MessageQueue** $tmp2216 = &param0->errorQueue;
*$tmp2216 = $tmp2213;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2213));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:277
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2217 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2218 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp2219 = *(&local44);
frost$core$Bit $tmp2220 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2217, $tmp2218, $tmp2219, $tmp2220);
org$frostlang$frostc$IR$Value* $tmp2221 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp2217);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:279
frost$threads$MessageQueue** $tmp2222 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2223 = *$tmp2222;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Closure.frost:279:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp2224 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp2225 = &$tmp2223->lock;
frost$threads$Lock* $tmp2226 = *$tmp2225;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp2224, $tmp2226);
*(&local45) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
frost$threads$ScopedLock* $tmp2227 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2227));
*(&local45) = $tmp2224;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp2228 = &$tmp2223->count;
frost$core$Int $tmp2229 = *$tmp2228;
frost$threads$ScopedLock* $tmp2230 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
*(&local45) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp2231 = (frost$core$Int) {0u};
int64_t $tmp2232 = $tmp2229.value;
int64_t $tmp2233 = $tmp2231.value;
bool $tmp2234 = $tmp2232 > $tmp2233;
frost$core$Bit $tmp2235 = (frost$core$Bit) {$tmp2234};
bool $tmp2236 = $tmp2235.value;
if ($tmp2236) goto block111; else goto block112;
block112:;
frost$core$Int $tmp2237 = (frost$core$Int) {279u};
org$frostlang$frostc$Position$wrapper* $tmp2238;
$tmp2238 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp2238->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:280:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2240 $tmp2239 = ($fn2240) ((frost$core$Object*) $tmp2238)->$class->vtable[0];
frost$core$String* $tmp2241 = $tmp2239(((frost$core$Object*) $tmp2238));
frost$core$String* $tmp2242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2243, $tmp2241);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
frost$core$String* $tmp2244 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2242, &$s2245);
org$frostlang$frostc$Type* $tmp2246 = *(&local44);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:281:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2248 $tmp2247 = ($fn2248) ((frost$core$Object*) $tmp2246)->$class->vtable[0];
frost$core$String* $tmp2249 = $tmp2247(((frost$core$Object*) $tmp2246));
frost$core$String* $tmp2250 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2251, $tmp2249);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2249));
frost$core$String* $tmp2252 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2250, &$s2253);
frost$core$String* $tmp2254 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2244, $tmp2252);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2255, $tmp2237, $tmp2254);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2238));
abort(); // unreachable
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:282
goto block115;
block115:;
frost$threads$MessageQueue** $tmp2256 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2257 = *$tmp2256;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Closure.frost:282:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp2258 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp2259 = &$tmp2257->lock;
frost$threads$Lock* $tmp2260 = *$tmp2259;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp2258, $tmp2260);
*(&local46) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2258));
frost$threads$ScopedLock* $tmp2261 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
*(&local46) = $tmp2258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2258));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp2262 = &$tmp2257->count;
frost$core$Int $tmp2263 = *$tmp2262;
frost$threads$ScopedLock* $tmp2264 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
*(&local46) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp2265 = (frost$core$Int) {0u};
int64_t $tmp2266 = $tmp2263.value;
int64_t $tmp2267 = $tmp2265.value;
bool $tmp2268 = $tmp2266 > $tmp2267;
frost$core$Bit $tmp2269 = (frost$core$Bit) {$tmp2268};
bool $tmp2270 = $tmp2269.value;
if ($tmp2270) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:283
frost$threads$MessageQueue** $tmp2271 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2272 = *$tmp2271;
frost$core$Immutable* $tmp2273 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp2272);
frost$core$Int* $tmp2274 = &((org$frostlang$frostc$Compiler$Message*) $tmp2273)->$rawValue;
frost$core$Int $tmp2275 = *$tmp2274;
frost$core$Int $tmp2276 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:284:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2277 = $tmp2275.value;
int64_t $tmp2278 = $tmp2276.value;
bool $tmp2279 = $tmp2277 == $tmp2278;
frost$core$Bit $tmp2280 = (frost$core$Bit) {$tmp2279};
bool $tmp2281 = $tmp2280.value;
if ($tmp2281) goto block121; else goto block122;
block121:;
frost$core$String** $tmp2282 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2273)->$data + 0);
frost$core$String* $tmp2283 = *$tmp2282;
frost$core$Int* $tmp2284 = (frost$core$Int*) (((org$frostlang$frostc$Compiler$Message*) $tmp2273)->$data + 8);
frost$core$Int $tmp2285 = *$tmp2284;
frost$core$Int* $tmp2286 = (frost$core$Int*) (((org$frostlang$frostc$Compiler$Message*) $tmp2273)->$data + 16);
frost$core$Int $tmp2287 = *$tmp2286;
frost$core$String** $tmp2288 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2273)->$data + 24);
frost$core$String* $tmp2289 = *$tmp2288;
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2289));
frost$core$String* $tmp2290 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
*(&local47) = $tmp2289;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:285
frost$core$MutableString* $tmp2291 = *(&local42);
frost$core$String* $tmp2292 = *(&local47);
frost$core$String* $tmp2293 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2294, $tmp2292);
frost$core$String* $tmp2295 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2293, &$s2296);
frost$core$MutableString$append$frost$core$String($tmp2291, $tmp2295);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
frost$core$String* $tmp2297 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2297));
*(&local47) = ((frost$core$String*) NULL);
goto block120;
block122:;
frost$core$Int $tmp2298 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:287:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2299 = $tmp2275.value;
int64_t $tmp2300 = $tmp2298.value;
bool $tmp2301 = $tmp2299 == $tmp2300;
frost$core$Bit $tmp2302 = (frost$core$Bit) {$tmp2301};
bool $tmp2303 = $tmp2302.value;
if ($tmp2303) goto block124; else goto block120;
block124:;
frost$core$String** $tmp2304 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2273)->$data + 0);
frost$core$String* $tmp2305 = *$tmp2304;
frost$core$Int* $tmp2306 = (frost$core$Int*) (((org$frostlang$frostc$Compiler$Message*) $tmp2273)->$data + 8);
frost$core$Int $tmp2307 = *$tmp2306;
frost$core$Int* $tmp2308 = (frost$core$Int*) (((org$frostlang$frostc$Compiler$Message*) $tmp2273)->$data + 16);
frost$core$Int $tmp2309 = *$tmp2308;
frost$core$String** $tmp2310 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2273)->$data + 24);
frost$core$String* $tmp2311 = *$tmp2310;
*(&local48) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
frost$core$String* $tmp2312 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2312));
*(&local48) = $tmp2311;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:288
frost$core$MutableString* $tmp2313 = *(&local42);
frost$core$String* $tmp2314 = *(&local48);
frost$core$String* $tmp2315 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2316, $tmp2314);
frost$core$String* $tmp2317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2315, &$s2318);
frost$core$MutableString$append$frost$core$String($tmp2313, $tmp2317);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
frost$core$String* $tmp2319 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2319));
*(&local48) = ((frost$core$String*) NULL);
goto block120;
block120:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
goto block115;
block117:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2202);
org$frostlang$frostc$Type* $tmp2320 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2320));
*(&local44) = ((org$frostlang$frostc$Type*) NULL);
goto block105;
block107:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:293
frost$threads$MessageQueue* $tmp2321 = *(&local43);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
frost$threads$MessageQueue** $tmp2322 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2323 = *$tmp2322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2323));
frost$threads$MessageQueue** $tmp2324 = &param0->errorQueue;
*$tmp2324 = $tmp2321;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:294
frost$core$MutableString* $tmp2325 = *(&local42);
frost$core$String* $tmp2326 = frost$core$MutableString$finish$R$frost$core$String($tmp2325);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2326);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:295
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$threads$MessageQueue* $tmp2327 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
*(&local43) = ((frost$threads$MessageQueue*) NULL);
frost$core$MutableString* $tmp2328 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
*(&local42) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp2329 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
*(&local41) = ((frost$collections$Array*) NULL);
frost$collections$HashSet* $tmp2330 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
*(&local40) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block99:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:298
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2331 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2332 = (frost$core$Int) {3u};
frost$collections$HashSet* $tmp2333 = *(&local40);
frost$core$Bit $tmp2334 = (frost$core$Bit) {$tmp2333 != NULL};
bool $tmp2335 = $tmp2334.value;
if ($tmp2335) goto block126; else goto block127;
block127:;
frost$core$Int $tmp2336 = (frost$core$Int) {299u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2337, $tmp2336, &$s2338);
abort(); // unreachable
block126:;
ITable* $tmp2339 = ((frost$collections$Iterable*) $tmp2333)->$class->itable;
while ($tmp2339->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2339 = $tmp2339->next;
}
$fn2341 $tmp2340 = $tmp2339->methods[0];
frost$collections$Iterator* $tmp2342 = $tmp2340(((frost$collections$Iterable*) $tmp2333));
ITable* $tmp2343 = $tmp2342->$class->itable;
while ($tmp2343->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2343 = $tmp2343->next;
}
$fn2345 $tmp2344 = $tmp2343->methods[1];
frost$core$Object* $tmp2346 = $tmp2344($tmp2342);
frost$core$Bit $tmp2347 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp2331, $tmp2332, ((org$frostlang$frostc$Type*) $tmp2346), $tmp2347);
org$frostlang$frostc$IR$Value* $tmp2348 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp2331);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2348));
frost$core$Frost$unref$frost$core$Object$Q($tmp2346);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2331));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:300
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp2349 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2349));
*(&local40) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block98:;
goto block96;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:303
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s2350);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:305
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp2351 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2351));
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
frost$core$Int* $tmp2352 = &param0->closureCount;
frost$core$Int $tmp2353 = *$tmp2352;
frost$core$Int $tmp2354 = (frost$core$Int) {1u};
int64_t $tmp2355 = $tmp2353.value;
int64_t $tmp2356 = $tmp2354.value;
int64_t $tmp2357 = $tmp2355 + $tmp2356;
frost$core$Int $tmp2358 = (frost$core$Int) {$tmp2357};
frost$core$Int* $tmp2359 = &param0->closureCount;
*$tmp2359 = $tmp2358;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:313
frost$core$Int* $tmp2360 = &param0->closureCount;
frost$core$Int $tmp2361 = *$tmp2360;
frost$core$Int$wrapper* $tmp2362;
$tmp2362 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp2362->value = $tmp2361;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:313:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2364 $tmp2363 = ($fn2364) ((frost$core$Object*) $tmp2362)->$class->vtable[0];
frost$core$String* $tmp2365 = $tmp2363(((frost$core$Object*) $tmp2362));
frost$core$String* $tmp2366 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2367, $tmp2365);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2365));
frost$core$String* $tmp2368 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2366, &$s2369);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2368));
frost$core$String* $tmp2370 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
*(&local0) = $tmp2368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2362));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:314
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2371 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2371);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2371));
frost$collections$Array* $tmp2372 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
*(&local1) = $tmp2371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2371));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:315
ITable* $tmp2373 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp2373->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2373 = $tmp2373->next;
}
$fn2375 $tmp2374 = $tmp2373->methods[0];
frost$collections$Iterator* $tmp2376 = $tmp2374(((frost$collections$Iterable*) param3));
goto block2;
block2:;
ITable* $tmp2377 = $tmp2376->$class->itable;
while ($tmp2377->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2377 = $tmp2377->next;
}
$fn2379 $tmp2378 = $tmp2377->methods[0];
frost$core$Bit $tmp2380 = $tmp2378($tmp2376);
bool $tmp2381 = $tmp2380.value;
if ($tmp2381) goto block4; else goto block3;
block3:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2382 = $tmp2376->$class->itable;
while ($tmp2382->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2382 = $tmp2382->next;
}
$fn2384 $tmp2383 = $tmp2382->methods[1];
frost$core$Object* $tmp2385 = $tmp2383($tmp2376);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2385)));
org$frostlang$frostc$ASTNode* $tmp2386 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp2385);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:316
org$frostlang$frostc$ASTNode* $tmp2387 = *(&local2);
frost$core$Int* $tmp2388 = &$tmp2387->$rawValue;
frost$core$Int $tmp2389 = *$tmp2388;
frost$core$Int $tmp2390 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:317:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2391 = $tmp2389.value;
int64_t $tmp2392 = $tmp2390.value;
bool $tmp2393 = $tmp2391 == $tmp2392;
frost$core$Bit $tmp2394 = (frost$core$Bit) {$tmp2393};
bool $tmp2395 = $tmp2394.value;
if ($tmp2395) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp2396 = (org$frostlang$frostc$Position*) ($tmp2387->$data + 0);
org$frostlang$frostc$Position $tmp2397 = *$tmp2396;
frost$core$String** $tmp2398 = (frost$core$String**) ($tmp2387->$data + 24);
frost$core$String* $tmp2399 = *$tmp2398;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2399));
frost$core$String* $tmp2400 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
*(&local3) = $tmp2399;
org$frostlang$frostc$ASTNode** $tmp2401 = (org$frostlang$frostc$ASTNode**) ($tmp2387->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2402 = *$tmp2401;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
org$frostlang$frostc$ASTNode* $tmp2403 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2403));
*(&local4) = $tmp2402;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:318
org$frostlang$frostc$Scanner** $tmp2404 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp2405 = *$tmp2404;
org$frostlang$frostc$ASTNode* $tmp2406 = *(&local4);
org$frostlang$frostc$Type* $tmp2407 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp2405, $tmp2406);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from Closure.frost:318:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:891
frost$core$Bit $tmp2408 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp2409 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp2407, $tmp2408);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
org$frostlang$frostc$Type* $tmp2410 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
*(&local5) = $tmp2409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2407));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:319
org$frostlang$frostc$Type* $tmp2411 = *(&local5);
frost$core$Bit $tmp2412 = (frost$core$Bit) {$tmp2411 == NULL};
bool $tmp2413 = $tmp2412.value;
if ($tmp2413) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:320
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2414 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2414));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2415 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2415));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2416 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2416));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2385);
org$frostlang$frostc$ASTNode* $tmp2417 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2417));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
frost$collections$Array* $tmp2418 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2418));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2419 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2419));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:322
frost$collections$Array* $tmp2420 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp2421 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp2422 = *(&local3);
org$frostlang$frostc$Type* $tmp2423 = *(&local5);
frost$core$Bit $tmp2424 = (frost$core$Bit) {$tmp2423 != NULL};
bool $tmp2425 = $tmp2424.value;
if ($tmp2425) goto block12; else goto block13;
block13:;
frost$core$Int $tmp2426 = (frost$core$Int) {322u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2427, $tmp2426, &$s2428);
abort(); // unreachable
block12:;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp2421, $tmp2422, $tmp2423);
frost$collections$Array$add$frost$collections$Array$T($tmp2420, ((frost$core$Object*) $tmp2421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2421));
org$frostlang$frostc$Type* $tmp2429 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2429));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2430 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2430));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2431 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2431));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2385);
org$frostlang$frostc$ASTNode* $tmp2432 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:325
frost$core$Int $tmp2433 = (frost$core$Int) {325u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2434, $tmp2433);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:329
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:330
frost$core$Bit $tmp2435 = (frost$core$Bit) {param4 != NULL};
bool $tmp2436 = $tmp2435.value;
if ($tmp2436) goto block14; else goto block16;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:331
org$frostlang$frostc$Scanner** $tmp2437 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp2438 = *$tmp2437;
frost$core$Bit $tmp2439 = (frost$core$Bit) {param4 != NULL};
bool $tmp2440 = $tmp2439.value;
if ($tmp2440) goto block17; else goto block18;
block18:;
frost$core$Int $tmp2441 = (frost$core$Int) {331u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2442, $tmp2441, &$s2443);
abort(); // unreachable
block17:;
org$frostlang$frostc$Type* $tmp2444 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp2438, param4);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from Closure.frost:331:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:891
frost$core$Bit $tmp2445 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp2446 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp2444, $tmp2445);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
frost$core$Bit $tmp2447 = (frost$core$Bit) {$tmp2446 != NULL};
bool $tmp2448 = $tmp2447.value;
if ($tmp2448) goto block20; else goto block21;
block21:;
frost$core$Int $tmp2449 = (frost$core$Int) {331u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2450, $tmp2449, &$s2451);
abort(); // unreachable
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
org$frostlang$frostc$Type* $tmp2452 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2452));
*(&local6) = $tmp2446;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2444));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:332
org$frostlang$frostc$Type* $tmp2453 = *(&local6);
frost$core$Bit $tmp2454 = (frost$core$Bit) {false};
bool $tmp2455 = $tmp2454.value;
if ($tmp2455) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:333
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2456 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2456));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2457 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2457));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2458 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2458));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block23:;
goto block15;
block16:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:337
org$frostlang$frostc$Type** $tmp2459 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2460 = *$tmp2459;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
org$frostlang$frostc$Type* $tmp2461 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
*(&local6) = $tmp2460;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:338
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2462;
$tmp2462 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2462->value = param2;
frost$core$Int $tmp2463 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:338:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2464 = &(&local8)->$rawValue;
*$tmp2464 = $tmp2463;
org$frostlang$frostc$MethodDecl$Kind $tmp2465 = *(&local8);
*(&local7) = $tmp2465;
org$frostlang$frostc$MethodDecl$Kind $tmp2466 = *(&local7);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2467;
$tmp2467 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2467->value = $tmp2466;
ITable* $tmp2468 = ((frost$core$Equatable*) $tmp2462)->$class->itable;
while ($tmp2468->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2468 = $tmp2468->next;
}
$fn2470 $tmp2469 = $tmp2468->methods[0];
frost$core$Bit $tmp2471 = $tmp2469(((frost$core$Equatable*) $tmp2462), ((frost$core$Equatable*) $tmp2467));
bool $tmp2472 = $tmp2471.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2467)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2462)));
if ($tmp2472) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:339
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s2473);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:340
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2474 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2475 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2475));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2476 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2476));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block25:;
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:343
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp2477 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Stack** $tmp2478 = &param0->currentMethod;
frost$collections$Stack* $tmp2479 = *$tmp2478;
frost$core$Int $tmp2480 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Closure.frost:343:94
frost$core$Int $tmp2481 = (frost$core$Int) {0u};
int64_t $tmp2482 = $tmp2480.value;
int64_t $tmp2483 = $tmp2481.value;
bool $tmp2484 = $tmp2482 >= $tmp2483;
frost$core$Bit $tmp2485 = (frost$core$Bit) {$tmp2484};
bool $tmp2486 = $tmp2485.value;
if ($tmp2486) goto block30; else goto block29;
block30:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp2487 = &$tmp2479->contents;
frost$collections$Array* $tmp2488 = *$tmp2487;
ITable* $tmp2489 = ((frost$collections$CollectionView*) $tmp2488)->$class->itable;
while ($tmp2489->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2489 = $tmp2489->next;
}
$fn2491 $tmp2490 = $tmp2489->methods[0];
frost$core$Int $tmp2492 = $tmp2490(((frost$collections$CollectionView*) $tmp2488));
int64_t $tmp2493 = $tmp2480.value;
int64_t $tmp2494 = $tmp2492.value;
bool $tmp2495 = $tmp2493 < $tmp2494;
frost$core$Bit $tmp2496 = (frost$core$Bit) {$tmp2495};
bool $tmp2497 = $tmp2496.value;
if ($tmp2497) goto block28; else goto block29;
block29:;
frost$core$Int $tmp2498 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2499, $tmp2498, &$s2500);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp2501 = &$tmp2479->contents;
frost$collections$Array* $tmp2502 = *$tmp2501;
ITable* $tmp2503 = ((frost$collections$CollectionView*) $tmp2502)->$class->itable;
while ($tmp2503->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2503 = $tmp2503->next;
}
$fn2505 $tmp2504 = $tmp2503->methods[0];
frost$core$Int $tmp2506 = $tmp2504(((frost$collections$CollectionView*) $tmp2502));
int64_t $tmp2507 = $tmp2506.value;
int64_t $tmp2508 = $tmp2480.value;
bool $tmp2509 = $tmp2507 > $tmp2508;
frost$core$Bit $tmp2510 = (frost$core$Bit) {$tmp2509};
bool $tmp2511 = $tmp2510.value;
if ($tmp2511) goto block32; else goto block33;
block33:;
frost$core$Int $tmp2512 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2513, $tmp2512);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp2514 = &$tmp2479->contents;
frost$collections$Array* $tmp2515 = *$tmp2514;
frost$collections$Array** $tmp2516 = &$tmp2479->contents;
frost$collections$Array* $tmp2517 = *$tmp2516;
ITable* $tmp2518 = ((frost$collections$CollectionView*) $tmp2517)->$class->itable;
while ($tmp2518->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2518 = $tmp2518->next;
}
$fn2520 $tmp2519 = $tmp2518->methods[0];
frost$core$Int $tmp2521 = $tmp2519(((frost$collections$CollectionView*) $tmp2517));
frost$core$Int $tmp2522 = (frost$core$Int) {1u};
int64_t $tmp2523 = $tmp2521.value;
int64_t $tmp2524 = $tmp2522.value;
int64_t $tmp2525 = $tmp2523 - $tmp2524;
frost$core$Int $tmp2526 = (frost$core$Int) {$tmp2525};
int64_t $tmp2527 = $tmp2526.value;
int64_t $tmp2528 = $tmp2480.value;
int64_t $tmp2529 = $tmp2527 - $tmp2528;
frost$core$Int $tmp2530 = (frost$core$Int) {$tmp2529};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp2531 = (frost$core$Int) {0u};
int64_t $tmp2532 = $tmp2530.value;
int64_t $tmp2533 = $tmp2531.value;
bool $tmp2534 = $tmp2532 >= $tmp2533;
frost$core$Bit $tmp2535 = (frost$core$Bit) {$tmp2534};
bool $tmp2536 = $tmp2535.value;
if ($tmp2536) goto block37; else goto block36;
block37:;
ITable* $tmp2537 = ((frost$collections$CollectionView*) $tmp2515)->$class->itable;
while ($tmp2537->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2537 = $tmp2537->next;
}
$fn2539 $tmp2538 = $tmp2537->methods[0];
frost$core$Int $tmp2540 = $tmp2538(((frost$collections$CollectionView*) $tmp2515));
int64_t $tmp2541 = $tmp2530.value;
int64_t $tmp2542 = $tmp2540.value;
bool $tmp2543 = $tmp2541 < $tmp2542;
frost$core$Bit $tmp2544 = (frost$core$Bit) {$tmp2543};
bool $tmp2545 = $tmp2544.value;
if ($tmp2545) goto block35; else goto block36;
block36:;
frost$core$Int $tmp2546 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2547, $tmp2546, &$s2548);
abort(); // unreachable
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2549 = &$tmp2515->data;
frost$core$Object** $tmp2550 = *$tmp2549;
frost$core$Int64 $tmp2551 = frost$core$Int64$init$frost$core$Int($tmp2530);
int64_t $tmp2552 = $tmp2551.value;
frost$core$Object* $tmp2553 = $tmp2550[$tmp2552];
frost$core$Frost$ref$frost$core$Object$Q($tmp2553);
frost$core$Frost$ref$frost$core$Object$Q($tmp2553);
frost$core$Frost$unref$frost$core$Object$Q($tmp2553);
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp2554 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2554);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp2477, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp2553)), ((frost$core$Object*) ((frost$collections$Map*) $tmp2554)));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2477));
org$frostlang$frostc$Pair* $tmp2555 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2555));
*(&local9) = $tmp2477;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2554));
frost$core$Frost$unref$frost$core$Object$Q($tmp2553);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2477));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:345
frost$collections$Stack** $tmp2556 = &param0->captures;
frost$collections$Stack* $tmp2557 = *$tmp2556;
org$frostlang$frostc$Pair* $tmp2558 = *(&local9);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Closure.frost:345:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp2559 = &$tmp2557->contents;
frost$collections$Array* $tmp2560 = *$tmp2559;
frost$collections$Array$add$frost$collections$Array$T($tmp2560, ((frost$core$Object*) $tmp2558));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:346
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp2561 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp2562 = (frost$core$Int) {16u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp2561, $tmp2562);
*(&local10) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
org$frostlang$frostc$Annotations* $tmp2563 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2563));
*(&local10) = $tmp2561;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:347
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp2564 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$collections$Stack** $tmp2565 = &param0->currentClass;
frost$collections$Stack* $tmp2566 = *$tmp2565;
frost$core$Int $tmp2567 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Closure.frost:347:59
frost$core$Int $tmp2568 = (frost$core$Int) {0u};
int64_t $tmp2569 = $tmp2567.value;
int64_t $tmp2570 = $tmp2568.value;
bool $tmp2571 = $tmp2569 >= $tmp2570;
frost$core$Bit $tmp2572 = (frost$core$Bit) {$tmp2571};
bool $tmp2573 = $tmp2572.value;
if ($tmp2573) goto block42; else goto block41;
block42:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp2574 = &$tmp2566->contents;
frost$collections$Array* $tmp2575 = *$tmp2574;
ITable* $tmp2576 = ((frost$collections$CollectionView*) $tmp2575)->$class->itable;
while ($tmp2576->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2576 = $tmp2576->next;
}
$fn2578 $tmp2577 = $tmp2576->methods[0];
frost$core$Int $tmp2579 = $tmp2577(((frost$collections$CollectionView*) $tmp2575));
int64_t $tmp2580 = $tmp2567.value;
int64_t $tmp2581 = $tmp2579.value;
bool $tmp2582 = $tmp2580 < $tmp2581;
frost$core$Bit $tmp2583 = (frost$core$Bit) {$tmp2582};
bool $tmp2584 = $tmp2583.value;
if ($tmp2584) goto block40; else goto block41;
block41:;
frost$core$Int $tmp2585 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2586, $tmp2585, &$s2587);
abort(); // unreachable
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp2588 = &$tmp2566->contents;
frost$collections$Array* $tmp2589 = *$tmp2588;
ITable* $tmp2590 = ((frost$collections$CollectionView*) $tmp2589)->$class->itable;
while ($tmp2590->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2590 = $tmp2590->next;
}
$fn2592 $tmp2591 = $tmp2590->methods[0];
frost$core$Int $tmp2593 = $tmp2591(((frost$collections$CollectionView*) $tmp2589));
int64_t $tmp2594 = $tmp2593.value;
int64_t $tmp2595 = $tmp2567.value;
bool $tmp2596 = $tmp2594 > $tmp2595;
frost$core$Bit $tmp2597 = (frost$core$Bit) {$tmp2596};
bool $tmp2598 = $tmp2597.value;
if ($tmp2598) goto block44; else goto block45;
block45:;
frost$core$Int $tmp2599 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2600, $tmp2599);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp2601 = &$tmp2566->contents;
frost$collections$Array* $tmp2602 = *$tmp2601;
frost$collections$Array** $tmp2603 = &$tmp2566->contents;
frost$collections$Array* $tmp2604 = *$tmp2603;
ITable* $tmp2605 = ((frost$collections$CollectionView*) $tmp2604)->$class->itable;
while ($tmp2605->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2605 = $tmp2605->next;
}
$fn2607 $tmp2606 = $tmp2605->methods[0];
frost$core$Int $tmp2608 = $tmp2606(((frost$collections$CollectionView*) $tmp2604));
frost$core$Int $tmp2609 = (frost$core$Int) {1u};
int64_t $tmp2610 = $tmp2608.value;
int64_t $tmp2611 = $tmp2609.value;
int64_t $tmp2612 = $tmp2610 - $tmp2611;
frost$core$Int $tmp2613 = (frost$core$Int) {$tmp2612};
int64_t $tmp2614 = $tmp2613.value;
int64_t $tmp2615 = $tmp2567.value;
int64_t $tmp2616 = $tmp2614 - $tmp2615;
frost$core$Int $tmp2617 = (frost$core$Int) {$tmp2616};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp2618 = (frost$core$Int) {0u};
int64_t $tmp2619 = $tmp2617.value;
int64_t $tmp2620 = $tmp2618.value;
bool $tmp2621 = $tmp2619 >= $tmp2620;
frost$core$Bit $tmp2622 = (frost$core$Bit) {$tmp2621};
bool $tmp2623 = $tmp2622.value;
if ($tmp2623) goto block49; else goto block48;
block49:;
ITable* $tmp2624 = ((frost$collections$CollectionView*) $tmp2602)->$class->itable;
while ($tmp2624->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2624 = $tmp2624->next;
}
$fn2626 $tmp2625 = $tmp2624->methods[0];
frost$core$Int $tmp2627 = $tmp2625(((frost$collections$CollectionView*) $tmp2602));
int64_t $tmp2628 = $tmp2617.value;
int64_t $tmp2629 = $tmp2627.value;
bool $tmp2630 = $tmp2628 < $tmp2629;
frost$core$Bit $tmp2631 = (frost$core$Bit) {$tmp2630};
bool $tmp2632 = $tmp2631.value;
if ($tmp2632) goto block47; else goto block48;
block48:;
frost$core$Int $tmp2633 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2634, $tmp2633, &$s2635);
abort(); // unreachable
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2636 = &$tmp2602->data;
frost$core$Object** $tmp2637 = *$tmp2636;
frost$core$Int64 $tmp2638 = frost$core$Int64$init$frost$core$Int($tmp2617);
int64_t $tmp2639 = $tmp2638.value;
frost$core$Object* $tmp2640 = $tmp2637[$tmp2639];
frost$core$Frost$ref$frost$core$Object$Q($tmp2640);
frost$core$Frost$ref$frost$core$Object$Q($tmp2640);
frost$core$Frost$unref$frost$core$Object$Q($tmp2640);
org$frostlang$frostc$Annotations* $tmp2641 = *(&local10);
frost$core$String* $tmp2642 = *(&local0);
frost$collections$Array* $tmp2643 = *(&local1);
org$frostlang$frostc$Type* $tmp2644 = *(&local6);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2564, ((org$frostlang$frostc$ClassDecl*) $tmp2640), param1, ((frost$core$String*) NULL), $tmp2641, param2, $tmp2642, ((frost$collections$Array*) NULL), $tmp2643, $tmp2644, param5);
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
org$frostlang$frostc$MethodDecl* $tmp2645 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
*(&local11) = $tmp2564;
frost$core$Frost$unref$frost$core$Object$Q($tmp2640);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:351
frost$core$Bit* $tmp2646 = &param0->writeCode;
frost$core$Bit $tmp2647 = *$tmp2646;
*(&local12) = $tmp2647;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:352
frost$core$Bit* $tmp2648 = &param0->reportErrors;
frost$core$Bit $tmp2649 = *$tmp2648;
*(&local13) = $tmp2649;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:353
frost$core$Bit $tmp2650 = (frost$core$Bit) {false};
frost$core$Bit* $tmp2651 = &param0->writeCode;
*$tmp2651 = $tmp2650;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:354
frost$core$Bit $tmp2652 = (frost$core$Bit) {false};
frost$core$Bit* $tmp2653 = &param0->reportErrors;
*$tmp2653 = $tmp2652;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:355
frost$collections$Stack** $tmp2654 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2655 = *$tmp2654;
*(&local14) = ((frost$collections$Stack*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2655));
frost$collections$Stack* $tmp2656 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
*(&local14) = $tmp2655;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:356
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp2657 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp2657);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
frost$collections$Stack** $tmp2658 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2659 = *$tmp2658;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
frost$collections$Stack** $tmp2660 = &param0->enclosingContexts;
*$tmp2660 = $tmp2657;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:357
org$frostlang$frostc$MethodDecl* $tmp2661 = *(&local11);
org$frostlang$frostc$SymbolTable** $tmp2662 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2663 = *$tmp2662;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp2661, $tmp2663);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:358
frost$collections$Stack* $tmp2664 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
frost$collections$Stack** $tmp2665 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2666 = *$tmp2665;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2666));
frost$collections$Stack** $tmp2667 = &param0->enclosingContexts;
*$tmp2667 = $tmp2664;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:359
frost$core$Bit $tmp2668 = *(&local12);
frost$core$Bit* $tmp2669 = &param0->writeCode;
*$tmp2669 = $tmp2668;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:360
frost$core$Bit $tmp2670 = *(&local13);
frost$core$Bit* $tmp2671 = &param0->reportErrors;
*$tmp2671 = $tmp2670;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:362
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:363
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:364
org$frostlang$frostc$Pair* $tmp2672 = *(&local9);
frost$core$Object** $tmp2673 = &$tmp2672->second;
frost$core$Object* $tmp2674 = *$tmp2673;
ITable* $tmp2675 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp2674))->$class->itable;
while ($tmp2675->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2675 = $tmp2675->next;
}
$fn2677 $tmp2676 = $tmp2675->methods[0];
frost$core$Int $tmp2678 = $tmp2676(((frost$collections$MapView*) ((frost$collections$Map*) $tmp2674)));
frost$core$Int $tmp2679 = (frost$core$Int) {0u};
int64_t $tmp2680 = $tmp2678.value;
int64_t $tmp2681 = $tmp2679.value;
bool $tmp2682 = $tmp2680 != $tmp2681;
frost$core$Bit $tmp2683 = (frost$core$Bit) {$tmp2682};
bool $tmp2684 = $tmp2683.value;
if ($tmp2684) goto block50; else goto block52;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:366
org$frostlang$frostc$MethodDecl* $tmp2685 = *(&local11);
org$frostlang$frostc$Pair* $tmp2686 = *(&local9);
frost$core$Object** $tmp2687 = &$tmp2686->second;
frost$core$Object* $tmp2688 = *$tmp2687;
ITable* $tmp2689 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp2688))->$class->itable;
while ($tmp2689->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2689 = $tmp2689->next;
}
$fn2691 $tmp2690 = $tmp2689->methods[5];
frost$collections$Iterator* $tmp2692 = $tmp2690(((frost$collections$MapView*) ((frost$collections$Map*) $tmp2688)));
ITable* $tmp2693 = $tmp2692->$class->itable;
while ($tmp2693->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2693 = $tmp2693->next;
}
$fn2695 $tmp2694 = $tmp2693->methods[7];
frost$collections$Array* $tmp2696 = $tmp2694($tmp2692);
org$frostlang$frostc$ClassDecl* $tmp2697 = org$frostlang$frostc$expression$Closure$createClosureClass$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlang$frostc$Compiler$Capture$GT$R$org$frostlang$frostc$ClassDecl(param0, $tmp2685, ((frost$collections$CollectionView*) $tmp2696));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
org$frostlang$frostc$ClassDecl* $tmp2698 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
*(&local17) = $tmp2697;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2692));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:367
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2699 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2699);
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
frost$collections$Array* $tmp2700 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
*(&local18) = $tmp2699;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:368
org$frostlang$frostc$Pair* $tmp2701 = *(&local9);
frost$core$Object** $tmp2702 = &$tmp2701->second;
frost$core$Object* $tmp2703 = *$tmp2702;
ITable* $tmp2704 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp2703))->$class->itable;
while ($tmp2704->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2704 = $tmp2704->next;
}
$fn2706 $tmp2705 = $tmp2704->methods[5];
frost$collections$Iterator* $tmp2707 = $tmp2705(((frost$collections$MapView*) ((frost$collections$Map*) $tmp2703)));
goto block53;
block53:;
ITable* $tmp2708 = $tmp2707->$class->itable;
while ($tmp2708->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2708 = $tmp2708->next;
}
$fn2710 $tmp2709 = $tmp2708->methods[0];
frost$core$Bit $tmp2711 = $tmp2709($tmp2707);
bool $tmp2712 = $tmp2711.value;
if ($tmp2712) goto block55; else goto block54;
block54:;
*(&local19) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp2713 = $tmp2707->$class->itable;
while ($tmp2713->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2713 = $tmp2713->next;
}
$fn2715 $tmp2714 = $tmp2713->methods[1];
frost$core$Object* $tmp2716 = $tmp2714($tmp2707);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp2716)));
org$frostlang$frostc$Compiler$Capture* $tmp2717 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
*(&local19) = ((org$frostlang$frostc$Compiler$Capture*) $tmp2716);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:369
org$frostlang$frostc$Compiler$Capture* $tmp2718 = *(&local19);
frost$core$Int* $tmp2719 = &$tmp2718->$rawValue;
frost$core$Int $tmp2720 = *$tmp2719;
frost$core$Int $tmp2721 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:370:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2722 = $tmp2720.value;
int64_t $tmp2723 = $tmp2721.value;
bool $tmp2724 = $tmp2722 == $tmp2723;
frost$core$Bit $tmp2725 = (frost$core$Bit) {$tmp2724};
bool $tmp2726 = $tmp2725.value;
if ($tmp2726) goto block57; else goto block58;
block57:;
org$frostlang$frostc$Variable** $tmp2727 = (org$frostlang$frostc$Variable**) ($tmp2718->$data + 0);
org$frostlang$frostc$Variable* $tmp2728 = *$tmp2727;
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
org$frostlang$frostc$Variable* $tmp2729 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
*(&local20) = $tmp2728;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:371
frost$collections$Array* $tmp2730 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2731 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2732 = (frost$core$Int) {22u};
org$frostlang$frostc$Variable* $tmp2733 = *(&local20);
frost$core$String** $tmp2734 = &((org$frostlang$frostc$Symbol*) $tmp2733)->name;
frost$core$String* $tmp2735 = *$tmp2734;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp2731, $tmp2732, param1, $tmp2735);
frost$collections$Array$add$frost$collections$Array$T($tmp2730, ((frost$core$Object*) $tmp2731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
org$frostlang$frostc$Variable* $tmp2736 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2736));
*(&local20) = ((org$frostlang$frostc$Variable*) NULL);
goto block56;
block58:;
frost$core$Int $tmp2737 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:373:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2738 = $tmp2720.value;
int64_t $tmp2739 = $tmp2737.value;
bool $tmp2740 = $tmp2738 == $tmp2739;
frost$core$Bit $tmp2741 = (frost$core$Bit) {$tmp2740};
bool $tmp2742 = $tmp2741.value;
if ($tmp2742) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:374
frost$collections$Array* $tmp2743 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2744 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2745 = (frost$core$Int) {39u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position($tmp2744, $tmp2745, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp2743, ((frost$core$Object*) $tmp2744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2744));
goto block56;
block61:;
frost$core$Int $tmp2746 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:376:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2747 = $tmp2720.value;
int64_t $tmp2748 = $tmp2746.value;
bool $tmp2749 = $tmp2747 == $tmp2748;
frost$core$Bit $tmp2750 = (frost$core$Bit) {$tmp2749};
bool $tmp2751 = $tmp2750.value;
if ($tmp2751) goto block63; else goto block56;
block63:;
org$frostlang$frostc$FieldDecl** $tmp2752 = (org$frostlang$frostc$FieldDecl**) ($tmp2718->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp2753 = *$tmp2752;
*(&local21) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2753));
org$frostlang$frostc$FieldDecl* $tmp2754 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2754));
*(&local21) = $tmp2753;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:377
frost$collections$Array* $tmp2755 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2756 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2757 = (frost$core$Int) {16u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2758 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2759 = (frost$core$Int) {22u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp2758, $tmp2759, param1, &$s2760);
org$frostlang$frostc$FieldDecl* $tmp2761 = *(&local21);
frost$core$String** $tmp2762 = &((org$frostlang$frostc$Symbol*) $tmp2761)->name;
frost$core$String* $tmp2763 = *$tmp2762;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp2756, $tmp2757, param1, $tmp2758, $tmp2763);
frost$collections$Array$add$frost$collections$Array$T($tmp2755, ((frost$core$Object*) $tmp2756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2756));
org$frostlang$frostc$FieldDecl* $tmp2764 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2764));
*(&local21) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block56;
block56:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2716);
org$frostlang$frostc$Compiler$Capture* $tmp2765 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2765));
*(&local19) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block53;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:383
frost$collections$Stack** $tmp2766 = &param0->captures;
frost$collections$Stack* $tmp2767 = *$tmp2766;
frost$core$Object* $tmp2768 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2767);
frost$core$Frost$unref$frost$core$Object$Q($tmp2768);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:384
frost$collections$Array** $tmp2769 = &param0->pendingClasses;
frost$collections$Array* $tmp2770 = *$tmp2769;
org$frostlang$frostc$ClassDecl* $tmp2771 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp2770, ((frost$core$Object*) $tmp2771));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:385
org$frostlang$frostc$ClassDecl* $tmp2772 = *(&local17);
org$frostlang$frostc$Type** $tmp2773 = &$tmp2772->type;
org$frostlang$frostc$Type* $tmp2774 = *$tmp2773;
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:385:83
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3712
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2775 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2776 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3712:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp2777 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp2778 = *$tmp2777;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2779 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2780 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2779, $tmp2780);
frost$collections$Array$add$frost$collections$Array$T($tmp2779, ((frost$core$Object*) $tmp2774));
org$frostlang$frostc$Type* $tmp2781 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2778, ((frost$collections$ListView*) $tmp2779));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp2775, $tmp2776, $tmp2774, $tmp2781);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
frost$collections$Array* $tmp2782 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp2783 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2782);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2784 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp2785 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp2784, $tmp2785);
org$frostlang$frostc$IR$Value* $tmp2786 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2775, ((frost$collections$ListView*) $tmp2783), $tmp2784);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
org$frostlang$frostc$IR$Value* $tmp2787 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2787));
*(&local22) = $tmp2786;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:387
org$frostlang$frostc$IR$Value* $tmp2788 = *(&local22);
frost$core$Bit $tmp2789 = (frost$core$Bit) {$tmp2788 == NULL};
bool $tmp2790 = $tmp2789.value;
if ($tmp2790) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:388
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp2791 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2792 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2792));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2793 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp2794 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2794));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp2795 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
*(&local14) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2796 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp2797 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
*(&local10) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp2798 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2798));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp2799 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2799));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2800 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2800));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2801 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2801));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:390
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2802 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2803 = (frost$core$Int) {26u};
org$frostlang$frostc$IR$Value* $tmp2804 = *(&local22);
frost$core$Bit $tmp2805 = (frost$core$Bit) {$tmp2804 != NULL};
bool $tmp2806 = $tmp2805.value;
if ($tmp2806) goto block69; else goto block70;
block70:;
frost$core$Int $tmp2807 = (frost$core$Int) {390u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2808, $tmp2807, &$s2809);
abort(); // unreachable
block69:;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2802, $tmp2803, param1, $tmp2804);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2802));
org$frostlang$frostc$ASTNode* $tmp2810 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2810));
*(&local16) = $tmp2802;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2802));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:391
org$frostlang$frostc$ClassDecl* $tmp2811 = *(&local17);
org$frostlang$frostc$Type** $tmp2812 = &$tmp2811->type;
org$frostlang$frostc$Type* $tmp2813 = *$tmp2812;
frost$core$Bit $tmp2814 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp2813);
*(&local15) = $tmp2814;
org$frostlang$frostc$IR$Value* $tmp2815 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2815));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2816 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2816));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2817 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block51;
block52:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:395
frost$collections$Stack** $tmp2818 = &param0->captures;
frost$collections$Stack* $tmp2819 = *$tmp2818;
frost$core$Object* $tmp2820 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2819);
frost$core$Frost$unref$frost$core$Object$Q($tmp2820);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:396
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp2821 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp2821);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
frost$collections$Stack** $tmp2822 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2823 = *$tmp2822;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
frost$collections$Stack** $tmp2824 = &param0->enclosingContexts;
*$tmp2824 = $tmp2821;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:397
org$frostlang$frostc$MethodDecl* $tmp2825 = *(&local11);
org$frostlang$frostc$SymbolTable** $tmp2826 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2827 = *$tmp2826;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp2825, $tmp2827);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:398
frost$collections$Stack* $tmp2828 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
frost$collections$Stack** $tmp2829 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2830 = *$tmp2829;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
frost$collections$Stack** $tmp2831 = &param0->enclosingContexts;
*$tmp2831 = $tmp2828;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:399
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2832 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2833 = (frost$core$Int) {31u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position($tmp2832, $tmp2833, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
org$frostlang$frostc$ASTNode* $tmp2834 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
*(&local16) = $tmp2832;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:400
frost$core$Bit $tmp2835 = (frost$core$Bit) {true};
*(&local15) = $tmp2835;
goto block51;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:402
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2836 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2836);
*(&local23) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
frost$collections$Array* $tmp2837 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2837));
*(&local23) = $tmp2836;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:403
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:404
org$frostlang$frostc$MethodDecl* $tmp2838 = *(&local11);
org$frostlang$frostc$Annotations** $tmp2839 = &$tmp2838->annotations;
org$frostlang$frostc$Annotations* $tmp2840 = *$tmp2839;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Closure.frost:404:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp2841 = &$tmp2840->flags;
frost$core$Int $tmp2842 = *$tmp2841;
frost$core$Int $tmp2843 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2844 = $tmp2842.value;
int64_t $tmp2845 = $tmp2843.value;
int64_t $tmp2846 = $tmp2844 & $tmp2845;
frost$core$Int $tmp2847 = (frost$core$Int) {$tmp2846};
frost$core$Int $tmp2848 = (frost$core$Int) {0u};
int64_t $tmp2849 = $tmp2847.value;
int64_t $tmp2850 = $tmp2848.value;
bool $tmp2851 = $tmp2849 != $tmp2850;
frost$core$Bit $tmp2852 = (frost$core$Bit) {$tmp2851};
bool $tmp2853 = $tmp2852.value;
if ($tmp2853) goto block71; else goto block73;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:405
org$frostlang$frostc$MethodDecl* $tmp2854 = *(&local11);
org$frostlang$frostc$Type* $tmp2855 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp2854, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
org$frostlang$frostc$Type* $tmp2856 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
*(&local24) = $tmp2855;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
goto block72;
block73:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:408
org$frostlang$frostc$MethodDecl* $tmp2857 = *(&local11);
org$frostlang$frostc$MethodDecl* $tmp2858 = *(&local11);
frost$core$Weak** $tmp2859 = &$tmp2858->owner;
frost$core$Weak* $tmp2860 = *$tmp2859;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Closure.frost:408:78
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2861 = &$tmp2860->_valid;
frost$core$Bit $tmp2862 = *$tmp2861;
bool $tmp2863 = $tmp2862.value;
if ($tmp2863) goto block78; else goto block79;
block79:;
frost$core$Int $tmp2864 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2865, $tmp2864);
abort(); // unreachable
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2866 = &$tmp2860->value;
frost$core$Object* $tmp2867 = *$tmp2866;
frost$core$Frost$ref$frost$core$Object$Q($tmp2867);
org$frostlang$frostc$Type** $tmp2868 = &((org$frostlang$frostc$ClassDecl*) $tmp2867)->type;
org$frostlang$frostc$Type* $tmp2869 = *$tmp2868;
frost$core$Bit $tmp2870 = (frost$core$Bit) {false};
org$frostlang$frostc$Type* $tmp2871 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp2857, $tmp2869, $tmp2870);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2871));
org$frostlang$frostc$Type* $tmp2872 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2872));
*(&local24) = $tmp2871;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2871));
frost$core$Frost$unref$frost$core$Object$Q($tmp2867);
goto block72;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:410
org$frostlang$frostc$Type* $tmp2873 = *(&local24);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Closure.frost:410:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:283
org$frostlang$frostc$Type** $tmp2874 = &param0->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp2875 = *$tmp2874;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2876 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2877 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2876, $tmp2877);
frost$collections$Array$add$frost$collections$Array$T($tmp2876, ((frost$core$Object*) $tmp2873));
org$frostlang$frostc$Type* $tmp2878 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2875, ((frost$collections$ListView*) $tmp2876));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2876));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
org$frostlang$frostc$Type* $tmp2879 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2879));
*(&local25) = $tmp2878;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:411
frost$collections$Array* $tmp2880 = *(&local23);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2881 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp2882 = (frost$core$Int) {26u};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2883 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp2884 = (frost$core$Int) {3u};
org$frostlang$frostc$MethodDecl* $tmp2885 = *(&local11);
org$frostlang$frostc$Type* $tmp2886 = *(&local25);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp2883, $tmp2884, $tmp2885, $tmp2886);
org$frostlang$frostc$Type** $tmp2887 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp2888 = *$tmp2887;
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Closure.frost:412:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:283
org$frostlang$frostc$Type** $tmp2889 = &param0->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp2890 = *$tmp2889;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2891 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp2892 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp2891, $tmp2892);
frost$collections$Array$add$frost$collections$Array$T($tmp2891, ((frost$core$Object*) $tmp2888));
org$frostlang$frostc$Type* $tmp2893 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2890, ((frost$collections$ListView*) $tmp2891));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
org$frostlang$frostc$IR$Value* $tmp2894 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2883, $tmp2893);
frost$core$Bit $tmp2895 = (frost$core$Bit) {$tmp2894 != NULL};
bool $tmp2896 = $tmp2895.value;
if ($tmp2896) goto block82; else goto block83;
block83:;
frost$core$Int $tmp2897 = (frost$core$Int) {411u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2898, $tmp2897, &$s2899);
abort(); // unreachable
block82:;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2881, $tmp2882, param1, $tmp2894);
frost$collections$Array$add$frost$collections$Array$T($tmp2880, ((frost$core$Object*) $tmp2881));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2881));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:414
frost$collections$Array* $tmp2900 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp2901 = *(&local16);
frost$core$Bit $tmp2902 = (frost$core$Bit) {$tmp2901 != NULL};
bool $tmp2903 = $tmp2902.value;
if ($tmp2903) goto block84; else goto block85;
block85:;
frost$core$Int $tmp2904 = (frost$core$Int) {414u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2905, $tmp2904, &$s2906);
abort(); // unreachable
block84:;
frost$collections$Array$add$frost$collections$Array$T($tmp2900, ((frost$core$Object*) $tmp2901));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:415
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:416
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:417
frost$core$Bit $tmp2907 = *(&local15);
bool $tmp2908 = $tmp2907.value;
if ($tmp2908) goto block86; else goto block88;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:418
org$frostlang$frostc$Type** $tmp2909 = &param0->METHOD_TYPE;
org$frostlang$frostc$Type* $tmp2910 = *$tmp2909;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
org$frostlang$frostc$Type* $tmp2911 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
*(&local26) = $tmp2910;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:419
org$frostlang$frostc$MethodDecl* $tmp2912 = *(&local11);
org$frostlang$frostc$Type* $tmp2913 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp2912, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
org$frostlang$frostc$Type* $tmp2914 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
*(&local27) = $tmp2913;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
goto block87;
block88:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:422
org$frostlang$frostc$Type** $tmp2915 = &param0->MUTABLE_METHOD_TYPE;
org$frostlang$frostc$Type* $tmp2916 = *$tmp2915;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
org$frostlang$frostc$Type* $tmp2917 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
*(&local26) = $tmp2916;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:423
org$frostlang$frostc$MethodDecl* $tmp2918 = *(&local11);
org$frostlang$frostc$Type* $tmp2919 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp2918, param0);
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2919));
org$frostlang$frostc$Type* $tmp2920 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
*(&local28) = $tmp2919;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2919));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:424
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2921 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2921);
*(&local29) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2921));
frost$collections$Array* $tmp2922 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
*(&local29) = $tmp2921;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2921));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:425
frost$core$Int $tmp2923 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp2924 = *(&local28);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Closure.frost:425:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2925 = &$tmp2924->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2926 = *$tmp2925;
frost$core$Bit $tmp2927 = (frost$core$Bit) {$tmp2926 != NULL};
bool $tmp2928 = $tmp2927.value;
if ($tmp2928) goto block90; else goto block91;
block91:;
frost$core$Int $tmp2929 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2930, $tmp2929, &$s2931);
abort(); // unreachable
block90:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
ITable* $tmp2932 = ((frost$collections$CollectionView*) $tmp2926)->$class->itable;
while ($tmp2932->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2932 = $tmp2932->next;
}
$fn2934 $tmp2933 = $tmp2932->methods[0];
frost$core$Int $tmp2935 = $tmp2933(((frost$collections$CollectionView*) $tmp2926));
frost$core$Int $tmp2936 = (frost$core$Int) {1u};
int64_t $tmp2937 = $tmp2935.value;
int64_t $tmp2938 = $tmp2936.value;
int64_t $tmp2939 = $tmp2937 - $tmp2938;
frost$core$Int $tmp2940 = (frost$core$Int) {$tmp2939};
frost$core$Bit $tmp2941 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2942 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2923, $tmp2940, $tmp2941);
frost$core$Int $tmp2943 = $tmp2942.min;
*(&local30) = $tmp2943;
frost$core$Int $tmp2944 = $tmp2942.max;
frost$core$Bit $tmp2945 = $tmp2942.inclusive;
bool $tmp2946 = $tmp2945.value;
frost$core$Int $tmp2947 = (frost$core$Int) {1u};
if ($tmp2946) goto block95; else goto block96;
block95:;
int64_t $tmp2948 = $tmp2943.value;
int64_t $tmp2949 = $tmp2944.value;
bool $tmp2950 = $tmp2948 <= $tmp2949;
frost$core$Bit $tmp2951 = (frost$core$Bit) {$tmp2950};
bool $tmp2952 = $tmp2951.value;
if ($tmp2952) goto block92; else goto block93;
block96:;
int64_t $tmp2953 = $tmp2943.value;
int64_t $tmp2954 = $tmp2944.value;
bool $tmp2955 = $tmp2953 < $tmp2954;
frost$core$Bit $tmp2956 = (frost$core$Bit) {$tmp2955};
bool $tmp2957 = $tmp2956.value;
if ($tmp2957) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:426
frost$collections$Array* $tmp2958 = *(&local29);
org$frostlang$frostc$Type* $tmp2959 = *(&local28);
frost$core$Int $tmp2960 = *(&local30);
// begin inline call to function org.frostlang.frostc.Type.parameterType(i:frost.core.Int):org.frostlang.frostc.Type from Closure.frost:426:57
org$frostlang$frostc$Type$Kind* $tmp2961 = &$tmp2959->typeKind;
org$frostlang$frostc$Type$Kind $tmp2962 = *$tmp2961;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2963;
$tmp2963 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2963->value = $tmp2962;
frost$core$Int $tmp2964 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2965 = &(&local32)->$rawValue;
*$tmp2965 = $tmp2964;
org$frostlang$frostc$Type$Kind $tmp2966 = *(&local32);
*(&local31) = $tmp2966;
org$frostlang$frostc$Type$Kind $tmp2967 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2968;
$tmp2968 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2968->value = $tmp2967;
ITable* $tmp2969 = ((frost$core$Equatable*) $tmp2963)->$class->itable;
while ($tmp2969->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2969 = $tmp2969->next;
}
$fn2971 $tmp2970 = $tmp2969->methods[0];
frost$core$Bit $tmp2972 = $tmp2970(((frost$core$Equatable*) $tmp2963), ((frost$core$Equatable*) $tmp2968));
bool $tmp2973 = $tmp2972.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2968)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2963)));
if ($tmp2973) goto block101; else goto block104;
block104:;
org$frostlang$frostc$Type$Kind* $tmp2974 = &$tmp2959->typeKind;
org$frostlang$frostc$Type$Kind $tmp2975 = *$tmp2974;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2976;
$tmp2976 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2976->value = $tmp2975;
frost$core$Int $tmp2977 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2978 = &(&local34)->$rawValue;
*$tmp2978 = $tmp2977;
org$frostlang$frostc$Type$Kind $tmp2979 = *(&local34);
*(&local33) = $tmp2979;
org$frostlang$frostc$Type$Kind $tmp2980 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2981;
$tmp2981 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2981->value = $tmp2980;
ITable* $tmp2982 = ((frost$core$Equatable*) $tmp2976)->$class->itable;
while ($tmp2982->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2982 = $tmp2982->next;
}
$fn2984 $tmp2983 = $tmp2982->methods[0];
frost$core$Bit $tmp2985 = $tmp2983(((frost$core$Equatable*) $tmp2976), ((frost$core$Equatable*) $tmp2981));
bool $tmp2986 = $tmp2985.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2981)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2976)));
if ($tmp2986) goto block101; else goto block103;
block103:;
org$frostlang$frostc$Type$Kind* $tmp2987 = &$tmp2959->typeKind;
org$frostlang$frostc$Type$Kind $tmp2988 = *$tmp2987;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2989;
$tmp2989 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2989->value = $tmp2988;
frost$core$Int $tmp2990 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp2991 = &(&local36)->$rawValue;
*$tmp2991 = $tmp2990;
org$frostlang$frostc$Type$Kind $tmp2992 = *(&local36);
*(&local35) = $tmp2992;
org$frostlang$frostc$Type$Kind $tmp2993 = *(&local35);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2994;
$tmp2994 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2994->value = $tmp2993;
ITable* $tmp2995 = ((frost$core$Equatable*) $tmp2989)->$class->itable;
while ($tmp2995->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2995 = $tmp2995->next;
}
$fn2997 $tmp2996 = $tmp2995->methods[0];
frost$core$Bit $tmp2998 = $tmp2996(((frost$core$Equatable*) $tmp2989), ((frost$core$Equatable*) $tmp2994));
bool $tmp2999 = $tmp2998.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2994)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2989)));
if ($tmp2999) goto block101; else goto block102;
block102:;
org$frostlang$frostc$Type$Kind* $tmp3000 = &$tmp2959->typeKind;
org$frostlang$frostc$Type$Kind $tmp3001 = *$tmp3000;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3002;
$tmp3002 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3002->value = $tmp3001;
frost$core$Int $tmp3003 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:426:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3004 = &(&local38)->$rawValue;
*$tmp3004 = $tmp3003;
org$frostlang$frostc$Type$Kind $tmp3005 = *(&local38);
*(&local37) = $tmp3005;
org$frostlang$frostc$Type$Kind $tmp3006 = *(&local37);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3007;
$tmp3007 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3007->value = $tmp3006;
ITable* $tmp3008 = ((frost$core$Equatable*) $tmp3002)->$class->itable;
while ($tmp3008->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3008 = $tmp3008->next;
}
$fn3010 $tmp3009 = $tmp3008->methods[0];
frost$core$Bit $tmp3011 = $tmp3009(((frost$core$Equatable*) $tmp3002), ((frost$core$Equatable*) $tmp3007));
bool $tmp3012 = $tmp3011.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3007)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3002)));
if ($tmp3012) goto block101; else goto block99;
block101:;
frost$core$Int $tmp3013 = (frost$core$Int) {0u};
int64_t $tmp3014 = $tmp2960.value;
int64_t $tmp3015 = $tmp3013.value;
bool $tmp3016 = $tmp3014 >= $tmp3015;
frost$core$Bit $tmp3017 = (frost$core$Bit) {$tmp3016};
bool $tmp3018 = $tmp3017.value;
if ($tmp3018) goto block100; else goto block99;
block100:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:426:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3019 = &$tmp2959->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3020 = *$tmp3019;
frost$core$Bit $tmp3021 = (frost$core$Bit) {$tmp3020 != NULL};
bool $tmp3022 = $tmp3021.value;
if ($tmp3022) goto block110; else goto block111;
block111:;
frost$core$Int $tmp3023 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3024, $tmp3023, &$s3025);
abort(); // unreachable
block110:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3020));
ITable* $tmp3026 = ((frost$collections$CollectionView*) $tmp3020)->$class->itable;
while ($tmp3026->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3026 = $tmp3026->next;
}
$fn3028 $tmp3027 = $tmp3026->methods[0];
frost$core$Int $tmp3029 = $tmp3027(((frost$collections$CollectionView*) $tmp3020));
frost$core$Int $tmp3030 = (frost$core$Int) {1u};
int64_t $tmp3031 = $tmp3029.value;
int64_t $tmp3032 = $tmp3030.value;
int64_t $tmp3033 = $tmp3031 - $tmp3032;
frost$core$Int $tmp3034 = (frost$core$Int) {$tmp3033};
int64_t $tmp3035 = $tmp2960.value;
int64_t $tmp3036 = $tmp3034.value;
bool $tmp3037 = $tmp3035 < $tmp3036;
frost$core$Bit $tmp3038 = (frost$core$Bit) {$tmp3037};
bool $tmp3039 = $tmp3038.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3020));
if ($tmp3039) goto block98; else goto block99;
block99:;
frost$core$Int $tmp3040 = (frost$core$Int) {427u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3041, $tmp3040, &$s3042);
abort(); // unreachable
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:428
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:428:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3043 = &$tmp2959->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3044 = *$tmp3043;
frost$core$Bit $tmp3045 = (frost$core$Bit) {$tmp3044 != NULL};
bool $tmp3046 = $tmp3045.value;
if ($tmp3046) goto block113; else goto block114;
block114:;
frost$core$Int $tmp3047 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3048, $tmp3047, &$s3049);
abort(); // unreachable
block113:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3044));
frost$core$Object* $tmp3050 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp3044, $tmp2960);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3050)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3050);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3044));
frost$collections$Array$add$frost$collections$Array$T($tmp2958, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3050)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3050)));
frost$core$Int $tmp3051 = *(&local30);
int64_t $tmp3052 = $tmp2944.value;
int64_t $tmp3053 = $tmp3051.value;
int64_t $tmp3054 = $tmp3052 - $tmp3053;
frost$core$Int $tmp3055 = (frost$core$Int) {$tmp3054};
if ($tmp2946) goto block116; else goto block117;
block116:;
int64_t $tmp3056 = $tmp3055.value;
int64_t $tmp3057 = $tmp2947.value;
bool $tmp3058 = $tmp3056 >= $tmp3057;
frost$core$Bit $tmp3059 = (frost$core$Bit) {$tmp3058};
bool $tmp3060 = $tmp3059.value;
if ($tmp3060) goto block115; else goto block93;
block117:;
int64_t $tmp3061 = $tmp3055.value;
int64_t $tmp3062 = $tmp2947.value;
bool $tmp3063 = $tmp3061 > $tmp3062;
frost$core$Bit $tmp3064 = (frost$core$Bit) {$tmp3063};
bool $tmp3065 = $tmp3064.value;
if ($tmp3065) goto block115; else goto block93;
block115:;
int64_t $tmp3066 = $tmp3051.value;
int64_t $tmp3067 = $tmp2947.value;
int64_t $tmp3068 = $tmp3066 + $tmp3067;
frost$core$Int $tmp3069 = (frost$core$Int) {$tmp3068};
*(&local30) = $tmp3069;
goto block92;
block93:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:428
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:429
org$frostlang$frostc$MethodDecl* $tmp3070 = *(&local11);
org$frostlang$frostc$MethodDecl$Kind* $tmp3071 = &$tmp3070->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3072 = *$tmp3071;
frost$core$Int $tmp3073 = $tmp3072.$rawValue;
frost$core$Int $tmp3074 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:430:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3075 = $tmp3073.value;
int64_t $tmp3076 = $tmp3074.value;
bool $tmp3077 = $tmp3075 == $tmp3076;
frost$core$Bit $tmp3078 = (frost$core$Bit) {$tmp3077};
bool $tmp3079 = $tmp3078.value;
if ($tmp3079) goto block119; else goto block120;
block119:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:430
frost$core$Int $tmp3080 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Closure.frost:430:68
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3081 = &(&local41)->$rawValue;
*$tmp3081 = $tmp3080;
org$frostlang$frostc$Type$Kind $tmp3082 = *(&local41);
*(&local40) = $tmp3082;
org$frostlang$frostc$Type$Kind $tmp3083 = *(&local40);
*(&local39) = $tmp3083;
goto block118;
block120:;
frost$core$Int $tmp3084 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Closure.frost:431:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3085 = $tmp3073.value;
int64_t $tmp3086 = $tmp3084.value;
bool $tmp3087 = $tmp3085 == $tmp3086;
frost$core$Bit $tmp3088 = (frost$core$Bit) {$tmp3087};
bool $tmp3089 = $tmp3088.value;
if ($tmp3089) goto block123; else goto block124;
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:431
frost$core$Int $tmp3090 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Closure.frost:431:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3091 = &(&local43)->$rawValue;
*$tmp3091 = $tmp3090;
org$frostlang$frostc$Type$Kind $tmp3092 = *(&local43);
*(&local42) = $tmp3092;
org$frostlang$frostc$Type$Kind $tmp3093 = *(&local42);
*(&local39) = $tmp3093;
goto block118;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:432
frost$core$Int $tmp3094 = (frost$core$Int) {432u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3095, $tmp3094);
abort(); // unreachable
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:434
org$frostlang$frostc$Type$Kind $tmp3096 = *(&local39);
frost$collections$Array* $tmp3097 = *(&local29);
org$frostlang$frostc$Type* $tmp3098 = *(&local28);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:435:28
org$frostlang$frostc$Type$Kind* $tmp3099 = &$tmp3098->typeKind;
org$frostlang$frostc$Type$Kind $tmp3100 = *$tmp3099;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3101;
$tmp3101 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3101->value = $tmp3100;
frost$core$Int $tmp3102 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3103 = &(&local45)->$rawValue;
*$tmp3103 = $tmp3102;
org$frostlang$frostc$Type$Kind $tmp3104 = *(&local45);
*(&local44) = $tmp3104;
org$frostlang$frostc$Type$Kind $tmp3105 = *(&local44);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3106;
$tmp3106 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3106->value = $tmp3105;
ITable* $tmp3107 = ((frost$core$Equatable*) $tmp3101)->$class->itable;
while ($tmp3107->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3107 = $tmp3107->next;
}
$fn3109 $tmp3108 = $tmp3107->methods[0];
frost$core$Bit $tmp3110 = $tmp3108(((frost$core$Equatable*) $tmp3101), ((frost$core$Equatable*) $tmp3106));
bool $tmp3111 = $tmp3110.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3106)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3101)));
if ($tmp3111) goto block128; else goto block132;
block132:;
org$frostlang$frostc$Type$Kind* $tmp3112 = &$tmp3098->typeKind;
org$frostlang$frostc$Type$Kind $tmp3113 = *$tmp3112;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3114;
$tmp3114 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3114->value = $tmp3113;
frost$core$Int $tmp3115 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3116 = &(&local47)->$rawValue;
*$tmp3116 = $tmp3115;
org$frostlang$frostc$Type$Kind $tmp3117 = *(&local47);
*(&local46) = $tmp3117;
org$frostlang$frostc$Type$Kind $tmp3118 = *(&local46);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3119;
$tmp3119 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3119->value = $tmp3118;
ITable* $tmp3120 = ((frost$core$Equatable*) $tmp3114)->$class->itable;
while ($tmp3120->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3120 = $tmp3120->next;
}
$fn3122 $tmp3121 = $tmp3120->methods[0];
frost$core$Bit $tmp3123 = $tmp3121(((frost$core$Equatable*) $tmp3114), ((frost$core$Equatable*) $tmp3119));
bool $tmp3124 = $tmp3123.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3119)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3114)));
if ($tmp3124) goto block128; else goto block131;
block131:;
org$frostlang$frostc$Type$Kind* $tmp3125 = &$tmp3098->typeKind;
org$frostlang$frostc$Type$Kind $tmp3126 = *$tmp3125;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3127;
$tmp3127 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3127->value = $tmp3126;
frost$core$Int $tmp3128 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3129 = &(&local49)->$rawValue;
*$tmp3129 = $tmp3128;
org$frostlang$frostc$Type$Kind $tmp3130 = *(&local49);
*(&local48) = $tmp3130;
org$frostlang$frostc$Type$Kind $tmp3131 = *(&local48);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3132;
$tmp3132 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3132->value = $tmp3131;
ITable* $tmp3133 = ((frost$core$Equatable*) $tmp3127)->$class->itable;
while ($tmp3133->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3133 = $tmp3133->next;
}
$fn3135 $tmp3134 = $tmp3133->methods[0];
frost$core$Bit $tmp3136 = $tmp3134(((frost$core$Equatable*) $tmp3127), ((frost$core$Equatable*) $tmp3132));
bool $tmp3137 = $tmp3136.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3132)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3127)));
if ($tmp3137) goto block128; else goto block130;
block130:;
org$frostlang$frostc$Type$Kind* $tmp3138 = &$tmp3098->typeKind;
org$frostlang$frostc$Type$Kind $tmp3139 = *$tmp3138;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3140;
$tmp3140 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3140->value = $tmp3139;
frost$core$Int $tmp3141 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3142 = &(&local51)->$rawValue;
*$tmp3142 = $tmp3141;
org$frostlang$frostc$Type$Kind $tmp3143 = *(&local51);
*(&local50) = $tmp3143;
org$frostlang$frostc$Type$Kind $tmp3144 = *(&local50);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3145;
$tmp3145 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3145->value = $tmp3144;
ITable* $tmp3146 = ((frost$core$Equatable*) $tmp3140)->$class->itable;
while ($tmp3146->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3146 = $tmp3146->next;
}
$fn3148 $tmp3147 = $tmp3146->methods[0];
frost$core$Bit $tmp3149 = $tmp3147(((frost$core$Equatable*) $tmp3140), ((frost$core$Equatable*) $tmp3145));
bool $tmp3150 = $tmp3149.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3145)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3140)));
if ($tmp3150) goto block128; else goto block129;
block129:;
frost$core$Int $tmp3151 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3152, $tmp3151, &$s3153);
abort(); // unreachable
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3154 = &$tmp3098->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3155 = *$tmp3154;
frost$core$Bit $tmp3156 = (frost$core$Bit) {$tmp3155 != NULL};
bool $tmp3157 = $tmp3156.value;
if ($tmp3157) goto block138; else goto block139;
block139:;
frost$core$Int $tmp3158 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3159, $tmp3158, &$s3160);
abort(); // unreachable
block138:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3155));
ITable* $tmp3161 = ((frost$collections$ListView*) $tmp3155)->$class->itable;
while ($tmp3161->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp3161 = $tmp3161->next;
}
$fn3163 $tmp3162 = $tmp3161->methods[5];
frost$core$Object* $tmp3164 = $tmp3162(((frost$collections$ListView*) $tmp3155));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3164)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3164);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3155));
org$frostlang$frostc$Type* $tmp3165 = *(&local28);
frost$core$Int* $tmp3166 = &$tmp3165->priority;
frost$core$Int $tmp3167 = *$tmp3166;
org$frostlang$frostc$Type* $tmp3168 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param0, param1, $tmp3096, ((frost$collections$ListView*) $tmp3097), ((org$frostlang$frostc$Type*) $tmp3164), $tmp3167);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
org$frostlang$frostc$Type* $tmp3169 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3169));
*(&local27) = $tmp3168;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3164)));
frost$collections$Array* $tmp3170 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3170));
*(&local29) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3171 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3171));
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
goto block87;
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:437
org$frostlang$frostc$Type* $tmp3172 = *(&local26);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Closure.frost:438:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3712
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp3173 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp3174 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3712:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp3175 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp3176 = *$tmp3175;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3177 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3178 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp3177, $tmp3178);
frost$collections$Array$add$frost$collections$Array$T($tmp3177, ((frost$core$Object*) $tmp3172));
org$frostlang$frostc$Type* $tmp3179 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp3176, ((frost$collections$ListView*) $tmp3177));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3177));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp3173, $tmp3174, $tmp3172, $tmp3179);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3173));
frost$collections$Array* $tmp3180 = *(&local23);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3181 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp3182 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp3181, $tmp3182);
org$frostlang$frostc$IR$Value* $tmp3183 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3173, ((frost$collections$ListView*) $tmp3180), $tmp3181);
org$frostlang$frostc$Type* $tmp3184 = *(&local27);
org$frostlang$frostc$IR$Value* $tmp3185 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3183, $tmp3184);
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
org$frostlang$frostc$IR$Value* $tmp3186 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
*(&local52) = $tmp3185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3173));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:439
org$frostlang$frostc$IR$Value* $tmp3187 = *(&local52);
org$frostlang$frostc$IR$Value* $tmp3188 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3187, param6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3188));
org$frostlang$frostc$IR$Value* $tmp3189 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp3190 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3190));
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3191 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3192 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3193 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3193));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp3194 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3194));
*(&local23) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3195 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3195));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp3196 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3196));
*(&local14) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp3197 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3197));
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp3198 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3198));
*(&local10) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp3199 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3199));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp3200 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3200));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp3201 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp3202 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3202));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3188;

}
void org$frostlang$frostc$expression$Closure$init(org$frostlang$frostc$expression$Closure* param0) {

return;

}
void org$frostlang$frostc$expression$Closure$cleanup(org$frostlang$frostc$expression$Closure* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:23
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

