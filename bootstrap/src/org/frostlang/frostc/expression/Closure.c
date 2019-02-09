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
#include "org/frostlang/frostc/Type/Kind.h"
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
typedef frost$collections$Iterator* (*$fn314)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn318)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn323)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn467)(frost$core$Object*);
typedef frost$core$Int64 (*$fn485)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn499)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn514)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn533)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn570)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn584)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn599)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn618)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn640)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn659)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn663)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn668)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn859)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn863)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn868)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn995)(frost$core$Object*);
typedef frost$core$Int64 (*$fn1027)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1041)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1056)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1075)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1107)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1131)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn1244)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1300)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1313)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1326)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1339)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1363)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1442)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1455)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1468)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1481)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1505)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1558)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1614)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1638)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1651)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1664)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1677)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1701)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1758)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1807)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1820)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1833)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1846)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1859)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1875)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1889)(frost$core$Object*);
typedef frost$core$Int64 (*$fn1905)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1963)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1976)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1989)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2002)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2021)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2080)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2104)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2117)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2130)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2143)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2167)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2212)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2224)(org$frostlang$frostc$Type*, org$frostlang$frostc$Type*);
typedef frost$collections$ListView* (*$fn2232)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn2243)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2247)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2252)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2258)(frost$core$Object*);
typedef frost$core$String* (*$fn2291)(frost$core$Object*);
typedef frost$core$String* (*$fn2299)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2387)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn2391)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2410)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2421)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2425)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2430)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2507)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2528)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2542)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2557)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2576)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2614)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2628)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2643)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2662)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2712)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn2726)(frost$collections$MapView*);
typedef frost$collections$Array* (*$fn2730)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2741)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn2745)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2750)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2986)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3025)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3038)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3051)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3064)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3083)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3167)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3180)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3193)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3206)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3230)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x6c\x6f\x73\x75\x72\x65", 39, 4048859009194802747, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x6e\x6f\x6e\x2d\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x20\x6f\x77\x6e\x65\x72\x20\x66\x6f\x72\x20", 27, -299203061613670049, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 1492063599391574064, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s494 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s579 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s592 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s627 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s635 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65", 9, 1602056911729632975, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s701 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s743 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s767 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s778 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s779 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s809 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s843 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s845 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s979 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s997 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s1035 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s1036 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s1049 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s1083 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s1084 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s1252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s1350 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1486 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s1492 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1522 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, 1146821029976304283, NULL };
static frost$core$String $s1531 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 5148459585349422950, NULL };
static frost$core$String $s1566 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1622 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1681 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1682 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s1688 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1696 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1766 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1863 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1864 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 97, -2976789655376824909, NULL };
static frost$core$String $s1870 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1892 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static frost$core$String $s1894 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x6c\x61\x6d\x62\x64\x61\x20\x77\x69\x74\x68\x20\x77\x72\x6f\x6e\x67\x20", 31, -8865909723025372911, NULL };
static frost$core$String $s1896 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 20, 4248843021992149759, NULL };
static frost$core$String $s2016 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2034 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2035 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 119, 5693748891149284325, NULL };
static frost$core$String $s2041 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2054 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s2088 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s2154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x65\x72\x72\x6f\x72", 12, -6960542561056411676, NULL };
static frost$core$String $s2261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x77\x68\x65\x6e\x20\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x64\x20\x61\x73\x20\x27", 26, 7783089566661782278, NULL };
static frost$core$String $s2263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3a", 2, 14198, NULL };
static frost$core$String $s2294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x64\x20\x6e\x6f\x74\x20\x72\x65\x63\x65\x69\x76\x65\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 51, 8939304453205542054, NULL };
static frost$core$String $s2296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20", 6, 1410335929809, NULL };
static frost$core$String $s2302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x20", 5, 22706926183, NULL };
static frost$core$String $s2304 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s2345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, 1205436084705178767, NULL };
static frost$core$String $s2347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x20\x20\x20\x20\x20\x20\x20\x20", 9, 1205436084705178767, NULL };
static frost$core$String $s2369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6d\x62\x64\x61\x20\x74\x79\x70\x65\x20\x77\x61\x73\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x61\x6e\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x63\x6f\x6e\x74\x65\x78\x74", 67, -43704296328153041, NULL };
static frost$core$String $s2413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 10, 3323213258965972710, NULL };
static frost$core$String $s2415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s2497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s2510 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static frost$core$String $s2536 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s2537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s2550 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s2584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s2585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2622 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s2623 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s2636 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s2670 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s2671 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2795 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s2890 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s2909 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s2928 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s2939 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s2955 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, 1146821009278619293, NULL };
static frost$core$String $s2967 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -7013691227705711665, NULL };
static frost$core$String $s2981 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3078 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3096 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3097 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 119, 5693748891149284325, NULL };
static frost$core$String $s3103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x6f\x73\x75\x72\x65\x2e\x66\x72\x6f\x73\x74", 13, 2590376290787963686, NULL };
static frost$core$String $s3210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s3217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s3225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };

