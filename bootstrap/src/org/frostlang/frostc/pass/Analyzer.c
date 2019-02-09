#include "org/frostlang/frostc/pass/Analyzer.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/IR.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Frost.h"
#include "frost/collections/HashSet.h"
#include "org/frostlang/frostc/pass/Analyzer/DataFlowValue.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/pass/Analyzer/State.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/UInt64.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Real64.h"
#include "frost/collections/Key.h"
#include "org/frostlang/frostc/pass/Analyzer/BlockExit.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/collections/ListView.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/Weak.h"
#include "frost/io/Console.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$Analyzer$class_type org$frostlang$frostc$pass$Analyzer$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$pass$Analyzer$cleanup, org$frostlang$frostc$pass$Analyzer$getValue$org$frostlang$frostc$IR$Value$org$frostlang$frostc$pass$Analyzer$State$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue, org$frostlang$frostc$pass$Analyzer$propagate$org$frostlang$frostc$pass$Analyzer$BlockExit$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$pass$Analyzer$getBlock$org$frostlang$frostc$IR$Block$ID$R$org$frostlang$frostc$IR$Block, org$frostlang$frostc$pass$Analyzer$updateStateForExitIndex$org$frostlang$frostc$IR$Block$frost$core$Int64$org$frostlang$frostc$pass$Analyzer$State, org$frostlang$frostc$pass$Analyzer$binaryValue$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$pass$Analyzer$State$org$frostlang$frostc$Type$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue, org$frostlang$frostc$pass$Analyzer$computeExitState$org$frostlang$frostc$pass$Analyzer$BlockExit$frost$core$Bit$R$org$frostlang$frostc$pass$Analyzer$State, org$frostlang$frostc$pass$Analyzer$process$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$pass$Analyzer$dump, org$frostlang$frostc$pass$Analyzer$analyze, org$frostlang$frostc$pass$Analyzer$makeUnreachable$org$frostlang$frostc$IR$Block, org$frostlang$frostc$pass$Analyzer$removeBlock$frost$core$Int64} };

typedef frost$core$Int64 (*$fn85)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn179)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn208)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn222)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn226)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, frost$core$Bit);
typedef frost$core$Bit (*$fn237)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn242)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn252)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, frost$core$Bit);
typedef frost$core$Bit (*$fn255)(org$frostlang$frostc$pass$Analyzer$State*, org$frostlang$frostc$Compiler*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$collections$Iterator* (*$fn274)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn278)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn283)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn307)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn322)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn355)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$collections$Iterator* (*$fn368)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn372)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn377)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn437)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn474)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn511)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn533)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn589)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn679)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block* (*$fn743)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn752)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn790)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn816)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn862)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$expression$Binary$Operator, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*, org$frostlang$frostc$Type*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn900)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn919)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn928)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn942)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn983)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1019)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1032)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1045)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1058)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1082)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1107)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1120)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1133)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1146)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1170)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1228)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1244)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1296)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn1331)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1356)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1378)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1381)(org$frostlang$frostc$pass$Analyzer$DataFlowValue*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1433)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1483)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1538)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1564)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn1606)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1624)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1673)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Int64 (*$fn1683)(frost$collections$CollectionView*);
typedef void (*$fn1724)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*, frost$core$Int64, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$IR$Block* (*$fn1729)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn1740)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1755)(frost$collections$CollectionView*);
typedef void (*$fn1791)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn1816)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn1827)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn1855)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1870)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1885)(frost$core$Object*);
typedef frost$core$Int64 (*$fn1902)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1926)(frost$core$Object*);
typedef frost$core$Int64 (*$fn1945)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1960)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1993)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1997)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2002)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2010)(frost$core$Object*);
typedef frost$core$String* (*$fn2033)(frost$core$Object*);
typedef frost$core$Int64 (*$fn2044)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2077)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2093)(frost$core$Object*);
typedef frost$core$Int64 (*$fn2108)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2123)(frost$core$Object*);
typedef frost$core$Int64 (*$fn2166)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2227)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2251)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2255)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2260)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2276)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2311)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2338)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2389)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2412)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2424)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn2428)(frost$collections$Iterator*);
typedef void (*$fn2438)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn2445)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2449)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2454)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2478)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2512)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2529)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn2549)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, frost$core$Bit);
typedef frost$core$Int64 (*$fn2581)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn2596)(org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn2606)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2624)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2730)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2757)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2761)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2766)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2774)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2793)(frost$collections$CollectionView*);
typedef void (*$fn2830)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*);
typedef frost$core$Bit (*$fn2851)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2881)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2920)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72", 34, 269475009738187975, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x76\x61\x6c\x75\x65\x20\x27", 19, 1720713487593907802, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s519 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 7119724970118842632, NULL };
static frost$core$String $s574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s664 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s684 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s798 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s824 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s825 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s990 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s1004 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1062 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1063 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s1069 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1077 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s1157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s1213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s1316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static frost$core$String $s1414 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s1442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s1445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s1460 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1492 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s1495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s1510 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1591 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s1691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s1692 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 7119724970118842632, NULL };
static frost$core$String $s1763 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s1764 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s1878 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s1879 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s1888 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b\x20\x65\x6e\x64\x65\x64\x20\x69\x6e\x20\x6e\x6f\x6e\x74\x65\x72\x6d\x69\x6e\x61\x6c\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x20", 37, 1996004463200850147, NULL };
static frost$core$String $s1889 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s1894 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1929 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 21864007024, NULL };
static frost$core$String $s1931 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s1953 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s1954 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s1964 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1965 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2013 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2015 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2036 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2037 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2085 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2086 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2095 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s2116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static frost$core$String $s2235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2397 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2398 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2486 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2526 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s2538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x20\x65\x78\x69\x74\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 33, 7071984735217758420, NULL };
static frost$core$String $s2589 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2614 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2615 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 7119724970118842632, NULL };
static frost$core$String $s2738 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2739 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2801 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2802 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2855 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s2889 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2890 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 7119724970118842632, NULL };
static frost$core$String $s2928 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2929 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 7119724970118842632, NULL };

