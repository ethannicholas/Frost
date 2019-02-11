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
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Bit.h"
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
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/Position.h"
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

typedef frost$core$Int64 (*$fn82)(frost$collections$CollectionView*);
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
typedef frost$core$Bit (*$fn585)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn671)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block* (*$fn735)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn744)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn782)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn808)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn854)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$expression$Binary$Operator, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*, org$frostlang$frostc$Type*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn892)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn911)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn920)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn934)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn975)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1011)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1024)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1037)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1050)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1074)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1099)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1112)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1125)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1138)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1162)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1216)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1232)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1284)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn1315)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1340)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1362)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1365)(org$frostlang$frostc$pass$Analyzer$DataFlowValue*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1410)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1460)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1515)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1541)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn1579)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1597)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1646)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Int64 (*$fn1656)(frost$collections$CollectionView*);
typedef void (*$fn1697)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*, frost$core$Int64, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$IR$Block* (*$fn1702)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn1713)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1728)(frost$collections$CollectionView*);
typedef void (*$fn1764)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn1789)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn1800)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn1828)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1843)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1858)(frost$core$Object*);
typedef frost$core$Int64 (*$fn1875)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1899)(frost$core$Object*);
typedef frost$core$Int64 (*$fn1918)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1933)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1966)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1970)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1975)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1983)(frost$core$Object*);
typedef frost$core$String* (*$fn2006)(frost$core$Object*);
typedef frost$core$Int64 (*$fn2017)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2050)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2066)(frost$core$Object*);
typedef frost$core$Int64 (*$fn2081)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2096)(frost$core$Object*);
typedef frost$core$Int64 (*$fn2135)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2196)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2220)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2224)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2229)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2245)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2280)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2307)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2358)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2381)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2393)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn2397)(frost$collections$Iterator*);
typedef void (*$fn2407)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn2414)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2418)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2423)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2447)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2481)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2494)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn2514)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, frost$core$Bit);
typedef frost$core$Int64 (*$fn2546)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn2561)(org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn2571)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2589)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2695)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2722)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2726)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2731)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2739)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2758)(frost$collections$CollectionView*);
typedef void (*$fn2795)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*);
typedef frost$core$Bit (*$fn2816)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2846)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2885)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72", 34, 269475009738187975, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
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
static frost$core$String $s590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s790 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s791 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s816 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s817 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s982 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s996 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1054 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1055 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s1061 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1069 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s1149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s1419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s1422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s1437 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s1472 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s1487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1664 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s1665 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 7119724970118842632, NULL };
static frost$core$String $s1736 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s1737 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s1851 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s1852 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s1861 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b\x20\x65\x6e\x64\x65\x64\x20\x69\x6e\x20\x6e\x6f\x6e\x74\x65\x72\x6d\x69\x6e\x61\x6c\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x20", 37, 1996004463200850147, NULL };
static frost$core$String $s1862 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s1867 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1902 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 21864007024, NULL };
static frost$core$String $s1904 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s1926 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s1927 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s1937 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1938 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1986 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1988 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2009 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2010 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2058 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2059 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2068 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s2089 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2090 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2289 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2455 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2503 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x20\x65\x78\x69\x74\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 33, 7071984735217758420, NULL };
static frost$core$String $s2554 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2555 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2579 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2580 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 7119724970118842632, NULL };
static frost$core$String $s2703 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2704 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2766 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2767 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s2820 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s2854 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2855 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 7119724970118842632, NULL };
static frost$core$String $s2893 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s2894 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 7119724970118842632, NULL };