org$frostlang$frostc$Type* org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:26
frost$collections$Stack** $tmp2 = &param0->currentClass;
frost$collections$Stack* $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Closure.frost:26:40
frost$core$Int64 $tmp5 = (frost$core$Int64) {0};
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
frost$core$Int64 $tmp22 = (frost$core$Int64) {30};
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
frost$core$Int64 $tmp36 = (frost$core$Int64) {31};
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
frost$core$Int64 $tmp46 = (frost$core$Int64) {1};
int64_t $tmp47 = $tmp45.value;
int64_t $tmp48 = $tmp46.value;
int64_t $tmp49 = $tmp47 - $tmp48;
frost$core$Int64 $tmp50 = (frost$core$Int64) {$tmp49};
int64_t $tmp51 = $tmp50.value;
int64_t $tmp52 = $tmp4.value;
int64_t $tmp53 = $tmp51 - $tmp52;
frost$core$Int64 $tmp54 = (frost$core$Int64) {$tmp53};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp55 = (frost$core$Int64) {0};
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
frost$core$Int64 $tmp70 = (frost$core$Int64) {74};
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
frost$core$Int64 $tmp83 = (frost$core$Int64) {8192};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp84 = $tmp82.value;
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84 & $tmp85;
frost$core$Int64 $tmp87 = frost$core$Int64$init$builtin_int64($tmp86);
frost$core$Int64 $tmp88 = (frost$core$Int64) {0};
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
frost$core$Int64 $tmp107 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s108, $tmp107);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp109 = &$tmp103->value;
frost$core$Object* $tmp110 = *$tmp109;
frost$core$Frost$ref$frost$core$Object$Q($tmp110);
frost$core$Bit $tmp111 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$ClassDecl*) $tmp110) != NULL);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp113 = (frost$core$Int64) {31};
frost$collections$Stack** $tmp114 = &param0->currentClass;
frost$collections$Stack* $tmp115 = *$tmp114;
frost$core$Int64 $tmp116 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Closure.frost:31:90
frost$core$Int64 $tmp117 = (frost$core$Int64) {0};
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
frost$core$Int64 $tmp134 = (frost$core$Int64) {30};
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
frost$core$Int64 $tmp148 = (frost$core$Int64) {31};
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
frost$core$Int64 $tmp158 = (frost$core$Int64) {1};
int64_t $tmp159 = $tmp157.value;
int64_t $tmp160 = $tmp158.value;
int64_t $tmp161 = $tmp159 - $tmp160;
frost$core$Int64 $tmp162 = (frost$core$Int64) {$tmp161};
int64_t $tmp163 = $tmp162.value;
int64_t $tmp164 = $tmp116.value;
int64_t $tmp165 = $tmp163 - $tmp164;
frost$core$Int64 $tmp166 = (frost$core$Int64) {$tmp165};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp167 = (frost$core$Int64) {0};
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
frost$core$Int64 $tmp182 = (frost$core$Int64) {74};
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
frost$core$Int64 $tmp202 = (frost$core$Int64) {16};
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
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Compiler$Capture* local4 = NULL;
org$frostlang$frostc$Variable* local5 = NULL;
frost$core$Int64 local6;
frost$core$Int64 local7;
org$frostlang$frostc$ClassDecl$Kind local8;
org$frostlang$frostc$ClassDecl$Kind local9;
org$frostlang$frostc$ClassDecl* local10 = NULL;
frost$collections$Array* local11 = NULL;
frost$collections$Array* local12 = NULL;
org$frostlang$frostc$Compiler$Capture* local13 = NULL;
org$frostlang$frostc$Variable* local14 = NULL;
org$frostlang$frostc$expression$Binary$Operator local15;
org$frostlang$frostc$expression$Binary$Operator local16;
org$frostlang$frostc$FieldDecl* local17 = NULL;
org$frostlang$frostc$expression$Binary$Operator local18;
org$frostlang$frostc$expression$Binary$Operator local19;
org$frostlang$frostc$expression$Binary$Operator local20;
org$frostlang$frostc$expression$Binary$Operator local21;
org$frostlang$frostc$MethodDecl$Kind local22;
org$frostlang$frostc$MethodDecl$Kind local23;
org$frostlang$frostc$Type$Kind local24;
org$frostlang$frostc$Type$Kind local25;
org$frostlang$frostc$MethodDecl* local26 = NULL;
org$frostlang$frostc$MethodDecl$Kind local27;
org$frostlang$frostc$MethodDecl$Kind local28;
org$frostlang$frostc$Type$Kind local29;
org$frostlang$frostc$Type$Kind local30;
org$frostlang$frostc$MethodDecl* local31 = NULL;
org$frostlang$frostc$Compiler$Capture* local32 = NULL;
org$frostlang$frostc$Variable* local33 = NULL;
org$frostlang$frostc$FieldDecl$Kind local34;
org$frostlang$frostc$FieldDecl$Kind local35;
org$frostlang$frostc$FieldDecl* local36 = NULL;
org$frostlang$frostc$FieldDecl* local37 = NULL;
org$frostlang$frostc$FieldDecl$Kind local38;
org$frostlang$frostc$FieldDecl$Kind local39;
org$frostlang$frostc$FieldDecl* local40 = NULL;
org$frostlang$frostc$FieldDecl$Kind local41;
org$frostlang$frostc$FieldDecl$Kind local42;
org$frostlang$frostc$FieldDecl* local43 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:39
org$frostlang$frostc$Position* $tmp207 = &((org$frostlang$frostc$Symbol*) param1)->position;
org$frostlang$frostc$Position $tmp208 = *$tmp207;
*(&local0) = $tmp208;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:40
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp209 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp210 = (frost$core$Int64) {0};
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
frost$core$Int64 $tmp216 = (frost$core$Int64) {1};
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
frost$core$Int64 $tmp226 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Closure.frost:43:54
frost$core$Int64 $tmp227 = (frost$core$Int64) {0};
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
frost$core$Int64 $tmp244 = (frost$core$Int64) {30};
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
frost$core$Int64 $tmp258 = (frost$core$Int64) {31};
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
frost$core$Int64 $tmp268 = (frost$core$Int64) {1};
int64_t $tmp269 = $tmp267.value;
int64_t $tmp270 = $tmp268.value;
int64_t $tmp271 = $tmp269 - $tmp270;
frost$core$Int64 $tmp272 = (frost$core$Int64) {$tmp271};
int64_t $tmp273 = $tmp272.value;
int64_t $tmp274 = $tmp226.value;
int64_t $tmp275 = $tmp273 - $tmp274;
frost$core$Int64 $tmp276 = (frost$core$Int64) {$tmp275};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp277 = (frost$core$Int64) {0};
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
frost$core$Int64 $tmp292 = (frost$core$Int64) {74};
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
// begin inline call to method org.frostlang.frostc.Type.Immutable():org.frostlang.frostc.Type from Closure.frost:44:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:285
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp304 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp305 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:285:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp306 = &(&local3)->$rawValue;
*$tmp306 = $tmp305;
org$frostlang$frostc$Type$Kind $tmp307 = *(&local3);
*(&local2) = $tmp307;
org$frostlang$frostc$Type$Kind $tmp308 = *(&local2);
org$frostlang$frostc$Position $tmp309 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp310 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp304, &$s311, $tmp308, $tmp309, $tmp310);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$collections$Array$add$frost$collections$Array$T($tmp303, ((frost$core$Object*) $tmp304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:45
ITable* $tmp312 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp312->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp312 = $tmp312->next;
}
$fn314 $tmp313 = $tmp312->methods[0];
frost$collections$Iterator* $tmp315 = $tmp313(((frost$collections$Iterable*) param2));
goto block16;
block16:;
ITable* $tmp316 = $tmp315->$class->itable;
while ($tmp316->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp316 = $tmp316->next;
}
$fn318 $tmp317 = $tmp316->methods[0];
frost$core$Bit $tmp319 = $tmp317($tmp315);
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block18; else goto block17;
block17:;
*(&local4) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp321 = $tmp315->$class->itable;
while ($tmp321->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp321 = $tmp321->next;
}
$fn323 $tmp322 = $tmp321->methods[1];
frost$core$Object* $tmp324 = $tmp322($tmp315);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp324)));
org$frostlang$frostc$Compiler$Capture* $tmp325 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local4) = ((org$frostlang$frostc$Compiler$Capture*) $tmp324);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:46
org$frostlang$frostc$Compiler$Capture* $tmp326 = *(&local4);
frost$core$Int64* $tmp327 = &$tmp326->$rawValue;
frost$core$Int64 $tmp328 = *$tmp327;
frost$core$Int64 $tmp329 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:47:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp330 = $tmp328.value;
int64_t $tmp331 = $tmp329.value;
bool $tmp332 = $tmp330 == $tmp331;
frost$core$Bit $tmp333 = frost$core$Bit$init$builtin_bit($tmp332);
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Variable** $tmp335 = (org$frostlang$frostc$Variable**) ($tmp326->$data + 0);
org$frostlang$frostc$Variable* $tmp336 = *$tmp335;
*(&local5) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
org$frostlang$frostc$Variable* $tmp337 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
*(&local5) = $tmp336;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:48
org$frostlang$frostc$Variable* $tmp338 = *(&local5);
org$frostlang$frostc$Type** $tmp339 = &$tmp338->type;
org$frostlang$frostc$Type* $tmp340 = *$tmp339;
frost$core$Bit $tmp341 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp340);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Closure.frost:48:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp342 = $tmp341.value;
bool $tmp343 = !$tmp342;
frost$core$Bit $tmp344 = (frost$core$Bit) {$tmp343};
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:49
frost$collections$Array* $tmp346 = *(&local1);
// begin inline call to method frost.collections.Array.clear() from Closure.frost:49:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
frost$core$Int64 $tmp347 = (frost$core$Int64) {0};
frost$core$Int64* $tmp348 = &$tmp346->_count;
*$tmp348 = $tmp347;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
frost$core$Int64 $tmp349 = (frost$core$Int64) {0};
frost$core$Int64* $tmp350 = &$tmp346->capacity;
frost$core$Int64 $tmp351 = *$tmp350;
frost$core$Bit $tmp352 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp353 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp349, $tmp351, $tmp352);
frost$core$Int64 $tmp354 = $tmp353.min;
*(&local6) = $tmp354;
frost$core$Int64 $tmp355 = $tmp353.max;
frost$core$Bit $tmp356 = $tmp353.inclusive;
bool $tmp357 = $tmp356.value;
frost$core$Int64 $tmp358 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp359 = $tmp358.value;
frost$core$UInt64 $tmp360 = (frost$core$UInt64) {((uint64_t) $tmp359)};
if ($tmp357) goto block31; else goto block32;
block31:;
int64_t $tmp361 = $tmp354.value;
int64_t $tmp362 = $tmp355.value;
bool $tmp363 = $tmp361 <= $tmp362;
frost$core$Bit $tmp364 = (frost$core$Bit) {$tmp363};
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block28; else goto block29;
block32:;
int64_t $tmp366 = $tmp354.value;
int64_t $tmp367 = $tmp355.value;
bool $tmp368 = $tmp366 < $tmp367;
frost$core$Bit $tmp369 = (frost$core$Bit) {$tmp368};
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp371 = &$tmp346->data;
frost$core$Object** $tmp372 = *$tmp371;
frost$core$Int64 $tmp373 = *(&local6);
int64_t $tmp374 = $tmp373.value;
frost$core$Object* $tmp375 = $tmp372[$tmp374];
frost$core$Frost$unref$frost$core$Object$Q($tmp375);
$tmp372[$tmp374] = ((frost$core$Object*) NULL);
frost$core$Int64 $tmp376 = *(&local6);
int64_t $tmp377 = $tmp355.value;
int64_t $tmp378 = $tmp376.value;
int64_t $tmp379 = $tmp377 - $tmp378;
frost$core$Int64 $tmp380 = (frost$core$Int64) {$tmp379};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp381 = $tmp380.value;
frost$core$UInt64 $tmp382 = (frost$core$UInt64) {((uint64_t) $tmp381)};
if ($tmp357) goto block35; else goto block36;
block35:;
uint64_t $tmp383 = $tmp382.value;
uint64_t $tmp384 = $tmp360.value;
bool $tmp385 = $tmp383 >= $tmp384;
frost$core$Bit $tmp386 = (frost$core$Bit) {$tmp385};
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block33; else goto block29;
block36:;
uint64_t $tmp388 = $tmp382.value;
uint64_t $tmp389 = $tmp360.value;
bool $tmp390 = $tmp388 > $tmp389;
frost$core$Bit $tmp391 = (frost$core$Bit) {$tmp390};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block33; else goto block29;
block33:;
int64_t $tmp393 = $tmp376.value;
int64_t $tmp394 = $tmp358.value;
int64_t $tmp395 = $tmp393 + $tmp394;
frost$core$Int64 $tmp396 = (frost$core$Int64) {$tmp395};
*(&local6) = $tmp396;
goto block28;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:50
org$frostlang$frostc$Variable* $tmp397 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local5) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp324);
org$frostlang$frostc$Compiler$Capture* $tmp398 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local4) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block18;
block24:;
org$frostlang$frostc$Variable* $tmp399 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local5) = ((org$frostlang$frostc$Variable*) NULL);
goto block19;
block21:;
frost$core$Int64 $tmp400 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:53:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp401 = $tmp328.value;
int64_t $tmp402 = $tmp400.value;
bool $tmp403 = $tmp401 == $tmp402;
frost$core$Bit $tmp404 = frost$core$Bit$init$builtin_bit($tmp403);
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:54
org$frostlang$frostc$Type* $tmp406 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
frost$core$Bit $tmp407 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp406);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Closure.frost:54:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp408 = $tmp407.value;
bool $tmp409 = !$tmp408;
frost$core$Bit $tmp410 = (frost$core$Bit) {$tmp409};
bool $tmp411 = $tmp410.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
if ($tmp411) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:55
frost$collections$Array* $tmp412 = *(&local1);
// begin inline call to method frost.collections.Array.clear() from Closure.frost:55:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
frost$core$Int64 $tmp413 = (frost$core$Int64) {0};
frost$core$Int64* $tmp414 = &$tmp412->_count;
*$tmp414 = $tmp413;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
frost$core$Int64 $tmp415 = (frost$core$Int64) {0};
frost$core$Int64* $tmp416 = &$tmp412->capacity;
frost$core$Int64 $tmp417 = *$tmp416;
frost$core$Bit $tmp418 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp419 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp415, $tmp417, $tmp418);
frost$core$Int64 $tmp420 = $tmp419.min;
*(&local7) = $tmp420;
frost$core$Int64 $tmp421 = $tmp419.max;
frost$core$Bit $tmp422 = $tmp419.inclusive;
bool $tmp423 = $tmp422.value;
frost$core$Int64 $tmp424 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp425 = $tmp424.value;
frost$core$UInt64 $tmp426 = (frost$core$UInt64) {((uint64_t) $tmp425)};
if ($tmp423) goto block48; else goto block49;
block48:;
int64_t $tmp427 = $tmp420.value;
int64_t $tmp428 = $tmp421.value;
bool $tmp429 = $tmp427 <= $tmp428;
frost$core$Bit $tmp430 = (frost$core$Bit) {$tmp429};
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block45; else goto block46;
block49:;
int64_t $tmp432 = $tmp420.value;
int64_t $tmp433 = $tmp421.value;
bool $tmp434 = $tmp432 < $tmp433;
frost$core$Bit $tmp435 = (frost$core$Bit) {$tmp434};
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp437 = &$tmp412->data;
frost$core$Object** $tmp438 = *$tmp437;
frost$core$Int64 $tmp439 = *(&local7);
int64_t $tmp440 = $tmp439.value;
frost$core$Object* $tmp441 = $tmp438[$tmp440];
frost$core$Frost$unref$frost$core$Object$Q($tmp441);
$tmp438[$tmp440] = ((frost$core$Object*) NULL);
frost$core$Int64 $tmp442 = *(&local7);
int64_t $tmp443 = $tmp421.value;
int64_t $tmp444 = $tmp442.value;
int64_t $tmp445 = $tmp443 - $tmp444;
frost$core$Int64 $tmp446 = (frost$core$Int64) {$tmp445};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp447 = $tmp446.value;
frost$core$UInt64 $tmp448 = (frost$core$UInt64) {((uint64_t) $tmp447)};
if ($tmp423) goto block52; else goto block53;
block52:;
uint64_t $tmp449 = $tmp448.value;
uint64_t $tmp450 = $tmp426.value;
bool $tmp451 = $tmp449 >= $tmp450;
frost$core$Bit $tmp452 = (frost$core$Bit) {$tmp451};
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block50; else goto block46;
block53:;
uint64_t $tmp454 = $tmp448.value;
uint64_t $tmp455 = $tmp426.value;
bool $tmp456 = $tmp454 > $tmp455;
frost$core$Bit $tmp457 = (frost$core$Bit) {$tmp456};
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block50; else goto block46;
block50:;
int64_t $tmp459 = $tmp442.value;
int64_t $tmp460 = $tmp424.value;
int64_t $tmp461 = $tmp459 + $tmp460;
frost$core$Int64 $tmp462 = (frost$core$Int64) {$tmp461};
*(&local7) = $tmp462;
goto block45;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:56
frost$core$Frost$unref$frost$core$Object$Q($tmp324);
org$frostlang$frostc$Compiler$Capture* $tmp463 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local4) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block18;
block41:;
goto block19;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:60
frost$core$Int64 $tmp464 = (frost$core$Int64) {60};
org$frostlang$frostc$Compiler$Capture* $tmp465 = *(&local4);
$fn467 $tmp466 = ($fn467) ((frost$core$Object*) $tmp465)->$class->vtable[0];
frost$core$String* $tmp468 = $tmp466(((frost$core$Object*) $tmp465));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s469, $tmp464, $tmp468);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
abort(); // unreachable
block19:;
frost$core$Frost$unref$frost$core$Object$Q($tmp324);
org$frostlang$frostc$Compiler$Capture* $tmp470 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
*(&local4) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block16;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:65
FROST_ASSERT(208 == sizeof(org$frostlang$frostc$ClassDecl));
org$frostlang$frostc$ClassDecl* $tmp471 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$collections$Stack** $tmp472 = &param0->currentClass;
frost$collections$Stack* $tmp473 = *$tmp472;
frost$core$Int64 $tmp474 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Closure.frost:65:54
frost$core$Int64 $tmp475 = (frost$core$Int64) {0};
int64_t $tmp476 = $tmp474.value;
int64_t $tmp477 = $tmp475.value;
bool $tmp478 = $tmp476 >= $tmp477;
frost$core$Bit $tmp479 = (frost$core$Bit) {$tmp478};
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block57; else goto block56;
block57:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp481 = &$tmp473->contents;
frost$collections$Array* $tmp482 = *$tmp481;
ITable* $tmp483 = ((frost$collections$CollectionView*) $tmp482)->$class->itable;
while ($tmp483->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp483 = $tmp483->next;
}
$fn485 $tmp484 = $tmp483->methods[0];
frost$core$Int64 $tmp486 = $tmp484(((frost$collections$CollectionView*) $tmp482));
int64_t $tmp487 = $tmp474.value;
int64_t $tmp488 = $tmp486.value;
bool $tmp489 = $tmp487 < $tmp488;
frost$core$Bit $tmp490 = (frost$core$Bit) {$tmp489};
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp492 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s493, $tmp492, &$s494);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp495 = &$tmp473->contents;
frost$collections$Array* $tmp496 = *$tmp495;
ITable* $tmp497 = ((frost$collections$CollectionView*) $tmp496)->$class->itable;
while ($tmp497->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp497 = $tmp497->next;
}
$fn499 $tmp498 = $tmp497->methods[0];
frost$core$Int64 $tmp500 = $tmp498(((frost$collections$CollectionView*) $tmp496));
int64_t $tmp501 = $tmp500.value;
int64_t $tmp502 = $tmp474.value;
bool $tmp503 = $tmp501 > $tmp502;
frost$core$Bit $tmp504 = (frost$core$Bit) {$tmp503};
bool $tmp505 = $tmp504.value;
if ($tmp505) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp506 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s507, $tmp506);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp508 = &$tmp473->contents;
frost$collections$Array* $tmp509 = *$tmp508;
frost$collections$Array** $tmp510 = &$tmp473->contents;
frost$collections$Array* $tmp511 = *$tmp510;
ITable* $tmp512 = ((frost$collections$CollectionView*) $tmp511)->$class->itable;
while ($tmp512->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp512 = $tmp512->next;
}
$fn514 $tmp513 = $tmp512->methods[0];
frost$core$Int64 $tmp515 = $tmp513(((frost$collections$CollectionView*) $tmp511));
frost$core$Int64 $tmp516 = (frost$core$Int64) {1};
int64_t $tmp517 = $tmp515.value;
int64_t $tmp518 = $tmp516.value;
int64_t $tmp519 = $tmp517 - $tmp518;
frost$core$Int64 $tmp520 = (frost$core$Int64) {$tmp519};
int64_t $tmp521 = $tmp520.value;
int64_t $tmp522 = $tmp474.value;
int64_t $tmp523 = $tmp521 - $tmp522;
frost$core$Int64 $tmp524 = (frost$core$Int64) {$tmp523};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp525 = (frost$core$Int64) {0};
int64_t $tmp526 = $tmp524.value;
int64_t $tmp527 = $tmp525.value;
bool $tmp528 = $tmp526 >= $tmp527;
frost$core$Bit $tmp529 = (frost$core$Bit) {$tmp528};
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block64; else goto block63;
block64:;
ITable* $tmp531 = ((frost$collections$CollectionView*) $tmp509)->$class->itable;
while ($tmp531->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp531 = $tmp531->next;
}
$fn533 $tmp532 = $tmp531->methods[0];
frost$core$Int64 $tmp534 = $tmp532(((frost$collections$CollectionView*) $tmp509));
int64_t $tmp535 = $tmp524.value;
int64_t $tmp536 = $tmp534.value;
bool $tmp537 = $tmp535 < $tmp536;
frost$core$Bit $tmp538 = (frost$core$Bit) {$tmp537};
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp540 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s541, $tmp540, &$s542);
abort(); // unreachable
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp543 = &$tmp509->data;
frost$core$Object** $tmp544 = *$tmp543;
int64_t $tmp545 = $tmp524.value;
frost$core$Object* $tmp546 = $tmp544[$tmp545];
frost$core$Frost$ref$frost$core$Object$Q($tmp546);
frost$core$Frost$ref$frost$core$Object$Q($tmp546);
frost$core$Frost$unref$frost$core$Object$Q($tmp546);
frost$io$File** $tmp547 = &((org$frostlang$frostc$ClassDecl*) $tmp546)->source;
frost$io$File* $tmp548 = *$tmp547;
org$frostlang$frostc$Position $tmp549 = *(&local0);
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp550 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp550);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp551 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp552 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp551, $tmp552);
frost$core$Int64 $tmp553 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Closure.frost:66:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp554 = &(&local9)->$rawValue;
*$tmp554 = $tmp553;
org$frostlang$frostc$ClassDecl$Kind $tmp555 = *(&local9);
*(&local8) = $tmp555;
org$frostlang$frostc$ClassDecl$Kind $tmp556 = *(&local8);
frost$collections$Stack** $tmp557 = &param0->currentClass;
frost$collections$Stack* $tmp558 = *$tmp557;
frost$core$Int64 $tmp559 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Closure.frost:67:41
frost$core$Int64 $tmp560 = (frost$core$Int64) {0};
int64_t $tmp561 = $tmp559.value;
int64_t $tmp562 = $tmp560.value;
bool $tmp563 = $tmp561 >= $tmp562;
frost$core$Bit $tmp564 = (frost$core$Bit) {$tmp563};
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block69; else goto block68;
block69:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp566 = &$tmp558->contents;
frost$collections$Array* $tmp567 = *$tmp566;
ITable* $tmp568 = ((frost$collections$CollectionView*) $tmp567)->$class->itable;
while ($tmp568->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp568 = $tmp568->next;
}
$fn570 $tmp569 = $tmp568->methods[0];
frost$core$Int64 $tmp571 = $tmp569(((frost$collections$CollectionView*) $tmp567));
int64_t $tmp572 = $tmp559.value;
int64_t $tmp573 = $tmp571.value;
bool $tmp574 = $tmp572 < $tmp573;
frost$core$Bit $tmp575 = (frost$core$Bit) {$tmp574};
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp577 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s578, $tmp577, &$s579);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp580 = &$tmp558->contents;
frost$collections$Array* $tmp581 = *$tmp580;
ITable* $tmp582 = ((frost$collections$CollectionView*) $tmp581)->$class->itable;
while ($tmp582->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp582 = $tmp582->next;
}
$fn584 $tmp583 = $tmp582->methods[0];
frost$core$Int64 $tmp585 = $tmp583(((frost$collections$CollectionView*) $tmp581));
int64_t $tmp586 = $tmp585.value;
int64_t $tmp587 = $tmp559.value;
bool $tmp588 = $tmp586 > $tmp587;
frost$core$Bit $tmp589 = (frost$core$Bit) {$tmp588};
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block71; else goto block72;
block72:;
frost$core$Int64 $tmp591 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s592, $tmp591);
abort(); // unreachable
block71:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp593 = &$tmp558->contents;
frost$collections$Array* $tmp594 = *$tmp593;
frost$collections$Array** $tmp595 = &$tmp558->contents;
frost$collections$Array* $tmp596 = *$tmp595;
ITable* $tmp597 = ((frost$collections$CollectionView*) $tmp596)->$class->itable;
while ($tmp597->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp597 = $tmp597->next;
}
$fn599 $tmp598 = $tmp597->methods[0];
frost$core$Int64 $tmp600 = $tmp598(((frost$collections$CollectionView*) $tmp596));
frost$core$Int64 $tmp601 = (frost$core$Int64) {1};
int64_t $tmp602 = $tmp600.value;
int64_t $tmp603 = $tmp601.value;
int64_t $tmp604 = $tmp602 - $tmp603;
frost$core$Int64 $tmp605 = (frost$core$Int64) {$tmp604};
int64_t $tmp606 = $tmp605.value;
int64_t $tmp607 = $tmp559.value;
int64_t $tmp608 = $tmp606 - $tmp607;
frost$core$Int64 $tmp609 = (frost$core$Int64) {$tmp608};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp610 = (frost$core$Int64) {0};
int64_t $tmp611 = $tmp609.value;
int64_t $tmp612 = $tmp610.value;
bool $tmp613 = $tmp611 >= $tmp612;
frost$core$Bit $tmp614 = (frost$core$Bit) {$tmp613};
bool $tmp615 = $tmp614.value;
if ($tmp615) goto block76; else goto block75;
block76:;
ITable* $tmp616 = ((frost$collections$CollectionView*) $tmp594)->$class->itable;
while ($tmp616->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp616 = $tmp616->next;
}
$fn618 $tmp617 = $tmp616->methods[0];
frost$core$Int64 $tmp619 = $tmp617(((frost$collections$CollectionView*) $tmp594));
int64_t $tmp620 = $tmp609.value;
int64_t $tmp621 = $tmp619.value;
bool $tmp622 = $tmp620 < $tmp621;
frost$core$Bit $tmp623 = (frost$core$Bit) {$tmp622};
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block74; else goto block75;
block75:;
frost$core$Int64 $tmp625 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s626, $tmp625, &$s627);
abort(); // unreachable
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp628 = &$tmp594->data;
frost$core$Object** $tmp629 = *$tmp628;
int64_t $tmp630 = $tmp609.value;
frost$core$Object* $tmp631 = $tmp629[$tmp630];
frost$core$Frost$ref$frost$core$Object$Q($tmp631);
frost$core$Frost$ref$frost$core$Object$Q($tmp631);
frost$core$Frost$unref$frost$core$Object$Q($tmp631);
frost$core$String** $tmp632 = &((org$frostlang$frostc$ClassDecl*) $tmp631)->name;
frost$core$String* $tmp633 = *$tmp632;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Closure.frost:67:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$core$String* $tmp634 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp633, &$s635);
frost$core$Int64* $tmp636 = &param0->closureCount;
frost$core$Int64 $tmp637 = *$tmp636;
frost$core$Int64$wrapper* $tmp638;
$tmp638 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp638->value = $tmp637;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:67:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn640 $tmp639 = ($fn640) ((frost$core$Object*) $tmp638)->$class->vtable[0];
frost$core$String* $tmp641 = $tmp639(((frost$core$Object*) $tmp638));
frost$core$String* $tmp642 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp634, $tmp641);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
frost$core$String* $tmp643 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp642, &$s644);
frost$collections$Array* $tmp645 = *(&local1);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp646 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp646);
org$frostlang$frostc$SymbolTable** $tmp647 = &param0->root;
org$frostlang$frostc$SymbolTable* $tmp648 = *$tmp647;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp471, $tmp548, $tmp549, ((frost$collections$MapView*) $tmp550), ((frost$core$String*) NULL), $tmp551, $tmp556, $tmp643, ((frost$collections$ListView*) $tmp645), $tmp646, $tmp648);
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
org$frostlang$frostc$ClassDecl* $tmp649 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local10) = $tmp471;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$core$Frost$unref$frost$core$Object$Q($tmp631);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$core$Frost$unref$frost$core$Object$Q($tmp546);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:69
org$frostlang$frostc$ClassDecl* $tmp650 = *(&local10);
frost$core$Bit $tmp651 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp652 = &$tmp650->external;
*$tmp652 = $tmp651;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp653 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp653);
*(&local11) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$collections$Array* $tmp654 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local11) = $tmp653;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:73
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp655 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp655);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
frost$collections$Array* $tmp656 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
*(&local12) = $tmp655;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:74
ITable* $tmp657 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp657->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp657 = $tmp657->next;
}
$fn659 $tmp658 = $tmp657->methods[0];
frost$collections$Iterator* $tmp660 = $tmp658(((frost$collections$Iterable*) param2));
goto block79;
block79:;
ITable* $tmp661 = $tmp660->$class->itable;
while ($tmp661->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp661 = $tmp661->next;
}
$fn663 $tmp662 = $tmp661->methods[0];
frost$core$Bit $tmp664 = $tmp662($tmp660);
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block81; else goto block80;
block80:;
*(&local13) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp666 = $tmp660->$class->itable;
while ($tmp666->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp666 = $tmp666->next;
}
$fn668 $tmp667 = $tmp666->methods[1];
frost$core$Object* $tmp669 = $tmp667($tmp660);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp669)));
org$frostlang$frostc$Compiler$Capture* $tmp670 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
*(&local13) = ((org$frostlang$frostc$Compiler$Capture*) $tmp669);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:75
org$frostlang$frostc$Compiler$Capture* $tmp671 = *(&local13);
frost$core$Int64* $tmp672 = &$tmp671->$rawValue;
frost$core$Int64 $tmp673 = *$tmp672;
frost$core$Int64 $tmp674 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:76:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp675 = $tmp673.value;
int64_t $tmp676 = $tmp674.value;
bool $tmp677 = $tmp675 == $tmp676;
frost$core$Bit $tmp678 = frost$core$Bit$init$builtin_bit($tmp677);
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block83; else goto block84;
block83:;
org$frostlang$frostc$Variable** $tmp680 = (org$frostlang$frostc$Variable**) ($tmp671->$data + 0);
org$frostlang$frostc$Variable* $tmp681 = *$tmp680;
*(&local14) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
org$frostlang$frostc$Variable* $tmp682 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local14) = $tmp681;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:77
frost$collections$Array* $tmp683 = *(&local12);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp684 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$Variable* $tmp685 = *(&local14);
frost$core$String** $tmp686 = &((org$frostlang$frostc$Symbol*) $tmp685)->name;
frost$core$String* $tmp687 = *$tmp686;
org$frostlang$frostc$Variable* $tmp688 = *(&local14);
org$frostlang$frostc$Type** $tmp689 = &$tmp688->type;
org$frostlang$frostc$Type* $tmp690 = *$tmp689;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp684, $tmp687, $tmp690);
frost$collections$Array$add$frost$collections$Array$T($tmp683, ((frost$core$Object*) $tmp684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:79
frost$collections$Array* $tmp691 = *(&local11);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp692 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp693 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp694 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp695 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp696 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp697 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp698 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp699 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp700 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp698, $tmp699, $tmp700, &$s701);
org$frostlang$frostc$Variable* $tmp702 = *(&local14);
frost$core$String** $tmp703 = &((org$frostlang$frostc$Symbol*) $tmp702)->name;
frost$core$String* $tmp704 = *$tmp703;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp695, $tmp696, $tmp697, $tmp698, $tmp704);
frost$core$Int64 $tmp705 = (frost$core$Int64) {24};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from Closure.frost:81:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp706 = &(&local16)->$rawValue;
*$tmp706 = $tmp705;
org$frostlang$frostc$expression$Binary$Operator $tmp707 = *(&local16);
*(&local15) = $tmp707;
org$frostlang$frostc$expression$Binary$Operator $tmp708 = *(&local15);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp709 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp710 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp711 = *(&local0);
org$frostlang$frostc$Variable* $tmp712 = *(&local14);
frost$core$String** $tmp713 = &((org$frostlang$frostc$Symbol*) $tmp712)->name;
frost$core$String* $tmp714 = *$tmp713;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp709, $tmp710, $tmp711, $tmp714);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp692, $tmp693, $tmp694, $tmp695, $tmp708, $tmp709);
frost$collections$Array$add$frost$collections$Array$T($tmp691, ((frost$core$Object*) $tmp692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
org$frostlang$frostc$Variable* $tmp715 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
*(&local14) = ((org$frostlang$frostc$Variable*) NULL);
goto block82;
block84:;
frost$core$Int64 $tmp716 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:83:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp717 = $tmp673.value;
int64_t $tmp718 = $tmp716.value;
bool $tmp719 = $tmp717 == $tmp718;
frost$core$Bit $tmp720 = frost$core$Bit$init$builtin_bit($tmp719);
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block87; else goto block88;
block87:;
org$frostlang$frostc$FieldDecl** $tmp722 = (org$frostlang$frostc$FieldDecl**) ($tmp671->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp723 = *$tmp722;
*(&local17) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
org$frostlang$frostc$FieldDecl* $tmp724 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local17) = $tmp723;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:84
frost$collections$Array* $tmp725 = *(&local12);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp726 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$FieldDecl* $tmp727 = *(&local17);
frost$core$String** $tmp728 = &((org$frostlang$frostc$Symbol*) $tmp727)->name;
frost$core$String* $tmp729 = *$tmp728;
org$frostlang$frostc$FieldDecl* $tmp730 = *(&local17);
org$frostlang$frostc$Type** $tmp731 = &$tmp730->type;
org$frostlang$frostc$Type* $tmp732 = *$tmp731;
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp726, $tmp729, $tmp732);
frost$collections$Array$add$frost$collections$Array$T($tmp725, ((frost$core$Object*) $tmp726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:86
frost$collections$Array* $tmp733 = *(&local11);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp734 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp735 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp736 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp737 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp738 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp739 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp740 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp741 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp742 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp740, $tmp741, $tmp742, &$s743);
org$frostlang$frostc$FieldDecl* $tmp744 = *(&local17);
frost$core$String** $tmp745 = &((org$frostlang$frostc$Symbol*) $tmp744)->name;
frost$core$String* $tmp746 = *$tmp745;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp737, $tmp738, $tmp739, $tmp740, $tmp746);
frost$core$Int64 $tmp747 = (frost$core$Int64) {24};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from Closure.frost:88:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp748 = &(&local19)->$rawValue;
*$tmp748 = $tmp747;
org$frostlang$frostc$expression$Binary$Operator $tmp749 = *(&local19);
*(&local18) = $tmp749;
org$frostlang$frostc$expression$Binary$Operator $tmp750 = *(&local18);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp751 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp752 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp753 = *(&local0);
org$frostlang$frostc$FieldDecl* $tmp754 = *(&local17);
frost$core$String** $tmp755 = &((org$frostlang$frostc$Symbol*) $tmp754)->name;
frost$core$String* $tmp756 = *$tmp755;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp751, $tmp752, $tmp753, $tmp756);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp734, $tmp735, $tmp736, $tmp737, $tmp750, $tmp751);
frost$collections$Array$add$frost$collections$Array$T($tmp733, ((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
org$frostlang$frostc$FieldDecl* $tmp757 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
*(&local17) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block82;
block88:;
frost$core$Int64 $tmp758 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:90:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp759 = $tmp673.value;
int64_t $tmp760 = $tmp758.value;
bool $tmp761 = $tmp759 == $tmp760;
frost$core$Bit $tmp762 = frost$core$Bit$init$builtin_bit($tmp761);
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block91; else goto block82;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:91
frost$collections$Array* $tmp764 = *(&local12);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp765 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
org$frostlang$frostc$Type* $tmp766 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp765, &$s767, $tmp766);
frost$collections$Array$add$frost$collections$Array$T($tmp764, ((frost$core$Object*) $tmp765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:94
frost$collections$Array* $tmp768 = *(&local11);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp769 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp770 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp771 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp772 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp773 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp774 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp775 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp776 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp777 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp775, $tmp776, $tmp777, &$s778);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp772, $tmp773, $tmp774, $tmp775, &$s779);
frost$core$Int64 $tmp780 = (frost$core$Int64) {24};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from Closure.frost:97:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp781 = &(&local21)->$rawValue;
*$tmp781 = $tmp780;
org$frostlang$frostc$expression$Binary$Operator $tmp782 = *(&local21);
*(&local20) = $tmp782;
org$frostlang$frostc$expression$Binary$Operator $tmp783 = *(&local20);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp784 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp785 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp786 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp784, $tmp785, $tmp786, &$s787);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp769, $tmp770, $tmp771, $tmp772, $tmp783, $tmp784);
frost$collections$Array$add$frost$collections$Array$T($tmp768, ((frost$core$Object*) $tmp769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
goto block82;
block82:;
frost$core$Frost$unref$frost$core$Object$Q($tmp669);
org$frostlang$frostc$Compiler$Capture* $tmp788 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
*(&local13) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block79;
block81:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:102
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp789 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp790 = *(&local10);
org$frostlang$frostc$Position $tmp791 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp792 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp793 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp792, $tmp793);
frost$core$Int64 $tmp794 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:103:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp795 = &(&local23)->$rawValue;
*$tmp795 = $tmp794;
org$frostlang$frostc$MethodDecl$Kind $tmp796 = *(&local23);
*(&local22) = $tmp796;
org$frostlang$frostc$MethodDecl$Kind $tmp797 = *(&local22);
frost$collections$Array* $tmp798 = *(&local12);
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Closure.frost:105:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp799 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp800 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp801 = &(&local25)->$rawValue;
*$tmp801 = $tmp800;
org$frostlang$frostc$Type$Kind $tmp802 = *(&local25);
*(&local24) = $tmp802;
org$frostlang$frostc$Type$Kind $tmp803 = *(&local24);
org$frostlang$frostc$Position $tmp804 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp805 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp799, &$s806, $tmp803, $tmp804, $tmp805);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$collections$Array* $tmp807 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp808 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp807);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp789, $tmp790, $tmp791, ((frost$core$String*) NULL), $tmp792, $tmp797, &$s809, ((frost$collections$Array*) NULL), $tmp798, $tmp799, $tmp808);
*(&local26) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
org$frostlang$frostc$MethodDecl* $tmp810 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
*(&local26) = $tmp789;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:106
org$frostlang$frostc$ClassDecl* $tmp811 = *(&local10);
frost$collections$Array** $tmp812 = &$tmp811->methods;
frost$collections$Array* $tmp813 = *$tmp812;
org$frostlang$frostc$MethodDecl* $tmp814 = *(&local26);
frost$collections$Array$add$frost$collections$Array$T($tmp813, ((frost$core$Object*) $tmp814));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:107
org$frostlang$frostc$ClassDecl* $tmp815 = *(&local10);
org$frostlang$frostc$SymbolTable** $tmp816 = &$tmp815->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp817 = *$tmp816;
org$frostlang$frostc$MethodDecl* $tmp818 = *(&local26);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:107:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp819 = &((org$frostlang$frostc$Symbol*) $tmp818)->name;
frost$core$String* $tmp820 = *$tmp819;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp817, ((org$frostlang$frostc$Symbol*) $tmp818), $tmp820);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:110
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp821 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp822 = *(&local10);
org$frostlang$frostc$Position $tmp823 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp824 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp825 = (frost$core$Int64) {32};
frost$core$Int64 $tmp826 = (frost$core$Int64) {8192};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Closure.frost:111:55
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp827 = $tmp825.value;
int64_t $tmp828 = $tmp826.value;
int64_t $tmp829 = $tmp827 | $tmp828;
frost$core$Int64 $tmp830 = frost$core$Int64$init$builtin_int64($tmp829);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp824, $tmp830);
frost$core$Int64 $tmp831 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:112:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp832 = &(&local28)->$rawValue;
*$tmp832 = $tmp831;
org$frostlang$frostc$MethodDecl$Kind $tmp833 = *(&local28);
*(&local27) = $tmp833;
org$frostlang$frostc$MethodDecl$Kind $tmp834 = *(&local27);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp835 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp835);
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Closure.frost:113:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp836 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp837 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp838 = &(&local30)->$rawValue;
*$tmp838 = $tmp837;
org$frostlang$frostc$Type$Kind $tmp839 = *(&local30);
*(&local29) = $tmp839;
org$frostlang$frostc$Type$Kind $tmp840 = *(&local29);
org$frostlang$frostc$Position $tmp841 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp842 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp836, &$s843, $tmp840, $tmp841, $tmp842);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp844 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp844);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp821, $tmp822, $tmp823, ((frost$core$String*) NULL), $tmp824, $tmp834, &$s845, ((frost$collections$Array*) NULL), $tmp835, $tmp836, $tmp844);
*(&local31) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
org$frostlang$frostc$MethodDecl* $tmp846 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
*(&local31) = $tmp821;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:114
org$frostlang$frostc$ClassDecl* $tmp847 = *(&local10);
frost$collections$Array** $tmp848 = &$tmp847->methods;
frost$collections$Array* $tmp849 = *$tmp848;
org$frostlang$frostc$MethodDecl* $tmp850 = *(&local31);
frost$collections$Array$add$frost$collections$Array$T($tmp849, ((frost$core$Object*) $tmp850));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:115
org$frostlang$frostc$ClassDecl* $tmp851 = *(&local10);
org$frostlang$frostc$SymbolTable** $tmp852 = &$tmp851->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp853 = *$tmp852;
org$frostlang$frostc$MethodDecl* $tmp854 = *(&local31);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:115:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp855 = &((org$frostlang$frostc$Symbol*) $tmp854)->name;
frost$core$String* $tmp856 = *$tmp855;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp853, ((org$frostlang$frostc$Symbol*) $tmp854), $tmp856);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:118
ITable* $tmp857 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp857->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp857 = $tmp857->next;
}
$fn859 $tmp858 = $tmp857->methods[0];
frost$collections$Iterator* $tmp860 = $tmp858(((frost$collections$Iterable*) param2));
goto block103;
block103:;
ITable* $tmp861 = $tmp860->$class->itable;
while ($tmp861->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp861 = $tmp861->next;
}
$fn863 $tmp862 = $tmp861->methods[0];
frost$core$Bit $tmp864 = $tmp862($tmp860);
bool $tmp865 = $tmp864.value;
if ($tmp865) goto block105; else goto block104;
block104:;
*(&local32) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp866 = $tmp860->$class->itable;
while ($tmp866->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp866 = $tmp866->next;
}
$fn868 $tmp867 = $tmp866->methods[1];
frost$core$Object* $tmp869 = $tmp867($tmp860);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp869)));
org$frostlang$frostc$Compiler$Capture* $tmp870 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local32) = ((org$frostlang$frostc$Compiler$Capture*) $tmp869);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:119
org$frostlang$frostc$Compiler$Capture* $tmp871 = *(&local32);
frost$core$Int64* $tmp872 = &$tmp871->$rawValue;
frost$core$Int64 $tmp873 = *$tmp872;
frost$core$Int64 $tmp874 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:120:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp875 = $tmp873.value;
int64_t $tmp876 = $tmp874.value;
bool $tmp877 = $tmp875 == $tmp876;
frost$core$Bit $tmp878 = frost$core$Bit$init$builtin_bit($tmp877);
bool $tmp879 = $tmp878.value;
if ($tmp879) goto block107; else goto block108;
block107:;
org$frostlang$frostc$Variable** $tmp880 = (org$frostlang$frostc$Variable**) ($tmp871->$data + 0);
org$frostlang$frostc$Variable* $tmp881 = *$tmp880;
*(&local33) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
org$frostlang$frostc$Variable* $tmp882 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
*(&local33) = $tmp881;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:121
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp883 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp884 = *(&local10);
org$frostlang$frostc$Position $tmp885 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp886 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp887 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp888 = (frost$core$Int64) {65536};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Closure.frost:122:68
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp889 = $tmp887.value;
int64_t $tmp890 = $tmp888.value;
int64_t $tmp891 = $tmp889 | $tmp890;
frost$core$Int64 $tmp892 = frost$core$Int64$init$builtin_int64($tmp891);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp886, $tmp892);
frost$core$Int64 $tmp893 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Closure.frost:123:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp894 = &(&local35)->$rawValue;
*$tmp894 = $tmp893;
org$frostlang$frostc$FieldDecl$Kind $tmp895 = *(&local35);
*(&local34) = $tmp895;
org$frostlang$frostc$FieldDecl$Kind $tmp896 = *(&local34);
org$frostlang$frostc$Variable* $tmp897 = *(&local33);
frost$core$String** $tmp898 = &((org$frostlang$frostc$Symbol*) $tmp897)->name;
frost$core$String* $tmp899 = *$tmp898;
org$frostlang$frostc$Variable* $tmp900 = *(&local33);
org$frostlang$frostc$Type** $tmp901 = &$tmp900->type;
org$frostlang$frostc$Type* $tmp902 = *$tmp901;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp883, $tmp884, $tmp885, ((frost$core$String*) NULL), $tmp886, $tmp896, $tmp899, $tmp902, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local36) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
org$frostlang$frostc$FieldDecl* $tmp903 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
*(&local36) = $tmp883;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:124
org$frostlang$frostc$ClassDecl* $tmp904 = *(&local10);
org$frostlang$frostc$SymbolTable** $tmp905 = &$tmp904->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp906 = *$tmp905;
org$frostlang$frostc$FieldDecl* $tmp907 = *(&local36);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:124:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp908 = &((org$frostlang$frostc$Symbol*) $tmp907)->name;
frost$core$String* $tmp909 = *$tmp908;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp906, ((org$frostlang$frostc$Symbol*) $tmp907), $tmp909);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:125
org$frostlang$frostc$ClassDecl* $tmp910 = *(&local10);
frost$collections$Array** $tmp911 = &$tmp910->fields;
frost$collections$Array* $tmp912 = *$tmp911;
org$frostlang$frostc$FieldDecl* $tmp913 = *(&local36);
frost$collections$Array$add$frost$collections$Array$T($tmp912, ((frost$core$Object*) $tmp913));
org$frostlang$frostc$FieldDecl* $tmp914 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
*(&local36) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Variable* $tmp915 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
*(&local33) = ((org$frostlang$frostc$Variable*) NULL);
goto block106;
block108:;
frost$core$Int64 $tmp916 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:127:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp917 = $tmp873.value;
int64_t $tmp918 = $tmp916.value;
bool $tmp919 = $tmp917 == $tmp918;
frost$core$Bit $tmp920 = frost$core$Bit$init$builtin_bit($tmp919);
bool $tmp921 = $tmp920.value;
if ($tmp921) goto block113; else goto block114;
block113:;
org$frostlang$frostc$FieldDecl** $tmp922 = (org$frostlang$frostc$FieldDecl**) ($tmp871->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp923 = *$tmp922;
*(&local37) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
org$frostlang$frostc$FieldDecl* $tmp924 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
*(&local37) = $tmp923;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:128
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp925 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp926 = *(&local10);
org$frostlang$frostc$Position $tmp927 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp928 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp929 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp930 = (frost$core$Int64) {65536};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Closure.frost:129:68
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp931 = $tmp929.value;
int64_t $tmp932 = $tmp930.value;
int64_t $tmp933 = $tmp931 | $tmp932;
frost$core$Int64 $tmp934 = frost$core$Int64$init$builtin_int64($tmp933);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp928, $tmp934);
frost$core$Int64 $tmp935 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Closure.frost:130:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp936 = &(&local39)->$rawValue;
*$tmp936 = $tmp935;
org$frostlang$frostc$FieldDecl$Kind $tmp937 = *(&local39);
*(&local38) = $tmp937;
org$frostlang$frostc$FieldDecl$Kind $tmp938 = *(&local38);
org$frostlang$frostc$FieldDecl* $tmp939 = *(&local37);
frost$core$String** $tmp940 = &((org$frostlang$frostc$Symbol*) $tmp939)->name;
frost$core$String* $tmp941 = *$tmp940;
org$frostlang$frostc$FieldDecl* $tmp942 = *(&local37);
org$frostlang$frostc$Type** $tmp943 = &$tmp942->type;
org$frostlang$frostc$Type* $tmp944 = *$tmp943;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp925, $tmp926, $tmp927, ((frost$core$String*) NULL), $tmp928, $tmp938, $tmp941, $tmp944, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local40) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
org$frostlang$frostc$FieldDecl* $tmp945 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
*(&local40) = $tmp925;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:131
org$frostlang$frostc$ClassDecl* $tmp946 = *(&local10);
org$frostlang$frostc$SymbolTable** $tmp947 = &$tmp946->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp948 = *$tmp947;
org$frostlang$frostc$FieldDecl* $tmp949 = *(&local40);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:131:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp950 = &((org$frostlang$frostc$Symbol*) $tmp949)->name;
frost$core$String* $tmp951 = *$tmp950;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp948, ((org$frostlang$frostc$Symbol*) $tmp949), $tmp951);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:132
org$frostlang$frostc$ClassDecl* $tmp952 = *(&local10);
frost$collections$Array** $tmp953 = &$tmp952->fields;
frost$collections$Array* $tmp954 = *$tmp953;
org$frostlang$frostc$FieldDecl* $tmp955 = *(&local40);
frost$collections$Array$add$frost$collections$Array$T($tmp954, ((frost$core$Object*) $tmp955));
org$frostlang$frostc$FieldDecl* $tmp956 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
*(&local40) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp957 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
*(&local37) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block106;
block114:;
frost$core$Int64 $tmp958 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:134:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp959 = $tmp873.value;
int64_t $tmp960 = $tmp958.value;
bool $tmp961 = $tmp959 == $tmp960;
frost$core$Bit $tmp962 = frost$core$Bit$init$builtin_bit($tmp961);
bool $tmp963 = $tmp962.value;
if ($tmp963) goto block119; else goto block120;
block119:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:135
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp964 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp965 = *(&local10);
org$frostlang$frostc$Position $tmp966 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp967 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp968 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp969 = (frost$core$Int64) {65536};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Closure.frost:136:68
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp970 = $tmp968.value;
int64_t $tmp971 = $tmp969.value;
int64_t $tmp972 = $tmp970 | $tmp971;
frost$core$Int64 $tmp973 = frost$core$Int64$init$builtin_int64($tmp972);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp967, $tmp973);
frost$core$Int64 $tmp974 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Closure.frost:137:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp975 = &(&local42)->$rawValue;
*$tmp975 = $tmp974;
org$frostlang$frostc$FieldDecl$Kind $tmp976 = *(&local42);
*(&local41) = $tmp976;
org$frostlang$frostc$FieldDecl$Kind $tmp977 = *(&local41);
org$frostlang$frostc$Type* $tmp978 = org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp964, $tmp965, $tmp966, ((frost$core$String*) NULL), $tmp967, $tmp977, &$s979, $tmp978, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local43) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
org$frostlang$frostc$FieldDecl* $tmp980 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
*(&local43) = $tmp964;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:139
org$frostlang$frostc$ClassDecl* $tmp981 = *(&local10);
org$frostlang$frostc$SymbolTable** $tmp982 = &$tmp981->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp983 = *$tmp982;
org$frostlang$frostc$FieldDecl* $tmp984 = *(&local43);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:139:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp985 = &((org$frostlang$frostc$Symbol*) $tmp984)->name;
frost$core$String* $tmp986 = *$tmp985;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp983, ((org$frostlang$frostc$Symbol*) $tmp984), $tmp986);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:140
org$frostlang$frostc$ClassDecl* $tmp987 = *(&local10);
frost$collections$Array** $tmp988 = &$tmp987->fields;
frost$collections$Array* $tmp989 = *$tmp988;
org$frostlang$frostc$FieldDecl* $tmp990 = *(&local43);
frost$collections$Array$add$frost$collections$Array$T($tmp989, ((frost$core$Object*) $tmp990));
org$frostlang$frostc$FieldDecl* $tmp991 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
*(&local43) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block106;
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:143
frost$core$Int64 $tmp992 = (frost$core$Int64) {143};
org$frostlang$frostc$Compiler$Capture* $tmp993 = *(&local32);
$fn995 $tmp994 = ($fn995) ((frost$core$Object*) $tmp993)->$class->vtable[0];
frost$core$String* $tmp996 = $tmp994(((frost$core$Object*) $tmp993));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s997, $tmp992, $tmp996);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
abort(); // unreachable
block106:;
frost$core$Frost$unref$frost$core$Object$Q($tmp869);
org$frostlang$frostc$Compiler$Capture* $tmp998 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
*(&local32) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block103;
block105:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:147
org$frostlang$frostc$ClassDecl* $tmp999 = *(&local10);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp1000 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp1000, ((frost$core$Object*) $tmp999));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
frost$core$Weak** $tmp1001 = &param1->owner;
frost$core$Weak* $tmp1002 = *$tmp1001;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
frost$core$Weak** $tmp1003 = &param1->owner;
*$tmp1003 = $tmp1000;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:148
org$frostlang$frostc$ClassDecl* $tmp1004 = *(&local10);
frost$collections$Array** $tmp1005 = &$tmp1004->methods;
frost$collections$Array* $tmp1006 = *$tmp1005;
frost$collections$Array$add$frost$collections$Array$T($tmp1006, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:149
frost$collections$HashMap** $tmp1007 = &param0->classes;
frost$collections$HashMap* $tmp1008 = *$tmp1007;
org$frostlang$frostc$ClassDecl* $tmp1009 = *(&local10);
frost$core$String** $tmp1010 = &$tmp1009->name;
frost$core$String* $tmp1011 = *$tmp1010;
org$frostlang$frostc$ClassDecl* $tmp1012 = *(&local10);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1008, ((frost$collections$Key*) $tmp1011), ((frost$core$Object*) $tmp1012));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:150
org$frostlang$frostc$ClassDecl* $tmp1013 = *(&local10);
frost$collections$Stack** $tmp1014 = &param0->currentClass;
frost$collections$Stack* $tmp1015 = *$tmp1014;
frost$core$Int64 $tmp1016 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Closure.frost:150:46
frost$core$Int64 $tmp1017 = (frost$core$Int64) {0};
int64_t $tmp1018 = $tmp1016.value;
int64_t $tmp1019 = $tmp1017.value;
bool $tmp1020 = $tmp1018 >= $tmp1019;
frost$core$Bit $tmp1021 = (frost$core$Bit) {$tmp1020};
bool $tmp1022 = $tmp1021.value;
if ($tmp1022) goto block128; else goto block127;
block128:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp1023 = &$tmp1015->contents;
frost$collections$Array* $tmp1024 = *$tmp1023;
ITable* $tmp1025 = ((frost$collections$CollectionView*) $tmp1024)->$class->itable;
while ($tmp1025->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1025 = $tmp1025->next;
}
$fn1027 $tmp1026 = $tmp1025->methods[0];
frost$core$Int64 $tmp1028 = $tmp1026(((frost$collections$CollectionView*) $tmp1024));
int64_t $tmp1029 = $tmp1016.value;
int64_t $tmp1030 = $tmp1028.value;
bool $tmp1031 = $tmp1029 < $tmp1030;
frost$core$Bit $tmp1032 = (frost$core$Bit) {$tmp1031};
bool $tmp1033 = $tmp1032.value;
if ($tmp1033) goto block126; else goto block127;
block127:;
frost$core$Int64 $tmp1034 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1035, $tmp1034, &$s1036);
abort(); // unreachable
block126:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp1037 = &$tmp1015->contents;
frost$collections$Array* $tmp1038 = *$tmp1037;
ITable* $tmp1039 = ((frost$collections$CollectionView*) $tmp1038)->$class->itable;
while ($tmp1039->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1039 = $tmp1039->next;
}
$fn1041 $tmp1040 = $tmp1039->methods[0];
frost$core$Int64 $tmp1042 = $tmp1040(((frost$collections$CollectionView*) $tmp1038));
int64_t $tmp1043 = $tmp1042.value;
int64_t $tmp1044 = $tmp1016.value;
bool $tmp1045 = $tmp1043 > $tmp1044;
frost$core$Bit $tmp1046 = (frost$core$Bit) {$tmp1045};
bool $tmp1047 = $tmp1046.value;
if ($tmp1047) goto block130; else goto block131;
block131:;
frost$core$Int64 $tmp1048 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1049, $tmp1048);
abort(); // unreachable
block130:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp1050 = &$tmp1015->contents;
frost$collections$Array* $tmp1051 = *$tmp1050;
frost$collections$Array** $tmp1052 = &$tmp1015->contents;
frost$collections$Array* $tmp1053 = *$tmp1052;
ITable* $tmp1054 = ((frost$collections$CollectionView*) $tmp1053)->$class->itable;
while ($tmp1054->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1054 = $tmp1054->next;
}
$fn1056 $tmp1055 = $tmp1054->methods[0];
frost$core$Int64 $tmp1057 = $tmp1055(((frost$collections$CollectionView*) $tmp1053));
frost$core$Int64 $tmp1058 = (frost$core$Int64) {1};
int64_t $tmp1059 = $tmp1057.value;
int64_t $tmp1060 = $tmp1058.value;
int64_t $tmp1061 = $tmp1059 - $tmp1060;
frost$core$Int64 $tmp1062 = (frost$core$Int64) {$tmp1061};
int64_t $tmp1063 = $tmp1062.value;
int64_t $tmp1064 = $tmp1016.value;
int64_t $tmp1065 = $tmp1063 - $tmp1064;
frost$core$Int64 $tmp1066 = (frost$core$Int64) {$tmp1065};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp1067 = (frost$core$Int64) {0};
int64_t $tmp1068 = $tmp1066.value;
int64_t $tmp1069 = $tmp1067.value;
bool $tmp1070 = $tmp1068 >= $tmp1069;
frost$core$Bit $tmp1071 = (frost$core$Bit) {$tmp1070};
bool $tmp1072 = $tmp1071.value;
if ($tmp1072) goto block135; else goto block134;
block135:;
ITable* $tmp1073 = ((frost$collections$CollectionView*) $tmp1051)->$class->itable;
while ($tmp1073->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1073 = $tmp1073->next;
}
$fn1075 $tmp1074 = $tmp1073->methods[0];
frost$core$Int64 $tmp1076 = $tmp1074(((frost$collections$CollectionView*) $tmp1051));
int64_t $tmp1077 = $tmp1066.value;
int64_t $tmp1078 = $tmp1076.value;
bool $tmp1079 = $tmp1077 < $tmp1078;
frost$core$Bit $tmp1080 = (frost$core$Bit) {$tmp1079};
bool $tmp1081 = $tmp1080.value;
if ($tmp1081) goto block133; else goto block134;
block134:;
frost$core$Int64 $tmp1082 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1083, $tmp1082, &$s1084);
abort(); // unreachable
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1085 = &$tmp1051->data;
frost$core$Object** $tmp1086 = *$tmp1085;
int64_t $tmp1087 = $tmp1066.value;
frost$core$Object* $tmp1088 = $tmp1086[$tmp1087];
frost$core$Frost$ref$frost$core$Object$Q($tmp1088);
frost$core$Frost$ref$frost$core$Object$Q($tmp1088);
frost$core$Frost$unref$frost$core$Object$Q($tmp1088);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp1089 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp1089, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1088)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
frost$core$Weak** $tmp1090 = &$tmp1013->owner;
frost$core$Weak* $tmp1091 = *$tmp1090;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
frost$core$Weak** $tmp1092 = &$tmp1013->owner;
*$tmp1092 = $tmp1089;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
frost$core$Frost$unref$frost$core$Object$Q($tmp1088);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:151
org$frostlang$frostc$ClassDecl* $tmp1093 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
org$frostlang$frostc$MethodDecl* $tmp1094 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
*(&local31) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1095 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
*(&local26) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$collections$Array* $tmp1096 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1097 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
*(&local11) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1098 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp1099 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp1093;

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
org$frostlang$frostc$Compiler$AutoScope* $tmp1100 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1100, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
org$frostlang$frostc$Compiler$AutoScope* $tmp1101 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
*(&local0) = $tmp1100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:158
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1102 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1102);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
frost$collections$Array* $tmp1103 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
*(&local1) = $tmp1102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:159
frost$core$Int64 $tmp1104 = (frost$core$Int64) {0};
ITable* $tmp1105 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp1105->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1105 = $tmp1105->next;
}
$fn1107 $tmp1106 = $tmp1105->methods[0];
frost$core$Int64 $tmp1108 = $tmp1106(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp1109 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1110 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1104, $tmp1108, $tmp1109);
frost$core$Int64 $tmp1111 = $tmp1110.min;
*(&local2) = $tmp1111;
frost$core$Int64 $tmp1112 = $tmp1110.max;
frost$core$Bit $tmp1113 = $tmp1110.inclusive;
bool $tmp1114 = $tmp1113.value;
frost$core$Int64 $tmp1115 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1116 = $tmp1115.value;
frost$core$UInt64 $tmp1117 = (frost$core$UInt64) {((uint64_t) $tmp1116)};
if ($tmp1114) goto block5; else goto block6;
block5:;
int64_t $tmp1118 = $tmp1111.value;
int64_t $tmp1119 = $tmp1112.value;
bool $tmp1120 = $tmp1118 <= $tmp1119;
frost$core$Bit $tmp1121 = (frost$core$Bit) {$tmp1120};
bool $tmp1122 = $tmp1121.value;
if ($tmp1122) goto block2; else goto block3;
block6:;
int64_t $tmp1123 = $tmp1111.value;
int64_t $tmp1124 = $tmp1112.value;
bool $tmp1125 = $tmp1123 < $tmp1124;
frost$core$Bit $tmp1126 = (frost$core$Bit) {$tmp1125};
bool $tmp1127 = $tmp1126.value;
if ($tmp1127) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:160
frost$core$Int64 $tmp1128 = *(&local2);
ITable* $tmp1129 = param1->$class->itable;
while ($tmp1129->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1129 = $tmp1129->next;
}
$fn1131 $tmp1130 = $tmp1129->methods[0];
frost$core$Object* $tmp1132 = $tmp1130(param1, $tmp1128);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1132)));
org$frostlang$frostc$ASTNode* $tmp1133 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp1132);
frost$core$Frost$unref$frost$core$Object$Q($tmp1132);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:161
org$frostlang$frostc$ASTNode* $tmp1134 = *(&local3);
frost$core$Int64* $tmp1135 = &$tmp1134->$rawValue;
frost$core$Int64 $tmp1136 = *$tmp1135;
frost$core$Int64 $tmp1137 = (frost$core$Int64) {34};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:162:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1138 = $tmp1136.value;
int64_t $tmp1139 = $tmp1137.value;
bool $tmp1140 = $tmp1138 == $tmp1139;
frost$core$Bit $tmp1141 = frost$core$Bit$init$builtin_bit($tmp1140);
bool $tmp1142 = $tmp1141.value;
if ($tmp1142) goto block8; else goto block7;
block8:;
org$frostlang$frostc$Position* $tmp1143 = (org$frostlang$frostc$Position*) ($tmp1134->$data + 0);
org$frostlang$frostc$Position $tmp1144 = *$tmp1143;
*(&local4) = $tmp1144;
frost$core$String** $tmp1145 = (frost$core$String**) ($tmp1134->$data + 24);
frost$core$String* $tmp1146 = *$tmp1145;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$core$String* $tmp1147 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
*(&local5) = $tmp1146;
org$frostlang$frostc$ASTNode** $tmp1148 = (org$frostlang$frostc$ASTNode**) ($tmp1134->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1149 = *$tmp1148;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
org$frostlang$frostc$ASTNode* $tmp1150 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
*(&local6) = $tmp1149;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:163
org$frostlang$frostc$Scanner** $tmp1151 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1152 = *$tmp1151;
org$frostlang$frostc$ASTNode* $tmp1153 = *(&local6);
org$frostlang$frostc$Type* $tmp1154 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1152, $tmp1153);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
org$frostlang$frostc$Type* $tmp1155 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
*(&local7) = $tmp1154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:164
org$frostlang$frostc$Type* $tmp1156 = *(&local7);
frost$core$Bit $tmp1157 = frost$core$Bit$init$builtin_bit($tmp1156 == NULL);
bool $tmp1158 = $tmp1157.value;
if ($tmp1158) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:165
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp1159 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1160 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1161 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1162 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1163 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1164 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:167
org$frostlang$frostc$Type* $tmp1165 = *(&local7);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from Closure.frost:167:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:852
frost$core$Bit $tmp1166 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type* $tmp1167 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp1165, $tmp1166);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
org$frostlang$frostc$Type* $tmp1168 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
*(&local7) = $tmp1167;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:168
org$frostlang$frostc$Type* $tmp1169 = *(&local7);
frost$core$Bit $tmp1170 = frost$core$Bit$init$builtin_bit($tmp1169 == NULL);
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:169
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp1172 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1173 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1174 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1175 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1176 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1177 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:171
frost$collections$Array* $tmp1178 = *(&local1);
org$frostlang$frostc$Type* $tmp1179 = *(&local7);
frost$collections$Array$add$frost$collections$Array$T($tmp1178, ((frost$core$Object*) $tmp1179));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:172
org$frostlang$frostc$SymbolTable** $tmp1180 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1181 = *$tmp1180;
FROST_ASSERT(88 == sizeof(org$frostlang$frostc$Variable));
org$frostlang$frostc$Variable* $tmp1182 = (org$frostlang$frostc$Variable*) frostObjectAlloc(88, (frost$core$Class*) &org$frostlang$frostc$Variable$class);
org$frostlang$frostc$Position $tmp1183 = *(&local4);
frost$core$Int64 $tmp1184 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Variable.Kind from Closure.frost:172:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int64* $tmp1185 = &(&local9)->$rawValue;
*$tmp1185 = $tmp1184;
org$frostlang$frostc$Variable$Kind $tmp1186 = *(&local9);
*(&local8) = $tmp1186;
org$frostlang$frostc$Variable$Kind $tmp1187 = *(&local8);
frost$core$String* $tmp1188 = *(&local5);
org$frostlang$frostc$Type* $tmp1189 = *(&local7);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Variable$Storage));
org$frostlang$frostc$Variable$Storage* $tmp1190 = (org$frostlang$frostc$Variable$Storage*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Variable$Storage$class);
frost$core$Int64 $tmp1191 = (frost$core$Int64) {1};
frost$core$Int64 $tmp1192 = (frost$core$Int64) {18446744073709551615};
org$frostlang$frostc$Variable$Storage$init$frost$core$Int64$frost$core$Int64($tmp1190, $tmp1191, $tmp1192);
org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage($tmp1182, $tmp1183, $tmp1187, $tmp1188, $tmp1189, $tmp1190);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Closure.frost:172:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp1193 = &((org$frostlang$frostc$Symbol*) $tmp1182)->name;
frost$core$String* $tmp1194 = *$tmp1193;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp1181, ((org$frostlang$frostc$Symbol*) $tmp1182), $tmp1194);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
org$frostlang$frostc$Type* $tmp1195 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1196 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1197 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
*(&local5) = ((frost$core$String*) NULL);
goto block7;
block7:;
org$frostlang$frostc$ASTNode* $tmp1198 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Int64 $tmp1199 = *(&local2);
int64_t $tmp1200 = $tmp1112.value;
int64_t $tmp1201 = $tmp1199.value;
int64_t $tmp1202 = $tmp1200 - $tmp1201;
frost$core$Int64 $tmp1203 = (frost$core$Int64) {$tmp1202};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1204 = $tmp1203.value;
frost$core$UInt64 $tmp1205 = (frost$core$UInt64) {((uint64_t) $tmp1204)};
if ($tmp1114) goto block19; else goto block20;
block19:;
uint64_t $tmp1206 = $tmp1205.value;
uint64_t $tmp1207 = $tmp1117.value;
bool $tmp1208 = $tmp1206 >= $tmp1207;
frost$core$Bit $tmp1209 = (frost$core$Bit) {$tmp1208};
bool $tmp1210 = $tmp1209.value;
if ($tmp1210) goto block17; else goto block3;
block20:;
uint64_t $tmp1211 = $tmp1205.value;
uint64_t $tmp1212 = $tmp1117.value;
bool $tmp1213 = $tmp1211 > $tmp1212;
frost$core$Bit $tmp1214 = (frost$core$Bit) {$tmp1213};
bool $tmp1215 = $tmp1214.value;
if ($tmp1215) goto block17; else goto block3;
block17:;
int64_t $tmp1216 = $tmp1199.value;
int64_t $tmp1217 = $tmp1115.value;
int64_t $tmp1218 = $tmp1216 + $tmp1217;
frost$core$Int64 $tmp1219 = (frost$core$Int64) {$tmp1218};
*(&local2) = $tmp1219;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:177
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:178
frost$core$Int64* $tmp1220 = &param3->$rawValue;
frost$core$Int64 $tmp1221 = *$tmp1220;
frost$core$Int64 $tmp1222 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:179:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1223 = $tmp1221.value;
int64_t $tmp1224 = $tmp1222.value;
bool $tmp1225 = $tmp1223 == $tmp1224;
frost$core$Bit $tmp1226 = frost$core$Bit$init$builtin_bit($tmp1225);
bool $tmp1227 = $tmp1226.value;
if ($tmp1227) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Type** $tmp1228 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp1229 = *$tmp1228;
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
org$frostlang$frostc$Type* $tmp1230 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
*(&local11) = $tmp1229;
frost$core$Bit* $tmp1231 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp1232 = *$tmp1231;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:180
org$frostlang$frostc$Type* $tmp1233 = *(&local11);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:180:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp1234 = &$tmp1233->typeKind;
org$frostlang$frostc$Type$Kind $tmp1235 = *$tmp1234;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1236;
$tmp1236 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1236->value = $tmp1235;
frost$core$Int64 $tmp1237 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1238 = &(&local14)->$rawValue;
*$tmp1238 = $tmp1237;
org$frostlang$frostc$Type$Kind $tmp1239 = *(&local14);
*(&local13) = $tmp1239;
org$frostlang$frostc$Type$Kind $tmp1240 = *(&local13);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1241;
$tmp1241 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1241->value = $tmp1240;
ITable* $tmp1242 = ((frost$core$Equatable*) $tmp1236)->$class->itable;
while ($tmp1242->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1242 = $tmp1242->next;
}
$fn1244 $tmp1243 = $tmp1242->methods[1];
frost$core$Bit $tmp1245 = $tmp1243(((frost$core$Equatable*) $tmp1236), ((frost$core$Equatable*) $tmp1241));
bool $tmp1246 = $tmp1245.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1241)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1236)));
if ($tmp1246) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
*(&local12) = $tmp1233;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
goto block27;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1247 = &$tmp1233->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1248 = *$tmp1247;
frost$core$Bit $tmp1249 = frost$core$Bit$init$builtin_bit($tmp1248 != NULL);
bool $tmp1250 = $tmp1249.value;
if ($tmp1250) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp1251 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1252, $tmp1251);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1253 = &$tmp1233->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1254 = *$tmp1253;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Int64 $tmp1255 = (frost$core$Int64) {0};
frost$core$Object* $tmp1256 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1254, $tmp1255);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1256)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1256);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp1256);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1256)));
goto block27;
block27:;
org$frostlang$frostc$Type* $tmp1257 = *(&local12);
// begin inline call to function org.frostlang.frostc.Type.get_isMethod():frost.core.Bit from Closure.frost:180:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:607
org$frostlang$frostc$Type$Kind* $tmp1258 = &$tmp1257->typeKind;
org$frostlang$frostc$Type$Kind $tmp1259 = *$tmp1258;
frost$core$Int64 $tmp1260 = $tmp1259.$rawValue;
frost$core$Int64 $tmp1261 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:608:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1262 = $tmp1260.value;
int64_t $tmp1263 = $tmp1261.value;
bool $tmp1264 = $tmp1262 == $tmp1263;
frost$core$Bit $tmp1265 = frost$core$Bit$init$builtin_bit($tmp1264);
bool $tmp1266 = $tmp1265.value;
if ($tmp1266) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp1267 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:608:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1268 = $tmp1260.value;
int64_t $tmp1269 = $tmp1267.value;
bool $tmp1270 = $tmp1268 == $tmp1269;
frost$core$Bit $tmp1271 = frost$core$Bit$init$builtin_bit($tmp1270);
bool $tmp1272 = $tmp1271.value;
if ($tmp1272) goto block36; else goto block39;
block39:;
frost$core$Int64 $tmp1273 = (frost$core$Int64) {18};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:608:50
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1274 = $tmp1260.value;
int64_t $tmp1275 = $tmp1273.value;
bool $tmp1276 = $tmp1274 == $tmp1275;
frost$core$Bit $tmp1277 = frost$core$Bit$init$builtin_bit($tmp1276);
bool $tmp1278 = $tmp1277.value;
if ($tmp1278) goto block36; else goto block41;
block41:;
frost$core$Int64 $tmp1279 = (frost$core$Int64) {17};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:608:73
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1280 = $tmp1260.value;
int64_t $tmp1281 = $tmp1279.value;
bool $tmp1282 = $tmp1280 == $tmp1281;
frost$core$Bit $tmp1283 = frost$core$Bit$init$builtin_bit($tmp1282);
bool $tmp1284 = $tmp1283.value;
if ($tmp1284) goto block36; else goto block43;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:609
frost$core$Bit $tmp1285 = frost$core$Bit$init$builtin_bit(true);
*(&local15) = $tmp1285;
goto block34;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:612
frost$core$Bit $tmp1286 = frost$core$Bit$init$builtin_bit(false);
*(&local15) = $tmp1286;
goto block34;
block35:;
goto block34;
block34:;
frost$core$Bit $tmp1287 = *(&local15);
bool $tmp1288 = $tmp1287.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
if ($tmp1288) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:181
org$frostlang$frostc$Type* $tmp1289 = *(&local11);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:181:36
org$frostlang$frostc$Type$Kind* $tmp1290 = &$tmp1289->typeKind;
org$frostlang$frostc$Type$Kind $tmp1291 = *$tmp1290;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1292;
$tmp1292 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1292->value = $tmp1291;
frost$core$Int64 $tmp1293 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1294 = &(&local17)->$rawValue;
*$tmp1294 = $tmp1293;
org$frostlang$frostc$Type$Kind $tmp1295 = *(&local17);
*(&local16) = $tmp1295;
org$frostlang$frostc$Type$Kind $tmp1296 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1297;
$tmp1297 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1297->value = $tmp1296;
ITable* $tmp1298 = ((frost$core$Equatable*) $tmp1292)->$class->itable;
while ($tmp1298->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1298 = $tmp1298->next;
}
$fn1300 $tmp1299 = $tmp1298->methods[0];
frost$core$Bit $tmp1301 = $tmp1299(((frost$core$Equatable*) $tmp1292), ((frost$core$Equatable*) $tmp1297));
bool $tmp1302 = $tmp1301.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1297)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1292)));
if ($tmp1302) goto block46; else goto block50;
block50:;
org$frostlang$frostc$Type$Kind* $tmp1303 = &$tmp1289->typeKind;
org$frostlang$frostc$Type$Kind $tmp1304 = *$tmp1303;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1305;
$tmp1305 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1305->value = $tmp1304;
frost$core$Int64 $tmp1306 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1307 = &(&local19)->$rawValue;
*$tmp1307 = $tmp1306;
org$frostlang$frostc$Type$Kind $tmp1308 = *(&local19);
*(&local18) = $tmp1308;
org$frostlang$frostc$Type$Kind $tmp1309 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1310;
$tmp1310 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1310->value = $tmp1309;
ITable* $tmp1311 = ((frost$core$Equatable*) $tmp1305)->$class->itable;
while ($tmp1311->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1311 = $tmp1311->next;
}
$fn1313 $tmp1312 = $tmp1311->methods[0];
frost$core$Bit $tmp1314 = $tmp1312(((frost$core$Equatable*) $tmp1305), ((frost$core$Equatable*) $tmp1310));
bool $tmp1315 = $tmp1314.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1310)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1305)));
if ($tmp1315) goto block46; else goto block49;
block49:;
org$frostlang$frostc$Type$Kind* $tmp1316 = &$tmp1289->typeKind;
org$frostlang$frostc$Type$Kind $tmp1317 = *$tmp1316;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1318;
$tmp1318 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1318->value = $tmp1317;
frost$core$Int64 $tmp1319 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1320 = &(&local21)->$rawValue;
*$tmp1320 = $tmp1319;
org$frostlang$frostc$Type$Kind $tmp1321 = *(&local21);
*(&local20) = $tmp1321;
org$frostlang$frostc$Type$Kind $tmp1322 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1323;
$tmp1323 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1323->value = $tmp1322;
ITable* $tmp1324 = ((frost$core$Equatable*) $tmp1318)->$class->itable;
while ($tmp1324->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1324 = $tmp1324->next;
}
$fn1326 $tmp1325 = $tmp1324->methods[0];
frost$core$Bit $tmp1327 = $tmp1325(((frost$core$Equatable*) $tmp1318), ((frost$core$Equatable*) $tmp1323));
bool $tmp1328 = $tmp1327.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1323)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1318)));
if ($tmp1328) goto block46; else goto block48;
block48:;
org$frostlang$frostc$Type$Kind* $tmp1329 = &$tmp1289->typeKind;
org$frostlang$frostc$Type$Kind $tmp1330 = *$tmp1329;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1331;
$tmp1331 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1331->value = $tmp1330;
frost$core$Int64 $tmp1332 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:662:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1333 = &(&local23)->$rawValue;
*$tmp1333 = $tmp1332;
org$frostlang$frostc$Type$Kind $tmp1334 = *(&local23);
*(&local22) = $tmp1334;
org$frostlang$frostc$Type$Kind $tmp1335 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1336;
$tmp1336 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1336->value = $tmp1335;
ITable* $tmp1337 = ((frost$core$Equatable*) $tmp1331)->$class->itable;
while ($tmp1337->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1337 = $tmp1337->next;
}
$fn1339 $tmp1338 = $tmp1337->methods[0];
frost$core$Bit $tmp1340 = $tmp1338(((frost$core$Equatable*) $tmp1331), ((frost$core$Equatable*) $tmp1336));
bool $tmp1341 = $tmp1340.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1336)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1331)));
if ($tmp1341) goto block46; else goto block47;
block47:;
frost$core$Int64 $tmp1342 = (frost$core$Int64) {663};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1343, $tmp1342, &$s1344);
abort(); // unreachable
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:664
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1345 = &$tmp1289->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1346 = *$tmp1345;
frost$core$Bit $tmp1347 = frost$core$Bit$init$builtin_bit($tmp1346 != NULL);
bool $tmp1348 = $tmp1347.value;
if ($tmp1348) goto block56; else goto block57;
block57:;
frost$core$Int64 $tmp1349 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1350, $tmp1349);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1351 = &$tmp1289->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1352 = *$tmp1351;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1353 = &$tmp1289->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1354 = *$tmp1353;
frost$core$Bit $tmp1355 = frost$core$Bit$init$builtin_bit($tmp1354 != NULL);
bool $tmp1356 = $tmp1355.value;
if ($tmp1356) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp1357 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1358, $tmp1357);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1359 = &$tmp1289->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1360 = *$tmp1359;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
ITable* $tmp1361 = ((frost$collections$CollectionView*) $tmp1360)->$class->itable;
while ($tmp1361->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1361 = $tmp1361->next;
}
$fn1363 $tmp1362 = $tmp1361->methods[0];
frost$core$Int64 $tmp1364 = $tmp1362(((frost$collections$CollectionView*) $tmp1360));
frost$core$Int64 $tmp1365 = (frost$core$Int64) {1};
int64_t $tmp1366 = $tmp1364.value;
int64_t $tmp1367 = $tmp1365.value;
int64_t $tmp1368 = $tmp1366 - $tmp1367;
frost$core$Int64 $tmp1369 = (frost$core$Int64) {$tmp1368};
frost$core$Object* $tmp1370 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1352, $tmp1369);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1370)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1370);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1370)));
org$frostlang$frostc$Type* $tmp1371 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
*(&local24) = ((org$frostlang$frostc$Type*) $tmp1370);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1370)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:185
frost$collections$HashMap** $tmp1372 = &param0->binaryTypes;
frost$collections$HashMap* $tmp1373 = *$tmp1372;
*(&local25) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
frost$collections$HashMap* $tmp1374 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
*(&local25) = $tmp1373;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:186
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp1375 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp1375);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
frost$collections$HashMap** $tmp1376 = &param0->binaryTypes;
frost$collections$HashMap* $tmp1377 = *$tmp1376;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
frost$collections$HashMap** $tmp1378 = &param0->binaryTypes;
*$tmp1378 = $tmp1375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:187
org$frostlang$frostc$Type* $tmp1379 = *(&local24);
org$frostlang$frostc$Pair* $tmp1380 = org$frostlang$frostc$Compiler$computeCoercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, param2, $tmp1379);
*(&local26) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
org$frostlang$frostc$Pair* $tmp1381 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1381));
*(&local26) = $tmp1380;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:188
frost$collections$HashMap* $tmp1382 = *(&local25);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
frost$collections$HashMap** $tmp1383 = &param0->binaryTypes;
frost$collections$HashMap* $tmp1384 = *$tmp1383;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
frost$collections$HashMap** $tmp1385 = &param0->binaryTypes;
*$tmp1385 = $tmp1382;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:189
org$frostlang$frostc$Pair* $tmp1386 = *(&local26);
frost$core$Bit $tmp1387 = frost$core$Bit$init$builtin_bit($tmp1386 == NULL);
bool $tmp1388 = $tmp1387.value;
if ($tmp1388) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:190
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Pair* $tmp1389 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
*(&local26) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp1390 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
*(&local25) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp1391 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1392 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1393 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1394 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1395 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1396 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:192
org$frostlang$frostc$Pair* $tmp1397 = *(&local26);
frost$core$Object** $tmp1398 = &$tmp1397->first;
frost$core$Object* $tmp1399 = *$tmp1398;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1399)));
org$frostlang$frostc$Type* $tmp1400 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
*(&local10) = ((org$frostlang$frostc$Type*) $tmp1399);
org$frostlang$frostc$Pair* $tmp1401 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
*(&local26) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$HashMap* $tmp1402 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
*(&local25) = ((frost$collections$HashMap*) NULL);
org$frostlang$frostc$Type* $tmp1403 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
goto block26;
block26:;
org$frostlang$frostc$Type* $tmp1404 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1405 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:196
org$frostlang$frostc$Type* $tmp1406 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
org$frostlang$frostc$Type* $tmp1407 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
*(&local10) = $tmp1406;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:199
org$frostlang$frostc$Type* $tmp1408 = *(&local10);
frost$core$Bit $tmp1409 = frost$core$Bit$init$builtin_bit($tmp1408 == NULL);
bool $tmp1410 = $tmp1409.value;
if ($tmp1410) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp1411 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1412 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1413 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return ((org$frostlang$frostc$Type*) NULL);
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:202
org$frostlang$frostc$Position $tmp1414 = org$frostlang$frostc$Position$init();
frost$core$Int64 $tmp1415 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Closure.frost:202:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1416 = &(&local28)->$rawValue;
*$tmp1416 = $tmp1415;
org$frostlang$frostc$Type$Kind $tmp1417 = *(&local28);
*(&local27) = $tmp1417;
org$frostlang$frostc$Type$Kind $tmp1418 = *(&local27);
frost$collections$Array* $tmp1419 = *(&local1);
org$frostlang$frostc$Type* $tmp1420 = *(&local10);
frost$core$Int64 $tmp1421 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp1422 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1414, $tmp1418, ((frost$collections$ListView*) $tmp1419), $tmp1420, $tmp1421);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
org$frostlang$frostc$Type* $tmp1423 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1424 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1425 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return $tmp1422;

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
frost$collections$Array* local10 = NULL;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$Type* local13 = NULL;
org$frostlang$frostc$Type* local14 = NULL;
org$frostlang$frostc$Type$Kind local15;
org$frostlang$frostc$Type$Kind local16;
frost$core$Bit local17;
org$frostlang$frostc$Type* local18 = NULL;
org$frostlang$frostc$Type$Kind local19;
org$frostlang$frostc$Type$Kind local20;
org$frostlang$frostc$Type$Kind local21;
org$frostlang$frostc$Type$Kind local22;
org$frostlang$frostc$Type$Kind local23;
org$frostlang$frostc$Type$Kind local24;
org$frostlang$frostc$Type$Kind local25;
org$frostlang$frostc$Type$Kind local26;
org$frostlang$frostc$Type$Kind local27;
org$frostlang$frostc$Type$Kind local28;
org$frostlang$frostc$MethodDecl$Kind local29;
org$frostlang$frostc$MethodDecl$Kind local30;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:210
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:211
org$frostlang$frostc$Type* $tmp1426 = org$frostlang$frostc$expression$Closure$typedLambdaType$org$frostlang$frostc$Compiler$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Type$Q(param0, ((frost$collections$ListView*) param2), param3, param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
org$frostlang$frostc$Type* $tmp1427 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
*(&local1) = $tmp1426;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:212
org$frostlang$frostc$Type* $tmp1428 = *(&local1);
frost$core$Bit $tmp1429 = frost$core$Bit$init$builtin_bit($tmp1428 != NULL);
bool $tmp1430 = $tmp1429.value;
if ($tmp1430) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:213
org$frostlang$frostc$Type* $tmp1431 = *(&local1);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:213:37
org$frostlang$frostc$Type$Kind* $tmp1432 = &$tmp1431->typeKind;
org$frostlang$frostc$Type$Kind $tmp1433 = *$tmp1432;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1434;
$tmp1434 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1434->value = $tmp1433;
frost$core$Int64 $tmp1435 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1436 = &(&local3)->$rawValue;
*$tmp1436 = $tmp1435;
org$frostlang$frostc$Type$Kind $tmp1437 = *(&local3);
*(&local2) = $tmp1437;
org$frostlang$frostc$Type$Kind $tmp1438 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1439;
$tmp1439 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1439->value = $tmp1438;
ITable* $tmp1440 = ((frost$core$Equatable*) $tmp1434)->$class->itable;
while ($tmp1440->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1440 = $tmp1440->next;
}
$fn1442 $tmp1441 = $tmp1440->methods[0];
frost$core$Bit $tmp1443 = $tmp1441(((frost$core$Equatable*) $tmp1434), ((frost$core$Equatable*) $tmp1439));
bool $tmp1444 = $tmp1443.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1439)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1434)));
if ($tmp1444) goto block5; else goto block9;
block9:;
org$frostlang$frostc$Type$Kind* $tmp1445 = &$tmp1431->typeKind;
org$frostlang$frostc$Type$Kind $tmp1446 = *$tmp1445;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1447;
$tmp1447 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1447->value = $tmp1446;
frost$core$Int64 $tmp1448 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1449 = &(&local5)->$rawValue;
*$tmp1449 = $tmp1448;
org$frostlang$frostc$Type$Kind $tmp1450 = *(&local5);
*(&local4) = $tmp1450;
org$frostlang$frostc$Type$Kind $tmp1451 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1452;
$tmp1452 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1452->value = $tmp1451;
ITable* $tmp1453 = ((frost$core$Equatable*) $tmp1447)->$class->itable;
while ($tmp1453->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1453 = $tmp1453->next;
}
$fn1455 $tmp1454 = $tmp1453->methods[0];
frost$core$Bit $tmp1456 = $tmp1454(((frost$core$Equatable*) $tmp1447), ((frost$core$Equatable*) $tmp1452));
bool $tmp1457 = $tmp1456.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1452)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1447)));
if ($tmp1457) goto block5; else goto block8;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1458 = &$tmp1431->typeKind;
org$frostlang$frostc$Type$Kind $tmp1459 = *$tmp1458;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1460;
$tmp1460 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1460->value = $tmp1459;
frost$core$Int64 $tmp1461 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1462 = &(&local7)->$rawValue;
*$tmp1462 = $tmp1461;
org$frostlang$frostc$Type$Kind $tmp1463 = *(&local7);
*(&local6) = $tmp1463;
org$frostlang$frostc$Type$Kind $tmp1464 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1465;
$tmp1465 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1465->value = $tmp1464;
ITable* $tmp1466 = ((frost$core$Equatable*) $tmp1460)->$class->itable;
while ($tmp1466->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1466 = $tmp1466->next;
}
$fn1468 $tmp1467 = $tmp1466->methods[0];
frost$core$Bit $tmp1469 = $tmp1467(((frost$core$Equatable*) $tmp1460), ((frost$core$Equatable*) $tmp1465));
bool $tmp1470 = $tmp1469.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1465)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1460)));
if ($tmp1470) goto block5; else goto block7;
block7:;
org$frostlang$frostc$Type$Kind* $tmp1471 = &$tmp1431->typeKind;
org$frostlang$frostc$Type$Kind $tmp1472 = *$tmp1471;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1473;
$tmp1473 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1473->value = $tmp1472;
frost$core$Int64 $tmp1474 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:662:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1475 = &(&local9)->$rawValue;
*$tmp1475 = $tmp1474;
org$frostlang$frostc$Type$Kind $tmp1476 = *(&local9);
*(&local8) = $tmp1476;
org$frostlang$frostc$Type$Kind $tmp1477 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1478;
$tmp1478 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1478->value = $tmp1477;
ITable* $tmp1479 = ((frost$core$Equatable*) $tmp1473)->$class->itable;
while ($tmp1479->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1479 = $tmp1479->next;
}
$fn1481 $tmp1480 = $tmp1479->methods[0];
frost$core$Bit $tmp1482 = $tmp1480(((frost$core$Equatable*) $tmp1473), ((frost$core$Equatable*) $tmp1478));
bool $tmp1483 = $tmp1482.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1478)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1473)));
if ($tmp1483) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp1484 = (frost$core$Int64) {663};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1485, $tmp1484, &$s1486);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:664
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1487 = &$tmp1431->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1488 = *$tmp1487;
frost$core$Bit $tmp1489 = frost$core$Bit$init$builtin_bit($tmp1488 != NULL);
bool $tmp1490 = $tmp1489.value;
if ($tmp1490) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp1491 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1492, $tmp1491);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1493 = &$tmp1431->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1494 = *$tmp1493;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1495 = &$tmp1431->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1496 = *$tmp1495;
frost$core$Bit $tmp1497 = frost$core$Bit$init$builtin_bit($tmp1496 != NULL);
bool $tmp1498 = $tmp1497.value;
if ($tmp1498) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp1499 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1500, $tmp1499);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1501 = &$tmp1431->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1502 = *$tmp1501;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
ITable* $tmp1503 = ((frost$collections$CollectionView*) $tmp1502)->$class->itable;
while ($tmp1503->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1503 = $tmp1503->next;
}
$fn1505 $tmp1504 = $tmp1503->methods[0];
frost$core$Int64 $tmp1506 = $tmp1504(((frost$collections$CollectionView*) $tmp1502));
frost$core$Int64 $tmp1507 = (frost$core$Int64) {1};
int64_t $tmp1508 = $tmp1506.value;
int64_t $tmp1509 = $tmp1507.value;
int64_t $tmp1510 = $tmp1508 - $tmp1509;
frost$core$Int64 $tmp1511 = (frost$core$Int64) {$tmp1510};
frost$core$Object* $tmp1512 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1494, $tmp1511);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1512)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1512);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1512)));
org$frostlang$frostc$Type* $tmp1513 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1512);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1512)));
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:218
// begin inline call to method org.frostlang.frostc.Type.Any():org.frostlang.frostc.Type from Closure.frost:218:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1514 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1514);
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1514));
frost$collections$Array* $tmp1515 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
*(&local10) = $tmp1514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1514));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:274
frost$collections$Array* $tmp1516 = *(&local10);
// begin inline call to method org.frostlang.frostc.Type.Object():org.frostlang.frostc.Type from Type.frost:274:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:268
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1517 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1518 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1519 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1518);
org$frostlang$frostc$Position $tmp1520 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1521 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1517, &$s1522, $tmp1519, $tmp1520, $tmp1521);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
frost$collections$Array$add$frost$collections$Array$T($tmp1516, ((frost$core$Object*) $tmp1517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:275
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1523 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1524 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:275:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1525 = &(&local12)->$rawValue;
*$tmp1525 = $tmp1524;
org$frostlang$frostc$Type$Kind $tmp1526 = *(&local12);
*(&local11) = $tmp1526;
org$frostlang$frostc$Type$Kind $tmp1527 = *(&local11);
org$frostlang$frostc$Position $tmp1528 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp1529 = *(&local10);
frost$core$Bit $tmp1530 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp1523, &$s1531, $tmp1527, $tmp1528, ((frost$collections$ListView*) $tmp1529), $tmp1530);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
frost$collections$Array* $tmp1532 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
org$frostlang$frostc$Type* $tmp1533 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
*(&local0) = $tmp1523;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:219
frost$core$Int64* $tmp1534 = &param4->$rawValue;
frost$core$Int64 $tmp1535 = *$tmp1534;
frost$core$Int64 $tmp1536 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:220:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1537 = $tmp1535.value;
int64_t $tmp1538 = $tmp1536.value;
bool $tmp1539 = $tmp1537 == $tmp1538;
frost$core$Bit $tmp1540 = frost$core$Bit$init$builtin_bit($tmp1539);
bool $tmp1541 = $tmp1540.value;
if ($tmp1541) goto block24; else goto block23;
block24:;
org$frostlang$frostc$Type** $tmp1542 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp1543 = *$tmp1542;
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
org$frostlang$frostc$Type* $tmp1544 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
*(&local13) = $tmp1543;
frost$core$Bit* $tmp1545 = (frost$core$Bit*) (param4->$data + 8);
frost$core$Bit $tmp1546 = *$tmp1545;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:221
org$frostlang$frostc$Type* $tmp1547 = *(&local13);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:221:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp1548 = &$tmp1547->typeKind;
org$frostlang$frostc$Type$Kind $tmp1549 = *$tmp1548;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1550;
$tmp1550 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1550->value = $tmp1549;
frost$core$Int64 $tmp1551 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1552 = &(&local16)->$rawValue;
*$tmp1552 = $tmp1551;
org$frostlang$frostc$Type$Kind $tmp1553 = *(&local16);
*(&local15) = $tmp1553;
org$frostlang$frostc$Type$Kind $tmp1554 = *(&local15);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1555;
$tmp1555 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1555->value = $tmp1554;
ITable* $tmp1556 = ((frost$core$Equatable*) $tmp1550)->$class->itable;
while ($tmp1556->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1556 = $tmp1556->next;
}
$fn1558 $tmp1557 = $tmp1556->methods[1];
frost$core$Bit $tmp1559 = $tmp1557(((frost$core$Equatable*) $tmp1550), ((frost$core$Equatable*) $tmp1555));
bool $tmp1560 = $tmp1559.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1555)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1550)));
if ($tmp1560) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
*(&local14) = $tmp1547;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
goto block28;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1561 = &$tmp1547->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1562 = *$tmp1561;
frost$core$Bit $tmp1563 = frost$core$Bit$init$builtin_bit($tmp1562 != NULL);
bool $tmp1564 = $tmp1563.value;
if ($tmp1564) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp1565 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1566, $tmp1565);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1567 = &$tmp1547->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1568 = *$tmp1567;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
frost$core$Int64 $tmp1569 = (frost$core$Int64) {0};
frost$core$Object* $tmp1570 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1568, $tmp1569);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1570)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1570);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
*(&local14) = ((org$frostlang$frostc$Type*) $tmp1570);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1570)));
goto block28;
block28:;
org$frostlang$frostc$Type* $tmp1571 = *(&local14);
// begin inline call to function org.frostlang.frostc.Type.get_isMethod():frost.core.Bit from Closure.frost:221:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:607
org$frostlang$frostc$Type$Kind* $tmp1572 = &$tmp1571->typeKind;
org$frostlang$frostc$Type$Kind $tmp1573 = *$tmp1572;
frost$core$Int64 $tmp1574 = $tmp1573.$rawValue;
frost$core$Int64 $tmp1575 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:608:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1576 = $tmp1574.value;
int64_t $tmp1577 = $tmp1575.value;
bool $tmp1578 = $tmp1576 == $tmp1577;
frost$core$Bit $tmp1579 = frost$core$Bit$init$builtin_bit($tmp1578);
bool $tmp1580 = $tmp1579.value;
if ($tmp1580) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp1581 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:608:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1582 = $tmp1574.value;
int64_t $tmp1583 = $tmp1581.value;
bool $tmp1584 = $tmp1582 == $tmp1583;
frost$core$Bit $tmp1585 = frost$core$Bit$init$builtin_bit($tmp1584);
bool $tmp1586 = $tmp1585.value;
if ($tmp1586) goto block37; else goto block40;
block40:;
frost$core$Int64 $tmp1587 = (frost$core$Int64) {18};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:608:50
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1588 = $tmp1574.value;
int64_t $tmp1589 = $tmp1587.value;
bool $tmp1590 = $tmp1588 == $tmp1589;
frost$core$Bit $tmp1591 = frost$core$Bit$init$builtin_bit($tmp1590);
bool $tmp1592 = $tmp1591.value;
if ($tmp1592) goto block37; else goto block42;
block42:;
frost$core$Int64 $tmp1593 = (frost$core$Int64) {17};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:608:73
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1594 = $tmp1574.value;
int64_t $tmp1595 = $tmp1593.value;
bool $tmp1596 = $tmp1594 == $tmp1595;
frost$core$Bit $tmp1597 = frost$core$Bit$init$builtin_bit($tmp1596);
bool $tmp1598 = $tmp1597.value;
if ($tmp1598) goto block37; else goto block44;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:609
frost$core$Bit $tmp1599 = frost$core$Bit$init$builtin_bit(true);
*(&local17) = $tmp1599;
goto block35;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:612
frost$core$Bit $tmp1600 = frost$core$Bit$init$builtin_bit(false);
*(&local17) = $tmp1600;
goto block35;
block36:;
goto block35;
block35:;
frost$core$Bit $tmp1601 = *(&local17);
bool $tmp1602 = $tmp1601.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
if ($tmp1602) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:222
org$frostlang$frostc$Type* $tmp1603 = *(&local13);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:222:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp1604 = &$tmp1603->typeKind;
org$frostlang$frostc$Type$Kind $tmp1605 = *$tmp1604;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1606;
$tmp1606 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1606->value = $tmp1605;
frost$core$Int64 $tmp1607 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1608 = &(&local20)->$rawValue;
*$tmp1608 = $tmp1607;
org$frostlang$frostc$Type$Kind $tmp1609 = *(&local20);
*(&local19) = $tmp1609;
org$frostlang$frostc$Type$Kind $tmp1610 = *(&local19);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1611;
$tmp1611 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1611->value = $tmp1610;
ITable* $tmp1612 = ((frost$core$Equatable*) $tmp1606)->$class->itable;
while ($tmp1612->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1612 = $tmp1612->next;
}
$fn1614 $tmp1613 = $tmp1612->methods[1];
frost$core$Bit $tmp1615 = $tmp1613(((frost$core$Equatable*) $tmp1606), ((frost$core$Equatable*) $tmp1611));
bool $tmp1616 = $tmp1615.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1611)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1606)));
if ($tmp1616) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
*(&local18) = $tmp1603;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
goto block46;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1617 = &$tmp1603->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1618 = *$tmp1617;
frost$core$Bit $tmp1619 = frost$core$Bit$init$builtin_bit($tmp1618 != NULL);
bool $tmp1620 = $tmp1619.value;
if ($tmp1620) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp1621 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1622, $tmp1621);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1623 = &$tmp1603->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1624 = *$tmp1623;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
frost$core$Int64 $tmp1625 = (frost$core$Int64) {0};
frost$core$Object* $tmp1626 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1624, $tmp1625);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1626)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1626);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
*(&local18) = ((org$frostlang$frostc$Type*) $tmp1626);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1626)));
goto block46;
block46:;
org$frostlang$frostc$Type* $tmp1627 = *(&local18);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:222:54
org$frostlang$frostc$Type$Kind* $tmp1628 = &$tmp1627->typeKind;
org$frostlang$frostc$Type$Kind $tmp1629 = *$tmp1628;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1630;
$tmp1630 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1630->value = $tmp1629;
frost$core$Int64 $tmp1631 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1632 = &(&local22)->$rawValue;
*$tmp1632 = $tmp1631;
org$frostlang$frostc$Type$Kind $tmp1633 = *(&local22);
*(&local21) = $tmp1633;
org$frostlang$frostc$Type$Kind $tmp1634 = *(&local21);
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
if ($tmp1640) goto block54; else goto block58;
block58:;
org$frostlang$frostc$Type$Kind* $tmp1641 = &$tmp1627->typeKind;
org$frostlang$frostc$Type$Kind $tmp1642 = *$tmp1641;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1643;
$tmp1643 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1643->value = $tmp1642;
frost$core$Int64 $tmp1644 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1645 = &(&local24)->$rawValue;
*$tmp1645 = $tmp1644;
org$frostlang$frostc$Type$Kind $tmp1646 = *(&local24);
*(&local23) = $tmp1646;
org$frostlang$frostc$Type$Kind $tmp1647 = *(&local23);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1648;
$tmp1648 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1648->value = $tmp1647;
ITable* $tmp1649 = ((frost$core$Equatable*) $tmp1643)->$class->itable;
while ($tmp1649->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1649 = $tmp1649->next;
}
$fn1651 $tmp1650 = $tmp1649->methods[0];
frost$core$Bit $tmp1652 = $tmp1650(((frost$core$Equatable*) $tmp1643), ((frost$core$Equatable*) $tmp1648));
bool $tmp1653 = $tmp1652.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1648)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1643)));
if ($tmp1653) goto block54; else goto block57;
block57:;
org$frostlang$frostc$Type$Kind* $tmp1654 = &$tmp1627->typeKind;
org$frostlang$frostc$Type$Kind $tmp1655 = *$tmp1654;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1656;
$tmp1656 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1656->value = $tmp1655;
frost$core$Int64 $tmp1657 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1658 = &(&local26)->$rawValue;
*$tmp1658 = $tmp1657;
org$frostlang$frostc$Type$Kind $tmp1659 = *(&local26);
*(&local25) = $tmp1659;
org$frostlang$frostc$Type$Kind $tmp1660 = *(&local25);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1661;
$tmp1661 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1661->value = $tmp1660;
ITable* $tmp1662 = ((frost$core$Equatable*) $tmp1656)->$class->itable;
while ($tmp1662->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1662 = $tmp1662->next;
}
$fn1664 $tmp1663 = $tmp1662->methods[0];
frost$core$Bit $tmp1665 = $tmp1663(((frost$core$Equatable*) $tmp1656), ((frost$core$Equatable*) $tmp1661));
bool $tmp1666 = $tmp1665.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1661)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1656)));
if ($tmp1666) goto block54; else goto block56;
block56:;
org$frostlang$frostc$Type$Kind* $tmp1667 = &$tmp1627->typeKind;
org$frostlang$frostc$Type$Kind $tmp1668 = *$tmp1667;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1669;
$tmp1669 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1669->value = $tmp1668;
frost$core$Int64 $tmp1670 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:662:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1671 = &(&local28)->$rawValue;
*$tmp1671 = $tmp1670;
org$frostlang$frostc$Type$Kind $tmp1672 = *(&local28);
*(&local27) = $tmp1672;
org$frostlang$frostc$Type$Kind $tmp1673 = *(&local27);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1674;
$tmp1674 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1674->value = $tmp1673;
ITable* $tmp1675 = ((frost$core$Equatable*) $tmp1669)->$class->itable;
while ($tmp1675->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1675 = $tmp1675->next;
}
$fn1677 $tmp1676 = $tmp1675->methods[0];
frost$core$Bit $tmp1678 = $tmp1676(((frost$core$Equatable*) $tmp1669), ((frost$core$Equatable*) $tmp1674));
bool $tmp1679 = $tmp1678.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1674)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1669)));
if ($tmp1679) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp1680 = (frost$core$Int64) {663};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1681, $tmp1680, &$s1682);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:664
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1683 = &$tmp1627->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1684 = *$tmp1683;
frost$core$Bit $tmp1685 = frost$core$Bit$init$builtin_bit($tmp1684 != NULL);
bool $tmp1686 = $tmp1685.value;
if ($tmp1686) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp1687 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1688, $tmp1687);
abort(); // unreachable
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1689 = &$tmp1627->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1690 = *$tmp1689;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1690));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1691 = &$tmp1627->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1692 = *$tmp1691;
frost$core$Bit $tmp1693 = frost$core$Bit$init$builtin_bit($tmp1692 != NULL);
bool $tmp1694 = $tmp1693.value;
if ($tmp1694) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp1695 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1696, $tmp1695);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1697 = &$tmp1627->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1698 = *$tmp1697;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1698));
ITable* $tmp1699 = ((frost$collections$CollectionView*) $tmp1698)->$class->itable;
while ($tmp1699->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1699 = $tmp1699->next;
}
$fn1701 $tmp1700 = $tmp1699->methods[0];
frost$core$Int64 $tmp1702 = $tmp1700(((frost$collections$CollectionView*) $tmp1698));
frost$core$Int64 $tmp1703 = (frost$core$Int64) {1};
int64_t $tmp1704 = $tmp1702.value;
int64_t $tmp1705 = $tmp1703.value;
int64_t $tmp1706 = $tmp1704 - $tmp1705;
frost$core$Int64 $tmp1707 = (frost$core$Int64) {$tmp1706};
frost$core$Object* $tmp1708 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1690, $tmp1707);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1708)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1708);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1690));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1708)));
org$frostlang$frostc$Type* $tmp1709 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1708);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1708)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
org$frostlang$frostc$Type* $tmp1710 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
goto block27;
block27:;
org$frostlang$frostc$Type* $tmp1711 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1711));
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1712 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1712));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
goto block23;
block23:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:227
frost$core$Int64 $tmp1713 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:227:59
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp1714 = &(&local30)->$rawValue;
*$tmp1714 = $tmp1713;
org$frostlang$frostc$MethodDecl$Kind $tmp1715 = *(&local30);
*(&local29) = $tmp1715;
org$frostlang$frostc$MethodDecl$Kind $tmp1716 = *(&local29);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1717 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1718 = (frost$core$Int64) {26};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1719 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1720 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp1721 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1719, $tmp1720, $tmp1721);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1717, $tmp1718, param1, $tmp1719);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1722 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1723 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1722, $tmp1723);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1724 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1725 = (frost$core$Int64) {38};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp1724, $tmp1725, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp1722, ((frost$core$Object*) $tmp1724));
org$frostlang$frostc$IR$Value* $tmp1726 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1716, param2, $tmp1717, ((org$frostlang$frostc$FixedArray*) $tmp1722), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
org$frostlang$frostc$Type* $tmp1727 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1728 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1726;

}
frost$core$Bit org$frostlang$frostc$expression$Closure$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:271
frost$core$String** $tmp1729 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1730 = *$tmp1729;
frost$core$String** $tmp1731 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp1732 = *$tmp1731;
frost$core$Bit $tmp1733 = frost$core$String$$GT$frost$core$String$R$frost$core$Bit($tmp1730, $tmp1732);
return $tmp1733;

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
frost$core$Int64* $tmp1734 = &param4->$rawValue;
frost$core$Int64 $tmp1735 = *$tmp1734;
frost$core$Int64 $tmp1736 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:237:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1737 = $tmp1735.value;
int64_t $tmp1738 = $tmp1736.value;
bool $tmp1739 = $tmp1737 == $tmp1738;
frost$core$Bit $tmp1740 = frost$core$Bit$init$builtin_bit($tmp1739);
bool $tmp1741 = $tmp1740.value;
if ($tmp1741) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Type** $tmp1742 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp1743 = *$tmp1742;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1743));
org$frostlang$frostc$Type* $tmp1744 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
*(&local0) = $tmp1743;
frost$core$Bit* $tmp1745 = (frost$core$Bit*) (param4->$data + 8);
frost$core$Bit $tmp1746 = *$tmp1745;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:238
org$frostlang$frostc$Type* $tmp1747 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:238:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp1748 = &$tmp1747->typeKind;
org$frostlang$frostc$Type$Kind $tmp1749 = *$tmp1748;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1750;
$tmp1750 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1750->value = $tmp1749;
frost$core$Int64 $tmp1751 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1752 = &(&local3)->$rawValue;
*$tmp1752 = $tmp1751;
org$frostlang$frostc$Type$Kind $tmp1753 = *(&local3);
*(&local2) = $tmp1753;
org$frostlang$frostc$Type$Kind $tmp1754 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1755;
$tmp1755 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1755->value = $tmp1754;
ITable* $tmp1756 = ((frost$core$Equatable*) $tmp1750)->$class->itable;
while ($tmp1756->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1756 = $tmp1756->next;
}
$fn1758 $tmp1757 = $tmp1756->methods[1];
frost$core$Bit $tmp1759 = $tmp1757(((frost$core$Equatable*) $tmp1750), ((frost$core$Equatable*) $tmp1755));
bool $tmp1760 = $tmp1759.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1755)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1750)));
if ($tmp1760) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
*(&local1) = $tmp1747;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1761 = &$tmp1747->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1762 = *$tmp1761;
frost$core$Bit $tmp1763 = frost$core$Bit$init$builtin_bit($tmp1762 != NULL);
bool $tmp1764 = $tmp1763.value;
if ($tmp1764) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1765 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1766, $tmp1765);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1767 = &$tmp1747->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1768 = *$tmp1767;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
frost$core$Int64 $tmp1769 = (frost$core$Int64) {0};
frost$core$Object* $tmp1770 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1768, $tmp1769);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1770)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1770);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp1770);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1770)));
goto block4;
block4:;
org$frostlang$frostc$Type* $tmp1771 = *(&local1);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
org$frostlang$frostc$Type* $tmp1772 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
*(&local4) = $tmp1771;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:239
org$frostlang$frostc$Type* $tmp1773 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_isMethod():frost.core.Bit from Closure.frost:239:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:607
org$frostlang$frostc$Type$Kind* $tmp1774 = &$tmp1773->typeKind;
org$frostlang$frostc$Type$Kind $tmp1775 = *$tmp1774;
frost$core$Int64 $tmp1776 = $tmp1775.$rawValue;
frost$core$Int64 $tmp1777 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:608:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1778 = $tmp1776.value;
int64_t $tmp1779 = $tmp1777.value;
bool $tmp1780 = $tmp1778 == $tmp1779;
frost$core$Bit $tmp1781 = frost$core$Bit$init$builtin_bit($tmp1780);
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp1783 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:608:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1784 = $tmp1776.value;
int64_t $tmp1785 = $tmp1783.value;
bool $tmp1786 = $tmp1784 == $tmp1785;
frost$core$Bit $tmp1787 = frost$core$Bit$init$builtin_bit($tmp1786);
bool $tmp1788 = $tmp1787.value;
if ($tmp1788) goto block15; else goto block18;
block18:;
frost$core$Int64 $tmp1789 = (frost$core$Int64) {18};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:608:50
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1790 = $tmp1776.value;
int64_t $tmp1791 = $tmp1789.value;
bool $tmp1792 = $tmp1790 == $tmp1791;
frost$core$Bit $tmp1793 = frost$core$Bit$init$builtin_bit($tmp1792);
bool $tmp1794 = $tmp1793.value;
if ($tmp1794) goto block15; else goto block20;
block20:;
frost$core$Int64 $tmp1795 = (frost$core$Int64) {17};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:608:73
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1796 = $tmp1776.value;
int64_t $tmp1797 = $tmp1795.value;
bool $tmp1798 = $tmp1796 == $tmp1797;
frost$core$Bit $tmp1799 = frost$core$Bit$init$builtin_bit($tmp1798);
bool $tmp1800 = $tmp1799.value;
if ($tmp1800) goto block15; else goto block22;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:609
frost$core$Bit $tmp1801 = frost$core$Bit$init$builtin_bit(true);
*(&local5) = $tmp1801;
goto block13;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:612
frost$core$Bit $tmp1802 = frost$core$Bit$init$builtin_bit(false);
*(&local5) = $tmp1802;
goto block13;
block14:;
goto block13;
block13:;
frost$core$Bit $tmp1803 = *(&local5);
bool $tmp1804 = $tmp1803.value;
if ($tmp1804) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:240
ITable* $tmp1805 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp1805->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1805 = $tmp1805->next;
}
$fn1807 $tmp1806 = $tmp1805->methods[0];
frost$core$Int64 $tmp1808 = $tmp1806(((frost$collections$CollectionView*) param2));
org$frostlang$frostc$Type* $tmp1809 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_parameterCount():frost.core.Int64 from Closure.frost:240:57
org$frostlang$frostc$Type$Kind* $tmp1810 = &$tmp1809->typeKind;
org$frostlang$frostc$Type$Kind $tmp1811 = *$tmp1810;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1812;
$tmp1812 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1812->value = $tmp1811;
frost$core$Int64 $tmp1813 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:649:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1814 = &(&local7)->$rawValue;
*$tmp1814 = $tmp1813;
org$frostlang$frostc$Type$Kind $tmp1815 = *(&local7);
*(&local6) = $tmp1815;
org$frostlang$frostc$Type$Kind $tmp1816 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1817;
$tmp1817 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1817->value = $tmp1816;
ITable* $tmp1818 = ((frost$core$Equatable*) $tmp1812)->$class->itable;
while ($tmp1818->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1818 = $tmp1818->next;
}
$fn1820 $tmp1819 = $tmp1818->methods[0];
frost$core$Bit $tmp1821 = $tmp1819(((frost$core$Equatable*) $tmp1812), ((frost$core$Equatable*) $tmp1817));
bool $tmp1822 = $tmp1821.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1817)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1812)));
if ($tmp1822) goto block27; else goto block31;
block31:;
org$frostlang$frostc$Type$Kind* $tmp1823 = &$tmp1809->typeKind;
org$frostlang$frostc$Type$Kind $tmp1824 = *$tmp1823;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1825;
$tmp1825 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1825->value = $tmp1824;
frost$core$Int64 $tmp1826 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:649:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1827 = &(&local9)->$rawValue;
*$tmp1827 = $tmp1826;
org$frostlang$frostc$Type$Kind $tmp1828 = *(&local9);
*(&local8) = $tmp1828;
org$frostlang$frostc$Type$Kind $tmp1829 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1830;
$tmp1830 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1830->value = $tmp1829;
ITable* $tmp1831 = ((frost$core$Equatable*) $tmp1825)->$class->itable;
while ($tmp1831->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1831 = $tmp1831->next;
}
$fn1833 $tmp1832 = $tmp1831->methods[0];
frost$core$Bit $tmp1834 = $tmp1832(((frost$core$Equatable*) $tmp1825), ((frost$core$Equatable*) $tmp1830));
bool $tmp1835 = $tmp1834.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1830)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1825)));
if ($tmp1835) goto block27; else goto block30;
block30:;
org$frostlang$frostc$Type$Kind* $tmp1836 = &$tmp1809->typeKind;
org$frostlang$frostc$Type$Kind $tmp1837 = *$tmp1836;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1838;
$tmp1838 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1838->value = $tmp1837;
frost$core$Int64 $tmp1839 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:649:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1840 = &(&local11)->$rawValue;
*$tmp1840 = $tmp1839;
org$frostlang$frostc$Type$Kind $tmp1841 = *(&local11);
*(&local10) = $tmp1841;
org$frostlang$frostc$Type$Kind $tmp1842 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1843;
$tmp1843 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1843->value = $tmp1842;
ITable* $tmp1844 = ((frost$core$Equatable*) $tmp1838)->$class->itable;
while ($tmp1844->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1844 = $tmp1844->next;
}
$fn1846 $tmp1845 = $tmp1844->methods[0];
frost$core$Bit $tmp1847 = $tmp1845(((frost$core$Equatable*) $tmp1838), ((frost$core$Equatable*) $tmp1843));
bool $tmp1848 = $tmp1847.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1843)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1838)));
if ($tmp1848) goto block27; else goto block29;
block29:;
org$frostlang$frostc$Type$Kind* $tmp1849 = &$tmp1809->typeKind;
org$frostlang$frostc$Type$Kind $tmp1850 = *$tmp1849;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1851;
$tmp1851 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1851->value = $tmp1850;
frost$core$Int64 $tmp1852 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:650:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1853 = &(&local13)->$rawValue;
*$tmp1853 = $tmp1852;
org$frostlang$frostc$Type$Kind $tmp1854 = *(&local13);
*(&local12) = $tmp1854;
org$frostlang$frostc$Type$Kind $tmp1855 = *(&local12);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1856;
$tmp1856 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1856->value = $tmp1855;
ITable* $tmp1857 = ((frost$core$Equatable*) $tmp1851)->$class->itable;
while ($tmp1857->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1857 = $tmp1857->next;
}
$fn1859 $tmp1858 = $tmp1857->methods[0];
frost$core$Bit $tmp1860 = $tmp1858(((frost$core$Equatable*) $tmp1851), ((frost$core$Equatable*) $tmp1856));
bool $tmp1861 = $tmp1860.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1856)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1851)));
if ($tmp1861) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp1862 = (frost$core$Int64) {651};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1863, $tmp1862, &$s1864);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:652
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:652:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1865 = &$tmp1809->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1866 = *$tmp1865;
frost$core$Bit $tmp1867 = frost$core$Bit$init$builtin_bit($tmp1866 != NULL);
bool $tmp1868 = $tmp1867.value;
if ($tmp1868) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp1869 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1870, $tmp1869);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1871 = &$tmp1809->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1872 = *$tmp1871;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
ITable* $tmp1873 = ((frost$collections$CollectionView*) $tmp1872)->$class->itable;
while ($tmp1873->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1873 = $tmp1873->next;
}
$fn1875 $tmp1874 = $tmp1873->methods[0];
frost$core$Int64 $tmp1876 = $tmp1874(((frost$collections$CollectionView*) $tmp1872));
frost$core$Int64 $tmp1877 = (frost$core$Int64) {1};
int64_t $tmp1878 = $tmp1876.value;
int64_t $tmp1879 = $tmp1877.value;
int64_t $tmp1880 = $tmp1878 - $tmp1879;
frost$core$Int64 $tmp1881 = (frost$core$Int64) {$tmp1880};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
int64_t $tmp1882 = $tmp1808.value;
int64_t $tmp1883 = $tmp1881.value;
bool $tmp1884 = $tmp1882 != $tmp1883;
frost$core$Bit $tmp1885 = (frost$core$Bit) {$tmp1884};
bool $tmp1886 = $tmp1885.value;
if ($tmp1886) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:241
org$frostlang$frostc$Type* $tmp1887 = *(&local0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:241:50
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1889 $tmp1888 = ($fn1889) ((frost$core$Object*) $tmp1887)->$class->vtable[0];
frost$core$String* $tmp1890 = $tmp1888(((frost$core$Object*) $tmp1887));
frost$core$String* $tmp1891 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1892, $tmp1890);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
frost$core$String* $tmp1893 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1891, &$s1894);
frost$core$String* $tmp1895 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1893, &$s1896);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1895);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:243
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1897 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1898 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1898));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1899 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:245
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1900 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1900);
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
frost$collections$Array* $tmp1901 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
*(&local14) = $tmp1900;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:246
frost$core$Int64 $tmp1902 = (frost$core$Int64) {0};
ITable* $tmp1903 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp1903->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1903 = $tmp1903->next;
}
$fn1905 $tmp1904 = $tmp1903->methods[0];
frost$core$Int64 $tmp1906 = $tmp1904(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp1907 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1908 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1902, $tmp1906, $tmp1907);
frost$core$Int64 $tmp1909 = $tmp1908.min;
*(&local15) = $tmp1909;
frost$core$Int64 $tmp1910 = $tmp1908.max;
frost$core$Bit $tmp1911 = $tmp1908.inclusive;
bool $tmp1912 = $tmp1911.value;
frost$core$Int64 $tmp1913 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1914 = $tmp1913.value;
frost$core$UInt64 $tmp1915 = (frost$core$UInt64) {((uint64_t) $tmp1914)};
if ($tmp1912) goto block44; else goto block45;
block44:;
int64_t $tmp1916 = $tmp1909.value;
int64_t $tmp1917 = $tmp1910.value;
bool $tmp1918 = $tmp1916 <= $tmp1917;
frost$core$Bit $tmp1919 = (frost$core$Bit) {$tmp1918};
bool $tmp1920 = $tmp1919.value;
if ($tmp1920) goto block41; else goto block42;
block45:;
int64_t $tmp1921 = $tmp1909.value;
int64_t $tmp1922 = $tmp1910.value;
bool $tmp1923 = $tmp1921 < $tmp1922;
frost$core$Bit $tmp1924 = (frost$core$Bit) {$tmp1923};
bool $tmp1925 = $tmp1924.value;
if ($tmp1925) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:247
frost$core$Int64 $tmp1926 = *(&local15);
frost$core$Object* $tmp1927 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(param2, $tmp1926);
frost$core$Int64* $tmp1928 = &((org$frostlang$frostc$ASTNode*) $tmp1927)->$rawValue;
frost$core$Int64 $tmp1929 = *$tmp1928;
frost$core$Int64 $tmp1930 = (frost$core$Int64) {22};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:248:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1931 = $tmp1929.value;
int64_t $tmp1932 = $tmp1930.value;
bool $tmp1933 = $tmp1931 == $tmp1932;
frost$core$Bit $tmp1934 = frost$core$Bit$init$builtin_bit($tmp1933);
bool $tmp1935 = $tmp1934.value;
if ($tmp1935) goto block47; else goto block48;
block47:;
org$frostlang$frostc$Position* $tmp1936 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$ASTNode*) $tmp1927)->$data + 0);
org$frostlang$frostc$Position $tmp1937 = *$tmp1936;
*(&local16) = $tmp1937;
frost$core$String** $tmp1938 = (frost$core$String**) (((org$frostlang$frostc$ASTNode*) $tmp1927)->$data + 24);
frost$core$String* $tmp1939 = *$tmp1938;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
frost$core$String* $tmp1940 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
*(&local17) = $tmp1939;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:249
frost$collections$Array* $tmp1941 = *(&local14);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1942 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1943 = (frost$core$Int64) {34};
org$frostlang$frostc$Position $tmp1944 = *(&local16);
frost$core$String* $tmp1945 = *(&local17);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1946 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1947 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp1948 = *(&local16);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1949 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1950 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp1951 = *(&local4);
frost$core$Int64 $tmp1952 = *(&local15);
// begin inline call to function org.frostlang.frostc.Type.parameterType(i:frost.core.Int64):org.frostlang.frostc.Type from Closure.frost:251:83
org$frostlang$frostc$Type$Kind* $tmp1953 = &$tmp1951->typeKind;
org$frostlang$frostc$Type$Kind $tmp1954 = *$tmp1953;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1955;
$tmp1955 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1955->value = $tmp1954;
frost$core$Int64 $tmp1956 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:655:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1957 = &(&local19)->$rawValue;
*$tmp1957 = $tmp1956;
org$frostlang$frostc$Type$Kind $tmp1958 = *(&local19);
*(&local18) = $tmp1958;
org$frostlang$frostc$Type$Kind $tmp1959 = *(&local18);
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
if ($tmp1965) goto block54; else goto block57;
block57:;
org$frostlang$frostc$Type$Kind* $tmp1966 = &$tmp1951->typeKind;
org$frostlang$frostc$Type$Kind $tmp1967 = *$tmp1966;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1968;
$tmp1968 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1968->value = $tmp1967;
frost$core$Int64 $tmp1969 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:655:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1970 = &(&local21)->$rawValue;
*$tmp1970 = $tmp1969;
org$frostlang$frostc$Type$Kind $tmp1971 = *(&local21);
*(&local20) = $tmp1971;
org$frostlang$frostc$Type$Kind $tmp1972 = *(&local20);
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
if ($tmp1978) goto block54; else goto block56;
block56:;
org$frostlang$frostc$Type$Kind* $tmp1979 = &$tmp1951->typeKind;
org$frostlang$frostc$Type$Kind $tmp1980 = *$tmp1979;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1981;
$tmp1981 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1981->value = $tmp1980;
frost$core$Int64 $tmp1982 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:655:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1983 = &(&local23)->$rawValue;
*$tmp1983 = $tmp1982;
org$frostlang$frostc$Type$Kind $tmp1984 = *(&local23);
*(&local22) = $tmp1984;
org$frostlang$frostc$Type$Kind $tmp1985 = *(&local22);
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
if ($tmp1991) goto block54; else goto block55;
block55:;
org$frostlang$frostc$Type$Kind* $tmp1992 = &$tmp1951->typeKind;
org$frostlang$frostc$Type$Kind $tmp1993 = *$tmp1992;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1994;
$tmp1994 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1994->value = $tmp1993;
frost$core$Int64 $tmp1995 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:656:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1996 = &(&local25)->$rawValue;
*$tmp1996 = $tmp1995;
org$frostlang$frostc$Type$Kind $tmp1997 = *(&local25);
*(&local24) = $tmp1997;
org$frostlang$frostc$Type$Kind $tmp1998 = *(&local24);
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
if ($tmp2004) goto block54; else goto block52;
block54:;
frost$core$Int64 $tmp2005 = (frost$core$Int64) {0};
int64_t $tmp2006 = $tmp1952.value;
int64_t $tmp2007 = $tmp2005.value;
bool $tmp2008 = $tmp2006 >= $tmp2007;
frost$core$Bit $tmp2009 = (frost$core$Bit) {$tmp2008};
bool $tmp2010 = $tmp2009.value;
if ($tmp2010) goto block53; else goto block52;
block53:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:656:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2011 = &$tmp1951->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2012 = *$tmp2011;
frost$core$Bit $tmp2013 = frost$core$Bit$init$builtin_bit($tmp2012 != NULL);
bool $tmp2014 = $tmp2013.value;
if ($tmp2014) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp2015 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2016, $tmp2015);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2017 = &$tmp1951->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2018 = *$tmp2017;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
ITable* $tmp2019 = ((frost$collections$CollectionView*) $tmp2018)->$class->itable;
while ($tmp2019->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2019 = $tmp2019->next;
}
$fn2021 $tmp2020 = $tmp2019->methods[0];
frost$core$Int64 $tmp2022 = $tmp2020(((frost$collections$CollectionView*) $tmp2018));
frost$core$Int64 $tmp2023 = (frost$core$Int64) {1};
int64_t $tmp2024 = $tmp2022.value;
int64_t $tmp2025 = $tmp2023.value;
int64_t $tmp2026 = $tmp2024 - $tmp2025;
frost$core$Int64 $tmp2027 = (frost$core$Int64) {$tmp2026};
int64_t $tmp2028 = $tmp1952.value;
int64_t $tmp2029 = $tmp2027.value;
bool $tmp2030 = $tmp2028 < $tmp2029;
frost$core$Bit $tmp2031 = (frost$core$Bit) {$tmp2030};
bool $tmp2032 = $tmp2031.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
if ($tmp2032) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp2033 = (frost$core$Int64) {657};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2034, $tmp2033, &$s2035);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:658
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:658:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2036 = &$tmp1951->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2037 = *$tmp2036;
frost$core$Bit $tmp2038 = frost$core$Bit$init$builtin_bit($tmp2037 != NULL);
bool $tmp2039 = $tmp2038.value;
if ($tmp2039) goto block66; else goto block67;
block67:;
frost$core$Int64 $tmp2040 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2041, $tmp2040);
abort(); // unreachable
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2042 = &$tmp1951->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2043 = *$tmp2042;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
frost$core$Object* $tmp2044 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2043, $tmp1952);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2044)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2044);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1949, $tmp1950, ((org$frostlang$frostc$Type*) $tmp2044));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1946, $tmp1947, $tmp1948, $tmp1949);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp1942, $tmp1943, $tmp1944, $tmp1945, $tmp1946);
frost$collections$Array$add$frost$collections$Array$T($tmp1941, ((frost$core$Object*) $tmp1942));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2044)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1942));
frost$core$String* $tmp2045 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1927);
frost$core$Int64 $tmp2046 = *(&local15);
int64_t $tmp2047 = $tmp1910.value;
int64_t $tmp2048 = $tmp2046.value;
int64_t $tmp2049 = $tmp2047 - $tmp2048;
frost$core$Int64 $tmp2050 = (frost$core$Int64) {$tmp2049};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2051 = $tmp2050.value;
frost$core$UInt64 $tmp2052 = (frost$core$UInt64) {((uint64_t) $tmp2051)};
if ($tmp1912) goto block70; else goto block71;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:254
frost$core$Int64 $tmp2053 = (frost$core$Int64) {254};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2054, $tmp2053);
abort(); // unreachable
block70:;
uint64_t $tmp2055 = $tmp2052.value;
uint64_t $tmp2056 = $tmp1915.value;
bool $tmp2057 = $tmp2055 >= $tmp2056;
frost$core$Bit $tmp2058 = (frost$core$Bit) {$tmp2057};
bool $tmp2059 = $tmp2058.value;
if ($tmp2059) goto block68; else goto block42;
block71:;
uint64_t $tmp2060 = $tmp2052.value;
uint64_t $tmp2061 = $tmp1915.value;
bool $tmp2062 = $tmp2060 > $tmp2061;
frost$core$Bit $tmp2063 = (frost$core$Bit) {$tmp2062};
bool $tmp2064 = $tmp2063.value;
if ($tmp2064) goto block68; else goto block42;
block68:;
int64_t $tmp2065 = $tmp2046.value;
int64_t $tmp2066 = $tmp1913.value;
int64_t $tmp2067 = $tmp2065 + $tmp2066;
frost$core$Int64 $tmp2068 = (frost$core$Int64) {$tmp2067};
*(&local15) = $tmp2068;
goto block41;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:258
org$frostlang$frostc$Type* $tmp2069 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Closure.frost:258:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp2070 = &$tmp2069->typeKind;
org$frostlang$frostc$Type$Kind $tmp2071 = *$tmp2070;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2072;
$tmp2072 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2072->value = $tmp2071;
frost$core$Int64 $tmp2073 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2074 = &(&local28)->$rawValue;
*$tmp2074 = $tmp2073;
org$frostlang$frostc$Type$Kind $tmp2075 = *(&local28);
*(&local27) = $tmp2075;
org$frostlang$frostc$Type$Kind $tmp2076 = *(&local27);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2077;
$tmp2077 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2077->value = $tmp2076;
ITable* $tmp2078 = ((frost$core$Equatable*) $tmp2072)->$class->itable;
while ($tmp2078->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2078 = $tmp2078->next;
}
$fn2080 $tmp2079 = $tmp2078->methods[1];
frost$core$Bit $tmp2081 = $tmp2079(((frost$core$Equatable*) $tmp2072), ((frost$core$Equatable*) $tmp2077));
bool $tmp2082 = $tmp2081.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2077)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2072)));
if ($tmp2082) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
*(&local26) = $tmp2069;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
goto block72;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2083 = &$tmp2069->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2084 = *$tmp2083;
frost$core$Bit $tmp2085 = frost$core$Bit$init$builtin_bit($tmp2084 != NULL);
bool $tmp2086 = $tmp2085.value;
if ($tmp2086) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp2087 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2088, $tmp2087);
abort(); // unreachable
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2089 = &$tmp2069->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2090 = *$tmp2089;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
frost$core$Int64 $tmp2091 = (frost$core$Int64) {0};
frost$core$Object* $tmp2092 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2090, $tmp2091);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2092)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2092);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
*(&local26) = ((org$frostlang$frostc$Type*) $tmp2092);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2092)));
goto block72;
block72:;
org$frostlang$frostc$Type* $tmp2093 = *(&local26);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:258:54
org$frostlang$frostc$Type$Kind* $tmp2094 = &$tmp2093->typeKind;
org$frostlang$frostc$Type$Kind $tmp2095 = *$tmp2094;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2096;
$tmp2096 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2096->value = $tmp2095;
frost$core$Int64 $tmp2097 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2098 = &(&local30)->$rawValue;
*$tmp2098 = $tmp2097;
org$frostlang$frostc$Type$Kind $tmp2099 = *(&local30);
*(&local29) = $tmp2099;
org$frostlang$frostc$Type$Kind $tmp2100 = *(&local29);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2101;
$tmp2101 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2101->value = $tmp2100;
ITable* $tmp2102 = ((frost$core$Equatable*) $tmp2096)->$class->itable;
while ($tmp2102->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2102 = $tmp2102->next;
}
$fn2104 $tmp2103 = $tmp2102->methods[0];
frost$core$Bit $tmp2105 = $tmp2103(((frost$core$Equatable*) $tmp2096), ((frost$core$Equatable*) $tmp2101));
bool $tmp2106 = $tmp2105.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2101)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2096)));
if ($tmp2106) goto block80; else goto block84;
block84:;
org$frostlang$frostc$Type$Kind* $tmp2107 = &$tmp2093->typeKind;
org$frostlang$frostc$Type$Kind $tmp2108 = *$tmp2107;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2109;
$tmp2109 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2109->value = $tmp2108;
frost$core$Int64 $tmp2110 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2111 = &(&local32)->$rawValue;
*$tmp2111 = $tmp2110;
org$frostlang$frostc$Type$Kind $tmp2112 = *(&local32);
*(&local31) = $tmp2112;
org$frostlang$frostc$Type$Kind $tmp2113 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2114;
$tmp2114 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2114->value = $tmp2113;
ITable* $tmp2115 = ((frost$core$Equatable*) $tmp2109)->$class->itable;
while ($tmp2115->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2115 = $tmp2115->next;
}
$fn2117 $tmp2116 = $tmp2115->methods[0];
frost$core$Bit $tmp2118 = $tmp2116(((frost$core$Equatable*) $tmp2109), ((frost$core$Equatable*) $tmp2114));
bool $tmp2119 = $tmp2118.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2114)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2109)));
if ($tmp2119) goto block80; else goto block83;
block83:;
org$frostlang$frostc$Type$Kind* $tmp2120 = &$tmp2093->typeKind;
org$frostlang$frostc$Type$Kind $tmp2121 = *$tmp2120;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2122;
$tmp2122 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2122->value = $tmp2121;
frost$core$Int64 $tmp2123 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2124 = &(&local34)->$rawValue;
*$tmp2124 = $tmp2123;
org$frostlang$frostc$Type$Kind $tmp2125 = *(&local34);
*(&local33) = $tmp2125;
org$frostlang$frostc$Type$Kind $tmp2126 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2127;
$tmp2127 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2127->value = $tmp2126;
ITable* $tmp2128 = ((frost$core$Equatable*) $tmp2122)->$class->itable;
while ($tmp2128->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2128 = $tmp2128->next;
}
$fn2130 $tmp2129 = $tmp2128->methods[0];
frost$core$Bit $tmp2131 = $tmp2129(((frost$core$Equatable*) $tmp2122), ((frost$core$Equatable*) $tmp2127));
bool $tmp2132 = $tmp2131.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2127)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2122)));
if ($tmp2132) goto block80; else goto block82;
block82:;
org$frostlang$frostc$Type$Kind* $tmp2133 = &$tmp2093->typeKind;
org$frostlang$frostc$Type$Kind $tmp2134 = *$tmp2133;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2135;
$tmp2135 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2135->value = $tmp2134;
frost$core$Int64 $tmp2136 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:662:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2137 = &(&local36)->$rawValue;
*$tmp2137 = $tmp2136;
org$frostlang$frostc$Type$Kind $tmp2138 = *(&local36);
*(&local35) = $tmp2138;
org$frostlang$frostc$Type$Kind $tmp2139 = *(&local35);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2140;
$tmp2140 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2140->value = $tmp2139;
ITable* $tmp2141 = ((frost$core$Equatable*) $tmp2135)->$class->itable;
while ($tmp2141->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2141 = $tmp2141->next;
}
$fn2143 $tmp2142 = $tmp2141->methods[0];
frost$core$Bit $tmp2144 = $tmp2142(((frost$core$Equatable*) $tmp2135), ((frost$core$Equatable*) $tmp2140));
bool $tmp2145 = $tmp2144.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2140)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2135)));
if ($tmp2145) goto block80; else goto block81;
block81:;
frost$core$Int64 $tmp2146 = (frost$core$Int64) {663};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2147, $tmp2146, &$s2148);
abort(); // unreachable
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:664
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2149 = &$tmp2093->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2150 = *$tmp2149;
frost$core$Bit $tmp2151 = frost$core$Bit$init$builtin_bit($tmp2150 != NULL);
bool $tmp2152 = $tmp2151.value;
if ($tmp2152) goto block90; else goto block91;
block91:;
frost$core$Int64 $tmp2153 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2154, $tmp2153);
abort(); // unreachable
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2155 = &$tmp2093->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2156 = *$tmp2155;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2157 = &$tmp2093->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2158 = *$tmp2157;
frost$core$Bit $tmp2159 = frost$core$Bit$init$builtin_bit($tmp2158 != NULL);
bool $tmp2160 = $tmp2159.value;
if ($tmp2160) goto block93; else goto block94;
block94:;
frost$core$Int64 $tmp2161 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2162, $tmp2161);
abort(); // unreachable
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2163 = &$tmp2093->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2164 = *$tmp2163;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
ITable* $tmp2165 = ((frost$collections$CollectionView*) $tmp2164)->$class->itable;
while ($tmp2165->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2165 = $tmp2165->next;
}
$fn2167 $tmp2166 = $tmp2165->methods[0];
frost$core$Int64 $tmp2168 = $tmp2166(((frost$collections$CollectionView*) $tmp2164));
frost$core$Int64 $tmp2169 = (frost$core$Int64) {1};
int64_t $tmp2170 = $tmp2168.value;
int64_t $tmp2171 = $tmp2169.value;
int64_t $tmp2172 = $tmp2170 - $tmp2171;
frost$core$Int64 $tmp2173 = (frost$core$Int64) {$tmp2172};
frost$core$Object* $tmp2174 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2156, $tmp2173);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2174)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2174);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
*(&local37) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2174)));
org$frostlang$frostc$Type* $tmp2175 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
*(&local37) = ((org$frostlang$frostc$Type*) $tmp2174);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2174)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2093));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:259
frost$core$Int64 $tmp2176 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:259:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp2177 = &(&local39)->$rawValue;
*$tmp2177 = $tmp2176;
org$frostlang$frostc$MethodDecl$Kind $tmp2178 = *(&local39);
*(&local38) = $tmp2178;
org$frostlang$frostc$MethodDecl$Kind $tmp2179 = *(&local38);
frost$collections$Array* $tmp2180 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp2181 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2180);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2182 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2183 = (frost$core$Int64) {26};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2184 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2185 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp2186 = *(&local37);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp2184, $tmp2185, $tmp2186);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2182, $tmp2183, param1, $tmp2184);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2187 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2188 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp2187, $tmp2188);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2189 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2190 = (frost$core$Int64) {38};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp2189, $tmp2190, param1, param3);
frost$collections$Array$add$frost$collections$Array$T($tmp2187, ((frost$core$Object*) $tmp2189));
org$frostlang$frostc$FixedArray* $tmp2191 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2187);
org$frostlang$frostc$IR$Value* $tmp2192 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2179, $tmp2181, $tmp2182, $tmp2191, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
org$frostlang$frostc$Type* $tmp2193 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
*(&local37) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2194 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2195 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2196 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2197 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2198 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2198));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp2192;
block12:;
org$frostlang$frostc$Type* $tmp2199 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2200 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2201 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2201));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:267
frost$collections$IdentityMap** $tmp2202 = &param0->lambdaTypes;
frost$collections$IdentityMap* $tmp2203 = *$tmp2202;
frost$core$Object* $tmp2204 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp2203, ((frost$core$Object*) param3));
*(&local40) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp2204)));
frost$collections$HashSet* $tmp2205 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
*(&local40) = ((frost$collections$HashSet*) $tmp2204);
frost$core$Frost$unref$frost$core$Object$Q($tmp2204);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:268
frost$collections$HashSet* $tmp2206 = *(&local40);
frost$core$Bit $tmp2207 = frost$core$Bit$init$builtin_bit($tmp2206 != NULL);
bool $tmp2208 = $tmp2207.value;
if ($tmp2208) goto block96; else goto block97;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:269
frost$collections$HashSet* $tmp2209 = *(&local40);
ITable* $tmp2210 = ((frost$collections$CollectionView*) $tmp2209)->$class->itable;
while ($tmp2210->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2210 = $tmp2210->next;
}
$fn2212 $tmp2211 = $tmp2210->methods[0];
frost$core$Int64 $tmp2213 = $tmp2211(((frost$collections$CollectionView*) $tmp2209));
frost$core$Int64 $tmp2214 = (frost$core$Int64) {1};
int64_t $tmp2215 = $tmp2213.value;
int64_t $tmp2216 = $tmp2214.value;
bool $tmp2217 = $tmp2215 > $tmp2216;
frost$core$Bit $tmp2218 = (frost$core$Bit) {$tmp2217};
bool $tmp2219 = $tmp2218.value;
if ($tmp2219) goto block98; else goto block100;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:270
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2220 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$HashSet* $tmp2221 = *(&local40);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp2220, ((frost$collections$CollectionView*) $tmp2221));
*(&local41) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
frost$collections$Array* $tmp2222 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
*(&local41) = $tmp2220;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:271
frost$collections$Array* $tmp2223 = *(&local41);
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp2225 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Closure.frost:271:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp2226 = &$tmp2225->pointer;
*$tmp2226 = ((frost$core$Int8*) org$frostlang$frostc$expression$Closure$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp2227 = &$tmp2225->target;
frost$core$Immutable* $tmp2228 = *$tmp2227;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
frost$core$Immutable** $tmp2229 = &$tmp2225->target;
*$tmp2229 = ((frost$core$Immutable*) NULL);
ITable* $tmp2230 = ((frost$collections$ListView*) $tmp2223)->$class->itable;
while ($tmp2230->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2230 = $tmp2230->next;
}
$fn2232 $tmp2231 = $tmp2230->methods[13];
frost$collections$ListView* $tmp2233 = $tmp2231(((frost$collections$ListView*) $tmp2223), ((frost$core$MutableMethod*) $tmp2225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2225));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:272
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2234 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2234, &$s2235);
*(&local42) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
frost$core$MutableString* $tmp2236 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
*(&local42) = $tmp2234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:273
frost$threads$MessageQueue** $tmp2237 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2238 = *$tmp2237;
*(&local43) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2238));
frost$threads$MessageQueue* $tmp2239 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
*(&local43) = $tmp2238;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:274
frost$collections$Array* $tmp2240 = *(&local41);
ITable* $tmp2241 = ((frost$collections$Iterable*) $tmp2240)->$class->itable;
while ($tmp2241->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2241 = $tmp2241->next;
}
$fn2243 $tmp2242 = $tmp2241->methods[0];
frost$collections$Iterator* $tmp2244 = $tmp2242(((frost$collections$Iterable*) $tmp2240));
goto block102;
block102:;
ITable* $tmp2245 = $tmp2244->$class->itable;
while ($tmp2245->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2245 = $tmp2245->next;
}
$fn2247 $tmp2246 = $tmp2245->methods[0];
frost$core$Bit $tmp2248 = $tmp2246($tmp2244);
bool $tmp2249 = $tmp2248.value;
if ($tmp2249) goto block104; else goto block103;
block103:;
*(&local44) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp2250 = $tmp2244->$class->itable;
while ($tmp2250->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2250 = $tmp2250->next;
}
$fn2252 $tmp2251 = $tmp2250->methods[1];
frost$core$Object* $tmp2253 = $tmp2251($tmp2244);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2253)));
org$frostlang$frostc$Type* $tmp2254 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
*(&local44) = ((org$frostlang$frostc$Type*) $tmp2253);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:275
frost$core$MutableString* $tmp2255 = *(&local42);
org$frostlang$frostc$Type* $tmp2256 = *(&local44);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:275:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn2258 $tmp2257 = ($fn2258) ((frost$core$Object*) $tmp2256)->$class->vtable[0];
frost$core$String* $tmp2259 = $tmp2257(((frost$core$Object*) $tmp2256));
frost$core$String* $tmp2260 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2261, $tmp2259);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2259));
frost$core$String* $tmp2262 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2260, &$s2263);
frost$core$MutableString$append$frost$core$String($tmp2255, $tmp2262);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:276
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp2264 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp2264);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
frost$threads$MessageQueue** $tmp2265 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2266 = *$tmp2265;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
frost$threads$MessageQueue** $tmp2267 = &param0->errorQueue;
*$tmp2267 = $tmp2264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:277
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2268 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2269 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp2270 = *(&local44);
frost$core$Bit $tmp2271 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2268, $tmp2269, $tmp2270, $tmp2271);
org$frostlang$frostc$IR$Value* $tmp2272 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp2268);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2268));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:279
frost$threads$MessageQueue** $tmp2273 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2274 = *$tmp2273;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Closure.frost:279:58
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/threads/MessageQueue.stub:25
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int64 from MessageQueue.stub:25:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/threads/MessageQueue.stub:20
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp2275 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp2276 = &$tmp2274->lock;
frost$threads$Lock* $tmp2277 = *$tmp2276;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp2275, $tmp2277);
*(&local45) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
frost$threads$ScopedLock* $tmp2278 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2278));
*(&local45) = $tmp2275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/threads/MessageQueue.stub:21
frost$core$Int64* $tmp2279 = &$tmp2274->count;
frost$core$Int64 $tmp2280 = *$tmp2279;
frost$threads$ScopedLock* $tmp2281 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2281));
*(&local45) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int64 $tmp2282 = (frost$core$Int64) {0};
int64_t $tmp2283 = $tmp2280.value;
int64_t $tmp2284 = $tmp2282.value;
bool $tmp2285 = $tmp2283 > $tmp2284;
frost$core$Bit $tmp2286 = (frost$core$Bit) {$tmp2285};
bool $tmp2287 = $tmp2286.value;
if ($tmp2287) goto block108; else goto block109;
block109:;
frost$core$Int64 $tmp2288 = (frost$core$Int64) {279};
org$frostlang$frostc$Position$wrapper* $tmp2289;
$tmp2289 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp2289->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:280:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn2291 $tmp2290 = ($fn2291) ((frost$core$Object*) $tmp2289)->$class->vtable[0];
frost$core$String* $tmp2292 = $tmp2290(((frost$core$Object*) $tmp2289));
frost$core$String* $tmp2293 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2294, $tmp2292);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
frost$core$String* $tmp2295 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2293, &$s2296);
org$frostlang$frostc$Type* $tmp2297 = *(&local44);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:281:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn2299 $tmp2298 = ($fn2299) ((frost$core$Object*) $tmp2297)->$class->vtable[0];
frost$core$String* $tmp2300 = $tmp2298(((frost$core$Object*) $tmp2297));
frost$core$String* $tmp2301 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2302, $tmp2300);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
frost$core$String* $tmp2303 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2301, &$s2304);
frost$core$String* $tmp2305 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2295, $tmp2303);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2306, $tmp2288, $tmp2305);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2289));
abort(); // unreachable
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:282
goto block112;
block112:;
frost$threads$MessageQueue** $tmp2307 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2308 = *$tmp2307;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Closure.frost:282:57
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/threads/MessageQueue.stub:25
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int64 from MessageQueue.stub:25:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/threads/MessageQueue.stub:20
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp2309 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp2310 = &$tmp2308->lock;
frost$threads$Lock* $tmp2311 = *$tmp2310;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp2309, $tmp2311);
*(&local46) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
frost$threads$ScopedLock* $tmp2312 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2312));
*(&local46) = $tmp2309;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/threads/MessageQueue.stub:21
frost$core$Int64* $tmp2313 = &$tmp2308->count;
frost$core$Int64 $tmp2314 = *$tmp2313;
frost$threads$ScopedLock* $tmp2315 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
*(&local46) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int64 $tmp2316 = (frost$core$Int64) {0};
int64_t $tmp2317 = $tmp2314.value;
int64_t $tmp2318 = $tmp2316.value;
bool $tmp2319 = $tmp2317 > $tmp2318;
frost$core$Bit $tmp2320 = (frost$core$Bit) {$tmp2319};
bool $tmp2321 = $tmp2320.value;
if ($tmp2321) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:283
frost$threads$MessageQueue** $tmp2322 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2323 = *$tmp2322;
frost$core$Immutable* $tmp2324 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp2323);
frost$core$Int64* $tmp2325 = &((org$frostlang$frostc$Compiler$Message*) $tmp2324)->$rawValue;
frost$core$Int64 $tmp2326 = *$tmp2325;
frost$core$Int64 $tmp2327 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:284:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2328 = $tmp2326.value;
int64_t $tmp2329 = $tmp2327.value;
bool $tmp2330 = $tmp2328 == $tmp2329;
frost$core$Bit $tmp2331 = frost$core$Bit$init$builtin_bit($tmp2330);
bool $tmp2332 = $tmp2331.value;
if ($tmp2332) goto block118; else goto block119;
block118:;
frost$core$String** $tmp2333 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2324)->$data + 0);
frost$core$String* $tmp2334 = *$tmp2333;
frost$core$Int64* $tmp2335 = (frost$core$Int64*) (((org$frostlang$frostc$Compiler$Message*) $tmp2324)->$data + 8);
frost$core$Int64 $tmp2336 = *$tmp2335;
frost$core$Int64* $tmp2337 = (frost$core$Int64*) (((org$frostlang$frostc$Compiler$Message*) $tmp2324)->$data + 16);
frost$core$Int64 $tmp2338 = *$tmp2337;
frost$core$String** $tmp2339 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2324)->$data + 24);
frost$core$String* $tmp2340 = *$tmp2339;
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
frost$core$String* $tmp2341 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
*(&local47) = $tmp2340;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:285
frost$core$MutableString* $tmp2342 = *(&local42);
frost$core$String* $tmp2343 = *(&local47);
frost$core$String* $tmp2344 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2345, $tmp2343);
frost$core$String* $tmp2346 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2344, &$s2347);
frost$core$MutableString$append$frost$core$String($tmp2342, $tmp2346);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2344));
frost$core$String* $tmp2348 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2348));
*(&local47) = ((frost$core$String*) NULL);
goto block117;
block119:;
frost$core$Int64 $tmp2349 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:287:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2350 = $tmp2326.value;
int64_t $tmp2351 = $tmp2349.value;
bool $tmp2352 = $tmp2350 == $tmp2351;
frost$core$Bit $tmp2353 = frost$core$Bit$init$builtin_bit($tmp2352);
bool $tmp2354 = $tmp2353.value;
if ($tmp2354) goto block121; else goto block117;
block121:;
frost$core$String** $tmp2355 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2324)->$data + 0);
frost$core$String* $tmp2356 = *$tmp2355;
frost$core$Int64* $tmp2357 = (frost$core$Int64*) (((org$frostlang$frostc$Compiler$Message*) $tmp2324)->$data + 8);
frost$core$Int64 $tmp2358 = *$tmp2357;
frost$core$Int64* $tmp2359 = (frost$core$Int64*) (((org$frostlang$frostc$Compiler$Message*) $tmp2324)->$data + 16);
frost$core$Int64 $tmp2360 = *$tmp2359;
frost$core$String** $tmp2361 = (frost$core$String**) (((org$frostlang$frostc$Compiler$Message*) $tmp2324)->$data + 24);
frost$core$String* $tmp2362 = *$tmp2361;
*(&local48) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2362));
frost$core$String* $tmp2363 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
*(&local48) = $tmp2362;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:288
frost$core$MutableString* $tmp2364 = *(&local42);
frost$core$String* $tmp2365 = *(&local48);
frost$core$String* $tmp2366 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2367, $tmp2365);
frost$core$String* $tmp2368 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2366, &$s2369);
frost$core$MutableString$append$frost$core$String($tmp2364, $tmp2368);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2366));
frost$core$String* $tmp2370 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
*(&local48) = ((frost$core$String*) NULL);
goto block117;
block117:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
goto block112;
block114:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2253);
org$frostlang$frostc$Type* $tmp2371 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2371));
*(&local44) = ((org$frostlang$frostc$Type*) NULL);
goto block102;
block104:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:293
frost$threads$MessageQueue* $tmp2372 = *(&local43);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
frost$threads$MessageQueue** $tmp2373 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2374 = *$tmp2373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2374));
frost$threads$MessageQueue** $tmp2375 = &param0->errorQueue;
*$tmp2375 = $tmp2372;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:294
frost$core$MutableString* $tmp2376 = *(&local42);
frost$core$String* $tmp2377 = frost$core$MutableString$finish$R$frost$core$String($tmp2376);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2377);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:295
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$threads$MessageQueue* $tmp2378 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2378));
*(&local43) = ((frost$threads$MessageQueue*) NULL);
frost$core$MutableString* $tmp2379 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2379));
*(&local42) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp2380 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2380));
*(&local41) = ((frost$collections$Array*) NULL);
frost$collections$HashSet* $tmp2381 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2381));
*(&local40) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block100:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:298
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2382 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2383 = (frost$core$Int64) {3};
frost$collections$HashSet* $tmp2384 = *(&local40);
ITable* $tmp2385 = ((frost$collections$Iterable*) $tmp2384)->$class->itable;
while ($tmp2385->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2385 = $tmp2385->next;
}
$fn2387 $tmp2386 = $tmp2385->methods[0];
frost$collections$Iterator* $tmp2388 = $tmp2386(((frost$collections$Iterable*) $tmp2384));
ITable* $tmp2389 = $tmp2388->$class->itable;
while ($tmp2389->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2389 = $tmp2389->next;
}
$fn2391 $tmp2390 = $tmp2389->methods[1];
frost$core$Object* $tmp2392 = $tmp2390($tmp2388);
frost$core$Bit $tmp2393 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2382, $tmp2383, ((org$frostlang$frostc$Type*) $tmp2392), $tmp2393);
org$frostlang$frostc$IR$Value* $tmp2394 = org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, $tmp2382);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
frost$core$Frost$unref$frost$core$Object$Q($tmp2392);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2382));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:300
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp2395 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2395));
*(&local40) = ((frost$collections$HashSet*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block99:;
goto block97;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:303
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s2396);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:305
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$HashSet* $tmp2397 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
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
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$MethodDecl$Kind local9;
org$frostlang$frostc$MethodDecl$Kind local10;
org$frostlang$frostc$Pair* local11 = NULL;
org$frostlang$frostc$Annotations* local12 = NULL;
org$frostlang$frostc$MethodDecl* local13 = NULL;
frost$core$Bit local14;
frost$core$Bit local15;
frost$collections$Stack* local16 = NULL;
frost$core$Bit local17;
org$frostlang$frostc$ASTNode* local18 = NULL;
org$frostlang$frostc$ClassDecl* local19 = NULL;
frost$collections$Array* local20 = NULL;
org$frostlang$frostc$Compiler$Capture* local21 = NULL;
org$frostlang$frostc$Variable* local22 = NULL;
org$frostlang$frostc$FieldDecl* local23 = NULL;
org$frostlang$frostc$IR$Value* local24 = NULL;
frost$collections$Array* local25 = NULL;
org$frostlang$frostc$Type* local26 = NULL;
frost$collections$Array* local27 = NULL;
org$frostlang$frostc$Type$Kind local28;
org$frostlang$frostc$Type$Kind local29;
org$frostlang$frostc$Type* local30 = NULL;
org$frostlang$frostc$Type$Kind local31;
org$frostlang$frostc$Type$Kind local32;
frost$collections$Array* local33 = NULL;
org$frostlang$frostc$Type$Kind local34;
org$frostlang$frostc$Type$Kind local35;
org$frostlang$frostc$Type* local36 = NULL;
org$frostlang$frostc$Type* local37 = NULL;
org$frostlang$frostc$Type$Kind local38;
org$frostlang$frostc$Type$Kind local39;
org$frostlang$frostc$Type$Kind local40;
org$frostlang$frostc$Type$Kind local41;
org$frostlang$frostc$Type* local42 = NULL;
frost$collections$Array* local43 = NULL;
frost$core$Int64 local44;
org$frostlang$frostc$Type$Kind local45;
org$frostlang$frostc$Type$Kind local46;
org$frostlang$frostc$Type$Kind local47;
org$frostlang$frostc$Type$Kind local48;
org$frostlang$frostc$Type$Kind local49;
org$frostlang$frostc$Type$Kind local50;
org$frostlang$frostc$Type$Kind local51;
org$frostlang$frostc$Type$Kind local52;
org$frostlang$frostc$Type$Kind local53;
org$frostlang$frostc$Type$Kind local54;
org$frostlang$frostc$Type$Kind local55;
org$frostlang$frostc$Type$Kind local56;
org$frostlang$frostc$Type$Kind local57;
org$frostlang$frostc$Type$Kind local58;
org$frostlang$frostc$Type$Kind local59;
org$frostlang$frostc$Type$Kind local60;
org$frostlang$frostc$Type$Kind local61;
org$frostlang$frostc$Type$Kind local62;
org$frostlang$frostc$Type$Kind local63;
org$frostlang$frostc$Type$Kind local64;
org$frostlang$frostc$Type$Kind local65;
org$frostlang$frostc$IR$Value* local66 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:312
frost$core$Int64* $tmp2398 = &param0->closureCount;
frost$core$Int64 $tmp2399 = *$tmp2398;
frost$core$Int64 $tmp2400 = (frost$core$Int64) {1};
int64_t $tmp2401 = $tmp2399.value;
int64_t $tmp2402 = $tmp2400.value;
int64_t $tmp2403 = $tmp2401 + $tmp2402;
frost$core$Int64 $tmp2404 = (frost$core$Int64) {$tmp2403};
frost$core$Int64* $tmp2405 = &param0->closureCount;
*$tmp2405 = $tmp2404;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:313
frost$core$Int64* $tmp2406 = &param0->closureCount;
frost$core$Int64 $tmp2407 = *$tmp2406;
frost$core$Int64$wrapper* $tmp2408;
$tmp2408 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2408->value = $tmp2407;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Closure.frost:313:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn2410 $tmp2409 = ($fn2410) ((frost$core$Object*) $tmp2408)->$class->vtable[0];
frost$core$String* $tmp2411 = $tmp2409(((frost$core$Object*) $tmp2408));
frost$core$String* $tmp2412 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2413, $tmp2411);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
frost$core$String* $tmp2414 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2412, &$s2415);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2414));
frost$core$String* $tmp2416 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2416));
*(&local0) = $tmp2414;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:314
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2417 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2417);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2417));
frost$collections$Array* $tmp2418 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2418));
*(&local1) = $tmp2417;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2417));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:315
ITable* $tmp2419 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp2419->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2419 = $tmp2419->next;
}
$fn2421 $tmp2420 = $tmp2419->methods[0];
frost$collections$Iterator* $tmp2422 = $tmp2420(((frost$collections$Iterable*) param3));
goto block2;
block2:;
ITable* $tmp2423 = $tmp2422->$class->itable;
while ($tmp2423->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2423 = $tmp2423->next;
}
$fn2425 $tmp2424 = $tmp2423->methods[0];
frost$core$Bit $tmp2426 = $tmp2424($tmp2422);
bool $tmp2427 = $tmp2426.value;
if ($tmp2427) goto block4; else goto block3;
block3:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2428 = $tmp2422->$class->itable;
while ($tmp2428->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2428 = $tmp2428->next;
}
$fn2430 $tmp2429 = $tmp2428->methods[1];
frost$core$Object* $tmp2431 = $tmp2429($tmp2422);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2431)));
org$frostlang$frostc$ASTNode* $tmp2432 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp2431);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:316
org$frostlang$frostc$ASTNode* $tmp2433 = *(&local2);
frost$core$Int64* $tmp2434 = &$tmp2433->$rawValue;
frost$core$Int64 $tmp2435 = *$tmp2434;
frost$core$Int64 $tmp2436 = (frost$core$Int64) {34};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:317:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2437 = $tmp2435.value;
int64_t $tmp2438 = $tmp2436.value;
bool $tmp2439 = $tmp2437 == $tmp2438;
frost$core$Bit $tmp2440 = frost$core$Bit$init$builtin_bit($tmp2439);
bool $tmp2441 = $tmp2440.value;
if ($tmp2441) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp2442 = (org$frostlang$frostc$Position*) ($tmp2433->$data + 0);
org$frostlang$frostc$Position $tmp2443 = *$tmp2442;
frost$core$String** $tmp2444 = (frost$core$String**) ($tmp2433->$data + 24);
frost$core$String* $tmp2445 = *$tmp2444;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
frost$core$String* $tmp2446 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
*(&local3) = $tmp2445;
org$frostlang$frostc$ASTNode** $tmp2447 = (org$frostlang$frostc$ASTNode**) ($tmp2433->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2448 = *$tmp2447;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
org$frostlang$frostc$ASTNode* $tmp2449 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2449));
*(&local4) = $tmp2448;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:318
org$frostlang$frostc$Scanner** $tmp2450 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp2451 = *$tmp2450;
org$frostlang$frostc$ASTNode* $tmp2452 = *(&local4);
org$frostlang$frostc$Type* $tmp2453 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp2451, $tmp2452);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from Closure.frost:318:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:852
frost$core$Bit $tmp2454 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type* $tmp2455 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp2453, $tmp2454);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
org$frostlang$frostc$Type* $tmp2456 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2456));
*(&local5) = $tmp2455;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:319
org$frostlang$frostc$Type* $tmp2457 = *(&local5);
frost$core$Bit $tmp2458 = frost$core$Bit$init$builtin_bit($tmp2457 == NULL);
bool $tmp2459 = $tmp2458.value;
if ($tmp2459) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:320
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2460 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2461 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2462 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2431);
org$frostlang$frostc$ASTNode* $tmp2463 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
frost$collections$Array* $tmp2464 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2465 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2465));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:322
frost$collections$Array* $tmp2466 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp2467 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp2468 = *(&local3);
org$frostlang$frostc$Type* $tmp2469 = *(&local5);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp2467, $tmp2468, $tmp2469);
frost$collections$Array$add$frost$collections$Array$T($tmp2466, ((frost$core$Object*) $tmp2467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
org$frostlang$frostc$Type* $tmp2470 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2470));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2471 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2471));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2472 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2431);
org$frostlang$frostc$ASTNode* $tmp2473 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:325
frost$core$Int64 $tmp2474 = (frost$core$Int64) {325};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2475, $tmp2474);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:329
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:330
frost$core$Bit $tmp2476 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp2477 = $tmp2476.value;
if ($tmp2477) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:331
org$frostlang$frostc$Scanner** $tmp2478 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp2479 = *$tmp2478;
org$frostlang$frostc$Type* $tmp2480 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp2479, param4);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from Closure.frost:331:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:852
frost$core$Bit $tmp2481 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type* $tmp2482 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp2480, $tmp2481);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
org$frostlang$frostc$Type* $tmp2483 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
*(&local6) = $tmp2482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:332
org$frostlang$frostc$Type* $tmp2484 = *(&local6);
frost$core$Bit $tmp2485 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2486 = $tmp2485.value;
if ($tmp2486) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:333
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2487 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2488 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2488));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2489 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2489));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block17:;
goto block13;
block14:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:337
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Closure.frost:337:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2490 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2491 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2492 = &(&local8)->$rawValue;
*$tmp2492 = $tmp2491;
org$frostlang$frostc$Type$Kind $tmp2493 = *(&local8);
*(&local7) = $tmp2493;
org$frostlang$frostc$Type$Kind $tmp2494 = *(&local7);
org$frostlang$frostc$Position $tmp2495 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2496 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2490, &$s2497, $tmp2494, $tmp2495, $tmp2496);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2490));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2490));
org$frostlang$frostc$Type* $tmp2498 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
*(&local6) = $tmp2490;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2490));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:338
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2499;
$tmp2499 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2499->value = param2;
frost$core$Int64 $tmp2500 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Closure.frost:338:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp2501 = &(&local10)->$rawValue;
*$tmp2501 = $tmp2500;
org$frostlang$frostc$MethodDecl$Kind $tmp2502 = *(&local10);
*(&local9) = $tmp2502;
org$frostlang$frostc$MethodDecl$Kind $tmp2503 = *(&local9);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2504;
$tmp2504 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2504->value = $tmp2503;
ITable* $tmp2505 = ((frost$core$Equatable*) $tmp2499)->$class->itable;
while ($tmp2505->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2505 = $tmp2505->next;
}
$fn2507 $tmp2506 = $tmp2505->methods[0];
frost$core$Bit $tmp2508 = $tmp2506(((frost$core$Equatable*) $tmp2499), ((frost$core$Equatable*) $tmp2504));
bool $tmp2509 = $tmp2508.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2504)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2499)));
if ($tmp2509) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:339
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s2510);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:340
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2511 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2511));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2512 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2513 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2513));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block21:;
goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:343
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp2514 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Stack** $tmp2515 = &param0->currentMethod;
frost$collections$Stack* $tmp2516 = *$tmp2515;
frost$core$Int64 $tmp2517 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Closure.frost:343:94
frost$core$Int64 $tmp2518 = (frost$core$Int64) {0};
int64_t $tmp2519 = $tmp2517.value;
int64_t $tmp2520 = $tmp2518.value;
bool $tmp2521 = $tmp2519 >= $tmp2520;
frost$core$Bit $tmp2522 = (frost$core$Bit) {$tmp2521};
bool $tmp2523 = $tmp2522.value;
if ($tmp2523) goto block26; else goto block25;
block26:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp2524 = &$tmp2516->contents;
frost$collections$Array* $tmp2525 = *$tmp2524;
ITable* $tmp2526 = ((frost$collections$CollectionView*) $tmp2525)->$class->itable;
while ($tmp2526->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2526 = $tmp2526->next;
}
$fn2528 $tmp2527 = $tmp2526->methods[0];
frost$core$Int64 $tmp2529 = $tmp2527(((frost$collections$CollectionView*) $tmp2525));
int64_t $tmp2530 = $tmp2517.value;
int64_t $tmp2531 = $tmp2529.value;
bool $tmp2532 = $tmp2530 < $tmp2531;
frost$core$Bit $tmp2533 = (frost$core$Bit) {$tmp2532};
bool $tmp2534 = $tmp2533.value;
if ($tmp2534) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp2535 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2536, $tmp2535, &$s2537);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp2538 = &$tmp2516->contents;
frost$collections$Array* $tmp2539 = *$tmp2538;
ITable* $tmp2540 = ((frost$collections$CollectionView*) $tmp2539)->$class->itable;
while ($tmp2540->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2540 = $tmp2540->next;
}
$fn2542 $tmp2541 = $tmp2540->methods[0];
frost$core$Int64 $tmp2543 = $tmp2541(((frost$collections$CollectionView*) $tmp2539));
int64_t $tmp2544 = $tmp2543.value;
int64_t $tmp2545 = $tmp2517.value;
bool $tmp2546 = $tmp2544 > $tmp2545;
frost$core$Bit $tmp2547 = (frost$core$Bit) {$tmp2546};
bool $tmp2548 = $tmp2547.value;
if ($tmp2548) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp2549 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2550, $tmp2549);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp2551 = &$tmp2516->contents;
frost$collections$Array* $tmp2552 = *$tmp2551;
frost$collections$Array** $tmp2553 = &$tmp2516->contents;
frost$collections$Array* $tmp2554 = *$tmp2553;
ITable* $tmp2555 = ((frost$collections$CollectionView*) $tmp2554)->$class->itable;
while ($tmp2555->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2555 = $tmp2555->next;
}
$fn2557 $tmp2556 = $tmp2555->methods[0];
frost$core$Int64 $tmp2558 = $tmp2556(((frost$collections$CollectionView*) $tmp2554));
frost$core$Int64 $tmp2559 = (frost$core$Int64) {1};
int64_t $tmp2560 = $tmp2558.value;
int64_t $tmp2561 = $tmp2559.value;
int64_t $tmp2562 = $tmp2560 - $tmp2561;
frost$core$Int64 $tmp2563 = (frost$core$Int64) {$tmp2562};
int64_t $tmp2564 = $tmp2563.value;
int64_t $tmp2565 = $tmp2517.value;
int64_t $tmp2566 = $tmp2564 - $tmp2565;
frost$core$Int64 $tmp2567 = (frost$core$Int64) {$tmp2566};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp2568 = (frost$core$Int64) {0};
int64_t $tmp2569 = $tmp2567.value;
int64_t $tmp2570 = $tmp2568.value;
bool $tmp2571 = $tmp2569 >= $tmp2570;
frost$core$Bit $tmp2572 = (frost$core$Bit) {$tmp2571};
bool $tmp2573 = $tmp2572.value;
if ($tmp2573) goto block33; else goto block32;
block33:;
ITable* $tmp2574 = ((frost$collections$CollectionView*) $tmp2552)->$class->itable;
while ($tmp2574->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2574 = $tmp2574->next;
}
$fn2576 $tmp2575 = $tmp2574->methods[0];
frost$core$Int64 $tmp2577 = $tmp2575(((frost$collections$CollectionView*) $tmp2552));
int64_t $tmp2578 = $tmp2567.value;
int64_t $tmp2579 = $tmp2577.value;
bool $tmp2580 = $tmp2578 < $tmp2579;
frost$core$Bit $tmp2581 = (frost$core$Bit) {$tmp2580};
bool $tmp2582 = $tmp2581.value;
if ($tmp2582) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp2583 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2584, $tmp2583, &$s2585);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2586 = &$tmp2552->data;
frost$core$Object** $tmp2587 = *$tmp2586;
int64_t $tmp2588 = $tmp2567.value;
frost$core$Object* $tmp2589 = $tmp2587[$tmp2588];
frost$core$Frost$ref$frost$core$Object$Q($tmp2589);
frost$core$Frost$ref$frost$core$Object$Q($tmp2589);
frost$core$Frost$unref$frost$core$Object$Q($tmp2589);
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp2590 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2590);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp2514, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp2589)), ((frost$core$Object*) ((frost$collections$Map*) $tmp2590)));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
org$frostlang$frostc$Pair* $tmp2591 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2591));
*(&local11) = $tmp2514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
frost$core$Frost$unref$frost$core$Object$Q($tmp2589);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:345
frost$collections$Stack** $tmp2592 = &param0->captures;
frost$collections$Stack* $tmp2593 = *$tmp2592;
org$frostlang$frostc$Pair* $tmp2594 = *(&local11);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Closure.frost:345:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:16
frost$collections$Array** $tmp2595 = &$tmp2593->contents;
frost$collections$Array* $tmp2596 = *$tmp2595;
frost$collections$Array$add$frost$collections$Array$T($tmp2596, ((frost$core$Object*) $tmp2594));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:346
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp2597 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2598 = (frost$core$Int64) {16};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2597, $tmp2598);
*(&local12) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
org$frostlang$frostc$Annotations* $tmp2599 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2599));
*(&local12) = $tmp2597;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:347
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp2600 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$collections$Stack** $tmp2601 = &param0->currentClass;
frost$collections$Stack* $tmp2602 = *$tmp2601;
frost$core$Int64 $tmp2603 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Closure.frost:347:59
frost$core$Int64 $tmp2604 = (frost$core$Int64) {0};
int64_t $tmp2605 = $tmp2603.value;
int64_t $tmp2606 = $tmp2604.value;
bool $tmp2607 = $tmp2605 >= $tmp2606;
frost$core$Bit $tmp2608 = (frost$core$Bit) {$tmp2607};
bool $tmp2609 = $tmp2608.value;
if ($tmp2609) goto block38; else goto block37;
block38:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp2610 = &$tmp2602->contents;
frost$collections$Array* $tmp2611 = *$tmp2610;
ITable* $tmp2612 = ((frost$collections$CollectionView*) $tmp2611)->$class->itable;
while ($tmp2612->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2612 = $tmp2612->next;
}
$fn2614 $tmp2613 = $tmp2612->methods[0];
frost$core$Int64 $tmp2615 = $tmp2613(((frost$collections$CollectionView*) $tmp2611));
int64_t $tmp2616 = $tmp2603.value;
int64_t $tmp2617 = $tmp2615.value;
bool $tmp2618 = $tmp2616 < $tmp2617;
frost$core$Bit $tmp2619 = (frost$core$Bit) {$tmp2618};
bool $tmp2620 = $tmp2619.value;
if ($tmp2620) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp2621 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2622, $tmp2621, &$s2623);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp2624 = &$tmp2602->contents;
frost$collections$Array* $tmp2625 = *$tmp2624;
ITable* $tmp2626 = ((frost$collections$CollectionView*) $tmp2625)->$class->itable;
while ($tmp2626->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2626 = $tmp2626->next;
}
$fn2628 $tmp2627 = $tmp2626->methods[0];
frost$core$Int64 $tmp2629 = $tmp2627(((frost$collections$CollectionView*) $tmp2625));
int64_t $tmp2630 = $tmp2629.value;
int64_t $tmp2631 = $tmp2603.value;
bool $tmp2632 = $tmp2630 > $tmp2631;
frost$core$Bit $tmp2633 = (frost$core$Bit) {$tmp2632};
bool $tmp2634 = $tmp2633.value;
if ($tmp2634) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp2635 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2636, $tmp2635);
abort(); // unreachable
block40:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp2637 = &$tmp2602->contents;
frost$collections$Array* $tmp2638 = *$tmp2637;
frost$collections$Array** $tmp2639 = &$tmp2602->contents;
frost$collections$Array* $tmp2640 = *$tmp2639;
ITable* $tmp2641 = ((frost$collections$CollectionView*) $tmp2640)->$class->itable;
while ($tmp2641->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2641 = $tmp2641->next;
}
$fn2643 $tmp2642 = $tmp2641->methods[0];
frost$core$Int64 $tmp2644 = $tmp2642(((frost$collections$CollectionView*) $tmp2640));
frost$core$Int64 $tmp2645 = (frost$core$Int64) {1};
int64_t $tmp2646 = $tmp2644.value;
int64_t $tmp2647 = $tmp2645.value;
int64_t $tmp2648 = $tmp2646 - $tmp2647;
frost$core$Int64 $tmp2649 = (frost$core$Int64) {$tmp2648};
int64_t $tmp2650 = $tmp2649.value;
int64_t $tmp2651 = $tmp2603.value;
int64_t $tmp2652 = $tmp2650 - $tmp2651;
frost$core$Int64 $tmp2653 = (frost$core$Int64) {$tmp2652};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp2654 = (frost$core$Int64) {0};
int64_t $tmp2655 = $tmp2653.value;
int64_t $tmp2656 = $tmp2654.value;
bool $tmp2657 = $tmp2655 >= $tmp2656;
frost$core$Bit $tmp2658 = (frost$core$Bit) {$tmp2657};
bool $tmp2659 = $tmp2658.value;
if ($tmp2659) goto block45; else goto block44;
block45:;
ITable* $tmp2660 = ((frost$collections$CollectionView*) $tmp2638)->$class->itable;
while ($tmp2660->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2660 = $tmp2660->next;
}
$fn2662 $tmp2661 = $tmp2660->methods[0];
frost$core$Int64 $tmp2663 = $tmp2661(((frost$collections$CollectionView*) $tmp2638));
int64_t $tmp2664 = $tmp2653.value;
int64_t $tmp2665 = $tmp2663.value;
bool $tmp2666 = $tmp2664 < $tmp2665;
frost$core$Bit $tmp2667 = (frost$core$Bit) {$tmp2666};
bool $tmp2668 = $tmp2667.value;
if ($tmp2668) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp2669 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2670, $tmp2669, &$s2671);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2672 = &$tmp2638->data;
frost$core$Object** $tmp2673 = *$tmp2672;
int64_t $tmp2674 = $tmp2653.value;
frost$core$Object* $tmp2675 = $tmp2673[$tmp2674];
frost$core$Frost$ref$frost$core$Object$Q($tmp2675);
frost$core$Frost$ref$frost$core$Object$Q($tmp2675);
frost$core$Frost$unref$frost$core$Object$Q($tmp2675);
org$frostlang$frostc$Annotations* $tmp2676 = *(&local12);
frost$core$String* $tmp2677 = *(&local0);
frost$collections$Array* $tmp2678 = *(&local1);
org$frostlang$frostc$Type* $tmp2679 = *(&local6);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2600, ((org$frostlang$frostc$ClassDecl*) $tmp2675), param1, ((frost$core$String*) NULL), $tmp2676, param2, $tmp2677, ((frost$collections$Array*) NULL), $tmp2678, $tmp2679, param5);
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2600));
org$frostlang$frostc$MethodDecl* $tmp2680 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2680));
*(&local13) = $tmp2600;
frost$core$Frost$unref$frost$core$Object$Q($tmp2675);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2600));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:351
frost$core$Bit* $tmp2681 = &param0->writeCode;
frost$core$Bit $tmp2682 = *$tmp2681;
*(&local14) = $tmp2682;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:352
frost$core$Bit* $tmp2683 = &param0->reportErrors;
frost$core$Bit $tmp2684 = *$tmp2683;
*(&local15) = $tmp2684;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:353
frost$core$Bit $tmp2685 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp2686 = &param0->writeCode;
*$tmp2686 = $tmp2685;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:354
frost$core$Bit $tmp2687 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp2688 = &param0->reportErrors;
*$tmp2688 = $tmp2687;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:355
frost$collections$Stack** $tmp2689 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2690 = *$tmp2689;
*(&local16) = ((frost$collections$Stack*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2690));
frost$collections$Stack* $tmp2691 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
*(&local16) = $tmp2690;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:356
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp2692 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp2692);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2692));
frost$collections$Stack** $tmp2693 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2694 = *$tmp2693;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
frost$collections$Stack** $tmp2695 = &param0->enclosingContexts;
*$tmp2695 = $tmp2692;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2692));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:357
org$frostlang$frostc$MethodDecl* $tmp2696 = *(&local13);
org$frostlang$frostc$SymbolTable** $tmp2697 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2698 = *$tmp2697;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp2696, $tmp2698);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:358
frost$collections$Stack* $tmp2699 = *(&local16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
frost$collections$Stack** $tmp2700 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2701 = *$tmp2700;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2701));
frost$collections$Stack** $tmp2702 = &param0->enclosingContexts;
*$tmp2702 = $tmp2699;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:359
frost$core$Bit $tmp2703 = *(&local14);
frost$core$Bit* $tmp2704 = &param0->writeCode;
*$tmp2704 = $tmp2703;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:360
frost$core$Bit $tmp2705 = *(&local15);
frost$core$Bit* $tmp2706 = &param0->reportErrors;
*$tmp2706 = $tmp2705;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:362
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:363
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:364
org$frostlang$frostc$Pair* $tmp2707 = *(&local11);
frost$core$Object** $tmp2708 = &$tmp2707->second;
frost$core$Object* $tmp2709 = *$tmp2708;
ITable* $tmp2710 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp2709))->$class->itable;
while ($tmp2710->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2710 = $tmp2710->next;
}
$fn2712 $tmp2711 = $tmp2710->methods[0];
frost$core$Int64 $tmp2713 = $tmp2711(((frost$collections$MapView*) ((frost$collections$Map*) $tmp2709)));
frost$core$Int64 $tmp2714 = (frost$core$Int64) {0};
int64_t $tmp2715 = $tmp2713.value;
int64_t $tmp2716 = $tmp2714.value;
bool $tmp2717 = $tmp2715 != $tmp2716;
frost$core$Bit $tmp2718 = (frost$core$Bit) {$tmp2717};
bool $tmp2719 = $tmp2718.value;
if ($tmp2719) goto block46; else goto block48;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:366
org$frostlang$frostc$MethodDecl* $tmp2720 = *(&local13);
org$frostlang$frostc$Pair* $tmp2721 = *(&local11);
frost$core$Object** $tmp2722 = &$tmp2721->second;
frost$core$Object* $tmp2723 = *$tmp2722;
ITable* $tmp2724 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp2723))->$class->itable;
while ($tmp2724->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2724 = $tmp2724->next;
}
$fn2726 $tmp2725 = $tmp2724->methods[5];
frost$collections$Iterator* $tmp2727 = $tmp2725(((frost$collections$MapView*) ((frost$collections$Map*) $tmp2723)));
ITable* $tmp2728 = $tmp2727->$class->itable;
while ($tmp2728->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2728 = $tmp2728->next;
}
$fn2730 $tmp2729 = $tmp2728->methods[7];
frost$collections$Array* $tmp2731 = $tmp2729($tmp2727);
org$frostlang$frostc$ClassDecl* $tmp2732 = org$frostlang$frostc$expression$Closure$createClosureClass$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlang$frostc$Compiler$Capture$GT$R$org$frostlang$frostc$ClassDecl(param0, $tmp2720, ((frost$collections$CollectionView*) $tmp2731));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
org$frostlang$frostc$ClassDecl* $tmp2733 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2733));
*(&local19) = $tmp2732;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:367
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2734 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2734);
*(&local20) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2734));
frost$collections$Array* $tmp2735 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2735));
*(&local20) = $tmp2734;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2734));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:368
org$frostlang$frostc$Pair* $tmp2736 = *(&local11);
frost$core$Object** $tmp2737 = &$tmp2736->second;
frost$core$Object* $tmp2738 = *$tmp2737;
ITable* $tmp2739 = ((frost$collections$MapView*) ((frost$collections$Map*) $tmp2738))->$class->itable;
while ($tmp2739->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2739 = $tmp2739->next;
}
$fn2741 $tmp2740 = $tmp2739->methods[5];
frost$collections$Iterator* $tmp2742 = $tmp2740(((frost$collections$MapView*) ((frost$collections$Map*) $tmp2738)));
goto block49;
block49:;
ITable* $tmp2743 = $tmp2742->$class->itable;
while ($tmp2743->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2743 = $tmp2743->next;
}
$fn2745 $tmp2744 = $tmp2743->methods[0];
frost$core$Bit $tmp2746 = $tmp2744($tmp2742);
bool $tmp2747 = $tmp2746.value;
if ($tmp2747) goto block51; else goto block50;
block50:;
*(&local21) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
ITable* $tmp2748 = $tmp2742->$class->itable;
while ($tmp2748->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2748 = $tmp2748->next;
}
$fn2750 $tmp2749 = $tmp2748->methods[1];
frost$core$Object* $tmp2751 = $tmp2749($tmp2742);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Capture*) $tmp2751)));
org$frostlang$frostc$Compiler$Capture* $tmp2752 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2752));
*(&local21) = ((org$frostlang$frostc$Compiler$Capture*) $tmp2751);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:369
org$frostlang$frostc$Compiler$Capture* $tmp2753 = *(&local21);
frost$core$Int64* $tmp2754 = &$tmp2753->$rawValue;
frost$core$Int64 $tmp2755 = *$tmp2754;
frost$core$Int64 $tmp2756 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:370:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2757 = $tmp2755.value;
int64_t $tmp2758 = $tmp2756.value;
bool $tmp2759 = $tmp2757 == $tmp2758;
frost$core$Bit $tmp2760 = frost$core$Bit$init$builtin_bit($tmp2759);
bool $tmp2761 = $tmp2760.value;
if ($tmp2761) goto block53; else goto block54;
block53:;
org$frostlang$frostc$Variable** $tmp2762 = (org$frostlang$frostc$Variable**) ($tmp2753->$data + 0);
org$frostlang$frostc$Variable* $tmp2763 = *$tmp2762;
*(&local22) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
org$frostlang$frostc$Variable* $tmp2764 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2764));
*(&local22) = $tmp2763;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:371
frost$collections$Array* $tmp2765 = *(&local20);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2766 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2767 = (frost$core$Int64) {22};
org$frostlang$frostc$Variable* $tmp2768 = *(&local22);
frost$core$String** $tmp2769 = &((org$frostlang$frostc$Symbol*) $tmp2768)->name;
frost$core$String* $tmp2770 = *$tmp2769;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp2766, $tmp2767, param1, $tmp2770);
frost$collections$Array$add$frost$collections$Array$T($tmp2765, ((frost$core$Object*) $tmp2766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2766));
org$frostlang$frostc$Variable* $tmp2771 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
*(&local22) = ((org$frostlang$frostc$Variable*) NULL);
goto block52;
block54:;
frost$core$Int64 $tmp2772 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:373:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2773 = $tmp2755.value;
int64_t $tmp2774 = $tmp2772.value;
bool $tmp2775 = $tmp2773 == $tmp2774;
frost$core$Bit $tmp2776 = frost$core$Bit$init$builtin_bit($tmp2775);
bool $tmp2777 = $tmp2776.value;
if ($tmp2777) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:374
frost$collections$Array* $tmp2778 = *(&local20);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2779 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2780 = (frost$core$Int64) {39};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp2779, $tmp2780, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp2778, ((frost$core$Object*) $tmp2779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
goto block52;
block57:;
frost$core$Int64 $tmp2781 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:376:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2782 = $tmp2755.value;
int64_t $tmp2783 = $tmp2781.value;
bool $tmp2784 = $tmp2782 == $tmp2783;
frost$core$Bit $tmp2785 = frost$core$Bit$init$builtin_bit($tmp2784);
bool $tmp2786 = $tmp2785.value;
if ($tmp2786) goto block59; else goto block52;
block59:;
org$frostlang$frostc$FieldDecl** $tmp2787 = (org$frostlang$frostc$FieldDecl**) ($tmp2753->$data + 0);
org$frostlang$frostc$FieldDecl* $tmp2788 = *$tmp2787;
*(&local23) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2788));
org$frostlang$frostc$FieldDecl* $tmp2789 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2789));
*(&local23) = $tmp2788;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:377
frost$collections$Array* $tmp2790 = *(&local20);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2791 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2792 = (frost$core$Int64) {16};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2793 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2794 = (frost$core$Int64) {22};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp2793, $tmp2794, param1, &$s2795);
org$frostlang$frostc$FieldDecl* $tmp2796 = *(&local23);
frost$core$String** $tmp2797 = &((org$frostlang$frostc$Symbol*) $tmp2796)->name;
frost$core$String* $tmp2798 = *$tmp2797;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp2791, $tmp2792, param1, $tmp2793, $tmp2798);
frost$collections$Array$add$frost$collections$Array$T($tmp2790, ((frost$core$Object*) $tmp2791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
org$frostlang$frostc$FieldDecl* $tmp2799 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2799));
*(&local23) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block52;
block52:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2751);
org$frostlang$frostc$Compiler$Capture* $tmp2800 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2800));
*(&local21) = ((org$frostlang$frostc$Compiler$Capture*) NULL);
goto block49;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:383
frost$collections$Stack** $tmp2801 = &param0->captures;
frost$collections$Stack* $tmp2802 = *$tmp2801;
frost$core$Object* $tmp2803 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2802);
frost$core$Frost$unref$frost$core$Object$Q($tmp2803);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:384
frost$collections$Array** $tmp2804 = &param0->pendingClasses;
frost$collections$Array* $tmp2805 = *$tmp2804;
org$frostlang$frostc$ClassDecl* $tmp2806 = *(&local19);
frost$collections$Array$add$frost$collections$Array$T($tmp2805, ((frost$core$Object*) $tmp2806));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:385
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2807 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2808 = (frost$core$Int64) {14};
org$frostlang$frostc$ClassDecl* $tmp2809 = *(&local19);
org$frostlang$frostc$Type** $tmp2810 = &$tmp2809->type;
org$frostlang$frostc$Type* $tmp2811 = *$tmp2810;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp2807, $tmp2808, $tmp2811);
frost$collections$Array* $tmp2812 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp2813 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2812);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2814 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2815 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp2814, $tmp2815);
org$frostlang$frostc$IR$Value* $tmp2816 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2807, ((frost$collections$ListView*) $tmp2813), $tmp2814);
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2816));
org$frostlang$frostc$IR$Value* $tmp2817 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
*(&local24) = $tmp2816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:387
org$frostlang$frostc$IR$Value* $tmp2818 = *(&local24);
frost$core$Bit $tmp2819 = frost$core$Bit$init$builtin_bit($tmp2818 == NULL);
bool $tmp2820 = $tmp2819.value;
if ($tmp2820) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:388
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp2821 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2822 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2823 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp2824 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp2825 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2825));
*(&local16) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2826 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp2827 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
*(&local12) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp2828 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp2829 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2830 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2831 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:390
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2832 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2833 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp2834 = *(&local24);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2832, $tmp2833, param1, $tmp2834);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
org$frostlang$frostc$ASTNode* $tmp2835 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2835));
*(&local18) = $tmp2832;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:391
org$frostlang$frostc$ClassDecl* $tmp2836 = *(&local19);
org$frostlang$frostc$Type** $tmp2837 = &$tmp2836->type;
org$frostlang$frostc$Type* $tmp2838 = *$tmp2837;
frost$core$Bit $tmp2839 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp2838);
*(&local17) = $tmp2839;
org$frostlang$frostc$IR$Value* $tmp2840 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2841 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2842 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block47;
block48:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:395
frost$collections$Stack** $tmp2843 = &param0->captures;
frost$collections$Stack* $tmp2844 = *$tmp2843;
frost$core$Object* $tmp2845 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2844);
frost$core$Frost$unref$frost$core$Object$Q($tmp2845);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:396
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp2846 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp2846);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
frost$collections$Stack** $tmp2847 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2848 = *$tmp2847;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2848));
frost$collections$Stack** $tmp2849 = &param0->enclosingContexts;
*$tmp2849 = $tmp2846;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:397
org$frostlang$frostc$MethodDecl* $tmp2850 = *(&local13);
org$frostlang$frostc$SymbolTable** $tmp2851 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2852 = *$tmp2851;
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$SymbolTable$Q(param0, $tmp2850, $tmp2852);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:398
frost$collections$Stack* $tmp2853 = *(&local16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2853));
frost$collections$Stack** $tmp2854 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2855 = *$tmp2854;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
frost$collections$Stack** $tmp2856 = &param0->enclosingContexts;
*$tmp2856 = $tmp2853;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:399
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2857 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2858 = (frost$core$Int64) {31};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp2857, $tmp2858, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
org$frostlang$frostc$ASTNode* $tmp2859 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
*(&local18) = $tmp2857;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:400
frost$core$Bit $tmp2860 = frost$core$Bit$init$builtin_bit(true);
*(&local17) = $tmp2860;
goto block47;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:402
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2861 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2861);
*(&local25) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
frost$collections$Array* $tmp2862 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2862));
*(&local25) = $tmp2861;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:403
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:404
org$frostlang$frostc$MethodDecl* $tmp2863 = *(&local13);
org$frostlang$frostc$Annotations** $tmp2864 = &$tmp2863->annotations;
org$frostlang$frostc$Annotations* $tmp2865 = *$tmp2864;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Closure.frost:404:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp2866 = &$tmp2865->flags;
frost$core$Int64 $tmp2867 = *$tmp2866;
frost$core$Int64 $tmp2868 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp2869 = $tmp2867.value;
int64_t $tmp2870 = $tmp2868.value;
int64_t $tmp2871 = $tmp2869 & $tmp2870;
frost$core$Int64 $tmp2872 = frost$core$Int64$init$builtin_int64($tmp2871);
frost$core$Int64 $tmp2873 = (frost$core$Int64) {0};
int64_t $tmp2874 = $tmp2872.value;
int64_t $tmp2875 = $tmp2873.value;
bool $tmp2876 = $tmp2874 != $tmp2875;
frost$core$Bit $tmp2877 = (frost$core$Bit) {$tmp2876};
bool $tmp2878 = $tmp2877.value;
if ($tmp2878) goto block63; else goto block65;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:405
org$frostlang$frostc$MethodDecl* $tmp2879 = *(&local13);
org$frostlang$frostc$Type* $tmp2880 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp2879);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2880));
org$frostlang$frostc$Type* $tmp2881 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2881));
*(&local26) = $tmp2880;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2880));
goto block64;
block65:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:408
org$frostlang$frostc$MethodDecl* $tmp2882 = *(&local13);
org$frostlang$frostc$MethodDecl* $tmp2883 = *(&local13);
frost$core$Weak** $tmp2884 = &$tmp2883->owner;
frost$core$Weak* $tmp2885 = *$tmp2884;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Closure.frost:408:78
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp2886 = &$tmp2885->_valid;
frost$core$Bit $tmp2887 = *$tmp2886;
bool $tmp2888 = $tmp2887.value;
if ($tmp2888) goto block70; else goto block71;
block71:;
frost$core$Int64 $tmp2889 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2890, $tmp2889);
abort(); // unreachable
block70:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp2891 = &$tmp2885->value;
frost$core$Object* $tmp2892 = *$tmp2891;
frost$core$Frost$ref$frost$core$Object$Q($tmp2892);
org$frostlang$frostc$Type** $tmp2893 = &((org$frostlang$frostc$ClassDecl*) $tmp2892)->type;
org$frostlang$frostc$Type* $tmp2894 = *$tmp2893;
frost$core$Bit $tmp2895 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp2896 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp2882, $tmp2894, $tmp2895);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
org$frostlang$frostc$Type* $tmp2897 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
*(&local26) = $tmp2896;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
frost$core$Frost$unref$frost$core$Object$Q($tmp2892);
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:410
org$frostlang$frostc$Type* $tmp2898 = *(&local26);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Closure.frost:410:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:495
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2899 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2899);
*(&local27) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
frost$collections$Array* $tmp2900 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
*(&local27) = $tmp2899;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:496
frost$collections$Array* $tmp2901 = *(&local27);
frost$collections$Array$add$frost$collections$Array$T($tmp2901, ((frost$core$Object*) $tmp2898));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:497
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2902 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2903 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:497:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2904 = &(&local29)->$rawValue;
*$tmp2904 = $tmp2903;
org$frostlang$frostc$Type$Kind $tmp2905 = *(&local29);
*(&local28) = $tmp2905;
org$frostlang$frostc$Type$Kind $tmp2906 = *(&local28);
org$frostlang$frostc$Position $tmp2907 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2908 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2902, &$s2909, $tmp2906, $tmp2907, $tmp2908);
frost$collections$Array* $tmp2910 = *(&local27);
org$frostlang$frostc$Type* $tmp2911 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2902, ((frost$collections$ListView*) $tmp2910));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
frost$collections$Array* $tmp2912 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
*(&local27) = ((frost$collections$Array*) NULL);
*(&local30) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
org$frostlang$frostc$Type* $tmp2913 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
*(&local30) = $tmp2911;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:411
frost$collections$Array* $tmp2914 = *(&local25);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2915 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2916 = (frost$core$Int64) {26};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2917 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2918 = (frost$core$Int64) {3};
org$frostlang$frostc$MethodDecl* $tmp2919 = *(&local13);
org$frostlang$frostc$Type* $tmp2920 = *(&local30);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp2917, $tmp2918, $tmp2919, $tmp2920);
// begin inline call to method org.frostlang.frostc.Type.Int8():org.frostlang.frostc.Type from Closure.frost:412:86
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:360
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2921 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2922 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:360:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2923 = &(&local32)->$rawValue;
*$tmp2923 = $tmp2922;
org$frostlang$frostc$Type$Kind $tmp2924 = *(&local32);
*(&local31) = $tmp2924;
org$frostlang$frostc$Type$Kind $tmp2925 = *(&local31);
org$frostlang$frostc$Position $tmp2926 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2927 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2921, &$s2928, $tmp2925, $tmp2926, $tmp2927);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2921));
// begin inline call to method org.frostlang.frostc.Type.pointerTo(t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Closure.frost:412:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:495
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2929 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2929);
*(&local33) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
frost$collections$Array* $tmp2930 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2930));
*(&local33) = $tmp2929;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:496
frost$collections$Array* $tmp2931 = *(&local33);
frost$collections$Array$add$frost$collections$Array$T($tmp2931, ((frost$core$Object*) $tmp2921));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:497
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2932 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2933 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:497:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2934 = &(&local35)->$rawValue;
*$tmp2934 = $tmp2933;
org$frostlang$frostc$Type$Kind $tmp2935 = *(&local35);
*(&local34) = $tmp2935;
org$frostlang$frostc$Type$Kind $tmp2936 = *(&local34);
org$frostlang$frostc$Position $tmp2937 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2938 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2932, &$s2939, $tmp2936, $tmp2937, $tmp2938);
frost$collections$Array* $tmp2940 = *(&local33);
org$frostlang$frostc$Type* $tmp2941 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2932, ((frost$collections$ListView*) $tmp2940));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
frost$collections$Array* $tmp2942 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2942));
*(&local33) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$IR$Value* $tmp2943 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2917, $tmp2941);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2915, $tmp2916, param1, $tmp2943);
frost$collections$Array$add$frost$collections$Array$T($tmp2914, ((frost$core$Object*) $tmp2915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:413
frost$collections$Array* $tmp2944 = *(&local25);
org$frostlang$frostc$ASTNode* $tmp2945 = *(&local18);
frost$collections$Array$add$frost$collections$Array$T($tmp2944, ((frost$core$Object*) $tmp2945));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:414
*(&local36) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:415
*(&local37) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:416
frost$core$Bit $tmp2946 = *(&local17);
bool $tmp2947 = $tmp2946.value;
if ($tmp2947) goto block78; else goto block80;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:417
// begin inline call to method org.frostlang.frostc.Type.Method():org.frostlang.frostc.Type from Closure.frost:417:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:477
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2948 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2949 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:477:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2950 = &(&local39)->$rawValue;
*$tmp2950 = $tmp2949;
org$frostlang$frostc$Type$Kind $tmp2951 = *(&local39);
*(&local38) = $tmp2951;
org$frostlang$frostc$Type$Kind $tmp2952 = *(&local38);
org$frostlang$frostc$Position $tmp2953 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2954 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2948, &$s2955, $tmp2952, $tmp2953, $tmp2954);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
org$frostlang$frostc$Type* $tmp2956 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2956));
*(&local36) = $tmp2948;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:418
org$frostlang$frostc$MethodDecl* $tmp2957 = *(&local13);
org$frostlang$frostc$Type* $tmp2958 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp2957);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
org$frostlang$frostc$Type* $tmp2959 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2959));
*(&local37) = $tmp2958;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
goto block79;
block80:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:421
// begin inline call to method org.frostlang.frostc.Type.MutableMethod():org.frostlang.frostc.Type from Closure.frost:421:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:482
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2960 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2961 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:482:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2962 = &(&local41)->$rawValue;
*$tmp2962 = $tmp2961;
org$frostlang$frostc$Type$Kind $tmp2963 = *(&local41);
*(&local40) = $tmp2963;
org$frostlang$frostc$Type$Kind $tmp2964 = *(&local40);
org$frostlang$frostc$Position $tmp2965 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2966 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2960, &$s2967, $tmp2964, $tmp2965, $tmp2966);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2960));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2960));
org$frostlang$frostc$Type* $tmp2968 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
*(&local36) = $tmp2960;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2960));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:422
org$frostlang$frostc$MethodDecl* $tmp2969 = *(&local13);
org$frostlang$frostc$Type* $tmp2970 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp2969);
*(&local42) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
org$frostlang$frostc$Type* $tmp2971 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
*(&local42) = $tmp2970;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:423
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2972 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2972);
*(&local43) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2972));
frost$collections$Array* $tmp2973 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2973));
*(&local43) = $tmp2972;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2972));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:424
frost$core$Int64 $tmp2974 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp2975 = *(&local42);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Closure.frost:424:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2976 = &$tmp2975->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2977 = *$tmp2976;
frost$core$Bit $tmp2978 = frost$core$Bit$init$builtin_bit($tmp2977 != NULL);
bool $tmp2979 = $tmp2978.value;
if ($tmp2979) goto block86; else goto block87;
block87:;
frost$core$Int64 $tmp2980 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2981, $tmp2980);
abort(); // unreachable
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2982 = &$tmp2975->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2983 = *$tmp2982;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2983));
ITable* $tmp2984 = ((frost$collections$CollectionView*) $tmp2983)->$class->itable;
while ($tmp2984->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2984 = $tmp2984->next;
}
$fn2986 $tmp2985 = $tmp2984->methods[0];
frost$core$Int64 $tmp2987 = $tmp2985(((frost$collections$CollectionView*) $tmp2983));
frost$core$Int64 $tmp2988 = (frost$core$Int64) {1};
int64_t $tmp2989 = $tmp2987.value;
int64_t $tmp2990 = $tmp2988.value;
int64_t $tmp2991 = $tmp2989 - $tmp2990;
frost$core$Int64 $tmp2992 = (frost$core$Int64) {$tmp2991};
frost$core$Bit $tmp2993 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2994 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2974, $tmp2992, $tmp2993);
frost$core$Int64 $tmp2995 = $tmp2994.min;
*(&local44) = $tmp2995;
frost$core$Int64 $tmp2996 = $tmp2994.max;
frost$core$Bit $tmp2997 = $tmp2994.inclusive;
bool $tmp2998 = $tmp2997.value;
frost$core$Int64 $tmp2999 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp3000 = $tmp2999.value;
frost$core$UInt64 $tmp3001 = (frost$core$UInt64) {((uint64_t) $tmp3000)};
if ($tmp2998) goto block92; else goto block93;
block92:;
int64_t $tmp3002 = $tmp2995.value;
int64_t $tmp3003 = $tmp2996.value;
bool $tmp3004 = $tmp3002 <= $tmp3003;
frost$core$Bit $tmp3005 = (frost$core$Bit) {$tmp3004};
bool $tmp3006 = $tmp3005.value;
if ($tmp3006) goto block89; else goto block90;
block93:;
int64_t $tmp3007 = $tmp2995.value;
int64_t $tmp3008 = $tmp2996.value;
bool $tmp3009 = $tmp3007 < $tmp3008;
frost$core$Bit $tmp3010 = (frost$core$Bit) {$tmp3009};
bool $tmp3011 = $tmp3010.value;
if ($tmp3011) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:425
frost$collections$Array* $tmp3012 = *(&local43);
org$frostlang$frostc$Type* $tmp3013 = *(&local42);
frost$core$Int64 $tmp3014 = *(&local44);
// begin inline call to function org.frostlang.frostc.Type.parameterType(i:frost.core.Int64):org.frostlang.frostc.Type from Closure.frost:425:57
org$frostlang$frostc$Type$Kind* $tmp3015 = &$tmp3013->typeKind;
org$frostlang$frostc$Type$Kind $tmp3016 = *$tmp3015;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3017;
$tmp3017 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3017->value = $tmp3016;
frost$core$Int64 $tmp3018 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:655:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3019 = &(&local46)->$rawValue;
*$tmp3019 = $tmp3018;
org$frostlang$frostc$Type$Kind $tmp3020 = *(&local46);
*(&local45) = $tmp3020;
org$frostlang$frostc$Type$Kind $tmp3021 = *(&local45);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3022;
$tmp3022 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3022->value = $tmp3021;
ITable* $tmp3023 = ((frost$core$Equatable*) $tmp3017)->$class->itable;
while ($tmp3023->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3023 = $tmp3023->next;
}
$fn3025 $tmp3024 = $tmp3023->methods[0];
frost$core$Bit $tmp3026 = $tmp3024(((frost$core$Equatable*) $tmp3017), ((frost$core$Equatable*) $tmp3022));
bool $tmp3027 = $tmp3026.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3022)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3017)));
if ($tmp3027) goto block98; else goto block101;
block101:;
org$frostlang$frostc$Type$Kind* $tmp3028 = &$tmp3013->typeKind;
org$frostlang$frostc$Type$Kind $tmp3029 = *$tmp3028;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3030;
$tmp3030 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3030->value = $tmp3029;
frost$core$Int64 $tmp3031 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:655:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3032 = &(&local48)->$rawValue;
*$tmp3032 = $tmp3031;
org$frostlang$frostc$Type$Kind $tmp3033 = *(&local48);
*(&local47) = $tmp3033;
org$frostlang$frostc$Type$Kind $tmp3034 = *(&local47);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3035;
$tmp3035 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3035->value = $tmp3034;
ITable* $tmp3036 = ((frost$core$Equatable*) $tmp3030)->$class->itable;
while ($tmp3036->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3036 = $tmp3036->next;
}
$fn3038 $tmp3037 = $tmp3036->methods[0];
frost$core$Bit $tmp3039 = $tmp3037(((frost$core$Equatable*) $tmp3030), ((frost$core$Equatable*) $tmp3035));
bool $tmp3040 = $tmp3039.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3035)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3030)));
if ($tmp3040) goto block98; else goto block100;
block100:;
org$frostlang$frostc$Type$Kind* $tmp3041 = &$tmp3013->typeKind;
org$frostlang$frostc$Type$Kind $tmp3042 = *$tmp3041;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3043;
$tmp3043 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3043->value = $tmp3042;
frost$core$Int64 $tmp3044 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:655:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3045 = &(&local50)->$rawValue;
*$tmp3045 = $tmp3044;
org$frostlang$frostc$Type$Kind $tmp3046 = *(&local50);
*(&local49) = $tmp3046;
org$frostlang$frostc$Type$Kind $tmp3047 = *(&local49);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3048;
$tmp3048 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3048->value = $tmp3047;
ITable* $tmp3049 = ((frost$core$Equatable*) $tmp3043)->$class->itable;
while ($tmp3049->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3049 = $tmp3049->next;
}
$fn3051 $tmp3050 = $tmp3049->methods[0];
frost$core$Bit $tmp3052 = $tmp3050(((frost$core$Equatable*) $tmp3043), ((frost$core$Equatable*) $tmp3048));
bool $tmp3053 = $tmp3052.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3048)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3043)));
if ($tmp3053) goto block98; else goto block99;
block99:;
org$frostlang$frostc$Type$Kind* $tmp3054 = &$tmp3013->typeKind;
org$frostlang$frostc$Type$Kind $tmp3055 = *$tmp3054;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3056;
$tmp3056 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3056->value = $tmp3055;
frost$core$Int64 $tmp3057 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:656:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3058 = &(&local52)->$rawValue;
*$tmp3058 = $tmp3057;
org$frostlang$frostc$Type$Kind $tmp3059 = *(&local52);
*(&local51) = $tmp3059;
org$frostlang$frostc$Type$Kind $tmp3060 = *(&local51);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3061;
$tmp3061 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3061->value = $tmp3060;
ITable* $tmp3062 = ((frost$core$Equatable*) $tmp3056)->$class->itable;
while ($tmp3062->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3062 = $tmp3062->next;
}
$fn3064 $tmp3063 = $tmp3062->methods[0];
frost$core$Bit $tmp3065 = $tmp3063(((frost$core$Equatable*) $tmp3056), ((frost$core$Equatable*) $tmp3061));
bool $tmp3066 = $tmp3065.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3061)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3056)));
if ($tmp3066) goto block98; else goto block96;
block98:;
frost$core$Int64 $tmp3067 = (frost$core$Int64) {0};
int64_t $tmp3068 = $tmp3014.value;
int64_t $tmp3069 = $tmp3067.value;
bool $tmp3070 = $tmp3068 >= $tmp3069;
frost$core$Bit $tmp3071 = (frost$core$Bit) {$tmp3070};
bool $tmp3072 = $tmp3071.value;
if ($tmp3072) goto block97; else goto block96;
block97:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:656:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3073 = &$tmp3013->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3074 = *$tmp3073;
frost$core$Bit $tmp3075 = frost$core$Bit$init$builtin_bit($tmp3074 != NULL);
bool $tmp3076 = $tmp3075.value;
if ($tmp3076) goto block107; else goto block108;
block108:;
frost$core$Int64 $tmp3077 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3078, $tmp3077);
abort(); // unreachable
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3079 = &$tmp3013->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3080 = *$tmp3079;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
ITable* $tmp3081 = ((frost$collections$CollectionView*) $tmp3080)->$class->itable;
while ($tmp3081->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3081 = $tmp3081->next;
}
$fn3083 $tmp3082 = $tmp3081->methods[0];
frost$core$Int64 $tmp3084 = $tmp3082(((frost$collections$CollectionView*) $tmp3080));
frost$core$Int64 $tmp3085 = (frost$core$Int64) {1};
int64_t $tmp3086 = $tmp3084.value;
int64_t $tmp3087 = $tmp3085.value;
int64_t $tmp3088 = $tmp3086 - $tmp3087;
frost$core$Int64 $tmp3089 = (frost$core$Int64) {$tmp3088};
int64_t $tmp3090 = $tmp3014.value;
int64_t $tmp3091 = $tmp3089.value;
bool $tmp3092 = $tmp3090 < $tmp3091;
frost$core$Bit $tmp3093 = (frost$core$Bit) {$tmp3092};
bool $tmp3094 = $tmp3093.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
if ($tmp3094) goto block95; else goto block96;
block96:;
frost$core$Int64 $tmp3095 = (frost$core$Int64) {657};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3096, $tmp3095, &$s3097);
abort(); // unreachable
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:658
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:658:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3098 = &$tmp3013->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3099 = *$tmp3098;
frost$core$Bit $tmp3100 = frost$core$Bit$init$builtin_bit($tmp3099 != NULL);
bool $tmp3101 = $tmp3100.value;
if ($tmp3101) goto block110; else goto block111;
block111:;
frost$core$Int64 $tmp3102 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3103, $tmp3102);
abort(); // unreachable
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3104 = &$tmp3013->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3105 = *$tmp3104;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
frost$core$Object* $tmp3106 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3105, $tmp3014);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3106)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
frost$collections$Array$add$frost$collections$Array$T($tmp3012, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3106)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3106)));
frost$core$Int64 $tmp3107 = *(&local44);
int64_t $tmp3108 = $tmp2996.value;
int64_t $tmp3109 = $tmp3107.value;
int64_t $tmp3110 = $tmp3108 - $tmp3109;
frost$core$Int64 $tmp3111 = (frost$core$Int64) {$tmp3110};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp3112 = $tmp3111.value;
frost$core$UInt64 $tmp3113 = (frost$core$UInt64) {((uint64_t) $tmp3112)};
if ($tmp2998) goto block114; else goto block115;
block114:;
uint64_t $tmp3114 = $tmp3113.value;
uint64_t $tmp3115 = $tmp3001.value;
bool $tmp3116 = $tmp3114 >= $tmp3115;
frost$core$Bit $tmp3117 = (frost$core$Bit) {$tmp3116};
bool $tmp3118 = $tmp3117.value;
if ($tmp3118) goto block112; else goto block90;
block115:;
uint64_t $tmp3119 = $tmp3113.value;
uint64_t $tmp3120 = $tmp3001.value;
bool $tmp3121 = $tmp3119 > $tmp3120;
frost$core$Bit $tmp3122 = (frost$core$Bit) {$tmp3121};
bool $tmp3123 = $tmp3122.value;
if ($tmp3123) goto block112; else goto block90;
block112:;
int64_t $tmp3124 = $tmp3107.value;
int64_t $tmp3125 = $tmp2999.value;
int64_t $tmp3126 = $tmp3124 + $tmp3125;
frost$core$Int64 $tmp3127 = (frost$core$Int64) {$tmp3126};
*(&local44) = $tmp3127;
goto block89;
block90:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2983));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:427
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:428
org$frostlang$frostc$MethodDecl* $tmp3128 = *(&local13);
org$frostlang$frostc$MethodDecl$Kind* $tmp3129 = &$tmp3128->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3130 = *$tmp3129;
frost$core$Int64 $tmp3131 = $tmp3130.$rawValue;
frost$core$Int64 $tmp3132 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:429:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3133 = $tmp3131.value;
int64_t $tmp3134 = $tmp3132.value;
bool $tmp3135 = $tmp3133 == $tmp3134;
frost$core$Bit $tmp3136 = frost$core$Bit$init$builtin_bit($tmp3135);
bool $tmp3137 = $tmp3136.value;
if ($tmp3137) goto block117; else goto block118;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:429
frost$core$Int64 $tmp3138 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Closure.frost:429:68
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3139 = &(&local55)->$rawValue;
*$tmp3139 = $tmp3138;
org$frostlang$frostc$Type$Kind $tmp3140 = *(&local55);
*(&local54) = $tmp3140;
org$frostlang$frostc$Type$Kind $tmp3141 = *(&local54);
*(&local53) = $tmp3141;
goto block116;
block118:;
frost$core$Int64 $tmp3142 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Closure.frost:430:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3143 = $tmp3131.value;
int64_t $tmp3144 = $tmp3142.value;
bool $tmp3145 = $tmp3143 == $tmp3144;
frost$core$Bit $tmp3146 = frost$core$Bit$init$builtin_bit($tmp3145);
bool $tmp3147 = $tmp3146.value;
if ($tmp3147) goto block121; else goto block122;
block121:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:430
frost$core$Int64 $tmp3148 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Closure.frost:430:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3149 = &(&local57)->$rawValue;
*$tmp3149 = $tmp3148;
org$frostlang$frostc$Type$Kind $tmp3150 = *(&local57);
*(&local56) = $tmp3150;
org$frostlang$frostc$Type$Kind $tmp3151 = *(&local56);
*(&local53) = $tmp3151;
goto block116;
block122:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:431
frost$core$Int64 $tmp3152 = (frost$core$Int64) {431};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3153, $tmp3152);
abort(); // unreachable
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:433
org$frostlang$frostc$Type$Kind $tmp3154 = *(&local53);
frost$collections$Array* $tmp3155 = *(&local43);
org$frostlang$frostc$Type* $tmp3156 = *(&local42);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Closure.frost:433:85
org$frostlang$frostc$Type$Kind* $tmp3157 = &$tmp3156->typeKind;
org$frostlang$frostc$Type$Kind $tmp3158 = *$tmp3157;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3159;
$tmp3159 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3159->value = $tmp3158;
frost$core$Int64 $tmp3160 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3161 = &(&local59)->$rawValue;
*$tmp3161 = $tmp3160;
org$frostlang$frostc$Type$Kind $tmp3162 = *(&local59);
*(&local58) = $tmp3162;
org$frostlang$frostc$Type$Kind $tmp3163 = *(&local58);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3164;
$tmp3164 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3164->value = $tmp3163;
ITable* $tmp3165 = ((frost$core$Equatable*) $tmp3159)->$class->itable;
while ($tmp3165->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3165 = $tmp3165->next;
}
$fn3167 $tmp3166 = $tmp3165->methods[0];
frost$core$Bit $tmp3168 = $tmp3166(((frost$core$Equatable*) $tmp3159), ((frost$core$Equatable*) $tmp3164));
bool $tmp3169 = $tmp3168.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3164)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3159)));
if ($tmp3169) goto block126; else goto block130;
block130:;
org$frostlang$frostc$Type$Kind* $tmp3170 = &$tmp3156->typeKind;
org$frostlang$frostc$Type$Kind $tmp3171 = *$tmp3170;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3172;
$tmp3172 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3172->value = $tmp3171;
frost$core$Int64 $tmp3173 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3174 = &(&local61)->$rawValue;
*$tmp3174 = $tmp3173;
org$frostlang$frostc$Type$Kind $tmp3175 = *(&local61);
*(&local60) = $tmp3175;
org$frostlang$frostc$Type$Kind $tmp3176 = *(&local60);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3177;
$tmp3177 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3177->value = $tmp3176;
ITable* $tmp3178 = ((frost$core$Equatable*) $tmp3172)->$class->itable;
while ($tmp3178->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3178 = $tmp3178->next;
}
$fn3180 $tmp3179 = $tmp3178->methods[0];
frost$core$Bit $tmp3181 = $tmp3179(((frost$core$Equatable*) $tmp3172), ((frost$core$Equatable*) $tmp3177));
bool $tmp3182 = $tmp3181.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3177)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3172)));
if ($tmp3182) goto block126; else goto block129;
block129:;
org$frostlang$frostc$Type$Kind* $tmp3183 = &$tmp3156->typeKind;
org$frostlang$frostc$Type$Kind $tmp3184 = *$tmp3183;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3185;
$tmp3185 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3185->value = $tmp3184;
frost$core$Int64 $tmp3186 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3187 = &(&local63)->$rawValue;
*$tmp3187 = $tmp3186;
org$frostlang$frostc$Type$Kind $tmp3188 = *(&local63);
*(&local62) = $tmp3188;
org$frostlang$frostc$Type$Kind $tmp3189 = *(&local62);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3190;
$tmp3190 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3190->value = $tmp3189;
ITable* $tmp3191 = ((frost$core$Equatable*) $tmp3185)->$class->itable;
while ($tmp3191->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3191 = $tmp3191->next;
}
$fn3193 $tmp3192 = $tmp3191->methods[0];
frost$core$Bit $tmp3194 = $tmp3192(((frost$core$Equatable*) $tmp3185), ((frost$core$Equatable*) $tmp3190));
bool $tmp3195 = $tmp3194.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3190)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3185)));
if ($tmp3195) goto block126; else goto block128;
block128:;
org$frostlang$frostc$Type$Kind* $tmp3196 = &$tmp3156->typeKind;
org$frostlang$frostc$Type$Kind $tmp3197 = *$tmp3196;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3198;
$tmp3198 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3198->value = $tmp3197;
frost$core$Int64 $tmp3199 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:662:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3200 = &(&local65)->$rawValue;
*$tmp3200 = $tmp3199;
org$frostlang$frostc$Type$Kind $tmp3201 = *(&local65);
*(&local64) = $tmp3201;
org$frostlang$frostc$Type$Kind $tmp3202 = *(&local64);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3203;
$tmp3203 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3203->value = $tmp3202;
ITable* $tmp3204 = ((frost$core$Equatable*) $tmp3198)->$class->itable;
while ($tmp3204->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3204 = $tmp3204->next;
}
$fn3206 $tmp3205 = $tmp3204->methods[0];
frost$core$Bit $tmp3207 = $tmp3205(((frost$core$Equatable*) $tmp3198), ((frost$core$Equatable*) $tmp3203));
bool $tmp3208 = $tmp3207.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3203)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3198)));
if ($tmp3208) goto block126; else goto block127;
block127:;
frost$core$Int64 $tmp3209 = (frost$core$Int64) {663};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3210, $tmp3209, &$s3211);
abort(); // unreachable
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:664
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3212 = &$tmp3156->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3213 = *$tmp3212;
frost$core$Bit $tmp3214 = frost$core$Bit$init$builtin_bit($tmp3213 != NULL);
bool $tmp3215 = $tmp3214.value;
if ($tmp3215) goto block136; else goto block137;
block137:;
frost$core$Int64 $tmp3216 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3217, $tmp3216);
abort(); // unreachable
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3218 = &$tmp3156->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3219 = *$tmp3218;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3219));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp3220 = &$tmp3156->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3221 = *$tmp3220;
frost$core$Bit $tmp3222 = frost$core$Bit$init$builtin_bit($tmp3221 != NULL);
bool $tmp3223 = $tmp3222.value;
if ($tmp3223) goto block139; else goto block140;
block140:;
frost$core$Int64 $tmp3224 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3225, $tmp3224);
abort(); // unreachable
block139:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp3226 = &$tmp3156->_subtypes;
org$frostlang$frostc$FixedArray* $tmp3227 = *$tmp3226;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3227));
ITable* $tmp3228 = ((frost$collections$CollectionView*) $tmp3227)->$class->itable;
while ($tmp3228->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3228 = $tmp3228->next;
}
$fn3230 $tmp3229 = $tmp3228->methods[0];
frost$core$Int64 $tmp3231 = $tmp3229(((frost$collections$CollectionView*) $tmp3227));
frost$core$Int64 $tmp3232 = (frost$core$Int64) {1};
int64_t $tmp3233 = $tmp3231.value;
int64_t $tmp3234 = $tmp3232.value;
int64_t $tmp3235 = $tmp3233 - $tmp3234;
frost$core$Int64 $tmp3236 = (frost$core$Int64) {$tmp3235};
frost$core$Object* $tmp3237 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3219, $tmp3236);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3237)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3237);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3219));
org$frostlang$frostc$Type* $tmp3238 = *(&local42);
frost$core$Int64* $tmp3239 = &$tmp3238->priority;
frost$core$Int64 $tmp3240 = *$tmp3239;
org$frostlang$frostc$Type* $tmp3241 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(param1, $tmp3154, ((frost$collections$ListView*) $tmp3155), ((org$frostlang$frostc$Type*) $tmp3237), $tmp3240);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3241));
org$frostlang$frostc$Type* $tmp3242 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3242));
*(&local37) = $tmp3241;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3237)));
frost$collections$Array* $tmp3243 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3243));
*(&local43) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3244 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3244));
*(&local42) = ((org$frostlang$frostc$Type*) NULL);
goto block79;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:436
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp3245 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3246 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp3247 = *(&local36);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp3245, $tmp3246, $tmp3247);
frost$collections$Array* $tmp3248 = *(&local25);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3249 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3250 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp3249, $tmp3250);
org$frostlang$frostc$IR$Value* $tmp3251 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3245, ((frost$collections$ListView*) $tmp3248), $tmp3249);
org$frostlang$frostc$Type* $tmp3252 = *(&local37);
org$frostlang$frostc$IR$Value* $tmp3253 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3251, $tmp3252);
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3253));
org$frostlang$frostc$IR$Value* $tmp3254 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3254));
*(&local66) = $tmp3253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3245));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:438
org$frostlang$frostc$IR$Value* $tmp3255 = *(&local66);
org$frostlang$frostc$IR$Value* $tmp3256 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3255, param6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3256));
org$frostlang$frostc$IR$Value* $tmp3257 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3257));
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp3258 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3258));
*(&local37) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3259 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3259));
*(&local36) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3260 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3260));
*(&local30) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3261 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3261));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp3262 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3262));
*(&local25) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3263 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3263));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Stack* $tmp3264 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3264));
*(&local16) = ((frost$collections$Stack*) NULL);
org$frostlang$frostc$MethodDecl* $tmp3265 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3265));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Annotations* $tmp3266 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3266));
*(&local12) = ((org$frostlang$frostc$Annotations*) NULL);
org$frostlang$frostc$Pair* $tmp3267 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3267));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp3268 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3268));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp3269 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3269));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp3270 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3270));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3256;

}
void org$frostlang$frostc$expression$Closure$init(org$frostlang$frostc$expression$Closure* param0) {

return;

}
void org$frostlang$frostc$expression$Closure$cleanup(org$frostlang$frostc$expression$Closure* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Closure.frost:23
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