void org$frostlang$frostc$pass$Analyzer$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$MethodDecl* param2, org$frostlang$frostc$IR* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:154
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp2 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$HashMap** $tmp3 = &param0->blocks;
frost$collections$HashMap* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$HashMap** $tmp5 = &param0->blocks;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:156
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp6 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$HashMap** $tmp7 = &param0->predecessors;
frost$collections$HashMap* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$HashMap** $tmp9 = &param0->predecessors;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:158
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp10 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$collections$HashMap** $tmp11 = &param0->entryStates;
frost$collections$HashMap* $tmp12 = *$tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$collections$HashMap** $tmp13 = &param0->entryStates;
*$tmp13 = $tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:160
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp14 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$collections$HashSet** $tmp15 = &param0->worklist;
frost$collections$HashSet* $tmp16 = *$tmp15;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$collections$HashSet** $tmp17 = &param0->worklist;
*$tmp17 = $tmp14;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:162
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp18 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$collections$HashMap** $tmp19 = &param0->statements;
frost$collections$HashMap* $tmp20 = *$tmp19;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$collections$HashMap** $tmp21 = &param0->statements;
*$tmp21 = $tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:165
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp22 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp23 = *$tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
org$frostlang$frostc$Compiler** $tmp24 = &param0->compiler;
*$tmp24 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:166
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$MethodDecl** $tmp25 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp26 = *$tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
org$frostlang$frostc$MethodDecl** $tmp27 = &param0->m;
*$tmp27 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR** $tmp28 = &param0->ir;
org$frostlang$frostc$IR* $tmp29 = *$tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
org$frostlang$frostc$IR** $tmp30 = &param0->ir;
*$tmp30 = param3;
return;

}
org$frostlang$frostc$pass$Analyzer$DataFlowValue* org$frostlang$frostc$pass$Analyzer$getValue$org$frostlang$frostc$IR$Value$org$frostlang$frostc$pass$Analyzer$State$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$pass$Analyzer$State* param2) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$Int64 local3;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
org$frostlang$frostc$IR$Statement$ID local7;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local8 = NULL;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:171
frost$core$Int64* $tmp31 = &param1->$rawValue;
frost$core$Int64 $tmp32 = *$tmp31;
frost$core$Int64 $tmp33 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:172:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp34 = $tmp32.value;
int64_t $tmp35 = $tmp33.value;
bool $tmp36 = $tmp34 == $tmp35;
frost$core$Bit $tmp37 = frost$core$Bit$init$builtin_bit($tmp36);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp39 = (frost$core$Bit*) (param1->$data + 0);
frost$core$Bit $tmp40 = *$tmp39;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:173
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp41 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
// begin inline call to method org.frostlang.frostc.Type.BuiltinBit():org.frostlang.frostc.Type from Analyzer.frost:173:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:457
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp42 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp43 = (frost$core$Int64) {8};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:457:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp44 = &(&local1)->$rawValue;
*$tmp44 = $tmp43;
org$frostlang$frostc$Type$Kind $tmp45 = *(&local1);
*(&local0) = $tmp45;
org$frostlang$frostc$Type$Kind $tmp46 = *(&local0);
org$frostlang$frostc$Position $tmp47 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp42, &$s49, $tmp46, $tmp47, $tmp48);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp41, $tmp42);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
return $tmp41;
block3:;
frost$core$Int64 $tmp50 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:175:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp51 = $tmp32.value;
int64_t $tmp52 = $tmp50.value;
bool $tmp53 = $tmp51 == $tmp52;
frost$core$Bit $tmp54 = frost$core$Bit$init$builtin_bit($tmp53);
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block7; else goto block8;
block7:;
frost$core$UInt64* $tmp56 = (frost$core$UInt64*) (param1->$data + 0);
frost$core$UInt64 $tmp57 = *$tmp56;
org$frostlang$frostc$Type** $tmp58 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp59 = *$tmp58;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
org$frostlang$frostc$Type* $tmp60 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local2) = $tmp59;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:176
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp61 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp62 = *(&local2);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp61, $tmp62);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
org$frostlang$frostc$Type* $tmp63 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return $tmp61;
block8:;
frost$core$Int64 $tmp64 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:178:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp65 = $tmp32.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 == $tmp66;
frost$core$Bit $tmp68 = frost$core$Bit$init$builtin_bit($tmp67);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block10; else goto block11;
block10:;
frost$core$Int64* $tmp70 = (frost$core$Int64*) (param1->$data + 0);
frost$core$Int64 $tmp71 = *$tmp70;
*(&local3) = $tmp71;
org$frostlang$frostc$Type** $tmp72 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp73 = *$tmp72;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:179
frost$collections$Array** $tmp74 = &param2->locals;
frost$collections$Array* $tmp75 = *$tmp74;
frost$core$Int64 $tmp76 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:179:32
frost$core$Int64 $tmp77 = (frost$core$Int64) {0};
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77.value;
bool $tmp80 = $tmp78 >= $tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block16; else goto block15;
block16:;
ITable* $tmp83 = ((frost$collections$CollectionView*) $tmp75)->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[0];
frost$core$Int64 $tmp86 = $tmp84(((frost$collections$CollectionView*) $tmp75));
int64_t $tmp87 = $tmp76.value;
int64_t $tmp88 = $tmp86.value;
bool $tmp89 = $tmp87 < $tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp92 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s93, $tmp92, &$s94);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp95 = &$tmp75->data;
frost$core$Object** $tmp96 = *$tmp95;
int64_t $tmp97 = $tmp76.value;
frost$core$Object* $tmp98 = $tmp96[$tmp97];
frost$core$Frost$ref$frost$core$Object$Q($tmp98);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp98)));
frost$core$Frost$unref$frost$core$Object$Q($tmp98);
return ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp98);
block11:;
frost$core$Int64 $tmp99 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:181:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp100 = $tmp32.value;
int64_t $tmp101 = $tmp99.value;
bool $tmp102 = $tmp100 == $tmp101;
frost$core$Bit $tmp103 = frost$core$Bit$init$builtin_bit($tmp102);
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Type** $tmp105 = (org$frostlang$frostc$Type**) (param1->$data + 0);
org$frostlang$frostc$Type* $tmp106 = *$tmp105;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
org$frostlang$frostc$Type* $tmp107 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local4) = $tmp106;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:182
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp108 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp109 = *(&local4);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp108, $tmp109);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
org$frostlang$frostc$Type* $tmp110 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp108;
block18:;
frost$core$Int64 $tmp111 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:184:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp112 = $tmp32.value;
int64_t $tmp113 = $tmp111.value;
bool $tmp114 = $tmp112 == $tmp113;
frost$core$Bit $tmp115 = frost$core$Bit$init$builtin_bit($tmp114);
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block20; else goto block21;
block20:;
frost$core$Int64* $tmp117 = (frost$core$Int64*) (param1->$data + 0);
frost$core$Int64 $tmp118 = *$tmp117;
org$frostlang$frostc$Type** $tmp119 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp120 = *$tmp119;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
org$frostlang$frostc$Type* $tmp121 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local5) = $tmp120;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:185
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp122 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp123 = *(&local5);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp122, $tmp123);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
org$frostlang$frostc$Type* $tmp124 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return $tmp122;
block21:;
frost$core$Int64 $tmp125 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:187:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp126 = $tmp32.value;
int64_t $tmp127 = $tmp125.value;
bool $tmp128 = $tmp126 == $tmp127;
frost$core$Bit $tmp129 = frost$core$Bit$init$builtin_bit($tmp128);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block23; else goto block24;
block23:;
frost$core$Real64* $tmp131 = (frost$core$Real64*) (param1->$data + 0);
frost$core$Real64 $tmp132 = *$tmp131;
org$frostlang$frostc$Type** $tmp133 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp134 = *$tmp133;
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
org$frostlang$frostc$Type* $tmp135 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
*(&local6) = $tmp134;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:188
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp136 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp137 = *(&local6);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp136, $tmp137);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
org$frostlang$frostc$Type* $tmp138 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
return $tmp136;
block24:;
frost$core$Int64 $tmp139 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:190:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp140 = $tmp32.value;
int64_t $tmp141 = $tmp139.value;
bool $tmp142 = $tmp140 == $tmp141;
frost$core$Bit $tmp143 = frost$core$Bit$init$builtin_bit($tmp142);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block26; else goto block27;
block26:;
org$frostlang$frostc$IR$Statement$ID* $tmp145 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp146 = *$tmp145;
*(&local7) = $tmp146;
org$frostlang$frostc$Type** $tmp147 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp148 = *$tmp147;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:191
frost$collections$HashMap** $tmp149 = &param2->statements;
frost$collections$HashMap* $tmp150 = *$tmp149;
org$frostlang$frostc$IR$Statement$ID $tmp151 = *(&local7);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp152;
$tmp152 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp152->value = $tmp151;
frost$core$Object* $tmp153 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp150, ((frost$collections$Key*) $tmp152));
*(&local8) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp153)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp154 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local8) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp153);
frost$core$Frost$unref$frost$core$Object$Q($tmp153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp152)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:192
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp155 = *(&local8);
frost$core$Bit $tmp156 = frost$core$Bit$init$builtin_bit($tmp155 != NULL);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:193
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp158 = *(&local8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp159 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local8) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
return $tmp158;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:195
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp160 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init($tmp160);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp161 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local8) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
return $tmp160;
block27:;
frost$core$Int64 $tmp162 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:197:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp163 = $tmp32.value;
int64_t $tmp164 = $tmp162.value;
bool $tmp165 = $tmp163 == $tmp164;
frost$core$Bit $tmp166 = frost$core$Bit$init$builtin_bit($tmp165);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:198
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp168 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
// begin inline call to method org.frostlang.frostc.Type.StringType():org.frostlang.frostc.Type from Analyzer.frost:198:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:295
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp169 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp170 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:295:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp171 = &(&local10)->$rawValue;
*$tmp171 = $tmp170;
org$frostlang$frostc$Type$Kind $tmp172 = *(&local10);
*(&local9) = $tmp172;
org$frostlang$frostc$Type$Kind $tmp173 = *(&local9);
org$frostlang$frostc$Position $tmp174 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp175 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp169, &$s176, $tmp173, $tmp174, $tmp175);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp168, $tmp169);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
return $tmp168;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:201
frost$core$Int64 $tmp177 = (frost$core$Int64) {201};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:201:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn179 $tmp178 = ($fn179) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp180 = $tmp178(((frost$core$Object*) param1));
frost$core$String* $tmp181 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s182, $tmp180);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$String* $tmp183 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp181, &$s184);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s185, $tmp177, $tmp183);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
abort(); // unreachable
block1:;
goto block37;
block37:;

}
void org$frostlang$frostc$pass$Analyzer$propagate$org$frostlang$frostc$pass$Analyzer$BlockExit$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$pass$Analyzer$BlockExit param1, org$frostlang$frostc$IR$Block$ID param2) {

frost$collections$HashSet* local0 = NULL;
frost$core$Bit local1;
frost$collections$Iterator* local2 = NULL;
org$frostlang$frostc$pass$Analyzer$State* local3 = NULL;
org$frostlang$frostc$pass$Analyzer$BlockExit local4;
frost$core$Bit local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:207
frost$collections$HashMap** $tmp186 = &param0->predecessors;
frost$collections$HashMap* $tmp187 = *$tmp186;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp188;
$tmp188 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp188->value = param2;
frost$core$Object* $tmp189 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp187, ((frost$collections$Key*) $tmp188));
*(&local0) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp189)));
frost$collections$HashSet* $tmp190 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local0) = ((frost$collections$HashSet*) $tmp189);
frost$core$Frost$unref$frost$core$Object$Q($tmp189);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp188)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:208
frost$collections$HashSet* $tmp191 = *(&local0);
frost$core$Bit $tmp192 = frost$core$Bit$init$builtin_bit($tmp191 == NULL);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:209
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp194 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp194);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$collections$HashSet* $tmp195 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local0) = $tmp194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:210
frost$collections$HashMap** $tmp196 = &param0->predecessors;
frost$collections$HashMap* $tmp197 = *$tmp196;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp198;
$tmp198 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp198->value = param2;
frost$collections$HashSet* $tmp199 = *(&local0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp197, ((frost$collections$Key*) $tmp198), ((frost$core$Object*) $tmp199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp198)));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:212
frost$collections$HashSet* $tmp200 = *(&local0);
org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper* $tmp201;
$tmp201 = (org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$BlockExit$wrapperclass);
$tmp201->value = param1;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:212:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:8
frost$collections$HashMap** $tmp202 = &$tmp200->contents;
frost$collections$HashMap* $tmp203 = *$tmp202;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp203, ((frost$collections$Key*) $tmp201), ((frost$core$Object*) ((frost$collections$Key*) $tmp201)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp201)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:213
frost$core$Bit $tmp204 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp204;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:214
frost$collections$HashSet* $tmp205 = *(&local0);
ITable* $tmp206 = ((frost$collections$Iterable*) $tmp205)->$class->itable;
while ($tmp206->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp206 = $tmp206->next;
}
$fn208 $tmp207 = $tmp206->methods[0];
frost$collections$Iterator* $tmp209 = $tmp207(((frost$collections$Iterable*) $tmp205));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
frost$collections$Iterator* $tmp210 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local2) = $tmp209;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:215
frost$collections$HashMap** $tmp211 = &param0->entryStates;
frost$collections$HashMap* $tmp212 = *$tmp211;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp213;
$tmp213 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp213->value = param2;
frost$core$Object* $tmp214 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp212, ((frost$collections$Key*) $tmp213));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp214)));
org$frostlang$frostc$pass$Analyzer$State* $tmp215 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) $tmp214);
frost$core$Frost$unref$frost$core$Object$Q($tmp214);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp213)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:216
org$frostlang$frostc$pass$Analyzer$State* $tmp216 = *(&local3);
frost$core$Bit $tmp217 = frost$core$Bit$init$builtin_bit($tmp216 == NULL);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:217
frost$collections$Iterator* $tmp219 = *(&local2);
ITable* $tmp220 = $tmp219->$class->itable;
while ($tmp220->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp220 = $tmp220->next;
}
$fn222 $tmp221 = $tmp220->methods[1];
frost$core$Object* $tmp223 = $tmp221($tmp219);
frost$core$Bit $tmp224 = frost$core$Bit$init$builtin_bit(false);
$fn226 $tmp225 = ($fn226) param0->$class->vtable[7];
org$frostlang$frostc$pass$Analyzer$State* $tmp227 = $tmp225(param0, ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) $tmp223)->value, $tmp224);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
org$frostlang$frostc$pass$Analyzer$State* $tmp228 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
*(&local3) = $tmp227;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q($tmp223);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:218
frost$collections$HashMap** $tmp229 = &param0->entryStates;
frost$collections$HashMap* $tmp230 = *$tmp229;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp231;
$tmp231 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp231->value = param2;
org$frostlang$frostc$pass$Analyzer$State* $tmp232 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp230, ((frost$collections$Key*) $tmp231), ((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp231)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:219
frost$core$Bit $tmp233 = frost$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp233;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:221
frost$collections$Iterator* $tmp234 = *(&local2);
goto block6;
block6:;
ITable* $tmp235 = $tmp234->$class->itable;
while ($tmp235->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp235 = $tmp235->next;
}
$fn237 $tmp236 = $tmp235->methods[0];
frost$core$Bit $tmp238 = $tmp236($tmp234);
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block8; else goto block7;
block7:;
ITable* $tmp240 = $tmp234->$class->itable;
while ($tmp240->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp240 = $tmp240->next;
}
$fn242 $tmp241 = $tmp240->methods[1];
frost$core$Object* $tmp243 = $tmp241($tmp234);
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) $tmp243)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:222
frost$core$Bit $tmp244 = *(&local1);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block9; else goto block10;
block9:;
*(&local5) = $tmp244;
goto block11;
block10:;
org$frostlang$frostc$pass$Analyzer$State* $tmp246 = *(&local3);
org$frostlang$frostc$Compiler** $tmp247 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp248 = *$tmp247;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp249 = *(&local4);
frost$core$Bit $tmp250 = frost$core$Bit$init$builtin_bit(false);
$fn252 $tmp251 = ($fn252) param0->$class->vtable[7];
org$frostlang$frostc$pass$Analyzer$State* $tmp253 = $tmp251(param0, $tmp249, $tmp250);
$fn255 $tmp254 = ($fn255) $tmp246->$class->vtable[2];
frost$core$Bit $tmp256 = $tmp254($tmp246, $tmp248, $tmp253);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
*(&local5) = $tmp256;
goto block11;
block11:;
frost$core$Bit $tmp257 = *(&local5);
*(&local1) = $tmp257;
frost$core$Frost$unref$frost$core$Object$Q($tmp243);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:224
frost$core$Bit $tmp258 = *(&local1);
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:225
frost$collections$HashSet** $tmp260 = &param0->worklist;
frost$collections$HashSet* $tmp261 = *$tmp260;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp262;
$tmp262 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp262->value = param2;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:225:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:8
frost$collections$HashMap** $tmp263 = &$tmp261->contents;
frost$collections$HashMap* $tmp264 = *$tmp263;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp264, ((frost$collections$Key*) $tmp262), ((frost$core$Object*) ((frost$collections$Key*) $tmp262)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp262)));
goto block13;
block13:;
org$frostlang$frostc$pass$Analyzer$State* $tmp265 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$collections$Iterator* $tmp266 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$collections$HashSet* $tmp267 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local0) = ((frost$collections$HashSet*) NULL);
return;

}
org$frostlang$frostc$IR$Block* org$frostlang$frostc$pass$Analyzer$getBlock$org$frostlang$frostc$IR$Block$ID$R$org$frostlang$frostc$IR$Block(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Block$ID param1) {

org$frostlang$frostc$IR$Block* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:230
org$frostlang$frostc$IR** $tmp268 = &param0->ir;
org$frostlang$frostc$IR* $tmp269 = *$tmp268;
frost$collections$Array** $tmp270 = &$tmp269->blocks;
frost$collections$Array* $tmp271 = *$tmp270;
ITable* $tmp272 = ((frost$collections$Iterable*) $tmp271)->$class->itable;
while ($tmp272->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp272 = $tmp272->next;
}
$fn274 $tmp273 = $tmp272->methods[0];
frost$collections$Iterator* $tmp275 = $tmp273(((frost$collections$Iterable*) $tmp271));
goto block1;
block1:;
ITable* $tmp276 = $tmp275->$class->itable;
while ($tmp276->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp276 = $tmp276->next;
}
$fn278 $tmp277 = $tmp276->methods[0];
frost$core$Bit $tmp279 = $tmp277($tmp275);
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp281 = $tmp275->$class->itable;
while ($tmp281->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp281 = $tmp281->next;
}
$fn283 $tmp282 = $tmp281->methods[1];
frost$core$Object* $tmp284 = $tmp282($tmp275);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp284)));
org$frostlang$frostc$IR$Block* $tmp285 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
*(&local0) = ((org$frostlang$frostc$IR$Block*) $tmp284);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:231
org$frostlang$frostc$IR$Block* $tmp286 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp287 = &$tmp286->id;
org$frostlang$frostc$IR$Block$ID $tmp288 = *$tmp287;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:231:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int64 $tmp289 = $tmp288.value;
frost$core$Int64 $tmp290 = param1.value;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp291 = $tmp289.value;
int64_t $tmp292 = $tmp290.value;
bool $tmp293 = $tmp291 == $tmp292;
frost$core$Bit $tmp294 = frost$core$Bit$init$builtin_bit($tmp293);
bool $tmp295 = $tmp294.value;
if ($tmp295) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:232
org$frostlang$frostc$IR$Block* $tmp296 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$Frost$unref$frost$core$Object$Q($tmp284);
org$frostlang$frostc$IR$Block* $tmp297 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
return $tmp296;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp284);
org$frostlang$frostc$IR$Block* $tmp298 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:235
frost$core$Int64 $tmp299 = (frost$core$Int64) {235};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s300, $tmp299);
abort(); // unreachable

}
void org$frostlang$frostc$pass$Analyzer$updateStateForExitIndex$org$frostlang$frostc$IR$Block$frost$core$Int64$org$frostlang$frostc$pass$Analyzer$State(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Block* param1, frost$core$Int64 param2, org$frostlang$frostc$pass$Analyzer$State* param3) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local1 = NULL;
org$frostlang$frostc$Pair* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
frost$core$Int64 local8;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:251
frost$collections$Array** $tmp301 = &param1->statements;
frost$collections$Array* $tmp302 = *$tmp301;
frost$collections$Array** $tmp303 = &param1->statements;
frost$collections$Array* $tmp304 = *$tmp303;
ITable* $tmp305 = ((frost$collections$CollectionView*) $tmp304)->$class->itable;
while ($tmp305->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp305 = $tmp305->next;
}
$fn307 $tmp306 = $tmp305->methods[0];
frost$core$Int64 $tmp308 = $tmp306(((frost$collections$CollectionView*) $tmp304));
frost$core$Int64 $tmp309 = (frost$core$Int64) {1};
int64_t $tmp310 = $tmp308.value;
int64_t $tmp311 = $tmp309.value;
int64_t $tmp312 = $tmp310 - $tmp311;
frost$core$Int64 $tmp313 = (frost$core$Int64) {$tmp312};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:251:27
frost$core$Int64 $tmp314 = (frost$core$Int64) {0};
int64_t $tmp315 = $tmp313.value;
int64_t $tmp316 = $tmp314.value;
bool $tmp317 = $tmp315 >= $tmp316;
frost$core$Bit $tmp318 = (frost$core$Bit) {$tmp317};
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block4; else goto block3;
block4:;
ITable* $tmp320 = ((frost$collections$CollectionView*) $tmp302)->$class->itable;
while ($tmp320->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp320 = $tmp320->next;
}
$fn322 $tmp321 = $tmp320->methods[0];
frost$core$Int64 $tmp323 = $tmp321(((frost$collections$CollectionView*) $tmp302));
int64_t $tmp324 = $tmp313.value;
int64_t $tmp325 = $tmp323.value;
bool $tmp326 = $tmp324 < $tmp325;
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326};
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp329 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s330, $tmp329, &$s331);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp332 = &$tmp302->data;
frost$core$Object** $tmp333 = *$tmp332;
int64_t $tmp334 = $tmp313.value;
frost$core$Object* $tmp335 = $tmp333[$tmp334];
frost$core$Frost$ref$frost$core$Object$Q($tmp335);
frost$core$Int64* $tmp336 = &((org$frostlang$frostc$IR$Statement*) $tmp335)->$rawValue;
frost$core$Int64 $tmp337 = *$tmp336;
frost$core$Int64 $tmp338 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:252:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp339 = $tmp337.value;
int64_t $tmp340 = $tmp338.value;
bool $tmp341 = $tmp339 == $tmp340;
frost$core$Bit $tmp342 = frost$core$Bit$init$builtin_bit($tmp341);
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp344 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp335)->$data + 0);
org$frostlang$frostc$Position $tmp345 = *$tmp344;
org$frostlang$frostc$IR$Value** $tmp346 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp335)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp347 = *$tmp346;
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
org$frostlang$frostc$IR$Value* $tmp348 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
*(&local0) = $tmp347;
org$frostlang$frostc$IR$Block$ID* $tmp349 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp335)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp350 = *$tmp349;
org$frostlang$frostc$IR$Block$ID* $tmp351 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp335)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp352 = *$tmp351;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:253
org$frostlang$frostc$IR$Value* $tmp353 = *(&local0);
$fn355 $tmp354 = ($fn355) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp356 = $tmp354(param0, $tmp353, param3);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp357 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local1) = $tmp356;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:254
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp358 = *(&local1);
frost$collections$ListView** $tmp359 = &$tmp358->nonNullImplications;
frost$collections$ListView* $tmp360 = *$tmp359;
frost$core$Bit $tmp361 = frost$core$Bit$init$builtin_bit($tmp360 != NULL);
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:255
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp363 = *(&local1);
frost$collections$ListView** $tmp364 = &$tmp363->nonNullImplications;
frost$collections$ListView* $tmp365 = *$tmp364;
ITable* $tmp366 = ((frost$collections$Iterable*) $tmp365)->$class->itable;
while ($tmp366->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp366 = $tmp366->next;
}
$fn368 $tmp367 = $tmp366->methods[0];
frost$collections$Iterator* $tmp369 = $tmp367(((frost$collections$Iterable*) $tmp365));
goto block11;
block11:;
ITable* $tmp370 = $tmp369->$class->itable;
while ($tmp370->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp370 = $tmp370->next;
}
$fn372 $tmp371 = $tmp370->methods[0];
frost$core$Bit $tmp373 = $tmp371($tmp369);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block13; else goto block12;
block12:;
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp375 = $tmp369->$class->itable;
while ($tmp375->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp375 = $tmp375->next;
}
$fn377 $tmp376 = $tmp375->methods[1];
frost$core$Object* $tmp378 = $tmp376($tmp369);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) $tmp378)));
org$frostlang$frostc$Pair* $tmp379 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local2) = ((org$frostlang$frostc$Pair*) $tmp378);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:256
org$frostlang$frostc$Pair* $tmp380 = *(&local2);
frost$core$Object** $tmp381 = &$tmp380->second;
frost$core$Object* $tmp382 = *$tmp381;
frost$core$Int64 $tmp383 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:256:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp384 = param2.value;
int64_t $tmp385 = $tmp383.value;
bool $tmp386 = $tmp384 == $tmp385;
frost$core$Bit $tmp387 = frost$core$Bit$init$builtin_bit($tmp386);
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Analyzer.frost:256:40
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:20
bool $tmp388 = ((frost$core$Bit$wrapper*) $tmp382)->value.value;
bool $tmp389 = $tmp387.value;
bool $tmp390 = $tmp388 == $tmp389;
frost$core$Bit $tmp391 = frost$core$Bit$init$builtin_bit($tmp390);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:257
org$frostlang$frostc$Pair* $tmp393 = *(&local2);
frost$core$Object** $tmp394 = &$tmp393->first;
frost$core$Object* $tmp395 = *$tmp394;
frost$core$Int64* $tmp396 = &((org$frostlang$frostc$IR$Value*) $tmp395)->$rawValue;
frost$core$Int64 $tmp397 = *$tmp396;
frost$core$Int64 $tmp398 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:258:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp399 = $tmp397.value;
int64_t $tmp400 = $tmp398.value;
bool $tmp401 = $tmp399 == $tmp400;
frost$core$Bit $tmp402 = frost$core$Bit$init$builtin_bit($tmp401);
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block19; else goto block20;
block19:;
org$frostlang$frostc$IR$Statement$ID* $tmp404 = (org$frostlang$frostc$IR$Statement$ID*) (((org$frostlang$frostc$IR$Value*) $tmp395)->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp405 = *$tmp404;
*(&local3) = $tmp405;
org$frostlang$frostc$Type** $tmp406 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Value*) $tmp395)->$data + 8);
org$frostlang$frostc$Type* $tmp407 = *$tmp406;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:259
frost$collections$HashMap** $tmp408 = &param3->statements;
frost$collections$HashMap* $tmp409 = *$tmp408;
org$frostlang$frostc$IR$Statement$ID $tmp410 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp411;
$tmp411 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp411->value = $tmp410;
frost$core$Object* $tmp412 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp409, ((frost$collections$Key*) $tmp411));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp412)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp413 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp412);
frost$core$Frost$unref$frost$core$Object$Q($tmp412);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp411)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:260
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp414 = *(&local4);
frost$core$Bit $tmp415 = frost$core$Bit$init$builtin_bit($tmp414 != NULL);
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp417 = (frost$core$Int64) {260};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s418, $tmp417);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:261
frost$collections$HashMap** $tmp419 = &param3->statements;
frost$collections$HashMap* $tmp420 = *$tmp419;
org$frostlang$frostc$IR$Statement$ID $tmp421 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp422;
$tmp422 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp422->value = $tmp421;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp423 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp424 = *(&local4);
org$frostlang$frostc$Type** $tmp425 = &$tmp424->type;
org$frostlang$frostc$Type* $tmp426 = *$tmp425;
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Analyzer.frost:261:95
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp427 = &$tmp426->typeKind;
org$frostlang$frostc$Type$Kind $tmp428 = *$tmp427;
org$frostlang$frostc$Type$Kind$wrapper* $tmp429;
$tmp429 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp429->value = $tmp428;
frost$core$Int64 $tmp430 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp431 = &(&local7)->$rawValue;
*$tmp431 = $tmp430;
org$frostlang$frostc$Type$Kind $tmp432 = *(&local7);
*(&local6) = $tmp432;
org$frostlang$frostc$Type$Kind $tmp433 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp434;
$tmp434 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp434->value = $tmp433;
ITable* $tmp435 = ((frost$core$Equatable*) $tmp429)->$class->itable;
while ($tmp435->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp435 = $tmp435->next;
}
$fn437 $tmp436 = $tmp435->methods[1];
frost$core$Bit $tmp438 = $tmp436(((frost$core$Equatable*) $tmp429), ((frost$core$Equatable*) $tmp434));
bool $tmp439 = $tmp438.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp434)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp429)));
if ($tmp439) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
*(&local5) = $tmp426;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
goto block24;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp440 = &$tmp426->_subtypes;
org$frostlang$frostc$FixedArray* $tmp441 = *$tmp440;
frost$core$Bit $tmp442 = frost$core$Bit$init$builtin_bit($tmp441 != NULL);
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp444 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s445, $tmp444);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp446 = &$tmp426->_subtypes;
org$frostlang$frostc$FixedArray* $tmp447 = *$tmp446;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$Int64 $tmp448 = (frost$core$Int64) {0};
frost$core$Object* $tmp449 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp447, $tmp448);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp449)));
frost$core$Frost$unref$frost$core$Object$Q($tmp449);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp449);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp449)));
goto block24;
block24:;
org$frostlang$frostc$Type* $tmp450 = *(&local5);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp423, $tmp450);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp420, ((frost$collections$Key*) $tmp422), ((frost$core$Object*) $tmp423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
org$frostlang$frostc$Type* $tmp451 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp422)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp452 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
goto block18;
block20:;
frost$core$Int64 $tmp453 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:263:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp454 = $tmp397.value;
int64_t $tmp455 = $tmp453.value;
bool $tmp456 = $tmp454 == $tmp455;
frost$core$Bit $tmp457 = frost$core$Bit$init$builtin_bit($tmp456);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block31; else goto block18;
block31:;
frost$core$Int64* $tmp459 = (frost$core$Int64*) (((org$frostlang$frostc$IR$Value*) $tmp395)->$data + 0);
frost$core$Int64 $tmp460 = *$tmp459;
*(&local8) = $tmp460;
org$frostlang$frostc$Type** $tmp461 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Value*) $tmp395)->$data + 8);
org$frostlang$frostc$Type* $tmp462 = *$tmp461;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:264
frost$collections$Array** $tmp463 = &param3->locals;
frost$collections$Array* $tmp464 = *$tmp463;
frost$core$Int64 $tmp465 = *(&local8);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:264:60
frost$core$Int64 $tmp466 = (frost$core$Int64) {0};
int64_t $tmp467 = $tmp465.value;
int64_t $tmp468 = $tmp466.value;
bool $tmp469 = $tmp467 >= $tmp468;
frost$core$Bit $tmp470 = (frost$core$Bit) {$tmp469};
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block36; else goto block35;
block36:;
ITable* $tmp472 = ((frost$collections$CollectionView*) $tmp464)->$class->itable;
while ($tmp472->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp472 = $tmp472->next;
}
$fn474 $tmp473 = $tmp472->methods[0];
frost$core$Int64 $tmp475 = $tmp473(((frost$collections$CollectionView*) $tmp464));
int64_t $tmp476 = $tmp465.value;
int64_t $tmp477 = $tmp475.value;
bool $tmp478 = $tmp476 < $tmp477;
frost$core$Bit $tmp479 = (frost$core$Bit) {$tmp478};
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp481 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s482, $tmp481, &$s483);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp484 = &$tmp464->data;
frost$core$Object** $tmp485 = *$tmp484;
int64_t $tmp486 = $tmp465.value;
frost$core$Object* $tmp487 = $tmp485[$tmp486];
frost$core$Frost$ref$frost$core$Object$Q($tmp487);
*(&local9) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp487)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp488 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
*(&local9) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp487);
frost$core$Frost$unref$frost$core$Object$Q($tmp487);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:265
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp489 = *(&local9);
frost$core$Bit $tmp490 = frost$core$Bit$init$builtin_bit(true);
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp492 = (frost$core$Int64) {265};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s493, $tmp492);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:266
frost$collections$Array** $tmp494 = &param3->locals;
frost$collections$Array* $tmp495 = *$tmp494;
frost$core$Int64 $tmp496 = *(&local8);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp497 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp498 = *(&local9);
org$frostlang$frostc$Type** $tmp499 = &$tmp498->type;
org$frostlang$frostc$Type* $tmp500 = *$tmp499;
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Analyzer.frost:266:93
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:643
org$frostlang$frostc$Type$Kind* $tmp501 = &$tmp500->typeKind;
org$frostlang$frostc$Type$Kind $tmp502 = *$tmp501;
org$frostlang$frostc$Type$Kind$wrapper* $tmp503;
$tmp503 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp503->value = $tmp502;
frost$core$Int64 $tmp504 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:643:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp505 = &(&local12)->$rawValue;
*$tmp505 = $tmp504;
org$frostlang$frostc$Type$Kind $tmp506 = *(&local12);
*(&local11) = $tmp506;
org$frostlang$frostc$Type$Kind $tmp507 = *(&local11);
org$frostlang$frostc$Type$Kind$wrapper* $tmp508;
$tmp508 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp508->value = $tmp507;
ITable* $tmp509 = ((frost$core$Equatable*) $tmp503)->$class->itable;
while ($tmp509->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp509 = $tmp509->next;
}
$fn511 $tmp510 = $tmp509->methods[1];
frost$core$Bit $tmp512 = $tmp510(((frost$core$Equatable*) $tmp503), ((frost$core$Equatable*) $tmp508));
bool $tmp513 = $tmp512.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp508)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp503)));
if ($tmp513) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local10) = $tmp500;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
goto block39;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:646
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:646:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp514 = &$tmp500->_subtypes;
org$frostlang$frostc$FixedArray* $tmp515 = *$tmp514;
frost$core$Bit $tmp516 = frost$core$Bit$init$builtin_bit($tmp515 != NULL);
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp518 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s519, $tmp518);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp520 = &$tmp500->_subtypes;
org$frostlang$frostc$FixedArray* $tmp521 = *$tmp520;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
frost$core$Int64 $tmp522 = (frost$core$Int64) {0};
frost$core$Object* $tmp523 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp521, $tmp522);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp523)));
frost$core$Frost$unref$frost$core$Object$Q($tmp523);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
*(&local10) = ((org$frostlang$frostc$Type*) $tmp523);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp523)));
goto block39;
block39:;
org$frostlang$frostc$Type* $tmp524 = *(&local10);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp497, $tmp524);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int64, value:frost.collections.Array.T) from Analyzer.frost:266:49
frost$core$Int64 $tmp525 = (frost$core$Int64) {0};
int64_t $tmp526 = $tmp496.value;
int64_t $tmp527 = $tmp525.value;
bool $tmp528 = $tmp526 >= $tmp527;
frost$core$Bit $tmp529 = (frost$core$Bit) {$tmp528};
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block49; else goto block48;
block49:;
ITable* $tmp531 = ((frost$collections$CollectionView*) $tmp495)->$class->itable;
while ($tmp531->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp531 = $tmp531->next;
}
$fn533 $tmp532 = $tmp531->methods[0];
frost$core$Int64 $tmp534 = $tmp532(((frost$collections$CollectionView*) $tmp495));
int64_t $tmp535 = $tmp496.value;
int64_t $tmp536 = $tmp534.value;
bool $tmp537 = $tmp535 < $tmp536;
frost$core$Bit $tmp538 = (frost$core$Bit) {$tmp537};
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp540 = (frost$core$Int64) {27};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s541, $tmp540, &$s542);
abort(); // unreachable
block47:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:27
frost$core$Object*** $tmp543 = &$tmp495->data;
frost$core$Object** $tmp544 = *$tmp543;
int64_t $tmp545 = $tmp496.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Object* $tmp546 = $tmp544[$tmp545];
frost$core$Frost$unref$frost$core$Object$Q($tmp546);
$tmp544[$tmp545] = ((frost$core$Object*) $tmp497);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
org$frostlang$frostc$Type* $tmp547 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp548 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
*(&local9) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
goto block18;
block18:;
goto block15;
block15:;
frost$core$Frost$unref$frost$core$Object$Q($tmp378);
org$frostlang$frostc$Pair* $tmp549 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block11;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
goto block10;
block10:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp550 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp551 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp335);
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:275
frost$core$Frost$unref$frost$core$Object$Q($tmp335);
return;

}
org$frostlang$frostc$pass$Analyzer$DataFlowValue* org$frostlang$frostc$pass$Analyzer$binaryValue$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$pass$Analyzer$State$org$frostlang$frostc$Type$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$pass$Analyzer$State* param4, org$frostlang$frostc$Type* param5) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
frost$core$Bit local2;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$IR$Statement$ID local4;
org$frostlang$frostc$IR$Statement* local5 = NULL;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
frost$core$Bit local9;
frost$collections$Array* local10 = NULL;
org$frostlang$frostc$IR$Statement$ID local11;
org$frostlang$frostc$IR$Statement* local12 = NULL;
org$frostlang$frostc$IR$Value* local13 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:282
frost$core$Int64 $tmp552 = param2.$rawValue;
frost$core$Int64 $tmp553 = (frost$core$Int64) {22};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:283:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp554 = $tmp552.value;
int64_t $tmp555 = $tmp553.value;
bool $tmp556 = $tmp554 == $tmp555;
frost$core$Bit $tmp557 = frost$core$Bit$init$builtin_bit($tmp556);
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:284
frost$core$Int64* $tmp559 = &param3->$rawValue;
frost$core$Int64 $tmp560 = *$tmp559;
frost$core$Int64 $tmp561 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:285:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp562 = $tmp560.value;
int64_t $tmp563 = $tmp561.value;
bool $tmp564 = $tmp562 == $tmp563;
frost$core$Bit $tmp565 = frost$core$Bit$init$builtin_bit($tmp564);
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block6; else goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:286
// begin inline call to method org.frostlang.frostc.Type.BuiltinBit():org.frostlang.frostc.Type from Analyzer.frost:286:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:457
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp567 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp568 = (frost$core$Int64) {8};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:457:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp569 = &(&local1)->$rawValue;
*$tmp569 = $tmp568;
org$frostlang$frostc$Type$Kind $tmp570 = *(&local1);
*(&local0) = $tmp570;
org$frostlang$frostc$Type$Kind $tmp571 = *(&local0);
org$frostlang$frostc$Position $tmp572 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp573 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp567, &$s574, $tmp571, $tmp572, $tmp573);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:286:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp575 = &((org$frostlang$frostc$Symbol*) param5)->name;
frost$core$String* $tmp576 = *$tmp575;
frost$core$String** $tmp577 = &((org$frostlang$frostc$Symbol*) $tmp567)->name;
frost$core$String* $tmp578 = *$tmp577;
frost$core$Bit $tmp579 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp576, $tmp578);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Type$Kind* $tmp581 = &param5->typeKind;
org$frostlang$frostc$Type$Kind $tmp582 = *$tmp581;
org$frostlang$frostc$Type$Kind$wrapper* $tmp583;
$tmp583 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp583->value = $tmp582;
org$frostlang$frostc$Type$Kind* $tmp584 = &$tmp567->typeKind;
org$frostlang$frostc$Type$Kind $tmp585 = *$tmp584;
org$frostlang$frostc$Type$Kind$wrapper* $tmp586;
$tmp586 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp586->value = $tmp585;
ITable* $tmp587 = ((frost$core$Equatable*) $tmp583)->$class->itable;
while ($tmp587->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp587 = $tmp587->next;
}
$fn589 $tmp588 = $tmp587->methods[0];
frost$core$Bit $tmp590 = $tmp588(((frost$core$Equatable*) $tmp583), ((frost$core$Equatable*) $tmp586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp586)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp583)));
*(&local2) = $tmp590;
goto block13;
block12:;
*(&local2) = $tmp579;
goto block13;
block13:;
frost$core$Bit $tmp591 = *(&local2);
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp593 = (frost$core$Int64) {286};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s594, $tmp593);
abort(); // unreachable
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:287
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp595 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp596 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp595, $tmp596);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp597 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp598 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp599;
$tmp599 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp599->value = $tmp598;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp597, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp599));
frost$collections$Array$add$frost$collections$Array$T($tmp595, ((frost$core$Object*) $tmp597));
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$collections$Array* $tmp600 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local3) = $tmp595;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:288
frost$core$Int64* $tmp601 = &param1->$rawValue;
frost$core$Int64 $tmp602 = *$tmp601;
frost$core$Int64 $tmp603 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:289:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp604 = $tmp602.value;
int64_t $tmp605 = $tmp603.value;
bool $tmp606 = $tmp604 == $tmp605;
frost$core$Bit $tmp607 = frost$core$Bit$init$builtin_bit($tmp606);
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block17; else goto block16;
block17:;
org$frostlang$frostc$IR$Statement$ID* $tmp609 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp610 = *$tmp609;
*(&local4) = $tmp610;
org$frostlang$frostc$Type** $tmp611 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp612 = *$tmp611;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:290
frost$collections$HashMap** $tmp613 = &param0->statements;
frost$collections$HashMap* $tmp614 = *$tmp613;
org$frostlang$frostc$IR$Statement$ID $tmp615 = *(&local4);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp616;
$tmp616 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp616->value = $tmp615;
frost$core$Object* $tmp617 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp614, ((frost$collections$Key*) $tmp616));
*(&local5) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp617)));
org$frostlang$frostc$IR$Statement* $tmp618 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
*(&local5) = ((org$frostlang$frostc$IR$Statement*) $tmp617);
frost$core$Frost$unref$frost$core$Object$Q($tmp617);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp616)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:291
org$frostlang$frostc$IR$Statement* $tmp619 = *(&local5);
frost$core$Int64* $tmp620 = &$tmp619->$rawValue;
frost$core$Int64 $tmp621 = *$tmp620;
frost$core$Int64 $tmp622 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:292:54
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp623 = $tmp621.value;
int64_t $tmp624 = $tmp622.value;
bool $tmp625 = $tmp623 == $tmp624;
frost$core$Bit $tmp626 = frost$core$Bit$init$builtin_bit($tmp625);
bool $tmp627 = $tmp626.value;
if ($tmp627) goto block20; else goto block19;
block20:;
org$frostlang$frostc$Position* $tmp628 = (org$frostlang$frostc$Position*) ($tmp619->$data + 0);
org$frostlang$frostc$Position $tmp629 = *$tmp628;
org$frostlang$frostc$IR$Value** $tmp630 = (org$frostlang$frostc$IR$Value**) ($tmp619->$data + 24);
org$frostlang$frostc$IR$Value* $tmp631 = *$tmp630;
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
org$frostlang$frostc$IR$Value* $tmp632 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
*(&local6) = $tmp631;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:293
frost$collections$Array* $tmp633 = *(&local3);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp634 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$IR$Value* $tmp635 = *(&local6);
frost$core$Bit $tmp636 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp637;
$tmp637 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp637->value = $tmp636;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp634, ((frost$core$Object*) $tmp635), ((frost$core$Object*) $tmp637));
frost$collections$Array$add$frost$collections$Array$T($tmp633, ((frost$core$Object*) $tmp634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
org$frostlang$frostc$IR$Value* $tmp638 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block19;
block19:;
org$frostlang$frostc$IR$Statement* $tmp639 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local5) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block16;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:298
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp640 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
frost$collections$Array* $tmp641 = *(&local3);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp640, param5, ((frost$collections$ListView*) $tmp641));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$collections$Array* $tmp642 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
*(&local3) = ((frost$collections$Array*) NULL);
return $tmp640;
block5:;
goto block1;
block3:;
frost$core$Int64 $tmp643 = (frost$core$Int64) {21};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:302:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp644 = $tmp552.value;
int64_t $tmp645 = $tmp643.value;
bool $tmp646 = $tmp644 == $tmp645;
frost$core$Bit $tmp647 = frost$core$Bit$init$builtin_bit($tmp646);
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block22; else goto block1;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:303
frost$core$Int64* $tmp649 = &param3->$rawValue;
frost$core$Int64 $tmp650 = *$tmp649;
frost$core$Int64 $tmp651 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:304:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp652 = $tmp650.value;
int64_t $tmp653 = $tmp651.value;
bool $tmp654 = $tmp652 == $tmp653;
frost$core$Bit $tmp655 = frost$core$Bit$init$builtin_bit($tmp654);
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block25; else goto block24;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:305
// begin inline call to method org.frostlang.frostc.Type.BuiltinBit():org.frostlang.frostc.Type from Analyzer.frost:305:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:457
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp657 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp658 = (frost$core$Int64) {8};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:457:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp659 = &(&local8)->$rawValue;
*$tmp659 = $tmp658;
org$frostlang$frostc$Type$Kind $tmp660 = *(&local8);
*(&local7) = $tmp660;
org$frostlang$frostc$Type$Kind $tmp661 = *(&local7);
org$frostlang$frostc$Position $tmp662 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp663 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp657, &$s664, $tmp661, $tmp662, $tmp663);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:305:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp665 = &((org$frostlang$frostc$Symbol*) param5)->name;
frost$core$String* $tmp666 = *$tmp665;
frost$core$String** $tmp667 = &((org$frostlang$frostc$Symbol*) $tmp657)->name;
frost$core$String* $tmp668 = *$tmp667;
frost$core$Bit $tmp669 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp666, $tmp668);
bool $tmp670 = $tmp669.value;
if ($tmp670) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Type$Kind* $tmp671 = &param5->typeKind;
org$frostlang$frostc$Type$Kind $tmp672 = *$tmp671;
org$frostlang$frostc$Type$Kind$wrapper* $tmp673;
$tmp673 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp673->value = $tmp672;
org$frostlang$frostc$Type$Kind* $tmp674 = &$tmp657->typeKind;
org$frostlang$frostc$Type$Kind $tmp675 = *$tmp674;
org$frostlang$frostc$Type$Kind$wrapper* $tmp676;
$tmp676 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp676->value = $tmp675;
ITable* $tmp677 = ((frost$core$Equatable*) $tmp673)->$class->itable;
while ($tmp677->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp677 = $tmp677->next;
}
$fn679 $tmp678 = $tmp677->methods[0];
frost$core$Bit $tmp680 = $tmp678(((frost$core$Equatable*) $tmp673), ((frost$core$Equatable*) $tmp676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp676)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp673)));
*(&local9) = $tmp680;
goto block32;
block31:;
*(&local9) = $tmp669;
goto block32;
block32:;
frost$core$Bit $tmp681 = *(&local9);
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp683 = (frost$core$Int64) {305};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s684, $tmp683);
abort(); // unreachable
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:306
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp685 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp686 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp685, $tmp686);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp687 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp688 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp689;
$tmp689 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp689->value = $tmp688;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp687, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp689));
frost$collections$Array$add$frost$collections$Array$T($tmp685, ((frost$core$Object*) $tmp687));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
frost$collections$Array* $tmp690 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
*(&local10) = $tmp685;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:307
frost$core$Int64* $tmp691 = &param1->$rawValue;
frost$core$Int64 $tmp692 = *$tmp691;
frost$core$Int64 $tmp693 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:308:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp694 = $tmp692.value;
int64_t $tmp695 = $tmp693.value;
bool $tmp696 = $tmp694 == $tmp695;
frost$core$Bit $tmp697 = frost$core$Bit$init$builtin_bit($tmp696);
bool $tmp698 = $tmp697.value;
if ($tmp698) goto block36; else goto block35;
block36:;
org$frostlang$frostc$IR$Statement$ID* $tmp699 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp700 = *$tmp699;
*(&local11) = $tmp700;
org$frostlang$frostc$Type** $tmp701 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp702 = *$tmp701;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:309
frost$collections$HashMap** $tmp703 = &param0->statements;
frost$collections$HashMap* $tmp704 = *$tmp703;
org$frostlang$frostc$IR$Statement$ID $tmp705 = *(&local11);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp706;
$tmp706 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp706->value = $tmp705;
frost$core$Object* $tmp707 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp704, ((frost$collections$Key*) $tmp706));
*(&local12) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp707)));
org$frostlang$frostc$IR$Statement* $tmp708 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
*(&local12) = ((org$frostlang$frostc$IR$Statement*) $tmp707);
frost$core$Frost$unref$frost$core$Object$Q($tmp707);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp706)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:310
org$frostlang$frostc$IR$Statement* $tmp709 = *(&local12);
frost$core$Int64* $tmp710 = &$tmp709->$rawValue;
frost$core$Int64 $tmp711 = *$tmp710;
frost$core$Int64 $tmp712 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:311:54
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp713 = $tmp711.value;
int64_t $tmp714 = $tmp712.value;
bool $tmp715 = $tmp713 == $tmp714;
frost$core$Bit $tmp716 = frost$core$Bit$init$builtin_bit($tmp715);
bool $tmp717 = $tmp716.value;
if ($tmp717) goto block39; else goto block38;
block39:;
org$frostlang$frostc$Position* $tmp718 = (org$frostlang$frostc$Position*) ($tmp709->$data + 0);
org$frostlang$frostc$Position $tmp719 = *$tmp718;
org$frostlang$frostc$IR$Value** $tmp720 = (org$frostlang$frostc$IR$Value**) ($tmp709->$data + 24);
org$frostlang$frostc$IR$Value* $tmp721 = *$tmp720;
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
org$frostlang$frostc$IR$Value* $tmp722 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local13) = $tmp721;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:312
frost$collections$Array* $tmp723 = *(&local10);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp724 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$IR$Value* $tmp725 = *(&local13);
frost$core$Bit $tmp726 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp727;
$tmp727 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp727->value = $tmp726;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp724, ((frost$core$Object*) $tmp725), ((frost$core$Object*) $tmp727));
frost$collections$Array$add$frost$collections$Array$T($tmp723, ((frost$core$Object*) $tmp724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
org$frostlang$frostc$IR$Value* $tmp728 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block38;
block38:;
org$frostlang$frostc$IR$Statement* $tmp729 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
*(&local12) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block35;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:317
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp730 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
frost$collections$Array* $tmp731 = *(&local10);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp730, param5, ((frost$collections$ListView*) $tmp731));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
frost$collections$Array* $tmp732 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
*(&local10) = ((frost$collections$Array*) NULL);
return $tmp730;
block24:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:323
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp733 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp733, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
return $tmp733;

}
org$frostlang$frostc$pass$Analyzer$State* org$frostlang$frostc$pass$Analyzer$computeExitState$org$frostlang$frostc$pass$Analyzer$BlockExit$frost$core$Bit$R$org$frostlang$frostc$pass$Analyzer$State(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$pass$Analyzer$BlockExit param1, frost$core$Bit param2) {

org$frostlang$frostc$pass$Analyzer$State* local0 = NULL;
org$frostlang$frostc$IR$Block* local1 = NULL;
frost$core$Int64 local2;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$expression$Binary$Operator local5;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$Type* local7 = NULL;
org$frostlang$frostc$Position local8;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
frost$core$Bit local11;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$Type$Kind local13;
org$frostlang$frostc$Type$Kind local14;
org$frostlang$frostc$Type$Kind local15;
org$frostlang$frostc$ClassDecl* local16 = NULL;
org$frostlang$frostc$IR$Value* local17 = NULL;
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
org$frostlang$frostc$Type$Kind local29;
org$frostlang$frostc$Type$Kind local30;
org$frostlang$frostc$Type$Kind local31;
org$frostlang$frostc$Type$Kind local32;
org$frostlang$frostc$Type$Kind local33;
org$frostlang$frostc$Type$Kind local34;
org$frostlang$frostc$IR$Value* local35 = NULL;
org$frostlang$frostc$FieldDecl* local36 = NULL;
org$frostlang$frostc$Type$Kind local37;
org$frostlang$frostc$Type$Kind local38;
frost$core$Bit local39;
org$frostlang$frostc$FieldDecl* local40 = NULL;
org$frostlang$frostc$Position local41;
org$frostlang$frostc$IR$Value* local42 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local43 = NULL;
org$frostlang$frostc$Type$Kind local44;
org$frostlang$frostc$Type$Kind local45;
frost$core$Bit local46;
org$frostlang$frostc$IR$Value* local47 = NULL;
org$frostlang$frostc$IR$Value* local48 = NULL;
org$frostlang$frostc$Type* local49 = NULL;
frost$collections$Array* local50 = NULL;
org$frostlang$frostc$Type$Kind local51;
org$frostlang$frostc$Type$Kind local52;
org$frostlang$frostc$IR$Value* local53 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local54 = NULL;
org$frostlang$frostc$IR$Value* local55 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local56 = NULL;
org$frostlang$frostc$IR$Value* local57 = NULL;
org$frostlang$frostc$IR$Value* local58 = NULL;
org$frostlang$frostc$MethodDecl* local59 = NULL;
org$frostlang$frostc$FixedArray* local60 = NULL;
org$frostlang$frostc$Type$Kind local61;
org$frostlang$frostc$Type$Kind local62;
frost$core$Bit local63;
org$frostlang$frostc$IR$Value* local64 = NULL;
org$frostlang$frostc$IR$Value* local65 = NULL;
frost$core$Int64 local66;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:327
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$State));
org$frostlang$frostc$pass$Analyzer$State* $tmp734 = (org$frostlang$frostc$pass$Analyzer$State*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$State$class);
frost$collections$HashMap** $tmp735 = &param0->entryStates;
frost$collections$HashMap* $tmp736 = *$tmp735;
org$frostlang$frostc$IR$Block$ID $tmp737 = param1.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp738;
$tmp738 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp738->value = $tmp737;
frost$core$Object* $tmp739 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp736, ((frost$collections$Key*) $tmp738));
org$frostlang$frostc$pass$Analyzer$State$init$org$frostlang$frostc$pass$Analyzer$State($tmp734, ((org$frostlang$frostc$pass$Analyzer$State*) $tmp739));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
org$frostlang$frostc$pass$Analyzer$State* $tmp740 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local0) = $tmp734;
frost$core$Frost$unref$frost$core$Object$Q($tmp739);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp738)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:328
org$frostlang$frostc$IR$Block$ID $tmp741 = param1.id;
$fn743 $tmp742 = ($fn743) param0->$class->vtable[4];
org$frostlang$frostc$IR$Block* $tmp744 = $tmp742(param0, $tmp741);
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
org$frostlang$frostc$IR$Block* $tmp745 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
*(&local1) = $tmp744;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:329
frost$core$Int64 $tmp746 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block* $tmp747 = *(&local1);
frost$collections$Array** $tmp748 = &$tmp747->statements;
frost$collections$Array* $tmp749 = *$tmp748;
ITable* $tmp750 = ((frost$collections$CollectionView*) $tmp749)->$class->itable;
while ($tmp750->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp750 = $tmp750->next;
}
$fn752 $tmp751 = $tmp750->methods[0];
frost$core$Int64 $tmp753 = $tmp751(((frost$collections$CollectionView*) $tmp749));
frost$core$Int64 $tmp754 = (frost$core$Int64) {1};
int64_t $tmp755 = $tmp753.value;
int64_t $tmp756 = $tmp754.value;
int64_t $tmp757 = $tmp755 - $tmp756;
frost$core$Int64 $tmp758 = (frost$core$Int64) {$tmp757};
frost$core$Bit $tmp759 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp760 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp746, $tmp758, $tmp759);
frost$core$Int64 $tmp761 = $tmp760.min;
*(&local2) = $tmp761;
frost$core$Int64 $tmp762 = $tmp760.max;
frost$core$Bit $tmp763 = $tmp760.inclusive;
bool $tmp764 = $tmp763.value;
frost$core$Int64 $tmp765 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp766 = $tmp765.value;
frost$core$UInt64 $tmp767 = (frost$core$UInt64) {((uint64_t) $tmp766)};
if ($tmp764) goto block5; else goto block6;
block5:;
int64_t $tmp768 = $tmp761.value;
int64_t $tmp769 = $tmp762.value;
bool $tmp770 = $tmp768 <= $tmp769;
frost$core$Bit $tmp771 = (frost$core$Bit) {$tmp770};
bool $tmp772 = $tmp771.value;
if ($tmp772) goto block2; else goto block3;
block6:;
int64_t $tmp773 = $tmp761.value;
int64_t $tmp774 = $tmp762.value;
bool $tmp775 = $tmp773 < $tmp774;
frost$core$Bit $tmp776 = (frost$core$Bit) {$tmp775};
bool $tmp777 = $tmp776.value;
if ($tmp777) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:330
org$frostlang$frostc$IR$Block* $tmp778 = *(&local1);
frost$collections$Array** $tmp779 = &$tmp778->ids;
frost$collections$Array* $tmp780 = *$tmp779;
frost$core$Int64 $tmp781 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:330:32
frost$core$Int64 $tmp782 = (frost$core$Int64) {0};
int64_t $tmp783 = $tmp781.value;
int64_t $tmp784 = $tmp782.value;
bool $tmp785 = $tmp783 >= $tmp784;
frost$core$Bit $tmp786 = (frost$core$Bit) {$tmp785};
bool $tmp787 = $tmp786.value;
if ($tmp787) goto block10; else goto block9;
block10:;
ITable* $tmp788 = ((frost$collections$CollectionView*) $tmp780)->$class->itable;
while ($tmp788->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp788 = $tmp788->next;
}
$fn790 $tmp789 = $tmp788->methods[0];
frost$core$Int64 $tmp791 = $tmp789(((frost$collections$CollectionView*) $tmp780));
int64_t $tmp792 = $tmp781.value;
int64_t $tmp793 = $tmp791.value;
bool $tmp794 = $tmp792 < $tmp793;
frost$core$Bit $tmp795 = (frost$core$Bit) {$tmp794};
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp797 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s798, $tmp797, &$s799);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp800 = &$tmp780->data;
frost$core$Object** $tmp801 = *$tmp800;
int64_t $tmp802 = $tmp781.value;
frost$core$Object* $tmp803 = $tmp801[$tmp802];
frost$core$Frost$ref$frost$core$Object$Q($tmp803);
*(&local3) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp803)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp803);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:331
org$frostlang$frostc$IR$Block* $tmp804 = *(&local1);
frost$collections$Array** $tmp805 = &$tmp804->statements;
frost$collections$Array* $tmp806 = *$tmp805;
frost$core$Int64 $tmp807 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:331:35
frost$core$Int64 $tmp808 = (frost$core$Int64) {0};
int64_t $tmp809 = $tmp807.value;
int64_t $tmp810 = $tmp808.value;
bool $tmp811 = $tmp809 >= $tmp810;
frost$core$Bit $tmp812 = (frost$core$Bit) {$tmp811};
bool $tmp813 = $tmp812.value;
if ($tmp813) goto block14; else goto block13;
block14:;
ITable* $tmp814 = ((frost$collections$CollectionView*) $tmp806)->$class->itable;
while ($tmp814->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp814 = $tmp814->next;
}
$fn816 $tmp815 = $tmp814->methods[0];
frost$core$Int64 $tmp817 = $tmp815(((frost$collections$CollectionView*) $tmp806));
int64_t $tmp818 = $tmp807.value;
int64_t $tmp819 = $tmp817.value;
bool $tmp820 = $tmp818 < $tmp819;
frost$core$Bit $tmp821 = (frost$core$Bit) {$tmp820};
bool $tmp822 = $tmp821.value;
if ($tmp822) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp823 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s824, $tmp823, &$s825);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp826 = &$tmp806->data;
frost$core$Object** $tmp827 = *$tmp826;
int64_t $tmp828 = $tmp807.value;
frost$core$Object* $tmp829 = $tmp827[$tmp828];
frost$core$Frost$ref$frost$core$Object$Q($tmp829);
frost$core$Int64* $tmp830 = &((org$frostlang$frostc$IR$Statement*) $tmp829)->$rawValue;
frost$core$Int64 $tmp831 = *$tmp830;
frost$core$Int64 $tmp832 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:332:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp833 = $tmp831.value;
int64_t $tmp834 = $tmp832.value;
bool $tmp835 = $tmp833 == $tmp834;
frost$core$Bit $tmp836 = frost$core$Bit$init$builtin_bit($tmp835);
bool $tmp837 = $tmp836.value;
if ($tmp837) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp838 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 0);
org$frostlang$frostc$Position $tmp839 = *$tmp838;
org$frostlang$frostc$IR$Value** $tmp840 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp841 = *$tmp840;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
org$frostlang$frostc$IR$Value* $tmp842 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
*(&local4) = $tmp841;
org$frostlang$frostc$expression$Binary$Operator* $tmp843 = (org$frostlang$frostc$expression$Binary$Operator*) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp844 = *$tmp843;
*(&local5) = $tmp844;
org$frostlang$frostc$IR$Value** $tmp845 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 40);
org$frostlang$frostc$IR$Value* $tmp846 = *$tmp845;
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
org$frostlang$frostc$IR$Value* $tmp847 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local6) = $tmp846;
org$frostlang$frostc$Type** $tmp848 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 48);
org$frostlang$frostc$Type* $tmp849 = *$tmp848;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
org$frostlang$frostc$Type* $tmp850 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
*(&local7) = $tmp849;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:333
org$frostlang$frostc$pass$Analyzer$State* $tmp851 = *(&local0);
frost$collections$HashMap** $tmp852 = &$tmp851->statements;
frost$collections$HashMap* $tmp853 = *$tmp852;
org$frostlang$frostc$IR$Statement$ID $tmp854 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp855;
$tmp855 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp855->value = $tmp854;
org$frostlang$frostc$IR$Value* $tmp856 = *(&local4);
org$frostlang$frostc$expression$Binary$Operator $tmp857 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp858 = *(&local6);
org$frostlang$frostc$pass$Analyzer$State* $tmp859 = *(&local0);
org$frostlang$frostc$Type* $tmp860 = *(&local7);
$fn862 $tmp861 = ($fn862) param0->$class->vtable[6];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp863 = $tmp861(param0, $tmp856, $tmp857, $tmp858, $tmp859, $tmp860);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp853, ((frost$collections$Key*) $tmp855), ((frost$core$Object*) $tmp863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp855)));
org$frostlang$frostc$Type* $tmp864 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp865 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp866 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block17:;
frost$core$Int64 $tmp867 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:335:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp868 = $tmp831.value;
int64_t $tmp869 = $tmp867.value;
bool $tmp870 = $tmp868 == $tmp869;
frost$core$Bit $tmp871 = frost$core$Bit$init$builtin_bit($tmp870);
bool $tmp872 = $tmp871.value;
if ($tmp872) goto block19; else goto block20;
block19:;
org$frostlang$frostc$Position* $tmp873 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 0);
org$frostlang$frostc$Position $tmp874 = *$tmp873;
*(&local8) = $tmp874;
org$frostlang$frostc$IR$Value** $tmp875 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp876 = *$tmp875;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
org$frostlang$frostc$IR$Value* $tmp877 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
*(&local9) = $tmp876;
org$frostlang$frostc$Type** $tmp878 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 32);
org$frostlang$frostc$Type* $tmp879 = *$tmp878;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
org$frostlang$frostc$Type* $tmp880 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
*(&local10) = $tmp879;
frost$core$Bit* $tmp881 = (frost$core$Bit*) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 40);
frost$core$Bit $tmp882 = *$tmp881;
*(&local11) = $tmp882;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:336
frost$core$Bit $tmp883 = *(&local11);
bool $tmp884 = $tmp883.value;
if ($tmp884) goto block22; else goto block24;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:337
org$frostlang$frostc$pass$Analyzer$State* $tmp885 = *(&local0);
frost$collections$HashMap** $tmp886 = &$tmp885->statements;
frost$collections$HashMap* $tmp887 = *$tmp886;
org$frostlang$frostc$IR$Statement$ID $tmp888 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp889;
$tmp889 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp889->value = $tmp888;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp890 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp891 = *(&local10);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp890, $tmp891);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp887, ((frost$collections$Key*) $tmp889), ((frost$core$Object*) $tmp890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp889)));
goto block23;
block24:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:340
org$frostlang$frostc$pass$Analyzer$State* $tmp892 = *(&local0);
frost$collections$HashMap** $tmp893 = &$tmp892->statements;
frost$collections$HashMap* $tmp894 = *$tmp893;
org$frostlang$frostc$IR$Statement$ID $tmp895 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp896;
$tmp896 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp896->value = $tmp895;
org$frostlang$frostc$IR$Value* $tmp897 = *(&local9);
org$frostlang$frostc$pass$Analyzer$State* $tmp898 = *(&local0);
$fn900 $tmp899 = ($fn900) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp901 = $tmp899(param0, $tmp897, $tmp898);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp894, ((frost$collections$Key*) $tmp896), ((frost$core$Object*) $tmp901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp896)));
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:342
frost$core$Bit $tmp902 = *(&local11);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:342:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp903 = $tmp902.value;
bool $tmp904 = !$tmp903;
frost$core$Bit $tmp905 = (frost$core$Bit) {$tmp904};
bool $tmp906 = $tmp905.value;
if ($tmp906) goto block27; else goto block26;
block27:;
bool $tmp907 = param2.value;
if ($tmp907) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:343
org$frostlang$frostc$Type* $tmp908 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Analyzer.frost:343:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:630
org$frostlang$frostc$Type$Kind* $tmp909 = &$tmp908->typeKind;
org$frostlang$frostc$Type$Kind $tmp910 = *$tmp909;
org$frostlang$frostc$Type$Kind$wrapper* $tmp911;
$tmp911 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp911->value = $tmp910;
frost$core$Int64 $tmp912 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:630:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp913 = &(&local13)->$rawValue;
*$tmp913 = $tmp912;
org$frostlang$frostc$Type$Kind $tmp914 = *(&local13);
*(&local12) = $tmp914;
org$frostlang$frostc$Type$Kind $tmp915 = *(&local12);
org$frostlang$frostc$Type$Kind$wrapper* $tmp916;
$tmp916 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp916->value = $tmp915;
ITable* $tmp917 = ((frost$core$Equatable*) $tmp911)->$class->itable;
while ($tmp917->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp917 = $tmp917->next;
}
$fn919 $tmp918 = $tmp917->methods[0];
frost$core$Bit $tmp920 = $tmp918(((frost$core$Equatable*) $tmp911), ((frost$core$Equatable*) $tmp916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp916)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp911)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:343:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp921 = $tmp920.value;
bool $tmp922 = !$tmp921;
frost$core$Bit $tmp923 = (frost$core$Bit) {$tmp922};
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block31; else goto block30;
block31:;
org$frostlang$frostc$IR$Value* $tmp925 = *(&local9);
org$frostlang$frostc$pass$Analyzer$State* $tmp926 = *(&local0);
$fn928 $tmp927 = ($fn928) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp929 = $tmp927(param0, $tmp925, $tmp926);
org$frostlang$frostc$Type** $tmp930 = &$tmp929->type;
org$frostlang$frostc$Type* $tmp931 = *$tmp930;
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Analyzer.frost:343:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:630
org$frostlang$frostc$Type$Kind* $tmp932 = &$tmp931->typeKind;
org$frostlang$frostc$Type$Kind $tmp933 = *$tmp932;
org$frostlang$frostc$Type$Kind$wrapper* $tmp934;
$tmp934 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp934->value = $tmp933;
frost$core$Int64 $tmp935 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:630:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp936 = &(&local15)->$rawValue;
*$tmp936 = $tmp935;
org$frostlang$frostc$Type$Kind $tmp937 = *(&local15);
*(&local14) = $tmp937;
org$frostlang$frostc$Type$Kind $tmp938 = *(&local14);
org$frostlang$frostc$Type$Kind$wrapper* $tmp939;
$tmp939 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp939->value = $tmp938;
ITable* $tmp940 = ((frost$core$Equatable*) $tmp934)->$class->itable;
while ($tmp940->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp940 = $tmp940->next;
}
$fn942 $tmp941 = $tmp940->methods[0];
frost$core$Bit $tmp943 = $tmp941(((frost$core$Equatable*) $tmp934), ((frost$core$Equatable*) $tmp939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp939)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp934)));
bool $tmp944 = $tmp943.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
if ($tmp944) goto block29; else goto block30;
block29:;
goto block30;
block30:;
goto block26;
block26:;
org$frostlang$frostc$Type* $tmp945 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp946 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block20:;
frost$core$Int64 $tmp947 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:348:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp948 = $tmp831.value;
int64_t $tmp949 = $tmp947.value;
bool $tmp950 = $tmp948 == $tmp949;
frost$core$Bit $tmp951 = frost$core$Bit$init$builtin_bit($tmp950);
bool $tmp952 = $tmp951.value;
if ($tmp952) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp953 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 0);
org$frostlang$frostc$Position $tmp954 = *$tmp953;
org$frostlang$frostc$ClassDecl** $tmp955 = (org$frostlang$frostc$ClassDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp956 = *$tmp955;
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
org$frostlang$frostc$ClassDecl* $tmp957 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
*(&local16) = $tmp956;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:349
org$frostlang$frostc$pass$Analyzer$State* $tmp958 = *(&local0);
frost$collections$HashMap** $tmp959 = &$tmp958->statements;
frost$collections$HashMap* $tmp960 = *$tmp959;
org$frostlang$frostc$IR$Statement$ID $tmp961 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp962;
$tmp962 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp962->value = $tmp961;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp963 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$ClassDecl* $tmp964 = *(&local16);
org$frostlang$frostc$Type** $tmp965 = &$tmp964->type;
org$frostlang$frostc$Type* $tmp966 = *$tmp965;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp963, $tmp966);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp960, ((frost$collections$Key*) $tmp962), ((frost$core$Object*) $tmp963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp962)));
org$frostlang$frostc$ClassDecl* $tmp967 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block15;
block38:;
frost$core$Int64 $tmp968 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:351:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp969 = $tmp831.value;
int64_t $tmp970 = $tmp968.value;
bool $tmp971 = $tmp969 == $tmp970;
frost$core$Bit $tmp972 = frost$core$Bit$init$builtin_bit($tmp971);
bool $tmp973 = $tmp972.value;
if ($tmp973) goto block40; else goto block41;
block40:;
org$frostlang$frostc$Position* $tmp974 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 0);
org$frostlang$frostc$Position $tmp975 = *$tmp974;
org$frostlang$frostc$IR$Value** $tmp976 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp977 = *$tmp976;
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
org$frostlang$frostc$IR$Value* $tmp978 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
*(&local17) = $tmp977;
org$frostlang$frostc$FixedArray** $tmp979 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp980 = *$tmp979;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:352
org$frostlang$frostc$IR$Value* $tmp981 = *(&local17);
$fn983 $tmp982 = ($fn983) $tmp981->$class->vtable[2];
org$frostlang$frostc$Type* $tmp984 = $tmp982($tmp981);
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
org$frostlang$frostc$Type* $tmp985 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
*(&local18) = $tmp984;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:353
org$frostlang$frostc$Type* $tmp986 = *(&local18);
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:353:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:618
frost$core$String** $tmp987 = &((org$frostlang$frostc$Symbol*) $tmp986)->name;
frost$core$String* $tmp988 = *$tmp987;
frost$core$Bit $tmp989 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp988, &$s990);
bool $tmp991 = $tmp989.value;
if ($tmp991) goto block43; else goto block45;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:354
org$frostlang$frostc$pass$Analyzer$State* $tmp992 = *(&local0);
frost$collections$HashMap** $tmp993 = &$tmp992->statements;
frost$collections$HashMap* $tmp994 = *$tmp993;
org$frostlang$frostc$IR$Statement$ID $tmp995 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp996;
$tmp996 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp996->value = $tmp995;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp997 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp998 = *(&local18);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:354:68
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp999 = &$tmp998->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1000 = *$tmp999;
frost$core$Bit $tmp1001 = frost$core$Bit$init$builtin_bit($tmp1000 != NULL);
bool $tmp1002 = $tmp1001.value;
if ($tmp1002) goto block48; else goto block49;
block49:;
frost$core$Int64 $tmp1003 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1004, $tmp1003);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1005 = &$tmp998->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1006 = *$tmp1005;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
frost$core$Int64 $tmp1007 = (frost$core$Int64) {1};
frost$core$Object* $tmp1008 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1006, $tmp1007);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Analyzer.frost:354:80
org$frostlang$frostc$Type$Kind* $tmp1009 = &((org$frostlang$frostc$Type*) $tmp1008)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1010 = *$tmp1009;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1011;
$tmp1011 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1011->value = $tmp1010;
frost$core$Int64 $tmp1012 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1013 = &(&local20)->$rawValue;
*$tmp1013 = $tmp1012;
org$frostlang$frostc$Type$Kind $tmp1014 = *(&local20);
*(&local19) = $tmp1014;
org$frostlang$frostc$Type$Kind $tmp1015 = *(&local19);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1016;
$tmp1016 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1016->value = $tmp1015;
ITable* $tmp1017 = ((frost$core$Equatable*) $tmp1011)->$class->itable;
while ($tmp1017->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1017 = $tmp1017->next;
}
$fn1019 $tmp1018 = $tmp1017->methods[0];
frost$core$Bit $tmp1020 = $tmp1018(((frost$core$Equatable*) $tmp1011), ((frost$core$Equatable*) $tmp1016));
bool $tmp1021 = $tmp1020.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1016)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1011)));
if ($tmp1021) goto block51; else goto block55;
block55:;
org$frostlang$frostc$Type$Kind* $tmp1022 = &((org$frostlang$frostc$Type*) $tmp1008)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1023 = *$tmp1022;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1024;
$tmp1024 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1024->value = $tmp1023;
frost$core$Int64 $tmp1025 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1026 = &(&local22)->$rawValue;
*$tmp1026 = $tmp1025;
org$frostlang$frostc$Type$Kind $tmp1027 = *(&local22);
*(&local21) = $tmp1027;
org$frostlang$frostc$Type$Kind $tmp1028 = *(&local21);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1029;
$tmp1029 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1029->value = $tmp1028;
ITable* $tmp1030 = ((frost$core$Equatable*) $tmp1024)->$class->itable;
while ($tmp1030->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1030 = $tmp1030->next;
}
$fn1032 $tmp1031 = $tmp1030->methods[0];
frost$core$Bit $tmp1033 = $tmp1031(((frost$core$Equatable*) $tmp1024), ((frost$core$Equatable*) $tmp1029));
bool $tmp1034 = $tmp1033.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1029)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1024)));
if ($tmp1034) goto block51; else goto block54;
block54:;
org$frostlang$frostc$Type$Kind* $tmp1035 = &((org$frostlang$frostc$Type*) $tmp1008)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1036 = *$tmp1035;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1037;
$tmp1037 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1037->value = $tmp1036;
frost$core$Int64 $tmp1038 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1039 = &(&local24)->$rawValue;
*$tmp1039 = $tmp1038;
org$frostlang$frostc$Type$Kind $tmp1040 = *(&local24);
*(&local23) = $tmp1040;
org$frostlang$frostc$Type$Kind $tmp1041 = *(&local23);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1042;
$tmp1042 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1042->value = $tmp1041;
ITable* $tmp1043 = ((frost$core$Equatable*) $tmp1037)->$class->itable;
while ($tmp1043->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1043 = $tmp1043->next;
}
$fn1045 $tmp1044 = $tmp1043->methods[0];
frost$core$Bit $tmp1046 = $tmp1044(((frost$core$Equatable*) $tmp1037), ((frost$core$Equatable*) $tmp1042));
bool $tmp1047 = $tmp1046.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1042)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1037)));
if ($tmp1047) goto block51; else goto block53;
block53:;
org$frostlang$frostc$Type$Kind* $tmp1048 = &((org$frostlang$frostc$Type*) $tmp1008)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1049 = *$tmp1048;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1050;
$tmp1050 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1050->value = $tmp1049;
frost$core$Int64 $tmp1051 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:662:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1052 = &(&local26)->$rawValue;
*$tmp1052 = $tmp1051;
org$frostlang$frostc$Type$Kind $tmp1053 = *(&local26);
*(&local25) = $tmp1053;
org$frostlang$frostc$Type$Kind $tmp1054 = *(&local25);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1055;
$tmp1055 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1055->value = $tmp1054;
ITable* $tmp1056 = ((frost$core$Equatable*) $tmp1050)->$class->itable;
while ($tmp1056->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1056 = $tmp1056->next;
}
$fn1058 $tmp1057 = $tmp1056->methods[0];
frost$core$Bit $tmp1059 = $tmp1057(((frost$core$Equatable*) $tmp1050), ((frost$core$Equatable*) $tmp1055));
bool $tmp1060 = $tmp1059.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1055)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1050)));
if ($tmp1060) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp1061 = (frost$core$Int64) {663};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1062, $tmp1061, &$s1063);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:664
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1064 = &((org$frostlang$frostc$Type*) $tmp1008)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1065 = *$tmp1064;
frost$core$Bit $tmp1066 = frost$core$Bit$init$builtin_bit($tmp1065 != NULL);
bool $tmp1067 = $tmp1066.value;
if ($tmp1067) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp1068 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1069, $tmp1068);
abort(); // unreachable
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1070 = &((org$frostlang$frostc$Type*) $tmp1008)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1071 = *$tmp1070;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1072 = &((org$frostlang$frostc$Type*) $tmp1008)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1073 = *$tmp1072;
frost$core$Bit $tmp1074 = frost$core$Bit$init$builtin_bit($tmp1073 != NULL);
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp1076 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1077, $tmp1076);
abort(); // unreachable
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1078 = &((org$frostlang$frostc$Type*) $tmp1008)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1079 = *$tmp1078;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
ITable* $tmp1080 = ((frost$collections$CollectionView*) $tmp1079)->$class->itable;
while ($tmp1080->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1080 = $tmp1080->next;
}
$fn1082 $tmp1081 = $tmp1080->methods[0];
frost$core$Int64 $tmp1083 = $tmp1081(((frost$collections$CollectionView*) $tmp1079));
frost$core$Int64 $tmp1084 = (frost$core$Int64) {1};
int64_t $tmp1085 = $tmp1083.value;
int64_t $tmp1086 = $tmp1084.value;
int64_t $tmp1087 = $tmp1085 - $tmp1086;
frost$core$Int64 $tmp1088 = (frost$core$Int64) {$tmp1087};
frost$core$Object* $tmp1089 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1071, $tmp1088);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1089)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1089);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp997, ((org$frostlang$frostc$Type*) $tmp1089));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp994, ((frost$collections$Key*) $tmp996), ((frost$core$Object*) $tmp997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1089)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1008);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp996)));
goto block44;
block45:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:357
org$frostlang$frostc$pass$Analyzer$State* $tmp1090 = *(&local0);
frost$collections$HashMap** $tmp1091 = &$tmp1090->statements;
frost$collections$HashMap* $tmp1092 = *$tmp1091;
org$frostlang$frostc$IR$Statement$ID $tmp1093 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1094;
$tmp1094 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1094->value = $tmp1093;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1095 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp1096 = *(&local18);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Analyzer.frost:357:68
org$frostlang$frostc$Type$Kind* $tmp1097 = &$tmp1096->typeKind;
org$frostlang$frostc$Type$Kind $tmp1098 = *$tmp1097;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1099;
$tmp1099 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1099->value = $tmp1098;
frost$core$Int64 $tmp1100 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1101 = &(&local28)->$rawValue;
*$tmp1101 = $tmp1100;
org$frostlang$frostc$Type$Kind $tmp1102 = *(&local28);
*(&local27) = $tmp1102;
org$frostlang$frostc$Type$Kind $tmp1103 = *(&local27);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1104;
$tmp1104 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1104->value = $tmp1103;
ITable* $tmp1105 = ((frost$core$Equatable*) $tmp1099)->$class->itable;
while ($tmp1105->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1105 = $tmp1105->next;
}
$fn1107 $tmp1106 = $tmp1105->methods[0];
frost$core$Bit $tmp1108 = $tmp1106(((frost$core$Equatable*) $tmp1099), ((frost$core$Equatable*) $tmp1104));
bool $tmp1109 = $tmp1108.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1104)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1099)));
if ($tmp1109) goto block67; else goto block71;
block71:;
org$frostlang$frostc$Type$Kind* $tmp1110 = &$tmp1096->typeKind;
org$frostlang$frostc$Type$Kind $tmp1111 = *$tmp1110;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1112;
$tmp1112 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1112->value = $tmp1111;
frost$core$Int64 $tmp1113 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1114 = &(&local30)->$rawValue;
*$tmp1114 = $tmp1113;
org$frostlang$frostc$Type$Kind $tmp1115 = *(&local30);
*(&local29) = $tmp1115;
org$frostlang$frostc$Type$Kind $tmp1116 = *(&local29);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1117;
$tmp1117 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1117->value = $tmp1116;
ITable* $tmp1118 = ((frost$core$Equatable*) $tmp1112)->$class->itable;
while ($tmp1118->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1118 = $tmp1118->next;
}
$fn1120 $tmp1119 = $tmp1118->methods[0];
frost$core$Bit $tmp1121 = $tmp1119(((frost$core$Equatable*) $tmp1112), ((frost$core$Equatable*) $tmp1117));
bool $tmp1122 = $tmp1121.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1117)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1112)));
if ($tmp1122) goto block67; else goto block70;
block70:;
org$frostlang$frostc$Type$Kind* $tmp1123 = &$tmp1096->typeKind;
org$frostlang$frostc$Type$Kind $tmp1124 = *$tmp1123;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1125;
$tmp1125 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1125->value = $tmp1124;
frost$core$Int64 $tmp1126 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1127 = &(&local32)->$rawValue;
*$tmp1127 = $tmp1126;
org$frostlang$frostc$Type$Kind $tmp1128 = *(&local32);
*(&local31) = $tmp1128;
org$frostlang$frostc$Type$Kind $tmp1129 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1130;
$tmp1130 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1130->value = $tmp1129;
ITable* $tmp1131 = ((frost$core$Equatable*) $tmp1125)->$class->itable;
while ($tmp1131->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1131 = $tmp1131->next;
}
$fn1133 $tmp1132 = $tmp1131->methods[0];
frost$core$Bit $tmp1134 = $tmp1132(((frost$core$Equatable*) $tmp1125), ((frost$core$Equatable*) $tmp1130));
bool $tmp1135 = $tmp1134.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1130)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1125)));
if ($tmp1135) goto block67; else goto block69;
block69:;
org$frostlang$frostc$Type$Kind* $tmp1136 = &$tmp1096->typeKind;
org$frostlang$frostc$Type$Kind $tmp1137 = *$tmp1136;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1138;
$tmp1138 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1138->value = $tmp1137;
frost$core$Int64 $tmp1139 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:662:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1140 = &(&local34)->$rawValue;
*$tmp1140 = $tmp1139;
org$frostlang$frostc$Type$Kind $tmp1141 = *(&local34);
*(&local33) = $tmp1141;
org$frostlang$frostc$Type$Kind $tmp1142 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1143;
$tmp1143 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1143->value = $tmp1142;
ITable* $tmp1144 = ((frost$core$Equatable*) $tmp1138)->$class->itable;
while ($tmp1144->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1144 = $tmp1144->next;
}
$fn1146 $tmp1145 = $tmp1144->methods[0];
frost$core$Bit $tmp1147 = $tmp1145(((frost$core$Equatable*) $tmp1138), ((frost$core$Equatable*) $tmp1143));
bool $tmp1148 = $tmp1147.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1143)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1138)));
if ($tmp1148) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp1149 = (frost$core$Int64) {663};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1150, $tmp1149, &$s1151);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:664
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1152 = &$tmp1096->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1153 = *$tmp1152;
frost$core$Bit $tmp1154 = frost$core$Bit$init$builtin_bit($tmp1153 != NULL);
bool $tmp1155 = $tmp1154.value;
if ($tmp1155) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp1156 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1157, $tmp1156);
abort(); // unreachable
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1158 = &$tmp1096->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1159 = *$tmp1158;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1160 = &$tmp1096->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1161 = *$tmp1160;
frost$core$Bit $tmp1162 = frost$core$Bit$init$builtin_bit($tmp1161 != NULL);
bool $tmp1163 = $tmp1162.value;
if ($tmp1163) goto block80; else goto block81;
block81:;
frost$core$Int64 $tmp1164 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1165, $tmp1164);
abort(); // unreachable
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1166 = &$tmp1096->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1167 = *$tmp1166;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
ITable* $tmp1168 = ((frost$collections$CollectionView*) $tmp1167)->$class->itable;
while ($tmp1168->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1168 = $tmp1168->next;
}
$fn1170 $tmp1169 = $tmp1168->methods[0];
frost$core$Int64 $tmp1171 = $tmp1169(((frost$collections$CollectionView*) $tmp1167));
frost$core$Int64 $tmp1172 = (frost$core$Int64) {1};
int64_t $tmp1173 = $tmp1171.value;
int64_t $tmp1174 = $tmp1172.value;
int64_t $tmp1175 = $tmp1173 - $tmp1174;
frost$core$Int64 $tmp1176 = (frost$core$Int64) {$tmp1175};
frost$core$Object* $tmp1177 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1159, $tmp1176);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1177)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1177);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1095, ((org$frostlang$frostc$Type*) $tmp1177));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1092, ((frost$collections$Key*) $tmp1094), ((frost$core$Object*) $tmp1095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1177)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1094)));
goto block44;
block44:;
org$frostlang$frostc$Type* $tmp1178 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1179 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block41:;
frost$core$Int64 $tmp1180 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:360:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1181 = $tmp831.value;
int64_t $tmp1182 = $tmp1180.value;
bool $tmp1183 = $tmp1181 == $tmp1182;
frost$core$Bit $tmp1184 = frost$core$Bit$init$builtin_bit($tmp1183);
bool $tmp1185 = $tmp1184.value;
if ($tmp1185) goto block82; else goto block83;
block82:;
org$frostlang$frostc$Position* $tmp1186 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 0);
org$frostlang$frostc$Position $tmp1187 = *$tmp1186;
org$frostlang$frostc$IR$Value** $tmp1188 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1189 = *$tmp1188;
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
org$frostlang$frostc$IR$Value* $tmp1190 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
*(&local35) = $tmp1189;
org$frostlang$frostc$FieldDecl** $tmp1191 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp1192 = *$tmp1191;
*(&local36) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
org$frostlang$frostc$FieldDecl* $tmp1193 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
*(&local36) = $tmp1192;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:361
org$frostlang$frostc$FieldDecl* $tmp1194 = *(&local36);
frost$core$Weak** $tmp1195 = &$tmp1194->owner;
frost$core$Weak* $tmp1196 = *$tmp1195;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Analyzer.frost:361:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1197 = &$tmp1196->_valid;
frost$core$Bit $tmp1198 = *$tmp1197;
bool $tmp1199 = $tmp1198.value;
if ($tmp1199) goto block90; else goto block91;
block91:;
frost$core$Int64 $tmp1200 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1201, $tmp1200);
abort(); // unreachable
block90:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1202 = &$tmp1196->value;
frost$core$Object* $tmp1203 = *$tmp1202;
frost$core$Frost$ref$frost$core$Object$Q($tmp1203);
org$frostlang$frostc$Type** $tmp1204 = &((org$frostlang$frostc$ClassDecl*) $tmp1203)->type;
org$frostlang$frostc$Type* $tmp1205 = *$tmp1204;
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from Analyzer.frost:361:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1206 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1207 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1208 = &(&local38)->$rawValue;
*$tmp1208 = $tmp1207;
org$frostlang$frostc$Type$Kind $tmp1209 = *(&local38);
*(&local37) = $tmp1209;
org$frostlang$frostc$Type$Kind $tmp1210 = *(&local37);
org$frostlang$frostc$Position $tmp1211 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1212 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1206, &$s1213, $tmp1210, $tmp1211, $tmp1212);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:361:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1214 = &((org$frostlang$frostc$Symbol*) $tmp1205)->name;
frost$core$String* $tmp1215 = *$tmp1214;
frost$core$String** $tmp1216 = &((org$frostlang$frostc$Symbol*) $tmp1206)->name;
frost$core$String* $tmp1217 = *$tmp1216;
frost$core$Bit $tmp1218 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1215, $tmp1217);
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block95; else goto block96;
block95:;
org$frostlang$frostc$Type$Kind* $tmp1220 = &$tmp1205->typeKind;
org$frostlang$frostc$Type$Kind $tmp1221 = *$tmp1220;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1222;
$tmp1222 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1222->value = $tmp1221;
org$frostlang$frostc$Type$Kind* $tmp1223 = &$tmp1206->typeKind;
org$frostlang$frostc$Type$Kind $tmp1224 = *$tmp1223;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1225;
$tmp1225 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1225->value = $tmp1224;
ITable* $tmp1226 = ((frost$core$Equatable*) $tmp1222)->$class->itable;
while ($tmp1226->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1226 = $tmp1226->next;
}
$fn1228 $tmp1227 = $tmp1226->methods[0];
frost$core$Bit $tmp1229 = $tmp1227(((frost$core$Equatable*) $tmp1222), ((frost$core$Equatable*) $tmp1225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1225)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1222)));
*(&local39) = $tmp1229;
goto block97;
block96:;
*(&local39) = $tmp1218;
goto block97;
block97:;
frost$core$Bit $tmp1230 = *(&local39);
bool $tmp1231 = $tmp1230.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$Frost$unref$frost$core$Object$Q($tmp1203);
if ($tmp1231) goto block85; else goto block87;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:362
org$frostlang$frostc$pass$Analyzer$State* $tmp1232 = *(&local0);
frost$collections$HashMap** $tmp1233 = &$tmp1232->statements;
frost$collections$HashMap* $tmp1234 = *$tmp1233;
org$frostlang$frostc$IR$Statement$ID $tmp1235 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1236;
$tmp1236 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1236->value = $tmp1235;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1237 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp1238 = *(&local36);
org$frostlang$frostc$Type** $tmp1239 = &$tmp1238->type;
org$frostlang$frostc$Type* $tmp1240 = *$tmp1239;
org$frostlang$frostc$IR$Value* $tmp1241 = *(&local35);
org$frostlang$frostc$pass$Analyzer$State* $tmp1242 = *(&local0);
$fn1244 $tmp1243 = ($fn1244) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1245 = $tmp1243(param0, $tmp1241, $tmp1242);
frost$collections$ListView** $tmp1246 = &$tmp1245->nonNullImplications;
frost$collections$ListView* $tmp1247 = *$tmp1246;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp1237, $tmp1240, $tmp1247);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1234, ((frost$collections$Key*) $tmp1236), ((frost$core$Object*) $tmp1237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1236)));
goto block86;
block87:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:366
org$frostlang$frostc$pass$Analyzer$State* $tmp1248 = *(&local0);
frost$collections$HashMap** $tmp1249 = &$tmp1248->statements;
frost$collections$HashMap* $tmp1250 = *$tmp1249;
org$frostlang$frostc$IR$Statement$ID $tmp1251 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1252;
$tmp1252 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1252->value = $tmp1251;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1253 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp1254 = *(&local36);
org$frostlang$frostc$Type** $tmp1255 = &$tmp1254->type;
org$frostlang$frostc$Type* $tmp1256 = *$tmp1255;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1253, $tmp1256);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1250, ((frost$collections$Key*) $tmp1252), ((frost$core$Object*) $tmp1253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1252)));
goto block86;
block86:;
org$frostlang$frostc$FieldDecl* $tmp1257 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
*(&local36) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp1258 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block83:;
frost$core$Int64 $tmp1259 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:369:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1260 = $tmp831.value;
int64_t $tmp1261 = $tmp1259.value;
bool $tmp1262 = $tmp1260 == $tmp1261;
frost$core$Bit $tmp1263 = frost$core$Bit$init$builtin_bit($tmp1262);
bool $tmp1264 = $tmp1263.value;
if ($tmp1264) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp1265 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 0);
org$frostlang$frostc$Position $tmp1266 = *$tmp1265;
org$frostlang$frostc$IR$Value** $tmp1267 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1268 = *$tmp1267;
org$frostlang$frostc$FieldDecl** $tmp1269 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp1270 = *$tmp1269;
*(&local40) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
org$frostlang$frostc$FieldDecl* $tmp1271 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
*(&local40) = $tmp1270;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:370
org$frostlang$frostc$pass$Analyzer$State* $tmp1272 = *(&local0);
frost$collections$HashMap** $tmp1273 = &$tmp1272->statements;
frost$collections$HashMap* $tmp1274 = *$tmp1273;
org$frostlang$frostc$IR$Statement$ID $tmp1275 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1276;
$tmp1276 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1276->value = $tmp1275;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1277 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp1278 = *(&local40);
org$frostlang$frostc$Type** $tmp1279 = &$tmp1278->type;
org$frostlang$frostc$Type* $tmp1280 = *$tmp1279;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1277, $tmp1280);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1274, ((frost$collections$Key*) $tmp1276), ((frost$core$Object*) $tmp1277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1276)));
org$frostlang$frostc$FieldDecl* $tmp1281 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
*(&local40) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block15;
block99:;
frost$core$Int64 $tmp1282 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:372:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1283 = $tmp831.value;
int64_t $tmp1284 = $tmp1282.value;
bool $tmp1285 = $tmp1283 == $tmp1284;
frost$core$Bit $tmp1286 = frost$core$Bit$init$builtin_bit($tmp1285);
bool $tmp1287 = $tmp1286.value;
if ($tmp1287) goto block101; else goto block102;
block101:;
org$frostlang$frostc$Position* $tmp1288 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 0);
org$frostlang$frostc$Position $tmp1289 = *$tmp1288;
*(&local41) = $tmp1289;
org$frostlang$frostc$IR$Value** $tmp1290 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1291 = *$tmp1290;
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
org$frostlang$frostc$IR$Value* $tmp1292 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
*(&local42) = $tmp1291;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:373
org$frostlang$frostc$IR$Value* $tmp1293 = *(&local42);
org$frostlang$frostc$pass$Analyzer$State* $tmp1294 = *(&local0);
$fn1296 $tmp1295 = ($fn1296) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1297 = $tmp1295(param0, $tmp1293, $tmp1294);
*(&local43) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1298 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
*(&local43) = $tmp1297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:374
org$frostlang$frostc$pass$Analyzer$State* $tmp1299 = *(&local0);
frost$collections$HashMap** $tmp1300 = &$tmp1299->statements;
frost$collections$HashMap* $tmp1301 = *$tmp1300;
org$frostlang$frostc$IR$Statement$ID $tmp1302 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1303;
$tmp1303 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1303->value = $tmp1302;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1304 = *(&local43);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1301, ((frost$collections$Key*) $tmp1303), ((frost$core$Object*) $tmp1304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1303)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:375
bool $tmp1305 = param2.value;
if ($tmp1305) goto block106; else goto block105;
block106:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1306 = *(&local43);
org$frostlang$frostc$Type** $tmp1307 = &$tmp1306->type;
org$frostlang$frostc$Type* $tmp1308 = *$tmp1307;
// begin inline call to method org.frostlang.frostc.Type.Invalid():org.frostlang.frostc.Type from Analyzer.frost:375:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:555
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1309 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1310 = (frost$core$Int64) {6};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:555:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1311 = &(&local45)->$rawValue;
*$tmp1311 = $tmp1310;
org$frostlang$frostc$Type$Kind $tmp1312 = *(&local45);
*(&local44) = $tmp1312;
org$frostlang$frostc$Type$Kind $tmp1313 = *(&local44);
org$frostlang$frostc$Position $tmp1314 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1315 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1309, &$s1316, $tmp1313, $tmp1314, $tmp1315);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:375:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1317 = &((org$frostlang$frostc$Symbol*) $tmp1308)->name;
frost$core$String* $tmp1318 = *$tmp1317;
frost$core$String** $tmp1319 = &((org$frostlang$frostc$Symbol*) $tmp1309)->name;
frost$core$String* $tmp1320 = *$tmp1319;
frost$core$Bit $tmp1321 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1318, $tmp1320);
bool $tmp1322 = $tmp1321.value;
if ($tmp1322) goto block110; else goto block111;
block110:;
org$frostlang$frostc$Type$Kind* $tmp1323 = &$tmp1308->typeKind;
org$frostlang$frostc$Type$Kind $tmp1324 = *$tmp1323;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1325;
$tmp1325 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1325->value = $tmp1324;
org$frostlang$frostc$Type$Kind* $tmp1326 = &$tmp1309->typeKind;
org$frostlang$frostc$Type$Kind $tmp1327 = *$tmp1326;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1328;
$tmp1328 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1328->value = $tmp1327;
ITable* $tmp1329 = ((frost$core$Equatable*) $tmp1325)->$class->itable;
while ($tmp1329->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1329 = $tmp1329->next;
}
$fn1331 $tmp1330 = $tmp1329->methods[0];
frost$core$Bit $tmp1332 = $tmp1330(((frost$core$Equatable*) $tmp1325), ((frost$core$Equatable*) $tmp1328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1328)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1325)));
*(&local46) = $tmp1332;
goto block112;
block111:;
*(&local46) = $tmp1321;
goto block112;
block112:;
frost$core$Bit $tmp1333 = *(&local46);
bool $tmp1334 = $tmp1333.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
if ($tmp1334) goto block104; else goto block105;
block104:;
goto block105;
block105:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1335 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local43) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp1336 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block102:;
frost$core$Int64 $tmp1337 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:379:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1338 = $tmp831.value;
int64_t $tmp1339 = $tmp1337.value;
bool $tmp1340 = $tmp1338 == $tmp1339;
frost$core$Bit $tmp1341 = frost$core$Bit$init$builtin_bit($tmp1340);
bool $tmp1342 = $tmp1341.value;
if ($tmp1342) goto block113; else goto block114;
block113:;
org$frostlang$frostc$Position* $tmp1343 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 0);
org$frostlang$frostc$Position $tmp1344 = *$tmp1343;
org$frostlang$frostc$IR$Value** $tmp1345 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1346 = *$tmp1345;
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
org$frostlang$frostc$IR$Value* $tmp1347 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
*(&local47) = $tmp1346;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:380
org$frostlang$frostc$pass$Analyzer$State* $tmp1348 = *(&local0);
frost$collections$HashMap** $tmp1349 = &$tmp1348->statements;
frost$collections$HashMap* $tmp1350 = *$tmp1349;
org$frostlang$frostc$IR$Statement$ID $tmp1351 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1352;
$tmp1352 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1352->value = $tmp1351;
org$frostlang$frostc$IR$Value* $tmp1353 = *(&local47);
org$frostlang$frostc$pass$Analyzer$State* $tmp1354 = *(&local0);
$fn1356 $tmp1355 = ($fn1356) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1357 = $tmp1355(param0, $tmp1353, $tmp1354);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1350, ((frost$collections$Key*) $tmp1352), ((frost$core$Object*) $tmp1357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1352)));
org$frostlang$frostc$IR$Value* $tmp1358 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block114:;
frost$core$Int64 $tmp1359 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:382:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1360 = $tmp831.value;
int64_t $tmp1361 = $tmp1359.value;
bool $tmp1362 = $tmp1360 == $tmp1361;
frost$core$Bit $tmp1363 = frost$core$Bit$init$builtin_bit($tmp1362);
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block116; else goto block117;
block116:;
org$frostlang$frostc$Position* $tmp1365 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 0);
org$frostlang$frostc$Position $tmp1366 = *$tmp1365;
org$frostlang$frostc$IR$Value** $tmp1367 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1368 = *$tmp1367;
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
org$frostlang$frostc$IR$Value* $tmp1369 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
*(&local48) = $tmp1368;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:383
org$frostlang$frostc$pass$Analyzer$State* $tmp1370 = *(&local0);
frost$collections$HashMap** $tmp1371 = &$tmp1370->statements;
frost$collections$HashMap* $tmp1372 = *$tmp1371;
org$frostlang$frostc$IR$Statement$ID $tmp1373 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1374;
$tmp1374 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1374->value = $tmp1373;
org$frostlang$frostc$IR$Value* $tmp1375 = *(&local48);
org$frostlang$frostc$pass$Analyzer$State* $tmp1376 = *(&local0);
$fn1378 $tmp1377 = ($fn1378) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1379 = $tmp1377(param0, $tmp1375, $tmp1376);
$fn1381 $tmp1380 = ($fn1381) $tmp1379->$class->vtable[4];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1382 = $tmp1380($tmp1379);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1372, ((frost$collections$Key*) $tmp1374), ((frost$core$Object*) $tmp1382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1374)));
org$frostlang$frostc$IR$Value* $tmp1383 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block117:;
frost$core$Int64 $tmp1384 = (frost$core$Int64) {17};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:385:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1385 = $tmp831.value;
int64_t $tmp1386 = $tmp1384.value;
bool $tmp1387 = $tmp1385 == $tmp1386;
frost$core$Bit $tmp1388 = frost$core$Bit$init$builtin_bit($tmp1387);
bool $tmp1389 = $tmp1388.value;
if ($tmp1389) goto block119; else goto block120;
block119:;
org$frostlang$frostc$Position* $tmp1390 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 0);
org$frostlang$frostc$Position $tmp1391 = *$tmp1390;
org$frostlang$frostc$IR$Value** $tmp1392 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1393 = *$tmp1392;
org$frostlang$frostc$Type** $tmp1394 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 32);
org$frostlang$frostc$Type* $tmp1395 = *$tmp1394;
*(&local49) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
org$frostlang$frostc$Type* $tmp1396 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
*(&local49) = $tmp1395;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:386
org$frostlang$frostc$pass$Analyzer$State* $tmp1397 = *(&local0);
frost$collections$HashMap** $tmp1398 = &$tmp1397->statements;
frost$collections$HashMap* $tmp1399 = *$tmp1398;
org$frostlang$frostc$IR$Statement$ID $tmp1400 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1401;
$tmp1401 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1401->value = $tmp1400;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1402 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp1403 = *(&local49);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Analyzer.frost:386:74
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:495
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1404 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1404);
*(&local50) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
frost$collections$Array* $tmp1405 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
*(&local50) = $tmp1404;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:496
frost$collections$Array* $tmp1406 = *(&local50);
frost$collections$Array$add$frost$collections$Array$T($tmp1406, ((frost$core$Object*) $tmp1403));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:497
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1407 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1408 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:497:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1409 = &(&local52)->$rawValue;
*$tmp1409 = $tmp1408;
org$frostlang$frostc$Type$Kind $tmp1410 = *(&local52);
*(&local51) = $tmp1410;
org$frostlang$frostc$Type$Kind $tmp1411 = *(&local51);
org$frostlang$frostc$Position $tmp1412 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1413 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1407, &$s1414, $tmp1411, $tmp1412, $tmp1413);
frost$collections$Array* $tmp1415 = *(&local50);
org$frostlang$frostc$Type* $tmp1416 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1407, ((frost$collections$ListView*) $tmp1415));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
frost$collections$Array* $tmp1417 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
*(&local50) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1402, $tmp1416);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1399, ((frost$collections$Key*) $tmp1401), ((frost$core$Object*) $tmp1402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1401)));
org$frostlang$frostc$Type* $tmp1418 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
*(&local49) = ((org$frostlang$frostc$Type*) NULL);
goto block15;
block120:;
frost$core$Int64 $tmp1419 = (frost$core$Int64) {19};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:388:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1420 = $tmp831.value;
int64_t $tmp1421 = $tmp1419.value;
bool $tmp1422 = $tmp1420 == $tmp1421;
frost$core$Bit $tmp1423 = frost$core$Bit$init$builtin_bit($tmp1422);
bool $tmp1424 = $tmp1423.value;
if ($tmp1424) goto block124; else goto block125;
block124:;
org$frostlang$frostc$Position* $tmp1425 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 0);
org$frostlang$frostc$Position $tmp1426 = *$tmp1425;
org$frostlang$frostc$IR$Value** $tmp1427 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1428 = *$tmp1427;
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
org$frostlang$frostc$IR$Value* $tmp1429 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
*(&local53) = $tmp1428;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:389
org$frostlang$frostc$IR$Value* $tmp1430 = *(&local53);
org$frostlang$frostc$pass$Analyzer$State* $tmp1431 = *(&local0);
$fn1433 $tmp1432 = ($fn1433) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1434 = $tmp1432(param0, $tmp1430, $tmp1431);
*(&local54) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1435 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1435));
*(&local54) = $tmp1434;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:390
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1436 = *(&local54);
org$frostlang$frostc$Type** $tmp1437 = &$tmp1436->type;
org$frostlang$frostc$Type* $tmp1438 = *$tmp1437;
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:390:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:618
frost$core$String** $tmp1439 = &((org$frostlang$frostc$Symbol*) $tmp1438)->name;
frost$core$String* $tmp1440 = *$tmp1439;
frost$core$Bit $tmp1441 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1440, &$s1442);
bool $tmp1443 = $tmp1441.value;
if ($tmp1443) goto block128; else goto block129;
block129:;
frost$core$Int64 $tmp1444 = (frost$core$Int64) {390};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1445, $tmp1444);
abort(); // unreachable
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:391
org$frostlang$frostc$pass$Analyzer$State* $tmp1446 = *(&local0);
frost$collections$HashMap** $tmp1447 = &$tmp1446->statements;
frost$collections$HashMap* $tmp1448 = *$tmp1447;
org$frostlang$frostc$IR$Statement$ID $tmp1449 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1450;
$tmp1450 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1450->value = $tmp1449;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1451 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1452 = *(&local54);
org$frostlang$frostc$Type** $tmp1453 = &$tmp1452->type;
org$frostlang$frostc$Type* $tmp1454 = *$tmp1453;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:391:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1455 = &$tmp1454->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1456 = *$tmp1455;
frost$core$Bit $tmp1457 = frost$core$Bit$init$builtin_bit($tmp1456 != NULL);
bool $tmp1458 = $tmp1457.value;
if ($tmp1458) goto block131; else goto block132;
block132:;
frost$core$Int64 $tmp1459 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1460, $tmp1459);
abort(); // unreachable
block131:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1461 = &$tmp1454->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1462 = *$tmp1461;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
frost$core$Int64 $tmp1463 = (frost$core$Int64) {1};
frost$core$Object* $tmp1464 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1462, $tmp1463);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1451, ((org$frostlang$frostc$Type*) $tmp1464));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1448, ((frost$collections$Key*) $tmp1450), ((frost$core$Object*) $tmp1451));
frost$core$Frost$unref$frost$core$Object$Q($tmp1464);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1450)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1465 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
*(&local54) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp1466 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block125:;
frost$core$Int64 $tmp1467 = (frost$core$Int64) {20};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:393:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1468 = $tmp831.value;
int64_t $tmp1469 = $tmp1467.value;
bool $tmp1470 = $tmp1468 == $tmp1469;
frost$core$Bit $tmp1471 = frost$core$Bit$init$builtin_bit($tmp1470);
bool $tmp1472 = $tmp1471.value;
if ($tmp1472) goto block133; else goto block134;
block133:;
org$frostlang$frostc$Position* $tmp1473 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 0);
org$frostlang$frostc$Position $tmp1474 = *$tmp1473;
org$frostlang$frostc$IR$Value** $tmp1475 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1476 = *$tmp1475;
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
org$frostlang$frostc$IR$Value* $tmp1477 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
*(&local55) = $tmp1476;
org$frostlang$frostc$IR$Value** $tmp1478 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1479 = *$tmp1478;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:394
org$frostlang$frostc$IR$Value* $tmp1480 = *(&local55);
org$frostlang$frostc$pass$Analyzer$State* $tmp1481 = *(&local0);
$fn1483 $tmp1482 = ($fn1483) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1484 = $tmp1482(param0, $tmp1480, $tmp1481);
*(&local56) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1485 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1485));
*(&local56) = $tmp1484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:395
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1486 = *(&local56);
org$frostlang$frostc$Type** $tmp1487 = &$tmp1486->type;
org$frostlang$frostc$Type* $tmp1488 = *$tmp1487;
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:395:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:618
frost$core$String** $tmp1489 = &((org$frostlang$frostc$Symbol*) $tmp1488)->name;
frost$core$String* $tmp1490 = *$tmp1489;
frost$core$Bit $tmp1491 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1490, &$s1492);
bool $tmp1493 = $tmp1491.value;
if ($tmp1493) goto block137; else goto block138;
block138:;
frost$core$Int64 $tmp1494 = (frost$core$Int64) {395};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1495, $tmp1494);
abort(); // unreachable
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:396
org$frostlang$frostc$pass$Analyzer$State* $tmp1496 = *(&local0);
frost$collections$HashMap** $tmp1497 = &$tmp1496->statements;
frost$collections$HashMap* $tmp1498 = *$tmp1497;
org$frostlang$frostc$IR$Statement$ID $tmp1499 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1500;
$tmp1500 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1500->value = $tmp1499;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1501 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1502 = *(&local56);
org$frostlang$frostc$Type** $tmp1503 = &$tmp1502->type;
org$frostlang$frostc$Type* $tmp1504 = *$tmp1503;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:396:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1505 = &$tmp1504->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1506 = *$tmp1505;
frost$core$Bit $tmp1507 = frost$core$Bit$init$builtin_bit($tmp1506 != NULL);
bool $tmp1508 = $tmp1507.value;
if ($tmp1508) goto block140; else goto block141;
block141:;
frost$core$Int64 $tmp1509 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1510, $tmp1509);
abort(); // unreachable
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1511 = &$tmp1504->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1512 = *$tmp1511;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
frost$core$Int64 $tmp1513 = (frost$core$Int64) {1};
frost$core$Object* $tmp1514 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1512, $tmp1513);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1501, ((org$frostlang$frostc$Type*) $tmp1514));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1498, ((frost$collections$Key*) $tmp1500), ((frost$core$Object*) $tmp1501));
frost$core$Frost$unref$frost$core$Object$Q($tmp1514);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1500)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1515 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
*(&local56) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp1516 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block134:;
frost$core$Int64 $tmp1517 = (frost$core$Int64) {21};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:398:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1518 = $tmp831.value;
int64_t $tmp1519 = $tmp1517.value;
bool $tmp1520 = $tmp1518 == $tmp1519;
frost$core$Bit $tmp1521 = frost$core$Bit$init$builtin_bit($tmp1520);
bool $tmp1522 = $tmp1521.value;
if ($tmp1522) goto block142; else goto block143;
block142:;
org$frostlang$frostc$Position* $tmp1523 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 0);
org$frostlang$frostc$Position $tmp1524 = *$tmp1523;
org$frostlang$frostc$IR$Value** $tmp1525 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1526 = *$tmp1525;
*(&local57) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
org$frostlang$frostc$IR$Value* $tmp1527 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
*(&local57) = $tmp1526;
org$frostlang$frostc$IR$Value** $tmp1528 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1529 = *$tmp1528;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:399
org$frostlang$frostc$pass$Analyzer$State* $tmp1530 = *(&local0);
frost$collections$HashMap** $tmp1531 = &$tmp1530->statements;
frost$collections$HashMap* $tmp1532 = *$tmp1531;
org$frostlang$frostc$IR$Statement$ID $tmp1533 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1534;
$tmp1534 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1534->value = $tmp1533;
org$frostlang$frostc$IR$Value* $tmp1535 = *(&local57);
org$frostlang$frostc$pass$Analyzer$State* $tmp1536 = *(&local0);
$fn1538 $tmp1537 = ($fn1538) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1539 = $tmp1537(param0, $tmp1535, $tmp1536);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1532, ((frost$collections$Key*) $tmp1534), ((frost$core$Object*) $tmp1539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1534)));
org$frostlang$frostc$IR$Value* $tmp1540 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
*(&local57) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block143:;
frost$core$Int64 $tmp1541 = (frost$core$Int64) {22};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:401:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1542 = $tmp831.value;
int64_t $tmp1543 = $tmp1541.value;
bool $tmp1544 = $tmp1542 == $tmp1543;
frost$core$Bit $tmp1545 = frost$core$Bit$init$builtin_bit($tmp1544);
bool $tmp1546 = $tmp1545.value;
if ($tmp1546) goto block145; else goto block146;
block145:;
org$frostlang$frostc$Position* $tmp1547 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 0);
org$frostlang$frostc$Position $tmp1548 = *$tmp1547;
org$frostlang$frostc$IR$Value** $tmp1549 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1550 = *$tmp1549;
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1550));
org$frostlang$frostc$IR$Value* $tmp1551 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
*(&local58) = $tmp1550;
org$frostlang$frostc$IR$Value** $tmp1552 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1553 = *$tmp1552;
org$frostlang$frostc$IR$Value** $tmp1554 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 40);
org$frostlang$frostc$IR$Value* $tmp1555 = *$tmp1554;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:402
org$frostlang$frostc$pass$Analyzer$State* $tmp1556 = *(&local0);
frost$collections$HashMap** $tmp1557 = &$tmp1556->statements;
frost$collections$HashMap* $tmp1558 = *$tmp1557;
org$frostlang$frostc$IR$Statement$ID $tmp1559 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1560;
$tmp1560 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1560->value = $tmp1559;
org$frostlang$frostc$IR$Value* $tmp1561 = *(&local58);
org$frostlang$frostc$pass$Analyzer$State* $tmp1562 = *(&local0);
$fn1564 $tmp1563 = ($fn1564) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1565 = $tmp1563(param0, $tmp1561, $tmp1562);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1558, ((frost$collections$Key*) $tmp1560), ((frost$core$Object*) $tmp1565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1560)));
org$frostlang$frostc$IR$Value* $tmp1566 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block146:;
frost$core$Int64 $tmp1567 = (frost$core$Int64) {26};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:404:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1568 = $tmp831.value;
int64_t $tmp1569 = $tmp1567.value;
bool $tmp1570 = $tmp1568 == $tmp1569;
frost$core$Bit $tmp1571 = frost$core$Bit$init$builtin_bit($tmp1570);
bool $tmp1572 = $tmp1571.value;
if ($tmp1572) goto block148; else goto block149;
block148:;
org$frostlang$frostc$Position* $tmp1573 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 0);
org$frostlang$frostc$Position $tmp1574 = *$tmp1573;
org$frostlang$frostc$MethodDecl** $tmp1575 = (org$frostlang$frostc$MethodDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 24);
org$frostlang$frostc$MethodDecl* $tmp1576 = *$tmp1575;
*(&local59) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1576));
org$frostlang$frostc$MethodDecl* $tmp1577 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
*(&local59) = $tmp1576;
org$frostlang$frostc$FixedArray** $tmp1578 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1579 = *$tmp1578;
*(&local60) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
org$frostlang$frostc$FixedArray* $tmp1580 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
*(&local60) = $tmp1579;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:405
org$frostlang$frostc$MethodDecl* $tmp1581 = *(&local59);
org$frostlang$frostc$Type** $tmp1582 = &$tmp1581->returnType;
org$frostlang$frostc$Type* $tmp1583 = *$tmp1582;
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from Analyzer.frost:405:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1584 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1585 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1586 = &(&local62)->$rawValue;
*$tmp1586 = $tmp1585;
org$frostlang$frostc$Type$Kind $tmp1587 = *(&local62);
*(&local61) = $tmp1587;
org$frostlang$frostc$Type$Kind $tmp1588 = *(&local61);
org$frostlang$frostc$Position $tmp1589 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1590 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1584, &$s1591, $tmp1588, $tmp1589, $tmp1590);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:405:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1592 = &((org$frostlang$frostc$Symbol*) $tmp1583)->name;
frost$core$String* $tmp1593 = *$tmp1592;
frost$core$String** $tmp1594 = &((org$frostlang$frostc$Symbol*) $tmp1584)->name;
frost$core$String* $tmp1595 = *$tmp1594;
frost$core$Bit $tmp1596 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1593, $tmp1595);
bool $tmp1597 = $tmp1596.value;
if ($tmp1597) goto block157; else goto block158;
block157:;
org$frostlang$frostc$Type$Kind* $tmp1598 = &$tmp1583->typeKind;
org$frostlang$frostc$Type$Kind $tmp1599 = *$tmp1598;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1600;
$tmp1600 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1600->value = $tmp1599;
org$frostlang$frostc$Type$Kind* $tmp1601 = &$tmp1584->typeKind;
org$frostlang$frostc$Type$Kind $tmp1602 = *$tmp1601;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1603;
$tmp1603 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1603->value = $tmp1602;
ITable* $tmp1604 = ((frost$core$Equatable*) $tmp1600)->$class->itable;
while ($tmp1604->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1604 = $tmp1604->next;
}
$fn1606 $tmp1605 = $tmp1604->methods[0];
frost$core$Bit $tmp1607 = $tmp1605(((frost$core$Equatable*) $tmp1600), ((frost$core$Equatable*) $tmp1603));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1603)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1600)));
*(&local63) = $tmp1607;
goto block159;
block158:;
*(&local63) = $tmp1596;
goto block159;
block159:;
frost$core$Bit $tmp1608 = *(&local63);
bool $tmp1609 = $tmp1608.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
if ($tmp1609) goto block151; else goto block153;
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:406
org$frostlang$frostc$pass$Analyzer$State* $tmp1610 = *(&local0);
frost$collections$HashMap** $tmp1611 = &$tmp1610->statements;
frost$collections$HashMap* $tmp1612 = *$tmp1611;
org$frostlang$frostc$IR$Statement$ID $tmp1613 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1614;
$tmp1614 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1614->value = $tmp1613;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1615 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$MethodDecl* $tmp1616 = *(&local59);
org$frostlang$frostc$Type** $tmp1617 = &$tmp1616->returnType;
org$frostlang$frostc$Type* $tmp1618 = *$tmp1617;
org$frostlang$frostc$FixedArray* $tmp1619 = *(&local60);
frost$core$Int64 $tmp1620 = (frost$core$Int64) {0};
frost$core$Object* $tmp1621 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1619, $tmp1620);
org$frostlang$frostc$pass$Analyzer$State* $tmp1622 = *(&local0);
$fn1624 $tmp1623 = ($fn1624) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1625 = $tmp1623(param0, ((org$frostlang$frostc$IR$Value*) $tmp1621), $tmp1622);
frost$collections$ListView** $tmp1626 = &$tmp1625->nonNullImplications;
frost$collections$ListView* $tmp1627 = *$tmp1626;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp1615, $tmp1618, $tmp1627);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1612, ((frost$collections$Key*) $tmp1614), ((frost$core$Object*) $tmp1615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
frost$core$Frost$unref$frost$core$Object$Q($tmp1621);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1614)));
goto block152;
block153:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:410
org$frostlang$frostc$pass$Analyzer$State* $tmp1628 = *(&local0);
frost$collections$HashMap** $tmp1629 = &$tmp1628->statements;
frost$collections$HashMap* $tmp1630 = *$tmp1629;
org$frostlang$frostc$IR$Statement$ID $tmp1631 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1632;
$tmp1632 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1632->value = $tmp1631;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1633 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$MethodDecl* $tmp1634 = *(&local59);
org$frostlang$frostc$Type** $tmp1635 = &$tmp1634->returnType;
org$frostlang$frostc$Type* $tmp1636 = *$tmp1635;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1633, $tmp1636);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1630, ((frost$collections$Key*) $tmp1632), ((frost$core$Object*) $tmp1633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1632)));
goto block152;
block152:;
org$frostlang$frostc$FixedArray* $tmp1637 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
*(&local60) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1638 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
*(&local59) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block15;
block149:;
frost$core$Int64 $tmp1639 = (frost$core$Int64) {27};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:413:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1640 = $tmp831.value;
int64_t $tmp1641 = $tmp1639.value;
bool $tmp1642 = $tmp1640 == $tmp1641;
frost$core$Bit $tmp1643 = frost$core$Bit$init$builtin_bit($tmp1642);
bool $tmp1644 = $tmp1643.value;
if ($tmp1644) goto block160; else goto block15;
block160:;
org$frostlang$frostc$Position* $tmp1645 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 0);
org$frostlang$frostc$Position $tmp1646 = *$tmp1645;
org$frostlang$frostc$IR$Value** $tmp1647 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1648 = *$tmp1647;
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
org$frostlang$frostc$IR$Value* $tmp1649 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
*(&local64) = $tmp1648;
org$frostlang$frostc$IR$Value** $tmp1650 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp829)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1651 = *$tmp1650;
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
org$frostlang$frostc$IR$Value* $tmp1652 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
*(&local65) = $tmp1651;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:414
org$frostlang$frostc$IR$Value* $tmp1653 = *(&local65);
frost$core$Int64* $tmp1654 = &$tmp1653->$rawValue;
frost$core$Int64 $tmp1655 = *$tmp1654;
frost$core$Int64 $tmp1656 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:415:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1657 = $tmp1655.value;
int64_t $tmp1658 = $tmp1656.value;
bool $tmp1659 = $tmp1657 == $tmp1658;
frost$core$Bit $tmp1660 = frost$core$Bit$init$builtin_bit($tmp1659);
bool $tmp1661 = $tmp1660.value;
if ($tmp1661) goto block163; else goto block162;
block163:;
frost$core$Int64* $tmp1662 = (frost$core$Int64*) ($tmp1653->$data + 0);
frost$core$Int64 $tmp1663 = *$tmp1662;
*(&local66) = $tmp1663;
org$frostlang$frostc$Type** $tmp1664 = (org$frostlang$frostc$Type**) ($tmp1653->$data + 8);
org$frostlang$frostc$Type* $tmp1665 = *$tmp1664;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:416
org$frostlang$frostc$pass$Analyzer$State* $tmp1666 = *(&local0);
frost$collections$Array** $tmp1667 = &$tmp1666->locals;
frost$collections$Array* $tmp1668 = *$tmp1667;
frost$core$Int64 $tmp1669 = *(&local66);
org$frostlang$frostc$IR$Value* $tmp1670 = *(&local64);
org$frostlang$frostc$pass$Analyzer$State* $tmp1671 = *(&local0);
$fn1673 $tmp1672 = ($fn1673) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1674 = $tmp1672(param0, $tmp1670, $tmp1671);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int64, value:frost.collections.Array.T) from Analyzer.frost:416:42
frost$core$Int64 $tmp1675 = (frost$core$Int64) {0};
int64_t $tmp1676 = $tmp1669.value;
int64_t $tmp1677 = $tmp1675.value;
bool $tmp1678 = $tmp1676 >= $tmp1677;
frost$core$Bit $tmp1679 = (frost$core$Bit) {$tmp1678};
bool $tmp1680 = $tmp1679.value;
if ($tmp1680) goto block168; else goto block167;
block168:;
ITable* $tmp1681 = ((frost$collections$CollectionView*) $tmp1668)->$class->itable;
while ($tmp1681->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1681 = $tmp1681->next;
}
$fn1683 $tmp1682 = $tmp1681->methods[0];
frost$core$Int64 $tmp1684 = $tmp1682(((frost$collections$CollectionView*) $tmp1668));
int64_t $tmp1685 = $tmp1669.value;
int64_t $tmp1686 = $tmp1684.value;
bool $tmp1687 = $tmp1685 < $tmp1686;
frost$core$Bit $tmp1688 = (frost$core$Bit) {$tmp1687};
bool $tmp1689 = $tmp1688.value;
if ($tmp1689) goto block166; else goto block167;
block167:;
frost$core$Int64 $tmp1690 = (frost$core$Int64) {27};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1691, $tmp1690, &$s1692);
abort(); // unreachable
block166:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:27
frost$core$Object*** $tmp1693 = &$tmp1668->data;
frost$core$Object** $tmp1694 = *$tmp1693;
int64_t $tmp1695 = $tmp1669.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
frost$core$Object* $tmp1696 = $tmp1694[$tmp1695];
frost$core$Frost$unref$frost$core$Object$Q($tmp1696);
$tmp1694[$tmp1695] = ((frost$core$Object*) $tmp1674);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
goto block162;
block162:;
org$frostlang$frostc$IR$Value* $tmp1697 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1698 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1698));
*(&local64) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block15:;
frost$core$Frost$unref$frost$core$Object$Q($tmp829);
frost$core$Int64 $tmp1699 = *(&local2);
int64_t $tmp1700 = $tmp762.value;
int64_t $tmp1701 = $tmp1699.value;
int64_t $tmp1702 = $tmp1700 - $tmp1701;
frost$core$Int64 $tmp1703 = (frost$core$Int64) {$tmp1702};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1704 = $tmp1703.value;
frost$core$UInt64 $tmp1705 = (frost$core$UInt64) {((uint64_t) $tmp1704)};
if ($tmp764) goto block171; else goto block172;
block171:;
uint64_t $tmp1706 = $tmp1705.value;
uint64_t $tmp1707 = $tmp767.value;
bool $tmp1708 = $tmp1706 >= $tmp1707;
frost$core$Bit $tmp1709 = (frost$core$Bit) {$tmp1708};
bool $tmp1710 = $tmp1709.value;
if ($tmp1710) goto block169; else goto block3;
block172:;
uint64_t $tmp1711 = $tmp1705.value;
uint64_t $tmp1712 = $tmp767.value;
bool $tmp1713 = $tmp1711 > $tmp1712;
frost$core$Bit $tmp1714 = (frost$core$Bit) {$tmp1713};
bool $tmp1715 = $tmp1714.value;
if ($tmp1715) goto block169; else goto block3;
block169:;
int64_t $tmp1716 = $tmp1699.value;
int64_t $tmp1717 = $tmp765.value;
int64_t $tmp1718 = $tmp1716 + $tmp1717;
frost$core$Int64 $tmp1719 = (frost$core$Int64) {$tmp1718};
*(&local2) = $tmp1719;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:422
org$frostlang$frostc$IR$Block* $tmp1720 = *(&local1);
frost$core$Int64 $tmp1721 = param1.exit;
org$frostlang$frostc$pass$Analyzer$State* $tmp1722 = *(&local0);
$fn1724 $tmp1723 = ($fn1724) param0->$class->vtable[5];
$tmp1723(param0, $tmp1720, $tmp1721, $tmp1722);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:423
org$frostlang$frostc$pass$Analyzer$State* $tmp1725 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
org$frostlang$frostc$IR$Block* $tmp1726 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
org$frostlang$frostc$pass$Analyzer$State* $tmp1727 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
return $tmp1725;

}
void org$frostlang$frostc$pass$Analyzer$process$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Block$ID param1) {

org$frostlang$frostc$IR$Block* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$pass$Analyzer$BlockExit local2;
org$frostlang$frostc$pass$Analyzer$BlockExit local3;
org$frostlang$frostc$IR$Block$ID local4;
org$frostlang$frostc$IR$Block$ID local5;
org$frostlang$frostc$pass$Analyzer$BlockExit local6;
org$frostlang$frostc$pass$Analyzer$BlockExit local7;
org$frostlang$frostc$pass$Analyzer$BlockExit local8;
org$frostlang$frostc$pass$Analyzer$BlockExit local9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:427
$fn1729 $tmp1728 = ($fn1729) param0->$class->vtable[4];
org$frostlang$frostc$IR$Block* $tmp1730 = $tmp1728(param0, param1);
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
org$frostlang$frostc$IR$Block* $tmp1731 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
*(&local0) = $tmp1730;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:428
org$frostlang$frostc$IR$Block* $tmp1732 = *(&local0);
frost$collections$Array** $tmp1733 = &$tmp1732->statements;
frost$collections$Array* $tmp1734 = *$tmp1733;
org$frostlang$frostc$IR$Block* $tmp1735 = *(&local0);
frost$collections$Array** $tmp1736 = &$tmp1735->statements;
frost$collections$Array* $tmp1737 = *$tmp1736;
ITable* $tmp1738 = ((frost$collections$CollectionView*) $tmp1737)->$class->itable;
while ($tmp1738->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1738 = $tmp1738->next;
}
$fn1740 $tmp1739 = $tmp1738->methods[0];
frost$core$Int64 $tmp1741 = $tmp1739(((frost$collections$CollectionView*) $tmp1737));
frost$core$Int64 $tmp1742 = (frost$core$Int64) {1};
int64_t $tmp1743 = $tmp1741.value;
int64_t $tmp1744 = $tmp1742.value;
int64_t $tmp1745 = $tmp1743 - $tmp1744;
frost$core$Int64 $tmp1746 = (frost$core$Int64) {$tmp1745};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:428:31
frost$core$Int64 $tmp1747 = (frost$core$Int64) {0};
int64_t $tmp1748 = $tmp1746.value;
int64_t $tmp1749 = $tmp1747.value;
bool $tmp1750 = $tmp1748 >= $tmp1749;
frost$core$Bit $tmp1751 = (frost$core$Bit) {$tmp1750};
bool $tmp1752 = $tmp1751.value;
if ($tmp1752) goto block4; else goto block3;
block4:;
ITable* $tmp1753 = ((frost$collections$CollectionView*) $tmp1734)->$class->itable;
while ($tmp1753->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1753 = $tmp1753->next;
}
$fn1755 $tmp1754 = $tmp1753->methods[0];
frost$core$Int64 $tmp1756 = $tmp1754(((frost$collections$CollectionView*) $tmp1734));
int64_t $tmp1757 = $tmp1746.value;
int64_t $tmp1758 = $tmp1756.value;
bool $tmp1759 = $tmp1757 < $tmp1758;
frost$core$Bit $tmp1760 = (frost$core$Bit) {$tmp1759};
bool $tmp1761 = $tmp1760.value;
if ($tmp1761) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1762 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1763, $tmp1762, &$s1764);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp1765 = &$tmp1734->data;
frost$core$Object** $tmp1766 = *$tmp1765;
int64_t $tmp1767 = $tmp1746.value;
frost$core$Object* $tmp1768 = $tmp1766[$tmp1767];
frost$core$Frost$ref$frost$core$Object$Q($tmp1768);
frost$core$Int64* $tmp1769 = &((org$frostlang$frostc$IR$Statement*) $tmp1768)->$rawValue;
frost$core$Int64 $tmp1770 = *$tmp1769;
frost$core$Int64 $tmp1771 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:429:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1772 = $tmp1770.value;
int64_t $tmp1773 = $tmp1771.value;
bool $tmp1774 = $tmp1772 == $tmp1773;
frost$core$Bit $tmp1775 = frost$core$Bit$init$builtin_bit($tmp1774);
bool $tmp1776 = $tmp1775.value;
if ($tmp1776) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp1777 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1768)->$data + 0);
org$frostlang$frostc$Position $tmp1778 = *$tmp1777;
org$frostlang$frostc$IR$Block$ID* $tmp1779 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1768)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp1780 = *$tmp1779;
*(&local1) = $tmp1780;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:430
org$frostlang$frostc$IR$Block* $tmp1781 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1782 = &$tmp1781->id;
org$frostlang$frostc$IR$Block$ID $tmp1783 = *$tmp1782;
frost$core$Int64 $tmp1784 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int64):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:430:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:84
org$frostlang$frostc$IR$Block$ID* $tmp1785 = &(&local3)->id;
*$tmp1785 = $tmp1783;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:85
frost$core$Int64* $tmp1786 = &(&local3)->exit;
*$tmp1786 = $tmp1784;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1787 = *(&local3);
*(&local2) = $tmp1787;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1788 = *(&local2);
org$frostlang$frostc$IR$Block$ID $tmp1789 = *(&local1);
$fn1791 $tmp1790 = ($fn1791) param0->$class->vtable[3];
$tmp1790(param0, $tmp1788, $tmp1789);
goto block5;
block7:;
frost$core$Int64 $tmp1792 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:432:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1793 = $tmp1770.value;
int64_t $tmp1794 = $tmp1792.value;
bool $tmp1795 = $tmp1793 == $tmp1794;
frost$core$Bit $tmp1796 = frost$core$Bit$init$builtin_bit($tmp1795);
bool $tmp1797 = $tmp1796.value;
if ($tmp1797) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp1798 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1768)->$data + 0);
org$frostlang$frostc$Position $tmp1799 = *$tmp1798;
org$frostlang$frostc$IR$Value** $tmp1800 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1768)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1801 = *$tmp1800;
org$frostlang$frostc$IR$Block$ID* $tmp1802 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1768)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp1803 = *$tmp1802;
*(&local4) = $tmp1803;
org$frostlang$frostc$IR$Block$ID* $tmp1804 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1768)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp1805 = *$tmp1804;
*(&local5) = $tmp1805;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:433
org$frostlang$frostc$IR$Block* $tmp1806 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1807 = &$tmp1806->id;
org$frostlang$frostc$IR$Block$ID $tmp1808 = *$tmp1807;
frost$core$Int64 $tmp1809 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int64):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:433:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:84
org$frostlang$frostc$IR$Block$ID* $tmp1810 = &(&local7)->id;
*$tmp1810 = $tmp1808;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:85
frost$core$Int64* $tmp1811 = &(&local7)->exit;
*$tmp1811 = $tmp1809;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1812 = *(&local7);
*(&local6) = $tmp1812;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1813 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp1814 = *(&local4);
$fn1816 $tmp1815 = ($fn1816) param0->$class->vtable[3];
$tmp1815(param0, $tmp1813, $tmp1814);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:434
org$frostlang$frostc$IR$Block* $tmp1817 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1818 = &$tmp1817->id;
org$frostlang$frostc$IR$Block$ID $tmp1819 = *$tmp1818;
frost$core$Int64 $tmp1820 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int64):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:434:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:84
org$frostlang$frostc$IR$Block$ID* $tmp1821 = &(&local9)->id;
*$tmp1821 = $tmp1819;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:85
frost$core$Int64* $tmp1822 = &(&local9)->exit;
*$tmp1822 = $tmp1820;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1823 = *(&local9);
*(&local8) = $tmp1823;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1824 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp1825 = *(&local5);
$fn1827 $tmp1826 = ($fn1827) param0->$class->vtable[3];
$tmp1826(param0, $tmp1824, $tmp1825);
goto block5;
block11:;
frost$core$Int64 $tmp1828 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:436:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1829 = $tmp1770.value;
int64_t $tmp1830 = $tmp1828.value;
bool $tmp1831 = $tmp1829 == $tmp1830;
frost$core$Bit $tmp1832 = frost$core$Bit$init$builtin_bit($tmp1831);
bool $tmp1833 = $tmp1832.value;
if ($tmp1833) goto block15; else goto block16;
block15:;
goto block5;
block16:;
frost$core$Int64 $tmp1834 = (frost$core$Int64) {25};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:438:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1835 = $tmp1770.value;
int64_t $tmp1836 = $tmp1834.value;
bool $tmp1837 = $tmp1835 == $tmp1836;
frost$core$Bit $tmp1838 = frost$core$Bit$init$builtin_bit($tmp1837);
bool $tmp1839 = $tmp1838.value;
if ($tmp1839) goto block18; else goto block19;
block18:;
goto block5;
block19:;
frost$core$Int64 $tmp1840 = (frost$core$Int64) {28};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:440:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1841 = $tmp1770.value;
int64_t $tmp1842 = $tmp1840.value;
bool $tmp1843 = $tmp1841 == $tmp1842;
frost$core$Bit $tmp1844 = frost$core$Bit$init$builtin_bit($tmp1843);
bool $tmp1845 = $tmp1844.value;
if ($tmp1845) goto block21; else goto block22;
block21:;
goto block5;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:443
frost$core$Int64 $tmp1846 = (frost$core$Int64) {443};
org$frostlang$frostc$IR$Block* $tmp1847 = *(&local0);
frost$collections$Array** $tmp1848 = &$tmp1847->statements;
frost$collections$Array* $tmp1849 = *$tmp1848;
org$frostlang$frostc$IR$Block* $tmp1850 = *(&local0);
frost$collections$Array** $tmp1851 = &$tmp1850->statements;
frost$collections$Array* $tmp1852 = *$tmp1851;
ITable* $tmp1853 = ((frost$collections$CollectionView*) $tmp1852)->$class->itable;
while ($tmp1853->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1853 = $tmp1853->next;
}
$fn1855 $tmp1854 = $tmp1853->methods[0];
frost$core$Int64 $tmp1856 = $tmp1854(((frost$collections$CollectionView*) $tmp1852));
frost$core$Int64 $tmp1857 = (frost$core$Int64) {1};
int64_t $tmp1858 = $tmp1856.value;
int64_t $tmp1859 = $tmp1857.value;
int64_t $tmp1860 = $tmp1858 - $tmp1859;
frost$core$Int64 $tmp1861 = (frost$core$Int64) {$tmp1860};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:444:41
frost$core$Int64 $tmp1862 = (frost$core$Int64) {0};
int64_t $tmp1863 = $tmp1861.value;
int64_t $tmp1864 = $tmp1862.value;
bool $tmp1865 = $tmp1863 >= $tmp1864;
frost$core$Bit $tmp1866 = (frost$core$Bit) {$tmp1865};
bool $tmp1867 = $tmp1866.value;
if ($tmp1867) goto block27; else goto block26;
block27:;
ITable* $tmp1868 = ((frost$collections$CollectionView*) $tmp1849)->$class->itable;
while ($tmp1868->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1868 = $tmp1868->next;
}
$fn1870 $tmp1869 = $tmp1868->methods[0];
frost$core$Int64 $tmp1871 = $tmp1869(((frost$collections$CollectionView*) $tmp1849));
int64_t $tmp1872 = $tmp1861.value;
int64_t $tmp1873 = $tmp1871.value;
bool $tmp1874 = $tmp1872 < $tmp1873;
frost$core$Bit $tmp1875 = (frost$core$Bit) {$tmp1874};
bool $tmp1876 = $tmp1875.value;
if ($tmp1876) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp1877 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1878, $tmp1877, &$s1879);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp1880 = &$tmp1849->data;
frost$core$Object** $tmp1881 = *$tmp1880;
int64_t $tmp1882 = $tmp1861.value;
frost$core$Object* $tmp1883 = $tmp1881[$tmp1882];
frost$core$Frost$ref$frost$core$Object$Q($tmp1883);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:443:70
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1885 $tmp1884 = ($fn1885) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1883))->$class->vtable[0];
frost$core$String* $tmp1886 = $tmp1884(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1883)));
frost$core$String* $tmp1887 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1888, $tmp1886);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1889, $tmp1846, $tmp1887);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q($tmp1883);
abort(); // unreachable
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1768);
org$frostlang$frostc$IR$Block* $tmp1890 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$dump(org$frostlang$frostc$pass$Analyzer* param0) {

frost$core$Int64 local0;
org$frostlang$frostc$IR$Block* local1 = NULL;
frost$core$Int64 local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:450
org$frostlang$frostc$MethodDecl** $tmp1891 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp1892 = *$tmp1891;
frost$core$String* $tmp1893 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp1892);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Analyzer.frost:450:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp1893);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
// begin inline call to method frost.io.Console.printLine() from Console.stub:26:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:38
frost$io$Console$print$frost$core$String(&$s1894);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:451
frost$core$Int64 $tmp1895 = (frost$core$Int64) {0};
org$frostlang$frostc$IR** $tmp1896 = &param0->ir;
org$frostlang$frostc$IR* $tmp1897 = *$tmp1896;
frost$collections$Array** $tmp1898 = &$tmp1897->locals;
frost$collections$Array* $tmp1899 = *$tmp1898;
ITable* $tmp1900 = ((frost$collections$CollectionView*) $tmp1899)->$class->itable;
while ($tmp1900->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1900 = $tmp1900->next;
}
$fn1902 $tmp1901 = $tmp1900->methods[0];
frost$core$Int64 $tmp1903 = $tmp1901(((frost$collections$CollectionView*) $tmp1899));
frost$core$Bit $tmp1904 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1905 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1895, $tmp1903, $tmp1904);
frost$core$Int64 $tmp1906 = $tmp1905.min;
*(&local0) = $tmp1906;
frost$core$Int64 $tmp1907 = $tmp1905.max;
frost$core$Bit $tmp1908 = $tmp1905.inclusive;
bool $tmp1909 = $tmp1908.value;
frost$core$Int64 $tmp1910 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1911 = $tmp1910.value;
frost$core$UInt64 $tmp1912 = (frost$core$UInt64) {((uint64_t) $tmp1911)};
if ($tmp1909) goto block7; else goto block8;
block7:;
int64_t $tmp1913 = $tmp1906.value;
int64_t $tmp1914 = $tmp1907.value;
bool $tmp1915 = $tmp1913 <= $tmp1914;
frost$core$Bit $tmp1916 = (frost$core$Bit) {$tmp1915};
bool $tmp1917 = $tmp1916.value;
if ($tmp1917) goto block4; else goto block5;
block8:;
int64_t $tmp1918 = $tmp1906.value;
int64_t $tmp1919 = $tmp1907.value;
bool $tmp1920 = $tmp1918 < $tmp1919;
frost$core$Bit $tmp1921 = (frost$core$Bit) {$tmp1920};
bool $tmp1922 = $tmp1921.value;
if ($tmp1922) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:452
frost$core$Int64 $tmp1923 = *(&local0);
frost$core$Int64$wrapper* $tmp1924;
$tmp1924 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1924->value = $tmp1923;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:452:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1926 $tmp1925 = ($fn1926) ((frost$core$Object*) $tmp1924)->$class->vtable[0];
frost$core$String* $tmp1927 = $tmp1925(((frost$core$Object*) $tmp1924));
frost$core$String* $tmp1928 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1929, $tmp1927);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
frost$core$String* $tmp1930 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1928, &$s1931);
org$frostlang$frostc$IR** $tmp1932 = &param0->ir;
org$frostlang$frostc$IR* $tmp1933 = *$tmp1932;
frost$collections$Array** $tmp1934 = &$tmp1933->locals;
frost$collections$Array* $tmp1935 = *$tmp1934;
frost$core$Int64 $tmp1936 = *(&local0);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:452:54
frost$core$Int64 $tmp1937 = (frost$core$Int64) {0};
int64_t $tmp1938 = $tmp1936.value;
int64_t $tmp1939 = $tmp1937.value;
bool $tmp1940 = $tmp1938 >= $tmp1939;
frost$core$Bit $tmp1941 = (frost$core$Bit) {$tmp1940};
bool $tmp1942 = $tmp1941.value;
if ($tmp1942) goto block13; else goto block12;
block13:;
ITable* $tmp1943 = ((frost$collections$CollectionView*) $tmp1935)->$class->itable;
while ($tmp1943->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1943 = $tmp1943->next;
}
$fn1945 $tmp1944 = $tmp1943->methods[0];
frost$core$Int64 $tmp1946 = $tmp1944(((frost$collections$CollectionView*) $tmp1935));
int64_t $tmp1947 = $tmp1936.value;
int64_t $tmp1948 = $tmp1946.value;
bool $tmp1949 = $tmp1947 < $tmp1948;
frost$core$Bit $tmp1950 = (frost$core$Bit) {$tmp1949};
bool $tmp1951 = $tmp1950.value;
if ($tmp1951) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1952 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1953, $tmp1952, &$s1954);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp1955 = &$tmp1935->data;
frost$core$Object** $tmp1956 = *$tmp1955;
int64_t $tmp1957 = $tmp1936.value;
frost$core$Object* $tmp1958 = $tmp1956[$tmp1957];
frost$core$Frost$ref$frost$core$Object$Q($tmp1958);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:452:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1960 $tmp1959 = ($fn1960) ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1958))->$class->vtable[0];
frost$core$String* $tmp1961 = $tmp1959(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1958)));
frost$core$String* $tmp1962 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1930, $tmp1961);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
frost$core$String* $tmp1963 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1962, &$s1964);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Analyzer.frost:452:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp1963);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
// begin inline call to method frost.io.Console.printLine() from Console.stub:26:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:38
frost$io$Console$print$frost$core$String(&$s1965);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
frost$core$Frost$unref$frost$core$Object$Q($tmp1958);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1930));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
frost$core$Int64 $tmp1966 = *(&local0);
int64_t $tmp1967 = $tmp1907.value;
int64_t $tmp1968 = $tmp1966.value;
int64_t $tmp1969 = $tmp1967 - $tmp1968;
frost$core$Int64 $tmp1970 = (frost$core$Int64) {$tmp1969};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1971 = $tmp1970.value;
frost$core$UInt64 $tmp1972 = (frost$core$UInt64) {((uint64_t) $tmp1971)};
if ($tmp1909) goto block19; else goto block20;
block19:;
uint64_t $tmp1973 = $tmp1972.value;
uint64_t $tmp1974 = $tmp1912.value;
bool $tmp1975 = $tmp1973 >= $tmp1974;
frost$core$Bit $tmp1976 = (frost$core$Bit) {$tmp1975};
bool $tmp1977 = $tmp1976.value;
if ($tmp1977) goto block17; else goto block5;
block20:;
uint64_t $tmp1978 = $tmp1972.value;
uint64_t $tmp1979 = $tmp1912.value;
bool $tmp1980 = $tmp1978 > $tmp1979;
frost$core$Bit $tmp1981 = (frost$core$Bit) {$tmp1980};
bool $tmp1982 = $tmp1981.value;
if ($tmp1982) goto block17; else goto block5;
block17:;
int64_t $tmp1983 = $tmp1966.value;
int64_t $tmp1984 = $tmp1910.value;
int64_t $tmp1985 = $tmp1983 + $tmp1984;
frost$core$Int64 $tmp1986 = (frost$core$Int64) {$tmp1985};
*(&local0) = $tmp1986;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:454
org$frostlang$frostc$IR** $tmp1987 = &param0->ir;
org$frostlang$frostc$IR* $tmp1988 = *$tmp1987;
frost$collections$Array** $tmp1989 = &$tmp1988->blocks;
frost$collections$Array* $tmp1990 = *$tmp1989;
ITable* $tmp1991 = ((frost$collections$Iterable*) $tmp1990)->$class->itable;
while ($tmp1991->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1991 = $tmp1991->next;
}
$fn1993 $tmp1992 = $tmp1991->methods[0];
frost$collections$Iterator* $tmp1994 = $tmp1992(((frost$collections$Iterable*) $tmp1990));
goto block21;
block21:;
ITable* $tmp1995 = $tmp1994->$class->itable;
while ($tmp1995->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1995 = $tmp1995->next;
}
$fn1997 $tmp1996 = $tmp1995->methods[0];
frost$core$Bit $tmp1998 = $tmp1996($tmp1994);
bool $tmp1999 = $tmp1998.value;
if ($tmp1999) goto block23; else goto block22;
block22:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2000 = $tmp1994->$class->itable;
while ($tmp2000->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2000 = $tmp2000->next;
}
$fn2002 $tmp2001 = $tmp2000->methods[1];
frost$core$Object* $tmp2003 = $tmp2001($tmp1994);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2003)));
org$frostlang$frostc$IR$Block* $tmp2004 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2004));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp2003);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:455
org$frostlang$frostc$IR$Block* $tmp2005 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp2006 = &$tmp2005->id;
org$frostlang$frostc$IR$Block$ID $tmp2007 = *$tmp2006;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2008;
$tmp2008 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2008->value = $tmp2007;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:455:27
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn2010 $tmp2009 = ($fn2010) ((frost$core$Object*) $tmp2008)->$class->vtable[0];
frost$core$String* $tmp2011 = $tmp2009(((frost$core$Object*) $tmp2008));
frost$core$String* $tmp2012 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2013, $tmp2011);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
frost$core$String* $tmp2014 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2012, &$s2015);
frost$io$Console$print$frost$core$String($tmp2014);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2014));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:456
frost$collections$HashMap** $tmp2016 = &param0->entryStates;
frost$collections$HashMap* $tmp2017 = *$tmp2016;
org$frostlang$frostc$IR$Block* $tmp2018 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp2019 = &$tmp2018->id;
org$frostlang$frostc$IR$Block$ID $tmp2020 = *$tmp2019;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2021;
$tmp2021 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2021->value = $tmp2020;
frost$core$Object* $tmp2022 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2017, ((frost$collections$Key*) $tmp2021));
frost$core$Bit $tmp2023 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$pass$Analyzer$State*) $tmp2022) != NULL);
bool $tmp2024 = $tmp2023.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2022);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2021)));
if ($tmp2024) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:457
frost$collections$HashMap** $tmp2025 = &param0->entryStates;
frost$collections$HashMap* $tmp2026 = *$tmp2025;
org$frostlang$frostc$IR$Block* $tmp2027 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp2028 = &$tmp2027->id;
org$frostlang$frostc$IR$Block$ID $tmp2029 = *$tmp2028;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2030;
$tmp2030 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2030->value = $tmp2029;
frost$core$Object* $tmp2031 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2026, ((frost$collections$Key*) $tmp2030));
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:457:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn2033 $tmp2032 = ($fn2033) ((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp2031))->$class->vtable[0];
frost$core$String* $tmp2034 = $tmp2032(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp2031)));
frost$core$String* $tmp2035 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2036, $tmp2034);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
frost$io$Console$print$frost$core$String($tmp2035);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
frost$core$Frost$unref$frost$core$Object$Q($tmp2031);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2030)));
goto block26;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:459
// begin inline call to method frost.io.Console.printLine() from Analyzer.frost:459:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:38
frost$io$Console$print$frost$core$String(&$s2037);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:460
frost$core$Int64 $tmp2038 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block* $tmp2039 = *(&local1);
frost$collections$Array** $tmp2040 = &$tmp2039->statements;
frost$collections$Array* $tmp2041 = *$tmp2040;
ITable* $tmp2042 = ((frost$collections$CollectionView*) $tmp2041)->$class->itable;
while ($tmp2042->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2042 = $tmp2042->next;
}
$fn2044 $tmp2043 = $tmp2042->methods[0];
frost$core$Int64 $tmp2045 = $tmp2043(((frost$collections$CollectionView*) $tmp2041));
frost$core$Bit $tmp2046 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2047 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2038, $tmp2045, $tmp2046);
frost$core$Int64 $tmp2048 = $tmp2047.min;
*(&local2) = $tmp2048;
frost$core$Int64 $tmp2049 = $tmp2047.max;
frost$core$Bit $tmp2050 = $tmp2047.inclusive;
bool $tmp2051 = $tmp2050.value;
frost$core$Int64 $tmp2052 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2053 = $tmp2052.value;
frost$core$UInt64 $tmp2054 = (frost$core$UInt64) {((uint64_t) $tmp2053)};
if ($tmp2051) goto block33; else goto block34;
block33:;
int64_t $tmp2055 = $tmp2048.value;
int64_t $tmp2056 = $tmp2049.value;
bool $tmp2057 = $tmp2055 <= $tmp2056;
frost$core$Bit $tmp2058 = (frost$core$Bit) {$tmp2057};
bool $tmp2059 = $tmp2058.value;
if ($tmp2059) goto block30; else goto block31;
block34:;
int64_t $tmp2060 = $tmp2048.value;
int64_t $tmp2061 = $tmp2049.value;
bool $tmp2062 = $tmp2060 < $tmp2061;
frost$core$Bit $tmp2063 = (frost$core$Bit) {$tmp2062};
bool $tmp2064 = $tmp2063.value;
if ($tmp2064) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:461
org$frostlang$frostc$IR$Block* $tmp2065 = *(&local1);
frost$collections$Array** $tmp2066 = &$tmp2065->ids;
frost$collections$Array* $tmp2067 = *$tmp2066;
frost$core$Int64 $tmp2068 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:461:36
frost$core$Int64 $tmp2069 = (frost$core$Int64) {0};
int64_t $tmp2070 = $tmp2068.value;
int64_t $tmp2071 = $tmp2069.value;
bool $tmp2072 = $tmp2070 >= $tmp2071;
frost$core$Bit $tmp2073 = (frost$core$Bit) {$tmp2072};
bool $tmp2074 = $tmp2073.value;
if ($tmp2074) goto block38; else goto block37;
block38:;
ITable* $tmp2075 = ((frost$collections$CollectionView*) $tmp2067)->$class->itable;
while ($tmp2075->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2075 = $tmp2075->next;
}
$fn2077 $tmp2076 = $tmp2075->methods[0];
frost$core$Int64 $tmp2078 = $tmp2076(((frost$collections$CollectionView*) $tmp2067));
int64_t $tmp2079 = $tmp2068.value;
int64_t $tmp2080 = $tmp2078.value;
bool $tmp2081 = $tmp2079 < $tmp2080;
frost$core$Bit $tmp2082 = (frost$core$Bit) {$tmp2081};
bool $tmp2083 = $tmp2082.value;
if ($tmp2083) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp2084 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2085, $tmp2084, &$s2086);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2087 = &$tmp2067->data;
frost$core$Object** $tmp2088 = *$tmp2087;
int64_t $tmp2089 = $tmp2068.value;
frost$core$Object* $tmp2090 = $tmp2088[$tmp2089];
frost$core$Frost$ref$frost$core$Object$Q($tmp2090);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2091;
$tmp2091 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2091->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2090)->value;
// begin inline call to method frost.io.Console.print(o:frost.core.Object) from Analyzer.frost:461:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:30
$fn2093 $tmp2092 = ($fn2093) ((frost$core$Object*) $tmp2091)->$class->vtable[0];
frost$core$String* $tmp2094 = $tmp2092(((frost$core$Object*) $tmp2091));
frost$io$Console$print$frost$core$String($tmp2094);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2091));
frost$core$Frost$unref$frost$core$Object$Q($tmp2090);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:462
frost$io$Console$print$frost$core$String(&$s2095);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:463
org$frostlang$frostc$IR$Block* $tmp2096 = *(&local1);
frost$collections$Array** $tmp2097 = &$tmp2096->statements;
frost$collections$Array* $tmp2098 = *$tmp2097;
frost$core$Int64 $tmp2099 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:463:47
frost$core$Int64 $tmp2100 = (frost$core$Int64) {0};
int64_t $tmp2101 = $tmp2099.value;
int64_t $tmp2102 = $tmp2100.value;
bool $tmp2103 = $tmp2101 >= $tmp2102;
frost$core$Bit $tmp2104 = (frost$core$Bit) {$tmp2103};
bool $tmp2105 = $tmp2104.value;
if ($tmp2105) goto block43; else goto block42;
block43:;
ITable* $tmp2106 = ((frost$collections$CollectionView*) $tmp2098)->$class->itable;
while ($tmp2106->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2106 = $tmp2106->next;
}
$fn2108 $tmp2107 = $tmp2106->methods[0];
frost$core$Int64 $tmp2109 = $tmp2107(((frost$collections$CollectionView*) $tmp2098));
int64_t $tmp2110 = $tmp2099.value;
int64_t $tmp2111 = $tmp2109.value;
bool $tmp2112 = $tmp2110 < $tmp2111;
frost$core$Bit $tmp2113 = (frost$core$Bit) {$tmp2112};
bool $tmp2114 = $tmp2113.value;
if ($tmp2114) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp2115 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2116, $tmp2115, &$s2117);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2118 = &$tmp2098->data;
frost$core$Object** $tmp2119 = *$tmp2118;
int64_t $tmp2120 = $tmp2099.value;
frost$core$Object* $tmp2121 = $tmp2119[$tmp2120];
frost$core$Frost$ref$frost$core$Object$Q($tmp2121);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from Analyzer.frost:463:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:34
$fn2123 $tmp2122 = ($fn2123) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2121))->$class->vtable[0];
frost$core$String* $tmp2124 = $tmp2122(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2121)));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.stub:34:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp2124);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
frost$core$Frost$unref$frost$core$Object$Q($tmp2121);
frost$core$Int64 $tmp2125 = *(&local2);
int64_t $tmp2126 = $tmp2049.value;
int64_t $tmp2127 = $tmp2125.value;
int64_t $tmp2128 = $tmp2126 - $tmp2127;
frost$core$Int64 $tmp2129 = (frost$core$Int64) {$tmp2128};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2130 = $tmp2129.value;
frost$core$UInt64 $tmp2131 = (frost$core$UInt64) {((uint64_t) $tmp2130)};
if ($tmp2051) goto block48; else goto block49;
block48:;
uint64_t $tmp2132 = $tmp2131.value;
uint64_t $tmp2133 = $tmp2054.value;
bool $tmp2134 = $tmp2132 >= $tmp2133;
frost$core$Bit $tmp2135 = (frost$core$Bit) {$tmp2134};
bool $tmp2136 = $tmp2135.value;
if ($tmp2136) goto block46; else goto block31;
block49:;
uint64_t $tmp2137 = $tmp2131.value;
uint64_t $tmp2138 = $tmp2054.value;
bool $tmp2139 = $tmp2137 > $tmp2138;
frost$core$Bit $tmp2140 = (frost$core$Bit) {$tmp2139};
bool $tmp2141 = $tmp2140.value;
if ($tmp2141) goto block46; else goto block31;
block46:;
int64_t $tmp2142 = $tmp2125.value;
int64_t $tmp2143 = $tmp2052.value;
int64_t $tmp2144 = $tmp2142 + $tmp2143;
frost$core$Int64 $tmp2145 = (frost$core$Int64) {$tmp2144};
*(&local2) = $tmp2145;
goto block30;
block31:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2003);
org$frostlang$frostc$IR$Block* $tmp2146 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2146));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block21;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
return;

}
void org$frostlang$frostc$pass$Analyzer$analyze(org$frostlang$frostc$pass$Analyzer* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local2 = NULL;
org$frostlang$frostc$pass$Analyzer$State* local3 = NULL;
frost$core$Int64 local4;
org$frostlang$frostc$IR$Block* local5 = NULL;
frost$core$Int64 local6;
org$frostlang$frostc$IR$Block$ID local7;
org$frostlang$frostc$IR$Block* local8 = NULL;
org$frostlang$frostc$MethodDecl$Kind local9;
org$frostlang$frostc$MethodDecl$Kind local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$pass$Analyzer$BlockExit local13;
org$frostlang$frostc$pass$Analyzer$BlockExit local14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:469
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2147 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
// begin inline call to method org.frostlang.frostc.Type.Invalid():org.frostlang.frostc.Type from Analyzer.frost:469:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:555
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2148 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2149 = (frost$core$Int64) {6};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:555:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2150 = &(&local1)->$rawValue;
*$tmp2150 = $tmp2149;
org$frostlang$frostc$Type$Kind $tmp2151 = *(&local1);
*(&local0) = $tmp2151;
org$frostlang$frostc$Type$Kind $tmp2152 = *(&local0);
org$frostlang$frostc$Position $tmp2153 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2154 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2148, &$s2155, $tmp2152, $tmp2153, $tmp2154);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp2147, $tmp2148);
*(&local2) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2156 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
*(&local2) = $tmp2147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:470
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$State));
org$frostlang$frostc$pass$Analyzer$State* $tmp2157 = (org$frostlang$frostc$pass$Analyzer$State*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$State$class);
org$frostlang$frostc$pass$Analyzer$State$init($tmp2157);
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
org$frostlang$frostc$pass$Analyzer$State* $tmp2158 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
*(&local3) = $tmp2157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:471
frost$core$Int64 $tmp2159 = (frost$core$Int64) {0};
org$frostlang$frostc$IR** $tmp2160 = &param0->ir;
org$frostlang$frostc$IR* $tmp2161 = *$tmp2160;
frost$collections$Array** $tmp2162 = &$tmp2161->locals;
frost$collections$Array* $tmp2163 = *$tmp2162;
ITable* $tmp2164 = ((frost$collections$CollectionView*) $tmp2163)->$class->itable;
while ($tmp2164->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2164 = $tmp2164->next;
}
$fn2166 $tmp2165 = $tmp2164->methods[0];
frost$core$Int64 $tmp2167 = $tmp2165(((frost$collections$CollectionView*) $tmp2163));
frost$core$Bit $tmp2168 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2169 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2159, $tmp2167, $tmp2168);
frost$core$Int64 $tmp2170 = $tmp2169.min;
*(&local4) = $tmp2170;
frost$core$Int64 $tmp2171 = $tmp2169.max;
frost$core$Bit $tmp2172 = $tmp2169.inclusive;
bool $tmp2173 = $tmp2172.value;
frost$core$Int64 $tmp2174 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2175 = $tmp2174.value;
frost$core$UInt64 $tmp2176 = (frost$core$UInt64) {((uint64_t) $tmp2175)};
if ($tmp2173) goto block7; else goto block8;
block7:;
int64_t $tmp2177 = $tmp2170.value;
int64_t $tmp2178 = $tmp2171.value;
bool $tmp2179 = $tmp2177 <= $tmp2178;
frost$core$Bit $tmp2180 = (frost$core$Bit) {$tmp2179};
bool $tmp2181 = $tmp2180.value;
if ($tmp2181) goto block4; else goto block5;
block8:;
int64_t $tmp2182 = $tmp2170.value;
int64_t $tmp2183 = $tmp2171.value;
bool $tmp2184 = $tmp2182 < $tmp2183;
frost$core$Bit $tmp2185 = (frost$core$Bit) {$tmp2184};
bool $tmp2186 = $tmp2185.value;
if ($tmp2186) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:472
org$frostlang$frostc$pass$Analyzer$State* $tmp2187 = *(&local3);
frost$collections$Array** $tmp2188 = &$tmp2187->locals;
frost$collections$Array* $tmp2189 = *$tmp2188;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2190 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2189, ((frost$core$Object*) $tmp2190));
frost$core$Int64 $tmp2191 = *(&local4);
int64_t $tmp2192 = $tmp2171.value;
int64_t $tmp2193 = $tmp2191.value;
int64_t $tmp2194 = $tmp2192 - $tmp2193;
frost$core$Int64 $tmp2195 = (frost$core$Int64) {$tmp2194};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2196 = $tmp2195.value;
frost$core$UInt64 $tmp2197 = (frost$core$UInt64) {((uint64_t) $tmp2196)};
if ($tmp2173) goto block11; else goto block12;
block11:;
uint64_t $tmp2198 = $tmp2197.value;
uint64_t $tmp2199 = $tmp2176.value;
bool $tmp2200 = $tmp2198 >= $tmp2199;
frost$core$Bit $tmp2201 = (frost$core$Bit) {$tmp2200};
bool $tmp2202 = $tmp2201.value;
if ($tmp2202) goto block9; else goto block5;
block12:;
uint64_t $tmp2203 = $tmp2197.value;
uint64_t $tmp2204 = $tmp2176.value;
bool $tmp2205 = $tmp2203 > $tmp2204;
frost$core$Bit $tmp2206 = (frost$core$Bit) {$tmp2205};
bool $tmp2207 = $tmp2206.value;
if ($tmp2207) goto block9; else goto block5;
block9:;
int64_t $tmp2208 = $tmp2191.value;
int64_t $tmp2209 = $tmp2174.value;
int64_t $tmp2210 = $tmp2208 + $tmp2209;
frost$core$Int64 $tmp2211 = (frost$core$Int64) {$tmp2210};
*(&local4) = $tmp2211;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:474
frost$collections$HashMap** $tmp2212 = &param0->entryStates;
frost$collections$HashMap* $tmp2213 = *$tmp2212;
org$frostlang$frostc$IR** $tmp2214 = &param0->ir;
org$frostlang$frostc$IR* $tmp2215 = *$tmp2214;
frost$collections$Array** $tmp2216 = &$tmp2215->blocks;
frost$collections$Array* $tmp2217 = *$tmp2216;
frost$core$Int64 $tmp2218 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:474:30
frost$core$Int64 $tmp2219 = (frost$core$Int64) {0};
int64_t $tmp2220 = $tmp2218.value;
int64_t $tmp2221 = $tmp2219.value;
bool $tmp2222 = $tmp2220 >= $tmp2221;
frost$core$Bit $tmp2223 = (frost$core$Bit) {$tmp2222};
bool $tmp2224 = $tmp2223.value;
if ($tmp2224) goto block16; else goto block15;
block16:;
ITable* $tmp2225 = ((frost$collections$CollectionView*) $tmp2217)->$class->itable;
while ($tmp2225->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2225 = $tmp2225->next;
}
$fn2227 $tmp2226 = $tmp2225->methods[0];
frost$core$Int64 $tmp2228 = $tmp2226(((frost$collections$CollectionView*) $tmp2217));
int64_t $tmp2229 = $tmp2218.value;
int64_t $tmp2230 = $tmp2228.value;
bool $tmp2231 = $tmp2229 < $tmp2230;
frost$core$Bit $tmp2232 = (frost$core$Bit) {$tmp2231};
bool $tmp2233 = $tmp2232.value;
if ($tmp2233) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp2234 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2235, $tmp2234, &$s2236);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2237 = &$tmp2217->data;
frost$core$Object** $tmp2238 = *$tmp2237;
int64_t $tmp2239 = $tmp2218.value;
frost$core$Object* $tmp2240 = $tmp2238[$tmp2239];
frost$core$Frost$ref$frost$core$Object$Q($tmp2240);
org$frostlang$frostc$IR$Block$ID* $tmp2241 = &((org$frostlang$frostc$IR$Block*) $tmp2240)->id;
org$frostlang$frostc$IR$Block$ID $tmp2242 = *$tmp2241;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2243;
$tmp2243 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2243->value = $tmp2242;
org$frostlang$frostc$pass$Analyzer$State* $tmp2244 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2213, ((frost$collections$Key*) $tmp2243), ((frost$core$Object*) $tmp2244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2243)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2240);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:475
org$frostlang$frostc$IR** $tmp2245 = &param0->ir;
org$frostlang$frostc$IR* $tmp2246 = *$tmp2245;
frost$collections$Array** $tmp2247 = &$tmp2246->blocks;
frost$collections$Array* $tmp2248 = *$tmp2247;
ITable* $tmp2249 = ((frost$collections$Iterable*) $tmp2248)->$class->itable;
while ($tmp2249->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2249 = $tmp2249->next;
}
$fn2251 $tmp2250 = $tmp2249->methods[0];
frost$collections$Iterator* $tmp2252 = $tmp2250(((frost$collections$Iterable*) $tmp2248));
goto block17;
block17:;
ITable* $tmp2253 = $tmp2252->$class->itable;
while ($tmp2253->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2253 = $tmp2253->next;
}
$fn2255 $tmp2254 = $tmp2253->methods[0];
frost$core$Bit $tmp2256 = $tmp2254($tmp2252);
bool $tmp2257 = $tmp2256.value;
if ($tmp2257) goto block19; else goto block18;
block18:;
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2258 = $tmp2252->$class->itable;
while ($tmp2258->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2258 = $tmp2258->next;
}
$fn2260 $tmp2259 = $tmp2258->methods[1];
frost$core$Object* $tmp2261 = $tmp2259($tmp2252);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2261)));
org$frostlang$frostc$IR$Block* $tmp2262 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2262));
*(&local5) = ((org$frostlang$frostc$IR$Block*) $tmp2261);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:476
frost$collections$HashMap** $tmp2263 = &param0->blocks;
frost$collections$HashMap* $tmp2264 = *$tmp2263;
org$frostlang$frostc$IR$Block* $tmp2265 = *(&local5);
org$frostlang$frostc$IR$Block$ID* $tmp2266 = &$tmp2265->id;
org$frostlang$frostc$IR$Block$ID $tmp2267 = *$tmp2266;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2268;
$tmp2268 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2268->value = $tmp2267;
org$frostlang$frostc$IR$Block* $tmp2269 = *(&local5);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2264, ((frost$collections$Key*) $tmp2268), ((frost$core$Object*) $tmp2269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2268)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:477
frost$core$Int64 $tmp2270 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block* $tmp2271 = *(&local5);
frost$collections$Array** $tmp2272 = &$tmp2271->statements;
frost$collections$Array* $tmp2273 = *$tmp2272;
ITable* $tmp2274 = ((frost$collections$CollectionView*) $tmp2273)->$class->itable;
while ($tmp2274->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2274 = $tmp2274->next;
}
$fn2276 $tmp2275 = $tmp2274->methods[0];
frost$core$Int64 $tmp2277 = $tmp2275(((frost$collections$CollectionView*) $tmp2273));
frost$core$Bit $tmp2278 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2279 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2270, $tmp2277, $tmp2278);
frost$core$Int64 $tmp2280 = $tmp2279.min;
*(&local6) = $tmp2280;
frost$core$Int64 $tmp2281 = $tmp2279.max;
frost$core$Bit $tmp2282 = $tmp2279.inclusive;
bool $tmp2283 = $tmp2282.value;
frost$core$Int64 $tmp2284 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2285 = $tmp2284.value;
frost$core$UInt64 $tmp2286 = (frost$core$UInt64) {((uint64_t) $tmp2285)};
if ($tmp2283) goto block24; else goto block25;
block24:;
int64_t $tmp2287 = $tmp2280.value;
int64_t $tmp2288 = $tmp2281.value;
bool $tmp2289 = $tmp2287 <= $tmp2288;
frost$core$Bit $tmp2290 = (frost$core$Bit) {$tmp2289};
bool $tmp2291 = $tmp2290.value;
if ($tmp2291) goto block21; else goto block22;
block25:;
int64_t $tmp2292 = $tmp2280.value;
int64_t $tmp2293 = $tmp2281.value;
bool $tmp2294 = $tmp2292 < $tmp2293;
frost$core$Bit $tmp2295 = (frost$core$Bit) {$tmp2294};
bool $tmp2296 = $tmp2295.value;
if ($tmp2296) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:478
frost$collections$HashMap** $tmp2297 = &param0->statements;
frost$collections$HashMap* $tmp2298 = *$tmp2297;
org$frostlang$frostc$IR$Block* $tmp2299 = *(&local5);
frost$collections$Array** $tmp2300 = &$tmp2299->ids;
frost$collections$Array* $tmp2301 = *$tmp2300;
frost$core$Int64 $tmp2302 = *(&local6);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:478:33
frost$core$Int64 $tmp2303 = (frost$core$Int64) {0};
int64_t $tmp2304 = $tmp2302.value;
int64_t $tmp2305 = $tmp2303.value;
bool $tmp2306 = $tmp2304 >= $tmp2305;
frost$core$Bit $tmp2307 = (frost$core$Bit) {$tmp2306};
bool $tmp2308 = $tmp2307.value;
if ($tmp2308) goto block29; else goto block28;
block29:;
ITable* $tmp2309 = ((frost$collections$CollectionView*) $tmp2301)->$class->itable;
while ($tmp2309->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2309 = $tmp2309->next;
}
$fn2311 $tmp2310 = $tmp2309->methods[0];
frost$core$Int64 $tmp2312 = $tmp2310(((frost$collections$CollectionView*) $tmp2301));
int64_t $tmp2313 = $tmp2302.value;
int64_t $tmp2314 = $tmp2312.value;
bool $tmp2315 = $tmp2313 < $tmp2314;
frost$core$Bit $tmp2316 = (frost$core$Bit) {$tmp2315};
bool $tmp2317 = $tmp2316.value;
if ($tmp2317) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp2318 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2319, $tmp2318, &$s2320);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2321 = &$tmp2301->data;
frost$core$Object** $tmp2322 = *$tmp2321;
int64_t $tmp2323 = $tmp2302.value;
frost$core$Object* $tmp2324 = $tmp2322[$tmp2323];
frost$core$Frost$ref$frost$core$Object$Q($tmp2324);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2325;
$tmp2325 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2325->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2324)->value;
org$frostlang$frostc$IR$Block* $tmp2326 = *(&local5);
frost$collections$Array** $tmp2327 = &$tmp2326->statements;
frost$collections$Array* $tmp2328 = *$tmp2327;
frost$core$Int64 $tmp2329 = *(&local6);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:478:53
frost$core$Int64 $tmp2330 = (frost$core$Int64) {0};
int64_t $tmp2331 = $tmp2329.value;
int64_t $tmp2332 = $tmp2330.value;
bool $tmp2333 = $tmp2331 >= $tmp2332;
frost$core$Bit $tmp2334 = (frost$core$Bit) {$tmp2333};
bool $tmp2335 = $tmp2334.value;
if ($tmp2335) goto block33; else goto block32;
block33:;
ITable* $tmp2336 = ((frost$collections$CollectionView*) $tmp2328)->$class->itable;
while ($tmp2336->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2336 = $tmp2336->next;
}
$fn2338 $tmp2337 = $tmp2336->methods[0];
frost$core$Int64 $tmp2339 = $tmp2337(((frost$collections$CollectionView*) $tmp2328));
int64_t $tmp2340 = $tmp2329.value;
int64_t $tmp2341 = $tmp2339.value;
bool $tmp2342 = $tmp2340 < $tmp2341;
frost$core$Bit $tmp2343 = (frost$core$Bit) {$tmp2342};
bool $tmp2344 = $tmp2343.value;
if ($tmp2344) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp2345 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2346, $tmp2345, &$s2347);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2348 = &$tmp2328->data;
frost$core$Object** $tmp2349 = *$tmp2348;
int64_t $tmp2350 = $tmp2329.value;
frost$core$Object* $tmp2351 = $tmp2349[$tmp2350];
frost$core$Frost$ref$frost$core$Object$Q($tmp2351);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2298, ((frost$collections$Key*) $tmp2325), ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2351)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2351);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2325)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2324);
frost$core$Int64 $tmp2352 = *(&local6);
int64_t $tmp2353 = $tmp2281.value;
int64_t $tmp2354 = $tmp2352.value;
int64_t $tmp2355 = $tmp2353 - $tmp2354;
frost$core$Int64 $tmp2356 = (frost$core$Int64) {$tmp2355};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2357 = $tmp2356.value;
frost$core$UInt64 $tmp2358 = (frost$core$UInt64) {((uint64_t) $tmp2357)};
if ($tmp2283) goto block36; else goto block37;
block36:;
uint64_t $tmp2359 = $tmp2358.value;
uint64_t $tmp2360 = $tmp2286.value;
bool $tmp2361 = $tmp2359 >= $tmp2360;
frost$core$Bit $tmp2362 = (frost$core$Bit) {$tmp2361};
bool $tmp2363 = $tmp2362.value;
if ($tmp2363) goto block34; else goto block22;
block37:;
uint64_t $tmp2364 = $tmp2358.value;
uint64_t $tmp2365 = $tmp2286.value;
bool $tmp2366 = $tmp2364 > $tmp2365;
frost$core$Bit $tmp2367 = (frost$core$Bit) {$tmp2366};
bool $tmp2368 = $tmp2367.value;
if ($tmp2368) goto block34; else goto block22;
block34:;
int64_t $tmp2369 = $tmp2352.value;
int64_t $tmp2370 = $tmp2284.value;
int64_t $tmp2371 = $tmp2369 + $tmp2370;
frost$core$Int64 $tmp2372 = (frost$core$Int64) {$tmp2371};
*(&local6) = $tmp2372;
goto block21;
block22:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2261);
org$frostlang$frostc$IR$Block* $tmp2373 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2373));
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:481
frost$collections$HashSet** $tmp2374 = &param0->worklist;
frost$collections$HashSet* $tmp2375 = *$tmp2374;
org$frostlang$frostc$IR** $tmp2376 = &param0->ir;
org$frostlang$frostc$IR* $tmp2377 = *$tmp2376;
frost$collections$Array** $tmp2378 = &$tmp2377->blocks;
frost$collections$Array* $tmp2379 = *$tmp2378;
frost$core$Int64 $tmp2380 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:481:31
frost$core$Int64 $tmp2381 = (frost$core$Int64) {0};
int64_t $tmp2382 = $tmp2380.value;
int64_t $tmp2383 = $tmp2381.value;
bool $tmp2384 = $tmp2382 >= $tmp2383;
frost$core$Bit $tmp2385 = (frost$core$Bit) {$tmp2384};
bool $tmp2386 = $tmp2385.value;
if ($tmp2386) goto block41; else goto block40;
block41:;
ITable* $tmp2387 = ((frost$collections$CollectionView*) $tmp2379)->$class->itable;
while ($tmp2387->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2387 = $tmp2387->next;
}
$fn2389 $tmp2388 = $tmp2387->methods[0];
frost$core$Int64 $tmp2390 = $tmp2388(((frost$collections$CollectionView*) $tmp2379));
int64_t $tmp2391 = $tmp2380.value;
int64_t $tmp2392 = $tmp2390.value;
bool $tmp2393 = $tmp2391 < $tmp2392;
frost$core$Bit $tmp2394 = (frost$core$Bit) {$tmp2393};
bool $tmp2395 = $tmp2394.value;
if ($tmp2395) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp2396 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2397, $tmp2396, &$s2398);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2399 = &$tmp2379->data;
frost$core$Object** $tmp2400 = *$tmp2399;
int64_t $tmp2401 = $tmp2380.value;
frost$core$Object* $tmp2402 = $tmp2400[$tmp2401];
frost$core$Frost$ref$frost$core$Object$Q($tmp2402);
org$frostlang$frostc$IR$Block$ID* $tmp2403 = &((org$frostlang$frostc$IR$Block*) $tmp2402)->id;
org$frostlang$frostc$IR$Block$ID $tmp2404 = *$tmp2403;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2405;
$tmp2405 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2405->value = $tmp2404;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:481:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:8
frost$collections$HashMap** $tmp2406 = &$tmp2375->contents;
frost$collections$HashMap* $tmp2407 = *$tmp2406;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2407, ((frost$collections$Key*) $tmp2405), ((frost$core$Object*) ((frost$collections$Key*) $tmp2405)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2405)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2402);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:482
goto block43;
block43:;
frost$collections$HashSet** $tmp2408 = &param0->worklist;
frost$collections$HashSet* $tmp2409 = *$tmp2408;
ITable* $tmp2410 = ((frost$collections$CollectionView*) $tmp2409)->$class->itable;
while ($tmp2410->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2410 = $tmp2410->next;
}
$fn2412 $tmp2411 = $tmp2410->methods[0];
frost$core$Int64 $tmp2413 = $tmp2411(((frost$collections$CollectionView*) $tmp2409));
frost$core$Int64 $tmp2414 = (frost$core$Int64) {0};
int64_t $tmp2415 = $tmp2413.value;
int64_t $tmp2416 = $tmp2414.value;
bool $tmp2417 = $tmp2415 > $tmp2416;
frost$core$Bit $tmp2418 = (frost$core$Bit) {$tmp2417};
bool $tmp2419 = $tmp2418.value;
if ($tmp2419) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:483
frost$collections$HashSet** $tmp2420 = &param0->worklist;
frost$collections$HashSet* $tmp2421 = *$tmp2420;
ITable* $tmp2422 = ((frost$collections$Iterable*) $tmp2421)->$class->itable;
while ($tmp2422->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2422 = $tmp2422->next;
}
$fn2424 $tmp2423 = $tmp2422->methods[0];
frost$collections$Iterator* $tmp2425 = $tmp2423(((frost$collections$Iterable*) $tmp2421));
ITable* $tmp2426 = $tmp2425->$class->itable;
while ($tmp2426->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2426 = $tmp2426->next;
}
$fn2428 $tmp2427 = $tmp2426->methods[1];
frost$core$Object* $tmp2429 = $tmp2427($tmp2425);
*(&local7) = ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp2429)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2429);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:484
frost$collections$HashSet** $tmp2430 = &param0->worklist;
frost$collections$HashSet* $tmp2431 = *$tmp2430;
org$frostlang$frostc$IR$Block$ID $tmp2432 = *(&local7);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2433;
$tmp2433 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2433->value = $tmp2432;
// begin inline call to method frost.collections.HashSet.remove(value:frost.collections.HashSet.T) from Analyzer.frost:484:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:17
frost$collections$HashMap** $tmp2434 = &$tmp2431->contents;
frost$collections$HashMap* $tmp2435 = *$tmp2434;
frost$collections$HashMap$remove$frost$collections$HashMap$K($tmp2435, ((frost$collections$Key*) $tmp2433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2433)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:485
org$frostlang$frostc$IR$Block$ID $tmp2436 = *(&local7);
$fn2438 $tmp2437 = ($fn2438) param0->$class->vtable[8];
$tmp2437(param0, $tmp2436);
goto block43;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:487
org$frostlang$frostc$IR** $tmp2439 = &param0->ir;
org$frostlang$frostc$IR* $tmp2440 = *$tmp2439;
frost$collections$Array** $tmp2441 = &$tmp2440->blocks;
frost$collections$Array* $tmp2442 = *$tmp2441;
ITable* $tmp2443 = ((frost$collections$Iterable*) $tmp2442)->$class->itable;
while ($tmp2443->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2443 = $tmp2443->next;
}
$fn2445 $tmp2444 = $tmp2443->methods[0];
frost$collections$Iterator* $tmp2446 = $tmp2444(((frost$collections$Iterable*) $tmp2442));
goto block47;
block47:;
ITable* $tmp2447 = $tmp2446->$class->itable;
while ($tmp2447->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2447 = $tmp2447->next;
}
$fn2449 $tmp2448 = $tmp2447->methods[0];
frost$core$Bit $tmp2450 = $tmp2448($tmp2446);
bool $tmp2451 = $tmp2450.value;
if ($tmp2451) goto block49; else goto block48;
block48:;
*(&local8) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2452 = $tmp2446->$class->itable;
while ($tmp2452->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2452 = $tmp2452->next;
}
$fn2454 $tmp2453 = $tmp2452->methods[1];
frost$core$Object* $tmp2455 = $tmp2453($tmp2446);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2455)));
org$frostlang$frostc$IR$Block* $tmp2456 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2456));
*(&local8) = ((org$frostlang$frostc$IR$Block*) $tmp2455);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:488
frost$collections$HashMap** $tmp2457 = &param0->entryStates;
frost$collections$HashMap* $tmp2458 = *$tmp2457;
org$frostlang$frostc$IR$Block* $tmp2459 = *(&local8);
org$frostlang$frostc$IR$Block$ID* $tmp2460 = &$tmp2459->id;
org$frostlang$frostc$IR$Block$ID $tmp2461 = *$tmp2460;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2462;
$tmp2462 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2462->value = $tmp2461;
frost$core$Object* $tmp2463 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2458, ((frost$collections$Key*) $tmp2462));
frost$core$Bit $tmp2464 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$pass$Analyzer$State*) $tmp2463) != NULL);
bool $tmp2465 = $tmp2464.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2463);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2462)));
if ($tmp2465) goto block50; else goto block52;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:489
org$frostlang$frostc$IR$Block* $tmp2466 = *(&local8);
frost$collections$Array** $tmp2467 = &$tmp2466->statements;
frost$collections$Array* $tmp2468 = *$tmp2467;
frost$core$Int64 $tmp2469 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:489:35
frost$core$Int64 $tmp2470 = (frost$core$Int64) {0};
int64_t $tmp2471 = $tmp2469.value;
int64_t $tmp2472 = $tmp2470.value;
bool $tmp2473 = $tmp2471 >= $tmp2472;
frost$core$Bit $tmp2474 = (frost$core$Bit) {$tmp2473};
bool $tmp2475 = $tmp2474.value;
if ($tmp2475) goto block56; else goto block55;
block56:;
ITable* $tmp2476 = ((frost$collections$CollectionView*) $tmp2468)->$class->itable;
while ($tmp2476->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2476 = $tmp2476->next;
}
$fn2478 $tmp2477 = $tmp2476->methods[0];
frost$core$Int64 $tmp2479 = $tmp2477(((frost$collections$CollectionView*) $tmp2468));
int64_t $tmp2480 = $tmp2469.value;
int64_t $tmp2481 = $tmp2479.value;
bool $tmp2482 = $tmp2480 < $tmp2481;
frost$core$Bit $tmp2483 = (frost$core$Bit) {$tmp2482};
bool $tmp2484 = $tmp2483.value;
if ($tmp2484) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp2485 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2486, $tmp2485, &$s2487);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2488 = &$tmp2468->data;
frost$core$Object** $tmp2489 = *$tmp2488;
int64_t $tmp2490 = $tmp2469.value;
frost$core$Object* $tmp2491 = $tmp2489[$tmp2490];
frost$core$Frost$ref$frost$core$Object$Q($tmp2491);
frost$core$Int64* $tmp2492 = &((org$frostlang$frostc$IR$Statement*) $tmp2491)->$rawValue;
frost$core$Int64 $tmp2493 = *$tmp2492;
frost$core$Int64 $tmp2494 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:490:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2495 = $tmp2493.value;
int64_t $tmp2496 = $tmp2494.value;
bool $tmp2497 = $tmp2495 == $tmp2496;
frost$core$Bit $tmp2498 = frost$core$Bit$init$builtin_bit($tmp2497);
bool $tmp2499 = $tmp2498.value;
if ($tmp2499) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:491
org$frostlang$frostc$MethodDecl** $tmp2500 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2501 = *$tmp2500;
org$frostlang$frostc$MethodDecl$Kind* $tmp2502 = &$tmp2501->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2503 = *$tmp2502;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2504;
$tmp2504 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2504->value = $tmp2503;
frost$core$Int64 $tmp2505 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Analyzer.frost:491:59
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp2506 = &(&local10)->$rawValue;
*$tmp2506 = $tmp2505;
org$frostlang$frostc$MethodDecl$Kind $tmp2507 = *(&local10);
*(&local9) = $tmp2507;
org$frostlang$frostc$MethodDecl$Kind $tmp2508 = *(&local9);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2509;
$tmp2509 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2509->value = $tmp2508;
ITable* $tmp2510 = ((frost$core$Equatable*) $tmp2504)->$class->itable;
while ($tmp2510->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2510 = $tmp2510->next;
}
$fn2512 $tmp2511 = $tmp2510->methods[1];
frost$core$Bit $tmp2513 = $tmp2511(((frost$core$Equatable*) $tmp2504), ((frost$core$Equatable*) $tmp2509));
bool $tmp2514 = $tmp2513.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2509)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2504)));
if ($tmp2514) goto block63; else goto block62;
block63:;
org$frostlang$frostc$MethodDecl** $tmp2515 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2516 = *$tmp2515;
org$frostlang$frostc$Type** $tmp2517 = &$tmp2516->returnType;
org$frostlang$frostc$Type* $tmp2518 = *$tmp2517;
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Analyzer.frost:491:92
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2519 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2520 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2521 = &(&local12)->$rawValue;
*$tmp2521 = $tmp2520;
org$frostlang$frostc$Type$Kind $tmp2522 = *(&local12);
*(&local11) = $tmp2522;
org$frostlang$frostc$Type$Kind $tmp2523 = *(&local11);
org$frostlang$frostc$Position $tmp2524 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2525 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2519, &$s2526, $tmp2523, $tmp2524, $tmp2525);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
ITable* $tmp2527 = ((frost$core$Equatable*) $tmp2518)->$class->itable;
while ($tmp2527->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2527 = $tmp2527->next;
}
$fn2529 $tmp2528 = $tmp2527->methods[1];
frost$core$Bit $tmp2530 = $tmp2528(((frost$core$Equatable*) $tmp2518), ((frost$core$Equatable*) $tmp2519));
bool $tmp2531 = $tmp2530.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
if ($tmp2531) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:492
org$frostlang$frostc$Compiler** $tmp2532 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2533 = *$tmp2532;
org$frostlang$frostc$MethodDecl** $tmp2534 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2535 = *$tmp2534;
org$frostlang$frostc$Position* $tmp2536 = &((org$frostlang$frostc$Symbol*) $tmp2535)->position;
org$frostlang$frostc$Position $tmp2537 = *$tmp2536;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp2533, $tmp2537, &$s2538);
goto block62;
block62:;
goto block57;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:496
org$frostlang$frostc$IR$Block* $tmp2539 = *(&local8);
org$frostlang$frostc$IR$Block$ID* $tmp2540 = &$tmp2539->id;
org$frostlang$frostc$IR$Block$ID $tmp2541 = *$tmp2540;
frost$core$Int64 $tmp2542 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int64):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:496:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:84
org$frostlang$frostc$IR$Block$ID* $tmp2543 = &(&local14)->id;
*$tmp2543 = $tmp2541;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:85
frost$core$Int64* $tmp2544 = &(&local14)->exit;
*$tmp2544 = $tmp2542;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2545 = *(&local14);
*(&local13) = $tmp2545;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2546 = *(&local13);
frost$core$Bit $tmp2547 = frost$core$Bit$init$builtin_bit(true);
$fn2549 $tmp2548 = ($fn2549) param0->$class->vtable[7];
org$frostlang$frostc$pass$Analyzer$State* $tmp2550 = $tmp2548(param0, $tmp2546, $tmp2547);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2550));
goto block57;
block57:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2491);
goto block51;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:500
org$frostlang$frostc$IR$Block* $tmp2551 = *(&local8);
frost$core$Bit* $tmp2552 = &$tmp2551->containsExplicitCode;
frost$core$Bit $tmp2553 = *$tmp2552;
bool $tmp2554 = $tmp2553.value;
if ($tmp2554) goto block70; else goto block69;
block70:;
org$frostlang$frostc$IR$Block* $tmp2555 = *(&local8);
frost$core$Bit* $tmp2556 = &$tmp2555->forceReachable;
frost$core$Bit $tmp2557 = *$tmp2556;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:500:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp2558 = $tmp2557.value;
bool $tmp2559 = !$tmp2558;
frost$core$Bit $tmp2560 = (frost$core$Bit) {$tmp2559};
bool $tmp2561 = $tmp2560.value;
if ($tmp2561) goto block68; else goto block69;
block68:;
goto block69;
block69:;
goto block51;
block51:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2455);
org$frostlang$frostc$IR$Block* $tmp2562 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2562));
*(&local8) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block47;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
org$frostlang$frostc$pass$Analyzer$State* $tmp2563 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2563));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2564 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
*(&local2) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$makeUnreachable$org$frostlang$frostc$IR$Block(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Block* param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:507
frost$collections$Array** $tmp2565 = &param1->statements;
frost$collections$Array* $tmp2566 = *$tmp2565;
frost$core$Int64 $tmp2567 = (frost$core$Int64) {0};
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2568 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2569 = (frost$core$Int64) {28};
frost$collections$Array** $tmp2570 = &param1->statements;
frost$collections$Array* $tmp2571 = *$tmp2570;
frost$core$Int64 $tmp2572 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:507:65
frost$core$Int64 $tmp2573 = (frost$core$Int64) {0};
int64_t $tmp2574 = $tmp2572.value;
int64_t $tmp2575 = $tmp2573.value;
bool $tmp2576 = $tmp2574 >= $tmp2575;
frost$core$Bit $tmp2577 = (frost$core$Bit) {$tmp2576};
bool $tmp2578 = $tmp2577.value;
if ($tmp2578) goto block4; else goto block3;
block4:;
ITable* $tmp2579 = ((frost$collections$CollectionView*) $tmp2571)->$class->itable;
while ($tmp2579->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2579 = $tmp2579->next;
}
$fn2581 $tmp2580 = $tmp2579->methods[0];
frost$core$Int64 $tmp2582 = $tmp2580(((frost$collections$CollectionView*) $tmp2571));
int64_t $tmp2583 = $tmp2572.value;
int64_t $tmp2584 = $tmp2582.value;
bool $tmp2585 = $tmp2583 < $tmp2584;
frost$core$Bit $tmp2586 = (frost$core$Bit) {$tmp2585};
bool $tmp2587 = $tmp2586.value;
if ($tmp2587) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp2588 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2589, $tmp2588, &$s2590);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2591 = &$tmp2571->data;
frost$core$Object** $tmp2592 = *$tmp2591;
int64_t $tmp2593 = $tmp2572.value;
frost$core$Object* $tmp2594 = $tmp2592[$tmp2593];
frost$core$Frost$ref$frost$core$Object$Q($tmp2594);
$fn2596 $tmp2595 = ($fn2596) ((org$frostlang$frostc$IR$Statement*) $tmp2594)->$class->vtable[2];
org$frostlang$frostc$Position $tmp2597 = $tmp2595(((org$frostlang$frostc$IR$Statement*) $tmp2594));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position($tmp2568, $tmp2569, $tmp2597);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int64, value:frost.collections.Array.T) from Analyzer.frost:507:21
frost$core$Int64 $tmp2598 = (frost$core$Int64) {0};
int64_t $tmp2599 = $tmp2567.value;
int64_t $tmp2600 = $tmp2598.value;
bool $tmp2601 = $tmp2599 >= $tmp2600;
frost$core$Bit $tmp2602 = (frost$core$Bit) {$tmp2601};
bool $tmp2603 = $tmp2602.value;
if ($tmp2603) goto block8; else goto block7;
block8:;
ITable* $tmp2604 = ((frost$collections$CollectionView*) $tmp2566)->$class->itable;
while ($tmp2604->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2604 = $tmp2604->next;
}
$fn2606 $tmp2605 = $tmp2604->methods[0];
frost$core$Int64 $tmp2607 = $tmp2605(((frost$collections$CollectionView*) $tmp2566));
int64_t $tmp2608 = $tmp2567.value;
int64_t $tmp2609 = $tmp2607.value;
bool $tmp2610 = $tmp2608 < $tmp2609;
frost$core$Bit $tmp2611 = (frost$core$Bit) {$tmp2610};
bool $tmp2612 = $tmp2611.value;
if ($tmp2612) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2613 = (frost$core$Int64) {27};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2614, $tmp2613, &$s2615);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:27
frost$core$Object*** $tmp2616 = &$tmp2566->data;
frost$core$Object** $tmp2617 = *$tmp2616;
int64_t $tmp2618 = $tmp2567.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
frost$core$Object* $tmp2619 = $tmp2617[$tmp2618];
frost$core$Frost$unref$frost$core$Object$Q($tmp2619);
$tmp2617[$tmp2618] = ((frost$core$Object*) $tmp2568);
frost$core$Frost$unref$frost$core$Object$Q($tmp2594);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:508
frost$collections$Array** $tmp2620 = &param1->statements;
frost$collections$Array* $tmp2621 = *$tmp2620;
ITable* $tmp2622 = ((frost$collections$CollectionView*) $tmp2621)->$class->itable;
while ($tmp2622->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2622 = $tmp2622->next;
}
$fn2624 $tmp2623 = $tmp2622->methods[0];
frost$core$Int64 $tmp2625 = $tmp2623(((frost$collections$CollectionView*) $tmp2621));
frost$core$Int64 $tmp2626 = (frost$core$Int64) {1};
int64_t $tmp2627 = $tmp2625.value;
int64_t $tmp2628 = $tmp2626.value;
int64_t $tmp2629 = $tmp2627 - $tmp2628;
frost$core$Int64 $tmp2630 = (frost$core$Int64) {$tmp2629};
frost$core$Int64 $tmp2631 = (frost$core$Int64) {1};
frost$core$Int64 $tmp2632 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp2633 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp2634 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2630, $tmp2631, $tmp2632, $tmp2633);
frost$core$Int64 $tmp2635 = $tmp2634.start;
*(&local0) = $tmp2635;
frost$core$Int64 $tmp2636 = $tmp2634.end;
frost$core$Int64 $tmp2637 = $tmp2634.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2638 = $tmp2637.value;
frost$core$UInt64 $tmp2639 = (frost$core$UInt64) {((uint64_t) $tmp2638)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Analyzer.frost:508:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:49
int64_t $tmp2640 = $tmp2637.value;
int64_t $tmp2641 = -$tmp2640;
frost$core$Int64 $tmp2642 = (frost$core$Int64) {$tmp2641};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2643 = $tmp2642.value;
frost$core$UInt64 $tmp2644 = (frost$core$UInt64) {((uint64_t) $tmp2643)};
frost$core$Bit $tmp2645 = $tmp2634.inclusive;
bool $tmp2646 = $tmp2645.value;
frost$core$Int64 $tmp2647 = (frost$core$Int64) {0};
int64_t $tmp2648 = $tmp2637.value;
int64_t $tmp2649 = $tmp2647.value;
bool $tmp2650 = $tmp2648 >= $tmp2649;
frost$core$Bit $tmp2651 = (frost$core$Bit) {$tmp2650};
bool $tmp2652 = $tmp2651.value;
if ($tmp2652) goto block15; else goto block16;
block15:;
if ($tmp2646) goto block17; else goto block18;
block17:;
int64_t $tmp2653 = $tmp2635.value;
int64_t $tmp2654 = $tmp2636.value;
bool $tmp2655 = $tmp2653 <= $tmp2654;
frost$core$Bit $tmp2656 = (frost$core$Bit) {$tmp2655};
bool $tmp2657 = $tmp2656.value;
if ($tmp2657) goto block12; else goto block13;
block18:;
int64_t $tmp2658 = $tmp2635.value;
int64_t $tmp2659 = $tmp2636.value;
bool $tmp2660 = $tmp2658 < $tmp2659;
frost$core$Bit $tmp2661 = (frost$core$Bit) {$tmp2660};
bool $tmp2662 = $tmp2661.value;
if ($tmp2662) goto block12; else goto block13;
block16:;
if ($tmp2646) goto block19; else goto block20;
block19:;
int64_t $tmp2663 = $tmp2635.value;
int64_t $tmp2664 = $tmp2636.value;
bool $tmp2665 = $tmp2663 >= $tmp2664;
frost$core$Bit $tmp2666 = (frost$core$Bit) {$tmp2665};
bool $tmp2667 = $tmp2666.value;
if ($tmp2667) goto block12; else goto block13;
block20:;
int64_t $tmp2668 = $tmp2635.value;
int64_t $tmp2669 = $tmp2636.value;
bool $tmp2670 = $tmp2668 > $tmp2669;
frost$core$Bit $tmp2671 = (frost$core$Bit) {$tmp2670};
bool $tmp2672 = $tmp2671.value;
if ($tmp2672) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:509
frost$collections$Array** $tmp2673 = &param1->statements;
frost$collections$Array* $tmp2674 = *$tmp2673;
frost$core$Int64 $tmp2675 = *(&local0);
frost$core$Object* $tmp2676 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp2674, $tmp2675);
frost$core$Frost$unref$frost$core$Object$Q($tmp2676);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:510
frost$collections$Array** $tmp2677 = &param1->ids;
frost$collections$Array* $tmp2678 = *$tmp2677;
frost$core$Int64 $tmp2679 = *(&local0);
frost$core$Object* $tmp2680 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp2678, $tmp2679);
frost$core$Frost$unref$frost$core$Object$Q($tmp2680);
frost$core$Int64 $tmp2681 = *(&local0);
if ($tmp2652) goto block22; else goto block23;
block22:;
int64_t $tmp2682 = $tmp2636.value;
int64_t $tmp2683 = $tmp2681.value;
int64_t $tmp2684 = $tmp2682 - $tmp2683;
frost$core$Int64 $tmp2685 = (frost$core$Int64) {$tmp2684};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2686 = $tmp2685.value;
frost$core$UInt64 $tmp2687 = (frost$core$UInt64) {((uint64_t) $tmp2686)};
if ($tmp2646) goto block25; else goto block26;
block25:;
uint64_t $tmp2688 = $tmp2687.value;
uint64_t $tmp2689 = $tmp2639.value;
bool $tmp2690 = $tmp2688 >= $tmp2689;
frost$core$Bit $tmp2691 = (frost$core$Bit) {$tmp2690};
bool $tmp2692 = $tmp2691.value;
if ($tmp2692) goto block21; else goto block13;
block26:;
uint64_t $tmp2693 = $tmp2687.value;
uint64_t $tmp2694 = $tmp2639.value;
bool $tmp2695 = $tmp2693 > $tmp2694;
frost$core$Bit $tmp2696 = (frost$core$Bit) {$tmp2695};
bool $tmp2697 = $tmp2696.value;
if ($tmp2697) goto block21; else goto block13;
block23:;
int64_t $tmp2698 = $tmp2681.value;
int64_t $tmp2699 = $tmp2636.value;
int64_t $tmp2700 = $tmp2698 - $tmp2699;
frost$core$Int64 $tmp2701 = (frost$core$Int64) {$tmp2700};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2702 = $tmp2701.value;
frost$core$UInt64 $tmp2703 = (frost$core$UInt64) {((uint64_t) $tmp2702)};
if ($tmp2646) goto block28; else goto block29;
block28:;
uint64_t $tmp2704 = $tmp2703.value;
uint64_t $tmp2705 = $tmp2644.value;
bool $tmp2706 = $tmp2704 >= $tmp2705;
frost$core$Bit $tmp2707 = (frost$core$Bit) {$tmp2706};
bool $tmp2708 = $tmp2707.value;
if ($tmp2708) goto block21; else goto block13;
block29:;
uint64_t $tmp2709 = $tmp2703.value;
uint64_t $tmp2710 = $tmp2644.value;
bool $tmp2711 = $tmp2709 > $tmp2710;
frost$core$Bit $tmp2712 = (frost$core$Bit) {$tmp2711};
bool $tmp2713 = $tmp2712.value;
if ($tmp2713) goto block21; else goto block13;
block21:;
int64_t $tmp2714 = $tmp2681.value;
int64_t $tmp2715 = $tmp2637.value;
int64_t $tmp2716 = $tmp2714 + $tmp2715;
frost$core$Int64 $tmp2717 = (frost$core$Int64) {$tmp2716};
*(&local0) = $tmp2717;
goto block12;
block13:;
return;

}
void org$frostlang$frostc$pass$Analyzer$removeBlock$frost$core$Int64(org$frostlang$frostc$pass$Analyzer* param0, frost$core$Int64 param1) {

org$frostlang$frostc$IR$Block$ID local0;
org$frostlang$frostc$IR$Block* local1 = NULL;
frost$core$Int64 local2;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$Position local4;
org$frostlang$frostc$IR$Block$ID local5;
org$frostlang$frostc$IR$Block$ID local6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:515
org$frostlang$frostc$IR** $tmp2718 = &param0->ir;
org$frostlang$frostc$IR* $tmp2719 = *$tmp2718;
frost$collections$Array** $tmp2720 = &$tmp2719->blocks;
frost$collections$Array* $tmp2721 = *$tmp2720;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:515:33
frost$core$Int64 $tmp2722 = (frost$core$Int64) {0};
int64_t $tmp2723 = param1.value;
int64_t $tmp2724 = $tmp2722.value;
bool $tmp2725 = $tmp2723 >= $tmp2724;
frost$core$Bit $tmp2726 = (frost$core$Bit) {$tmp2725};
bool $tmp2727 = $tmp2726.value;
if ($tmp2727) goto block4; else goto block3;
block4:;
ITable* $tmp2728 = ((frost$collections$CollectionView*) $tmp2721)->$class->itable;
while ($tmp2728->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2728 = $tmp2728->next;
}
$fn2730 $tmp2729 = $tmp2728->methods[0];
frost$core$Int64 $tmp2731 = $tmp2729(((frost$collections$CollectionView*) $tmp2721));
int64_t $tmp2732 = param1.value;
int64_t $tmp2733 = $tmp2731.value;
bool $tmp2734 = $tmp2732 < $tmp2733;
frost$core$Bit $tmp2735 = (frost$core$Bit) {$tmp2734};
bool $tmp2736 = $tmp2735.value;
if ($tmp2736) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp2737 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2738, $tmp2737, &$s2739);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2740 = &$tmp2721->data;
frost$core$Object** $tmp2741 = *$tmp2740;
int64_t $tmp2742 = param1.value;
frost$core$Object* $tmp2743 = $tmp2741[$tmp2742];
frost$core$Frost$ref$frost$core$Object$Q($tmp2743);
org$frostlang$frostc$IR$Block$ID* $tmp2744 = &((org$frostlang$frostc$IR$Block*) $tmp2743)->id;
org$frostlang$frostc$IR$Block$ID $tmp2745 = *$tmp2744;
*(&local0) = $tmp2745;
frost$core$Frost$unref$frost$core$Object$Q($tmp2743);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:516
org$frostlang$frostc$IR** $tmp2746 = &param0->ir;
org$frostlang$frostc$IR* $tmp2747 = *$tmp2746;
frost$collections$Array** $tmp2748 = &$tmp2747->blocks;
frost$collections$Array* $tmp2749 = *$tmp2748;
frost$core$Object* $tmp2750 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp2749, param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp2750);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:517
org$frostlang$frostc$IR** $tmp2751 = &param0->ir;
org$frostlang$frostc$IR* $tmp2752 = *$tmp2751;
frost$collections$Array** $tmp2753 = &$tmp2752->blocks;
frost$collections$Array* $tmp2754 = *$tmp2753;
ITable* $tmp2755 = ((frost$collections$Iterable*) $tmp2754)->$class->itable;
while ($tmp2755->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2755 = $tmp2755->next;
}
$fn2757 $tmp2756 = $tmp2755->methods[0];
frost$collections$Iterator* $tmp2758 = $tmp2756(((frost$collections$Iterable*) $tmp2754));
goto block5;
block5:;
ITable* $tmp2759 = $tmp2758->$class->itable;
while ($tmp2759->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2759 = $tmp2759->next;
}
$fn2761 $tmp2760 = $tmp2759->methods[0];
frost$core$Bit $tmp2762 = $tmp2760($tmp2758);
bool $tmp2763 = $tmp2762.value;
if ($tmp2763) goto block7; else goto block6;
block6:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2764 = $tmp2758->$class->itable;
while ($tmp2764->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2764 = $tmp2764->next;
}
$fn2766 $tmp2765 = $tmp2764->methods[1];
frost$core$Object* $tmp2767 = $tmp2765($tmp2758);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2767)));
org$frostlang$frostc$IR$Block* $tmp2768 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2768));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp2767);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:518
org$frostlang$frostc$IR$Block* $tmp2769 = *(&local1);
frost$collections$Array** $tmp2770 = &$tmp2769->statements;
frost$collections$Array* $tmp2771 = *$tmp2770;
ITable* $tmp2772 = ((frost$collections$CollectionView*) $tmp2771)->$class->itable;
while ($tmp2772->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2772 = $tmp2772->next;
}
$fn2774 $tmp2773 = $tmp2772->methods[0];
frost$core$Int64 $tmp2775 = $tmp2773(((frost$collections$CollectionView*) $tmp2771));
frost$core$Int64 $tmp2776 = (frost$core$Int64) {1};
int64_t $tmp2777 = $tmp2775.value;
int64_t $tmp2778 = $tmp2776.value;
int64_t $tmp2779 = $tmp2777 - $tmp2778;
frost$core$Int64 $tmp2780 = (frost$core$Int64) {$tmp2779};
*(&local2) = $tmp2780;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:519
org$frostlang$frostc$IR$Block* $tmp2781 = *(&local1);
frost$collections$Array** $tmp2782 = &$tmp2781->statements;
frost$collections$Array* $tmp2783 = *$tmp2782;
frost$core$Int64 $tmp2784 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:519:31
frost$core$Int64 $tmp2785 = (frost$core$Int64) {0};
int64_t $tmp2786 = $tmp2784.value;
int64_t $tmp2787 = $tmp2785.value;
bool $tmp2788 = $tmp2786 >= $tmp2787;
frost$core$Bit $tmp2789 = (frost$core$Bit) {$tmp2788};
bool $tmp2790 = $tmp2789.value;
if ($tmp2790) goto block11; else goto block10;
block11:;
ITable* $tmp2791 = ((frost$collections$CollectionView*) $tmp2783)->$class->itable;
while ($tmp2791->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2791 = $tmp2791->next;
}
$fn2793 $tmp2792 = $tmp2791->methods[0];
frost$core$Int64 $tmp2794 = $tmp2792(((frost$collections$CollectionView*) $tmp2783));
int64_t $tmp2795 = $tmp2784.value;
int64_t $tmp2796 = $tmp2794.value;
bool $tmp2797 = $tmp2795 < $tmp2796;
frost$core$Bit $tmp2798 = (frost$core$Bit) {$tmp2797};
bool $tmp2799 = $tmp2798.value;
if ($tmp2799) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp2800 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2801, $tmp2800, &$s2802);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2803 = &$tmp2783->data;
frost$core$Object** $tmp2804 = *$tmp2803;
int64_t $tmp2805 = $tmp2784.value;
frost$core$Object* $tmp2806 = $tmp2804[$tmp2805];
frost$core$Frost$ref$frost$core$Object$Q($tmp2806);
frost$core$Int64* $tmp2807 = &((org$frostlang$frostc$IR$Statement*) $tmp2806)->$rawValue;
frost$core$Int64 $tmp2808 = *$tmp2807;
frost$core$Int64 $tmp2809 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:520:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2810 = $tmp2808.value;
int64_t $tmp2811 = $tmp2809.value;
bool $tmp2812 = $tmp2810 == $tmp2811;
frost$core$Bit $tmp2813 = frost$core$Bit$init$builtin_bit($tmp2812);
bool $tmp2814 = $tmp2813.value;
if ($tmp2814) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Position* $tmp2815 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2806)->$data + 0);
org$frostlang$frostc$Position $tmp2816 = *$tmp2815;
org$frostlang$frostc$IR$Block$ID* $tmp2817 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2806)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp2818 = *$tmp2817;
*(&local3) = $tmp2818;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:521
org$frostlang$frostc$IR$Block$ID $tmp2819 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp2820 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:521:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int64 $tmp2821 = $tmp2819.value;
frost$core$Int64 $tmp2822 = $tmp2820.value;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2823 = $tmp2821.value;
int64_t $tmp2824 = $tmp2822.value;
bool $tmp2825 = $tmp2823 == $tmp2824;
frost$core$Bit $tmp2826 = frost$core$Bit$init$builtin_bit($tmp2825);
bool $tmp2827 = $tmp2826.value;
if ($tmp2827) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:522
org$frostlang$frostc$IR$Block* $tmp2828 = *(&local1);
$fn2830 $tmp2829 = ($fn2830) param0->$class->vtable[11];
$tmp2829(param0, $tmp2828);
goto block17;
block17:;
goto block12;
block14:;
frost$core$Int64 $tmp2831 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:525:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2832 = $tmp2808.value;
int64_t $tmp2833 = $tmp2831.value;
bool $tmp2834 = $tmp2832 == $tmp2833;
frost$core$Bit $tmp2835 = frost$core$Bit$init$builtin_bit($tmp2834);
bool $tmp2836 = $tmp2835.value;
if ($tmp2836) goto block20; else goto block12;
block20:;
org$frostlang$frostc$Position* $tmp2837 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2806)->$data + 0);
org$frostlang$frostc$Position $tmp2838 = *$tmp2837;
*(&local4) = $tmp2838;
org$frostlang$frostc$IR$Value** $tmp2839 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp2806)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp2840 = *$tmp2839;
org$frostlang$frostc$IR$Block$ID* $tmp2841 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2806)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp2842 = *$tmp2841;
*(&local5) = $tmp2842;
org$frostlang$frostc$IR$Block$ID* $tmp2843 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2806)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp2844 = *$tmp2843;
*(&local6) = $tmp2844;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:526
org$frostlang$frostc$IR$Block$ID $tmp2845 = *(&local5);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2846;
$tmp2846 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2846->value = $tmp2845;
org$frostlang$frostc$IR$Block$ID $tmp2847 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2848;
$tmp2848 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2848->value = $tmp2847;
ITable* $tmp2849 = ((frost$core$Equatable*) $tmp2846)->$class->itable;
while ($tmp2849->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2849 = $tmp2849->next;
}
$fn2851 $tmp2850 = $tmp2849->methods[1];
frost$core$Bit $tmp2852 = $tmp2850(((frost$core$Equatable*) $tmp2846), ((frost$core$Equatable*) $tmp2848));
bool $tmp2853 = $tmp2852.value;
if ($tmp2853) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp2854 = (frost$core$Int64) {526};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2855, $tmp2854);
abort(); // unreachable
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2848)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2846)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:527
org$frostlang$frostc$IR$Block$ID $tmp2856 = *(&local5);
org$frostlang$frostc$IR$Block$ID $tmp2857 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:527:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int64 $tmp2858 = $tmp2856.value;
frost$core$Int64 $tmp2859 = $tmp2857.value;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2860 = $tmp2858.value;
int64_t $tmp2861 = $tmp2859.value;
bool $tmp2862 = $tmp2860 == $tmp2861;
frost$core$Bit $tmp2863 = frost$core$Bit$init$builtin_bit($tmp2862);
bool $tmp2864 = $tmp2863.value;
if ($tmp2864) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:528
org$frostlang$frostc$IR$Block* $tmp2865 = *(&local1);
frost$collections$Array** $tmp2866 = &$tmp2865->statements;
frost$collections$Array* $tmp2867 = *$tmp2866;
frost$core$Int64 $tmp2868 = *(&local2);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2869 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2870 = (frost$core$Int64) {1};
org$frostlang$frostc$Position $tmp2871 = *(&local4);
org$frostlang$frostc$IR$Block$ID $tmp2872 = *(&local6);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2869, $tmp2870, $tmp2871, $tmp2872);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int64, value:frost.collections.Array.T) from Analyzer.frost:528:37
frost$core$Int64 $tmp2873 = (frost$core$Int64) {0};
int64_t $tmp2874 = $tmp2868.value;
int64_t $tmp2875 = $tmp2873.value;
bool $tmp2876 = $tmp2874 >= $tmp2875;
frost$core$Bit $tmp2877 = (frost$core$Bit) {$tmp2876};
bool $tmp2878 = $tmp2877.value;
if ($tmp2878) goto block32; else goto block31;
block32:;
ITable* $tmp2879 = ((frost$collections$CollectionView*) $tmp2867)->$class->itable;
while ($tmp2879->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2879 = $tmp2879->next;
}
$fn2881 $tmp2880 = $tmp2879->methods[0];
frost$core$Int64 $tmp2882 = $tmp2880(((frost$collections$CollectionView*) $tmp2867));
int64_t $tmp2883 = $tmp2868.value;
int64_t $tmp2884 = $tmp2882.value;
bool $tmp2885 = $tmp2883 < $tmp2884;
frost$core$Bit $tmp2886 = (frost$core$Bit) {$tmp2885};
bool $tmp2887 = $tmp2886.value;
if ($tmp2887) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp2888 = (frost$core$Int64) {27};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2889, $tmp2888, &$s2890);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:27
frost$core$Object*** $tmp2891 = &$tmp2867->data;
frost$core$Object** $tmp2892 = *$tmp2891;
int64_t $tmp2893 = $tmp2868.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
frost$core$Object* $tmp2894 = $tmp2892[$tmp2893];
frost$core$Frost$unref$frost$core$Object$Q($tmp2894);
$tmp2892[$tmp2893] = ((frost$core$Object*) $tmp2869);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
goto block25;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:530
org$frostlang$frostc$IR$Block$ID $tmp2895 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp2896 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:530:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int64 $tmp2897 = $tmp2895.value;
frost$core$Int64 $tmp2898 = $tmp2896.value;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2899 = $tmp2897.value;
int64_t $tmp2900 = $tmp2898.value;
bool $tmp2901 = $tmp2899 == $tmp2900;
frost$core$Bit $tmp2902 = frost$core$Bit$init$builtin_bit($tmp2901);
bool $tmp2903 = $tmp2902.value;
if ($tmp2903) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:531
org$frostlang$frostc$IR$Block* $tmp2904 = *(&local1);
frost$collections$Array** $tmp2905 = &$tmp2904->statements;
frost$collections$Array* $tmp2906 = *$tmp2905;
frost$core$Int64 $tmp2907 = *(&local2);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2908 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2909 = (frost$core$Int64) {1};
org$frostlang$frostc$Position $tmp2910 = *(&local4);
org$frostlang$frostc$IR$Block$ID $tmp2911 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2908, $tmp2909, $tmp2910, $tmp2911);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int64, value:frost.collections.Array.T) from Analyzer.frost:531:37
frost$core$Int64 $tmp2912 = (frost$core$Int64) {0};
int64_t $tmp2913 = $tmp2907.value;
int64_t $tmp2914 = $tmp2912.value;
bool $tmp2915 = $tmp2913 >= $tmp2914;
frost$core$Bit $tmp2916 = (frost$core$Bit) {$tmp2915};
bool $tmp2917 = $tmp2916.value;
if ($tmp2917) goto block40; else goto block39;
block40:;
ITable* $tmp2918 = ((frost$collections$CollectionView*) $tmp2906)->$class->itable;
while ($tmp2918->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2918 = $tmp2918->next;
}
$fn2920 $tmp2919 = $tmp2918->methods[0];
frost$core$Int64 $tmp2921 = $tmp2919(((frost$collections$CollectionView*) $tmp2906));
int64_t $tmp2922 = $tmp2907.value;
int64_t $tmp2923 = $tmp2921.value;
bool $tmp2924 = $tmp2922 < $tmp2923;
frost$core$Bit $tmp2925 = (frost$core$Bit) {$tmp2924};
bool $tmp2926 = $tmp2925.value;
if ($tmp2926) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp2927 = (frost$core$Int64) {27};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2928, $tmp2927, &$s2929);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:27
frost$core$Object*** $tmp2930 = &$tmp2906->data;
frost$core$Object** $tmp2931 = *$tmp2930;
int64_t $tmp2932 = $tmp2907.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
frost$core$Object* $tmp2933 = $tmp2931[$tmp2932];
frost$core$Frost$unref$frost$core$Object$Q($tmp2933);
$tmp2931[$tmp2932] = ((frost$core$Object*) $tmp2908);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
goto block34;
block34:;
goto block25;
block25:;
goto block12;
block12:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2806);
frost$core$Frost$unref$frost$core$Object$Q($tmp2767);
org$frostlang$frostc$IR$Block* $tmp2934 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2934));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
return;

}
void org$frostlang$frostc$pass$Analyzer$cleanup(org$frostlang$frostc$pass$Analyzer* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:14
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp2935 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2936 = *$tmp2935;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2936));
org$frostlang$frostc$MethodDecl** $tmp2937 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2938 = *$tmp2937;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
org$frostlang$frostc$IR** $tmp2939 = &param0->ir;
org$frostlang$frostc$IR* $tmp2940 = *$tmp2939;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2940));
frost$collections$HashMap** $tmp2941 = &param0->blocks;
frost$collections$HashMap* $tmp2942 = *$tmp2941;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2942));
frost$collections$HashMap** $tmp2943 = &param0->predecessors;
frost$collections$HashMap* $tmp2944 = *$tmp2943;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
frost$collections$HashMap** $tmp2945 = &param0->entryStates;
frost$collections$HashMap* $tmp2946 = *$tmp2945;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2946));
frost$collections$HashSet** $tmp2947 = &param0->worklist;
frost$collections$HashSet* $tmp2948 = *$tmp2947;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
frost$collections$HashMap** $tmp2949 = &param0->statements;
frost$collections$HashMap* $tmp2950 = *$tmp2949;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2950));
return;

}