void org$frostlang$frostc$pass$Analyzer$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$MethodDecl* param2, org$frostlang$frostc$IR* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:150
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:152
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:154
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:156
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:158
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:161
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp22 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp23 = *$tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
org$frostlang$frostc$Compiler** $tmp24 = &param0->compiler;
*$tmp24 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:162
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$MethodDecl** $tmp25 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp26 = *$tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
org$frostlang$frostc$MethodDecl** $tmp27 = &param0->m;
*$tmp27 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:163
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR** $tmp28 = &param0->ir;
org$frostlang$frostc$IR* $tmp29 = *$tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
org$frostlang$frostc$IR** $tmp30 = &param0->ir;
*$tmp30 = param3;
return;

}
org$frostlang$frostc$pass$Analyzer$DataFlowValue* org$frostlang$frostc$pass$Analyzer$getValue$org$frostlang$frostc$IR$Value$org$frostlang$frostc$pass$Analyzer$State$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$pass$Analyzer$State* param2) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
frost$core$Int64 local2;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$IR$Statement$ID local6;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local7 = NULL;
org$frostlang$frostc$Type* local8 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:167
frost$core$Int64* $tmp31 = &param1->$rawValue;
frost$core$Int64 $tmp32 = *$tmp31;
frost$core$Int64 $tmp33 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:168:26
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
org$frostlang$frostc$Type** $tmp41 = (org$frostlang$frostc$Type**) (param1->$data + 1);
org$frostlang$frostc$Type* $tmp42 = *$tmp41;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
org$frostlang$frostc$Type* $tmp43 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local0) = $tmp42;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:169
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp44 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp45 = *(&local0);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp44, $tmp45);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
org$frostlang$frostc$Type* $tmp46 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp44;
block3:;
frost$core$Int64 $tmp47 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:171:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp48 = $tmp32.value;
int64_t $tmp49 = $tmp47.value;
bool $tmp50 = $tmp48 == $tmp49;
frost$core$Bit $tmp51 = frost$core$Bit$init$builtin_bit($tmp50);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block5; else goto block6;
block5:;
frost$core$UInt64* $tmp53 = (frost$core$UInt64*) (param1->$data + 0);
frost$core$UInt64 $tmp54 = *$tmp53;
org$frostlang$frostc$Type** $tmp55 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp56 = *$tmp55;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
org$frostlang$frostc$Type* $tmp57 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local1) = $tmp56;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:172
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp58 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp59 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp58, $tmp59);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
org$frostlang$frostc$Type* $tmp60 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp58;
block6:;
frost$core$Int64 $tmp61 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:174:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp62 = $tmp32.value;
int64_t $tmp63 = $tmp61.value;
bool $tmp64 = $tmp62 == $tmp63;
frost$core$Bit $tmp65 = frost$core$Bit$init$builtin_bit($tmp64);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block8; else goto block9;
block8:;
frost$core$Int64* $tmp67 = (frost$core$Int64*) (param1->$data + 0);
frost$core$Int64 $tmp68 = *$tmp67;
*(&local2) = $tmp68;
org$frostlang$frostc$Type** $tmp69 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp70 = *$tmp69;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:175
frost$collections$Array** $tmp71 = &param2->locals;
frost$collections$Array* $tmp72 = *$tmp71;
frost$core$Int64 $tmp73 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:175:32
frost$core$Int64 $tmp74 = (frost$core$Int64) {0};
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74.value;
bool $tmp77 = $tmp75 >= $tmp76;
frost$core$Bit $tmp78 = (frost$core$Bit) {$tmp77};
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block14; else goto block13;
block14:;
ITable* $tmp80 = ((frost$collections$CollectionView*) $tmp72)->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[0];
frost$core$Int64 $tmp83 = $tmp81(((frost$collections$CollectionView*) $tmp72));
int64_t $tmp84 = $tmp73.value;
int64_t $tmp85 = $tmp83.value;
bool $tmp86 = $tmp84 < $tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp89 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s90, $tmp89, &$s91);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp92 = &$tmp72->data;
frost$core$Object** $tmp93 = *$tmp92;
int64_t $tmp94 = $tmp73.value;
frost$core$Object* $tmp95 = $tmp93[$tmp94];
frost$core$Frost$ref$frost$core$Object$Q($tmp95);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp95)));
frost$core$Frost$unref$frost$core$Object$Q($tmp95);
return ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp95);
block9:;
frost$core$Int64 $tmp96 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:177:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp97 = $tmp32.value;
int64_t $tmp98 = $tmp96.value;
bool $tmp99 = $tmp97 == $tmp98;
frost$core$Bit $tmp100 = frost$core$Bit$init$builtin_bit($tmp99);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block15; else goto block16;
block15:;
org$frostlang$frostc$Type** $tmp102 = (org$frostlang$frostc$Type**) (param1->$data + 0);
org$frostlang$frostc$Type* $tmp103 = *$tmp102;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
org$frostlang$frostc$Type* $tmp104 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local3) = $tmp103;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:178
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp105 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp106 = *(&local3);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp105, $tmp106);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
org$frostlang$frostc$Type* $tmp107 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp105;
block16:;
frost$core$Int64 $tmp108 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:180:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp109 = $tmp32.value;
int64_t $tmp110 = $tmp108.value;
bool $tmp111 = $tmp109 == $tmp110;
frost$core$Bit $tmp112 = frost$core$Bit$init$builtin_bit($tmp111);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block18; else goto block19;
block18:;
frost$core$Int64* $tmp114 = (frost$core$Int64*) (param1->$data + 0);
frost$core$Int64 $tmp115 = *$tmp114;
org$frostlang$frostc$Type** $tmp116 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp117 = *$tmp116;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
org$frostlang$frostc$Type* $tmp118 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local4) = $tmp117;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:181
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp119 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp120 = *(&local4);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp119, $tmp120);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
org$frostlang$frostc$Type* $tmp121 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp119;
block19:;
frost$core$Int64 $tmp122 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:183:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp123 = $tmp32.value;
int64_t $tmp124 = $tmp122.value;
bool $tmp125 = $tmp123 == $tmp124;
frost$core$Bit $tmp126 = frost$core$Bit$init$builtin_bit($tmp125);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block21; else goto block22;
block21:;
frost$core$Real64* $tmp128 = (frost$core$Real64*) (param1->$data + 0);
frost$core$Real64 $tmp129 = *$tmp128;
org$frostlang$frostc$Type** $tmp130 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp131 = *$tmp130;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
org$frostlang$frostc$Type* $tmp132 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local5) = $tmp131;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:184
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp133 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp134 = *(&local5);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp133, $tmp134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
org$frostlang$frostc$Type* $tmp135 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return $tmp133;
block22:;
frost$core$Int64 $tmp136 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:186:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp137 = $tmp32.value;
int64_t $tmp138 = $tmp136.value;
bool $tmp139 = $tmp137 == $tmp138;
frost$core$Bit $tmp140 = frost$core$Bit$init$builtin_bit($tmp139);
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block24; else goto block25;
block24:;
org$frostlang$frostc$IR$Statement$ID* $tmp142 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp143 = *$tmp142;
*(&local6) = $tmp143;
org$frostlang$frostc$Type** $tmp144 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp145 = *$tmp144;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:187
frost$collections$HashMap** $tmp146 = &param2->statements;
frost$collections$HashMap* $tmp147 = *$tmp146;
org$frostlang$frostc$IR$Statement$ID $tmp148 = *(&local6);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp149;
$tmp149 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp149->value = $tmp148;
frost$core$Object* $tmp150 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp147, ((frost$collections$Key*) $tmp149));
*(&local7) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp150)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp151 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
*(&local7) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp150);
frost$core$Frost$unref$frost$core$Object$Q($tmp150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp149)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:188
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp152 = *(&local7);
frost$core$Bit $tmp153 = frost$core$Bit$init$builtin_bit($tmp152 != NULL);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:189
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp155 = *(&local7);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp156 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local7) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
return $tmp155;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:191
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp157 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp158 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp159 = *$tmp158;
org$frostlang$frostc$Type** $tmp160 = &$tmp159->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp161 = *$tmp160;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp157, $tmp161);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp162 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local7) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
return $tmp157;
block25:;
frost$core$Int64 $tmp163 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:193:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp164 = $tmp32.value;
int64_t $tmp165 = $tmp163.value;
bool $tmp166 = $tmp164 == $tmp165;
frost$core$Bit $tmp167 = frost$core$Bit$init$builtin_bit($tmp166);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block29; else goto block30;
block29:;
frost$core$String** $tmp169 = (frost$core$String**) (param1->$data + 0);
frost$core$String* $tmp170 = *$tmp169;
org$frostlang$frostc$Type** $tmp171 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp172 = *$tmp171;
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
org$frostlang$frostc$Type* $tmp173 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
*(&local8) = $tmp172;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:194
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp174 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp175 = *(&local8);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp174, $tmp175);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
org$frostlang$frostc$Type* $tmp176 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
return $tmp174;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:197
frost$core$Int64 $tmp177 = (frost$core$Int64) {197};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:197:30
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
goto block33;
block33:;

}
void org$frostlang$frostc$pass$Analyzer$propagate$org$frostlang$frostc$pass$Analyzer$BlockExit$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$pass$Analyzer$BlockExit param1, org$frostlang$frostc$IR$Block$ID param2) {

frost$collections$HashSet* local0 = NULL;
frost$core$Bit local1;
frost$collections$Iterator* local2 = NULL;
org$frostlang$frostc$pass$Analyzer$State* local3 = NULL;
org$frostlang$frostc$pass$Analyzer$BlockExit local4;
frost$core$Bit local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:203
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:204
frost$collections$HashSet* $tmp191 = *(&local0);
frost$core$Bit $tmp192 = frost$core$Bit$init$builtin_bit($tmp191 == NULL);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:205
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp194 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp194);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$collections$HashSet* $tmp195 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local0) = $tmp194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:206
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:208
frost$collections$HashSet* $tmp200 = *(&local0);
org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper* $tmp201;
$tmp201 = (org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$BlockExit$wrapperclass);
$tmp201->value = param1;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:208:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:8
frost$collections$HashMap** $tmp202 = &$tmp200->contents;
frost$collections$HashMap* $tmp203 = *$tmp202;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp203, ((frost$collections$Key*) $tmp201), ((frost$core$Object*) ((frost$collections$Key*) $tmp201)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp201)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:209
frost$core$Bit $tmp204 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp204;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:210
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:211
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:212
org$frostlang$frostc$pass$Analyzer$State* $tmp216 = *(&local3);
frost$core$Bit $tmp217 = frost$core$Bit$init$builtin_bit($tmp216 == NULL);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:213
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:214
frost$collections$HashMap** $tmp229 = &param0->entryStates;
frost$collections$HashMap* $tmp230 = *$tmp229;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp231;
$tmp231 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp231->value = param2;
org$frostlang$frostc$pass$Analyzer$State* $tmp232 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp230, ((frost$collections$Key*) $tmp231), ((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp231)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:215
frost$core$Bit $tmp233 = frost$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp233;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:217
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:218
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:220
frost$core$Bit $tmp258 = *(&local1);
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:221
frost$collections$HashSet** $tmp260 = &param0->worklist;
frost$collections$HashSet* $tmp261 = *$tmp260;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp262;
$tmp262 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp262->value = param2;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:221:25
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:226
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:227
org$frostlang$frostc$IR$Block* $tmp286 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp287 = &$tmp286->id;
org$frostlang$frostc$IR$Block$ID $tmp288 = *$tmp287;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:227:21
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:228
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:231
frost$core$Int64 $tmp299 = (frost$core$Int64) {231};
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:247
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
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:247:27
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
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:248:30
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:249
org$frostlang$frostc$IR$Value* $tmp353 = *(&local0);
$fn355 $tmp354 = ($fn355) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp356 = $tmp354(param0, $tmp353, param3);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp357 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local1) = $tmp356;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:250
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp358 = *(&local1);
frost$collections$ListView** $tmp359 = &$tmp358->nonNullImplications;
frost$collections$ListView* $tmp360 = *$tmp359;
frost$core$Bit $tmp361 = frost$core$Bit$init$builtin_bit($tmp360 != NULL);
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:251
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:252
org$frostlang$frostc$Pair* $tmp380 = *(&local2);
frost$core$Object** $tmp381 = &$tmp380->second;
frost$core$Object* $tmp382 = *$tmp381;
frost$core$Int64 $tmp383 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:252:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp384 = param2.value;
int64_t $tmp385 = $tmp383.value;
bool $tmp386 = $tmp384 == $tmp385;
frost$core$Bit $tmp387 = frost$core$Bit$init$builtin_bit($tmp386);
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Analyzer.frost:252:40
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:20
bool $tmp388 = ((frost$core$Bit$wrapper*) $tmp382)->value.value;
bool $tmp389 = $tmp387.value;
bool $tmp390 = $tmp388 == $tmp389;
frost$core$Bit $tmp391 = frost$core$Bit$init$builtin_bit($tmp390);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:253
org$frostlang$frostc$Pair* $tmp393 = *(&local2);
frost$core$Object** $tmp394 = &$tmp393->first;
frost$core$Object* $tmp395 = *$tmp394;
frost$core$Int64* $tmp396 = &((org$frostlang$frostc$IR$Value*) $tmp395)->$rawValue;
frost$core$Int64 $tmp397 = *$tmp396;
frost$core$Int64 $tmp398 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:254:46
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:255
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:256
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp414 = *(&local4);
frost$core$Bit $tmp415 = frost$core$Bit$init$builtin_bit($tmp414 != NULL);
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp417 = (frost$core$Int64) {256};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s418, $tmp417);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:257
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
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Analyzer.frost:257:95
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp427 = &$tmp426->typeKind;
org$frostlang$frostc$Type$Kind $tmp428 = *$tmp427;
org$frostlang$frostc$Type$Kind$wrapper* $tmp429;
$tmp429 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp429->value = $tmp428;
frost$core$Int64 $tmp430 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
*(&local5) = $tmp426;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
goto block24;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
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
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:259:46
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:260
frost$collections$Array** $tmp463 = &param3->locals;
frost$collections$Array* $tmp464 = *$tmp463;
frost$core$Int64 $tmp465 = *(&local8);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:260:60
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:261
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp489 = *(&local9);
frost$core$Bit $tmp490 = frost$core$Bit$init$builtin_bit(true);
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp492 = (frost$core$Int64) {261};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s493, $tmp492);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:262
frost$collections$Array** $tmp494 = &param3->locals;
frost$collections$Array* $tmp495 = *$tmp494;
frost$core$Int64 $tmp496 = *(&local8);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp497 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp498 = *(&local9);
org$frostlang$frostc$Type** $tmp499 = &$tmp498->type;
org$frostlang$frostc$Type* $tmp500 = *$tmp499;
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Analyzer.frost:262:93
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp501 = &$tmp500->typeKind;
org$frostlang$frostc$Type$Kind $tmp502 = *$tmp501;
org$frostlang$frostc$Type$Kind$wrapper* $tmp503;
$tmp503 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp503->value = $tmp502;
frost$core$Int64 $tmp504 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local10) = $tmp500;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
goto block39;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
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
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int64, value:frost.collections.Array.T) from Analyzer.frost:262:49
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:271
frost$core$Frost$unref$frost$core$Object$Q($tmp335);
return;

}
org$frostlang$frostc$pass$Analyzer$DataFlowValue* org$frostlang$frostc$pass$Analyzer$binaryValue$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$pass$Analyzer$State$org$frostlang$frostc$Type$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$pass$Analyzer$State* param4, org$frostlang$frostc$Type* param5) {

frost$core$Bit local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$IR$Statement$ID local2;
org$frostlang$frostc$IR$Statement* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
frost$core$Bit local5;
frost$collections$Array* local6 = NULL;
org$frostlang$frostc$IR$Statement$ID local7;
org$frostlang$frostc$IR$Statement* local8 = NULL;
org$frostlang$frostc$IR$Value* local9 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:278
frost$core$Int64 $tmp552 = param2.$rawValue;
frost$core$Int64 $tmp553 = (frost$core$Int64) {22};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:279:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp554 = $tmp552.value;
int64_t $tmp555 = $tmp553.value;
bool $tmp556 = $tmp554 == $tmp555;
frost$core$Bit $tmp557 = frost$core$Bit$init$builtin_bit($tmp556);
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:280
frost$core$Int64* $tmp559 = &param3->$rawValue;
frost$core$Int64 $tmp560 = *$tmp559;
frost$core$Int64 $tmp561 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:281:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp562 = $tmp560.value;
int64_t $tmp563 = $tmp561.value;
bool $tmp564 = $tmp562 == $tmp563;
frost$core$Bit $tmp565 = frost$core$Bit$init$builtin_bit($tmp564);
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block6; else goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:282
org$frostlang$frostc$Compiler** $tmp567 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp568 = *$tmp567;
org$frostlang$frostc$Type** $tmp569 = &$tmp568->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp570 = *$tmp569;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:282:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp571 = &((org$frostlang$frostc$Symbol*) param5)->name;
frost$core$String* $tmp572 = *$tmp571;
frost$core$String** $tmp573 = &((org$frostlang$frostc$Symbol*) $tmp570)->name;
frost$core$String* $tmp574 = *$tmp573;
frost$core$Bit $tmp575 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp572, $tmp574);
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Type$Kind* $tmp577 = &param5->typeKind;
org$frostlang$frostc$Type$Kind $tmp578 = *$tmp577;
org$frostlang$frostc$Type$Kind$wrapper* $tmp579;
$tmp579 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp579->value = $tmp578;
org$frostlang$frostc$Type$Kind* $tmp580 = &$tmp570->typeKind;
org$frostlang$frostc$Type$Kind $tmp581 = *$tmp580;
org$frostlang$frostc$Type$Kind$wrapper* $tmp582;
$tmp582 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp582->value = $tmp581;
ITable* $tmp583 = ((frost$core$Equatable*) $tmp579)->$class->itable;
while ($tmp583->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp583 = $tmp583->next;
}
$fn585 $tmp584 = $tmp583->methods[0];
frost$core$Bit $tmp586 = $tmp584(((frost$core$Equatable*) $tmp579), ((frost$core$Equatable*) $tmp582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp582)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp579)));
*(&local0) = $tmp586;
goto block11;
block10:;
*(&local0) = $tmp575;
goto block11;
block11:;
frost$core$Bit $tmp587 = *(&local0);
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp589 = (frost$core$Int64) {282};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s590, $tmp589);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:283
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp591 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp592 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp591, $tmp592);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp593 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp594 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp595;
$tmp595 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp595->value = $tmp594;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp593, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp595));
frost$collections$Array$add$frost$collections$Array$T($tmp591, ((frost$core$Object*) $tmp593));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
frost$collections$Array* $tmp596 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
*(&local1) = $tmp591;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:284
frost$core$Int64* $tmp597 = &param1->$rawValue;
frost$core$Int64 $tmp598 = *$tmp597;
frost$core$Int64 $tmp599 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:285:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp600 = $tmp598.value;
int64_t $tmp601 = $tmp599.value;
bool $tmp602 = $tmp600 == $tmp601;
frost$core$Bit $tmp603 = frost$core$Bit$init$builtin_bit($tmp602);
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block15; else goto block14;
block15:;
org$frostlang$frostc$IR$Statement$ID* $tmp605 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp606 = *$tmp605;
*(&local2) = $tmp606;
org$frostlang$frostc$Type** $tmp607 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp608 = *$tmp607;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:286
frost$collections$HashMap** $tmp609 = &param0->statements;
frost$collections$HashMap* $tmp610 = *$tmp609;
org$frostlang$frostc$IR$Statement$ID $tmp611 = *(&local2);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp612;
$tmp612 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp612->value = $tmp611;
frost$core$Object* $tmp613 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp610, ((frost$collections$Key*) $tmp612));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp613)));
org$frostlang$frostc$IR$Statement* $tmp614 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) $tmp613);
frost$core$Frost$unref$frost$core$Object$Q($tmp613);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp612)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:287
org$frostlang$frostc$IR$Statement* $tmp615 = *(&local3);
frost$core$Int64* $tmp616 = &$tmp615->$rawValue;
frost$core$Int64 $tmp617 = *$tmp616;
frost$core$Int64 $tmp618 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:288:54
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp619 = $tmp617.value;
int64_t $tmp620 = $tmp618.value;
bool $tmp621 = $tmp619 == $tmp620;
frost$core$Bit $tmp622 = frost$core$Bit$init$builtin_bit($tmp621);
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block18; else goto block17;
block18:;
org$frostlang$frostc$Position* $tmp624 = (org$frostlang$frostc$Position*) ($tmp615->$data + 0);
org$frostlang$frostc$Position $tmp625 = *$tmp624;
org$frostlang$frostc$IR$Value** $tmp626 = (org$frostlang$frostc$IR$Value**) ($tmp615->$data + 24);
org$frostlang$frostc$IR$Value* $tmp627 = *$tmp626;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
org$frostlang$frostc$IR$Value* $tmp628 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
*(&local4) = $tmp627;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:289
frost$collections$Array* $tmp629 = *(&local1);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp630 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$IR$Value* $tmp631 = *(&local4);
frost$core$Bit $tmp632 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp633;
$tmp633 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp633->value = $tmp632;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp630, ((frost$core$Object*) $tmp631), ((frost$core$Object*) $tmp633));
frost$collections$Array$add$frost$collections$Array$T($tmp629, ((frost$core$Object*) $tmp630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
org$frostlang$frostc$IR$Value* $tmp634 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block17;
block17:;
org$frostlang$frostc$IR$Statement* $tmp635 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:294
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp636 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
frost$collections$Array* $tmp637 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp636, param5, ((frost$collections$ListView*) $tmp637));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$collections$Array* $tmp638 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp636;
block5:;
goto block1;
block3:;
frost$core$Int64 $tmp639 = (frost$core$Int64) {21};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:298:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp640 = $tmp552.value;
int64_t $tmp641 = $tmp639.value;
bool $tmp642 = $tmp640 == $tmp641;
frost$core$Bit $tmp643 = frost$core$Bit$init$builtin_bit($tmp642);
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block20; else goto block1;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:299
frost$core$Int64* $tmp645 = &param3->$rawValue;
frost$core$Int64 $tmp646 = *$tmp645;
frost$core$Int64 $tmp647 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:300:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp648 = $tmp646.value;
int64_t $tmp649 = $tmp647.value;
bool $tmp650 = $tmp648 == $tmp649;
frost$core$Bit $tmp651 = frost$core$Bit$init$builtin_bit($tmp650);
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block23; else goto block22;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:301
org$frostlang$frostc$Compiler** $tmp653 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp654 = *$tmp653;
org$frostlang$frostc$Type** $tmp655 = &$tmp654->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp656 = *$tmp655;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:301:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp657 = &((org$frostlang$frostc$Symbol*) param5)->name;
frost$core$String* $tmp658 = *$tmp657;
frost$core$String** $tmp659 = &((org$frostlang$frostc$Symbol*) $tmp656)->name;
frost$core$String* $tmp660 = *$tmp659;
frost$core$Bit $tmp661 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp658, $tmp660);
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Type$Kind* $tmp663 = &param5->typeKind;
org$frostlang$frostc$Type$Kind $tmp664 = *$tmp663;
org$frostlang$frostc$Type$Kind$wrapper* $tmp665;
$tmp665 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp665->value = $tmp664;
org$frostlang$frostc$Type$Kind* $tmp666 = &$tmp656->typeKind;
org$frostlang$frostc$Type$Kind $tmp667 = *$tmp666;
org$frostlang$frostc$Type$Kind$wrapper* $tmp668;
$tmp668 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp668->value = $tmp667;
ITable* $tmp669 = ((frost$core$Equatable*) $tmp665)->$class->itable;
while ($tmp669->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp669 = $tmp669->next;
}
$fn671 $tmp670 = $tmp669->methods[0];
frost$core$Bit $tmp672 = $tmp670(((frost$core$Equatable*) $tmp665), ((frost$core$Equatable*) $tmp668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp668)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp665)));
*(&local5) = $tmp672;
goto block28;
block27:;
*(&local5) = $tmp661;
goto block28;
block28:;
frost$core$Bit $tmp673 = *(&local5);
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp675 = (frost$core$Int64) {301};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s676, $tmp675);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:302
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp677 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp678 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp677, $tmp678);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp679 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp680 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp681;
$tmp681 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp681->value = $tmp680;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp679, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp681));
frost$collections$Array$add$frost$collections$Array$T($tmp677, ((frost$core$Object*) $tmp679));
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
frost$collections$Array* $tmp682 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local6) = $tmp677;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:303
frost$core$Int64* $tmp683 = &param1->$rawValue;
frost$core$Int64 $tmp684 = *$tmp683;
frost$core$Int64 $tmp685 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:304:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp686 = $tmp684.value;
int64_t $tmp687 = $tmp685.value;
bool $tmp688 = $tmp686 == $tmp687;
frost$core$Bit $tmp689 = frost$core$Bit$init$builtin_bit($tmp688);
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block32; else goto block31;
block32:;
org$frostlang$frostc$IR$Statement$ID* $tmp691 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp692 = *$tmp691;
*(&local7) = $tmp692;
org$frostlang$frostc$Type** $tmp693 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp694 = *$tmp693;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:305
frost$collections$HashMap** $tmp695 = &param0->statements;
frost$collections$HashMap* $tmp696 = *$tmp695;
org$frostlang$frostc$IR$Statement$ID $tmp697 = *(&local7);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp698;
$tmp698 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp698->value = $tmp697;
frost$core$Object* $tmp699 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp696, ((frost$collections$Key*) $tmp698));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp699)));
org$frostlang$frostc$IR$Statement* $tmp700 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) $tmp699);
frost$core$Frost$unref$frost$core$Object$Q($tmp699);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp698)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:306
org$frostlang$frostc$IR$Statement* $tmp701 = *(&local8);
frost$core$Int64* $tmp702 = &$tmp701->$rawValue;
frost$core$Int64 $tmp703 = *$tmp702;
frost$core$Int64 $tmp704 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:307:54
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp705 = $tmp703.value;
int64_t $tmp706 = $tmp704.value;
bool $tmp707 = $tmp705 == $tmp706;
frost$core$Bit $tmp708 = frost$core$Bit$init$builtin_bit($tmp707);
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block35; else goto block34;
block35:;
org$frostlang$frostc$Position* $tmp710 = (org$frostlang$frostc$Position*) ($tmp701->$data + 0);
org$frostlang$frostc$Position $tmp711 = *$tmp710;
org$frostlang$frostc$IR$Value** $tmp712 = (org$frostlang$frostc$IR$Value**) ($tmp701->$data + 24);
org$frostlang$frostc$IR$Value* $tmp713 = *$tmp712;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
org$frostlang$frostc$IR$Value* $tmp714 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
*(&local9) = $tmp713;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:308
frost$collections$Array* $tmp715 = *(&local6);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp716 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$IR$Value* $tmp717 = *(&local9);
frost$core$Bit $tmp718 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp719;
$tmp719 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp719->value = $tmp718;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp716, ((frost$core$Object*) $tmp717), ((frost$core$Object*) $tmp719));
frost$collections$Array$add$frost$collections$Array$T($tmp715, ((frost$core$Object*) $tmp716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
org$frostlang$frostc$IR$Value* $tmp720 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block34;
block34:;
org$frostlang$frostc$IR$Statement* $tmp721 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:313
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp722 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
frost$collections$Array* $tmp723 = *(&local6);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp722, param5, ((frost$collections$ListView*) $tmp723));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
frost$collections$Array* $tmp724 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local6) = ((frost$collections$Array*) NULL);
return $tmp722;
block22:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:319
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp725 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp725, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
return $tmp725;

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
frost$core$Bit local37;
org$frostlang$frostc$FieldDecl* local38 = NULL;
org$frostlang$frostc$Position local39;
org$frostlang$frostc$IR$Value* local40 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local41 = NULL;
frost$core$Bit local42;
org$frostlang$frostc$IR$Value* local43 = NULL;
org$frostlang$frostc$IR$Value* local44 = NULL;
org$frostlang$frostc$Type* local45 = NULL;
org$frostlang$frostc$IR$Value* local46 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local47 = NULL;
org$frostlang$frostc$IR$Value* local48 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local49 = NULL;
org$frostlang$frostc$IR$Value* local50 = NULL;
org$frostlang$frostc$IR$Value* local51 = NULL;
org$frostlang$frostc$MethodDecl* local52 = NULL;
org$frostlang$frostc$FixedArray* local53 = NULL;
frost$core$Bit local54;
org$frostlang$frostc$IR$Value* local55 = NULL;
org$frostlang$frostc$IR$Value* local56 = NULL;
frost$core$Int64 local57;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:323
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$State));
org$frostlang$frostc$pass$Analyzer$State* $tmp726 = (org$frostlang$frostc$pass$Analyzer$State*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$State$class);
frost$collections$HashMap** $tmp727 = &param0->entryStates;
frost$collections$HashMap* $tmp728 = *$tmp727;
org$frostlang$frostc$IR$Block$ID $tmp729 = param1.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp730;
$tmp730 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp730->value = $tmp729;
frost$core$Object* $tmp731 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp728, ((frost$collections$Key*) $tmp730));
org$frostlang$frostc$pass$Analyzer$State$init$org$frostlang$frostc$pass$Analyzer$State($tmp726, ((org$frostlang$frostc$pass$Analyzer$State*) $tmp731));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
org$frostlang$frostc$pass$Analyzer$State* $tmp732 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
*(&local0) = $tmp726;
frost$core$Frost$unref$frost$core$Object$Q($tmp731);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp730)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:324
org$frostlang$frostc$IR$Block$ID $tmp733 = param1.id;
$fn735 $tmp734 = ($fn735) param0->$class->vtable[4];
org$frostlang$frostc$IR$Block* $tmp736 = $tmp734(param0, $tmp733);
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
org$frostlang$frostc$IR$Block* $tmp737 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
*(&local1) = $tmp736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:325
frost$core$Int64 $tmp738 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block* $tmp739 = *(&local1);
frost$collections$Array** $tmp740 = &$tmp739->statements;
frost$collections$Array* $tmp741 = *$tmp740;
ITable* $tmp742 = ((frost$collections$CollectionView*) $tmp741)->$class->itable;
while ($tmp742->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp742 = $tmp742->next;
}
$fn744 $tmp743 = $tmp742->methods[0];
frost$core$Int64 $tmp745 = $tmp743(((frost$collections$CollectionView*) $tmp741));
frost$core$Int64 $tmp746 = (frost$core$Int64) {1};
int64_t $tmp747 = $tmp745.value;
int64_t $tmp748 = $tmp746.value;
int64_t $tmp749 = $tmp747 - $tmp748;
frost$core$Int64 $tmp750 = (frost$core$Int64) {$tmp749};
frost$core$Bit $tmp751 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp752 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp738, $tmp750, $tmp751);
frost$core$Int64 $tmp753 = $tmp752.min;
*(&local2) = $tmp753;
frost$core$Int64 $tmp754 = $tmp752.max;
frost$core$Bit $tmp755 = $tmp752.inclusive;
bool $tmp756 = $tmp755.value;
frost$core$Int64 $tmp757 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp758 = $tmp757.value;
frost$core$UInt64 $tmp759 = (frost$core$UInt64) {((uint64_t) $tmp758)};
if ($tmp756) goto block5; else goto block6;
block5:;
int64_t $tmp760 = $tmp753.value;
int64_t $tmp761 = $tmp754.value;
bool $tmp762 = $tmp760 <= $tmp761;
frost$core$Bit $tmp763 = (frost$core$Bit) {$tmp762};
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block2; else goto block3;
block6:;
int64_t $tmp765 = $tmp753.value;
int64_t $tmp766 = $tmp754.value;
bool $tmp767 = $tmp765 < $tmp766;
frost$core$Bit $tmp768 = (frost$core$Bit) {$tmp767};
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:326
org$frostlang$frostc$IR$Block* $tmp770 = *(&local1);
frost$collections$Array** $tmp771 = &$tmp770->ids;
frost$collections$Array* $tmp772 = *$tmp771;
frost$core$Int64 $tmp773 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:326:32
frost$core$Int64 $tmp774 = (frost$core$Int64) {0};
int64_t $tmp775 = $tmp773.value;
int64_t $tmp776 = $tmp774.value;
bool $tmp777 = $tmp775 >= $tmp776;
frost$core$Bit $tmp778 = (frost$core$Bit) {$tmp777};
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block10; else goto block9;
block10:;
ITable* $tmp780 = ((frost$collections$CollectionView*) $tmp772)->$class->itable;
while ($tmp780->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp780 = $tmp780->next;
}
$fn782 $tmp781 = $tmp780->methods[0];
frost$core$Int64 $tmp783 = $tmp781(((frost$collections$CollectionView*) $tmp772));
int64_t $tmp784 = $tmp773.value;
int64_t $tmp785 = $tmp783.value;
bool $tmp786 = $tmp784 < $tmp785;
frost$core$Bit $tmp787 = (frost$core$Bit) {$tmp786};
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp789 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s790, $tmp789, &$s791);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp792 = &$tmp772->data;
frost$core$Object** $tmp793 = *$tmp792;
int64_t $tmp794 = $tmp773.value;
frost$core$Object* $tmp795 = $tmp793[$tmp794];
frost$core$Frost$ref$frost$core$Object$Q($tmp795);
*(&local3) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp795)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp795);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:327
org$frostlang$frostc$IR$Block* $tmp796 = *(&local1);
frost$collections$Array** $tmp797 = &$tmp796->statements;
frost$collections$Array* $tmp798 = *$tmp797;
frost$core$Int64 $tmp799 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:327:35
frost$core$Int64 $tmp800 = (frost$core$Int64) {0};
int64_t $tmp801 = $tmp799.value;
int64_t $tmp802 = $tmp800.value;
bool $tmp803 = $tmp801 >= $tmp802;
frost$core$Bit $tmp804 = (frost$core$Bit) {$tmp803};
bool $tmp805 = $tmp804.value;
if ($tmp805) goto block14; else goto block13;
block14:;
ITable* $tmp806 = ((frost$collections$CollectionView*) $tmp798)->$class->itable;
while ($tmp806->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp806 = $tmp806->next;
}
$fn808 $tmp807 = $tmp806->methods[0];
frost$core$Int64 $tmp809 = $tmp807(((frost$collections$CollectionView*) $tmp798));
int64_t $tmp810 = $tmp799.value;
int64_t $tmp811 = $tmp809.value;
bool $tmp812 = $tmp810 < $tmp811;
frost$core$Bit $tmp813 = (frost$core$Bit) {$tmp812};
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp815 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s816, $tmp815, &$s817);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp818 = &$tmp798->data;
frost$core$Object** $tmp819 = *$tmp818;
int64_t $tmp820 = $tmp799.value;
frost$core$Object* $tmp821 = $tmp819[$tmp820];
frost$core$Frost$ref$frost$core$Object$Q($tmp821);
frost$core$Int64* $tmp822 = &((org$frostlang$frostc$IR$Statement*) $tmp821)->$rawValue;
frost$core$Int64 $tmp823 = *$tmp822;
frost$core$Int64 $tmp824 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:328:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp825 = $tmp823.value;
int64_t $tmp826 = $tmp824.value;
bool $tmp827 = $tmp825 == $tmp826;
frost$core$Bit $tmp828 = frost$core$Bit$init$builtin_bit($tmp827);
bool $tmp829 = $tmp828.value;
if ($tmp829) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp830 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 0);
org$frostlang$frostc$Position $tmp831 = *$tmp830;
org$frostlang$frostc$IR$Value** $tmp832 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp833 = *$tmp832;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
org$frostlang$frostc$IR$Value* $tmp834 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local4) = $tmp833;
org$frostlang$frostc$expression$Binary$Operator* $tmp835 = (org$frostlang$frostc$expression$Binary$Operator*) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp836 = *$tmp835;
*(&local5) = $tmp836;
org$frostlang$frostc$IR$Value** $tmp837 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 40);
org$frostlang$frostc$IR$Value* $tmp838 = *$tmp837;
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
org$frostlang$frostc$IR$Value* $tmp839 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local6) = $tmp838;
org$frostlang$frostc$Type** $tmp840 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 48);
org$frostlang$frostc$Type* $tmp841 = *$tmp840;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
org$frostlang$frostc$Type* $tmp842 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
*(&local7) = $tmp841;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:329
org$frostlang$frostc$pass$Analyzer$State* $tmp843 = *(&local0);
frost$collections$HashMap** $tmp844 = &$tmp843->statements;
frost$collections$HashMap* $tmp845 = *$tmp844;
org$frostlang$frostc$IR$Statement$ID $tmp846 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp847;
$tmp847 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp847->value = $tmp846;
org$frostlang$frostc$IR$Value* $tmp848 = *(&local4);
org$frostlang$frostc$expression$Binary$Operator $tmp849 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp850 = *(&local6);
org$frostlang$frostc$pass$Analyzer$State* $tmp851 = *(&local0);
org$frostlang$frostc$Type* $tmp852 = *(&local7);
$fn854 $tmp853 = ($fn854) param0->$class->vtable[6];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp855 = $tmp853(param0, $tmp848, $tmp849, $tmp850, $tmp851, $tmp852);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp845, ((frost$collections$Key*) $tmp847), ((frost$core$Object*) $tmp855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp847)));
org$frostlang$frostc$Type* $tmp856 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp857 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp858 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block17:;
frost$core$Int64 $tmp859 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:331:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp860 = $tmp823.value;
int64_t $tmp861 = $tmp859.value;
bool $tmp862 = $tmp860 == $tmp861;
frost$core$Bit $tmp863 = frost$core$Bit$init$builtin_bit($tmp862);
bool $tmp864 = $tmp863.value;
if ($tmp864) goto block19; else goto block20;
block19:;
org$frostlang$frostc$Position* $tmp865 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 0);
org$frostlang$frostc$Position $tmp866 = *$tmp865;
*(&local8) = $tmp866;
org$frostlang$frostc$IR$Value** $tmp867 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp868 = *$tmp867;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
org$frostlang$frostc$IR$Value* $tmp869 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
*(&local9) = $tmp868;
org$frostlang$frostc$Type** $tmp870 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 32);
org$frostlang$frostc$Type* $tmp871 = *$tmp870;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
org$frostlang$frostc$Type* $tmp872 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local10) = $tmp871;
frost$core$Bit* $tmp873 = (frost$core$Bit*) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 40);
frost$core$Bit $tmp874 = *$tmp873;
*(&local11) = $tmp874;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:332
frost$core$Bit $tmp875 = *(&local11);
bool $tmp876 = $tmp875.value;
if ($tmp876) goto block22; else goto block24;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:333
org$frostlang$frostc$pass$Analyzer$State* $tmp877 = *(&local0);
frost$collections$HashMap** $tmp878 = &$tmp877->statements;
frost$collections$HashMap* $tmp879 = *$tmp878;
org$frostlang$frostc$IR$Statement$ID $tmp880 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp881;
$tmp881 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp881->value = $tmp880;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp882 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp883 = *(&local10);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp882, $tmp883);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp879, ((frost$collections$Key*) $tmp881), ((frost$core$Object*) $tmp882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp881)));
goto block23;
block24:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:336
org$frostlang$frostc$pass$Analyzer$State* $tmp884 = *(&local0);
frost$collections$HashMap** $tmp885 = &$tmp884->statements;
frost$collections$HashMap* $tmp886 = *$tmp885;
org$frostlang$frostc$IR$Statement$ID $tmp887 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp888;
$tmp888 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp888->value = $tmp887;
org$frostlang$frostc$IR$Value* $tmp889 = *(&local9);
org$frostlang$frostc$pass$Analyzer$State* $tmp890 = *(&local0);
$fn892 $tmp891 = ($fn892) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp893 = $tmp891(param0, $tmp889, $tmp890);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp886, ((frost$collections$Key*) $tmp888), ((frost$core$Object*) $tmp893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp888)));
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:338
frost$core$Bit $tmp894 = *(&local11);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:338:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp895 = $tmp894.value;
bool $tmp896 = !$tmp895;
frost$core$Bit $tmp897 = (frost$core$Bit) {$tmp896};
bool $tmp898 = $tmp897.value;
if ($tmp898) goto block27; else goto block26;
block27:;
bool $tmp899 = param2.value;
if ($tmp899) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:339
org$frostlang$frostc$Type* $tmp900 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Analyzer.frost:339:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:401
org$frostlang$frostc$Type$Kind* $tmp901 = &$tmp900->typeKind;
org$frostlang$frostc$Type$Kind $tmp902 = *$tmp901;
org$frostlang$frostc$Type$Kind$wrapper* $tmp903;
$tmp903 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp903->value = $tmp902;
frost$core$Int64 $tmp904 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:401:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp905 = &(&local13)->$rawValue;
*$tmp905 = $tmp904;
org$frostlang$frostc$Type$Kind $tmp906 = *(&local13);
*(&local12) = $tmp906;
org$frostlang$frostc$Type$Kind $tmp907 = *(&local12);
org$frostlang$frostc$Type$Kind$wrapper* $tmp908;
$tmp908 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp908->value = $tmp907;
ITable* $tmp909 = ((frost$core$Equatable*) $tmp903)->$class->itable;
while ($tmp909->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp909 = $tmp909->next;
}
$fn911 $tmp910 = $tmp909->methods[0];
frost$core$Bit $tmp912 = $tmp910(((frost$core$Equatable*) $tmp903), ((frost$core$Equatable*) $tmp908));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp908)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp903)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:339:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp913 = $tmp912.value;
bool $tmp914 = !$tmp913;
frost$core$Bit $tmp915 = (frost$core$Bit) {$tmp914};
bool $tmp916 = $tmp915.value;
if ($tmp916) goto block31; else goto block30;
block31:;
org$frostlang$frostc$IR$Value* $tmp917 = *(&local9);
org$frostlang$frostc$pass$Analyzer$State* $tmp918 = *(&local0);
$fn920 $tmp919 = ($fn920) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp921 = $tmp919(param0, $tmp917, $tmp918);
org$frostlang$frostc$Type** $tmp922 = &$tmp921->type;
org$frostlang$frostc$Type* $tmp923 = *$tmp922;
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Analyzer.frost:339:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:401
org$frostlang$frostc$Type$Kind* $tmp924 = &$tmp923->typeKind;
org$frostlang$frostc$Type$Kind $tmp925 = *$tmp924;
org$frostlang$frostc$Type$Kind$wrapper* $tmp926;
$tmp926 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp926->value = $tmp925;
frost$core$Int64 $tmp927 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:401:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp928 = &(&local15)->$rawValue;
*$tmp928 = $tmp927;
org$frostlang$frostc$Type$Kind $tmp929 = *(&local15);
*(&local14) = $tmp929;
org$frostlang$frostc$Type$Kind $tmp930 = *(&local14);
org$frostlang$frostc$Type$Kind$wrapper* $tmp931;
$tmp931 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp931->value = $tmp930;
ITable* $tmp932 = ((frost$core$Equatable*) $tmp926)->$class->itable;
while ($tmp932->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp932 = $tmp932->next;
}
$fn934 $tmp933 = $tmp932->methods[0];
frost$core$Bit $tmp935 = $tmp933(((frost$core$Equatable*) $tmp926), ((frost$core$Equatable*) $tmp931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp931)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp926)));
bool $tmp936 = $tmp935.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
if ($tmp936) goto block29; else goto block30;
block29:;
goto block30;
block30:;
goto block26;
block26:;
org$frostlang$frostc$Type* $tmp937 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp938 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block20:;
frost$core$Int64 $tmp939 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:344:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp940 = $tmp823.value;
int64_t $tmp941 = $tmp939.value;
bool $tmp942 = $tmp940 == $tmp941;
frost$core$Bit $tmp943 = frost$core$Bit$init$builtin_bit($tmp942);
bool $tmp944 = $tmp943.value;
if ($tmp944) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp945 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 0);
org$frostlang$frostc$Position $tmp946 = *$tmp945;
org$frostlang$frostc$ClassDecl** $tmp947 = (org$frostlang$frostc$ClassDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp948 = *$tmp947;
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
org$frostlang$frostc$ClassDecl* $tmp949 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
*(&local16) = $tmp948;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:345
org$frostlang$frostc$pass$Analyzer$State* $tmp950 = *(&local0);
frost$collections$HashMap** $tmp951 = &$tmp950->statements;
frost$collections$HashMap* $tmp952 = *$tmp951;
org$frostlang$frostc$IR$Statement$ID $tmp953 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp954;
$tmp954 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp954->value = $tmp953;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp955 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$ClassDecl* $tmp956 = *(&local16);
org$frostlang$frostc$Type** $tmp957 = &$tmp956->type;
org$frostlang$frostc$Type* $tmp958 = *$tmp957;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp955, $tmp958);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp952, ((frost$collections$Key*) $tmp954), ((frost$core$Object*) $tmp955));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp954)));
org$frostlang$frostc$ClassDecl* $tmp959 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block15;
block38:;
frost$core$Int64 $tmp960 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:347:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp961 = $tmp823.value;
int64_t $tmp962 = $tmp960.value;
bool $tmp963 = $tmp961 == $tmp962;
frost$core$Bit $tmp964 = frost$core$Bit$init$builtin_bit($tmp963);
bool $tmp965 = $tmp964.value;
if ($tmp965) goto block40; else goto block41;
block40:;
org$frostlang$frostc$Position* $tmp966 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 0);
org$frostlang$frostc$Position $tmp967 = *$tmp966;
org$frostlang$frostc$IR$Value** $tmp968 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp969 = *$tmp968;
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
org$frostlang$frostc$IR$Value* $tmp970 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
*(&local17) = $tmp969;
org$frostlang$frostc$FixedArray** $tmp971 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp972 = *$tmp971;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:348
org$frostlang$frostc$IR$Value* $tmp973 = *(&local17);
$fn975 $tmp974 = ($fn975) $tmp973->$class->vtable[2];
org$frostlang$frostc$Type* $tmp976 = $tmp974($tmp973);
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
org$frostlang$frostc$Type* $tmp977 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
*(&local18) = $tmp976;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:349
org$frostlang$frostc$Type* $tmp978 = *(&local18);
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:349:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:389
frost$core$String** $tmp979 = &((org$frostlang$frostc$Symbol*) $tmp978)->name;
frost$core$String* $tmp980 = *$tmp979;
frost$core$Bit $tmp981 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp980, &$s982);
bool $tmp983 = $tmp981.value;
if ($tmp983) goto block43; else goto block45;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:350
org$frostlang$frostc$pass$Analyzer$State* $tmp984 = *(&local0);
frost$collections$HashMap** $tmp985 = &$tmp984->statements;
frost$collections$HashMap* $tmp986 = *$tmp985;
org$frostlang$frostc$IR$Statement$ID $tmp987 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp988;
$tmp988 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp988->value = $tmp987;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp989 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp990 = *(&local18);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:350:68
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp991 = &$tmp990->_subtypes;
org$frostlang$frostc$FixedArray* $tmp992 = *$tmp991;
frost$core$Bit $tmp993 = frost$core$Bit$init$builtin_bit($tmp992 != NULL);
bool $tmp994 = $tmp993.value;
if ($tmp994) goto block48; else goto block49;
block49:;
frost$core$Int64 $tmp995 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s996, $tmp995);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp997 = &$tmp990->_subtypes;
org$frostlang$frostc$FixedArray* $tmp998 = *$tmp997;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
frost$core$Int64 $tmp999 = (frost$core$Int64) {1};
frost$core$Object* $tmp1000 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp998, $tmp999);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Analyzer.frost:350:80
org$frostlang$frostc$Type$Kind* $tmp1001 = &((org$frostlang$frostc$Type*) $tmp1000)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1002 = *$tmp1001;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1003;
$tmp1003 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1003->value = $tmp1002;
frost$core$Int64 $tmp1004 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1005 = &(&local20)->$rawValue;
*$tmp1005 = $tmp1004;
org$frostlang$frostc$Type$Kind $tmp1006 = *(&local20);
*(&local19) = $tmp1006;
org$frostlang$frostc$Type$Kind $tmp1007 = *(&local19);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1008;
$tmp1008 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1008->value = $tmp1007;
ITable* $tmp1009 = ((frost$core$Equatable*) $tmp1003)->$class->itable;
while ($tmp1009->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1009 = $tmp1009->next;
}
$fn1011 $tmp1010 = $tmp1009->methods[0];
frost$core$Bit $tmp1012 = $tmp1010(((frost$core$Equatable*) $tmp1003), ((frost$core$Equatable*) $tmp1008));
bool $tmp1013 = $tmp1012.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1008)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1003)));
if ($tmp1013) goto block51; else goto block55;
block55:;
org$frostlang$frostc$Type$Kind* $tmp1014 = &((org$frostlang$frostc$Type*) $tmp1000)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1015 = *$tmp1014;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1016;
$tmp1016 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1016->value = $tmp1015;
frost$core$Int64 $tmp1017 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1018 = &(&local22)->$rawValue;
*$tmp1018 = $tmp1017;
org$frostlang$frostc$Type$Kind $tmp1019 = *(&local22);
*(&local21) = $tmp1019;
org$frostlang$frostc$Type$Kind $tmp1020 = *(&local21);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1021;
$tmp1021 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1021->value = $tmp1020;
ITable* $tmp1022 = ((frost$core$Equatable*) $tmp1016)->$class->itable;
while ($tmp1022->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1022 = $tmp1022->next;
}
$fn1024 $tmp1023 = $tmp1022->methods[0];
frost$core$Bit $tmp1025 = $tmp1023(((frost$core$Equatable*) $tmp1016), ((frost$core$Equatable*) $tmp1021));
bool $tmp1026 = $tmp1025.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1021)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1016)));
if ($tmp1026) goto block51; else goto block54;
block54:;
org$frostlang$frostc$Type$Kind* $tmp1027 = &((org$frostlang$frostc$Type*) $tmp1000)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1028 = *$tmp1027;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1029;
$tmp1029 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1029->value = $tmp1028;
frost$core$Int64 $tmp1030 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1031 = &(&local24)->$rawValue;
*$tmp1031 = $tmp1030;
org$frostlang$frostc$Type$Kind $tmp1032 = *(&local24);
*(&local23) = $tmp1032;
org$frostlang$frostc$Type$Kind $tmp1033 = *(&local23);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1034;
$tmp1034 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1034->value = $tmp1033;
ITable* $tmp1035 = ((frost$core$Equatable*) $tmp1029)->$class->itable;
while ($tmp1035->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1035 = $tmp1035->next;
}
$fn1037 $tmp1036 = $tmp1035->methods[0];
frost$core$Bit $tmp1038 = $tmp1036(((frost$core$Equatable*) $tmp1029), ((frost$core$Equatable*) $tmp1034));
bool $tmp1039 = $tmp1038.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1034)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1029)));
if ($tmp1039) goto block51; else goto block53;
block53:;
org$frostlang$frostc$Type$Kind* $tmp1040 = &((org$frostlang$frostc$Type*) $tmp1000)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1041 = *$tmp1040;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1042;
$tmp1042 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1042->value = $tmp1041;
frost$core$Int64 $tmp1043 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1044 = &(&local26)->$rawValue;
*$tmp1044 = $tmp1043;
org$frostlang$frostc$Type$Kind $tmp1045 = *(&local26);
*(&local25) = $tmp1045;
org$frostlang$frostc$Type$Kind $tmp1046 = *(&local25);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1047;
$tmp1047 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1047->value = $tmp1046;
ITable* $tmp1048 = ((frost$core$Equatable*) $tmp1042)->$class->itable;
while ($tmp1048->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1048 = $tmp1048->next;
}
$fn1050 $tmp1049 = $tmp1048->methods[0];
frost$core$Bit $tmp1051 = $tmp1049(((frost$core$Equatable*) $tmp1042), ((frost$core$Equatable*) $tmp1047));
bool $tmp1052 = $tmp1051.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1047)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1042)));
if ($tmp1052) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp1053 = (frost$core$Int64) {434};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1054, $tmp1053, &$s1055);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1056 = &((org$frostlang$frostc$Type*) $tmp1000)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1057 = *$tmp1056;
frost$core$Bit $tmp1058 = frost$core$Bit$init$builtin_bit($tmp1057 != NULL);
bool $tmp1059 = $tmp1058.value;
if ($tmp1059) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp1060 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1061, $tmp1060);
abort(); // unreachable
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1062 = &((org$frostlang$frostc$Type*) $tmp1000)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1063 = *$tmp1062;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1064 = &((org$frostlang$frostc$Type*) $tmp1000)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1065 = *$tmp1064;
frost$core$Bit $tmp1066 = frost$core$Bit$init$builtin_bit($tmp1065 != NULL);
bool $tmp1067 = $tmp1066.value;
if ($tmp1067) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp1068 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1069, $tmp1068);
abort(); // unreachable
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1070 = &((org$frostlang$frostc$Type*) $tmp1000)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1071 = *$tmp1070;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
ITable* $tmp1072 = ((frost$collections$CollectionView*) $tmp1071)->$class->itable;
while ($tmp1072->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1072 = $tmp1072->next;
}
$fn1074 $tmp1073 = $tmp1072->methods[0];
frost$core$Int64 $tmp1075 = $tmp1073(((frost$collections$CollectionView*) $tmp1071));
frost$core$Int64 $tmp1076 = (frost$core$Int64) {1};
int64_t $tmp1077 = $tmp1075.value;
int64_t $tmp1078 = $tmp1076.value;
int64_t $tmp1079 = $tmp1077 - $tmp1078;
frost$core$Int64 $tmp1080 = (frost$core$Int64) {$tmp1079};
frost$core$Object* $tmp1081 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1063, $tmp1080);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1081)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1081);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp989, ((org$frostlang$frostc$Type*) $tmp1081));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp986, ((frost$collections$Key*) $tmp988), ((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1081)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1000);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp988)));
goto block44;
block45:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:353
org$frostlang$frostc$pass$Analyzer$State* $tmp1082 = *(&local0);
frost$collections$HashMap** $tmp1083 = &$tmp1082->statements;
frost$collections$HashMap* $tmp1084 = *$tmp1083;
org$frostlang$frostc$IR$Statement$ID $tmp1085 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1086;
$tmp1086 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1086->value = $tmp1085;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1087 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp1088 = *(&local18);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Analyzer.frost:353:68
org$frostlang$frostc$Type$Kind* $tmp1089 = &$tmp1088->typeKind;
org$frostlang$frostc$Type$Kind $tmp1090 = *$tmp1089;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1091;
$tmp1091 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1091->value = $tmp1090;
frost$core$Int64 $tmp1092 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1093 = &(&local28)->$rawValue;
*$tmp1093 = $tmp1092;
org$frostlang$frostc$Type$Kind $tmp1094 = *(&local28);
*(&local27) = $tmp1094;
org$frostlang$frostc$Type$Kind $tmp1095 = *(&local27);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1096;
$tmp1096 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1096->value = $tmp1095;
ITable* $tmp1097 = ((frost$core$Equatable*) $tmp1091)->$class->itable;
while ($tmp1097->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1097 = $tmp1097->next;
}
$fn1099 $tmp1098 = $tmp1097->methods[0];
frost$core$Bit $tmp1100 = $tmp1098(((frost$core$Equatable*) $tmp1091), ((frost$core$Equatable*) $tmp1096));
bool $tmp1101 = $tmp1100.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1096)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1091)));
if ($tmp1101) goto block67; else goto block71;
block71:;
org$frostlang$frostc$Type$Kind* $tmp1102 = &$tmp1088->typeKind;
org$frostlang$frostc$Type$Kind $tmp1103 = *$tmp1102;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1104;
$tmp1104 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1104->value = $tmp1103;
frost$core$Int64 $tmp1105 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1106 = &(&local30)->$rawValue;
*$tmp1106 = $tmp1105;
org$frostlang$frostc$Type$Kind $tmp1107 = *(&local30);
*(&local29) = $tmp1107;
org$frostlang$frostc$Type$Kind $tmp1108 = *(&local29);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1109;
$tmp1109 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1109->value = $tmp1108;
ITable* $tmp1110 = ((frost$core$Equatable*) $tmp1104)->$class->itable;
while ($tmp1110->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1110 = $tmp1110->next;
}
$fn1112 $tmp1111 = $tmp1110->methods[0];
frost$core$Bit $tmp1113 = $tmp1111(((frost$core$Equatable*) $tmp1104), ((frost$core$Equatable*) $tmp1109));
bool $tmp1114 = $tmp1113.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1109)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1104)));
if ($tmp1114) goto block67; else goto block70;
block70:;
org$frostlang$frostc$Type$Kind* $tmp1115 = &$tmp1088->typeKind;
org$frostlang$frostc$Type$Kind $tmp1116 = *$tmp1115;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1117;
$tmp1117 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1117->value = $tmp1116;
frost$core$Int64 $tmp1118 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1119 = &(&local32)->$rawValue;
*$tmp1119 = $tmp1118;
org$frostlang$frostc$Type$Kind $tmp1120 = *(&local32);
*(&local31) = $tmp1120;
org$frostlang$frostc$Type$Kind $tmp1121 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1122;
$tmp1122 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1122->value = $tmp1121;
ITable* $tmp1123 = ((frost$core$Equatable*) $tmp1117)->$class->itable;
while ($tmp1123->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1123 = $tmp1123->next;
}
$fn1125 $tmp1124 = $tmp1123->methods[0];
frost$core$Bit $tmp1126 = $tmp1124(((frost$core$Equatable*) $tmp1117), ((frost$core$Equatable*) $tmp1122));
bool $tmp1127 = $tmp1126.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1122)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1117)));
if ($tmp1127) goto block67; else goto block69;
block69:;
org$frostlang$frostc$Type$Kind* $tmp1128 = &$tmp1088->typeKind;
org$frostlang$frostc$Type$Kind $tmp1129 = *$tmp1128;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1130;
$tmp1130 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1130->value = $tmp1129;
frost$core$Int64 $tmp1131 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1132 = &(&local34)->$rawValue;
*$tmp1132 = $tmp1131;
org$frostlang$frostc$Type$Kind $tmp1133 = *(&local34);
*(&local33) = $tmp1133;
org$frostlang$frostc$Type$Kind $tmp1134 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1135;
$tmp1135 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1135->value = $tmp1134;
ITable* $tmp1136 = ((frost$core$Equatable*) $tmp1130)->$class->itable;
while ($tmp1136->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1136 = $tmp1136->next;
}
$fn1138 $tmp1137 = $tmp1136->methods[0];
frost$core$Bit $tmp1139 = $tmp1137(((frost$core$Equatable*) $tmp1130), ((frost$core$Equatable*) $tmp1135));
bool $tmp1140 = $tmp1139.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1135)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1130)));
if ($tmp1140) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp1141 = (frost$core$Int64) {434};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1142, $tmp1141, &$s1143);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1144 = &$tmp1088->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1145 = *$tmp1144;
frost$core$Bit $tmp1146 = frost$core$Bit$init$builtin_bit($tmp1145 != NULL);
bool $tmp1147 = $tmp1146.value;
if ($tmp1147) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp1148 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1149, $tmp1148);
abort(); // unreachable
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1150 = &$tmp1088->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1151 = *$tmp1150;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1152 = &$tmp1088->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1153 = *$tmp1152;
frost$core$Bit $tmp1154 = frost$core$Bit$init$builtin_bit($tmp1153 != NULL);
bool $tmp1155 = $tmp1154.value;
if ($tmp1155) goto block80; else goto block81;
block81:;
frost$core$Int64 $tmp1156 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1157, $tmp1156);
abort(); // unreachable
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1158 = &$tmp1088->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1159 = *$tmp1158;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
ITable* $tmp1160 = ((frost$collections$CollectionView*) $tmp1159)->$class->itable;
while ($tmp1160->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1160 = $tmp1160->next;
}
$fn1162 $tmp1161 = $tmp1160->methods[0];
frost$core$Int64 $tmp1163 = $tmp1161(((frost$collections$CollectionView*) $tmp1159));
frost$core$Int64 $tmp1164 = (frost$core$Int64) {1};
int64_t $tmp1165 = $tmp1163.value;
int64_t $tmp1166 = $tmp1164.value;
int64_t $tmp1167 = $tmp1165 - $tmp1166;
frost$core$Int64 $tmp1168 = (frost$core$Int64) {$tmp1167};
frost$core$Object* $tmp1169 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1151, $tmp1168);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1169)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1169);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1087, ((org$frostlang$frostc$Type*) $tmp1169));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1084, ((frost$collections$Key*) $tmp1086), ((frost$core$Object*) $tmp1087));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1169)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1086)));
goto block44;
block44:;
org$frostlang$frostc$Type* $tmp1170 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1171 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block41:;
frost$core$Int64 $tmp1172 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:356:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1173 = $tmp823.value;
int64_t $tmp1174 = $tmp1172.value;
bool $tmp1175 = $tmp1173 == $tmp1174;
frost$core$Bit $tmp1176 = frost$core$Bit$init$builtin_bit($tmp1175);
bool $tmp1177 = $tmp1176.value;
if ($tmp1177) goto block82; else goto block83;
block82:;
org$frostlang$frostc$Position* $tmp1178 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 0);
org$frostlang$frostc$Position $tmp1179 = *$tmp1178;
org$frostlang$frostc$IR$Value** $tmp1180 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1181 = *$tmp1180;
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
org$frostlang$frostc$IR$Value* $tmp1182 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
*(&local35) = $tmp1181;
org$frostlang$frostc$FieldDecl** $tmp1183 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp1184 = *$tmp1183;
*(&local36) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
org$frostlang$frostc$FieldDecl* $tmp1185 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
*(&local36) = $tmp1184;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:357
org$frostlang$frostc$FieldDecl* $tmp1186 = *(&local36);
frost$core$Weak** $tmp1187 = &$tmp1186->owner;
frost$core$Weak* $tmp1188 = *$tmp1187;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Analyzer.frost:357:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1189 = &$tmp1188->_valid;
frost$core$Bit $tmp1190 = *$tmp1189;
bool $tmp1191 = $tmp1190.value;
if ($tmp1191) goto block90; else goto block91;
block91:;
frost$core$Int64 $tmp1192 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1193, $tmp1192);
abort(); // unreachable
block90:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1194 = &$tmp1188->value;
frost$core$Object* $tmp1195 = *$tmp1194;
frost$core$Frost$ref$frost$core$Object$Q($tmp1195);
org$frostlang$frostc$Type** $tmp1196 = &((org$frostlang$frostc$ClassDecl*) $tmp1195)->type;
org$frostlang$frostc$Type* $tmp1197 = *$tmp1196;
org$frostlang$frostc$Compiler** $tmp1198 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1199 = *$tmp1198;
org$frostlang$frostc$Type** $tmp1200 = &$tmp1199->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1201 = *$tmp1200;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:357:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1202 = &((org$frostlang$frostc$Symbol*) $tmp1197)->name;
frost$core$String* $tmp1203 = *$tmp1202;
frost$core$String** $tmp1204 = &((org$frostlang$frostc$Symbol*) $tmp1201)->name;
frost$core$String* $tmp1205 = *$tmp1204;
frost$core$Bit $tmp1206 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1203, $tmp1205);
bool $tmp1207 = $tmp1206.value;
if ($tmp1207) goto block93; else goto block94;
block93:;
org$frostlang$frostc$Type$Kind* $tmp1208 = &$tmp1197->typeKind;
org$frostlang$frostc$Type$Kind $tmp1209 = *$tmp1208;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1210;
$tmp1210 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1210->value = $tmp1209;
org$frostlang$frostc$Type$Kind* $tmp1211 = &$tmp1201->typeKind;
org$frostlang$frostc$Type$Kind $tmp1212 = *$tmp1211;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1213;
$tmp1213 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1213->value = $tmp1212;
ITable* $tmp1214 = ((frost$core$Equatable*) $tmp1210)->$class->itable;
while ($tmp1214->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1214 = $tmp1214->next;
}
$fn1216 $tmp1215 = $tmp1214->methods[0];
frost$core$Bit $tmp1217 = $tmp1215(((frost$core$Equatable*) $tmp1210), ((frost$core$Equatable*) $tmp1213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1213)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1210)));
*(&local37) = $tmp1217;
goto block95;
block94:;
*(&local37) = $tmp1206;
goto block95;
block95:;
frost$core$Bit $tmp1218 = *(&local37);
bool $tmp1219 = $tmp1218.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1195);
if ($tmp1219) goto block85; else goto block87;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:358
org$frostlang$frostc$pass$Analyzer$State* $tmp1220 = *(&local0);
frost$collections$HashMap** $tmp1221 = &$tmp1220->statements;
frost$collections$HashMap* $tmp1222 = *$tmp1221;
org$frostlang$frostc$IR$Statement$ID $tmp1223 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1224;
$tmp1224 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1224->value = $tmp1223;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1225 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp1226 = *(&local36);
org$frostlang$frostc$Type** $tmp1227 = &$tmp1226->type;
org$frostlang$frostc$Type* $tmp1228 = *$tmp1227;
org$frostlang$frostc$IR$Value* $tmp1229 = *(&local35);
org$frostlang$frostc$pass$Analyzer$State* $tmp1230 = *(&local0);
$fn1232 $tmp1231 = ($fn1232) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1233 = $tmp1231(param0, $tmp1229, $tmp1230);
frost$collections$ListView** $tmp1234 = &$tmp1233->nonNullImplications;
frost$collections$ListView* $tmp1235 = *$tmp1234;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp1225, $tmp1228, $tmp1235);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1222, ((frost$collections$Key*) $tmp1224), ((frost$core$Object*) $tmp1225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1224)));
goto block86;
block87:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:362
org$frostlang$frostc$pass$Analyzer$State* $tmp1236 = *(&local0);
frost$collections$HashMap** $tmp1237 = &$tmp1236->statements;
frost$collections$HashMap* $tmp1238 = *$tmp1237;
org$frostlang$frostc$IR$Statement$ID $tmp1239 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1240;
$tmp1240 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1240->value = $tmp1239;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1241 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp1242 = *(&local36);
org$frostlang$frostc$Type** $tmp1243 = &$tmp1242->type;
org$frostlang$frostc$Type* $tmp1244 = *$tmp1243;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1241, $tmp1244);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1238, ((frost$collections$Key*) $tmp1240), ((frost$core$Object*) $tmp1241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1240)));
goto block86;
block86:;
org$frostlang$frostc$FieldDecl* $tmp1245 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
*(&local36) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp1246 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block83:;
frost$core$Int64 $tmp1247 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:365:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1248 = $tmp823.value;
int64_t $tmp1249 = $tmp1247.value;
bool $tmp1250 = $tmp1248 == $tmp1249;
frost$core$Bit $tmp1251 = frost$core$Bit$init$builtin_bit($tmp1250);
bool $tmp1252 = $tmp1251.value;
if ($tmp1252) goto block96; else goto block97;
block96:;
org$frostlang$frostc$Position* $tmp1253 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 0);
org$frostlang$frostc$Position $tmp1254 = *$tmp1253;
org$frostlang$frostc$IR$Value** $tmp1255 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1256 = *$tmp1255;
org$frostlang$frostc$FieldDecl** $tmp1257 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp1258 = *$tmp1257;
*(&local38) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
org$frostlang$frostc$FieldDecl* $tmp1259 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
*(&local38) = $tmp1258;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:366
org$frostlang$frostc$pass$Analyzer$State* $tmp1260 = *(&local0);
frost$collections$HashMap** $tmp1261 = &$tmp1260->statements;
frost$collections$HashMap* $tmp1262 = *$tmp1261;
org$frostlang$frostc$IR$Statement$ID $tmp1263 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1264;
$tmp1264 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1264->value = $tmp1263;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1265 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp1266 = *(&local38);
org$frostlang$frostc$Type** $tmp1267 = &$tmp1266->type;
org$frostlang$frostc$Type* $tmp1268 = *$tmp1267;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1265, $tmp1268);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1262, ((frost$collections$Key*) $tmp1264), ((frost$core$Object*) $tmp1265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1264)));
org$frostlang$frostc$FieldDecl* $tmp1269 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
*(&local38) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block15;
block97:;
frost$core$Int64 $tmp1270 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:368:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1271 = $tmp823.value;
int64_t $tmp1272 = $tmp1270.value;
bool $tmp1273 = $tmp1271 == $tmp1272;
frost$core$Bit $tmp1274 = frost$core$Bit$init$builtin_bit($tmp1273);
bool $tmp1275 = $tmp1274.value;
if ($tmp1275) goto block99; else goto block100;
block99:;
org$frostlang$frostc$Position* $tmp1276 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 0);
org$frostlang$frostc$Position $tmp1277 = *$tmp1276;
*(&local39) = $tmp1277;
org$frostlang$frostc$IR$Value** $tmp1278 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1279 = *$tmp1278;
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
org$frostlang$frostc$IR$Value* $tmp1280 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
*(&local40) = $tmp1279;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:369
org$frostlang$frostc$IR$Value* $tmp1281 = *(&local40);
org$frostlang$frostc$pass$Analyzer$State* $tmp1282 = *(&local0);
$fn1284 $tmp1283 = ($fn1284) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1285 = $tmp1283(param0, $tmp1281, $tmp1282);
*(&local41) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1286 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
*(&local41) = $tmp1285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:370
org$frostlang$frostc$pass$Analyzer$State* $tmp1287 = *(&local0);
frost$collections$HashMap** $tmp1288 = &$tmp1287->statements;
frost$collections$HashMap* $tmp1289 = *$tmp1288;
org$frostlang$frostc$IR$Statement$ID $tmp1290 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1291;
$tmp1291 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1291->value = $tmp1290;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1292 = *(&local41);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1289, ((frost$collections$Key*) $tmp1291), ((frost$core$Object*) $tmp1292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1291)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:371
bool $tmp1293 = param2.value;
if ($tmp1293) goto block104; else goto block103;
block104:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1294 = *(&local41);
org$frostlang$frostc$Type** $tmp1295 = &$tmp1294->type;
org$frostlang$frostc$Type* $tmp1296 = *$tmp1295;
org$frostlang$frostc$Compiler** $tmp1297 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1298 = *$tmp1297;
org$frostlang$frostc$Type** $tmp1299 = &$tmp1298->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp1300 = *$tmp1299;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:371:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1301 = &((org$frostlang$frostc$Symbol*) $tmp1296)->name;
frost$core$String* $tmp1302 = *$tmp1301;
frost$core$String** $tmp1303 = &((org$frostlang$frostc$Symbol*) $tmp1300)->name;
frost$core$String* $tmp1304 = *$tmp1303;
frost$core$Bit $tmp1305 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1302, $tmp1304);
bool $tmp1306 = $tmp1305.value;
if ($tmp1306) goto block106; else goto block107;
block106:;
org$frostlang$frostc$Type$Kind* $tmp1307 = &$tmp1296->typeKind;
org$frostlang$frostc$Type$Kind $tmp1308 = *$tmp1307;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1309;
$tmp1309 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1309->value = $tmp1308;
org$frostlang$frostc$Type$Kind* $tmp1310 = &$tmp1300->typeKind;
org$frostlang$frostc$Type$Kind $tmp1311 = *$tmp1310;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1312;
$tmp1312 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1312->value = $tmp1311;
ITable* $tmp1313 = ((frost$core$Equatable*) $tmp1309)->$class->itable;
while ($tmp1313->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1313 = $tmp1313->next;
}
$fn1315 $tmp1314 = $tmp1313->methods[0];
frost$core$Bit $tmp1316 = $tmp1314(((frost$core$Equatable*) $tmp1309), ((frost$core$Equatable*) $tmp1312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1312)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1309)));
*(&local42) = $tmp1316;
goto block108;
block107:;
*(&local42) = $tmp1305;
goto block108;
block108:;
frost$core$Bit $tmp1317 = *(&local42);
bool $tmp1318 = $tmp1317.value;
if ($tmp1318) goto block102; else goto block103;
block102:;
goto block103;
block103:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1319 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
*(&local41) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp1320 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block100:;
frost$core$Int64 $tmp1321 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:375:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1322 = $tmp823.value;
int64_t $tmp1323 = $tmp1321.value;
bool $tmp1324 = $tmp1322 == $tmp1323;
frost$core$Bit $tmp1325 = frost$core$Bit$init$builtin_bit($tmp1324);
bool $tmp1326 = $tmp1325.value;
if ($tmp1326) goto block109; else goto block110;
block109:;
org$frostlang$frostc$Position* $tmp1327 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 0);
org$frostlang$frostc$Position $tmp1328 = *$tmp1327;
org$frostlang$frostc$IR$Value** $tmp1329 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1330 = *$tmp1329;
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
org$frostlang$frostc$IR$Value* $tmp1331 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
*(&local43) = $tmp1330;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:376
org$frostlang$frostc$pass$Analyzer$State* $tmp1332 = *(&local0);
frost$collections$HashMap** $tmp1333 = &$tmp1332->statements;
frost$collections$HashMap* $tmp1334 = *$tmp1333;
org$frostlang$frostc$IR$Statement$ID $tmp1335 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1336;
$tmp1336 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1336->value = $tmp1335;
org$frostlang$frostc$IR$Value* $tmp1337 = *(&local43);
org$frostlang$frostc$pass$Analyzer$State* $tmp1338 = *(&local0);
$fn1340 $tmp1339 = ($fn1340) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1341 = $tmp1339(param0, $tmp1337, $tmp1338);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1334, ((frost$collections$Key*) $tmp1336), ((frost$core$Object*) $tmp1341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1336)));
org$frostlang$frostc$IR$Value* $tmp1342 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block110:;
frost$core$Int64 $tmp1343 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:378:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1344 = $tmp823.value;
int64_t $tmp1345 = $tmp1343.value;
bool $tmp1346 = $tmp1344 == $tmp1345;
frost$core$Bit $tmp1347 = frost$core$Bit$init$builtin_bit($tmp1346);
bool $tmp1348 = $tmp1347.value;
if ($tmp1348) goto block112; else goto block113;
block112:;
org$frostlang$frostc$Position* $tmp1349 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 0);
org$frostlang$frostc$Position $tmp1350 = *$tmp1349;
org$frostlang$frostc$IR$Value** $tmp1351 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1352 = *$tmp1351;
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
org$frostlang$frostc$IR$Value* $tmp1353 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
*(&local44) = $tmp1352;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:379
org$frostlang$frostc$pass$Analyzer$State* $tmp1354 = *(&local0);
frost$collections$HashMap** $tmp1355 = &$tmp1354->statements;
frost$collections$HashMap* $tmp1356 = *$tmp1355;
org$frostlang$frostc$IR$Statement$ID $tmp1357 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1358;
$tmp1358 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1358->value = $tmp1357;
org$frostlang$frostc$IR$Value* $tmp1359 = *(&local44);
org$frostlang$frostc$pass$Analyzer$State* $tmp1360 = *(&local0);
$fn1362 $tmp1361 = ($fn1362) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1363 = $tmp1361(param0, $tmp1359, $tmp1360);
$fn1365 $tmp1364 = ($fn1365) $tmp1363->$class->vtable[4];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1366 = $tmp1364($tmp1363);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1356, ((frost$collections$Key*) $tmp1358), ((frost$core$Object*) $tmp1366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1358)));
org$frostlang$frostc$IR$Value* $tmp1367 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block113:;
frost$core$Int64 $tmp1368 = (frost$core$Int64) {17};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:381:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1369 = $tmp823.value;
int64_t $tmp1370 = $tmp1368.value;
bool $tmp1371 = $tmp1369 == $tmp1370;
frost$core$Bit $tmp1372 = frost$core$Bit$init$builtin_bit($tmp1371);
bool $tmp1373 = $tmp1372.value;
if ($tmp1373) goto block115; else goto block116;
block115:;
org$frostlang$frostc$Position* $tmp1374 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 0);
org$frostlang$frostc$Position $tmp1375 = *$tmp1374;
org$frostlang$frostc$IR$Value** $tmp1376 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1377 = *$tmp1376;
org$frostlang$frostc$Type** $tmp1378 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 32);
org$frostlang$frostc$Type* $tmp1379 = *$tmp1378;
*(&local45) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
org$frostlang$frostc$Type* $tmp1380 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
*(&local45) = $tmp1379;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:382
org$frostlang$frostc$pass$Analyzer$State* $tmp1381 = *(&local0);
frost$collections$HashMap** $tmp1382 = &$tmp1381->statements;
frost$collections$HashMap* $tmp1383 = *$tmp1382;
org$frostlang$frostc$IR$Statement$ID $tmp1384 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1385;
$tmp1385 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1385->value = $tmp1384;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1386 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp1387 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1388 = *$tmp1387;
org$frostlang$frostc$Type* $tmp1389 = *(&local45);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Analyzer.frost:382:74
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:284
org$frostlang$frostc$Type** $tmp1390 = &$tmp1388->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp1391 = *$tmp1390;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1392 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1393 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1392, $tmp1393);
frost$collections$Array$add$frost$collections$Array$T($tmp1392, ((frost$core$Object*) $tmp1389));
org$frostlang$frostc$Type* $tmp1394 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1391, ((frost$collections$ListView*) $tmp1392));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1386, $tmp1394);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1383, ((frost$collections$Key*) $tmp1385), ((frost$core$Object*) $tmp1386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1385)));
org$frostlang$frostc$Type* $tmp1395 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
*(&local45) = ((org$frostlang$frostc$Type*) NULL);
goto block15;
block116:;
frost$core$Int64 $tmp1396 = (frost$core$Int64) {19};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:384:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1397 = $tmp823.value;
int64_t $tmp1398 = $tmp1396.value;
bool $tmp1399 = $tmp1397 == $tmp1398;
frost$core$Bit $tmp1400 = frost$core$Bit$init$builtin_bit($tmp1399);
bool $tmp1401 = $tmp1400.value;
if ($tmp1401) goto block119; else goto block120;
block119:;
org$frostlang$frostc$Position* $tmp1402 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 0);
org$frostlang$frostc$Position $tmp1403 = *$tmp1402;
org$frostlang$frostc$IR$Value** $tmp1404 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1405 = *$tmp1404;
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
org$frostlang$frostc$IR$Value* $tmp1406 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
*(&local46) = $tmp1405;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:385
org$frostlang$frostc$IR$Value* $tmp1407 = *(&local46);
org$frostlang$frostc$pass$Analyzer$State* $tmp1408 = *(&local0);
$fn1410 $tmp1409 = ($fn1410) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1411 = $tmp1409(param0, $tmp1407, $tmp1408);
*(&local47) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1412 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
*(&local47) = $tmp1411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:386
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1413 = *(&local47);
org$frostlang$frostc$Type** $tmp1414 = &$tmp1413->type;
org$frostlang$frostc$Type* $tmp1415 = *$tmp1414;
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:386:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:389
frost$core$String** $tmp1416 = &((org$frostlang$frostc$Symbol*) $tmp1415)->name;
frost$core$String* $tmp1417 = *$tmp1416;
frost$core$Bit $tmp1418 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1417, &$s1419);
bool $tmp1420 = $tmp1418.value;
if ($tmp1420) goto block123; else goto block124;
block124:;
frost$core$Int64 $tmp1421 = (frost$core$Int64) {386};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1422, $tmp1421);
abort(); // unreachable
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:387
org$frostlang$frostc$pass$Analyzer$State* $tmp1423 = *(&local0);
frost$collections$HashMap** $tmp1424 = &$tmp1423->statements;
frost$collections$HashMap* $tmp1425 = *$tmp1424;
org$frostlang$frostc$IR$Statement$ID $tmp1426 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1427;
$tmp1427 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1427->value = $tmp1426;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1428 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1429 = *(&local47);
org$frostlang$frostc$Type** $tmp1430 = &$tmp1429->type;
org$frostlang$frostc$Type* $tmp1431 = *$tmp1430;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:387:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1432 = &$tmp1431->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1433 = *$tmp1432;
frost$core$Bit $tmp1434 = frost$core$Bit$init$builtin_bit($tmp1433 != NULL);
bool $tmp1435 = $tmp1434.value;
if ($tmp1435) goto block126; else goto block127;
block127:;
frost$core$Int64 $tmp1436 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1437, $tmp1436);
abort(); // unreachable
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1438 = &$tmp1431->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1439 = *$tmp1438;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
frost$core$Int64 $tmp1440 = (frost$core$Int64) {1};
frost$core$Object* $tmp1441 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1439, $tmp1440);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1428, ((org$frostlang$frostc$Type*) $tmp1441));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1425, ((frost$collections$Key*) $tmp1427), ((frost$core$Object*) $tmp1428));
frost$core$Frost$unref$frost$core$Object$Q($tmp1441);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1427)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1442 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
*(&local47) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp1443 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block120:;
frost$core$Int64 $tmp1444 = (frost$core$Int64) {20};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:389:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1445 = $tmp823.value;
int64_t $tmp1446 = $tmp1444.value;
bool $tmp1447 = $tmp1445 == $tmp1446;
frost$core$Bit $tmp1448 = frost$core$Bit$init$builtin_bit($tmp1447);
bool $tmp1449 = $tmp1448.value;
if ($tmp1449) goto block128; else goto block129;
block128:;
org$frostlang$frostc$Position* $tmp1450 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 0);
org$frostlang$frostc$Position $tmp1451 = *$tmp1450;
org$frostlang$frostc$IR$Value** $tmp1452 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1453 = *$tmp1452;
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
org$frostlang$frostc$IR$Value* $tmp1454 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
*(&local48) = $tmp1453;
org$frostlang$frostc$IR$Value** $tmp1455 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1456 = *$tmp1455;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:390
org$frostlang$frostc$IR$Value* $tmp1457 = *(&local48);
org$frostlang$frostc$pass$Analyzer$State* $tmp1458 = *(&local0);
$fn1460 $tmp1459 = ($fn1460) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1461 = $tmp1459(param0, $tmp1457, $tmp1458);
*(&local49) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1462 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
*(&local49) = $tmp1461;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:391
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1463 = *(&local49);
org$frostlang$frostc$Type** $tmp1464 = &$tmp1463->type;
org$frostlang$frostc$Type* $tmp1465 = *$tmp1464;
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:391:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:389
frost$core$String** $tmp1466 = &((org$frostlang$frostc$Symbol*) $tmp1465)->name;
frost$core$String* $tmp1467 = *$tmp1466;
frost$core$Bit $tmp1468 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1467, &$s1469);
bool $tmp1470 = $tmp1468.value;
if ($tmp1470) goto block132; else goto block133;
block133:;
frost$core$Int64 $tmp1471 = (frost$core$Int64) {391};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1472, $tmp1471);
abort(); // unreachable
block132:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:392
org$frostlang$frostc$pass$Analyzer$State* $tmp1473 = *(&local0);
frost$collections$HashMap** $tmp1474 = &$tmp1473->statements;
frost$collections$HashMap* $tmp1475 = *$tmp1474;
org$frostlang$frostc$IR$Statement$ID $tmp1476 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1477;
$tmp1477 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1477->value = $tmp1476;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1478 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1479 = *(&local49);
org$frostlang$frostc$Type** $tmp1480 = &$tmp1479->type;
org$frostlang$frostc$Type* $tmp1481 = *$tmp1480;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:392:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1482 = &$tmp1481->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1483 = *$tmp1482;
frost$core$Bit $tmp1484 = frost$core$Bit$init$builtin_bit($tmp1483 != NULL);
bool $tmp1485 = $tmp1484.value;
if ($tmp1485) goto block135; else goto block136;
block136:;
frost$core$Int64 $tmp1486 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1487, $tmp1486);
abort(); // unreachable
block135:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1488 = &$tmp1481->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1489 = *$tmp1488;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
frost$core$Int64 $tmp1490 = (frost$core$Int64) {1};
frost$core$Object* $tmp1491 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1489, $tmp1490);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1478, ((org$frostlang$frostc$Type*) $tmp1491));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1475, ((frost$collections$Key*) $tmp1477), ((frost$core$Object*) $tmp1478));
frost$core$Frost$unref$frost$core$Object$Q($tmp1491);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1477)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1492 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
*(&local49) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp1493 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block129:;
frost$core$Int64 $tmp1494 = (frost$core$Int64) {21};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:394:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1495 = $tmp823.value;
int64_t $tmp1496 = $tmp1494.value;
bool $tmp1497 = $tmp1495 == $tmp1496;
frost$core$Bit $tmp1498 = frost$core$Bit$init$builtin_bit($tmp1497);
bool $tmp1499 = $tmp1498.value;
if ($tmp1499) goto block137; else goto block138;
block137:;
org$frostlang$frostc$Position* $tmp1500 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 0);
org$frostlang$frostc$Position $tmp1501 = *$tmp1500;
org$frostlang$frostc$IR$Value** $tmp1502 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1503 = *$tmp1502;
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
org$frostlang$frostc$IR$Value* $tmp1504 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
*(&local50) = $tmp1503;
org$frostlang$frostc$IR$Value** $tmp1505 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1506 = *$tmp1505;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:395
org$frostlang$frostc$pass$Analyzer$State* $tmp1507 = *(&local0);
frost$collections$HashMap** $tmp1508 = &$tmp1507->statements;
frost$collections$HashMap* $tmp1509 = *$tmp1508;
org$frostlang$frostc$IR$Statement$ID $tmp1510 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1511;
$tmp1511 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1511->value = $tmp1510;
org$frostlang$frostc$IR$Value* $tmp1512 = *(&local50);
org$frostlang$frostc$pass$Analyzer$State* $tmp1513 = *(&local0);
$fn1515 $tmp1514 = ($fn1515) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1516 = $tmp1514(param0, $tmp1512, $tmp1513);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1509, ((frost$collections$Key*) $tmp1511), ((frost$core$Object*) $tmp1516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1511)));
org$frostlang$frostc$IR$Value* $tmp1517 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block138:;
frost$core$Int64 $tmp1518 = (frost$core$Int64) {22};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:397:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1519 = $tmp823.value;
int64_t $tmp1520 = $tmp1518.value;
bool $tmp1521 = $tmp1519 == $tmp1520;
frost$core$Bit $tmp1522 = frost$core$Bit$init$builtin_bit($tmp1521);
bool $tmp1523 = $tmp1522.value;
if ($tmp1523) goto block140; else goto block141;
block140:;
org$frostlang$frostc$Position* $tmp1524 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 0);
org$frostlang$frostc$Position $tmp1525 = *$tmp1524;
org$frostlang$frostc$IR$Value** $tmp1526 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1527 = *$tmp1526;
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
org$frostlang$frostc$IR$Value* $tmp1528 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1528));
*(&local51) = $tmp1527;
org$frostlang$frostc$IR$Value** $tmp1529 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1530 = *$tmp1529;
org$frostlang$frostc$IR$Value** $tmp1531 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 40);
org$frostlang$frostc$IR$Value* $tmp1532 = *$tmp1531;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:398
org$frostlang$frostc$pass$Analyzer$State* $tmp1533 = *(&local0);
frost$collections$HashMap** $tmp1534 = &$tmp1533->statements;
frost$collections$HashMap* $tmp1535 = *$tmp1534;
org$frostlang$frostc$IR$Statement$ID $tmp1536 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1537;
$tmp1537 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1537->value = $tmp1536;
org$frostlang$frostc$IR$Value* $tmp1538 = *(&local51);
org$frostlang$frostc$pass$Analyzer$State* $tmp1539 = *(&local0);
$fn1541 $tmp1540 = ($fn1541) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1542 = $tmp1540(param0, $tmp1538, $tmp1539);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1535, ((frost$collections$Key*) $tmp1537), ((frost$core$Object*) $tmp1542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1537)));
org$frostlang$frostc$IR$Value* $tmp1543 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block141:;
frost$core$Int64 $tmp1544 = (frost$core$Int64) {26};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:400:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1545 = $tmp823.value;
int64_t $tmp1546 = $tmp1544.value;
bool $tmp1547 = $tmp1545 == $tmp1546;
frost$core$Bit $tmp1548 = frost$core$Bit$init$builtin_bit($tmp1547);
bool $tmp1549 = $tmp1548.value;
if ($tmp1549) goto block143; else goto block144;
block143:;
org$frostlang$frostc$Position* $tmp1550 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 0);
org$frostlang$frostc$Position $tmp1551 = *$tmp1550;
org$frostlang$frostc$MethodDecl** $tmp1552 = (org$frostlang$frostc$MethodDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 24);
org$frostlang$frostc$MethodDecl* $tmp1553 = *$tmp1552;
*(&local52) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1553));
org$frostlang$frostc$MethodDecl* $tmp1554 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
*(&local52) = $tmp1553;
org$frostlang$frostc$FixedArray** $tmp1555 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1556 = *$tmp1555;
*(&local53) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
org$frostlang$frostc$FixedArray* $tmp1557 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
*(&local53) = $tmp1556;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:401
org$frostlang$frostc$MethodDecl* $tmp1558 = *(&local52);
org$frostlang$frostc$Type** $tmp1559 = &$tmp1558->returnType;
org$frostlang$frostc$Type* $tmp1560 = *$tmp1559;
org$frostlang$frostc$Compiler** $tmp1561 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1562 = *$tmp1561;
org$frostlang$frostc$Type** $tmp1563 = &$tmp1562->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1564 = *$tmp1563;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:401:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1565 = &((org$frostlang$frostc$Symbol*) $tmp1560)->name;
frost$core$String* $tmp1566 = *$tmp1565;
frost$core$String** $tmp1567 = &((org$frostlang$frostc$Symbol*) $tmp1564)->name;
frost$core$String* $tmp1568 = *$tmp1567;
frost$core$Bit $tmp1569 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1566, $tmp1568);
bool $tmp1570 = $tmp1569.value;
if ($tmp1570) goto block150; else goto block151;
block150:;
org$frostlang$frostc$Type$Kind* $tmp1571 = &$tmp1560->typeKind;
org$frostlang$frostc$Type$Kind $tmp1572 = *$tmp1571;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1573;
$tmp1573 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1573->value = $tmp1572;
org$frostlang$frostc$Type$Kind* $tmp1574 = &$tmp1564->typeKind;
org$frostlang$frostc$Type$Kind $tmp1575 = *$tmp1574;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1576;
$tmp1576 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1576->value = $tmp1575;
ITable* $tmp1577 = ((frost$core$Equatable*) $tmp1573)->$class->itable;
while ($tmp1577->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1577 = $tmp1577->next;
}
$fn1579 $tmp1578 = $tmp1577->methods[0];
frost$core$Bit $tmp1580 = $tmp1578(((frost$core$Equatable*) $tmp1573), ((frost$core$Equatable*) $tmp1576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1576)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1573)));
*(&local54) = $tmp1580;
goto block152;
block151:;
*(&local54) = $tmp1569;
goto block152;
block152:;
frost$core$Bit $tmp1581 = *(&local54);
bool $tmp1582 = $tmp1581.value;
if ($tmp1582) goto block146; else goto block148;
block146:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:402
org$frostlang$frostc$pass$Analyzer$State* $tmp1583 = *(&local0);
frost$collections$HashMap** $tmp1584 = &$tmp1583->statements;
frost$collections$HashMap* $tmp1585 = *$tmp1584;
org$frostlang$frostc$IR$Statement$ID $tmp1586 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1587;
$tmp1587 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1587->value = $tmp1586;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1588 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$MethodDecl* $tmp1589 = *(&local52);
org$frostlang$frostc$Type** $tmp1590 = &$tmp1589->returnType;
org$frostlang$frostc$Type* $tmp1591 = *$tmp1590;
org$frostlang$frostc$FixedArray* $tmp1592 = *(&local53);
frost$core$Int64 $tmp1593 = (frost$core$Int64) {0};
frost$core$Object* $tmp1594 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1592, $tmp1593);
org$frostlang$frostc$pass$Analyzer$State* $tmp1595 = *(&local0);
$fn1597 $tmp1596 = ($fn1597) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1598 = $tmp1596(param0, ((org$frostlang$frostc$IR$Value*) $tmp1594), $tmp1595);
frost$collections$ListView** $tmp1599 = &$tmp1598->nonNullImplications;
frost$collections$ListView* $tmp1600 = *$tmp1599;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp1588, $tmp1591, $tmp1600);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1585, ((frost$collections$Key*) $tmp1587), ((frost$core$Object*) $tmp1588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
frost$core$Frost$unref$frost$core$Object$Q($tmp1594);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1587)));
goto block147;
block148:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:406
org$frostlang$frostc$pass$Analyzer$State* $tmp1601 = *(&local0);
frost$collections$HashMap** $tmp1602 = &$tmp1601->statements;
frost$collections$HashMap* $tmp1603 = *$tmp1602;
org$frostlang$frostc$IR$Statement$ID $tmp1604 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1605;
$tmp1605 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1605->value = $tmp1604;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1606 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$MethodDecl* $tmp1607 = *(&local52);
org$frostlang$frostc$Type** $tmp1608 = &$tmp1607->returnType;
org$frostlang$frostc$Type* $tmp1609 = *$tmp1608;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1606, $tmp1609);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1603, ((frost$collections$Key*) $tmp1605), ((frost$core$Object*) $tmp1606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1605)));
goto block147;
block147:;
org$frostlang$frostc$FixedArray* $tmp1610 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1610));
*(&local53) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1611 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
*(&local52) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block15;
block144:;
frost$core$Int64 $tmp1612 = (frost$core$Int64) {27};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:409:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1613 = $tmp823.value;
int64_t $tmp1614 = $tmp1612.value;
bool $tmp1615 = $tmp1613 == $tmp1614;
frost$core$Bit $tmp1616 = frost$core$Bit$init$builtin_bit($tmp1615);
bool $tmp1617 = $tmp1616.value;
if ($tmp1617) goto block153; else goto block15;
block153:;
org$frostlang$frostc$Position* $tmp1618 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 0);
org$frostlang$frostc$Position $tmp1619 = *$tmp1618;
org$frostlang$frostc$IR$Value** $tmp1620 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1621 = *$tmp1620;
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
org$frostlang$frostc$IR$Value* $tmp1622 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1622));
*(&local55) = $tmp1621;
org$frostlang$frostc$IR$Value** $tmp1623 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp821)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1624 = *$tmp1623;
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
org$frostlang$frostc$IR$Value* $tmp1625 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
*(&local56) = $tmp1624;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:410
org$frostlang$frostc$IR$Value* $tmp1626 = *(&local56);
frost$core$Int64* $tmp1627 = &$tmp1626->$rawValue;
frost$core$Int64 $tmp1628 = *$tmp1627;
frost$core$Int64 $tmp1629 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:411:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1630 = $tmp1628.value;
int64_t $tmp1631 = $tmp1629.value;
bool $tmp1632 = $tmp1630 == $tmp1631;
frost$core$Bit $tmp1633 = frost$core$Bit$init$builtin_bit($tmp1632);
bool $tmp1634 = $tmp1633.value;
if ($tmp1634) goto block156; else goto block155;
block156:;
frost$core$Int64* $tmp1635 = (frost$core$Int64*) ($tmp1626->$data + 0);
frost$core$Int64 $tmp1636 = *$tmp1635;
*(&local57) = $tmp1636;
org$frostlang$frostc$Type** $tmp1637 = (org$frostlang$frostc$Type**) ($tmp1626->$data + 8);
org$frostlang$frostc$Type* $tmp1638 = *$tmp1637;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:412
org$frostlang$frostc$pass$Analyzer$State* $tmp1639 = *(&local0);
frost$collections$Array** $tmp1640 = &$tmp1639->locals;
frost$collections$Array* $tmp1641 = *$tmp1640;
frost$core$Int64 $tmp1642 = *(&local57);
org$frostlang$frostc$IR$Value* $tmp1643 = *(&local55);
org$frostlang$frostc$pass$Analyzer$State* $tmp1644 = *(&local0);
$fn1646 $tmp1645 = ($fn1646) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1647 = $tmp1645(param0, $tmp1643, $tmp1644);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int64, value:frost.collections.Array.T) from Analyzer.frost:412:42
frost$core$Int64 $tmp1648 = (frost$core$Int64) {0};
int64_t $tmp1649 = $tmp1642.value;
int64_t $tmp1650 = $tmp1648.value;
bool $tmp1651 = $tmp1649 >= $tmp1650;
frost$core$Bit $tmp1652 = (frost$core$Bit) {$tmp1651};
bool $tmp1653 = $tmp1652.value;
if ($tmp1653) goto block161; else goto block160;
block161:;
ITable* $tmp1654 = ((frost$collections$CollectionView*) $tmp1641)->$class->itable;
while ($tmp1654->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1654 = $tmp1654->next;
}
$fn1656 $tmp1655 = $tmp1654->methods[0];
frost$core$Int64 $tmp1657 = $tmp1655(((frost$collections$CollectionView*) $tmp1641));
int64_t $tmp1658 = $tmp1642.value;
int64_t $tmp1659 = $tmp1657.value;
bool $tmp1660 = $tmp1658 < $tmp1659;
frost$core$Bit $tmp1661 = (frost$core$Bit) {$tmp1660};
bool $tmp1662 = $tmp1661.value;
if ($tmp1662) goto block159; else goto block160;
block160:;
frost$core$Int64 $tmp1663 = (frost$core$Int64) {27};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1664, $tmp1663, &$s1665);
abort(); // unreachable
block159:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:27
frost$core$Object*** $tmp1666 = &$tmp1641->data;
frost$core$Object** $tmp1667 = *$tmp1666;
int64_t $tmp1668 = $tmp1642.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
frost$core$Object* $tmp1669 = $tmp1667[$tmp1668];
frost$core$Frost$unref$frost$core$Object$Q($tmp1669);
$tmp1667[$tmp1668] = ((frost$core$Object*) $tmp1647);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
goto block155;
block155:;
org$frostlang$frostc$IR$Value* $tmp1670 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1671 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block15:;
frost$core$Frost$unref$frost$core$Object$Q($tmp821);
frost$core$Int64 $tmp1672 = *(&local2);
int64_t $tmp1673 = $tmp754.value;
int64_t $tmp1674 = $tmp1672.value;
int64_t $tmp1675 = $tmp1673 - $tmp1674;
frost$core$Int64 $tmp1676 = (frost$core$Int64) {$tmp1675};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1677 = $tmp1676.value;
frost$core$UInt64 $tmp1678 = (frost$core$UInt64) {((uint64_t) $tmp1677)};
if ($tmp756) goto block164; else goto block165;
block164:;
uint64_t $tmp1679 = $tmp1678.value;
uint64_t $tmp1680 = $tmp759.value;
bool $tmp1681 = $tmp1679 >= $tmp1680;
frost$core$Bit $tmp1682 = (frost$core$Bit) {$tmp1681};
bool $tmp1683 = $tmp1682.value;
if ($tmp1683) goto block162; else goto block3;
block165:;
uint64_t $tmp1684 = $tmp1678.value;
uint64_t $tmp1685 = $tmp759.value;
bool $tmp1686 = $tmp1684 > $tmp1685;
frost$core$Bit $tmp1687 = (frost$core$Bit) {$tmp1686};
bool $tmp1688 = $tmp1687.value;
if ($tmp1688) goto block162; else goto block3;
block162:;
int64_t $tmp1689 = $tmp1672.value;
int64_t $tmp1690 = $tmp757.value;
int64_t $tmp1691 = $tmp1689 + $tmp1690;
frost$core$Int64 $tmp1692 = (frost$core$Int64) {$tmp1691};
*(&local2) = $tmp1692;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:418
org$frostlang$frostc$IR$Block* $tmp1693 = *(&local1);
frost$core$Int64 $tmp1694 = param1.exit;
org$frostlang$frostc$pass$Analyzer$State* $tmp1695 = *(&local0);
$fn1697 $tmp1696 = ($fn1697) param0->$class->vtable[5];
$tmp1696(param0, $tmp1693, $tmp1694, $tmp1695);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:419
org$frostlang$frostc$pass$Analyzer$State* $tmp1698 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1698));
org$frostlang$frostc$IR$Block* $tmp1699 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1699));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
org$frostlang$frostc$pass$Analyzer$State* $tmp1700 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
return $tmp1698;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:423
$fn1702 $tmp1701 = ($fn1702) param0->$class->vtable[4];
org$frostlang$frostc$IR$Block* $tmp1703 = $tmp1701(param0, param1);
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1703));
org$frostlang$frostc$IR$Block* $tmp1704 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
*(&local0) = $tmp1703;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1703));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:424
org$frostlang$frostc$IR$Block* $tmp1705 = *(&local0);
frost$collections$Array** $tmp1706 = &$tmp1705->statements;
frost$collections$Array* $tmp1707 = *$tmp1706;
org$frostlang$frostc$IR$Block* $tmp1708 = *(&local0);
frost$collections$Array** $tmp1709 = &$tmp1708->statements;
frost$collections$Array* $tmp1710 = *$tmp1709;
ITable* $tmp1711 = ((frost$collections$CollectionView*) $tmp1710)->$class->itable;
while ($tmp1711->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1711 = $tmp1711->next;
}
$fn1713 $tmp1712 = $tmp1711->methods[0];
frost$core$Int64 $tmp1714 = $tmp1712(((frost$collections$CollectionView*) $tmp1710));
frost$core$Int64 $tmp1715 = (frost$core$Int64) {1};
int64_t $tmp1716 = $tmp1714.value;
int64_t $tmp1717 = $tmp1715.value;
int64_t $tmp1718 = $tmp1716 - $tmp1717;
frost$core$Int64 $tmp1719 = (frost$core$Int64) {$tmp1718};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:424:31
frost$core$Int64 $tmp1720 = (frost$core$Int64) {0};
int64_t $tmp1721 = $tmp1719.value;
int64_t $tmp1722 = $tmp1720.value;
bool $tmp1723 = $tmp1721 >= $tmp1722;
frost$core$Bit $tmp1724 = (frost$core$Bit) {$tmp1723};
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block4; else goto block3;
block4:;
ITable* $tmp1726 = ((frost$collections$CollectionView*) $tmp1707)->$class->itable;
while ($tmp1726->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1726 = $tmp1726->next;
}
$fn1728 $tmp1727 = $tmp1726->methods[0];
frost$core$Int64 $tmp1729 = $tmp1727(((frost$collections$CollectionView*) $tmp1707));
int64_t $tmp1730 = $tmp1719.value;
int64_t $tmp1731 = $tmp1729.value;
bool $tmp1732 = $tmp1730 < $tmp1731;
frost$core$Bit $tmp1733 = (frost$core$Bit) {$tmp1732};
bool $tmp1734 = $tmp1733.value;
if ($tmp1734) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1735 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1736, $tmp1735, &$s1737);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp1738 = &$tmp1707->data;
frost$core$Object** $tmp1739 = *$tmp1738;
int64_t $tmp1740 = $tmp1719.value;
frost$core$Object* $tmp1741 = $tmp1739[$tmp1740];
frost$core$Frost$ref$frost$core$Object$Q($tmp1741);
frost$core$Int64* $tmp1742 = &((org$frostlang$frostc$IR$Statement*) $tmp1741)->$rawValue;
frost$core$Int64 $tmp1743 = *$tmp1742;
frost$core$Int64 $tmp1744 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:425:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1745 = $tmp1743.value;
int64_t $tmp1746 = $tmp1744.value;
bool $tmp1747 = $tmp1745 == $tmp1746;
frost$core$Bit $tmp1748 = frost$core$Bit$init$builtin_bit($tmp1747);
bool $tmp1749 = $tmp1748.value;
if ($tmp1749) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp1750 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1741)->$data + 0);
org$frostlang$frostc$Position $tmp1751 = *$tmp1750;
org$frostlang$frostc$IR$Block$ID* $tmp1752 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1741)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp1753 = *$tmp1752;
*(&local1) = $tmp1753;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:426
org$frostlang$frostc$IR$Block* $tmp1754 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1755 = &$tmp1754->id;
org$frostlang$frostc$IR$Block$ID $tmp1756 = *$tmp1755;
frost$core$Int64 $tmp1757 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int64):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:426:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:80
org$frostlang$frostc$IR$Block$ID* $tmp1758 = &(&local3)->id;
*$tmp1758 = $tmp1756;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
frost$core$Int64* $tmp1759 = &(&local3)->exit;
*$tmp1759 = $tmp1757;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1760 = *(&local3);
*(&local2) = $tmp1760;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1761 = *(&local2);
org$frostlang$frostc$IR$Block$ID $tmp1762 = *(&local1);
$fn1764 $tmp1763 = ($fn1764) param0->$class->vtable[3];
$tmp1763(param0, $tmp1761, $tmp1762);
goto block5;
block7:;
frost$core$Int64 $tmp1765 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:428:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1766 = $tmp1743.value;
int64_t $tmp1767 = $tmp1765.value;
bool $tmp1768 = $tmp1766 == $tmp1767;
frost$core$Bit $tmp1769 = frost$core$Bit$init$builtin_bit($tmp1768);
bool $tmp1770 = $tmp1769.value;
if ($tmp1770) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp1771 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1741)->$data + 0);
org$frostlang$frostc$Position $tmp1772 = *$tmp1771;
org$frostlang$frostc$IR$Value** $tmp1773 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1741)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1774 = *$tmp1773;
org$frostlang$frostc$IR$Block$ID* $tmp1775 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1741)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp1776 = *$tmp1775;
*(&local4) = $tmp1776;
org$frostlang$frostc$IR$Block$ID* $tmp1777 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1741)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp1778 = *$tmp1777;
*(&local5) = $tmp1778;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:429
org$frostlang$frostc$IR$Block* $tmp1779 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1780 = &$tmp1779->id;
org$frostlang$frostc$IR$Block$ID $tmp1781 = *$tmp1780;
frost$core$Int64 $tmp1782 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int64):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:429:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:80
org$frostlang$frostc$IR$Block$ID* $tmp1783 = &(&local7)->id;
*$tmp1783 = $tmp1781;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
frost$core$Int64* $tmp1784 = &(&local7)->exit;
*$tmp1784 = $tmp1782;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1785 = *(&local7);
*(&local6) = $tmp1785;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1786 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp1787 = *(&local4);
$fn1789 $tmp1788 = ($fn1789) param0->$class->vtable[3];
$tmp1788(param0, $tmp1786, $tmp1787);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:430
org$frostlang$frostc$IR$Block* $tmp1790 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1791 = &$tmp1790->id;
org$frostlang$frostc$IR$Block$ID $tmp1792 = *$tmp1791;
frost$core$Int64 $tmp1793 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int64):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:430:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:80
org$frostlang$frostc$IR$Block$ID* $tmp1794 = &(&local9)->id;
*$tmp1794 = $tmp1792;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
frost$core$Int64* $tmp1795 = &(&local9)->exit;
*$tmp1795 = $tmp1793;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1796 = *(&local9);
*(&local8) = $tmp1796;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1797 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp1798 = *(&local5);
$fn1800 $tmp1799 = ($fn1800) param0->$class->vtable[3];
$tmp1799(param0, $tmp1797, $tmp1798);
goto block5;
block11:;
frost$core$Int64 $tmp1801 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:432:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1802 = $tmp1743.value;
int64_t $tmp1803 = $tmp1801.value;
bool $tmp1804 = $tmp1802 == $tmp1803;
frost$core$Bit $tmp1805 = frost$core$Bit$init$builtin_bit($tmp1804);
bool $tmp1806 = $tmp1805.value;
if ($tmp1806) goto block15; else goto block16;
block15:;
goto block5;
block16:;
frost$core$Int64 $tmp1807 = (frost$core$Int64) {25};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:434:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1808 = $tmp1743.value;
int64_t $tmp1809 = $tmp1807.value;
bool $tmp1810 = $tmp1808 == $tmp1809;
frost$core$Bit $tmp1811 = frost$core$Bit$init$builtin_bit($tmp1810);
bool $tmp1812 = $tmp1811.value;
if ($tmp1812) goto block18; else goto block19;
block18:;
goto block5;
block19:;
frost$core$Int64 $tmp1813 = (frost$core$Int64) {28};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:436:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1814 = $tmp1743.value;
int64_t $tmp1815 = $tmp1813.value;
bool $tmp1816 = $tmp1814 == $tmp1815;
frost$core$Bit $tmp1817 = frost$core$Bit$init$builtin_bit($tmp1816);
bool $tmp1818 = $tmp1817.value;
if ($tmp1818) goto block21; else goto block22;
block21:;
goto block5;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:439
frost$core$Int64 $tmp1819 = (frost$core$Int64) {439};
org$frostlang$frostc$IR$Block* $tmp1820 = *(&local0);
frost$collections$Array** $tmp1821 = &$tmp1820->statements;
frost$collections$Array* $tmp1822 = *$tmp1821;
org$frostlang$frostc$IR$Block* $tmp1823 = *(&local0);
frost$collections$Array** $tmp1824 = &$tmp1823->statements;
frost$collections$Array* $tmp1825 = *$tmp1824;
ITable* $tmp1826 = ((frost$collections$CollectionView*) $tmp1825)->$class->itable;
while ($tmp1826->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1826 = $tmp1826->next;
}
$fn1828 $tmp1827 = $tmp1826->methods[0];
frost$core$Int64 $tmp1829 = $tmp1827(((frost$collections$CollectionView*) $tmp1825));
frost$core$Int64 $tmp1830 = (frost$core$Int64) {1};
int64_t $tmp1831 = $tmp1829.value;
int64_t $tmp1832 = $tmp1830.value;
int64_t $tmp1833 = $tmp1831 - $tmp1832;
frost$core$Int64 $tmp1834 = (frost$core$Int64) {$tmp1833};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:440:41
frost$core$Int64 $tmp1835 = (frost$core$Int64) {0};
int64_t $tmp1836 = $tmp1834.value;
int64_t $tmp1837 = $tmp1835.value;
bool $tmp1838 = $tmp1836 >= $tmp1837;
frost$core$Bit $tmp1839 = (frost$core$Bit) {$tmp1838};
bool $tmp1840 = $tmp1839.value;
if ($tmp1840) goto block27; else goto block26;
block27:;
ITable* $tmp1841 = ((frost$collections$CollectionView*) $tmp1822)->$class->itable;
while ($tmp1841->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1841 = $tmp1841->next;
}
$fn1843 $tmp1842 = $tmp1841->methods[0];
frost$core$Int64 $tmp1844 = $tmp1842(((frost$collections$CollectionView*) $tmp1822));
int64_t $tmp1845 = $tmp1834.value;
int64_t $tmp1846 = $tmp1844.value;
bool $tmp1847 = $tmp1845 < $tmp1846;
frost$core$Bit $tmp1848 = (frost$core$Bit) {$tmp1847};
bool $tmp1849 = $tmp1848.value;
if ($tmp1849) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp1850 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1851, $tmp1850, &$s1852);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp1853 = &$tmp1822->data;
frost$core$Object** $tmp1854 = *$tmp1853;
int64_t $tmp1855 = $tmp1834.value;
frost$core$Object* $tmp1856 = $tmp1854[$tmp1855];
frost$core$Frost$ref$frost$core$Object$Q($tmp1856);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:439:70
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1858 $tmp1857 = ($fn1858) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1856))->$class->vtable[0];
frost$core$String* $tmp1859 = $tmp1857(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1856)));
frost$core$String* $tmp1860 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1861, $tmp1859);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1862, $tmp1819, $tmp1860);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
frost$core$Frost$unref$frost$core$Object$Q($tmp1856);
abort(); // unreachable
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1741);
org$frostlang$frostc$IR$Block* $tmp1863 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$dump(org$frostlang$frostc$pass$Analyzer* param0) {

frost$core$Int64 local0;
org$frostlang$frostc$IR$Block* local1 = NULL;
frost$core$Int64 local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:446
org$frostlang$frostc$MethodDecl** $tmp1864 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp1865 = *$tmp1864;
frost$core$String* $tmp1866 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp1865);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Analyzer.frost:446:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp1866);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
// begin inline call to method frost.io.Console.printLine() from Console.stub:26:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:38
frost$io$Console$print$frost$core$String(&$s1867);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:447
frost$core$Int64 $tmp1868 = (frost$core$Int64) {0};
org$frostlang$frostc$IR** $tmp1869 = &param0->ir;
org$frostlang$frostc$IR* $tmp1870 = *$tmp1869;
frost$collections$Array** $tmp1871 = &$tmp1870->locals;
frost$collections$Array* $tmp1872 = *$tmp1871;
ITable* $tmp1873 = ((frost$collections$CollectionView*) $tmp1872)->$class->itable;
while ($tmp1873->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1873 = $tmp1873->next;
}
$fn1875 $tmp1874 = $tmp1873->methods[0];
frost$core$Int64 $tmp1876 = $tmp1874(((frost$collections$CollectionView*) $tmp1872));
frost$core$Bit $tmp1877 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1878 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1868, $tmp1876, $tmp1877);
frost$core$Int64 $tmp1879 = $tmp1878.min;
*(&local0) = $tmp1879;
frost$core$Int64 $tmp1880 = $tmp1878.max;
frost$core$Bit $tmp1881 = $tmp1878.inclusive;
bool $tmp1882 = $tmp1881.value;
frost$core$Int64 $tmp1883 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1884 = $tmp1883.value;
frost$core$UInt64 $tmp1885 = (frost$core$UInt64) {((uint64_t) $tmp1884)};
if ($tmp1882) goto block7; else goto block8;
block7:;
int64_t $tmp1886 = $tmp1879.value;
int64_t $tmp1887 = $tmp1880.value;
bool $tmp1888 = $tmp1886 <= $tmp1887;
frost$core$Bit $tmp1889 = (frost$core$Bit) {$tmp1888};
bool $tmp1890 = $tmp1889.value;
if ($tmp1890) goto block4; else goto block5;
block8:;
int64_t $tmp1891 = $tmp1879.value;
int64_t $tmp1892 = $tmp1880.value;
bool $tmp1893 = $tmp1891 < $tmp1892;
frost$core$Bit $tmp1894 = (frost$core$Bit) {$tmp1893};
bool $tmp1895 = $tmp1894.value;
if ($tmp1895) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:448
frost$core$Int64 $tmp1896 = *(&local0);
frost$core$Int64$wrapper* $tmp1897;
$tmp1897 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1897->value = $tmp1896;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:448:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1899 $tmp1898 = ($fn1899) ((frost$core$Object*) $tmp1897)->$class->vtable[0];
frost$core$String* $tmp1900 = $tmp1898(((frost$core$Object*) $tmp1897));
frost$core$String* $tmp1901 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1902, $tmp1900);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
frost$core$String* $tmp1903 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1901, &$s1904);
org$frostlang$frostc$IR** $tmp1905 = &param0->ir;
org$frostlang$frostc$IR* $tmp1906 = *$tmp1905;
frost$collections$Array** $tmp1907 = &$tmp1906->locals;
frost$collections$Array* $tmp1908 = *$tmp1907;
frost$core$Int64 $tmp1909 = *(&local0);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:448:54
frost$core$Int64 $tmp1910 = (frost$core$Int64) {0};
int64_t $tmp1911 = $tmp1909.value;
int64_t $tmp1912 = $tmp1910.value;
bool $tmp1913 = $tmp1911 >= $tmp1912;
frost$core$Bit $tmp1914 = (frost$core$Bit) {$tmp1913};
bool $tmp1915 = $tmp1914.value;
if ($tmp1915) goto block13; else goto block12;
block13:;
ITable* $tmp1916 = ((frost$collections$CollectionView*) $tmp1908)->$class->itable;
while ($tmp1916->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1916 = $tmp1916->next;
}
$fn1918 $tmp1917 = $tmp1916->methods[0];
frost$core$Int64 $tmp1919 = $tmp1917(((frost$collections$CollectionView*) $tmp1908));
int64_t $tmp1920 = $tmp1909.value;
int64_t $tmp1921 = $tmp1919.value;
bool $tmp1922 = $tmp1920 < $tmp1921;
frost$core$Bit $tmp1923 = (frost$core$Bit) {$tmp1922};
bool $tmp1924 = $tmp1923.value;
if ($tmp1924) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1925 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1926, $tmp1925, &$s1927);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp1928 = &$tmp1908->data;
frost$core$Object** $tmp1929 = *$tmp1928;
int64_t $tmp1930 = $tmp1909.value;
frost$core$Object* $tmp1931 = $tmp1929[$tmp1930];
frost$core$Frost$ref$frost$core$Object$Q($tmp1931);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:448:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1933 $tmp1932 = ($fn1933) ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1931))->$class->vtable[0];
frost$core$String* $tmp1934 = $tmp1932(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1931)));
frost$core$String* $tmp1935 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1903, $tmp1934);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
frost$core$String* $tmp1936 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1935, &$s1937);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Analyzer.frost:448:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp1936);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
// begin inline call to method frost.io.Console.printLine() from Console.stub:26:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:38
frost$io$Console$print$frost$core$String(&$s1938);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1936));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
frost$core$Frost$unref$frost$core$Object$Q($tmp1931);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
frost$core$Int64 $tmp1939 = *(&local0);
int64_t $tmp1940 = $tmp1880.value;
int64_t $tmp1941 = $tmp1939.value;
int64_t $tmp1942 = $tmp1940 - $tmp1941;
frost$core$Int64 $tmp1943 = (frost$core$Int64) {$tmp1942};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1944 = $tmp1943.value;
frost$core$UInt64 $tmp1945 = (frost$core$UInt64) {((uint64_t) $tmp1944)};
if ($tmp1882) goto block19; else goto block20;
block19:;
uint64_t $tmp1946 = $tmp1945.value;
uint64_t $tmp1947 = $tmp1885.value;
bool $tmp1948 = $tmp1946 >= $tmp1947;
frost$core$Bit $tmp1949 = (frost$core$Bit) {$tmp1948};
bool $tmp1950 = $tmp1949.value;
if ($tmp1950) goto block17; else goto block5;
block20:;
uint64_t $tmp1951 = $tmp1945.value;
uint64_t $tmp1952 = $tmp1885.value;
bool $tmp1953 = $tmp1951 > $tmp1952;
frost$core$Bit $tmp1954 = (frost$core$Bit) {$tmp1953};
bool $tmp1955 = $tmp1954.value;
if ($tmp1955) goto block17; else goto block5;
block17:;
int64_t $tmp1956 = $tmp1939.value;
int64_t $tmp1957 = $tmp1883.value;
int64_t $tmp1958 = $tmp1956 + $tmp1957;
frost$core$Int64 $tmp1959 = (frost$core$Int64) {$tmp1958};
*(&local0) = $tmp1959;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:450
org$frostlang$frostc$IR** $tmp1960 = &param0->ir;
org$frostlang$frostc$IR* $tmp1961 = *$tmp1960;
frost$collections$Array** $tmp1962 = &$tmp1961->blocks;
frost$collections$Array* $tmp1963 = *$tmp1962;
ITable* $tmp1964 = ((frost$collections$Iterable*) $tmp1963)->$class->itable;
while ($tmp1964->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1964 = $tmp1964->next;
}
$fn1966 $tmp1965 = $tmp1964->methods[0];
frost$collections$Iterator* $tmp1967 = $tmp1965(((frost$collections$Iterable*) $tmp1963));
goto block21;
block21:;
ITable* $tmp1968 = $tmp1967->$class->itable;
while ($tmp1968->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1968 = $tmp1968->next;
}
$fn1970 $tmp1969 = $tmp1968->methods[0];
frost$core$Bit $tmp1971 = $tmp1969($tmp1967);
bool $tmp1972 = $tmp1971.value;
if ($tmp1972) goto block23; else goto block22;
block22:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp1973 = $tmp1967->$class->itable;
while ($tmp1973->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1973 = $tmp1973->next;
}
$fn1975 $tmp1974 = $tmp1973->methods[1];
frost$core$Object* $tmp1976 = $tmp1974($tmp1967);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp1976)));
org$frostlang$frostc$IR$Block* $tmp1977 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp1976);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:451
org$frostlang$frostc$IR$Block* $tmp1978 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp1979 = &$tmp1978->id;
org$frostlang$frostc$IR$Block$ID $tmp1980 = *$tmp1979;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1981;
$tmp1981 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1981->value = $tmp1980;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:451:27
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1983 $tmp1982 = ($fn1983) ((frost$core$Object*) $tmp1981)->$class->vtable[0];
frost$core$String* $tmp1984 = $tmp1982(((frost$core$Object*) $tmp1981));
frost$core$String* $tmp1985 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1986, $tmp1984);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
frost$core$String* $tmp1987 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1985, &$s1988);
frost$io$Console$print$frost$core$String($tmp1987);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:452
frost$collections$HashMap** $tmp1989 = &param0->entryStates;
frost$collections$HashMap* $tmp1990 = *$tmp1989;
org$frostlang$frostc$IR$Block* $tmp1991 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp1992 = &$tmp1991->id;
org$frostlang$frostc$IR$Block$ID $tmp1993 = *$tmp1992;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1994;
$tmp1994 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1994->value = $tmp1993;
frost$core$Object* $tmp1995 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1990, ((frost$collections$Key*) $tmp1994));
frost$core$Bit $tmp1996 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$pass$Analyzer$State*) $tmp1995) != NULL);
bool $tmp1997 = $tmp1996.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1995);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1994)));
if ($tmp1997) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:453
frost$collections$HashMap** $tmp1998 = &param0->entryStates;
frost$collections$HashMap* $tmp1999 = *$tmp1998;
org$frostlang$frostc$IR$Block* $tmp2000 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp2001 = &$tmp2000->id;
org$frostlang$frostc$IR$Block$ID $tmp2002 = *$tmp2001;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2003;
$tmp2003 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2003->value = $tmp2002;
frost$core$Object* $tmp2004 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1999, ((frost$collections$Key*) $tmp2003));
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:453:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn2006 $tmp2005 = ($fn2006) ((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp2004))->$class->vtable[0];
frost$core$String* $tmp2007 = $tmp2005(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp2004)));
frost$core$String* $tmp2008 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2009, $tmp2007);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
frost$io$Console$print$frost$core$String($tmp2008);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
frost$core$Frost$unref$frost$core$Object$Q($tmp2004);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2003)));
goto block26;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:455
// begin inline call to method frost.io.Console.printLine() from Analyzer.frost:455:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:38
frost$io$Console$print$frost$core$String(&$s2010);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:456
frost$core$Int64 $tmp2011 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block* $tmp2012 = *(&local1);
frost$collections$Array** $tmp2013 = &$tmp2012->statements;
frost$collections$Array* $tmp2014 = *$tmp2013;
ITable* $tmp2015 = ((frost$collections$CollectionView*) $tmp2014)->$class->itable;
while ($tmp2015->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2015 = $tmp2015->next;
}
$fn2017 $tmp2016 = $tmp2015->methods[0];
frost$core$Int64 $tmp2018 = $tmp2016(((frost$collections$CollectionView*) $tmp2014));
frost$core$Bit $tmp2019 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2020 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2011, $tmp2018, $tmp2019);
frost$core$Int64 $tmp2021 = $tmp2020.min;
*(&local2) = $tmp2021;
frost$core$Int64 $tmp2022 = $tmp2020.max;
frost$core$Bit $tmp2023 = $tmp2020.inclusive;
bool $tmp2024 = $tmp2023.value;
frost$core$Int64 $tmp2025 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2026 = $tmp2025.value;
frost$core$UInt64 $tmp2027 = (frost$core$UInt64) {((uint64_t) $tmp2026)};
if ($tmp2024) goto block33; else goto block34;
block33:;
int64_t $tmp2028 = $tmp2021.value;
int64_t $tmp2029 = $tmp2022.value;
bool $tmp2030 = $tmp2028 <= $tmp2029;
frost$core$Bit $tmp2031 = (frost$core$Bit) {$tmp2030};
bool $tmp2032 = $tmp2031.value;
if ($tmp2032) goto block30; else goto block31;
block34:;
int64_t $tmp2033 = $tmp2021.value;
int64_t $tmp2034 = $tmp2022.value;
bool $tmp2035 = $tmp2033 < $tmp2034;
frost$core$Bit $tmp2036 = (frost$core$Bit) {$tmp2035};
bool $tmp2037 = $tmp2036.value;
if ($tmp2037) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:457
org$frostlang$frostc$IR$Block* $tmp2038 = *(&local1);
frost$collections$Array** $tmp2039 = &$tmp2038->ids;
frost$collections$Array* $tmp2040 = *$tmp2039;
frost$core$Int64 $tmp2041 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:457:36
frost$core$Int64 $tmp2042 = (frost$core$Int64) {0};
int64_t $tmp2043 = $tmp2041.value;
int64_t $tmp2044 = $tmp2042.value;
bool $tmp2045 = $tmp2043 >= $tmp2044;
frost$core$Bit $tmp2046 = (frost$core$Bit) {$tmp2045};
bool $tmp2047 = $tmp2046.value;
if ($tmp2047) goto block38; else goto block37;
block38:;
ITable* $tmp2048 = ((frost$collections$CollectionView*) $tmp2040)->$class->itable;
while ($tmp2048->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2048 = $tmp2048->next;
}
$fn2050 $tmp2049 = $tmp2048->methods[0];
frost$core$Int64 $tmp2051 = $tmp2049(((frost$collections$CollectionView*) $tmp2040));
int64_t $tmp2052 = $tmp2041.value;
int64_t $tmp2053 = $tmp2051.value;
bool $tmp2054 = $tmp2052 < $tmp2053;
frost$core$Bit $tmp2055 = (frost$core$Bit) {$tmp2054};
bool $tmp2056 = $tmp2055.value;
if ($tmp2056) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp2057 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2058, $tmp2057, &$s2059);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2060 = &$tmp2040->data;
frost$core$Object** $tmp2061 = *$tmp2060;
int64_t $tmp2062 = $tmp2041.value;
frost$core$Object* $tmp2063 = $tmp2061[$tmp2062];
frost$core$Frost$ref$frost$core$Object$Q($tmp2063);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2064;
$tmp2064 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2064->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2063)->value;
// begin inline call to method frost.io.Console.print(o:frost.core.Object) from Analyzer.frost:457:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:30
$fn2066 $tmp2065 = ($fn2066) ((frost$core$Object*) $tmp2064)->$class->vtable[0];
frost$core$String* $tmp2067 = $tmp2065(((frost$core$Object*) $tmp2064));
frost$io$Console$print$frost$core$String($tmp2067);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
frost$core$Frost$unref$frost$core$Object$Q($tmp2063);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:458
frost$io$Console$print$frost$core$String(&$s2068);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:459
org$frostlang$frostc$IR$Block* $tmp2069 = *(&local1);
frost$collections$Array** $tmp2070 = &$tmp2069->statements;
frost$collections$Array* $tmp2071 = *$tmp2070;
frost$core$Int64 $tmp2072 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:459:47
frost$core$Int64 $tmp2073 = (frost$core$Int64) {0};
int64_t $tmp2074 = $tmp2072.value;
int64_t $tmp2075 = $tmp2073.value;
bool $tmp2076 = $tmp2074 >= $tmp2075;
frost$core$Bit $tmp2077 = (frost$core$Bit) {$tmp2076};
bool $tmp2078 = $tmp2077.value;
if ($tmp2078) goto block43; else goto block42;
block43:;
ITable* $tmp2079 = ((frost$collections$CollectionView*) $tmp2071)->$class->itable;
while ($tmp2079->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2079 = $tmp2079->next;
}
$fn2081 $tmp2080 = $tmp2079->methods[0];
frost$core$Int64 $tmp2082 = $tmp2080(((frost$collections$CollectionView*) $tmp2071));
int64_t $tmp2083 = $tmp2072.value;
int64_t $tmp2084 = $tmp2082.value;
bool $tmp2085 = $tmp2083 < $tmp2084;
frost$core$Bit $tmp2086 = (frost$core$Bit) {$tmp2085};
bool $tmp2087 = $tmp2086.value;
if ($tmp2087) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp2088 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2089, $tmp2088, &$s2090);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2091 = &$tmp2071->data;
frost$core$Object** $tmp2092 = *$tmp2091;
int64_t $tmp2093 = $tmp2072.value;
frost$core$Object* $tmp2094 = $tmp2092[$tmp2093];
frost$core$Frost$ref$frost$core$Object$Q($tmp2094);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from Analyzer.frost:459:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:34
$fn2096 $tmp2095 = ($fn2096) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2094))->$class->vtable[0];
frost$core$String* $tmp2097 = $tmp2095(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2094)));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.stub:34:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp2097);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
frost$core$Frost$unref$frost$core$Object$Q($tmp2094);
frost$core$Int64 $tmp2098 = *(&local2);
int64_t $tmp2099 = $tmp2022.value;
int64_t $tmp2100 = $tmp2098.value;
int64_t $tmp2101 = $tmp2099 - $tmp2100;
frost$core$Int64 $tmp2102 = (frost$core$Int64) {$tmp2101};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2103 = $tmp2102.value;
frost$core$UInt64 $tmp2104 = (frost$core$UInt64) {((uint64_t) $tmp2103)};
if ($tmp2024) goto block48; else goto block49;
block48:;
uint64_t $tmp2105 = $tmp2104.value;
uint64_t $tmp2106 = $tmp2027.value;
bool $tmp2107 = $tmp2105 >= $tmp2106;
frost$core$Bit $tmp2108 = (frost$core$Bit) {$tmp2107};
bool $tmp2109 = $tmp2108.value;
if ($tmp2109) goto block46; else goto block31;
block49:;
uint64_t $tmp2110 = $tmp2104.value;
uint64_t $tmp2111 = $tmp2027.value;
bool $tmp2112 = $tmp2110 > $tmp2111;
frost$core$Bit $tmp2113 = (frost$core$Bit) {$tmp2112};
bool $tmp2114 = $tmp2113.value;
if ($tmp2114) goto block46; else goto block31;
block46:;
int64_t $tmp2115 = $tmp2098.value;
int64_t $tmp2116 = $tmp2025.value;
int64_t $tmp2117 = $tmp2115 + $tmp2116;
frost$core$Int64 $tmp2118 = (frost$core$Int64) {$tmp2117};
*(&local2) = $tmp2118;
goto block30;
block31:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1976);
org$frostlang$frostc$IR$Block* $tmp2119 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block21;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1967));
return;

}
void org$frostlang$frostc$pass$Analyzer$analyze(org$frostlang$frostc$pass$Analyzer* param0) {

org$frostlang$frostc$pass$Analyzer$DataFlowValue* local0 = NULL;
org$frostlang$frostc$pass$Analyzer$State* local1 = NULL;
frost$core$Int64 local2;
org$frostlang$frostc$IR$Block* local3 = NULL;
frost$core$Int64 local4;
org$frostlang$frostc$IR$Block$ID local5;
org$frostlang$frostc$IR$Block* local6 = NULL;
org$frostlang$frostc$MethodDecl$Kind local7;
org$frostlang$frostc$MethodDecl$Kind local8;
org$frostlang$frostc$pass$Analyzer$BlockExit local9;
org$frostlang$frostc$pass$Analyzer$BlockExit local10;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:465
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2120 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp2121 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2122 = *$tmp2121;
org$frostlang$frostc$Type** $tmp2123 = &$tmp2122->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp2124 = *$tmp2123;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp2120, $tmp2124);
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2125 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
*(&local0) = $tmp2120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:466
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$State));
org$frostlang$frostc$pass$Analyzer$State* $tmp2126 = (org$frostlang$frostc$pass$Analyzer$State*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$State$class);
org$frostlang$frostc$pass$Analyzer$State$init($tmp2126);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
org$frostlang$frostc$pass$Analyzer$State* $tmp2127 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
*(&local1) = $tmp2126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:467
frost$core$Int64 $tmp2128 = (frost$core$Int64) {0};
org$frostlang$frostc$IR** $tmp2129 = &param0->ir;
org$frostlang$frostc$IR* $tmp2130 = *$tmp2129;
frost$collections$Array** $tmp2131 = &$tmp2130->locals;
frost$collections$Array* $tmp2132 = *$tmp2131;
ITable* $tmp2133 = ((frost$collections$CollectionView*) $tmp2132)->$class->itable;
while ($tmp2133->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2133 = $tmp2133->next;
}
$fn2135 $tmp2134 = $tmp2133->methods[0];
frost$core$Int64 $tmp2136 = $tmp2134(((frost$collections$CollectionView*) $tmp2132));
frost$core$Bit $tmp2137 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2138 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2128, $tmp2136, $tmp2137);
frost$core$Int64 $tmp2139 = $tmp2138.min;
*(&local2) = $tmp2139;
frost$core$Int64 $tmp2140 = $tmp2138.max;
frost$core$Bit $tmp2141 = $tmp2138.inclusive;
bool $tmp2142 = $tmp2141.value;
frost$core$Int64 $tmp2143 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2144 = $tmp2143.value;
frost$core$UInt64 $tmp2145 = (frost$core$UInt64) {((uint64_t) $tmp2144)};
if ($tmp2142) goto block5; else goto block6;
block5:;
int64_t $tmp2146 = $tmp2139.value;
int64_t $tmp2147 = $tmp2140.value;
bool $tmp2148 = $tmp2146 <= $tmp2147;
frost$core$Bit $tmp2149 = (frost$core$Bit) {$tmp2148};
bool $tmp2150 = $tmp2149.value;
if ($tmp2150) goto block2; else goto block3;
block6:;
int64_t $tmp2151 = $tmp2139.value;
int64_t $tmp2152 = $tmp2140.value;
bool $tmp2153 = $tmp2151 < $tmp2152;
frost$core$Bit $tmp2154 = (frost$core$Bit) {$tmp2153};
bool $tmp2155 = $tmp2154.value;
if ($tmp2155) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:468
org$frostlang$frostc$pass$Analyzer$State* $tmp2156 = *(&local1);
frost$collections$Array** $tmp2157 = &$tmp2156->locals;
frost$collections$Array* $tmp2158 = *$tmp2157;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2159 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp2158, ((frost$core$Object*) $tmp2159));
frost$core$Int64 $tmp2160 = *(&local2);
int64_t $tmp2161 = $tmp2140.value;
int64_t $tmp2162 = $tmp2160.value;
int64_t $tmp2163 = $tmp2161 - $tmp2162;
frost$core$Int64 $tmp2164 = (frost$core$Int64) {$tmp2163};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2165 = $tmp2164.value;
frost$core$UInt64 $tmp2166 = (frost$core$UInt64) {((uint64_t) $tmp2165)};
if ($tmp2142) goto block9; else goto block10;
block9:;
uint64_t $tmp2167 = $tmp2166.value;
uint64_t $tmp2168 = $tmp2145.value;
bool $tmp2169 = $tmp2167 >= $tmp2168;
frost$core$Bit $tmp2170 = (frost$core$Bit) {$tmp2169};
bool $tmp2171 = $tmp2170.value;
if ($tmp2171) goto block7; else goto block3;
block10:;
uint64_t $tmp2172 = $tmp2166.value;
uint64_t $tmp2173 = $tmp2145.value;
bool $tmp2174 = $tmp2172 > $tmp2173;
frost$core$Bit $tmp2175 = (frost$core$Bit) {$tmp2174};
bool $tmp2176 = $tmp2175.value;
if ($tmp2176) goto block7; else goto block3;
block7:;
int64_t $tmp2177 = $tmp2160.value;
int64_t $tmp2178 = $tmp2143.value;
int64_t $tmp2179 = $tmp2177 + $tmp2178;
frost$core$Int64 $tmp2180 = (frost$core$Int64) {$tmp2179};
*(&local2) = $tmp2180;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:470
frost$collections$HashMap** $tmp2181 = &param0->entryStates;
frost$collections$HashMap* $tmp2182 = *$tmp2181;
org$frostlang$frostc$IR** $tmp2183 = &param0->ir;
org$frostlang$frostc$IR* $tmp2184 = *$tmp2183;
frost$collections$Array** $tmp2185 = &$tmp2184->blocks;
frost$collections$Array* $tmp2186 = *$tmp2185;
frost$core$Int64 $tmp2187 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:470:30
frost$core$Int64 $tmp2188 = (frost$core$Int64) {0};
int64_t $tmp2189 = $tmp2187.value;
int64_t $tmp2190 = $tmp2188.value;
bool $tmp2191 = $tmp2189 >= $tmp2190;
frost$core$Bit $tmp2192 = (frost$core$Bit) {$tmp2191};
bool $tmp2193 = $tmp2192.value;
if ($tmp2193) goto block14; else goto block13;
block14:;
ITable* $tmp2194 = ((frost$collections$CollectionView*) $tmp2186)->$class->itable;
while ($tmp2194->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2194 = $tmp2194->next;
}
$fn2196 $tmp2195 = $tmp2194->methods[0];
frost$core$Int64 $tmp2197 = $tmp2195(((frost$collections$CollectionView*) $tmp2186));
int64_t $tmp2198 = $tmp2187.value;
int64_t $tmp2199 = $tmp2197.value;
bool $tmp2200 = $tmp2198 < $tmp2199;
frost$core$Bit $tmp2201 = (frost$core$Bit) {$tmp2200};
bool $tmp2202 = $tmp2201.value;
if ($tmp2202) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp2203 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2204, $tmp2203, &$s2205);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2206 = &$tmp2186->data;
frost$core$Object** $tmp2207 = *$tmp2206;
int64_t $tmp2208 = $tmp2187.value;
frost$core$Object* $tmp2209 = $tmp2207[$tmp2208];
frost$core$Frost$ref$frost$core$Object$Q($tmp2209);
org$frostlang$frostc$IR$Block$ID* $tmp2210 = &((org$frostlang$frostc$IR$Block*) $tmp2209)->id;
org$frostlang$frostc$IR$Block$ID $tmp2211 = *$tmp2210;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2212;
$tmp2212 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2212->value = $tmp2211;
org$frostlang$frostc$pass$Analyzer$State* $tmp2213 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2182, ((frost$collections$Key*) $tmp2212), ((frost$core$Object*) $tmp2213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2212)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2209);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:471
org$frostlang$frostc$IR** $tmp2214 = &param0->ir;
org$frostlang$frostc$IR* $tmp2215 = *$tmp2214;
frost$collections$Array** $tmp2216 = &$tmp2215->blocks;
frost$collections$Array* $tmp2217 = *$tmp2216;
ITable* $tmp2218 = ((frost$collections$Iterable*) $tmp2217)->$class->itable;
while ($tmp2218->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2218 = $tmp2218->next;
}
$fn2220 $tmp2219 = $tmp2218->methods[0];
frost$collections$Iterator* $tmp2221 = $tmp2219(((frost$collections$Iterable*) $tmp2217));
goto block15;
block15:;
ITable* $tmp2222 = $tmp2221->$class->itable;
while ($tmp2222->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2222 = $tmp2222->next;
}
$fn2224 $tmp2223 = $tmp2222->methods[0];
frost$core$Bit $tmp2225 = $tmp2223($tmp2221);
bool $tmp2226 = $tmp2225.value;
if ($tmp2226) goto block17; else goto block16;
block16:;
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2227 = $tmp2221->$class->itable;
while ($tmp2227->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2227 = $tmp2227->next;
}
$fn2229 $tmp2228 = $tmp2227->methods[1];
frost$core$Object* $tmp2230 = $tmp2228($tmp2221);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2230)));
org$frostlang$frostc$IR$Block* $tmp2231 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
*(&local3) = ((org$frostlang$frostc$IR$Block*) $tmp2230);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:472
frost$collections$HashMap** $tmp2232 = &param0->blocks;
frost$collections$HashMap* $tmp2233 = *$tmp2232;
org$frostlang$frostc$IR$Block* $tmp2234 = *(&local3);
org$frostlang$frostc$IR$Block$ID* $tmp2235 = &$tmp2234->id;
org$frostlang$frostc$IR$Block$ID $tmp2236 = *$tmp2235;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2237;
$tmp2237 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2237->value = $tmp2236;
org$frostlang$frostc$IR$Block* $tmp2238 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2233, ((frost$collections$Key*) $tmp2237), ((frost$core$Object*) $tmp2238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2237)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:473
frost$core$Int64 $tmp2239 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block* $tmp2240 = *(&local3);
frost$collections$Array** $tmp2241 = &$tmp2240->statements;
frost$collections$Array* $tmp2242 = *$tmp2241;
ITable* $tmp2243 = ((frost$collections$CollectionView*) $tmp2242)->$class->itable;
while ($tmp2243->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2243 = $tmp2243->next;
}
$fn2245 $tmp2244 = $tmp2243->methods[0];
frost$core$Int64 $tmp2246 = $tmp2244(((frost$collections$CollectionView*) $tmp2242));
frost$core$Bit $tmp2247 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2248 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2239, $tmp2246, $tmp2247);
frost$core$Int64 $tmp2249 = $tmp2248.min;
*(&local4) = $tmp2249;
frost$core$Int64 $tmp2250 = $tmp2248.max;
frost$core$Bit $tmp2251 = $tmp2248.inclusive;
bool $tmp2252 = $tmp2251.value;
frost$core$Int64 $tmp2253 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2254 = $tmp2253.value;
frost$core$UInt64 $tmp2255 = (frost$core$UInt64) {((uint64_t) $tmp2254)};
if ($tmp2252) goto block22; else goto block23;
block22:;
int64_t $tmp2256 = $tmp2249.value;
int64_t $tmp2257 = $tmp2250.value;
bool $tmp2258 = $tmp2256 <= $tmp2257;
frost$core$Bit $tmp2259 = (frost$core$Bit) {$tmp2258};
bool $tmp2260 = $tmp2259.value;
if ($tmp2260) goto block19; else goto block20;
block23:;
int64_t $tmp2261 = $tmp2249.value;
int64_t $tmp2262 = $tmp2250.value;
bool $tmp2263 = $tmp2261 < $tmp2262;
frost$core$Bit $tmp2264 = (frost$core$Bit) {$tmp2263};
bool $tmp2265 = $tmp2264.value;
if ($tmp2265) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:474
frost$collections$HashMap** $tmp2266 = &param0->statements;
frost$collections$HashMap* $tmp2267 = *$tmp2266;
org$frostlang$frostc$IR$Block* $tmp2268 = *(&local3);
frost$collections$Array** $tmp2269 = &$tmp2268->ids;
frost$collections$Array* $tmp2270 = *$tmp2269;
frost$core$Int64 $tmp2271 = *(&local4);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:474:33
frost$core$Int64 $tmp2272 = (frost$core$Int64) {0};
int64_t $tmp2273 = $tmp2271.value;
int64_t $tmp2274 = $tmp2272.value;
bool $tmp2275 = $tmp2273 >= $tmp2274;
frost$core$Bit $tmp2276 = (frost$core$Bit) {$tmp2275};
bool $tmp2277 = $tmp2276.value;
if ($tmp2277) goto block27; else goto block26;
block27:;
ITable* $tmp2278 = ((frost$collections$CollectionView*) $tmp2270)->$class->itable;
while ($tmp2278->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2278 = $tmp2278->next;
}
$fn2280 $tmp2279 = $tmp2278->methods[0];
frost$core$Int64 $tmp2281 = $tmp2279(((frost$collections$CollectionView*) $tmp2270));
int64_t $tmp2282 = $tmp2271.value;
int64_t $tmp2283 = $tmp2281.value;
bool $tmp2284 = $tmp2282 < $tmp2283;
frost$core$Bit $tmp2285 = (frost$core$Bit) {$tmp2284};
bool $tmp2286 = $tmp2285.value;
if ($tmp2286) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp2287 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2288, $tmp2287, &$s2289);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2290 = &$tmp2270->data;
frost$core$Object** $tmp2291 = *$tmp2290;
int64_t $tmp2292 = $tmp2271.value;
frost$core$Object* $tmp2293 = $tmp2291[$tmp2292];
frost$core$Frost$ref$frost$core$Object$Q($tmp2293);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2294;
$tmp2294 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2294->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2293)->value;
org$frostlang$frostc$IR$Block* $tmp2295 = *(&local3);
frost$collections$Array** $tmp2296 = &$tmp2295->statements;
frost$collections$Array* $tmp2297 = *$tmp2296;
frost$core$Int64 $tmp2298 = *(&local4);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:474:53
frost$core$Int64 $tmp2299 = (frost$core$Int64) {0};
int64_t $tmp2300 = $tmp2298.value;
int64_t $tmp2301 = $tmp2299.value;
bool $tmp2302 = $tmp2300 >= $tmp2301;
frost$core$Bit $tmp2303 = (frost$core$Bit) {$tmp2302};
bool $tmp2304 = $tmp2303.value;
if ($tmp2304) goto block31; else goto block30;
block31:;
ITable* $tmp2305 = ((frost$collections$CollectionView*) $tmp2297)->$class->itable;
while ($tmp2305->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2305 = $tmp2305->next;
}
$fn2307 $tmp2306 = $tmp2305->methods[0];
frost$core$Int64 $tmp2308 = $tmp2306(((frost$collections$CollectionView*) $tmp2297));
int64_t $tmp2309 = $tmp2298.value;
int64_t $tmp2310 = $tmp2308.value;
bool $tmp2311 = $tmp2309 < $tmp2310;
frost$core$Bit $tmp2312 = (frost$core$Bit) {$tmp2311};
bool $tmp2313 = $tmp2312.value;
if ($tmp2313) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp2314 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2315, $tmp2314, &$s2316);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2317 = &$tmp2297->data;
frost$core$Object** $tmp2318 = *$tmp2317;
int64_t $tmp2319 = $tmp2298.value;
frost$core$Object* $tmp2320 = $tmp2318[$tmp2319];
frost$core$Frost$ref$frost$core$Object$Q($tmp2320);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2267, ((frost$collections$Key*) $tmp2294), ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2320)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2320);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2294)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2293);
frost$core$Int64 $tmp2321 = *(&local4);
int64_t $tmp2322 = $tmp2250.value;
int64_t $tmp2323 = $tmp2321.value;
int64_t $tmp2324 = $tmp2322 - $tmp2323;
frost$core$Int64 $tmp2325 = (frost$core$Int64) {$tmp2324};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2326 = $tmp2325.value;
frost$core$UInt64 $tmp2327 = (frost$core$UInt64) {((uint64_t) $tmp2326)};
if ($tmp2252) goto block34; else goto block35;
block34:;
uint64_t $tmp2328 = $tmp2327.value;
uint64_t $tmp2329 = $tmp2255.value;
bool $tmp2330 = $tmp2328 >= $tmp2329;
frost$core$Bit $tmp2331 = (frost$core$Bit) {$tmp2330};
bool $tmp2332 = $tmp2331.value;
if ($tmp2332) goto block32; else goto block20;
block35:;
uint64_t $tmp2333 = $tmp2327.value;
uint64_t $tmp2334 = $tmp2255.value;
bool $tmp2335 = $tmp2333 > $tmp2334;
frost$core$Bit $tmp2336 = (frost$core$Bit) {$tmp2335};
bool $tmp2337 = $tmp2336.value;
if ($tmp2337) goto block32; else goto block20;
block32:;
int64_t $tmp2338 = $tmp2321.value;
int64_t $tmp2339 = $tmp2253.value;
int64_t $tmp2340 = $tmp2338 + $tmp2339;
frost$core$Int64 $tmp2341 = (frost$core$Int64) {$tmp2340};
*(&local4) = $tmp2341;
goto block19;
block20:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2230);
org$frostlang$frostc$IR$Block* $tmp2342 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block15;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:477
frost$collections$HashSet** $tmp2343 = &param0->worklist;
frost$collections$HashSet* $tmp2344 = *$tmp2343;
org$frostlang$frostc$IR** $tmp2345 = &param0->ir;
org$frostlang$frostc$IR* $tmp2346 = *$tmp2345;
frost$collections$Array** $tmp2347 = &$tmp2346->blocks;
frost$collections$Array* $tmp2348 = *$tmp2347;
frost$core$Int64 $tmp2349 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:477:31
frost$core$Int64 $tmp2350 = (frost$core$Int64) {0};
int64_t $tmp2351 = $tmp2349.value;
int64_t $tmp2352 = $tmp2350.value;
bool $tmp2353 = $tmp2351 >= $tmp2352;
frost$core$Bit $tmp2354 = (frost$core$Bit) {$tmp2353};
bool $tmp2355 = $tmp2354.value;
if ($tmp2355) goto block39; else goto block38;
block39:;
ITable* $tmp2356 = ((frost$collections$CollectionView*) $tmp2348)->$class->itable;
while ($tmp2356->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2356 = $tmp2356->next;
}
$fn2358 $tmp2357 = $tmp2356->methods[0];
frost$core$Int64 $tmp2359 = $tmp2357(((frost$collections$CollectionView*) $tmp2348));
int64_t $tmp2360 = $tmp2349.value;
int64_t $tmp2361 = $tmp2359.value;
bool $tmp2362 = $tmp2360 < $tmp2361;
frost$core$Bit $tmp2363 = (frost$core$Bit) {$tmp2362};
bool $tmp2364 = $tmp2363.value;
if ($tmp2364) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp2365 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2366, $tmp2365, &$s2367);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2368 = &$tmp2348->data;
frost$core$Object** $tmp2369 = *$tmp2368;
int64_t $tmp2370 = $tmp2349.value;
frost$core$Object* $tmp2371 = $tmp2369[$tmp2370];
frost$core$Frost$ref$frost$core$Object$Q($tmp2371);
org$frostlang$frostc$IR$Block$ID* $tmp2372 = &((org$frostlang$frostc$IR$Block*) $tmp2371)->id;
org$frostlang$frostc$IR$Block$ID $tmp2373 = *$tmp2372;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2374;
$tmp2374 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2374->value = $tmp2373;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:477:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:8
frost$collections$HashMap** $tmp2375 = &$tmp2344->contents;
frost$collections$HashMap* $tmp2376 = *$tmp2375;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2376, ((frost$collections$Key*) $tmp2374), ((frost$core$Object*) ((frost$collections$Key*) $tmp2374)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2374)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2371);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:478
goto block41;
block41:;
frost$collections$HashSet** $tmp2377 = &param0->worklist;
frost$collections$HashSet* $tmp2378 = *$tmp2377;
ITable* $tmp2379 = ((frost$collections$CollectionView*) $tmp2378)->$class->itable;
while ($tmp2379->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2379 = $tmp2379->next;
}
$fn2381 $tmp2380 = $tmp2379->methods[0];
frost$core$Int64 $tmp2382 = $tmp2380(((frost$collections$CollectionView*) $tmp2378));
frost$core$Int64 $tmp2383 = (frost$core$Int64) {0};
int64_t $tmp2384 = $tmp2382.value;
int64_t $tmp2385 = $tmp2383.value;
bool $tmp2386 = $tmp2384 > $tmp2385;
frost$core$Bit $tmp2387 = (frost$core$Bit) {$tmp2386};
bool $tmp2388 = $tmp2387.value;
if ($tmp2388) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:479
frost$collections$HashSet** $tmp2389 = &param0->worklist;
frost$collections$HashSet* $tmp2390 = *$tmp2389;
ITable* $tmp2391 = ((frost$collections$Iterable*) $tmp2390)->$class->itable;
while ($tmp2391->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2391 = $tmp2391->next;
}
$fn2393 $tmp2392 = $tmp2391->methods[0];
frost$collections$Iterator* $tmp2394 = $tmp2392(((frost$collections$Iterable*) $tmp2390));
ITable* $tmp2395 = $tmp2394->$class->itable;
while ($tmp2395->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2395 = $tmp2395->next;
}
$fn2397 $tmp2396 = $tmp2395->methods[1];
frost$core$Object* $tmp2398 = $tmp2396($tmp2394);
*(&local5) = ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp2398)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2398);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:480
frost$collections$HashSet** $tmp2399 = &param0->worklist;
frost$collections$HashSet* $tmp2400 = *$tmp2399;
org$frostlang$frostc$IR$Block$ID $tmp2401 = *(&local5);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2402;
$tmp2402 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2402->value = $tmp2401;
// begin inline call to method frost.collections.HashSet.remove(value:frost.collections.HashSet.T) from Analyzer.frost:480:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:17
frost$collections$HashMap** $tmp2403 = &$tmp2400->contents;
frost$collections$HashMap* $tmp2404 = *$tmp2403;
frost$collections$HashMap$remove$frost$collections$HashMap$K($tmp2404, ((frost$collections$Key*) $tmp2402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2402)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:481
org$frostlang$frostc$IR$Block$ID $tmp2405 = *(&local5);
$fn2407 $tmp2406 = ($fn2407) param0->$class->vtable[8];
$tmp2406(param0, $tmp2405);
goto block41;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:483
org$frostlang$frostc$IR** $tmp2408 = &param0->ir;
org$frostlang$frostc$IR* $tmp2409 = *$tmp2408;
frost$collections$Array** $tmp2410 = &$tmp2409->blocks;
frost$collections$Array* $tmp2411 = *$tmp2410;
ITable* $tmp2412 = ((frost$collections$Iterable*) $tmp2411)->$class->itable;
while ($tmp2412->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2412 = $tmp2412->next;
}
$fn2414 $tmp2413 = $tmp2412->methods[0];
frost$collections$Iterator* $tmp2415 = $tmp2413(((frost$collections$Iterable*) $tmp2411));
goto block45;
block45:;
ITable* $tmp2416 = $tmp2415->$class->itable;
while ($tmp2416->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2416 = $tmp2416->next;
}
$fn2418 $tmp2417 = $tmp2416->methods[0];
frost$core$Bit $tmp2419 = $tmp2417($tmp2415);
bool $tmp2420 = $tmp2419.value;
if ($tmp2420) goto block47; else goto block46;
block46:;
*(&local6) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2421 = $tmp2415->$class->itable;
while ($tmp2421->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2421 = $tmp2421->next;
}
$fn2423 $tmp2422 = $tmp2421->methods[1];
frost$core$Object* $tmp2424 = $tmp2422($tmp2415);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2424)));
org$frostlang$frostc$IR$Block* $tmp2425 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
*(&local6) = ((org$frostlang$frostc$IR$Block*) $tmp2424);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:484
frost$collections$HashMap** $tmp2426 = &param0->entryStates;
frost$collections$HashMap* $tmp2427 = *$tmp2426;
org$frostlang$frostc$IR$Block* $tmp2428 = *(&local6);
org$frostlang$frostc$IR$Block$ID* $tmp2429 = &$tmp2428->id;
org$frostlang$frostc$IR$Block$ID $tmp2430 = *$tmp2429;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2431;
$tmp2431 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2431->value = $tmp2430;
frost$core$Object* $tmp2432 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2427, ((frost$collections$Key*) $tmp2431));
frost$core$Bit $tmp2433 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$pass$Analyzer$State*) $tmp2432) != NULL);
bool $tmp2434 = $tmp2433.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2432);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2431)));
if ($tmp2434) goto block48; else goto block50;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:485
org$frostlang$frostc$IR$Block* $tmp2435 = *(&local6);
frost$collections$Array** $tmp2436 = &$tmp2435->statements;
frost$collections$Array* $tmp2437 = *$tmp2436;
frost$core$Int64 $tmp2438 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:485:35
frost$core$Int64 $tmp2439 = (frost$core$Int64) {0};
int64_t $tmp2440 = $tmp2438.value;
int64_t $tmp2441 = $tmp2439.value;
bool $tmp2442 = $tmp2440 >= $tmp2441;
frost$core$Bit $tmp2443 = (frost$core$Bit) {$tmp2442};
bool $tmp2444 = $tmp2443.value;
if ($tmp2444) goto block54; else goto block53;
block54:;
ITable* $tmp2445 = ((frost$collections$CollectionView*) $tmp2437)->$class->itable;
while ($tmp2445->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2445 = $tmp2445->next;
}
$fn2447 $tmp2446 = $tmp2445->methods[0];
frost$core$Int64 $tmp2448 = $tmp2446(((frost$collections$CollectionView*) $tmp2437));
int64_t $tmp2449 = $tmp2438.value;
int64_t $tmp2450 = $tmp2448.value;
bool $tmp2451 = $tmp2449 < $tmp2450;
frost$core$Bit $tmp2452 = (frost$core$Bit) {$tmp2451};
bool $tmp2453 = $tmp2452.value;
if ($tmp2453) goto block52; else goto block53;
block53:;
frost$core$Int64 $tmp2454 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2455, $tmp2454, &$s2456);
abort(); // unreachable
block52:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2457 = &$tmp2437->data;
frost$core$Object** $tmp2458 = *$tmp2457;
int64_t $tmp2459 = $tmp2438.value;
frost$core$Object* $tmp2460 = $tmp2458[$tmp2459];
frost$core$Frost$ref$frost$core$Object$Q($tmp2460);
frost$core$Int64* $tmp2461 = &((org$frostlang$frostc$IR$Statement*) $tmp2460)->$rawValue;
frost$core$Int64 $tmp2462 = *$tmp2461;
frost$core$Int64 $tmp2463 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:486:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2464 = $tmp2462.value;
int64_t $tmp2465 = $tmp2463.value;
bool $tmp2466 = $tmp2464 == $tmp2465;
frost$core$Bit $tmp2467 = frost$core$Bit$init$builtin_bit($tmp2466);
bool $tmp2468 = $tmp2467.value;
if ($tmp2468) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:487
org$frostlang$frostc$MethodDecl** $tmp2469 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2470 = *$tmp2469;
org$frostlang$frostc$MethodDecl$Kind* $tmp2471 = &$tmp2470->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2472 = *$tmp2471;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2473;
$tmp2473 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2473->value = $tmp2472;
frost$core$Int64 $tmp2474 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Analyzer.frost:487:59
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
$fn2481 $tmp2480 = $tmp2479->methods[1];
frost$core$Bit $tmp2482 = $tmp2480(((frost$core$Equatable*) $tmp2473), ((frost$core$Equatable*) $tmp2478));
bool $tmp2483 = $tmp2482.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2478)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2473)));
if ($tmp2483) goto block61; else goto block60;
block61:;
org$frostlang$frostc$MethodDecl** $tmp2484 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2485 = *$tmp2484;
org$frostlang$frostc$Type** $tmp2486 = &$tmp2485->returnType;
org$frostlang$frostc$Type* $tmp2487 = *$tmp2486;
org$frostlang$frostc$Compiler** $tmp2488 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2489 = *$tmp2488;
org$frostlang$frostc$Type** $tmp2490 = &$tmp2489->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2491 = *$tmp2490;
ITable* $tmp2492 = ((frost$core$Equatable*) $tmp2487)->$class->itable;
while ($tmp2492->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2492 = $tmp2492->next;
}
$fn2494 $tmp2493 = $tmp2492->methods[1];
frost$core$Bit $tmp2495 = $tmp2493(((frost$core$Equatable*) $tmp2487), ((frost$core$Equatable*) $tmp2491));
bool $tmp2496 = $tmp2495.value;
if ($tmp2496) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:489
org$frostlang$frostc$Compiler** $tmp2497 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2498 = *$tmp2497;
org$frostlang$frostc$MethodDecl** $tmp2499 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2500 = *$tmp2499;
org$frostlang$frostc$Position* $tmp2501 = &((org$frostlang$frostc$Symbol*) $tmp2500)->position;
org$frostlang$frostc$Position $tmp2502 = *$tmp2501;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp2498, $tmp2502, &$s2503);
goto block60;
block60:;
goto block55;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:493
org$frostlang$frostc$IR$Block* $tmp2504 = *(&local6);
org$frostlang$frostc$IR$Block$ID* $tmp2505 = &$tmp2504->id;
org$frostlang$frostc$IR$Block$ID $tmp2506 = *$tmp2505;
frost$core$Int64 $tmp2507 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int64):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:493:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:80
org$frostlang$frostc$IR$Block$ID* $tmp2508 = &(&local10)->id;
*$tmp2508 = $tmp2506;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
frost$core$Int64* $tmp2509 = &(&local10)->exit;
*$tmp2509 = $tmp2507;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2510 = *(&local10);
*(&local9) = $tmp2510;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2511 = *(&local9);
frost$core$Bit $tmp2512 = frost$core$Bit$init$builtin_bit(true);
$fn2514 $tmp2513 = ($fn2514) param0->$class->vtable[7];
org$frostlang$frostc$pass$Analyzer$State* $tmp2515 = $tmp2513(param0, $tmp2511, $tmp2512);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2515));
goto block55;
block55:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2460);
goto block49;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:497
org$frostlang$frostc$IR$Block* $tmp2516 = *(&local6);
frost$core$Bit* $tmp2517 = &$tmp2516->containsExplicitCode;
frost$core$Bit $tmp2518 = *$tmp2517;
bool $tmp2519 = $tmp2518.value;
if ($tmp2519) goto block66; else goto block65;
block66:;
org$frostlang$frostc$IR$Block* $tmp2520 = *(&local6);
frost$core$Bit* $tmp2521 = &$tmp2520->forceReachable;
frost$core$Bit $tmp2522 = *$tmp2521;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:497:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp2523 = $tmp2522.value;
bool $tmp2524 = !$tmp2523;
frost$core$Bit $tmp2525 = (frost$core$Bit) {$tmp2524};
bool $tmp2526 = $tmp2525.value;
if ($tmp2526) goto block64; else goto block65;
block64:;
goto block65;
block65:;
goto block49;
block49:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2424);
org$frostlang$frostc$IR$Block* $tmp2527 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
*(&local6) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block45;
block47:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2415));
org$frostlang$frostc$pass$Analyzer$State* $tmp2528 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2529 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2529));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$makeUnreachable$org$frostlang$frostc$IR$Block(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Block* param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:504
frost$collections$Array** $tmp2530 = &param1->statements;
frost$collections$Array* $tmp2531 = *$tmp2530;
frost$core$Int64 $tmp2532 = (frost$core$Int64) {0};
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2533 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2534 = (frost$core$Int64) {28};
frost$collections$Array** $tmp2535 = &param1->statements;
frost$collections$Array* $tmp2536 = *$tmp2535;
frost$core$Int64 $tmp2537 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:504:65
frost$core$Int64 $tmp2538 = (frost$core$Int64) {0};
int64_t $tmp2539 = $tmp2537.value;
int64_t $tmp2540 = $tmp2538.value;
bool $tmp2541 = $tmp2539 >= $tmp2540;
frost$core$Bit $tmp2542 = (frost$core$Bit) {$tmp2541};
bool $tmp2543 = $tmp2542.value;
if ($tmp2543) goto block4; else goto block3;
block4:;
ITable* $tmp2544 = ((frost$collections$CollectionView*) $tmp2536)->$class->itable;
while ($tmp2544->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2544 = $tmp2544->next;
}
$fn2546 $tmp2545 = $tmp2544->methods[0];
frost$core$Int64 $tmp2547 = $tmp2545(((frost$collections$CollectionView*) $tmp2536));
int64_t $tmp2548 = $tmp2537.value;
int64_t $tmp2549 = $tmp2547.value;
bool $tmp2550 = $tmp2548 < $tmp2549;
frost$core$Bit $tmp2551 = (frost$core$Bit) {$tmp2550};
bool $tmp2552 = $tmp2551.value;
if ($tmp2552) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp2553 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2554, $tmp2553, &$s2555);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2556 = &$tmp2536->data;
frost$core$Object** $tmp2557 = *$tmp2556;
int64_t $tmp2558 = $tmp2537.value;
frost$core$Object* $tmp2559 = $tmp2557[$tmp2558];
frost$core$Frost$ref$frost$core$Object$Q($tmp2559);
$fn2561 $tmp2560 = ($fn2561) ((org$frostlang$frostc$IR$Statement*) $tmp2559)->$class->vtable[2];
org$frostlang$frostc$Position $tmp2562 = $tmp2560(((org$frostlang$frostc$IR$Statement*) $tmp2559));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position($tmp2533, $tmp2534, $tmp2562);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int64, value:frost.collections.Array.T) from Analyzer.frost:504:21
frost$core$Int64 $tmp2563 = (frost$core$Int64) {0};
int64_t $tmp2564 = $tmp2532.value;
int64_t $tmp2565 = $tmp2563.value;
bool $tmp2566 = $tmp2564 >= $tmp2565;
frost$core$Bit $tmp2567 = (frost$core$Bit) {$tmp2566};
bool $tmp2568 = $tmp2567.value;
if ($tmp2568) goto block8; else goto block7;
block8:;
ITable* $tmp2569 = ((frost$collections$CollectionView*) $tmp2531)->$class->itable;
while ($tmp2569->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2569 = $tmp2569->next;
}
$fn2571 $tmp2570 = $tmp2569->methods[0];
frost$core$Int64 $tmp2572 = $tmp2570(((frost$collections$CollectionView*) $tmp2531));
int64_t $tmp2573 = $tmp2532.value;
int64_t $tmp2574 = $tmp2572.value;
bool $tmp2575 = $tmp2573 < $tmp2574;
frost$core$Bit $tmp2576 = (frost$core$Bit) {$tmp2575};
bool $tmp2577 = $tmp2576.value;
if ($tmp2577) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2578 = (frost$core$Int64) {27};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2579, $tmp2578, &$s2580);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:27
frost$core$Object*** $tmp2581 = &$tmp2531->data;
frost$core$Object** $tmp2582 = *$tmp2581;
int64_t $tmp2583 = $tmp2532.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
frost$core$Object* $tmp2584 = $tmp2582[$tmp2583];
frost$core$Frost$unref$frost$core$Object$Q($tmp2584);
$tmp2582[$tmp2583] = ((frost$core$Object*) $tmp2533);
frost$core$Frost$unref$frost$core$Object$Q($tmp2559);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:505
frost$collections$Array** $tmp2585 = &param1->statements;
frost$collections$Array* $tmp2586 = *$tmp2585;
ITable* $tmp2587 = ((frost$collections$CollectionView*) $tmp2586)->$class->itable;
while ($tmp2587->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2587 = $tmp2587->next;
}
$fn2589 $tmp2588 = $tmp2587->methods[0];
frost$core$Int64 $tmp2590 = $tmp2588(((frost$collections$CollectionView*) $tmp2586));
frost$core$Int64 $tmp2591 = (frost$core$Int64) {1};
int64_t $tmp2592 = $tmp2590.value;
int64_t $tmp2593 = $tmp2591.value;
int64_t $tmp2594 = $tmp2592 - $tmp2593;
frost$core$Int64 $tmp2595 = (frost$core$Int64) {$tmp2594};
frost$core$Int64 $tmp2596 = (frost$core$Int64) {1};
frost$core$Int64 $tmp2597 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp2598 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp2599 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2595, $tmp2596, $tmp2597, $tmp2598);
frost$core$Int64 $tmp2600 = $tmp2599.start;
*(&local0) = $tmp2600;
frost$core$Int64 $tmp2601 = $tmp2599.end;
frost$core$Int64 $tmp2602 = $tmp2599.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2603 = $tmp2602.value;
frost$core$UInt64 $tmp2604 = (frost$core$UInt64) {((uint64_t) $tmp2603)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Analyzer.frost:505:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:49
int64_t $tmp2605 = $tmp2602.value;
int64_t $tmp2606 = -$tmp2605;
frost$core$Int64 $tmp2607 = (frost$core$Int64) {$tmp2606};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2608 = $tmp2607.value;
frost$core$UInt64 $tmp2609 = (frost$core$UInt64) {((uint64_t) $tmp2608)};
frost$core$Bit $tmp2610 = $tmp2599.inclusive;
bool $tmp2611 = $tmp2610.value;
frost$core$Int64 $tmp2612 = (frost$core$Int64) {0};
int64_t $tmp2613 = $tmp2602.value;
int64_t $tmp2614 = $tmp2612.value;
bool $tmp2615 = $tmp2613 >= $tmp2614;
frost$core$Bit $tmp2616 = (frost$core$Bit) {$tmp2615};
bool $tmp2617 = $tmp2616.value;
if ($tmp2617) goto block15; else goto block16;
block15:;
if ($tmp2611) goto block17; else goto block18;
block17:;
int64_t $tmp2618 = $tmp2600.value;
int64_t $tmp2619 = $tmp2601.value;
bool $tmp2620 = $tmp2618 <= $tmp2619;
frost$core$Bit $tmp2621 = (frost$core$Bit) {$tmp2620};
bool $tmp2622 = $tmp2621.value;
if ($tmp2622) goto block12; else goto block13;
block18:;
int64_t $tmp2623 = $tmp2600.value;
int64_t $tmp2624 = $tmp2601.value;
bool $tmp2625 = $tmp2623 < $tmp2624;
frost$core$Bit $tmp2626 = (frost$core$Bit) {$tmp2625};
bool $tmp2627 = $tmp2626.value;
if ($tmp2627) goto block12; else goto block13;
block16:;
if ($tmp2611) goto block19; else goto block20;
block19:;
int64_t $tmp2628 = $tmp2600.value;
int64_t $tmp2629 = $tmp2601.value;
bool $tmp2630 = $tmp2628 >= $tmp2629;
frost$core$Bit $tmp2631 = (frost$core$Bit) {$tmp2630};
bool $tmp2632 = $tmp2631.value;
if ($tmp2632) goto block12; else goto block13;
block20:;
int64_t $tmp2633 = $tmp2600.value;
int64_t $tmp2634 = $tmp2601.value;
bool $tmp2635 = $tmp2633 > $tmp2634;
frost$core$Bit $tmp2636 = (frost$core$Bit) {$tmp2635};
bool $tmp2637 = $tmp2636.value;
if ($tmp2637) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:506
frost$collections$Array** $tmp2638 = &param1->statements;
frost$collections$Array* $tmp2639 = *$tmp2638;
frost$core$Int64 $tmp2640 = *(&local0);
frost$core$Object* $tmp2641 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp2639, $tmp2640);
frost$core$Frost$unref$frost$core$Object$Q($tmp2641);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:507
frost$collections$Array** $tmp2642 = &param1->ids;
frost$collections$Array* $tmp2643 = *$tmp2642;
frost$core$Int64 $tmp2644 = *(&local0);
frost$core$Object* $tmp2645 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp2643, $tmp2644);
frost$core$Frost$unref$frost$core$Object$Q($tmp2645);
frost$core$Int64 $tmp2646 = *(&local0);
if ($tmp2617) goto block22; else goto block23;
block22:;
int64_t $tmp2647 = $tmp2601.value;
int64_t $tmp2648 = $tmp2646.value;
int64_t $tmp2649 = $tmp2647 - $tmp2648;
frost$core$Int64 $tmp2650 = (frost$core$Int64) {$tmp2649};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2651 = $tmp2650.value;
frost$core$UInt64 $tmp2652 = (frost$core$UInt64) {((uint64_t) $tmp2651)};
if ($tmp2611) goto block25; else goto block26;
block25:;
uint64_t $tmp2653 = $tmp2652.value;
uint64_t $tmp2654 = $tmp2604.value;
bool $tmp2655 = $tmp2653 >= $tmp2654;
frost$core$Bit $tmp2656 = (frost$core$Bit) {$tmp2655};
bool $tmp2657 = $tmp2656.value;
if ($tmp2657) goto block21; else goto block13;
block26:;
uint64_t $tmp2658 = $tmp2652.value;
uint64_t $tmp2659 = $tmp2604.value;
bool $tmp2660 = $tmp2658 > $tmp2659;
frost$core$Bit $tmp2661 = (frost$core$Bit) {$tmp2660};
bool $tmp2662 = $tmp2661.value;
if ($tmp2662) goto block21; else goto block13;
block23:;
int64_t $tmp2663 = $tmp2646.value;
int64_t $tmp2664 = $tmp2601.value;
int64_t $tmp2665 = $tmp2663 - $tmp2664;
frost$core$Int64 $tmp2666 = (frost$core$Int64) {$tmp2665};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2667 = $tmp2666.value;
frost$core$UInt64 $tmp2668 = (frost$core$UInt64) {((uint64_t) $tmp2667)};
if ($tmp2611) goto block28; else goto block29;
block28:;
uint64_t $tmp2669 = $tmp2668.value;
uint64_t $tmp2670 = $tmp2609.value;
bool $tmp2671 = $tmp2669 >= $tmp2670;
frost$core$Bit $tmp2672 = (frost$core$Bit) {$tmp2671};
bool $tmp2673 = $tmp2672.value;
if ($tmp2673) goto block21; else goto block13;
block29:;
uint64_t $tmp2674 = $tmp2668.value;
uint64_t $tmp2675 = $tmp2609.value;
bool $tmp2676 = $tmp2674 > $tmp2675;
frost$core$Bit $tmp2677 = (frost$core$Bit) {$tmp2676};
bool $tmp2678 = $tmp2677.value;
if ($tmp2678) goto block21; else goto block13;
block21:;
int64_t $tmp2679 = $tmp2646.value;
int64_t $tmp2680 = $tmp2602.value;
int64_t $tmp2681 = $tmp2679 + $tmp2680;
frost$core$Int64 $tmp2682 = (frost$core$Int64) {$tmp2681};
*(&local0) = $tmp2682;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:512
org$frostlang$frostc$IR** $tmp2683 = &param0->ir;
org$frostlang$frostc$IR* $tmp2684 = *$tmp2683;
frost$collections$Array** $tmp2685 = &$tmp2684->blocks;
frost$collections$Array* $tmp2686 = *$tmp2685;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:512:33
frost$core$Int64 $tmp2687 = (frost$core$Int64) {0};
int64_t $tmp2688 = param1.value;
int64_t $tmp2689 = $tmp2687.value;
bool $tmp2690 = $tmp2688 >= $tmp2689;
frost$core$Bit $tmp2691 = (frost$core$Bit) {$tmp2690};
bool $tmp2692 = $tmp2691.value;
if ($tmp2692) goto block4; else goto block3;
block4:;
ITable* $tmp2693 = ((frost$collections$CollectionView*) $tmp2686)->$class->itable;
while ($tmp2693->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2693 = $tmp2693->next;
}
$fn2695 $tmp2694 = $tmp2693->methods[0];
frost$core$Int64 $tmp2696 = $tmp2694(((frost$collections$CollectionView*) $tmp2686));
int64_t $tmp2697 = param1.value;
int64_t $tmp2698 = $tmp2696.value;
bool $tmp2699 = $tmp2697 < $tmp2698;
frost$core$Bit $tmp2700 = (frost$core$Bit) {$tmp2699};
bool $tmp2701 = $tmp2700.value;
if ($tmp2701) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp2702 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2703, $tmp2702, &$s2704);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2705 = &$tmp2686->data;
frost$core$Object** $tmp2706 = *$tmp2705;
int64_t $tmp2707 = param1.value;
frost$core$Object* $tmp2708 = $tmp2706[$tmp2707];
frost$core$Frost$ref$frost$core$Object$Q($tmp2708);
org$frostlang$frostc$IR$Block$ID* $tmp2709 = &((org$frostlang$frostc$IR$Block*) $tmp2708)->id;
org$frostlang$frostc$IR$Block$ID $tmp2710 = *$tmp2709;
*(&local0) = $tmp2710;
frost$core$Frost$unref$frost$core$Object$Q($tmp2708);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:513
org$frostlang$frostc$IR** $tmp2711 = &param0->ir;
org$frostlang$frostc$IR* $tmp2712 = *$tmp2711;
frost$collections$Array** $tmp2713 = &$tmp2712->blocks;
frost$collections$Array* $tmp2714 = *$tmp2713;
frost$core$Object* $tmp2715 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp2714, param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp2715);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:514
org$frostlang$frostc$IR** $tmp2716 = &param0->ir;
org$frostlang$frostc$IR* $tmp2717 = *$tmp2716;
frost$collections$Array** $tmp2718 = &$tmp2717->blocks;
frost$collections$Array* $tmp2719 = *$tmp2718;
ITable* $tmp2720 = ((frost$collections$Iterable*) $tmp2719)->$class->itable;
while ($tmp2720->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2720 = $tmp2720->next;
}
$fn2722 $tmp2721 = $tmp2720->methods[0];
frost$collections$Iterator* $tmp2723 = $tmp2721(((frost$collections$Iterable*) $tmp2719));
goto block5;
block5:;
ITable* $tmp2724 = $tmp2723->$class->itable;
while ($tmp2724->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2724 = $tmp2724->next;
}
$fn2726 $tmp2725 = $tmp2724->methods[0];
frost$core$Bit $tmp2727 = $tmp2725($tmp2723);
bool $tmp2728 = $tmp2727.value;
if ($tmp2728) goto block7; else goto block6;
block6:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2729 = $tmp2723->$class->itable;
while ($tmp2729->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2729 = $tmp2729->next;
}
$fn2731 $tmp2730 = $tmp2729->methods[1];
frost$core$Object* $tmp2732 = $tmp2730($tmp2723);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2732)));
org$frostlang$frostc$IR$Block* $tmp2733 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2733));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp2732);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:515
org$frostlang$frostc$IR$Block* $tmp2734 = *(&local1);
frost$collections$Array** $tmp2735 = &$tmp2734->statements;
frost$collections$Array* $tmp2736 = *$tmp2735;
ITable* $tmp2737 = ((frost$collections$CollectionView*) $tmp2736)->$class->itable;
while ($tmp2737->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2737 = $tmp2737->next;
}
$fn2739 $tmp2738 = $tmp2737->methods[0];
frost$core$Int64 $tmp2740 = $tmp2738(((frost$collections$CollectionView*) $tmp2736));
frost$core$Int64 $tmp2741 = (frost$core$Int64) {1};
int64_t $tmp2742 = $tmp2740.value;
int64_t $tmp2743 = $tmp2741.value;
int64_t $tmp2744 = $tmp2742 - $tmp2743;
frost$core$Int64 $tmp2745 = (frost$core$Int64) {$tmp2744};
*(&local2) = $tmp2745;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:516
org$frostlang$frostc$IR$Block* $tmp2746 = *(&local1);
frost$collections$Array** $tmp2747 = &$tmp2746->statements;
frost$collections$Array* $tmp2748 = *$tmp2747;
frost$core$Int64 $tmp2749 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Analyzer.frost:516:31
frost$core$Int64 $tmp2750 = (frost$core$Int64) {0};
int64_t $tmp2751 = $tmp2749.value;
int64_t $tmp2752 = $tmp2750.value;
bool $tmp2753 = $tmp2751 >= $tmp2752;
frost$core$Bit $tmp2754 = (frost$core$Bit) {$tmp2753};
bool $tmp2755 = $tmp2754.value;
if ($tmp2755) goto block11; else goto block10;
block11:;
ITable* $tmp2756 = ((frost$collections$CollectionView*) $tmp2748)->$class->itable;
while ($tmp2756->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2756 = $tmp2756->next;
}
$fn2758 $tmp2757 = $tmp2756->methods[0];
frost$core$Int64 $tmp2759 = $tmp2757(((frost$collections$CollectionView*) $tmp2748));
int64_t $tmp2760 = $tmp2749.value;
int64_t $tmp2761 = $tmp2759.value;
bool $tmp2762 = $tmp2760 < $tmp2761;
frost$core$Bit $tmp2763 = (frost$core$Bit) {$tmp2762};
bool $tmp2764 = $tmp2763.value;
if ($tmp2764) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp2765 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2766, $tmp2765, &$s2767);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp2768 = &$tmp2748->data;
frost$core$Object** $tmp2769 = *$tmp2768;
int64_t $tmp2770 = $tmp2749.value;
frost$core$Object* $tmp2771 = $tmp2769[$tmp2770];
frost$core$Frost$ref$frost$core$Object$Q($tmp2771);
frost$core$Int64* $tmp2772 = &((org$frostlang$frostc$IR$Statement*) $tmp2771)->$rawValue;
frost$core$Int64 $tmp2773 = *$tmp2772;
frost$core$Int64 $tmp2774 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:517:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2775 = $tmp2773.value;
int64_t $tmp2776 = $tmp2774.value;
bool $tmp2777 = $tmp2775 == $tmp2776;
frost$core$Bit $tmp2778 = frost$core$Bit$init$builtin_bit($tmp2777);
bool $tmp2779 = $tmp2778.value;
if ($tmp2779) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Position* $tmp2780 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2771)->$data + 0);
org$frostlang$frostc$Position $tmp2781 = *$tmp2780;
org$frostlang$frostc$IR$Block$ID* $tmp2782 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2771)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp2783 = *$tmp2782;
*(&local3) = $tmp2783;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:518
org$frostlang$frostc$IR$Block$ID $tmp2784 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp2785 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:518:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int64 $tmp2786 = $tmp2784.value;
frost$core$Int64 $tmp2787 = $tmp2785.value;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2788 = $tmp2786.value;
int64_t $tmp2789 = $tmp2787.value;
bool $tmp2790 = $tmp2788 == $tmp2789;
frost$core$Bit $tmp2791 = frost$core$Bit$init$builtin_bit($tmp2790);
bool $tmp2792 = $tmp2791.value;
if ($tmp2792) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:519
org$frostlang$frostc$IR$Block* $tmp2793 = *(&local1);
$fn2795 $tmp2794 = ($fn2795) param0->$class->vtable[11];
$tmp2794(param0, $tmp2793);
goto block17;
block17:;
goto block12;
block14:;
frost$core$Int64 $tmp2796 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Analyzer.frost:522:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2797 = $tmp2773.value;
int64_t $tmp2798 = $tmp2796.value;
bool $tmp2799 = $tmp2797 == $tmp2798;
frost$core$Bit $tmp2800 = frost$core$Bit$init$builtin_bit($tmp2799);
bool $tmp2801 = $tmp2800.value;
if ($tmp2801) goto block20; else goto block12;
block20:;
org$frostlang$frostc$Position* $tmp2802 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2771)->$data + 0);
org$frostlang$frostc$Position $tmp2803 = *$tmp2802;
*(&local4) = $tmp2803;
org$frostlang$frostc$IR$Value** $tmp2804 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp2771)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp2805 = *$tmp2804;
org$frostlang$frostc$IR$Block$ID* $tmp2806 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2771)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp2807 = *$tmp2806;
*(&local5) = $tmp2807;
org$frostlang$frostc$IR$Block$ID* $tmp2808 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2771)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp2809 = *$tmp2808;
*(&local6) = $tmp2809;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:523
org$frostlang$frostc$IR$Block$ID $tmp2810 = *(&local5);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2811;
$tmp2811 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2811->value = $tmp2810;
org$frostlang$frostc$IR$Block$ID $tmp2812 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2813;
$tmp2813 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2813->value = $tmp2812;
ITable* $tmp2814 = ((frost$core$Equatable*) $tmp2811)->$class->itable;
while ($tmp2814->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2814 = $tmp2814->next;
}
$fn2816 $tmp2815 = $tmp2814->methods[1];
frost$core$Bit $tmp2817 = $tmp2815(((frost$core$Equatable*) $tmp2811), ((frost$core$Equatable*) $tmp2813));
bool $tmp2818 = $tmp2817.value;
if ($tmp2818) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp2819 = (frost$core$Int64) {523};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2820, $tmp2819);
abort(); // unreachable
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2813)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2811)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:524
org$frostlang$frostc$IR$Block$ID $tmp2821 = *(&local5);
org$frostlang$frostc$IR$Block$ID $tmp2822 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:524:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int64 $tmp2823 = $tmp2821.value;
frost$core$Int64 $tmp2824 = $tmp2822.value;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2825 = $tmp2823.value;
int64_t $tmp2826 = $tmp2824.value;
bool $tmp2827 = $tmp2825 == $tmp2826;
frost$core$Bit $tmp2828 = frost$core$Bit$init$builtin_bit($tmp2827);
bool $tmp2829 = $tmp2828.value;
if ($tmp2829) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:525
org$frostlang$frostc$IR$Block* $tmp2830 = *(&local1);
frost$collections$Array** $tmp2831 = &$tmp2830->statements;
frost$collections$Array* $tmp2832 = *$tmp2831;
frost$core$Int64 $tmp2833 = *(&local2);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2834 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2835 = (frost$core$Int64) {1};
org$frostlang$frostc$Position $tmp2836 = *(&local4);
org$frostlang$frostc$IR$Block$ID $tmp2837 = *(&local6);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2834, $tmp2835, $tmp2836, $tmp2837);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int64, value:frost.collections.Array.T) from Analyzer.frost:525:37
frost$core$Int64 $tmp2838 = (frost$core$Int64) {0};
int64_t $tmp2839 = $tmp2833.value;
int64_t $tmp2840 = $tmp2838.value;
bool $tmp2841 = $tmp2839 >= $tmp2840;
frost$core$Bit $tmp2842 = (frost$core$Bit) {$tmp2841};
bool $tmp2843 = $tmp2842.value;
if ($tmp2843) goto block32; else goto block31;
block32:;
ITable* $tmp2844 = ((frost$collections$CollectionView*) $tmp2832)->$class->itable;
while ($tmp2844->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2844 = $tmp2844->next;
}
$fn2846 $tmp2845 = $tmp2844->methods[0];
frost$core$Int64 $tmp2847 = $tmp2845(((frost$collections$CollectionView*) $tmp2832));
int64_t $tmp2848 = $tmp2833.value;
int64_t $tmp2849 = $tmp2847.value;
bool $tmp2850 = $tmp2848 < $tmp2849;
frost$core$Bit $tmp2851 = (frost$core$Bit) {$tmp2850};
bool $tmp2852 = $tmp2851.value;
if ($tmp2852) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp2853 = (frost$core$Int64) {27};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2854, $tmp2853, &$s2855);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:27
frost$core$Object*** $tmp2856 = &$tmp2832->data;
frost$core$Object** $tmp2857 = *$tmp2856;
int64_t $tmp2858 = $tmp2833.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
frost$core$Object* $tmp2859 = $tmp2857[$tmp2858];
frost$core$Frost$unref$frost$core$Object$Q($tmp2859);
$tmp2857[$tmp2858] = ((frost$core$Object*) $tmp2834);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
goto block25;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:527
org$frostlang$frostc$IR$Block$ID $tmp2860 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp2861 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:527:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int64 $tmp2862 = $tmp2860.value;
frost$core$Int64 $tmp2863 = $tmp2861.value;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2864 = $tmp2862.value;
int64_t $tmp2865 = $tmp2863.value;
bool $tmp2866 = $tmp2864 == $tmp2865;
frost$core$Bit $tmp2867 = frost$core$Bit$init$builtin_bit($tmp2866);
bool $tmp2868 = $tmp2867.value;
if ($tmp2868) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:528
org$frostlang$frostc$IR$Block* $tmp2869 = *(&local1);
frost$collections$Array** $tmp2870 = &$tmp2869->statements;
frost$collections$Array* $tmp2871 = *$tmp2870;
frost$core$Int64 $tmp2872 = *(&local2);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2873 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2874 = (frost$core$Int64) {1};
org$frostlang$frostc$Position $tmp2875 = *(&local4);
org$frostlang$frostc$IR$Block$ID $tmp2876 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2873, $tmp2874, $tmp2875, $tmp2876);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int64, value:frost.collections.Array.T) from Analyzer.frost:528:37
frost$core$Int64 $tmp2877 = (frost$core$Int64) {0};
int64_t $tmp2878 = $tmp2872.value;
int64_t $tmp2879 = $tmp2877.value;
bool $tmp2880 = $tmp2878 >= $tmp2879;
frost$core$Bit $tmp2881 = (frost$core$Bit) {$tmp2880};
bool $tmp2882 = $tmp2881.value;
if ($tmp2882) goto block40; else goto block39;
block40:;
ITable* $tmp2883 = ((frost$collections$CollectionView*) $tmp2871)->$class->itable;
while ($tmp2883->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2883 = $tmp2883->next;
}
$fn2885 $tmp2884 = $tmp2883->methods[0];
frost$core$Int64 $tmp2886 = $tmp2884(((frost$collections$CollectionView*) $tmp2871));
int64_t $tmp2887 = $tmp2872.value;
int64_t $tmp2888 = $tmp2886.value;
bool $tmp2889 = $tmp2887 < $tmp2888;
frost$core$Bit $tmp2890 = (frost$core$Bit) {$tmp2889};
bool $tmp2891 = $tmp2890.value;
if ($tmp2891) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp2892 = (frost$core$Int64) {27};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2893, $tmp2892, &$s2894);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:27
frost$core$Object*** $tmp2895 = &$tmp2871->data;
frost$core$Object** $tmp2896 = *$tmp2895;
int64_t $tmp2897 = $tmp2872.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2873));
frost$core$Object* $tmp2898 = $tmp2896[$tmp2897];
frost$core$Frost$unref$frost$core$Object$Q($tmp2898);
$tmp2896[$tmp2897] = ((frost$core$Object*) $tmp2873);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2873));
goto block34;
block34:;
goto block25;
block25:;
goto block12;
block12:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2771);
frost$core$Frost$unref$frost$core$Object$Q($tmp2732);
org$frostlang$frostc$IR$Block* $tmp2899 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
return;

}
void org$frostlang$frostc$pass$Analyzer$cleanup(org$frostlang$frostc$pass$Analyzer* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:14
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp2900 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2901 = *$tmp2900;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
org$frostlang$frostc$MethodDecl** $tmp2902 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2903 = *$tmp2902;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2903));
org$frostlang$frostc$IR** $tmp2904 = &param0->ir;
org$frostlang$frostc$IR* $tmp2905 = *$tmp2904;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
frost$collections$HashMap** $tmp2906 = &param0->blocks;
frost$collections$HashMap* $tmp2907 = *$tmp2906;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
frost$collections$HashMap** $tmp2908 = &param0->predecessors;
frost$collections$HashMap* $tmp2909 = *$tmp2908;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
frost$collections$HashMap** $tmp2910 = &param0->entryStates;
frost$collections$HashMap* $tmp2911 = *$tmp2910;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
frost$collections$HashSet** $tmp2912 = &param0->worklist;
frost$collections$HashSet* $tmp2913 = *$tmp2912;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
frost$collections$HashMap** $tmp2914 = &param0->statements;
frost$collections$HashMap* $tmp2915 = *$tmp2914;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
return;

}

