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
#include "frost/core/Int.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt64.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
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
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Weak.h"
#include "frost/io/Console.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$Analyzer$class_type org$frostlang$frostc$pass$Analyzer$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$pass$Analyzer$cleanup, org$frostlang$frostc$pass$Analyzer$getValue$org$frostlang$frostc$IR$Value$org$frostlang$frostc$pass$Analyzer$State$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue, org$frostlang$frostc$pass$Analyzer$propagate$org$frostlang$frostc$pass$Analyzer$BlockExit$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$pass$Analyzer$getBlock$org$frostlang$frostc$IR$Block$ID$R$org$frostlang$frostc$IR$Block, org$frostlang$frostc$pass$Analyzer$updateStateForExitIndex$org$frostlang$frostc$IR$Block$frost$core$Int$org$frostlang$frostc$pass$Analyzer$State, org$frostlang$frostc$pass$Analyzer$binaryValue$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$pass$Analyzer$State$org$frostlang$frostc$Type$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue, org$frostlang$frostc$pass$Analyzer$computeExitState$org$frostlang$frostc$pass$Analyzer$BlockExit$frost$core$Bit$R$org$frostlang$frostc$pass$Analyzer$State, org$frostlang$frostc$pass$Analyzer$process$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$pass$Analyzer$dump, org$frostlang$frostc$pass$Analyzer$analyze, org$frostlang$frostc$pass$Analyzer$makeUnreachable$org$frostlang$frostc$IR$Block, org$frostlang$frostc$pass$Analyzer$removeBlock$frost$core$Int} };

typedef frost$core$Int (*$fn82)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn180)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn209)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn223)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn227)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, frost$core$Bit);
typedef frost$core$Bit (*$fn238)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn243)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn253)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, frost$core$Bit);
typedef frost$core$Bit (*$fn256)(org$frostlang$frostc$pass$Analyzer$State*, org$frostlang$frostc$Compiler*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$collections$Iterator* (*$fn275)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn279)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn284)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn308)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn323)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn357)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$collections$Iterator* (*$fn370)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn374)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn379)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn439)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn476)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn514)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn536)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn589)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn675)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block* (*$fn739)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int (*$fn748)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn784)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn811)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn858)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$expression$Binary$Operator, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*, org$frostlang$frostc$Type*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn896)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn915)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn924)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn938)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn979)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1015)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1028)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1041)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1054)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1078)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1103)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1116)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1129)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1142)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1166)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1220)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1236)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1288)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn1319)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1344)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1366)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1369)(org$frostlang$frostc$pass$Analyzer$DataFlowValue*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1414)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1464)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1519)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1545)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn1583)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1601)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1650)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Int (*$fn1660)(frost$collections$CollectionView*);
typedef void (*$fn1700)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*, frost$core$Int, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$IR$Block* (*$fn1705)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int (*$fn1716)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1731)(frost$collections$CollectionView*);
typedef void (*$fn1768)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn1793)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn1804)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int (*$fn1832)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1847)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1863)(frost$core$Object*);
typedef frost$core$Int (*$fn1880)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1902)(frost$core$Object*);
typedef frost$core$Int (*$fn1921)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1937)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1968)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1972)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1977)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1985)(frost$core$Object*);
typedef frost$core$String* (*$fn2008)(frost$core$Object*);
typedef frost$core$Int (*$fn2019)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2050)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2067)(frost$core$Object*);
typedef frost$core$Int (*$fn2082)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2098)(frost$core$Object*);
typedef frost$core$Int (*$fn2135)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2192)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2217)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2221)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2226)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2242)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2275)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2303)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2353)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2377)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2389)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn2393)(frost$collections$Iterator*);
typedef void (*$fn2403)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn2410)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2414)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2419)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2443)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2478)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2491)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn2511)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, frost$core$Bit);
typedef frost$core$Int (*$fn2543)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn2559)(org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int (*$fn2569)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2588)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2686)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2714)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2718)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2723)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2731)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2750)(frost$collections$CollectionView*);
typedef void (*$fn2788)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*);
typedef frost$core$Bit (*$fn2809)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn2839)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2879)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72", 34, -7908766228797686597, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x76\x61\x6c\x75\x65\x20\x27", 19, 3303349432046188092, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s522 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s545 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s680 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s792 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s793 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s819 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s820 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s986 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s1000 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1058 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1059 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1065 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1073 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s1426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1473 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s1476 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1668 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1669 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s1739 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1740 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1855 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1856 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1866 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b\x20\x65\x6e\x64\x65\x64\x20\x69\x6e\x20\x6e\x6f\x6e\x74\x65\x72\x6d\x69\x6e\x61\x6c\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x20", 37, 4880269855066615229, NULL };
static frost$core$String $s1867 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1872 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1905 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 2638862777294684392, NULL };
static frost$core$String $s1907 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s1929 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1930 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1941 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1942 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1988 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1990 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s2011 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s2012 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s2058 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2059 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2069 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s2090 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2091 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2451 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x20\x65\x78\x69\x74\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 33, 2495389199813969088, NULL };
static frost$core$String $s2551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2578 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s2694 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2695 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2758 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2759 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2813 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s2847 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s2887 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2888 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };

void org$frostlang$frostc$pass$Analyzer$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$MethodDecl* param2, org$frostlang$frostc$IR* param3) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:150
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:152
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:154
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:156
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:158
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:161
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp22 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp23 = *$tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
org$frostlang$frostc$Compiler** $tmp24 = &param0->compiler;
*$tmp24 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:162
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$MethodDecl** $tmp25 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp26 = *$tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
org$frostlang$frostc$MethodDecl** $tmp27 = &param0->m;
*$tmp27 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:163
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
frost$core$Int local2;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$IR$Statement$ID local6;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local7 = NULL;
org$frostlang$frostc$Type* local8 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:167
frost$core$Int* $tmp31 = &param1->$rawValue;
frost$core$Int $tmp32 = *$tmp31;
frost$core$Int $tmp33 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:168:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp34 = $tmp32.value;
int64_t $tmp35 = $tmp33.value;
bool $tmp36 = $tmp34 == $tmp35;
frost$core$Bit $tmp37 = (frost$core$Bit) {$tmp36};
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:169
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
frost$core$Int $tmp47 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:171:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp48 = $tmp32.value;
int64_t $tmp49 = $tmp47.value;
bool $tmp50 = $tmp48 == $tmp49;
frost$core$Bit $tmp51 = (frost$core$Bit) {$tmp50};
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:172
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
frost$core$Int $tmp61 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:174:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp62 = $tmp32.value;
int64_t $tmp63 = $tmp61.value;
bool $tmp64 = $tmp62 == $tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block8; else goto block9;
block8:;
frost$core$Int* $tmp67 = (frost$core$Int*) (param1->$data + 0);
frost$core$Int $tmp68 = *$tmp67;
*(&local2) = $tmp68;
org$frostlang$frostc$Type** $tmp69 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp70 = *$tmp69;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:175
frost$collections$Array** $tmp71 = &param2->locals;
frost$collections$Array* $tmp72 = *$tmp71;
frost$core$Int $tmp73 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:175:32
frost$core$Int $tmp74 = (frost$core$Int) {0u};
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
frost$core$Int $tmp83 = $tmp81(((frost$collections$CollectionView*) $tmp72));
int64_t $tmp84 = $tmp73.value;
int64_t $tmp85 = $tmp83.value;
bool $tmp86 = $tmp84 < $tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block12; else goto block13;
block13:;
frost$core$Int $tmp89 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s90, $tmp89, &$s91);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp92 = &$tmp72->data;
frost$core$Object** $tmp93 = *$tmp92;
frost$core$Int64 $tmp94 = frost$core$Int64$init$frost$core$Int($tmp73);
int64_t $tmp95 = $tmp94.value;
frost$core$Object* $tmp96 = $tmp93[$tmp95];
frost$core$Frost$ref$frost$core$Object$Q($tmp96);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp96)));
frost$core$Frost$unref$frost$core$Object$Q($tmp96);
return ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp96);
block9:;
frost$core$Int $tmp97 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:177:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp98 = $tmp32.value;
int64_t $tmp99 = $tmp97.value;
bool $tmp100 = $tmp98 == $tmp99;
frost$core$Bit $tmp101 = (frost$core$Bit) {$tmp100};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block15; else goto block16;
block15:;
org$frostlang$frostc$Type** $tmp103 = (org$frostlang$frostc$Type**) (param1->$data + 0);
org$frostlang$frostc$Type* $tmp104 = *$tmp103;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
org$frostlang$frostc$Type* $tmp105 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local3) = $tmp104;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:178
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp106 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp107 = *(&local3);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp106, $tmp107);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
org$frostlang$frostc$Type* $tmp108 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp106;
block16:;
frost$core$Int $tmp109 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:180:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp110 = $tmp32.value;
int64_t $tmp111 = $tmp109.value;
bool $tmp112 = $tmp110 == $tmp111;
frost$core$Bit $tmp113 = (frost$core$Bit) {$tmp112};
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block18; else goto block19;
block18:;
frost$core$Int* $tmp115 = (frost$core$Int*) (param1->$data + 0);
frost$core$Int $tmp116 = *$tmp115;
org$frostlang$frostc$Type** $tmp117 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp118 = *$tmp117;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
org$frostlang$frostc$Type* $tmp119 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
*(&local4) = $tmp118;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:181
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp120 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp121 = *(&local4);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp120, $tmp121);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
org$frostlang$frostc$Type* $tmp122 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp120;
block19:;
frost$core$Int $tmp123 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:183:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp124 = $tmp32.value;
int64_t $tmp125 = $tmp123.value;
bool $tmp126 = $tmp124 == $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block21; else goto block22;
block21:;
frost$core$Real64* $tmp129 = (frost$core$Real64*) (param1->$data + 0);
frost$core$Real64 $tmp130 = *$tmp129;
org$frostlang$frostc$Type** $tmp131 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp132 = *$tmp131;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
org$frostlang$frostc$Type* $tmp133 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local5) = $tmp132;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:184
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp134 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp135 = *(&local5);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp134, $tmp135);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
org$frostlang$frostc$Type* $tmp136 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return $tmp134;
block22:;
frost$core$Int $tmp137 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:186:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp138 = $tmp32.value;
int64_t $tmp139 = $tmp137.value;
bool $tmp140 = $tmp138 == $tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block24; else goto block25;
block24:;
org$frostlang$frostc$IR$Statement$ID* $tmp143 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp144 = *$tmp143;
*(&local6) = $tmp144;
org$frostlang$frostc$Type** $tmp145 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp146 = *$tmp145;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:187
frost$collections$HashMap** $tmp147 = &param2->statements;
frost$collections$HashMap* $tmp148 = *$tmp147;
org$frostlang$frostc$IR$Statement$ID $tmp149 = *(&local6);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp150;
$tmp150 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp150->value = $tmp149;
frost$core$Object* $tmp151 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp148, ((frost$collections$Key*) $tmp150));
*(&local7) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp151)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp152 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
*(&local7) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp151);
frost$core$Frost$unref$frost$core$Object$Q($tmp151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp150)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:188
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp153 = *(&local7);
frost$core$Bit $tmp154 = (frost$core$Bit) {$tmp153 != NULL};
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:189
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp156 = *(&local7);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp157 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
*(&local7) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
return $tmp156;
block28:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:191
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp158 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp159 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp160 = *$tmp159;
org$frostlang$frostc$Type** $tmp161 = &$tmp160->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp162 = *$tmp161;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp158, $tmp162);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp163 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local7) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
return $tmp158;
block25:;
frost$core$Int $tmp164 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:193:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp165 = $tmp32.value;
int64_t $tmp166 = $tmp164.value;
bool $tmp167 = $tmp165 == $tmp166;
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block29; else goto block30;
block29:;
frost$core$String** $tmp170 = (frost$core$String**) (param1->$data + 0);
frost$core$String* $tmp171 = *$tmp170;
org$frostlang$frostc$Type** $tmp172 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp173 = *$tmp172;
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
org$frostlang$frostc$Type* $tmp174 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local8) = $tmp173;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:194
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp175 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp176 = *(&local8);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp175, $tmp176);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
org$frostlang$frostc$Type* $tmp177 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
return $tmp175;
block30:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:197
frost$core$Int $tmp178 = (frost$core$Int) {197u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:197:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn180 $tmp179 = ($fn180) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp181 = $tmp179(((frost$core$Object*) param1));
frost$core$String* $tmp182 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s183, $tmp181);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$String* $tmp184 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp182, &$s185);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s186, $tmp178, $tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:203
frost$collections$HashMap** $tmp187 = &param0->predecessors;
frost$collections$HashMap* $tmp188 = *$tmp187;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp189;
$tmp189 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp189->value = param2;
frost$core$Object* $tmp190 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp188, ((frost$collections$Key*) $tmp189));
*(&local0) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp190)));
frost$collections$HashSet* $tmp191 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local0) = ((frost$collections$HashSet*) $tmp190);
frost$core$Frost$unref$frost$core$Object$Q($tmp190);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp189)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:204
frost$collections$HashSet* $tmp192 = *(&local0);
frost$core$Bit $tmp193 = (frost$core$Bit) {$tmp192 == NULL};
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:205
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp195 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$collections$HashSet* $tmp196 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local0) = $tmp195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:206
frost$collections$HashMap** $tmp197 = &param0->predecessors;
frost$collections$HashMap* $tmp198 = *$tmp197;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp199;
$tmp199 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp199->value = param2;
frost$collections$HashSet* $tmp200 = *(&local0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp198, ((frost$collections$Key*) $tmp199), ((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp199)));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:208
frost$collections$HashSet* $tmp201 = *(&local0);
org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper* $tmp202;
$tmp202 = (org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$BlockExit$wrapperclass);
$tmp202->value = param1;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:208:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp203 = &$tmp201->contents;
frost$collections$HashMap* $tmp204 = *$tmp203;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp204, ((frost$collections$Key*) $tmp202), ((frost$core$Object*) ((frost$collections$Key*) $tmp202)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp202)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:209
frost$core$Bit $tmp205 = (frost$core$Bit) {false};
*(&local1) = $tmp205;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:210
frost$collections$HashSet* $tmp206 = *(&local0);
ITable* $tmp207 = ((frost$collections$Iterable*) $tmp206)->$class->itable;
while ($tmp207->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp207 = $tmp207->next;
}
$fn209 $tmp208 = $tmp207->methods[0];
frost$collections$Iterator* $tmp210 = $tmp208(((frost$collections$Iterable*) $tmp206));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$collections$Iterator* $tmp211 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
*(&local2) = $tmp210;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:211
frost$collections$HashMap** $tmp212 = &param0->entryStates;
frost$collections$HashMap* $tmp213 = *$tmp212;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp214;
$tmp214 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp214->value = param2;
frost$core$Object* $tmp215 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp213, ((frost$collections$Key*) $tmp214));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp215)));
org$frostlang$frostc$pass$Analyzer$State* $tmp216 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) $tmp215);
frost$core$Frost$unref$frost$core$Object$Q($tmp215);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp214)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:212
org$frostlang$frostc$pass$Analyzer$State* $tmp217 = *(&local3);
frost$core$Bit $tmp218 = (frost$core$Bit) {$tmp217 == NULL};
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:213
frost$collections$Iterator* $tmp220 = *(&local2);
ITable* $tmp221 = $tmp220->$class->itable;
while ($tmp221->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp221 = $tmp221->next;
}
$fn223 $tmp222 = $tmp221->methods[1];
frost$core$Object* $tmp224 = $tmp222($tmp220);
frost$core$Bit $tmp225 = (frost$core$Bit) {false};
$fn227 $tmp226 = ($fn227) param0->$class->vtable[7];
org$frostlang$frostc$pass$Analyzer$State* $tmp228 = $tmp226(param0, ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) $tmp224)->value, $tmp225);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
org$frostlang$frostc$pass$Analyzer$State* $tmp229 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local3) = $tmp228;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$Frost$unref$frost$core$Object$Q($tmp224);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:214
frost$collections$HashMap** $tmp230 = &param0->entryStates;
frost$collections$HashMap* $tmp231 = *$tmp230;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp232;
$tmp232 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp232->value = param2;
org$frostlang$frostc$pass$Analyzer$State* $tmp233 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp231, ((frost$collections$Key*) $tmp232), ((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp232)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:215
frost$core$Bit $tmp234 = (frost$core$Bit) {true};
*(&local1) = $tmp234;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:217
frost$collections$Iterator* $tmp235 = *(&local2);
goto block6;
block6:;
ITable* $tmp236 = $tmp235->$class->itable;
while ($tmp236->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp236 = $tmp236->next;
}
$fn238 $tmp237 = $tmp236->methods[0];
frost$core$Bit $tmp239 = $tmp237($tmp235);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block8; else goto block7;
block7:;
ITable* $tmp241 = $tmp235->$class->itable;
while ($tmp241->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp241 = $tmp241->next;
}
$fn243 $tmp242 = $tmp241->methods[1];
frost$core$Object* $tmp244 = $tmp242($tmp235);
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) $tmp244)->value;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:218
frost$core$Bit $tmp245 = *(&local1);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block9; else goto block10;
block9:;
*(&local5) = $tmp245;
goto block11;
block10:;
org$frostlang$frostc$pass$Analyzer$State* $tmp247 = *(&local3);
org$frostlang$frostc$Compiler** $tmp248 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp249 = *$tmp248;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp250 = *(&local4);
frost$core$Bit $tmp251 = (frost$core$Bit) {false};
$fn253 $tmp252 = ($fn253) param0->$class->vtable[7];
org$frostlang$frostc$pass$Analyzer$State* $tmp254 = $tmp252(param0, $tmp250, $tmp251);
$fn256 $tmp255 = ($fn256) $tmp247->$class->vtable[2];
frost$core$Bit $tmp257 = $tmp255($tmp247, $tmp249, $tmp254);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
*(&local5) = $tmp257;
goto block11;
block11:;
frost$core$Bit $tmp258 = *(&local5);
*(&local1) = $tmp258;
frost$core$Frost$unref$frost$core$Object$Q($tmp244);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:220
frost$core$Bit $tmp259 = *(&local1);
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:221
frost$collections$HashSet** $tmp261 = &param0->worklist;
frost$collections$HashSet* $tmp262 = *$tmp261;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp263;
$tmp263 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp263->value = param2;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:221:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp264 = &$tmp262->contents;
frost$collections$HashMap* $tmp265 = *$tmp264;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp265, ((frost$collections$Key*) $tmp263), ((frost$core$Object*) ((frost$collections$Key*) $tmp263)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp263)));
goto block13;
block13:;
org$frostlang$frostc$pass$Analyzer$State* $tmp266 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$collections$Iterator* $tmp267 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$collections$HashSet* $tmp268 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local0) = ((frost$collections$HashSet*) NULL);
return;

}
org$frostlang$frostc$IR$Block* org$frostlang$frostc$pass$Analyzer$getBlock$org$frostlang$frostc$IR$Block$ID$R$org$frostlang$frostc$IR$Block(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Block$ID param1) {

org$frostlang$frostc$IR$Block* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:226
org$frostlang$frostc$IR** $tmp269 = &param0->ir;
org$frostlang$frostc$IR* $tmp270 = *$tmp269;
frost$collections$Array** $tmp271 = &$tmp270->blocks;
frost$collections$Array* $tmp272 = *$tmp271;
ITable* $tmp273 = ((frost$collections$Iterable*) $tmp272)->$class->itable;
while ($tmp273->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp273 = $tmp273->next;
}
$fn275 $tmp274 = $tmp273->methods[0];
frost$collections$Iterator* $tmp276 = $tmp274(((frost$collections$Iterable*) $tmp272));
goto block1;
block1:;
ITable* $tmp277 = $tmp276->$class->itable;
while ($tmp277->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp277 = $tmp277->next;
}
$fn279 $tmp278 = $tmp277->methods[0];
frost$core$Bit $tmp280 = $tmp278($tmp276);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp282 = $tmp276->$class->itable;
while ($tmp282->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp282 = $tmp282->next;
}
$fn284 $tmp283 = $tmp282->methods[1];
frost$core$Object* $tmp285 = $tmp283($tmp276);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp285)));
org$frostlang$frostc$IR$Block* $tmp286 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local0) = ((org$frostlang$frostc$IR$Block*) $tmp285);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:227
org$frostlang$frostc$IR$Block* $tmp287 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp288 = &$tmp287->id;
org$frostlang$frostc$IR$Block$ID $tmp289 = *$tmp288;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:227:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp290 = $tmp289.value;
frost$core$Int $tmp291 = param1.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp292 = $tmp290.value;
int64_t $tmp293 = $tmp291.value;
bool $tmp294 = $tmp292 == $tmp293;
frost$core$Bit $tmp295 = (frost$core$Bit) {$tmp294};
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:228
org$frostlang$frostc$IR$Block* $tmp297 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Frost$unref$frost$core$Object$Q($tmp285);
org$frostlang$frostc$IR$Block* $tmp298 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
return $tmp297;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp285);
org$frostlang$frostc$IR$Block* $tmp299 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:231
frost$core$Int $tmp300 = (frost$core$Int) {231u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s301, $tmp300);
abort(); // unreachable

}
void org$frostlang$frostc$pass$Analyzer$updateStateForExitIndex$org$frostlang$frostc$IR$Block$frost$core$Int$org$frostlang$frostc$pass$Analyzer$State(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Block* param1, frost$core$Int param2, org$frostlang$frostc$pass$Analyzer$State* param3) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local1 = NULL;
org$frostlang$frostc$Pair* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
frost$core$Int local8;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:247
frost$collections$Array** $tmp302 = &param1->statements;
frost$collections$Array* $tmp303 = *$tmp302;
frost$collections$Array** $tmp304 = &param1->statements;
frost$collections$Array* $tmp305 = *$tmp304;
ITable* $tmp306 = ((frost$collections$CollectionView*) $tmp305)->$class->itable;
while ($tmp306->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp306 = $tmp306->next;
}
$fn308 $tmp307 = $tmp306->methods[0];
frost$core$Int $tmp309 = $tmp307(((frost$collections$CollectionView*) $tmp305));
frost$core$Int $tmp310 = (frost$core$Int) {1u};
int64_t $tmp311 = $tmp309.value;
int64_t $tmp312 = $tmp310.value;
int64_t $tmp313 = $tmp311 - $tmp312;
frost$core$Int $tmp314 = (frost$core$Int) {$tmp313};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:247:27
frost$core$Int $tmp315 = (frost$core$Int) {0u};
int64_t $tmp316 = $tmp314.value;
int64_t $tmp317 = $tmp315.value;
bool $tmp318 = $tmp316 >= $tmp317;
frost$core$Bit $tmp319 = (frost$core$Bit) {$tmp318};
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block4; else goto block3;
block4:;
ITable* $tmp321 = ((frost$collections$CollectionView*) $tmp303)->$class->itable;
while ($tmp321->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp321 = $tmp321->next;
}
$fn323 $tmp322 = $tmp321->methods[0];
frost$core$Int $tmp324 = $tmp322(((frost$collections$CollectionView*) $tmp303));
int64_t $tmp325 = $tmp314.value;
int64_t $tmp326 = $tmp324.value;
bool $tmp327 = $tmp325 < $tmp326;
frost$core$Bit $tmp328 = (frost$core$Bit) {$tmp327};
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block2; else goto block3;
block3:;
frost$core$Int $tmp330 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s331, $tmp330, &$s332);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp333 = &$tmp303->data;
frost$core$Object** $tmp334 = *$tmp333;
frost$core$Int64 $tmp335 = frost$core$Int64$init$frost$core$Int($tmp314);
int64_t $tmp336 = $tmp335.value;
frost$core$Object* $tmp337 = $tmp334[$tmp336];
frost$core$Frost$ref$frost$core$Object$Q($tmp337);
frost$core$Int* $tmp338 = &((org$frostlang$frostc$IR$Statement*) $tmp337)->$rawValue;
frost$core$Int $tmp339 = *$tmp338;
frost$core$Int $tmp340 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:248:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp341 = $tmp339.value;
int64_t $tmp342 = $tmp340.value;
bool $tmp343 = $tmp341 == $tmp342;
frost$core$Bit $tmp344 = (frost$core$Bit) {$tmp343};
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp346 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp337)->$data + 0);
org$frostlang$frostc$Position $tmp347 = *$tmp346;
org$frostlang$frostc$IR$Value** $tmp348 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp337)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp349 = *$tmp348;
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
org$frostlang$frostc$IR$Value* $tmp350 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
*(&local0) = $tmp349;
org$frostlang$frostc$IR$Block$ID* $tmp351 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp337)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp352 = *$tmp351;
org$frostlang$frostc$IR$Block$ID* $tmp353 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp337)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp354 = *$tmp353;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:249
org$frostlang$frostc$IR$Value* $tmp355 = *(&local0);
$fn357 $tmp356 = ($fn357) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp358 = $tmp356(param0, $tmp355, param3);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp359 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local1) = $tmp358;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:250
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp360 = *(&local1);
frost$collections$ListView** $tmp361 = &$tmp360->nonNullImplications;
frost$collections$ListView* $tmp362 = *$tmp361;
frost$core$Bit $tmp363 = (frost$core$Bit) {$tmp362 != NULL};
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:251
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp365 = *(&local1);
frost$collections$ListView** $tmp366 = &$tmp365->nonNullImplications;
frost$collections$ListView* $tmp367 = *$tmp366;
ITable* $tmp368 = ((frost$collections$Iterable*) $tmp367)->$class->itable;
while ($tmp368->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp368 = $tmp368->next;
}
$fn370 $tmp369 = $tmp368->methods[0];
frost$collections$Iterator* $tmp371 = $tmp369(((frost$collections$Iterable*) $tmp367));
goto block11;
block11:;
ITable* $tmp372 = $tmp371->$class->itable;
while ($tmp372->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp372 = $tmp372->next;
}
$fn374 $tmp373 = $tmp372->methods[0];
frost$core$Bit $tmp375 = $tmp373($tmp371);
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block13; else goto block12;
block12:;
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp377 = $tmp371->$class->itable;
while ($tmp377->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp377 = $tmp377->next;
}
$fn379 $tmp378 = $tmp377->methods[1];
frost$core$Object* $tmp380 = $tmp378($tmp371);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) $tmp380)));
org$frostlang$frostc$Pair* $tmp381 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local2) = ((org$frostlang$frostc$Pair*) $tmp380);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:252
org$frostlang$frostc$Pair* $tmp382 = *(&local2);
frost$core$Object** $tmp383 = &$tmp382->second;
frost$core$Object* $tmp384 = *$tmp383;
frost$core$Int $tmp385 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:252:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp386 = param2.value;
int64_t $tmp387 = $tmp385.value;
bool $tmp388 = $tmp386 == $tmp387;
frost$core$Bit $tmp389 = (frost$core$Bit) {$tmp388};
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Analyzer.frost:252:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:25
bool $tmp390 = ((frost$core$Bit$wrapper*) $tmp384)->value.value;
bool $tmp391 = $tmp389.value;
bool $tmp392 = $tmp390 == $tmp391;
frost$core$Bit $tmp393 = (frost$core$Bit) {$tmp392};
bool $tmp394 = $tmp393.value;
if ($tmp394) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:253
org$frostlang$frostc$Pair* $tmp395 = *(&local2);
frost$core$Object** $tmp396 = &$tmp395->first;
frost$core$Object* $tmp397 = *$tmp396;
frost$core$Int* $tmp398 = &((org$frostlang$frostc$IR$Value*) $tmp397)->$rawValue;
frost$core$Int $tmp399 = *$tmp398;
frost$core$Int $tmp400 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:254:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp401 = $tmp399.value;
int64_t $tmp402 = $tmp400.value;
bool $tmp403 = $tmp401 == $tmp402;
frost$core$Bit $tmp404 = (frost$core$Bit) {$tmp403};
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block19; else goto block20;
block19:;
org$frostlang$frostc$IR$Statement$ID* $tmp406 = (org$frostlang$frostc$IR$Statement$ID*) (((org$frostlang$frostc$IR$Value*) $tmp397)->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp407 = *$tmp406;
*(&local3) = $tmp407;
org$frostlang$frostc$Type** $tmp408 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Value*) $tmp397)->$data + 8);
org$frostlang$frostc$Type* $tmp409 = *$tmp408;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:255
frost$collections$HashMap** $tmp410 = &param3->statements;
frost$collections$HashMap* $tmp411 = *$tmp410;
org$frostlang$frostc$IR$Statement$ID $tmp412 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp413;
$tmp413 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp413->value = $tmp412;
frost$core$Object* $tmp414 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp411, ((frost$collections$Key*) $tmp413));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp414)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp415 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp414);
frost$core$Frost$unref$frost$core$Object$Q($tmp414);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp413)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:256
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp416 = *(&local4);
frost$core$Bit $tmp417 = (frost$core$Bit) {$tmp416 != NULL};
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block22; else goto block23;
block23:;
frost$core$Int $tmp419 = (frost$core$Int) {256u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s420, $tmp419);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:257
frost$collections$HashMap** $tmp421 = &param3->statements;
frost$collections$HashMap* $tmp422 = *$tmp421;
org$frostlang$frostc$IR$Statement$ID $tmp423 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp424;
$tmp424 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp424->value = $tmp423;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp425 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp426 = *(&local4);
org$frostlang$frostc$Type** $tmp427 = &$tmp426->type;
org$frostlang$frostc$Type* $tmp428 = *$tmp427;
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Analyzer.frost:257:95
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp429 = &$tmp428->typeKind;
org$frostlang$frostc$Type$Kind $tmp430 = *$tmp429;
org$frostlang$frostc$Type$Kind$wrapper* $tmp431;
$tmp431 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp431->value = $tmp430;
frost$core$Int $tmp432 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp433 = &(&local7)->$rawValue;
*$tmp433 = $tmp432;
org$frostlang$frostc$Type$Kind $tmp434 = *(&local7);
*(&local6) = $tmp434;
org$frostlang$frostc$Type$Kind $tmp435 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp436;
$tmp436 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp436->value = $tmp435;
ITable* $tmp437 = ((frost$core$Equatable*) $tmp431)->$class->itable;
while ($tmp437->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp437 = $tmp437->next;
}
$fn439 $tmp438 = $tmp437->methods[1];
frost$core$Bit $tmp440 = $tmp438(((frost$core$Equatable*) $tmp431), ((frost$core$Equatable*) $tmp436));
bool $tmp441 = $tmp440.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp436)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp431)));
if ($tmp441) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local5) = $tmp428;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
goto block24;
block26:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp442 = &$tmp428->_subtypes;
org$frostlang$frostc$FixedArray* $tmp443 = *$tmp442;
frost$core$Bit $tmp444 = (frost$core$Bit) {$tmp443 != NULL};
bool $tmp445 = $tmp444.value;
if ($tmp445) goto block29; else goto block30;
block30:;
frost$core$Int $tmp446 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s447, $tmp446);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp448 = &$tmp428->_subtypes;
org$frostlang$frostc$FixedArray* $tmp449 = *$tmp448;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Int $tmp450 = (frost$core$Int) {0u};
frost$core$Object* $tmp451 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp449, $tmp450);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp451)));
frost$core$Frost$unref$frost$core$Object$Q($tmp451);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp451);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp451)));
goto block24;
block24:;
org$frostlang$frostc$Type* $tmp452 = *(&local5);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp425, $tmp452);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp422, ((frost$collections$Key*) $tmp424), ((frost$core$Object*) $tmp425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
org$frostlang$frostc$Type* $tmp453 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp424)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp454 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
goto block18;
block20:;
frost$core$Int $tmp455 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:259:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp456 = $tmp399.value;
int64_t $tmp457 = $tmp455.value;
bool $tmp458 = $tmp456 == $tmp457;
frost$core$Bit $tmp459 = (frost$core$Bit) {$tmp458};
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block31; else goto block18;
block31:;
frost$core$Int* $tmp461 = (frost$core$Int*) (((org$frostlang$frostc$IR$Value*) $tmp397)->$data + 0);
frost$core$Int $tmp462 = *$tmp461;
*(&local8) = $tmp462;
org$frostlang$frostc$Type** $tmp463 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Value*) $tmp397)->$data + 8);
org$frostlang$frostc$Type* $tmp464 = *$tmp463;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:260
frost$collections$Array** $tmp465 = &param3->locals;
frost$collections$Array* $tmp466 = *$tmp465;
frost$core$Int $tmp467 = *(&local8);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:260:60
frost$core$Int $tmp468 = (frost$core$Int) {0u};
int64_t $tmp469 = $tmp467.value;
int64_t $tmp470 = $tmp468.value;
bool $tmp471 = $tmp469 >= $tmp470;
frost$core$Bit $tmp472 = (frost$core$Bit) {$tmp471};
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block36; else goto block35;
block36:;
ITable* $tmp474 = ((frost$collections$CollectionView*) $tmp466)->$class->itable;
while ($tmp474->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp474 = $tmp474->next;
}
$fn476 $tmp475 = $tmp474->methods[0];
frost$core$Int $tmp477 = $tmp475(((frost$collections$CollectionView*) $tmp466));
int64_t $tmp478 = $tmp467.value;
int64_t $tmp479 = $tmp477.value;
bool $tmp480 = $tmp478 < $tmp479;
frost$core$Bit $tmp481 = (frost$core$Bit) {$tmp480};
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block34; else goto block35;
block35:;
frost$core$Int $tmp483 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s484, $tmp483, &$s485);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp486 = &$tmp466->data;
frost$core$Object** $tmp487 = *$tmp486;
frost$core$Int64 $tmp488 = frost$core$Int64$init$frost$core$Int($tmp467);
int64_t $tmp489 = $tmp488.value;
frost$core$Object* $tmp490 = $tmp487[$tmp489];
frost$core$Frost$ref$frost$core$Object$Q($tmp490);
*(&local9) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp490)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp491 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
*(&local9) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp490);
frost$core$Frost$unref$frost$core$Object$Q($tmp490);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:261
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp492 = *(&local9);
frost$core$Bit $tmp493 = (frost$core$Bit) {true};
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block37; else goto block38;
block38:;
frost$core$Int $tmp495 = (frost$core$Int) {261u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s496, $tmp495);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:262
frost$collections$Array** $tmp497 = &param3->locals;
frost$collections$Array* $tmp498 = *$tmp497;
frost$core$Int $tmp499 = *(&local8);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp500 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp501 = *(&local9);
org$frostlang$frostc$Type** $tmp502 = &$tmp501->type;
org$frostlang$frostc$Type* $tmp503 = *$tmp502;
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Analyzer.frost:262:93
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp504 = &$tmp503->typeKind;
org$frostlang$frostc$Type$Kind $tmp505 = *$tmp504;
org$frostlang$frostc$Type$Kind$wrapper* $tmp506;
$tmp506 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp506->value = $tmp505;
frost$core$Int $tmp507 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp508 = &(&local12)->$rawValue;
*$tmp508 = $tmp507;
org$frostlang$frostc$Type$Kind $tmp509 = *(&local12);
*(&local11) = $tmp509;
org$frostlang$frostc$Type$Kind $tmp510 = *(&local11);
org$frostlang$frostc$Type$Kind$wrapper* $tmp511;
$tmp511 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp511->value = $tmp510;
ITable* $tmp512 = ((frost$core$Equatable*) $tmp506)->$class->itable;
while ($tmp512->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp512 = $tmp512->next;
}
$fn514 $tmp513 = $tmp512->methods[1];
frost$core$Bit $tmp515 = $tmp513(((frost$core$Equatable*) $tmp506), ((frost$core$Equatable*) $tmp511));
bool $tmp516 = $tmp515.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp511)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp506)));
if ($tmp516) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
*(&local10) = $tmp503;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
goto block39;
block41:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp517 = &$tmp503->_subtypes;
org$frostlang$frostc$FixedArray* $tmp518 = *$tmp517;
frost$core$Bit $tmp519 = (frost$core$Bit) {$tmp518 != NULL};
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block44; else goto block45;
block45:;
frost$core$Int $tmp521 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s522, $tmp521);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp523 = &$tmp503->_subtypes;
org$frostlang$frostc$FixedArray* $tmp524 = *$tmp523;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
frost$core$Int $tmp525 = (frost$core$Int) {0u};
frost$core$Object* $tmp526 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp524, $tmp525);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp526)));
frost$core$Frost$unref$frost$core$Object$Q($tmp526);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local10) = ((org$frostlang$frostc$Type*) $tmp526);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp526)));
goto block39;
block39:;
org$frostlang$frostc$Type* $tmp527 = *(&local10);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp500, $tmp527);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:262:49
frost$core$Int $tmp528 = (frost$core$Int) {0u};
int64_t $tmp529 = $tmp499.value;
int64_t $tmp530 = $tmp528.value;
bool $tmp531 = $tmp529 >= $tmp530;
frost$core$Bit $tmp532 = (frost$core$Bit) {$tmp531};
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block49; else goto block48;
block49:;
ITable* $tmp534 = ((frost$collections$CollectionView*) $tmp498)->$class->itable;
while ($tmp534->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp534 = $tmp534->next;
}
$fn536 $tmp535 = $tmp534->methods[0];
frost$core$Int $tmp537 = $tmp535(((frost$collections$CollectionView*) $tmp498));
int64_t $tmp538 = $tmp499.value;
int64_t $tmp539 = $tmp537.value;
bool $tmp540 = $tmp538 < $tmp539;
frost$core$Bit $tmp541 = (frost$core$Bit) {$tmp540};
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block47; else goto block48;
block48:;
frost$core$Int $tmp543 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s544, $tmp543, &$s545);
abort(); // unreachable
block47:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp546 = &$tmp498->data;
frost$core$Object** $tmp547 = *$tmp546;
frost$core$Int64 $tmp548 = frost$core$Int64$init$frost$core$Int($tmp499);
int64_t $tmp549 = $tmp548.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
frost$core$Object* $tmp550 = $tmp547[$tmp549];
frost$core$Frost$unref$frost$core$Object$Q($tmp550);
$tmp547[$tmp549] = ((frost$core$Object*) $tmp500);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
org$frostlang$frostc$Type* $tmp551 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp552 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
*(&local9) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
goto block18;
block18:;
goto block15;
block15:;
frost$core$Frost$unref$frost$core$Object$Q($tmp380);
org$frostlang$frostc$Pair* $tmp553 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block11;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
goto block10;
block10:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp554 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp555 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp337);
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:271
frost$core$Frost$unref$frost$core$Object$Q($tmp337);
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:278
frost$core$Int $tmp556 = param2.$rawValue;
frost$core$Int $tmp557 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:279:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp558 = $tmp556.value;
int64_t $tmp559 = $tmp557.value;
bool $tmp560 = $tmp558 == $tmp559;
frost$core$Bit $tmp561 = (frost$core$Bit) {$tmp560};
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:280
frost$core$Int* $tmp563 = &param3->$rawValue;
frost$core$Int $tmp564 = *$tmp563;
frost$core$Int $tmp565 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:281:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp566 = $tmp564.value;
int64_t $tmp567 = $tmp565.value;
bool $tmp568 = $tmp566 == $tmp567;
frost$core$Bit $tmp569 = (frost$core$Bit) {$tmp568};
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block6; else goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:282
org$frostlang$frostc$Compiler** $tmp571 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp572 = *$tmp571;
org$frostlang$frostc$Type** $tmp573 = &$tmp572->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp574 = *$tmp573;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:282:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp575 = &((org$frostlang$frostc$Symbol*) param5)->name;
frost$core$String* $tmp576 = *$tmp575;
frost$core$String** $tmp577 = &((org$frostlang$frostc$Symbol*) $tmp574)->name;
frost$core$String* $tmp578 = *$tmp577;
frost$core$Bit $tmp579 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp576, $tmp578);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Type$Kind* $tmp581 = &param5->typeKind;
org$frostlang$frostc$Type$Kind $tmp582 = *$tmp581;
org$frostlang$frostc$Type$Kind$wrapper* $tmp583;
$tmp583 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp583->value = $tmp582;
org$frostlang$frostc$Type$Kind* $tmp584 = &$tmp574->typeKind;
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
*(&local0) = $tmp590;
goto block11;
block10:;
*(&local0) = $tmp579;
goto block11;
block11:;
frost$core$Bit $tmp591 = *(&local0);
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block12; else goto block13;
block13:;
frost$core$Int $tmp593 = (frost$core$Int) {282u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s594, $tmp593);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:283
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp595 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp596 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp595, $tmp596);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp597 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp598 = (frost$core$Bit) {true};
frost$core$Bit$wrapper* $tmp599;
$tmp599 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp599->value = $tmp598;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp597, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp599));
frost$collections$Array$add$frost$collections$Array$T($tmp595, ((frost$core$Object*) $tmp597));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$collections$Array* $tmp600 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local1) = $tmp595;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:284
frost$core$Int* $tmp601 = &param1->$rawValue;
frost$core$Int $tmp602 = *$tmp601;
frost$core$Int $tmp603 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:285:42
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp604 = $tmp602.value;
int64_t $tmp605 = $tmp603.value;
bool $tmp606 = $tmp604 == $tmp605;
frost$core$Bit $tmp607 = (frost$core$Bit) {$tmp606};
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block15; else goto block14;
block15:;
org$frostlang$frostc$IR$Statement$ID* $tmp609 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp610 = *$tmp609;
*(&local2) = $tmp610;
org$frostlang$frostc$Type** $tmp611 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp612 = *$tmp611;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:286
frost$collections$HashMap** $tmp613 = &param0->statements;
frost$collections$HashMap* $tmp614 = *$tmp613;
org$frostlang$frostc$IR$Statement$ID $tmp615 = *(&local2);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp616;
$tmp616 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp616->value = $tmp615;
frost$core$Object* $tmp617 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp614, ((frost$collections$Key*) $tmp616));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp617)));
org$frostlang$frostc$IR$Statement* $tmp618 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) $tmp617);
frost$core$Frost$unref$frost$core$Object$Q($tmp617);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp616)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:287
org$frostlang$frostc$IR$Statement* $tmp619 = *(&local3);
frost$core$Int* $tmp620 = &$tmp619->$rawValue;
frost$core$Int $tmp621 = *$tmp620;
frost$core$Int $tmp622 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:288:54
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp623 = $tmp621.value;
int64_t $tmp624 = $tmp622.value;
bool $tmp625 = $tmp623 == $tmp624;
frost$core$Bit $tmp626 = (frost$core$Bit) {$tmp625};
bool $tmp627 = $tmp626.value;
if ($tmp627) goto block18; else goto block17;
block18:;
org$frostlang$frostc$Position* $tmp628 = (org$frostlang$frostc$Position*) ($tmp619->$data + 0);
org$frostlang$frostc$Position $tmp629 = *$tmp628;
org$frostlang$frostc$IR$Value** $tmp630 = (org$frostlang$frostc$IR$Value**) ($tmp619->$data + 24);
org$frostlang$frostc$IR$Value* $tmp631 = *$tmp630;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
org$frostlang$frostc$IR$Value* $tmp632 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
*(&local4) = $tmp631;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:289
frost$collections$Array* $tmp633 = *(&local1);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp634 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$IR$Value* $tmp635 = *(&local4);
frost$core$Bit $tmp636 = (frost$core$Bit) {true};
frost$core$Bit$wrapper* $tmp637;
$tmp637 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp637->value = $tmp636;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp634, ((frost$core$Object*) $tmp635), ((frost$core$Object*) $tmp637));
frost$collections$Array$add$frost$collections$Array$T($tmp633, ((frost$core$Object*) $tmp634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
org$frostlang$frostc$IR$Value* $tmp638 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block17;
block17:;
org$frostlang$frostc$IR$Statement* $tmp639 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:294
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp640 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
frost$collections$Array* $tmp641 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp640, param5, ((frost$collections$ListView*) $tmp641));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$collections$Array* $tmp642 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp640;
block5:;
goto block1;
block3:;
frost$core$Int $tmp643 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:298:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp644 = $tmp556.value;
int64_t $tmp645 = $tmp643.value;
bool $tmp646 = $tmp644 == $tmp645;
frost$core$Bit $tmp647 = (frost$core$Bit) {$tmp646};
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block20; else goto block1;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:299
frost$core$Int* $tmp649 = &param3->$rawValue;
frost$core$Int $tmp650 = *$tmp649;
frost$core$Int $tmp651 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:300:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp652 = $tmp650.value;
int64_t $tmp653 = $tmp651.value;
bool $tmp654 = $tmp652 == $tmp653;
frost$core$Bit $tmp655 = (frost$core$Bit) {$tmp654};
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block23; else goto block22;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:301
org$frostlang$frostc$Compiler** $tmp657 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp658 = *$tmp657;
org$frostlang$frostc$Type** $tmp659 = &$tmp658->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp660 = *$tmp659;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:301:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp661 = &((org$frostlang$frostc$Symbol*) param5)->name;
frost$core$String* $tmp662 = *$tmp661;
frost$core$String** $tmp663 = &((org$frostlang$frostc$Symbol*) $tmp660)->name;
frost$core$String* $tmp664 = *$tmp663;
frost$core$Bit $tmp665 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp662, $tmp664);
bool $tmp666 = $tmp665.value;
if ($tmp666) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Type$Kind* $tmp667 = &param5->typeKind;
org$frostlang$frostc$Type$Kind $tmp668 = *$tmp667;
org$frostlang$frostc$Type$Kind$wrapper* $tmp669;
$tmp669 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp669->value = $tmp668;
org$frostlang$frostc$Type$Kind* $tmp670 = &$tmp660->typeKind;
org$frostlang$frostc$Type$Kind $tmp671 = *$tmp670;
org$frostlang$frostc$Type$Kind$wrapper* $tmp672;
$tmp672 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp672->value = $tmp671;
ITable* $tmp673 = ((frost$core$Equatable*) $tmp669)->$class->itable;
while ($tmp673->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp673 = $tmp673->next;
}
$fn675 $tmp674 = $tmp673->methods[0];
frost$core$Bit $tmp676 = $tmp674(((frost$core$Equatable*) $tmp669), ((frost$core$Equatable*) $tmp672));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp672)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp669)));
*(&local5) = $tmp676;
goto block28;
block27:;
*(&local5) = $tmp665;
goto block28;
block28:;
frost$core$Bit $tmp677 = *(&local5);
bool $tmp678 = $tmp677.value;
if ($tmp678) goto block29; else goto block30;
block30:;
frost$core$Int $tmp679 = (frost$core$Int) {301u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s680, $tmp679);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:302
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp681 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp682 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp681, $tmp682);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp683 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp684 = (frost$core$Bit) {false};
frost$core$Bit$wrapper* $tmp685;
$tmp685 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp685->value = $tmp684;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp683, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp685));
frost$collections$Array$add$frost$collections$Array$T($tmp681, ((frost$core$Object*) $tmp683));
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
frost$collections$Array* $tmp686 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
*(&local6) = $tmp681;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:303
frost$core$Int* $tmp687 = &param1->$rawValue;
frost$core$Int $tmp688 = *$tmp687;
frost$core$Int $tmp689 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:304:42
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp690 = $tmp688.value;
int64_t $tmp691 = $tmp689.value;
bool $tmp692 = $tmp690 == $tmp691;
frost$core$Bit $tmp693 = (frost$core$Bit) {$tmp692};
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block32; else goto block31;
block32:;
org$frostlang$frostc$IR$Statement$ID* $tmp695 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp696 = *$tmp695;
*(&local7) = $tmp696;
org$frostlang$frostc$Type** $tmp697 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp698 = *$tmp697;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:305
frost$collections$HashMap** $tmp699 = &param0->statements;
frost$collections$HashMap* $tmp700 = *$tmp699;
org$frostlang$frostc$IR$Statement$ID $tmp701 = *(&local7);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp702;
$tmp702 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp702->value = $tmp701;
frost$core$Object* $tmp703 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp700, ((frost$collections$Key*) $tmp702));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp703)));
org$frostlang$frostc$IR$Statement* $tmp704 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) $tmp703);
frost$core$Frost$unref$frost$core$Object$Q($tmp703);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp702)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:306
org$frostlang$frostc$IR$Statement* $tmp705 = *(&local8);
frost$core$Int* $tmp706 = &$tmp705->$rawValue;
frost$core$Int $tmp707 = *$tmp706;
frost$core$Int $tmp708 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:307:54
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp709 = $tmp707.value;
int64_t $tmp710 = $tmp708.value;
bool $tmp711 = $tmp709 == $tmp710;
frost$core$Bit $tmp712 = (frost$core$Bit) {$tmp711};
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block35; else goto block34;
block35:;
org$frostlang$frostc$Position* $tmp714 = (org$frostlang$frostc$Position*) ($tmp705->$data + 0);
org$frostlang$frostc$Position $tmp715 = *$tmp714;
org$frostlang$frostc$IR$Value** $tmp716 = (org$frostlang$frostc$IR$Value**) ($tmp705->$data + 24);
org$frostlang$frostc$IR$Value* $tmp717 = *$tmp716;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
org$frostlang$frostc$IR$Value* $tmp718 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
*(&local9) = $tmp717;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:308
frost$collections$Array* $tmp719 = *(&local6);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp720 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$IR$Value* $tmp721 = *(&local9);
frost$core$Bit $tmp722 = (frost$core$Bit) {false};
frost$core$Bit$wrapper* $tmp723;
$tmp723 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp723->value = $tmp722;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp720, ((frost$core$Object*) $tmp721), ((frost$core$Object*) $tmp723));
frost$collections$Array$add$frost$collections$Array$T($tmp719, ((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
org$frostlang$frostc$IR$Value* $tmp724 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block34;
block34:;
org$frostlang$frostc$IR$Statement* $tmp725 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:313
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp726 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
frost$collections$Array* $tmp727 = *(&local6);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp726, param5, ((frost$collections$ListView*) $tmp727));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
frost$collections$Array* $tmp728 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
*(&local6) = ((frost$collections$Array*) NULL);
return $tmp726;
block22:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:319
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp729 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp729, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
return $tmp729;

}
org$frostlang$frostc$pass$Analyzer$State* org$frostlang$frostc$pass$Analyzer$computeExitState$org$frostlang$frostc$pass$Analyzer$BlockExit$frost$core$Bit$R$org$frostlang$frostc$pass$Analyzer$State(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$pass$Analyzer$BlockExit param1, frost$core$Bit param2) {

org$frostlang$frostc$pass$Analyzer$State* local0 = NULL;
org$frostlang$frostc$IR$Block* local1 = NULL;
frost$core$Int local2;
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
frost$core$Int local57;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:323
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$State));
org$frostlang$frostc$pass$Analyzer$State* $tmp730 = (org$frostlang$frostc$pass$Analyzer$State*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$State$class);
frost$collections$HashMap** $tmp731 = &param0->entryStates;
frost$collections$HashMap* $tmp732 = *$tmp731;
org$frostlang$frostc$IR$Block$ID $tmp733 = param1.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp734;
$tmp734 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp734->value = $tmp733;
frost$core$Object* $tmp735 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp732, ((frost$collections$Key*) $tmp734));
org$frostlang$frostc$pass$Analyzer$State$init$org$frostlang$frostc$pass$Analyzer$State($tmp730, ((org$frostlang$frostc$pass$Analyzer$State*) $tmp735));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
org$frostlang$frostc$pass$Analyzer$State* $tmp736 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local0) = $tmp730;
frost$core$Frost$unref$frost$core$Object$Q($tmp735);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp734)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:324
org$frostlang$frostc$IR$Block$ID $tmp737 = param1.id;
$fn739 $tmp738 = ($fn739) param0->$class->vtable[4];
org$frostlang$frostc$IR$Block* $tmp740 = $tmp738(param0, $tmp737);
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
org$frostlang$frostc$IR$Block* $tmp741 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local1) = $tmp740;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:325
frost$core$Int $tmp742 = (frost$core$Int) {0u};
org$frostlang$frostc$IR$Block* $tmp743 = *(&local1);
frost$collections$Array** $tmp744 = &$tmp743->statements;
frost$collections$Array* $tmp745 = *$tmp744;
ITable* $tmp746 = ((frost$collections$CollectionView*) $tmp745)->$class->itable;
while ($tmp746->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp746 = $tmp746->next;
}
$fn748 $tmp747 = $tmp746->methods[0];
frost$core$Int $tmp749 = $tmp747(((frost$collections$CollectionView*) $tmp745));
frost$core$Int $tmp750 = (frost$core$Int) {1u};
int64_t $tmp751 = $tmp749.value;
int64_t $tmp752 = $tmp750.value;
int64_t $tmp753 = $tmp751 - $tmp752;
frost$core$Int $tmp754 = (frost$core$Int) {$tmp753};
frost$core$Bit $tmp755 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp756 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp742, $tmp754, $tmp755);
frost$core$Int $tmp757 = $tmp756.min;
*(&local2) = $tmp757;
frost$core$Int $tmp758 = $tmp756.max;
frost$core$Bit $tmp759 = $tmp756.inclusive;
bool $tmp760 = $tmp759.value;
frost$core$Int $tmp761 = (frost$core$Int) {1u};
if ($tmp760) goto block4; else goto block5;
block4:;
int64_t $tmp762 = $tmp757.value;
int64_t $tmp763 = $tmp758.value;
bool $tmp764 = $tmp762 <= $tmp763;
frost$core$Bit $tmp765 = (frost$core$Bit) {$tmp764};
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block1; else goto block2;
block5:;
int64_t $tmp767 = $tmp757.value;
int64_t $tmp768 = $tmp758.value;
bool $tmp769 = $tmp767 < $tmp768;
frost$core$Bit $tmp770 = (frost$core$Bit) {$tmp769};
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:326
org$frostlang$frostc$IR$Block* $tmp772 = *(&local1);
frost$collections$Array** $tmp773 = &$tmp772->ids;
frost$collections$Array* $tmp774 = *$tmp773;
frost$core$Int $tmp775 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:326:32
frost$core$Int $tmp776 = (frost$core$Int) {0u};
int64_t $tmp777 = $tmp775.value;
int64_t $tmp778 = $tmp776.value;
bool $tmp779 = $tmp777 >= $tmp778;
frost$core$Bit $tmp780 = (frost$core$Bit) {$tmp779};
bool $tmp781 = $tmp780.value;
if ($tmp781) goto block9; else goto block8;
block9:;
ITable* $tmp782 = ((frost$collections$CollectionView*) $tmp774)->$class->itable;
while ($tmp782->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp782 = $tmp782->next;
}
$fn784 $tmp783 = $tmp782->methods[0];
frost$core$Int $tmp785 = $tmp783(((frost$collections$CollectionView*) $tmp774));
int64_t $tmp786 = $tmp775.value;
int64_t $tmp787 = $tmp785.value;
bool $tmp788 = $tmp786 < $tmp787;
frost$core$Bit $tmp789 = (frost$core$Bit) {$tmp788};
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block7; else goto block8;
block8:;
frost$core$Int $tmp791 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s792, $tmp791, &$s793);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp794 = &$tmp774->data;
frost$core$Object** $tmp795 = *$tmp794;
frost$core$Int64 $tmp796 = frost$core$Int64$init$frost$core$Int($tmp775);
int64_t $tmp797 = $tmp796.value;
frost$core$Object* $tmp798 = $tmp795[$tmp797];
frost$core$Frost$ref$frost$core$Object$Q($tmp798);
*(&local3) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp798)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp798);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:327
org$frostlang$frostc$IR$Block* $tmp799 = *(&local1);
frost$collections$Array** $tmp800 = &$tmp799->statements;
frost$collections$Array* $tmp801 = *$tmp800;
frost$core$Int $tmp802 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:327:35
frost$core$Int $tmp803 = (frost$core$Int) {0u};
int64_t $tmp804 = $tmp802.value;
int64_t $tmp805 = $tmp803.value;
bool $tmp806 = $tmp804 >= $tmp805;
frost$core$Bit $tmp807 = (frost$core$Bit) {$tmp806};
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block13; else goto block12;
block13:;
ITable* $tmp809 = ((frost$collections$CollectionView*) $tmp801)->$class->itable;
while ($tmp809->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp809 = $tmp809->next;
}
$fn811 $tmp810 = $tmp809->methods[0];
frost$core$Int $tmp812 = $tmp810(((frost$collections$CollectionView*) $tmp801));
int64_t $tmp813 = $tmp802.value;
int64_t $tmp814 = $tmp812.value;
bool $tmp815 = $tmp813 < $tmp814;
frost$core$Bit $tmp816 = (frost$core$Bit) {$tmp815};
bool $tmp817 = $tmp816.value;
if ($tmp817) goto block11; else goto block12;
block12:;
frost$core$Int $tmp818 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s819, $tmp818, &$s820);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp821 = &$tmp801->data;
frost$core$Object** $tmp822 = *$tmp821;
frost$core$Int64 $tmp823 = frost$core$Int64$init$frost$core$Int($tmp802);
int64_t $tmp824 = $tmp823.value;
frost$core$Object* $tmp825 = $tmp822[$tmp824];
frost$core$Frost$ref$frost$core$Object$Q($tmp825);
frost$core$Int* $tmp826 = &((org$frostlang$frostc$IR$Statement*) $tmp825)->$rawValue;
frost$core$Int $tmp827 = *$tmp826;
frost$core$Int $tmp828 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:328:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp829 = $tmp827.value;
int64_t $tmp830 = $tmp828.value;
bool $tmp831 = $tmp829 == $tmp830;
frost$core$Bit $tmp832 = (frost$core$Bit) {$tmp831};
bool $tmp833 = $tmp832.value;
if ($tmp833) goto block15; else goto block16;
block15:;
org$frostlang$frostc$Position* $tmp834 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 0);
org$frostlang$frostc$Position $tmp835 = *$tmp834;
org$frostlang$frostc$IR$Value** $tmp836 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp837 = *$tmp836;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
org$frostlang$frostc$IR$Value* $tmp838 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
*(&local4) = $tmp837;
org$frostlang$frostc$expression$Binary$Operator* $tmp839 = (org$frostlang$frostc$expression$Binary$Operator*) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp840 = *$tmp839;
*(&local5) = $tmp840;
org$frostlang$frostc$IR$Value** $tmp841 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 40);
org$frostlang$frostc$IR$Value* $tmp842 = *$tmp841;
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
org$frostlang$frostc$IR$Value* $tmp843 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
*(&local6) = $tmp842;
org$frostlang$frostc$Type** $tmp844 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 48);
org$frostlang$frostc$Type* $tmp845 = *$tmp844;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
org$frostlang$frostc$Type* $tmp846 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
*(&local7) = $tmp845;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:329
org$frostlang$frostc$pass$Analyzer$State* $tmp847 = *(&local0);
frost$collections$HashMap** $tmp848 = &$tmp847->statements;
frost$collections$HashMap* $tmp849 = *$tmp848;
org$frostlang$frostc$IR$Statement$ID $tmp850 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp851;
$tmp851 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp851->value = $tmp850;
org$frostlang$frostc$IR$Value* $tmp852 = *(&local4);
org$frostlang$frostc$expression$Binary$Operator $tmp853 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp854 = *(&local6);
org$frostlang$frostc$pass$Analyzer$State* $tmp855 = *(&local0);
org$frostlang$frostc$Type* $tmp856 = *(&local7);
$fn858 $tmp857 = ($fn858) param0->$class->vtable[6];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp859 = $tmp857(param0, $tmp852, $tmp853, $tmp854, $tmp855, $tmp856);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp849, ((frost$collections$Key*) $tmp851), ((frost$core$Object*) $tmp859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp851)));
org$frostlang$frostc$Type* $tmp860 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp861 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp862 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block14;
block16:;
frost$core$Int $tmp863 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:331:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp864 = $tmp827.value;
int64_t $tmp865 = $tmp863.value;
bool $tmp866 = $tmp864 == $tmp865;
frost$core$Bit $tmp867 = (frost$core$Bit) {$tmp866};
bool $tmp868 = $tmp867.value;
if ($tmp868) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp869 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 0);
org$frostlang$frostc$Position $tmp870 = *$tmp869;
*(&local8) = $tmp870;
org$frostlang$frostc$IR$Value** $tmp871 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp872 = *$tmp871;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
org$frostlang$frostc$IR$Value* $tmp873 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local9) = $tmp872;
org$frostlang$frostc$Type** $tmp874 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 32);
org$frostlang$frostc$Type* $tmp875 = *$tmp874;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
org$frostlang$frostc$Type* $tmp876 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
*(&local10) = $tmp875;
frost$core$Bit* $tmp877 = (frost$core$Bit*) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 40);
frost$core$Bit $tmp878 = *$tmp877;
*(&local11) = $tmp878;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:332
frost$core$Bit $tmp879 = *(&local11);
bool $tmp880 = $tmp879.value;
if ($tmp880) goto block21; else goto block23;
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:333
org$frostlang$frostc$pass$Analyzer$State* $tmp881 = *(&local0);
frost$collections$HashMap** $tmp882 = &$tmp881->statements;
frost$collections$HashMap* $tmp883 = *$tmp882;
org$frostlang$frostc$IR$Statement$ID $tmp884 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp885;
$tmp885 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp885->value = $tmp884;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp886 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp887 = *(&local10);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp886, $tmp887);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp883, ((frost$collections$Key*) $tmp885), ((frost$core$Object*) $tmp886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp885)));
goto block22;
block23:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:336
org$frostlang$frostc$pass$Analyzer$State* $tmp888 = *(&local0);
frost$collections$HashMap** $tmp889 = &$tmp888->statements;
frost$collections$HashMap* $tmp890 = *$tmp889;
org$frostlang$frostc$IR$Statement$ID $tmp891 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp892;
$tmp892 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp892->value = $tmp891;
org$frostlang$frostc$IR$Value* $tmp893 = *(&local9);
org$frostlang$frostc$pass$Analyzer$State* $tmp894 = *(&local0);
$fn896 $tmp895 = ($fn896) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp897 = $tmp895(param0, $tmp893, $tmp894);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp890, ((frost$collections$Key*) $tmp892), ((frost$core$Object*) $tmp897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp892)));
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:338
frost$core$Bit $tmp898 = *(&local11);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:338:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp899 = $tmp898.value;
bool $tmp900 = !$tmp899;
frost$core$Bit $tmp901 = (frost$core$Bit) {$tmp900};
bool $tmp902 = $tmp901.value;
if ($tmp902) goto block26; else goto block25;
block26:;
bool $tmp903 = param2.value;
if ($tmp903) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:339
org$frostlang$frostc$Type* $tmp904 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Analyzer.frost:339:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:401
org$frostlang$frostc$Type$Kind* $tmp905 = &$tmp904->typeKind;
org$frostlang$frostc$Type$Kind $tmp906 = *$tmp905;
org$frostlang$frostc$Type$Kind$wrapper* $tmp907;
$tmp907 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp907->value = $tmp906;
frost$core$Int $tmp908 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:401:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp909 = &(&local13)->$rawValue;
*$tmp909 = $tmp908;
org$frostlang$frostc$Type$Kind $tmp910 = *(&local13);
*(&local12) = $tmp910;
org$frostlang$frostc$Type$Kind $tmp911 = *(&local12);
org$frostlang$frostc$Type$Kind$wrapper* $tmp912;
$tmp912 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp912->value = $tmp911;
ITable* $tmp913 = ((frost$core$Equatable*) $tmp907)->$class->itable;
while ($tmp913->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp913 = $tmp913->next;
}
$fn915 $tmp914 = $tmp913->methods[0];
frost$core$Bit $tmp916 = $tmp914(((frost$core$Equatable*) $tmp907), ((frost$core$Equatable*) $tmp912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp912)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp907)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:339:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp917 = $tmp916.value;
bool $tmp918 = !$tmp917;
frost$core$Bit $tmp919 = (frost$core$Bit) {$tmp918};
bool $tmp920 = $tmp919.value;
if ($tmp920) goto block30; else goto block29;
block30:;
org$frostlang$frostc$IR$Value* $tmp921 = *(&local9);
org$frostlang$frostc$pass$Analyzer$State* $tmp922 = *(&local0);
$fn924 $tmp923 = ($fn924) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp925 = $tmp923(param0, $tmp921, $tmp922);
org$frostlang$frostc$Type** $tmp926 = &$tmp925->type;
org$frostlang$frostc$Type* $tmp927 = *$tmp926;
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Analyzer.frost:339:75
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:401
org$frostlang$frostc$Type$Kind* $tmp928 = &$tmp927->typeKind;
org$frostlang$frostc$Type$Kind $tmp929 = *$tmp928;
org$frostlang$frostc$Type$Kind$wrapper* $tmp930;
$tmp930 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp930->value = $tmp929;
frost$core$Int $tmp931 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:401:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp932 = &(&local15)->$rawValue;
*$tmp932 = $tmp931;
org$frostlang$frostc$Type$Kind $tmp933 = *(&local15);
*(&local14) = $tmp933;
org$frostlang$frostc$Type$Kind $tmp934 = *(&local14);
org$frostlang$frostc$Type$Kind$wrapper* $tmp935;
$tmp935 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp935->value = $tmp934;
ITable* $tmp936 = ((frost$core$Equatable*) $tmp930)->$class->itable;
while ($tmp936->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp936 = $tmp936->next;
}
$fn938 $tmp937 = $tmp936->methods[0];
frost$core$Bit $tmp939 = $tmp937(((frost$core$Equatable*) $tmp930), ((frost$core$Equatable*) $tmp935));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp935)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp930)));
bool $tmp940 = $tmp939.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
if ($tmp940) goto block28; else goto block29;
block28:;
goto block29;
block29:;
goto block25;
block25:;
org$frostlang$frostc$Type* $tmp941 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp942 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block14;
block19:;
frost$core$Int $tmp943 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:344:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp944 = $tmp827.value;
int64_t $tmp945 = $tmp943.value;
bool $tmp946 = $tmp944 == $tmp945;
frost$core$Bit $tmp947 = (frost$core$Bit) {$tmp946};
bool $tmp948 = $tmp947.value;
if ($tmp948) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp949 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 0);
org$frostlang$frostc$Position $tmp950 = *$tmp949;
org$frostlang$frostc$ClassDecl** $tmp951 = (org$frostlang$frostc$ClassDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp952 = *$tmp951;
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
org$frostlang$frostc$ClassDecl* $tmp953 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
*(&local16) = $tmp952;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:345
org$frostlang$frostc$pass$Analyzer$State* $tmp954 = *(&local0);
frost$collections$HashMap** $tmp955 = &$tmp954->statements;
frost$collections$HashMap* $tmp956 = *$tmp955;
org$frostlang$frostc$IR$Statement$ID $tmp957 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp958;
$tmp958 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp958->value = $tmp957;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp959 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$ClassDecl* $tmp960 = *(&local16);
org$frostlang$frostc$Type** $tmp961 = &$tmp960->type;
org$frostlang$frostc$Type* $tmp962 = *$tmp961;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp959, $tmp962);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp956, ((frost$collections$Key*) $tmp958), ((frost$core$Object*) $tmp959));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp958)));
org$frostlang$frostc$ClassDecl* $tmp963 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block14;
block37:;
frost$core$Int $tmp964 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:347:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp965 = $tmp827.value;
int64_t $tmp966 = $tmp964.value;
bool $tmp967 = $tmp965 == $tmp966;
frost$core$Bit $tmp968 = (frost$core$Bit) {$tmp967};
bool $tmp969 = $tmp968.value;
if ($tmp969) goto block39; else goto block40;
block39:;
org$frostlang$frostc$Position* $tmp970 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 0);
org$frostlang$frostc$Position $tmp971 = *$tmp970;
org$frostlang$frostc$IR$Value** $tmp972 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp973 = *$tmp972;
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
org$frostlang$frostc$IR$Value* $tmp974 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
*(&local17) = $tmp973;
org$frostlang$frostc$FixedArray** $tmp975 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp976 = *$tmp975;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:348
org$frostlang$frostc$IR$Value* $tmp977 = *(&local17);
$fn979 $tmp978 = ($fn979) $tmp977->$class->vtable[2];
org$frostlang$frostc$Type* $tmp980 = $tmp978($tmp977);
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
org$frostlang$frostc$Type* $tmp981 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
*(&local18) = $tmp980;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:349
org$frostlang$frostc$Type* $tmp982 = *(&local18);
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:349:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:389
frost$core$String** $tmp983 = &((org$frostlang$frostc$Symbol*) $tmp982)->name;
frost$core$String* $tmp984 = *$tmp983;
frost$core$Bit $tmp985 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp984, &$s986);
bool $tmp987 = $tmp985.value;
if ($tmp987) goto block42; else goto block44;
block42:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:350
org$frostlang$frostc$pass$Analyzer$State* $tmp988 = *(&local0);
frost$collections$HashMap** $tmp989 = &$tmp988->statements;
frost$collections$HashMap* $tmp990 = *$tmp989;
org$frostlang$frostc$IR$Statement$ID $tmp991 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp992;
$tmp992 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp992->value = $tmp991;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp993 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp994 = *(&local18);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:350:68
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp995 = &$tmp994->_subtypes;
org$frostlang$frostc$FixedArray* $tmp996 = *$tmp995;
frost$core$Bit $tmp997 = (frost$core$Bit) {$tmp996 != NULL};
bool $tmp998 = $tmp997.value;
if ($tmp998) goto block47; else goto block48;
block48:;
frost$core$Int $tmp999 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1000, $tmp999);
abort(); // unreachable
block47:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1001 = &$tmp994->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1002 = *$tmp1001;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
frost$core$Int $tmp1003 = (frost$core$Int) {1u};
frost$core$Object* $tmp1004 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1002, $tmp1003);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Analyzer.frost:350:80
org$frostlang$frostc$Type$Kind* $tmp1005 = &((org$frostlang$frostc$Type*) $tmp1004)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1006 = *$tmp1005;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1007;
$tmp1007 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1007->value = $tmp1006;
frost$core$Int $tmp1008 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1009 = &(&local20)->$rawValue;
*$tmp1009 = $tmp1008;
org$frostlang$frostc$Type$Kind $tmp1010 = *(&local20);
*(&local19) = $tmp1010;
org$frostlang$frostc$Type$Kind $tmp1011 = *(&local19);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1012;
$tmp1012 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1012->value = $tmp1011;
ITable* $tmp1013 = ((frost$core$Equatable*) $tmp1007)->$class->itable;
while ($tmp1013->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1013 = $tmp1013->next;
}
$fn1015 $tmp1014 = $tmp1013->methods[0];
frost$core$Bit $tmp1016 = $tmp1014(((frost$core$Equatable*) $tmp1007), ((frost$core$Equatable*) $tmp1012));
bool $tmp1017 = $tmp1016.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1012)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1007)));
if ($tmp1017) goto block50; else goto block54;
block54:;
org$frostlang$frostc$Type$Kind* $tmp1018 = &((org$frostlang$frostc$Type*) $tmp1004)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1019 = *$tmp1018;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1020;
$tmp1020 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1020->value = $tmp1019;
frost$core$Int $tmp1021 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1022 = &(&local22)->$rawValue;
*$tmp1022 = $tmp1021;
org$frostlang$frostc$Type$Kind $tmp1023 = *(&local22);
*(&local21) = $tmp1023;
org$frostlang$frostc$Type$Kind $tmp1024 = *(&local21);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1025;
$tmp1025 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1025->value = $tmp1024;
ITable* $tmp1026 = ((frost$core$Equatable*) $tmp1020)->$class->itable;
while ($tmp1026->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1026 = $tmp1026->next;
}
$fn1028 $tmp1027 = $tmp1026->methods[0];
frost$core$Bit $tmp1029 = $tmp1027(((frost$core$Equatable*) $tmp1020), ((frost$core$Equatable*) $tmp1025));
bool $tmp1030 = $tmp1029.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1025)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1020)));
if ($tmp1030) goto block50; else goto block53;
block53:;
org$frostlang$frostc$Type$Kind* $tmp1031 = &((org$frostlang$frostc$Type*) $tmp1004)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1032 = *$tmp1031;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1033;
$tmp1033 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1033->value = $tmp1032;
frost$core$Int $tmp1034 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1035 = &(&local24)->$rawValue;
*$tmp1035 = $tmp1034;
org$frostlang$frostc$Type$Kind $tmp1036 = *(&local24);
*(&local23) = $tmp1036;
org$frostlang$frostc$Type$Kind $tmp1037 = *(&local23);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1038;
$tmp1038 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1038->value = $tmp1037;
ITable* $tmp1039 = ((frost$core$Equatable*) $tmp1033)->$class->itable;
while ($tmp1039->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1039 = $tmp1039->next;
}
$fn1041 $tmp1040 = $tmp1039->methods[0];
frost$core$Bit $tmp1042 = $tmp1040(((frost$core$Equatable*) $tmp1033), ((frost$core$Equatable*) $tmp1038));
bool $tmp1043 = $tmp1042.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1038)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1033)));
if ($tmp1043) goto block50; else goto block52;
block52:;
org$frostlang$frostc$Type$Kind* $tmp1044 = &((org$frostlang$frostc$Type*) $tmp1004)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1045 = *$tmp1044;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1046;
$tmp1046 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1046->value = $tmp1045;
frost$core$Int $tmp1047 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1048 = &(&local26)->$rawValue;
*$tmp1048 = $tmp1047;
org$frostlang$frostc$Type$Kind $tmp1049 = *(&local26);
*(&local25) = $tmp1049;
org$frostlang$frostc$Type$Kind $tmp1050 = *(&local25);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1051;
$tmp1051 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1051->value = $tmp1050;
ITable* $tmp1052 = ((frost$core$Equatable*) $tmp1046)->$class->itable;
while ($tmp1052->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1052 = $tmp1052->next;
}
$fn1054 $tmp1053 = $tmp1052->methods[0];
frost$core$Bit $tmp1055 = $tmp1053(((frost$core$Equatable*) $tmp1046), ((frost$core$Equatable*) $tmp1051));
bool $tmp1056 = $tmp1055.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1051)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1046)));
if ($tmp1056) goto block50; else goto block51;
block51:;
frost$core$Int $tmp1057 = (frost$core$Int) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1058, $tmp1057, &$s1059);
abort(); // unreachable
block50:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1060 = &((org$frostlang$frostc$Type*) $tmp1004)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1061 = *$tmp1060;
frost$core$Bit $tmp1062 = (frost$core$Bit) {$tmp1061 != NULL};
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block60; else goto block61;
block61:;
frost$core$Int $tmp1064 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1065, $tmp1064);
abort(); // unreachable
block60:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1066 = &((org$frostlang$frostc$Type*) $tmp1004)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1067 = *$tmp1066;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1068 = &((org$frostlang$frostc$Type*) $tmp1004)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1069 = *$tmp1068;
frost$core$Bit $tmp1070 = (frost$core$Bit) {$tmp1069 != NULL};
bool $tmp1071 = $tmp1070.value;
if ($tmp1071) goto block63; else goto block64;
block64:;
frost$core$Int $tmp1072 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1073, $tmp1072);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1074 = &((org$frostlang$frostc$Type*) $tmp1004)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1075 = *$tmp1074;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
ITable* $tmp1076 = ((frost$collections$CollectionView*) $tmp1075)->$class->itable;
while ($tmp1076->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1076 = $tmp1076->next;
}
$fn1078 $tmp1077 = $tmp1076->methods[0];
frost$core$Int $tmp1079 = $tmp1077(((frost$collections$CollectionView*) $tmp1075));
frost$core$Int $tmp1080 = (frost$core$Int) {1u};
int64_t $tmp1081 = $tmp1079.value;
int64_t $tmp1082 = $tmp1080.value;
int64_t $tmp1083 = $tmp1081 - $tmp1082;
frost$core$Int $tmp1084 = (frost$core$Int) {$tmp1083};
frost$core$Object* $tmp1085 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1067, $tmp1084);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1085)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1085);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp993, ((org$frostlang$frostc$Type*) $tmp1085));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp990, ((frost$collections$Key*) $tmp992), ((frost$core$Object*) $tmp993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1085)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1004);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp992)));
goto block43;
block44:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:353
org$frostlang$frostc$pass$Analyzer$State* $tmp1086 = *(&local0);
frost$collections$HashMap** $tmp1087 = &$tmp1086->statements;
frost$collections$HashMap* $tmp1088 = *$tmp1087;
org$frostlang$frostc$IR$Statement$ID $tmp1089 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1090;
$tmp1090 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1090->value = $tmp1089;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1091 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp1092 = *(&local18);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Analyzer.frost:353:68
org$frostlang$frostc$Type$Kind* $tmp1093 = &$tmp1092->typeKind;
org$frostlang$frostc$Type$Kind $tmp1094 = *$tmp1093;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1095;
$tmp1095 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1095->value = $tmp1094;
frost$core$Int $tmp1096 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1097 = &(&local28)->$rawValue;
*$tmp1097 = $tmp1096;
org$frostlang$frostc$Type$Kind $tmp1098 = *(&local28);
*(&local27) = $tmp1098;
org$frostlang$frostc$Type$Kind $tmp1099 = *(&local27);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1100;
$tmp1100 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1100->value = $tmp1099;
ITable* $tmp1101 = ((frost$core$Equatable*) $tmp1095)->$class->itable;
while ($tmp1101->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1101 = $tmp1101->next;
}
$fn1103 $tmp1102 = $tmp1101->methods[0];
frost$core$Bit $tmp1104 = $tmp1102(((frost$core$Equatable*) $tmp1095), ((frost$core$Equatable*) $tmp1100));
bool $tmp1105 = $tmp1104.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1100)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1095)));
if ($tmp1105) goto block66; else goto block70;
block70:;
org$frostlang$frostc$Type$Kind* $tmp1106 = &$tmp1092->typeKind;
org$frostlang$frostc$Type$Kind $tmp1107 = *$tmp1106;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1108;
$tmp1108 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1108->value = $tmp1107;
frost$core$Int $tmp1109 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1110 = &(&local30)->$rawValue;
*$tmp1110 = $tmp1109;
org$frostlang$frostc$Type$Kind $tmp1111 = *(&local30);
*(&local29) = $tmp1111;
org$frostlang$frostc$Type$Kind $tmp1112 = *(&local29);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1113;
$tmp1113 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1113->value = $tmp1112;
ITable* $tmp1114 = ((frost$core$Equatable*) $tmp1108)->$class->itable;
while ($tmp1114->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1114 = $tmp1114->next;
}
$fn1116 $tmp1115 = $tmp1114->methods[0];
frost$core$Bit $tmp1117 = $tmp1115(((frost$core$Equatable*) $tmp1108), ((frost$core$Equatable*) $tmp1113));
bool $tmp1118 = $tmp1117.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1113)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1108)));
if ($tmp1118) goto block66; else goto block69;
block69:;
org$frostlang$frostc$Type$Kind* $tmp1119 = &$tmp1092->typeKind;
org$frostlang$frostc$Type$Kind $tmp1120 = *$tmp1119;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1121;
$tmp1121 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1121->value = $tmp1120;
frost$core$Int $tmp1122 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1123 = &(&local32)->$rawValue;
*$tmp1123 = $tmp1122;
org$frostlang$frostc$Type$Kind $tmp1124 = *(&local32);
*(&local31) = $tmp1124;
org$frostlang$frostc$Type$Kind $tmp1125 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1126;
$tmp1126 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1126->value = $tmp1125;
ITable* $tmp1127 = ((frost$core$Equatable*) $tmp1121)->$class->itable;
while ($tmp1127->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1127 = $tmp1127->next;
}
$fn1129 $tmp1128 = $tmp1127->methods[0];
frost$core$Bit $tmp1130 = $tmp1128(((frost$core$Equatable*) $tmp1121), ((frost$core$Equatable*) $tmp1126));
bool $tmp1131 = $tmp1130.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1126)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1121)));
if ($tmp1131) goto block66; else goto block68;
block68:;
org$frostlang$frostc$Type$Kind* $tmp1132 = &$tmp1092->typeKind;
org$frostlang$frostc$Type$Kind $tmp1133 = *$tmp1132;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1134;
$tmp1134 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1134->value = $tmp1133;
frost$core$Int $tmp1135 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1136 = &(&local34)->$rawValue;
*$tmp1136 = $tmp1135;
org$frostlang$frostc$Type$Kind $tmp1137 = *(&local34);
*(&local33) = $tmp1137;
org$frostlang$frostc$Type$Kind $tmp1138 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1139;
$tmp1139 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1139->value = $tmp1138;
ITable* $tmp1140 = ((frost$core$Equatable*) $tmp1134)->$class->itable;
while ($tmp1140->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1140 = $tmp1140->next;
}
$fn1142 $tmp1141 = $tmp1140->methods[0];
frost$core$Bit $tmp1143 = $tmp1141(((frost$core$Equatable*) $tmp1134), ((frost$core$Equatable*) $tmp1139));
bool $tmp1144 = $tmp1143.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1139)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1134)));
if ($tmp1144) goto block66; else goto block67;
block67:;
frost$core$Int $tmp1145 = (frost$core$Int) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1146, $tmp1145, &$s1147);
abort(); // unreachable
block66:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1148 = &$tmp1092->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1149 = *$tmp1148;
frost$core$Bit $tmp1150 = (frost$core$Bit) {$tmp1149 != NULL};
bool $tmp1151 = $tmp1150.value;
if ($tmp1151) goto block76; else goto block77;
block77:;
frost$core$Int $tmp1152 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1153, $tmp1152);
abort(); // unreachable
block76:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1154 = &$tmp1092->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1155 = *$tmp1154;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1156 = &$tmp1092->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1157 = *$tmp1156;
frost$core$Bit $tmp1158 = (frost$core$Bit) {$tmp1157 != NULL};
bool $tmp1159 = $tmp1158.value;
if ($tmp1159) goto block79; else goto block80;
block80:;
frost$core$Int $tmp1160 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1161, $tmp1160);
abort(); // unreachable
block79:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1162 = &$tmp1092->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1163 = *$tmp1162;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
ITable* $tmp1164 = ((frost$collections$CollectionView*) $tmp1163)->$class->itable;
while ($tmp1164->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1164 = $tmp1164->next;
}
$fn1166 $tmp1165 = $tmp1164->methods[0];
frost$core$Int $tmp1167 = $tmp1165(((frost$collections$CollectionView*) $tmp1163));
frost$core$Int $tmp1168 = (frost$core$Int) {1u};
int64_t $tmp1169 = $tmp1167.value;
int64_t $tmp1170 = $tmp1168.value;
int64_t $tmp1171 = $tmp1169 - $tmp1170;
frost$core$Int $tmp1172 = (frost$core$Int) {$tmp1171};
frost$core$Object* $tmp1173 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1155, $tmp1172);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1173)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1173);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1091, ((org$frostlang$frostc$Type*) $tmp1173));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1088, ((frost$collections$Key*) $tmp1090), ((frost$core$Object*) $tmp1091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1173)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1090)));
goto block43;
block43:;
org$frostlang$frostc$Type* $tmp1174 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1175 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block14;
block40:;
frost$core$Int $tmp1176 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:356:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1177 = $tmp827.value;
int64_t $tmp1178 = $tmp1176.value;
bool $tmp1179 = $tmp1177 == $tmp1178;
frost$core$Bit $tmp1180 = (frost$core$Bit) {$tmp1179};
bool $tmp1181 = $tmp1180.value;
if ($tmp1181) goto block81; else goto block82;
block81:;
org$frostlang$frostc$Position* $tmp1182 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 0);
org$frostlang$frostc$Position $tmp1183 = *$tmp1182;
org$frostlang$frostc$IR$Value** $tmp1184 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1185 = *$tmp1184;
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
org$frostlang$frostc$IR$Value* $tmp1186 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
*(&local35) = $tmp1185;
org$frostlang$frostc$FieldDecl** $tmp1187 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp1188 = *$tmp1187;
*(&local36) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
org$frostlang$frostc$FieldDecl* $tmp1189 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
*(&local36) = $tmp1188;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:357
org$frostlang$frostc$FieldDecl* $tmp1190 = *(&local36);
frost$core$Weak** $tmp1191 = &$tmp1190->owner;
frost$core$Weak* $tmp1192 = *$tmp1191;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Analyzer.frost:357:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1193 = &$tmp1192->_valid;
frost$core$Bit $tmp1194 = *$tmp1193;
bool $tmp1195 = $tmp1194.value;
if ($tmp1195) goto block89; else goto block90;
block90:;
frost$core$Int $tmp1196 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1197, $tmp1196);
abort(); // unreachable
block89:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1198 = &$tmp1192->value;
frost$core$Object* $tmp1199 = *$tmp1198;
frost$core$Frost$ref$frost$core$Object$Q($tmp1199);
org$frostlang$frostc$Type** $tmp1200 = &((org$frostlang$frostc$ClassDecl*) $tmp1199)->type;
org$frostlang$frostc$Type* $tmp1201 = *$tmp1200;
org$frostlang$frostc$Compiler** $tmp1202 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1203 = *$tmp1202;
org$frostlang$frostc$Type** $tmp1204 = &$tmp1203->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1205 = *$tmp1204;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:357:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1206 = &((org$frostlang$frostc$Symbol*) $tmp1201)->name;
frost$core$String* $tmp1207 = *$tmp1206;
frost$core$String** $tmp1208 = &((org$frostlang$frostc$Symbol*) $tmp1205)->name;
frost$core$String* $tmp1209 = *$tmp1208;
frost$core$Bit $tmp1210 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1207, $tmp1209);
bool $tmp1211 = $tmp1210.value;
if ($tmp1211) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Type$Kind* $tmp1212 = &$tmp1201->typeKind;
org$frostlang$frostc$Type$Kind $tmp1213 = *$tmp1212;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1214;
$tmp1214 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1214->value = $tmp1213;
org$frostlang$frostc$Type$Kind* $tmp1215 = &$tmp1205->typeKind;
org$frostlang$frostc$Type$Kind $tmp1216 = *$tmp1215;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1217;
$tmp1217 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1217->value = $tmp1216;
ITable* $tmp1218 = ((frost$core$Equatable*) $tmp1214)->$class->itable;
while ($tmp1218->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1218 = $tmp1218->next;
}
$fn1220 $tmp1219 = $tmp1218->methods[0];
frost$core$Bit $tmp1221 = $tmp1219(((frost$core$Equatable*) $tmp1214), ((frost$core$Equatable*) $tmp1217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1217)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1214)));
*(&local37) = $tmp1221;
goto block94;
block93:;
*(&local37) = $tmp1210;
goto block94;
block94:;
frost$core$Bit $tmp1222 = *(&local37);
bool $tmp1223 = $tmp1222.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1199);
if ($tmp1223) goto block84; else goto block86;
block84:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:358
org$frostlang$frostc$pass$Analyzer$State* $tmp1224 = *(&local0);
frost$collections$HashMap** $tmp1225 = &$tmp1224->statements;
frost$collections$HashMap* $tmp1226 = *$tmp1225;
org$frostlang$frostc$IR$Statement$ID $tmp1227 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1228;
$tmp1228 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1228->value = $tmp1227;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1229 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp1230 = *(&local36);
org$frostlang$frostc$Type** $tmp1231 = &$tmp1230->type;
org$frostlang$frostc$Type* $tmp1232 = *$tmp1231;
org$frostlang$frostc$IR$Value* $tmp1233 = *(&local35);
org$frostlang$frostc$pass$Analyzer$State* $tmp1234 = *(&local0);
$fn1236 $tmp1235 = ($fn1236) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1237 = $tmp1235(param0, $tmp1233, $tmp1234);
frost$collections$ListView** $tmp1238 = &$tmp1237->nonNullImplications;
frost$collections$ListView* $tmp1239 = *$tmp1238;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp1229, $tmp1232, $tmp1239);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1226, ((frost$collections$Key*) $tmp1228), ((frost$core$Object*) $tmp1229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1228)));
goto block85;
block86:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:362
org$frostlang$frostc$pass$Analyzer$State* $tmp1240 = *(&local0);
frost$collections$HashMap** $tmp1241 = &$tmp1240->statements;
frost$collections$HashMap* $tmp1242 = *$tmp1241;
org$frostlang$frostc$IR$Statement$ID $tmp1243 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1244;
$tmp1244 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1244->value = $tmp1243;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1245 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp1246 = *(&local36);
org$frostlang$frostc$Type** $tmp1247 = &$tmp1246->type;
org$frostlang$frostc$Type* $tmp1248 = *$tmp1247;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1245, $tmp1248);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1242, ((frost$collections$Key*) $tmp1244), ((frost$core$Object*) $tmp1245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1244)));
goto block85;
block85:;
org$frostlang$frostc$FieldDecl* $tmp1249 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
*(&local36) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp1250 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block14;
block82:;
frost$core$Int $tmp1251 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:365:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1252 = $tmp827.value;
int64_t $tmp1253 = $tmp1251.value;
bool $tmp1254 = $tmp1252 == $tmp1253;
frost$core$Bit $tmp1255 = (frost$core$Bit) {$tmp1254};
bool $tmp1256 = $tmp1255.value;
if ($tmp1256) goto block95; else goto block96;
block95:;
org$frostlang$frostc$Position* $tmp1257 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 0);
org$frostlang$frostc$Position $tmp1258 = *$tmp1257;
org$frostlang$frostc$IR$Value** $tmp1259 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1260 = *$tmp1259;
org$frostlang$frostc$FieldDecl** $tmp1261 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp1262 = *$tmp1261;
*(&local38) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
org$frostlang$frostc$FieldDecl* $tmp1263 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
*(&local38) = $tmp1262;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:366
org$frostlang$frostc$pass$Analyzer$State* $tmp1264 = *(&local0);
frost$collections$HashMap** $tmp1265 = &$tmp1264->statements;
frost$collections$HashMap* $tmp1266 = *$tmp1265;
org$frostlang$frostc$IR$Statement$ID $tmp1267 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1268;
$tmp1268 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1268->value = $tmp1267;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1269 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp1270 = *(&local38);
org$frostlang$frostc$Type** $tmp1271 = &$tmp1270->type;
org$frostlang$frostc$Type* $tmp1272 = *$tmp1271;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1269, $tmp1272);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1266, ((frost$collections$Key*) $tmp1268), ((frost$core$Object*) $tmp1269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1268)));
org$frostlang$frostc$FieldDecl* $tmp1273 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
*(&local38) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block14;
block96:;
frost$core$Int $tmp1274 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:368:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1275 = $tmp827.value;
int64_t $tmp1276 = $tmp1274.value;
bool $tmp1277 = $tmp1275 == $tmp1276;
frost$core$Bit $tmp1278 = (frost$core$Bit) {$tmp1277};
bool $tmp1279 = $tmp1278.value;
if ($tmp1279) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp1280 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 0);
org$frostlang$frostc$Position $tmp1281 = *$tmp1280;
*(&local39) = $tmp1281;
org$frostlang$frostc$IR$Value** $tmp1282 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1283 = *$tmp1282;
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
org$frostlang$frostc$IR$Value* $tmp1284 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
*(&local40) = $tmp1283;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:369
org$frostlang$frostc$IR$Value* $tmp1285 = *(&local40);
org$frostlang$frostc$pass$Analyzer$State* $tmp1286 = *(&local0);
$fn1288 $tmp1287 = ($fn1288) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1289 = $tmp1287(param0, $tmp1285, $tmp1286);
*(&local41) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1290 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
*(&local41) = $tmp1289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:370
org$frostlang$frostc$pass$Analyzer$State* $tmp1291 = *(&local0);
frost$collections$HashMap** $tmp1292 = &$tmp1291->statements;
frost$collections$HashMap* $tmp1293 = *$tmp1292;
org$frostlang$frostc$IR$Statement$ID $tmp1294 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1295;
$tmp1295 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1295->value = $tmp1294;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1296 = *(&local41);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1293, ((frost$collections$Key*) $tmp1295), ((frost$core$Object*) $tmp1296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1295)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:371
bool $tmp1297 = param2.value;
if ($tmp1297) goto block103; else goto block102;
block103:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1298 = *(&local41);
org$frostlang$frostc$Type** $tmp1299 = &$tmp1298->type;
org$frostlang$frostc$Type* $tmp1300 = *$tmp1299;
org$frostlang$frostc$Compiler** $tmp1301 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1302 = *$tmp1301;
org$frostlang$frostc$Type** $tmp1303 = &$tmp1302->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp1304 = *$tmp1303;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:371:50
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1305 = &((org$frostlang$frostc$Symbol*) $tmp1300)->name;
frost$core$String* $tmp1306 = *$tmp1305;
frost$core$String** $tmp1307 = &((org$frostlang$frostc$Symbol*) $tmp1304)->name;
frost$core$String* $tmp1308 = *$tmp1307;
frost$core$Bit $tmp1309 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1306, $tmp1308);
bool $tmp1310 = $tmp1309.value;
if ($tmp1310) goto block105; else goto block106;
block105:;
org$frostlang$frostc$Type$Kind* $tmp1311 = &$tmp1300->typeKind;
org$frostlang$frostc$Type$Kind $tmp1312 = *$tmp1311;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1313;
$tmp1313 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1313->value = $tmp1312;
org$frostlang$frostc$Type$Kind* $tmp1314 = &$tmp1304->typeKind;
org$frostlang$frostc$Type$Kind $tmp1315 = *$tmp1314;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1316;
$tmp1316 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1316->value = $tmp1315;
ITable* $tmp1317 = ((frost$core$Equatable*) $tmp1313)->$class->itable;
while ($tmp1317->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1317 = $tmp1317->next;
}
$fn1319 $tmp1318 = $tmp1317->methods[0];
frost$core$Bit $tmp1320 = $tmp1318(((frost$core$Equatable*) $tmp1313), ((frost$core$Equatable*) $tmp1316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1316)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1313)));
*(&local42) = $tmp1320;
goto block107;
block106:;
*(&local42) = $tmp1309;
goto block107;
block107:;
frost$core$Bit $tmp1321 = *(&local42);
bool $tmp1322 = $tmp1321.value;
if ($tmp1322) goto block101; else goto block102;
block101:;
goto block102;
block102:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1323 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
*(&local41) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp1324 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block14;
block99:;
frost$core$Int $tmp1325 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:375:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1326 = $tmp827.value;
int64_t $tmp1327 = $tmp1325.value;
bool $tmp1328 = $tmp1326 == $tmp1327;
frost$core$Bit $tmp1329 = (frost$core$Bit) {$tmp1328};
bool $tmp1330 = $tmp1329.value;
if ($tmp1330) goto block108; else goto block109;
block108:;
org$frostlang$frostc$Position* $tmp1331 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 0);
org$frostlang$frostc$Position $tmp1332 = *$tmp1331;
org$frostlang$frostc$IR$Value** $tmp1333 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1334 = *$tmp1333;
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
org$frostlang$frostc$IR$Value* $tmp1335 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local43) = $tmp1334;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:376
org$frostlang$frostc$pass$Analyzer$State* $tmp1336 = *(&local0);
frost$collections$HashMap** $tmp1337 = &$tmp1336->statements;
frost$collections$HashMap* $tmp1338 = *$tmp1337;
org$frostlang$frostc$IR$Statement$ID $tmp1339 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1340;
$tmp1340 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1340->value = $tmp1339;
org$frostlang$frostc$IR$Value* $tmp1341 = *(&local43);
org$frostlang$frostc$pass$Analyzer$State* $tmp1342 = *(&local0);
$fn1344 $tmp1343 = ($fn1344) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1345 = $tmp1343(param0, $tmp1341, $tmp1342);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1338, ((frost$collections$Key*) $tmp1340), ((frost$core$Object*) $tmp1345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1340)));
org$frostlang$frostc$IR$Value* $tmp1346 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block14;
block109:;
frost$core$Int $tmp1347 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:378:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1348 = $tmp827.value;
int64_t $tmp1349 = $tmp1347.value;
bool $tmp1350 = $tmp1348 == $tmp1349;
frost$core$Bit $tmp1351 = (frost$core$Bit) {$tmp1350};
bool $tmp1352 = $tmp1351.value;
if ($tmp1352) goto block111; else goto block112;
block111:;
org$frostlang$frostc$Position* $tmp1353 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 0);
org$frostlang$frostc$Position $tmp1354 = *$tmp1353;
org$frostlang$frostc$IR$Value** $tmp1355 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1356 = *$tmp1355;
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
org$frostlang$frostc$IR$Value* $tmp1357 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
*(&local44) = $tmp1356;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:379
org$frostlang$frostc$pass$Analyzer$State* $tmp1358 = *(&local0);
frost$collections$HashMap** $tmp1359 = &$tmp1358->statements;
frost$collections$HashMap* $tmp1360 = *$tmp1359;
org$frostlang$frostc$IR$Statement$ID $tmp1361 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1362;
$tmp1362 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1362->value = $tmp1361;
org$frostlang$frostc$IR$Value* $tmp1363 = *(&local44);
org$frostlang$frostc$pass$Analyzer$State* $tmp1364 = *(&local0);
$fn1366 $tmp1365 = ($fn1366) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1367 = $tmp1365(param0, $tmp1363, $tmp1364);
$fn1369 $tmp1368 = ($fn1369) $tmp1367->$class->vtable[4];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1370 = $tmp1368($tmp1367);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1360, ((frost$collections$Key*) $tmp1362), ((frost$core$Object*) $tmp1370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1362)));
org$frostlang$frostc$IR$Value* $tmp1371 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block14;
block112:;
frost$core$Int $tmp1372 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:381:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1373 = $tmp827.value;
int64_t $tmp1374 = $tmp1372.value;
bool $tmp1375 = $tmp1373 == $tmp1374;
frost$core$Bit $tmp1376 = (frost$core$Bit) {$tmp1375};
bool $tmp1377 = $tmp1376.value;
if ($tmp1377) goto block114; else goto block115;
block114:;
org$frostlang$frostc$Position* $tmp1378 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 0);
org$frostlang$frostc$Position $tmp1379 = *$tmp1378;
org$frostlang$frostc$IR$Value** $tmp1380 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1381 = *$tmp1380;
org$frostlang$frostc$Type** $tmp1382 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 32);
org$frostlang$frostc$Type* $tmp1383 = *$tmp1382;
*(&local45) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
org$frostlang$frostc$Type* $tmp1384 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
*(&local45) = $tmp1383;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:382
org$frostlang$frostc$pass$Analyzer$State* $tmp1385 = *(&local0);
frost$collections$HashMap** $tmp1386 = &$tmp1385->statements;
frost$collections$HashMap* $tmp1387 = *$tmp1386;
org$frostlang$frostc$IR$Statement$ID $tmp1388 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1389;
$tmp1389 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1389->value = $tmp1388;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1390 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp1391 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1392 = *$tmp1391;
org$frostlang$frostc$Type* $tmp1393 = *(&local45);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Analyzer.frost:382:74
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:284
org$frostlang$frostc$Type** $tmp1394 = &$tmp1392->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp1395 = *$tmp1394;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1396 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1397 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1396, $tmp1397);
frost$collections$Array$add$frost$collections$Array$T($tmp1396, ((frost$core$Object*) $tmp1393));
org$frostlang$frostc$Type* $tmp1398 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1395, ((frost$collections$ListView*) $tmp1396));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1390, $tmp1398);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1387, ((frost$collections$Key*) $tmp1389), ((frost$core$Object*) $tmp1390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1389)));
org$frostlang$frostc$Type* $tmp1399 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
*(&local45) = ((org$frostlang$frostc$Type*) NULL);
goto block14;
block115:;
frost$core$Int $tmp1400 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:384:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1401 = $tmp827.value;
int64_t $tmp1402 = $tmp1400.value;
bool $tmp1403 = $tmp1401 == $tmp1402;
frost$core$Bit $tmp1404 = (frost$core$Bit) {$tmp1403};
bool $tmp1405 = $tmp1404.value;
if ($tmp1405) goto block118; else goto block119;
block118:;
org$frostlang$frostc$Position* $tmp1406 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 0);
org$frostlang$frostc$Position $tmp1407 = *$tmp1406;
org$frostlang$frostc$IR$Value** $tmp1408 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1409 = *$tmp1408;
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
org$frostlang$frostc$IR$Value* $tmp1410 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
*(&local46) = $tmp1409;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:385
org$frostlang$frostc$IR$Value* $tmp1411 = *(&local46);
org$frostlang$frostc$pass$Analyzer$State* $tmp1412 = *(&local0);
$fn1414 $tmp1413 = ($fn1414) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1415 = $tmp1413(param0, $tmp1411, $tmp1412);
*(&local47) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1416 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
*(&local47) = $tmp1415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:386
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1417 = *(&local47);
org$frostlang$frostc$Type** $tmp1418 = &$tmp1417->type;
org$frostlang$frostc$Type* $tmp1419 = *$tmp1418;
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:386:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:389
frost$core$String** $tmp1420 = &((org$frostlang$frostc$Symbol*) $tmp1419)->name;
frost$core$String* $tmp1421 = *$tmp1420;
frost$core$Bit $tmp1422 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1421, &$s1423);
bool $tmp1424 = $tmp1422.value;
if ($tmp1424) goto block122; else goto block123;
block123:;
frost$core$Int $tmp1425 = (frost$core$Int) {386u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1426, $tmp1425);
abort(); // unreachable
block122:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:387
org$frostlang$frostc$pass$Analyzer$State* $tmp1427 = *(&local0);
frost$collections$HashMap** $tmp1428 = &$tmp1427->statements;
frost$collections$HashMap* $tmp1429 = *$tmp1428;
org$frostlang$frostc$IR$Statement$ID $tmp1430 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1431;
$tmp1431 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1431->value = $tmp1430;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1432 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1433 = *(&local47);
org$frostlang$frostc$Type** $tmp1434 = &$tmp1433->type;
org$frostlang$frostc$Type* $tmp1435 = *$tmp1434;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:387:70
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1436 = &$tmp1435->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1437 = *$tmp1436;
frost$core$Bit $tmp1438 = (frost$core$Bit) {$tmp1437 != NULL};
bool $tmp1439 = $tmp1438.value;
if ($tmp1439) goto block125; else goto block126;
block126:;
frost$core$Int $tmp1440 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1441, $tmp1440);
abort(); // unreachable
block125:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1442 = &$tmp1435->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1443 = *$tmp1442;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
frost$core$Int $tmp1444 = (frost$core$Int) {1u};
frost$core$Object* $tmp1445 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1443, $tmp1444);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1432, ((org$frostlang$frostc$Type*) $tmp1445));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1429, ((frost$collections$Key*) $tmp1431), ((frost$core$Object*) $tmp1432));
frost$core$Frost$unref$frost$core$Object$Q($tmp1445);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1431)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1446 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
*(&local47) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp1447 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block14;
block119:;
frost$core$Int $tmp1448 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:389:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1449 = $tmp827.value;
int64_t $tmp1450 = $tmp1448.value;
bool $tmp1451 = $tmp1449 == $tmp1450;
frost$core$Bit $tmp1452 = (frost$core$Bit) {$tmp1451};
bool $tmp1453 = $tmp1452.value;
if ($tmp1453) goto block127; else goto block128;
block127:;
org$frostlang$frostc$Position* $tmp1454 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 0);
org$frostlang$frostc$Position $tmp1455 = *$tmp1454;
org$frostlang$frostc$IR$Value** $tmp1456 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1457 = *$tmp1456;
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
org$frostlang$frostc$IR$Value* $tmp1458 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
*(&local48) = $tmp1457;
org$frostlang$frostc$IR$Value** $tmp1459 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1460 = *$tmp1459;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:390
org$frostlang$frostc$IR$Value* $tmp1461 = *(&local48);
org$frostlang$frostc$pass$Analyzer$State* $tmp1462 = *(&local0);
$fn1464 $tmp1463 = ($fn1464) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1465 = $tmp1463(param0, $tmp1461, $tmp1462);
*(&local49) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1466 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local49) = $tmp1465;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:391
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1467 = *(&local49);
org$frostlang$frostc$Type** $tmp1468 = &$tmp1467->type;
org$frostlang$frostc$Type* $tmp1469 = *$tmp1468;
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:391:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:389
frost$core$String** $tmp1470 = &((org$frostlang$frostc$Symbol*) $tmp1469)->name;
frost$core$String* $tmp1471 = *$tmp1470;
frost$core$Bit $tmp1472 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1471, &$s1473);
bool $tmp1474 = $tmp1472.value;
if ($tmp1474) goto block131; else goto block132;
block132:;
frost$core$Int $tmp1475 = (frost$core$Int) {391u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1476, $tmp1475);
abort(); // unreachable
block131:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:392
org$frostlang$frostc$pass$Analyzer$State* $tmp1477 = *(&local0);
frost$collections$HashMap** $tmp1478 = &$tmp1477->statements;
frost$collections$HashMap* $tmp1479 = *$tmp1478;
org$frostlang$frostc$IR$Statement$ID $tmp1480 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1481;
$tmp1481 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1481->value = $tmp1480;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1482 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1483 = *(&local49);
org$frostlang$frostc$Type** $tmp1484 = &$tmp1483->type;
org$frostlang$frostc$Type* $tmp1485 = *$tmp1484;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:392:70
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1486 = &$tmp1485->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1487 = *$tmp1486;
frost$core$Bit $tmp1488 = (frost$core$Bit) {$tmp1487 != NULL};
bool $tmp1489 = $tmp1488.value;
if ($tmp1489) goto block134; else goto block135;
block135:;
frost$core$Int $tmp1490 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1491, $tmp1490);
abort(); // unreachable
block134:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1492 = &$tmp1485->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1493 = *$tmp1492;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
frost$core$Int $tmp1494 = (frost$core$Int) {1u};
frost$core$Object* $tmp1495 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1493, $tmp1494);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1482, ((org$frostlang$frostc$Type*) $tmp1495));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1479, ((frost$collections$Key*) $tmp1481), ((frost$core$Object*) $tmp1482));
frost$core$Frost$unref$frost$core$Object$Q($tmp1495);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1481)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1496 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
*(&local49) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp1497 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block14;
block128:;
frost$core$Int $tmp1498 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:394:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1499 = $tmp827.value;
int64_t $tmp1500 = $tmp1498.value;
bool $tmp1501 = $tmp1499 == $tmp1500;
frost$core$Bit $tmp1502 = (frost$core$Bit) {$tmp1501};
bool $tmp1503 = $tmp1502.value;
if ($tmp1503) goto block136; else goto block137;
block136:;
org$frostlang$frostc$Position* $tmp1504 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 0);
org$frostlang$frostc$Position $tmp1505 = *$tmp1504;
org$frostlang$frostc$IR$Value** $tmp1506 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1507 = *$tmp1506;
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
org$frostlang$frostc$IR$Value* $tmp1508 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
*(&local50) = $tmp1507;
org$frostlang$frostc$IR$Value** $tmp1509 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1510 = *$tmp1509;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:395
org$frostlang$frostc$pass$Analyzer$State* $tmp1511 = *(&local0);
frost$collections$HashMap** $tmp1512 = &$tmp1511->statements;
frost$collections$HashMap* $tmp1513 = *$tmp1512;
org$frostlang$frostc$IR$Statement$ID $tmp1514 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1515;
$tmp1515 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1515->value = $tmp1514;
org$frostlang$frostc$IR$Value* $tmp1516 = *(&local50);
org$frostlang$frostc$pass$Analyzer$State* $tmp1517 = *(&local0);
$fn1519 $tmp1518 = ($fn1519) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1520 = $tmp1518(param0, $tmp1516, $tmp1517);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1513, ((frost$collections$Key*) $tmp1515), ((frost$core$Object*) $tmp1520));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1520));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1515)));
org$frostlang$frostc$IR$Value* $tmp1521 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block14;
block137:;
frost$core$Int $tmp1522 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:397:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1523 = $tmp827.value;
int64_t $tmp1524 = $tmp1522.value;
bool $tmp1525 = $tmp1523 == $tmp1524;
frost$core$Bit $tmp1526 = (frost$core$Bit) {$tmp1525};
bool $tmp1527 = $tmp1526.value;
if ($tmp1527) goto block139; else goto block140;
block139:;
org$frostlang$frostc$Position* $tmp1528 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 0);
org$frostlang$frostc$Position $tmp1529 = *$tmp1528;
org$frostlang$frostc$IR$Value** $tmp1530 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1531 = *$tmp1530;
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
org$frostlang$frostc$IR$Value* $tmp1532 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
*(&local51) = $tmp1531;
org$frostlang$frostc$IR$Value** $tmp1533 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1534 = *$tmp1533;
org$frostlang$frostc$IR$Value** $tmp1535 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 40);
org$frostlang$frostc$IR$Value* $tmp1536 = *$tmp1535;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:398
org$frostlang$frostc$pass$Analyzer$State* $tmp1537 = *(&local0);
frost$collections$HashMap** $tmp1538 = &$tmp1537->statements;
frost$collections$HashMap* $tmp1539 = *$tmp1538;
org$frostlang$frostc$IR$Statement$ID $tmp1540 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1541;
$tmp1541 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1541->value = $tmp1540;
org$frostlang$frostc$IR$Value* $tmp1542 = *(&local51);
org$frostlang$frostc$pass$Analyzer$State* $tmp1543 = *(&local0);
$fn1545 $tmp1544 = ($fn1545) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1546 = $tmp1544(param0, $tmp1542, $tmp1543);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1539, ((frost$collections$Key*) $tmp1541), ((frost$core$Object*) $tmp1546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1541)));
org$frostlang$frostc$IR$Value* $tmp1547 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block14;
block140:;
frost$core$Int $tmp1548 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:400:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1549 = $tmp827.value;
int64_t $tmp1550 = $tmp1548.value;
bool $tmp1551 = $tmp1549 == $tmp1550;
frost$core$Bit $tmp1552 = (frost$core$Bit) {$tmp1551};
bool $tmp1553 = $tmp1552.value;
if ($tmp1553) goto block142; else goto block143;
block142:;
org$frostlang$frostc$Position* $tmp1554 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 0);
org$frostlang$frostc$Position $tmp1555 = *$tmp1554;
org$frostlang$frostc$MethodDecl** $tmp1556 = (org$frostlang$frostc$MethodDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 24);
org$frostlang$frostc$MethodDecl* $tmp1557 = *$tmp1556;
*(&local52) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
org$frostlang$frostc$MethodDecl* $tmp1558 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1558));
*(&local52) = $tmp1557;
org$frostlang$frostc$FixedArray** $tmp1559 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1560 = *$tmp1559;
*(&local53) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
org$frostlang$frostc$FixedArray* $tmp1561 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
*(&local53) = $tmp1560;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:401
org$frostlang$frostc$MethodDecl* $tmp1562 = *(&local52);
org$frostlang$frostc$Type** $tmp1563 = &$tmp1562->returnType;
org$frostlang$frostc$Type* $tmp1564 = *$tmp1563;
org$frostlang$frostc$Compiler** $tmp1565 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1566 = *$tmp1565;
org$frostlang$frostc$Type** $tmp1567 = &$tmp1566->BIT_TYPE;
org$frostlang$frostc$Type* $tmp1568 = *$tmp1567;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:401:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1569 = &((org$frostlang$frostc$Symbol*) $tmp1564)->name;
frost$core$String* $tmp1570 = *$tmp1569;
frost$core$String** $tmp1571 = &((org$frostlang$frostc$Symbol*) $tmp1568)->name;
frost$core$String* $tmp1572 = *$tmp1571;
frost$core$Bit $tmp1573 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1570, $tmp1572);
bool $tmp1574 = $tmp1573.value;
if ($tmp1574) goto block149; else goto block150;
block149:;
org$frostlang$frostc$Type$Kind* $tmp1575 = &$tmp1564->typeKind;
org$frostlang$frostc$Type$Kind $tmp1576 = *$tmp1575;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1577;
$tmp1577 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1577->value = $tmp1576;
org$frostlang$frostc$Type$Kind* $tmp1578 = &$tmp1568->typeKind;
org$frostlang$frostc$Type$Kind $tmp1579 = *$tmp1578;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1580;
$tmp1580 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1580->value = $tmp1579;
ITable* $tmp1581 = ((frost$core$Equatable*) $tmp1577)->$class->itable;
while ($tmp1581->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1581 = $tmp1581->next;
}
$fn1583 $tmp1582 = $tmp1581->methods[0];
frost$core$Bit $tmp1584 = $tmp1582(((frost$core$Equatable*) $tmp1577), ((frost$core$Equatable*) $tmp1580));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1580)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1577)));
*(&local54) = $tmp1584;
goto block151;
block150:;
*(&local54) = $tmp1573;
goto block151;
block151:;
frost$core$Bit $tmp1585 = *(&local54);
bool $tmp1586 = $tmp1585.value;
if ($tmp1586) goto block145; else goto block147;
block145:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:402
org$frostlang$frostc$pass$Analyzer$State* $tmp1587 = *(&local0);
frost$collections$HashMap** $tmp1588 = &$tmp1587->statements;
frost$collections$HashMap* $tmp1589 = *$tmp1588;
org$frostlang$frostc$IR$Statement$ID $tmp1590 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1591;
$tmp1591 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1591->value = $tmp1590;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1592 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$MethodDecl* $tmp1593 = *(&local52);
org$frostlang$frostc$Type** $tmp1594 = &$tmp1593->returnType;
org$frostlang$frostc$Type* $tmp1595 = *$tmp1594;
org$frostlang$frostc$FixedArray* $tmp1596 = *(&local53);
frost$core$Int $tmp1597 = (frost$core$Int) {0u};
frost$core$Object* $tmp1598 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1596, $tmp1597);
org$frostlang$frostc$pass$Analyzer$State* $tmp1599 = *(&local0);
$fn1601 $tmp1600 = ($fn1601) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1602 = $tmp1600(param0, ((org$frostlang$frostc$IR$Value*) $tmp1598), $tmp1599);
frost$collections$ListView** $tmp1603 = &$tmp1602->nonNullImplications;
frost$collections$ListView* $tmp1604 = *$tmp1603;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp1592, $tmp1595, $tmp1604);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1589, ((frost$collections$Key*) $tmp1591), ((frost$core$Object*) $tmp1592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
frost$core$Frost$unref$frost$core$Object$Q($tmp1598);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1591)));
goto block146;
block147:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:406
org$frostlang$frostc$pass$Analyzer$State* $tmp1605 = *(&local0);
frost$collections$HashMap** $tmp1606 = &$tmp1605->statements;
frost$collections$HashMap* $tmp1607 = *$tmp1606;
org$frostlang$frostc$IR$Statement$ID $tmp1608 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1609;
$tmp1609 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1609->value = $tmp1608;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1610 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$MethodDecl* $tmp1611 = *(&local52);
org$frostlang$frostc$Type** $tmp1612 = &$tmp1611->returnType;
org$frostlang$frostc$Type* $tmp1613 = *$tmp1612;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1610, $tmp1613);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1607, ((frost$collections$Key*) $tmp1609), ((frost$core$Object*) $tmp1610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1609)));
goto block146;
block146:;
org$frostlang$frostc$FixedArray* $tmp1614 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
*(&local53) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1615 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1615));
*(&local52) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block14;
block143:;
frost$core$Int $tmp1616 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:409:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1617 = $tmp827.value;
int64_t $tmp1618 = $tmp1616.value;
bool $tmp1619 = $tmp1617 == $tmp1618;
frost$core$Bit $tmp1620 = (frost$core$Bit) {$tmp1619};
bool $tmp1621 = $tmp1620.value;
if ($tmp1621) goto block152; else goto block14;
block152:;
org$frostlang$frostc$Position* $tmp1622 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 0);
org$frostlang$frostc$Position $tmp1623 = *$tmp1622;
org$frostlang$frostc$IR$Value** $tmp1624 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1625 = *$tmp1624;
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
org$frostlang$frostc$IR$Value* $tmp1626 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
*(&local55) = $tmp1625;
org$frostlang$frostc$IR$Value** $tmp1627 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp825)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1628 = *$tmp1627;
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
org$frostlang$frostc$IR$Value* $tmp1629 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
*(&local56) = $tmp1628;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:410
org$frostlang$frostc$IR$Value* $tmp1630 = *(&local56);
frost$core$Int* $tmp1631 = &$tmp1630->$rawValue;
frost$core$Int $tmp1632 = *$tmp1631;
frost$core$Int $tmp1633 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:411:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1634 = $tmp1632.value;
int64_t $tmp1635 = $tmp1633.value;
bool $tmp1636 = $tmp1634 == $tmp1635;
frost$core$Bit $tmp1637 = (frost$core$Bit) {$tmp1636};
bool $tmp1638 = $tmp1637.value;
if ($tmp1638) goto block155; else goto block154;
block155:;
frost$core$Int* $tmp1639 = (frost$core$Int*) ($tmp1630->$data + 0);
frost$core$Int $tmp1640 = *$tmp1639;
*(&local57) = $tmp1640;
org$frostlang$frostc$Type** $tmp1641 = (org$frostlang$frostc$Type**) ($tmp1630->$data + 8);
org$frostlang$frostc$Type* $tmp1642 = *$tmp1641;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:412
org$frostlang$frostc$pass$Analyzer$State* $tmp1643 = *(&local0);
frost$collections$Array** $tmp1644 = &$tmp1643->locals;
frost$collections$Array* $tmp1645 = *$tmp1644;
frost$core$Int $tmp1646 = *(&local57);
org$frostlang$frostc$IR$Value* $tmp1647 = *(&local55);
org$frostlang$frostc$pass$Analyzer$State* $tmp1648 = *(&local0);
$fn1650 $tmp1649 = ($fn1650) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1651 = $tmp1649(param0, $tmp1647, $tmp1648);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:412:42
frost$core$Int $tmp1652 = (frost$core$Int) {0u};
int64_t $tmp1653 = $tmp1646.value;
int64_t $tmp1654 = $tmp1652.value;
bool $tmp1655 = $tmp1653 >= $tmp1654;
frost$core$Bit $tmp1656 = (frost$core$Bit) {$tmp1655};
bool $tmp1657 = $tmp1656.value;
if ($tmp1657) goto block160; else goto block159;
block160:;
ITable* $tmp1658 = ((frost$collections$CollectionView*) $tmp1645)->$class->itable;
while ($tmp1658->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1658 = $tmp1658->next;
}
$fn1660 $tmp1659 = $tmp1658->methods[0];
frost$core$Int $tmp1661 = $tmp1659(((frost$collections$CollectionView*) $tmp1645));
int64_t $tmp1662 = $tmp1646.value;
int64_t $tmp1663 = $tmp1661.value;
bool $tmp1664 = $tmp1662 < $tmp1663;
frost$core$Bit $tmp1665 = (frost$core$Bit) {$tmp1664};
bool $tmp1666 = $tmp1665.value;
if ($tmp1666) goto block158; else goto block159;
block159:;
frost$core$Int $tmp1667 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1668, $tmp1667, &$s1669);
abort(); // unreachable
block158:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1670 = &$tmp1645->data;
frost$core$Object** $tmp1671 = *$tmp1670;
frost$core$Int64 $tmp1672 = frost$core$Int64$init$frost$core$Int($tmp1646);
int64_t $tmp1673 = $tmp1672.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
frost$core$Object* $tmp1674 = $tmp1671[$tmp1673];
frost$core$Frost$unref$frost$core$Object$Q($tmp1674);
$tmp1671[$tmp1673] = ((frost$core$Object*) $tmp1651);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
goto block154;
block154:;
org$frostlang$frostc$IR$Value* $tmp1675 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1676 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1676));
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block14;
block14:;
frost$core$Frost$unref$frost$core$Object$Q($tmp825);
frost$core$Int $tmp1677 = *(&local2);
int64_t $tmp1678 = $tmp758.value;
int64_t $tmp1679 = $tmp1677.value;
int64_t $tmp1680 = $tmp1678 - $tmp1679;
frost$core$Int $tmp1681 = (frost$core$Int) {$tmp1680};
if ($tmp760) goto block162; else goto block163;
block162:;
int64_t $tmp1682 = $tmp1681.value;
int64_t $tmp1683 = $tmp761.value;
bool $tmp1684 = $tmp1682 >= $tmp1683;
frost$core$Bit $tmp1685 = (frost$core$Bit) {$tmp1684};
bool $tmp1686 = $tmp1685.value;
if ($tmp1686) goto block161; else goto block2;
block163:;
int64_t $tmp1687 = $tmp1681.value;
int64_t $tmp1688 = $tmp761.value;
bool $tmp1689 = $tmp1687 > $tmp1688;
frost$core$Bit $tmp1690 = (frost$core$Bit) {$tmp1689};
bool $tmp1691 = $tmp1690.value;
if ($tmp1691) goto block161; else goto block2;
block161:;
int64_t $tmp1692 = $tmp1677.value;
int64_t $tmp1693 = $tmp761.value;
int64_t $tmp1694 = $tmp1692 + $tmp1693;
frost$core$Int $tmp1695 = (frost$core$Int) {$tmp1694};
*(&local2) = $tmp1695;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:418
org$frostlang$frostc$IR$Block* $tmp1696 = *(&local1);
frost$core$Int $tmp1697 = param1.exit;
org$frostlang$frostc$pass$Analyzer$State* $tmp1698 = *(&local0);
$fn1700 $tmp1699 = ($fn1700) param0->$class->vtable[5];
$tmp1699(param0, $tmp1696, $tmp1697, $tmp1698);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:419
org$frostlang$frostc$pass$Analyzer$State* $tmp1701 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
org$frostlang$frostc$IR$Block* $tmp1702 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1702));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
org$frostlang$frostc$pass$Analyzer$State* $tmp1703 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1703));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
return $tmp1701;

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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:423
$fn1705 $tmp1704 = ($fn1705) param0->$class->vtable[4];
org$frostlang$frostc$IR$Block* $tmp1706 = $tmp1704(param0, param1);
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
org$frostlang$frostc$IR$Block* $tmp1707 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
*(&local0) = $tmp1706;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:424
org$frostlang$frostc$IR$Block* $tmp1708 = *(&local0);
frost$collections$Array** $tmp1709 = &$tmp1708->statements;
frost$collections$Array* $tmp1710 = *$tmp1709;
org$frostlang$frostc$IR$Block* $tmp1711 = *(&local0);
frost$collections$Array** $tmp1712 = &$tmp1711->statements;
frost$collections$Array* $tmp1713 = *$tmp1712;
ITable* $tmp1714 = ((frost$collections$CollectionView*) $tmp1713)->$class->itable;
while ($tmp1714->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1714 = $tmp1714->next;
}
$fn1716 $tmp1715 = $tmp1714->methods[0];
frost$core$Int $tmp1717 = $tmp1715(((frost$collections$CollectionView*) $tmp1713));
frost$core$Int $tmp1718 = (frost$core$Int) {1u};
int64_t $tmp1719 = $tmp1717.value;
int64_t $tmp1720 = $tmp1718.value;
int64_t $tmp1721 = $tmp1719 - $tmp1720;
frost$core$Int $tmp1722 = (frost$core$Int) {$tmp1721};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:424:31
frost$core$Int $tmp1723 = (frost$core$Int) {0u};
int64_t $tmp1724 = $tmp1722.value;
int64_t $tmp1725 = $tmp1723.value;
bool $tmp1726 = $tmp1724 >= $tmp1725;
frost$core$Bit $tmp1727 = (frost$core$Bit) {$tmp1726};
bool $tmp1728 = $tmp1727.value;
if ($tmp1728) goto block4; else goto block3;
block4:;
ITable* $tmp1729 = ((frost$collections$CollectionView*) $tmp1710)->$class->itable;
while ($tmp1729->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1729 = $tmp1729->next;
}
$fn1731 $tmp1730 = $tmp1729->methods[0];
frost$core$Int $tmp1732 = $tmp1730(((frost$collections$CollectionView*) $tmp1710));
int64_t $tmp1733 = $tmp1722.value;
int64_t $tmp1734 = $tmp1732.value;
bool $tmp1735 = $tmp1733 < $tmp1734;
frost$core$Bit $tmp1736 = (frost$core$Bit) {$tmp1735};
bool $tmp1737 = $tmp1736.value;
if ($tmp1737) goto block2; else goto block3;
block3:;
frost$core$Int $tmp1738 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1739, $tmp1738, &$s1740);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1741 = &$tmp1710->data;
frost$core$Object** $tmp1742 = *$tmp1741;
frost$core$Int64 $tmp1743 = frost$core$Int64$init$frost$core$Int($tmp1722);
int64_t $tmp1744 = $tmp1743.value;
frost$core$Object* $tmp1745 = $tmp1742[$tmp1744];
frost$core$Frost$ref$frost$core$Object$Q($tmp1745);
frost$core$Int* $tmp1746 = &((org$frostlang$frostc$IR$Statement*) $tmp1745)->$rawValue;
frost$core$Int $tmp1747 = *$tmp1746;
frost$core$Int $tmp1748 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:425:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1749 = $tmp1747.value;
int64_t $tmp1750 = $tmp1748.value;
bool $tmp1751 = $tmp1749 == $tmp1750;
frost$core$Bit $tmp1752 = (frost$core$Bit) {$tmp1751};
bool $tmp1753 = $tmp1752.value;
if ($tmp1753) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp1754 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1745)->$data + 0);
org$frostlang$frostc$Position $tmp1755 = *$tmp1754;
org$frostlang$frostc$IR$Block$ID* $tmp1756 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1745)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp1757 = *$tmp1756;
*(&local1) = $tmp1757;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:426
org$frostlang$frostc$IR$Block* $tmp1758 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1759 = &$tmp1758->id;
org$frostlang$frostc$IR$Block$ID $tmp1760 = *$tmp1759;
frost$core$Int $tmp1761 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:426:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:80
org$frostlang$frostc$IR$Block$ID* $tmp1762 = &(&local3)->id;
*$tmp1762 = $tmp1760;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
frost$core$Int* $tmp1763 = &(&local3)->exit;
*$tmp1763 = $tmp1761;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1764 = *(&local3);
*(&local2) = $tmp1764;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1765 = *(&local2);
org$frostlang$frostc$IR$Block$ID $tmp1766 = *(&local1);
$fn1768 $tmp1767 = ($fn1768) param0->$class->vtable[3];
$tmp1767(param0, $tmp1765, $tmp1766);
goto block5;
block7:;
frost$core$Int $tmp1769 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:428:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1770 = $tmp1747.value;
int64_t $tmp1771 = $tmp1769.value;
bool $tmp1772 = $tmp1770 == $tmp1771;
frost$core$Bit $tmp1773 = (frost$core$Bit) {$tmp1772};
bool $tmp1774 = $tmp1773.value;
if ($tmp1774) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp1775 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1745)->$data + 0);
org$frostlang$frostc$Position $tmp1776 = *$tmp1775;
org$frostlang$frostc$IR$Value** $tmp1777 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1745)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1778 = *$tmp1777;
org$frostlang$frostc$IR$Block$ID* $tmp1779 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1745)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp1780 = *$tmp1779;
*(&local4) = $tmp1780;
org$frostlang$frostc$IR$Block$ID* $tmp1781 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1745)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp1782 = *$tmp1781;
*(&local5) = $tmp1782;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:429
org$frostlang$frostc$IR$Block* $tmp1783 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1784 = &$tmp1783->id;
org$frostlang$frostc$IR$Block$ID $tmp1785 = *$tmp1784;
frost$core$Int $tmp1786 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:429:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:80
org$frostlang$frostc$IR$Block$ID* $tmp1787 = &(&local7)->id;
*$tmp1787 = $tmp1785;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
frost$core$Int* $tmp1788 = &(&local7)->exit;
*$tmp1788 = $tmp1786;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1789 = *(&local7);
*(&local6) = $tmp1789;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1790 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp1791 = *(&local4);
$fn1793 $tmp1792 = ($fn1793) param0->$class->vtable[3];
$tmp1792(param0, $tmp1790, $tmp1791);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:430
org$frostlang$frostc$IR$Block* $tmp1794 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1795 = &$tmp1794->id;
org$frostlang$frostc$IR$Block$ID $tmp1796 = *$tmp1795;
frost$core$Int $tmp1797 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:430:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:80
org$frostlang$frostc$IR$Block$ID* $tmp1798 = &(&local9)->id;
*$tmp1798 = $tmp1796;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
frost$core$Int* $tmp1799 = &(&local9)->exit;
*$tmp1799 = $tmp1797;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1800 = *(&local9);
*(&local8) = $tmp1800;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1801 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp1802 = *(&local5);
$fn1804 $tmp1803 = ($fn1804) param0->$class->vtable[3];
$tmp1803(param0, $tmp1801, $tmp1802);
goto block5;
block11:;
frost$core$Int $tmp1805 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:432:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1806 = $tmp1747.value;
int64_t $tmp1807 = $tmp1805.value;
bool $tmp1808 = $tmp1806 == $tmp1807;
frost$core$Bit $tmp1809 = (frost$core$Bit) {$tmp1808};
bool $tmp1810 = $tmp1809.value;
if ($tmp1810) goto block15; else goto block16;
block15:;
goto block5;
block16:;
frost$core$Int $tmp1811 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:434:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1812 = $tmp1747.value;
int64_t $tmp1813 = $tmp1811.value;
bool $tmp1814 = $tmp1812 == $tmp1813;
frost$core$Bit $tmp1815 = (frost$core$Bit) {$tmp1814};
bool $tmp1816 = $tmp1815.value;
if ($tmp1816) goto block18; else goto block19;
block18:;
goto block5;
block19:;
frost$core$Int $tmp1817 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:436:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1818 = $tmp1747.value;
int64_t $tmp1819 = $tmp1817.value;
bool $tmp1820 = $tmp1818 == $tmp1819;
frost$core$Bit $tmp1821 = (frost$core$Bit) {$tmp1820};
bool $tmp1822 = $tmp1821.value;
if ($tmp1822) goto block21; else goto block22;
block21:;
goto block5;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:439
frost$core$Int $tmp1823 = (frost$core$Int) {439u};
org$frostlang$frostc$IR$Block* $tmp1824 = *(&local0);
frost$collections$Array** $tmp1825 = &$tmp1824->statements;
frost$collections$Array* $tmp1826 = *$tmp1825;
org$frostlang$frostc$IR$Block* $tmp1827 = *(&local0);
frost$collections$Array** $tmp1828 = &$tmp1827->statements;
frost$collections$Array* $tmp1829 = *$tmp1828;
ITable* $tmp1830 = ((frost$collections$CollectionView*) $tmp1829)->$class->itable;
while ($tmp1830->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1830 = $tmp1830->next;
}
$fn1832 $tmp1831 = $tmp1830->methods[0];
frost$core$Int $tmp1833 = $tmp1831(((frost$collections$CollectionView*) $tmp1829));
frost$core$Int $tmp1834 = (frost$core$Int) {1u};
int64_t $tmp1835 = $tmp1833.value;
int64_t $tmp1836 = $tmp1834.value;
int64_t $tmp1837 = $tmp1835 - $tmp1836;
frost$core$Int $tmp1838 = (frost$core$Int) {$tmp1837};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:440:41
frost$core$Int $tmp1839 = (frost$core$Int) {0u};
int64_t $tmp1840 = $tmp1838.value;
int64_t $tmp1841 = $tmp1839.value;
bool $tmp1842 = $tmp1840 >= $tmp1841;
frost$core$Bit $tmp1843 = (frost$core$Bit) {$tmp1842};
bool $tmp1844 = $tmp1843.value;
if ($tmp1844) goto block27; else goto block26;
block27:;
ITable* $tmp1845 = ((frost$collections$CollectionView*) $tmp1826)->$class->itable;
while ($tmp1845->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1845 = $tmp1845->next;
}
$fn1847 $tmp1846 = $tmp1845->methods[0];
frost$core$Int $tmp1848 = $tmp1846(((frost$collections$CollectionView*) $tmp1826));
int64_t $tmp1849 = $tmp1838.value;
int64_t $tmp1850 = $tmp1848.value;
bool $tmp1851 = $tmp1849 < $tmp1850;
frost$core$Bit $tmp1852 = (frost$core$Bit) {$tmp1851};
bool $tmp1853 = $tmp1852.value;
if ($tmp1853) goto block25; else goto block26;
block26:;
frost$core$Int $tmp1854 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1855, $tmp1854, &$s1856);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1857 = &$tmp1826->data;
frost$core$Object** $tmp1858 = *$tmp1857;
frost$core$Int64 $tmp1859 = frost$core$Int64$init$frost$core$Int($tmp1838);
int64_t $tmp1860 = $tmp1859.value;
frost$core$Object* $tmp1861 = $tmp1858[$tmp1860];
frost$core$Frost$ref$frost$core$Object$Q($tmp1861);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:439:70
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn1863 $tmp1862 = ($fn1863) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1861))->$class->vtable[0];
frost$core$String* $tmp1864 = $tmp1862(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1861)));
frost$core$String* $tmp1865 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1866, $tmp1864);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1867, $tmp1823, $tmp1865);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
frost$core$Frost$unref$frost$core$Object$Q($tmp1861);
abort(); // unreachable
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1745);
org$frostlang$frostc$IR$Block* $tmp1868 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1868));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$dump(org$frostlang$frostc$pass$Analyzer* param0) {

frost$core$Int local0;
org$frostlang$frostc$IR$Block* local1 = NULL;
frost$core$Int local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:446
org$frostlang$frostc$MethodDecl** $tmp1869 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp1870 = *$tmp1869;
frost$core$String* $tmp1871 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp1870);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Analyzer.frost:446:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1871);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1872);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:447
frost$core$Int $tmp1873 = (frost$core$Int) {0u};
org$frostlang$frostc$IR** $tmp1874 = &param0->ir;
org$frostlang$frostc$IR* $tmp1875 = *$tmp1874;
frost$collections$Array** $tmp1876 = &$tmp1875->locals;
frost$collections$Array* $tmp1877 = *$tmp1876;
ITable* $tmp1878 = ((frost$collections$CollectionView*) $tmp1877)->$class->itable;
while ($tmp1878->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1878 = $tmp1878->next;
}
$fn1880 $tmp1879 = $tmp1878->methods[0];
frost$core$Int $tmp1881 = $tmp1879(((frost$collections$CollectionView*) $tmp1877));
frost$core$Bit $tmp1882 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1883 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1873, $tmp1881, $tmp1882);
frost$core$Int $tmp1884 = $tmp1883.min;
*(&local0) = $tmp1884;
frost$core$Int $tmp1885 = $tmp1883.max;
frost$core$Bit $tmp1886 = $tmp1883.inclusive;
bool $tmp1887 = $tmp1886.value;
frost$core$Int $tmp1888 = (frost$core$Int) {1u};
if ($tmp1887) goto block6; else goto block7;
block6:;
int64_t $tmp1889 = $tmp1884.value;
int64_t $tmp1890 = $tmp1885.value;
bool $tmp1891 = $tmp1889 <= $tmp1890;
frost$core$Bit $tmp1892 = (frost$core$Bit) {$tmp1891};
bool $tmp1893 = $tmp1892.value;
if ($tmp1893) goto block3; else goto block4;
block7:;
int64_t $tmp1894 = $tmp1884.value;
int64_t $tmp1895 = $tmp1885.value;
bool $tmp1896 = $tmp1894 < $tmp1895;
frost$core$Bit $tmp1897 = (frost$core$Bit) {$tmp1896};
bool $tmp1898 = $tmp1897.value;
if ($tmp1898) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:448
frost$core$Int $tmp1899 = *(&local0);
frost$core$Int$wrapper* $tmp1900;
$tmp1900 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1900->value = $tmp1899;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:448:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn1902 $tmp1901 = ($fn1902) ((frost$core$Object*) $tmp1900)->$class->vtable[0];
frost$core$String* $tmp1903 = $tmp1901(((frost$core$Object*) $tmp1900));
frost$core$String* $tmp1904 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1905, $tmp1903);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
frost$core$String* $tmp1906 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1904, &$s1907);
org$frostlang$frostc$IR** $tmp1908 = &param0->ir;
org$frostlang$frostc$IR* $tmp1909 = *$tmp1908;
frost$collections$Array** $tmp1910 = &$tmp1909->locals;
frost$collections$Array* $tmp1911 = *$tmp1910;
frost$core$Int $tmp1912 = *(&local0);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:448:54
frost$core$Int $tmp1913 = (frost$core$Int) {0u};
int64_t $tmp1914 = $tmp1912.value;
int64_t $tmp1915 = $tmp1913.value;
bool $tmp1916 = $tmp1914 >= $tmp1915;
frost$core$Bit $tmp1917 = (frost$core$Bit) {$tmp1916};
bool $tmp1918 = $tmp1917.value;
if ($tmp1918) goto block12; else goto block11;
block12:;
ITable* $tmp1919 = ((frost$collections$CollectionView*) $tmp1911)->$class->itable;
while ($tmp1919->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1919 = $tmp1919->next;
}
$fn1921 $tmp1920 = $tmp1919->methods[0];
frost$core$Int $tmp1922 = $tmp1920(((frost$collections$CollectionView*) $tmp1911));
int64_t $tmp1923 = $tmp1912.value;
int64_t $tmp1924 = $tmp1922.value;
bool $tmp1925 = $tmp1923 < $tmp1924;
frost$core$Bit $tmp1926 = (frost$core$Bit) {$tmp1925};
bool $tmp1927 = $tmp1926.value;
if ($tmp1927) goto block10; else goto block11;
block11:;
frost$core$Int $tmp1928 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1929, $tmp1928, &$s1930);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1931 = &$tmp1911->data;
frost$core$Object** $tmp1932 = *$tmp1931;
frost$core$Int64 $tmp1933 = frost$core$Int64$init$frost$core$Int($tmp1912);
int64_t $tmp1934 = $tmp1933.value;
frost$core$Object* $tmp1935 = $tmp1932[$tmp1934];
frost$core$Frost$ref$frost$core$Object$Q($tmp1935);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:448:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn1937 $tmp1936 = ($fn1937) ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1935))->$class->vtable[0];
frost$core$String* $tmp1938 = $tmp1936(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1935)));
frost$core$String* $tmp1939 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1906, $tmp1938);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
frost$core$String* $tmp1940 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1939, &$s1941);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Analyzer.frost:448:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1940);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1942);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
frost$core$Frost$unref$frost$core$Object$Q($tmp1935);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
frost$core$Int $tmp1943 = *(&local0);
int64_t $tmp1944 = $tmp1885.value;
int64_t $tmp1945 = $tmp1943.value;
int64_t $tmp1946 = $tmp1944 - $tmp1945;
frost$core$Int $tmp1947 = (frost$core$Int) {$tmp1946};
if ($tmp1887) goto block17; else goto block18;
block17:;
int64_t $tmp1948 = $tmp1947.value;
int64_t $tmp1949 = $tmp1888.value;
bool $tmp1950 = $tmp1948 >= $tmp1949;
frost$core$Bit $tmp1951 = (frost$core$Bit) {$tmp1950};
bool $tmp1952 = $tmp1951.value;
if ($tmp1952) goto block16; else goto block4;
block18:;
int64_t $tmp1953 = $tmp1947.value;
int64_t $tmp1954 = $tmp1888.value;
bool $tmp1955 = $tmp1953 > $tmp1954;
frost$core$Bit $tmp1956 = (frost$core$Bit) {$tmp1955};
bool $tmp1957 = $tmp1956.value;
if ($tmp1957) goto block16; else goto block4;
block16:;
int64_t $tmp1958 = $tmp1943.value;
int64_t $tmp1959 = $tmp1888.value;
int64_t $tmp1960 = $tmp1958 + $tmp1959;
frost$core$Int $tmp1961 = (frost$core$Int) {$tmp1960};
*(&local0) = $tmp1961;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:450
org$frostlang$frostc$IR** $tmp1962 = &param0->ir;
org$frostlang$frostc$IR* $tmp1963 = *$tmp1962;
frost$collections$Array** $tmp1964 = &$tmp1963->blocks;
frost$collections$Array* $tmp1965 = *$tmp1964;
ITable* $tmp1966 = ((frost$collections$Iterable*) $tmp1965)->$class->itable;
while ($tmp1966->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1966 = $tmp1966->next;
}
$fn1968 $tmp1967 = $tmp1966->methods[0];
frost$collections$Iterator* $tmp1969 = $tmp1967(((frost$collections$Iterable*) $tmp1965));
goto block19;
block19:;
ITable* $tmp1970 = $tmp1969->$class->itable;
while ($tmp1970->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1970 = $tmp1970->next;
}
$fn1972 $tmp1971 = $tmp1970->methods[0];
frost$core$Bit $tmp1973 = $tmp1971($tmp1969);
bool $tmp1974 = $tmp1973.value;
if ($tmp1974) goto block21; else goto block20;
block20:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp1975 = $tmp1969->$class->itable;
while ($tmp1975->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1975 = $tmp1975->next;
}
$fn1977 $tmp1976 = $tmp1975->methods[1];
frost$core$Object* $tmp1978 = $tmp1976($tmp1969);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp1978)));
org$frostlang$frostc$IR$Block* $tmp1979 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp1978);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:451
org$frostlang$frostc$IR$Block* $tmp1980 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp1981 = &$tmp1980->id;
org$frostlang$frostc$IR$Block$ID $tmp1982 = *$tmp1981;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1983;
$tmp1983 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1983->value = $tmp1982;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:451:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn1985 $tmp1984 = ($fn1985) ((frost$core$Object*) $tmp1983)->$class->vtable[0];
frost$core$String* $tmp1986 = $tmp1984(((frost$core$Object*) $tmp1983));
frost$core$String* $tmp1987 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1988, $tmp1986);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
frost$core$String* $tmp1989 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1987, &$s1990);
frost$io$Console$print$frost$core$String($tmp1989);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:452
frost$collections$HashMap** $tmp1991 = &param0->entryStates;
frost$collections$HashMap* $tmp1992 = *$tmp1991;
org$frostlang$frostc$IR$Block* $tmp1993 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp1994 = &$tmp1993->id;
org$frostlang$frostc$IR$Block$ID $tmp1995 = *$tmp1994;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1996;
$tmp1996 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1996->value = $tmp1995;
frost$core$Object* $tmp1997 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1992, ((frost$collections$Key*) $tmp1996));
frost$core$Bit $tmp1998 = (frost$core$Bit) {((org$frostlang$frostc$pass$Analyzer$State*) $tmp1997) != NULL};
bool $tmp1999 = $tmp1998.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1997);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1996)));
if ($tmp1999) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:453
frost$collections$HashMap** $tmp2000 = &param0->entryStates;
frost$collections$HashMap* $tmp2001 = *$tmp2000;
org$frostlang$frostc$IR$Block* $tmp2002 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp2003 = &$tmp2002->id;
org$frostlang$frostc$IR$Block$ID $tmp2004 = *$tmp2003;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2005;
$tmp2005 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2005->value = $tmp2004;
frost$core$Object* $tmp2006 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2001, ((frost$collections$Key*) $tmp2005));
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:453:35
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn2008 $tmp2007 = ($fn2008) ((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp2006))->$class->vtable[0];
frost$core$String* $tmp2009 = $tmp2007(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp2006)));
frost$core$String* $tmp2010 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2011, $tmp2009);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
frost$io$Console$print$frost$core$String($tmp2010);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
frost$core$Frost$unref$frost$core$Object$Q($tmp2006);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2005)));
goto block24;
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:455
// begin inline call to method frost.io.Console.printLine() from Analyzer.frost:455:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s2012);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:456
frost$core$Int $tmp2013 = (frost$core$Int) {0u};
org$frostlang$frostc$IR$Block* $tmp2014 = *(&local1);
frost$collections$Array** $tmp2015 = &$tmp2014->statements;
frost$collections$Array* $tmp2016 = *$tmp2015;
ITable* $tmp2017 = ((frost$collections$CollectionView*) $tmp2016)->$class->itable;
while ($tmp2017->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2017 = $tmp2017->next;
}
$fn2019 $tmp2018 = $tmp2017->methods[0];
frost$core$Int $tmp2020 = $tmp2018(((frost$collections$CollectionView*) $tmp2016));
frost$core$Bit $tmp2021 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2022 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2013, $tmp2020, $tmp2021);
frost$core$Int $tmp2023 = $tmp2022.min;
*(&local2) = $tmp2023;
frost$core$Int $tmp2024 = $tmp2022.max;
frost$core$Bit $tmp2025 = $tmp2022.inclusive;
bool $tmp2026 = $tmp2025.value;
frost$core$Int $tmp2027 = (frost$core$Int) {1u};
if ($tmp2026) goto block30; else goto block31;
block30:;
int64_t $tmp2028 = $tmp2023.value;
int64_t $tmp2029 = $tmp2024.value;
bool $tmp2030 = $tmp2028 <= $tmp2029;
frost$core$Bit $tmp2031 = (frost$core$Bit) {$tmp2030};
bool $tmp2032 = $tmp2031.value;
if ($tmp2032) goto block27; else goto block28;
block31:;
int64_t $tmp2033 = $tmp2023.value;
int64_t $tmp2034 = $tmp2024.value;
bool $tmp2035 = $tmp2033 < $tmp2034;
frost$core$Bit $tmp2036 = (frost$core$Bit) {$tmp2035};
bool $tmp2037 = $tmp2036.value;
if ($tmp2037) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:457
org$frostlang$frostc$IR$Block* $tmp2038 = *(&local1);
frost$collections$Array** $tmp2039 = &$tmp2038->ids;
frost$collections$Array* $tmp2040 = *$tmp2039;
frost$core$Int $tmp2041 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:457:36
frost$core$Int $tmp2042 = (frost$core$Int) {0u};
int64_t $tmp2043 = $tmp2041.value;
int64_t $tmp2044 = $tmp2042.value;
bool $tmp2045 = $tmp2043 >= $tmp2044;
frost$core$Bit $tmp2046 = (frost$core$Bit) {$tmp2045};
bool $tmp2047 = $tmp2046.value;
if ($tmp2047) goto block35; else goto block34;
block35:;
ITable* $tmp2048 = ((frost$collections$CollectionView*) $tmp2040)->$class->itable;
while ($tmp2048->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2048 = $tmp2048->next;
}
$fn2050 $tmp2049 = $tmp2048->methods[0];
frost$core$Int $tmp2051 = $tmp2049(((frost$collections$CollectionView*) $tmp2040));
int64_t $tmp2052 = $tmp2041.value;
int64_t $tmp2053 = $tmp2051.value;
bool $tmp2054 = $tmp2052 < $tmp2053;
frost$core$Bit $tmp2055 = (frost$core$Bit) {$tmp2054};
bool $tmp2056 = $tmp2055.value;
if ($tmp2056) goto block33; else goto block34;
block34:;
frost$core$Int $tmp2057 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2058, $tmp2057, &$s2059);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2060 = &$tmp2040->data;
frost$core$Object** $tmp2061 = *$tmp2060;
frost$core$Int64 $tmp2062 = frost$core$Int64$init$frost$core$Int($tmp2041);
int64_t $tmp2063 = $tmp2062.value;
frost$core$Object* $tmp2064 = $tmp2061[$tmp2063];
frost$core$Frost$ref$frost$core$Object$Q($tmp2064);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2065;
$tmp2065 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2065->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2064)->value;
// begin inline call to method frost.io.Console.print(o:frost.core.Object) from Analyzer.frost:457:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:54
$fn2067 $tmp2066 = ($fn2067) ((frost$core$Object*) $tmp2065)->$class->vtable[0];
frost$core$String* $tmp2068 = $tmp2066(((frost$core$Object*) $tmp2065));
frost$io$Console$print$frost$core$String($tmp2068);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
frost$core$Frost$unref$frost$core$Object$Q($tmp2064);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:458
frost$io$Console$print$frost$core$String(&$s2069);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:459
org$frostlang$frostc$IR$Block* $tmp2070 = *(&local1);
frost$collections$Array** $tmp2071 = &$tmp2070->statements;
frost$collections$Array* $tmp2072 = *$tmp2071;
frost$core$Int $tmp2073 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:459:47
frost$core$Int $tmp2074 = (frost$core$Int) {0u};
int64_t $tmp2075 = $tmp2073.value;
int64_t $tmp2076 = $tmp2074.value;
bool $tmp2077 = $tmp2075 >= $tmp2076;
frost$core$Bit $tmp2078 = (frost$core$Bit) {$tmp2077};
bool $tmp2079 = $tmp2078.value;
if ($tmp2079) goto block40; else goto block39;
block40:;
ITable* $tmp2080 = ((frost$collections$CollectionView*) $tmp2072)->$class->itable;
while ($tmp2080->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2080 = $tmp2080->next;
}
$fn2082 $tmp2081 = $tmp2080->methods[0];
frost$core$Int $tmp2083 = $tmp2081(((frost$collections$CollectionView*) $tmp2072));
int64_t $tmp2084 = $tmp2073.value;
int64_t $tmp2085 = $tmp2083.value;
bool $tmp2086 = $tmp2084 < $tmp2085;
frost$core$Bit $tmp2087 = (frost$core$Bit) {$tmp2086};
bool $tmp2088 = $tmp2087.value;
if ($tmp2088) goto block38; else goto block39;
block39:;
frost$core$Int $tmp2089 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2090, $tmp2089, &$s2091);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2092 = &$tmp2072->data;
frost$core$Object** $tmp2093 = *$tmp2092;
frost$core$Int64 $tmp2094 = frost$core$Int64$init$frost$core$Int($tmp2073);
int64_t $tmp2095 = $tmp2094.value;
frost$core$Object* $tmp2096 = $tmp2093[$tmp2095];
frost$core$Frost$ref$frost$core$Object$Q($tmp2096);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from Analyzer.frost:459:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:62
$fn2098 $tmp2097 = ($fn2098) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2096))->$class->vtable[0];
frost$core$String* $tmp2099 = $tmp2097(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2096)));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp2099);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
frost$core$Frost$unref$frost$core$Object$Q($tmp2096);
frost$core$Int $tmp2100 = *(&local2);
int64_t $tmp2101 = $tmp2024.value;
int64_t $tmp2102 = $tmp2100.value;
int64_t $tmp2103 = $tmp2101 - $tmp2102;
frost$core$Int $tmp2104 = (frost$core$Int) {$tmp2103};
if ($tmp2026) goto block44; else goto block45;
block44:;
int64_t $tmp2105 = $tmp2104.value;
int64_t $tmp2106 = $tmp2027.value;
bool $tmp2107 = $tmp2105 >= $tmp2106;
frost$core$Bit $tmp2108 = (frost$core$Bit) {$tmp2107};
bool $tmp2109 = $tmp2108.value;
if ($tmp2109) goto block43; else goto block28;
block45:;
int64_t $tmp2110 = $tmp2104.value;
int64_t $tmp2111 = $tmp2027.value;
bool $tmp2112 = $tmp2110 > $tmp2111;
frost$core$Bit $tmp2113 = (frost$core$Bit) {$tmp2112};
bool $tmp2114 = $tmp2113.value;
if ($tmp2114) goto block43; else goto block28;
block43:;
int64_t $tmp2115 = $tmp2100.value;
int64_t $tmp2116 = $tmp2027.value;
int64_t $tmp2117 = $tmp2115 + $tmp2116;
frost$core$Int $tmp2118 = (frost$core$Int) {$tmp2117};
*(&local2) = $tmp2118;
goto block27;
block28:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1978);
org$frostlang$frostc$IR$Block* $tmp2119 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1969));
return;

}
void org$frostlang$frostc$pass$Analyzer$analyze(org$frostlang$frostc$pass$Analyzer* param0) {

org$frostlang$frostc$pass$Analyzer$DataFlowValue* local0 = NULL;
org$frostlang$frostc$pass$Analyzer$State* local1 = NULL;
frost$core$Int local2;
org$frostlang$frostc$IR$Block* local3 = NULL;
frost$core$Int local4;
org$frostlang$frostc$IR$Block$ID local5;
org$frostlang$frostc$IR$Block* local6 = NULL;
org$frostlang$frostc$MethodDecl$Kind local7;
org$frostlang$frostc$MethodDecl$Kind local8;
org$frostlang$frostc$pass$Analyzer$BlockExit local9;
org$frostlang$frostc$pass$Analyzer$BlockExit local10;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:465
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:466
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$State));
org$frostlang$frostc$pass$Analyzer$State* $tmp2126 = (org$frostlang$frostc$pass$Analyzer$State*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$State$class);
org$frostlang$frostc$pass$Analyzer$State$init($tmp2126);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
org$frostlang$frostc$pass$Analyzer$State* $tmp2127 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
*(&local1) = $tmp2126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:467
frost$core$Int $tmp2128 = (frost$core$Int) {0u};
org$frostlang$frostc$IR** $tmp2129 = &param0->ir;
org$frostlang$frostc$IR* $tmp2130 = *$tmp2129;
frost$collections$Array** $tmp2131 = &$tmp2130->locals;
frost$collections$Array* $tmp2132 = *$tmp2131;
ITable* $tmp2133 = ((frost$collections$CollectionView*) $tmp2132)->$class->itable;
while ($tmp2133->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2133 = $tmp2133->next;
}
$fn2135 $tmp2134 = $tmp2133->methods[0];
frost$core$Int $tmp2136 = $tmp2134(((frost$collections$CollectionView*) $tmp2132));
frost$core$Bit $tmp2137 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2138 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2128, $tmp2136, $tmp2137);
frost$core$Int $tmp2139 = $tmp2138.min;
*(&local2) = $tmp2139;
frost$core$Int $tmp2140 = $tmp2138.max;
frost$core$Bit $tmp2141 = $tmp2138.inclusive;
bool $tmp2142 = $tmp2141.value;
frost$core$Int $tmp2143 = (frost$core$Int) {1u};
if ($tmp2142) goto block4; else goto block5;
block4:;
int64_t $tmp2144 = $tmp2139.value;
int64_t $tmp2145 = $tmp2140.value;
bool $tmp2146 = $tmp2144 <= $tmp2145;
frost$core$Bit $tmp2147 = (frost$core$Bit) {$tmp2146};
bool $tmp2148 = $tmp2147.value;
if ($tmp2148) goto block1; else goto block2;
block5:;
int64_t $tmp2149 = $tmp2139.value;
int64_t $tmp2150 = $tmp2140.value;
bool $tmp2151 = $tmp2149 < $tmp2150;
frost$core$Bit $tmp2152 = (frost$core$Bit) {$tmp2151};
bool $tmp2153 = $tmp2152.value;
if ($tmp2153) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:468
org$frostlang$frostc$pass$Analyzer$State* $tmp2154 = *(&local1);
frost$collections$Array** $tmp2155 = &$tmp2154->locals;
frost$collections$Array* $tmp2156 = *$tmp2155;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2157 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp2156, ((frost$core$Object*) $tmp2157));
frost$core$Int $tmp2158 = *(&local2);
int64_t $tmp2159 = $tmp2140.value;
int64_t $tmp2160 = $tmp2158.value;
int64_t $tmp2161 = $tmp2159 - $tmp2160;
frost$core$Int $tmp2162 = (frost$core$Int) {$tmp2161};
if ($tmp2142) goto block7; else goto block8;
block7:;
int64_t $tmp2163 = $tmp2162.value;
int64_t $tmp2164 = $tmp2143.value;
bool $tmp2165 = $tmp2163 >= $tmp2164;
frost$core$Bit $tmp2166 = (frost$core$Bit) {$tmp2165};
bool $tmp2167 = $tmp2166.value;
if ($tmp2167) goto block6; else goto block2;
block8:;
int64_t $tmp2168 = $tmp2162.value;
int64_t $tmp2169 = $tmp2143.value;
bool $tmp2170 = $tmp2168 > $tmp2169;
frost$core$Bit $tmp2171 = (frost$core$Bit) {$tmp2170};
bool $tmp2172 = $tmp2171.value;
if ($tmp2172) goto block6; else goto block2;
block6:;
int64_t $tmp2173 = $tmp2158.value;
int64_t $tmp2174 = $tmp2143.value;
int64_t $tmp2175 = $tmp2173 + $tmp2174;
frost$core$Int $tmp2176 = (frost$core$Int) {$tmp2175};
*(&local2) = $tmp2176;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:470
frost$collections$HashMap** $tmp2177 = &param0->entryStates;
frost$collections$HashMap* $tmp2178 = *$tmp2177;
org$frostlang$frostc$IR** $tmp2179 = &param0->ir;
org$frostlang$frostc$IR* $tmp2180 = *$tmp2179;
frost$collections$Array** $tmp2181 = &$tmp2180->blocks;
frost$collections$Array* $tmp2182 = *$tmp2181;
frost$core$Int $tmp2183 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:470:30
frost$core$Int $tmp2184 = (frost$core$Int) {0u};
int64_t $tmp2185 = $tmp2183.value;
int64_t $tmp2186 = $tmp2184.value;
bool $tmp2187 = $tmp2185 >= $tmp2186;
frost$core$Bit $tmp2188 = (frost$core$Bit) {$tmp2187};
bool $tmp2189 = $tmp2188.value;
if ($tmp2189) goto block12; else goto block11;
block12:;
ITable* $tmp2190 = ((frost$collections$CollectionView*) $tmp2182)->$class->itable;
while ($tmp2190->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2190 = $tmp2190->next;
}
$fn2192 $tmp2191 = $tmp2190->methods[0];
frost$core$Int $tmp2193 = $tmp2191(((frost$collections$CollectionView*) $tmp2182));
int64_t $tmp2194 = $tmp2183.value;
int64_t $tmp2195 = $tmp2193.value;
bool $tmp2196 = $tmp2194 < $tmp2195;
frost$core$Bit $tmp2197 = (frost$core$Bit) {$tmp2196};
bool $tmp2198 = $tmp2197.value;
if ($tmp2198) goto block10; else goto block11;
block11:;
frost$core$Int $tmp2199 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2200, $tmp2199, &$s2201);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2202 = &$tmp2182->data;
frost$core$Object** $tmp2203 = *$tmp2202;
frost$core$Int64 $tmp2204 = frost$core$Int64$init$frost$core$Int($tmp2183);
int64_t $tmp2205 = $tmp2204.value;
frost$core$Object* $tmp2206 = $tmp2203[$tmp2205];
frost$core$Frost$ref$frost$core$Object$Q($tmp2206);
org$frostlang$frostc$IR$Block$ID* $tmp2207 = &((org$frostlang$frostc$IR$Block*) $tmp2206)->id;
org$frostlang$frostc$IR$Block$ID $tmp2208 = *$tmp2207;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2209;
$tmp2209 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2209->value = $tmp2208;
org$frostlang$frostc$pass$Analyzer$State* $tmp2210 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2178, ((frost$collections$Key*) $tmp2209), ((frost$core$Object*) $tmp2210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2209)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2206);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:471
org$frostlang$frostc$IR** $tmp2211 = &param0->ir;
org$frostlang$frostc$IR* $tmp2212 = *$tmp2211;
frost$collections$Array** $tmp2213 = &$tmp2212->blocks;
frost$collections$Array* $tmp2214 = *$tmp2213;
ITable* $tmp2215 = ((frost$collections$Iterable*) $tmp2214)->$class->itable;
while ($tmp2215->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2215 = $tmp2215->next;
}
$fn2217 $tmp2216 = $tmp2215->methods[0];
frost$collections$Iterator* $tmp2218 = $tmp2216(((frost$collections$Iterable*) $tmp2214));
goto block13;
block13:;
ITable* $tmp2219 = $tmp2218->$class->itable;
while ($tmp2219->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2219 = $tmp2219->next;
}
$fn2221 $tmp2220 = $tmp2219->methods[0];
frost$core$Bit $tmp2222 = $tmp2220($tmp2218);
bool $tmp2223 = $tmp2222.value;
if ($tmp2223) goto block15; else goto block14;
block14:;
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2224 = $tmp2218->$class->itable;
while ($tmp2224->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2224 = $tmp2224->next;
}
$fn2226 $tmp2225 = $tmp2224->methods[1];
frost$core$Object* $tmp2227 = $tmp2225($tmp2218);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2227)));
org$frostlang$frostc$IR$Block* $tmp2228 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
*(&local3) = ((org$frostlang$frostc$IR$Block*) $tmp2227);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:472
frost$collections$HashMap** $tmp2229 = &param0->blocks;
frost$collections$HashMap* $tmp2230 = *$tmp2229;
org$frostlang$frostc$IR$Block* $tmp2231 = *(&local3);
org$frostlang$frostc$IR$Block$ID* $tmp2232 = &$tmp2231->id;
org$frostlang$frostc$IR$Block$ID $tmp2233 = *$tmp2232;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2234;
$tmp2234 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2234->value = $tmp2233;
org$frostlang$frostc$IR$Block* $tmp2235 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2230, ((frost$collections$Key*) $tmp2234), ((frost$core$Object*) $tmp2235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2234)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:473
frost$core$Int $tmp2236 = (frost$core$Int) {0u};
org$frostlang$frostc$IR$Block* $tmp2237 = *(&local3);
frost$collections$Array** $tmp2238 = &$tmp2237->statements;
frost$collections$Array* $tmp2239 = *$tmp2238;
ITable* $tmp2240 = ((frost$collections$CollectionView*) $tmp2239)->$class->itable;
while ($tmp2240->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2240 = $tmp2240->next;
}
$fn2242 $tmp2241 = $tmp2240->methods[0];
frost$core$Int $tmp2243 = $tmp2241(((frost$collections$CollectionView*) $tmp2239));
frost$core$Bit $tmp2244 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2245 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2236, $tmp2243, $tmp2244);
frost$core$Int $tmp2246 = $tmp2245.min;
*(&local4) = $tmp2246;
frost$core$Int $tmp2247 = $tmp2245.max;
frost$core$Bit $tmp2248 = $tmp2245.inclusive;
bool $tmp2249 = $tmp2248.value;
frost$core$Int $tmp2250 = (frost$core$Int) {1u};
if ($tmp2249) goto block19; else goto block20;
block19:;
int64_t $tmp2251 = $tmp2246.value;
int64_t $tmp2252 = $tmp2247.value;
bool $tmp2253 = $tmp2251 <= $tmp2252;
frost$core$Bit $tmp2254 = (frost$core$Bit) {$tmp2253};
bool $tmp2255 = $tmp2254.value;
if ($tmp2255) goto block16; else goto block17;
block20:;
int64_t $tmp2256 = $tmp2246.value;
int64_t $tmp2257 = $tmp2247.value;
bool $tmp2258 = $tmp2256 < $tmp2257;
frost$core$Bit $tmp2259 = (frost$core$Bit) {$tmp2258};
bool $tmp2260 = $tmp2259.value;
if ($tmp2260) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:474
frost$collections$HashMap** $tmp2261 = &param0->statements;
frost$collections$HashMap* $tmp2262 = *$tmp2261;
org$frostlang$frostc$IR$Block* $tmp2263 = *(&local3);
frost$collections$Array** $tmp2264 = &$tmp2263->ids;
frost$collections$Array* $tmp2265 = *$tmp2264;
frost$core$Int $tmp2266 = *(&local4);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:474:33
frost$core$Int $tmp2267 = (frost$core$Int) {0u};
int64_t $tmp2268 = $tmp2266.value;
int64_t $tmp2269 = $tmp2267.value;
bool $tmp2270 = $tmp2268 >= $tmp2269;
frost$core$Bit $tmp2271 = (frost$core$Bit) {$tmp2270};
bool $tmp2272 = $tmp2271.value;
if ($tmp2272) goto block24; else goto block23;
block24:;
ITable* $tmp2273 = ((frost$collections$CollectionView*) $tmp2265)->$class->itable;
while ($tmp2273->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2273 = $tmp2273->next;
}
$fn2275 $tmp2274 = $tmp2273->methods[0];
frost$core$Int $tmp2276 = $tmp2274(((frost$collections$CollectionView*) $tmp2265));
int64_t $tmp2277 = $tmp2266.value;
int64_t $tmp2278 = $tmp2276.value;
bool $tmp2279 = $tmp2277 < $tmp2278;
frost$core$Bit $tmp2280 = (frost$core$Bit) {$tmp2279};
bool $tmp2281 = $tmp2280.value;
if ($tmp2281) goto block22; else goto block23;
block23:;
frost$core$Int $tmp2282 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2283, $tmp2282, &$s2284);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2285 = &$tmp2265->data;
frost$core$Object** $tmp2286 = *$tmp2285;
frost$core$Int64 $tmp2287 = frost$core$Int64$init$frost$core$Int($tmp2266);
int64_t $tmp2288 = $tmp2287.value;
frost$core$Object* $tmp2289 = $tmp2286[$tmp2288];
frost$core$Frost$ref$frost$core$Object$Q($tmp2289);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2290;
$tmp2290 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2290->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2289)->value;
org$frostlang$frostc$IR$Block* $tmp2291 = *(&local3);
frost$collections$Array** $tmp2292 = &$tmp2291->statements;
frost$collections$Array* $tmp2293 = *$tmp2292;
frost$core$Int $tmp2294 = *(&local4);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:474:53
frost$core$Int $tmp2295 = (frost$core$Int) {0u};
int64_t $tmp2296 = $tmp2294.value;
int64_t $tmp2297 = $tmp2295.value;
bool $tmp2298 = $tmp2296 >= $tmp2297;
frost$core$Bit $tmp2299 = (frost$core$Bit) {$tmp2298};
bool $tmp2300 = $tmp2299.value;
if ($tmp2300) goto block28; else goto block27;
block28:;
ITable* $tmp2301 = ((frost$collections$CollectionView*) $tmp2293)->$class->itable;
while ($tmp2301->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2301 = $tmp2301->next;
}
$fn2303 $tmp2302 = $tmp2301->methods[0];
frost$core$Int $tmp2304 = $tmp2302(((frost$collections$CollectionView*) $tmp2293));
int64_t $tmp2305 = $tmp2294.value;
int64_t $tmp2306 = $tmp2304.value;
bool $tmp2307 = $tmp2305 < $tmp2306;
frost$core$Bit $tmp2308 = (frost$core$Bit) {$tmp2307};
bool $tmp2309 = $tmp2308.value;
if ($tmp2309) goto block26; else goto block27;
block27:;
frost$core$Int $tmp2310 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2311, $tmp2310, &$s2312);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2313 = &$tmp2293->data;
frost$core$Object** $tmp2314 = *$tmp2313;
frost$core$Int64 $tmp2315 = frost$core$Int64$init$frost$core$Int($tmp2294);
int64_t $tmp2316 = $tmp2315.value;
frost$core$Object* $tmp2317 = $tmp2314[$tmp2316];
frost$core$Frost$ref$frost$core$Object$Q($tmp2317);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2262, ((frost$collections$Key*) $tmp2290), ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2317)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2317);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2290)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2289);
frost$core$Int $tmp2318 = *(&local4);
int64_t $tmp2319 = $tmp2247.value;
int64_t $tmp2320 = $tmp2318.value;
int64_t $tmp2321 = $tmp2319 - $tmp2320;
frost$core$Int $tmp2322 = (frost$core$Int) {$tmp2321};
if ($tmp2249) goto block30; else goto block31;
block30:;
int64_t $tmp2323 = $tmp2322.value;
int64_t $tmp2324 = $tmp2250.value;
bool $tmp2325 = $tmp2323 >= $tmp2324;
frost$core$Bit $tmp2326 = (frost$core$Bit) {$tmp2325};
bool $tmp2327 = $tmp2326.value;
if ($tmp2327) goto block29; else goto block17;
block31:;
int64_t $tmp2328 = $tmp2322.value;
int64_t $tmp2329 = $tmp2250.value;
bool $tmp2330 = $tmp2328 > $tmp2329;
frost$core$Bit $tmp2331 = (frost$core$Bit) {$tmp2330};
bool $tmp2332 = $tmp2331.value;
if ($tmp2332) goto block29; else goto block17;
block29:;
int64_t $tmp2333 = $tmp2318.value;
int64_t $tmp2334 = $tmp2250.value;
int64_t $tmp2335 = $tmp2333 + $tmp2334;
frost$core$Int $tmp2336 = (frost$core$Int) {$tmp2335};
*(&local4) = $tmp2336;
goto block16;
block17:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2227);
org$frostlang$frostc$IR$Block* $tmp2337 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2337));
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:477
frost$collections$HashSet** $tmp2338 = &param0->worklist;
frost$collections$HashSet* $tmp2339 = *$tmp2338;
org$frostlang$frostc$IR** $tmp2340 = &param0->ir;
org$frostlang$frostc$IR* $tmp2341 = *$tmp2340;
frost$collections$Array** $tmp2342 = &$tmp2341->blocks;
frost$collections$Array* $tmp2343 = *$tmp2342;
frost$core$Int $tmp2344 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:477:31
frost$core$Int $tmp2345 = (frost$core$Int) {0u};
int64_t $tmp2346 = $tmp2344.value;
int64_t $tmp2347 = $tmp2345.value;
bool $tmp2348 = $tmp2346 >= $tmp2347;
frost$core$Bit $tmp2349 = (frost$core$Bit) {$tmp2348};
bool $tmp2350 = $tmp2349.value;
if ($tmp2350) goto block35; else goto block34;
block35:;
ITable* $tmp2351 = ((frost$collections$CollectionView*) $tmp2343)->$class->itable;
while ($tmp2351->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2351 = $tmp2351->next;
}
$fn2353 $tmp2352 = $tmp2351->methods[0];
frost$core$Int $tmp2354 = $tmp2352(((frost$collections$CollectionView*) $tmp2343));
int64_t $tmp2355 = $tmp2344.value;
int64_t $tmp2356 = $tmp2354.value;
bool $tmp2357 = $tmp2355 < $tmp2356;
frost$core$Bit $tmp2358 = (frost$core$Bit) {$tmp2357};
bool $tmp2359 = $tmp2358.value;
if ($tmp2359) goto block33; else goto block34;
block34:;
frost$core$Int $tmp2360 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2361, $tmp2360, &$s2362);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2363 = &$tmp2343->data;
frost$core$Object** $tmp2364 = *$tmp2363;
frost$core$Int64 $tmp2365 = frost$core$Int64$init$frost$core$Int($tmp2344);
int64_t $tmp2366 = $tmp2365.value;
frost$core$Object* $tmp2367 = $tmp2364[$tmp2366];
frost$core$Frost$ref$frost$core$Object$Q($tmp2367);
org$frostlang$frostc$IR$Block$ID* $tmp2368 = &((org$frostlang$frostc$IR$Block*) $tmp2367)->id;
org$frostlang$frostc$IR$Block$ID $tmp2369 = *$tmp2368;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2370;
$tmp2370 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2370->value = $tmp2369;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:477:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp2371 = &$tmp2339->contents;
frost$collections$HashMap* $tmp2372 = *$tmp2371;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2372, ((frost$collections$Key*) $tmp2370), ((frost$core$Object*) ((frost$collections$Key*) $tmp2370)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2370)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2367);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:478
goto block37;
block37:;
frost$collections$HashSet** $tmp2373 = &param0->worklist;
frost$collections$HashSet* $tmp2374 = *$tmp2373;
ITable* $tmp2375 = ((frost$collections$CollectionView*) $tmp2374)->$class->itable;
while ($tmp2375->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2375 = $tmp2375->next;
}
$fn2377 $tmp2376 = $tmp2375->methods[0];
frost$core$Int $tmp2378 = $tmp2376(((frost$collections$CollectionView*) $tmp2374));
frost$core$Int $tmp2379 = (frost$core$Int) {0u};
int64_t $tmp2380 = $tmp2378.value;
int64_t $tmp2381 = $tmp2379.value;
bool $tmp2382 = $tmp2380 > $tmp2381;
frost$core$Bit $tmp2383 = (frost$core$Bit) {$tmp2382};
bool $tmp2384 = $tmp2383.value;
if ($tmp2384) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:479
frost$collections$HashSet** $tmp2385 = &param0->worklist;
frost$collections$HashSet* $tmp2386 = *$tmp2385;
ITable* $tmp2387 = ((frost$collections$Iterable*) $tmp2386)->$class->itable;
while ($tmp2387->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2387 = $tmp2387->next;
}
$fn2389 $tmp2388 = $tmp2387->methods[0];
frost$collections$Iterator* $tmp2390 = $tmp2388(((frost$collections$Iterable*) $tmp2386));
ITable* $tmp2391 = $tmp2390->$class->itable;
while ($tmp2391->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2391 = $tmp2391->next;
}
$fn2393 $tmp2392 = $tmp2391->methods[1];
frost$core$Object* $tmp2394 = $tmp2392($tmp2390);
*(&local5) = ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp2394)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2394);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:480
frost$collections$HashSet** $tmp2395 = &param0->worklist;
frost$collections$HashSet* $tmp2396 = *$tmp2395;
org$frostlang$frostc$IR$Block$ID $tmp2397 = *(&local5);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2398;
$tmp2398 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2398->value = $tmp2397;
// begin inline call to method frost.collections.HashSet.remove(value:frost.collections.HashSet.T) from Analyzer.frost:480:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashSet.frost:30
frost$collections$HashMap** $tmp2399 = &$tmp2396->contents;
frost$collections$HashMap* $tmp2400 = *$tmp2399;
frost$collections$HashMap$remove$frost$collections$HashMap$K($tmp2400, ((frost$collections$Key*) $tmp2398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2398)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:481
org$frostlang$frostc$IR$Block$ID $tmp2401 = *(&local5);
$fn2403 $tmp2402 = ($fn2403) param0->$class->vtable[8];
$tmp2402(param0, $tmp2401);
goto block37;
block39:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:483
org$frostlang$frostc$IR** $tmp2404 = &param0->ir;
org$frostlang$frostc$IR* $tmp2405 = *$tmp2404;
frost$collections$Array** $tmp2406 = &$tmp2405->blocks;
frost$collections$Array* $tmp2407 = *$tmp2406;
ITable* $tmp2408 = ((frost$collections$Iterable*) $tmp2407)->$class->itable;
while ($tmp2408->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2408 = $tmp2408->next;
}
$fn2410 $tmp2409 = $tmp2408->methods[0];
frost$collections$Iterator* $tmp2411 = $tmp2409(((frost$collections$Iterable*) $tmp2407));
goto block41;
block41:;
ITable* $tmp2412 = $tmp2411->$class->itable;
while ($tmp2412->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2412 = $tmp2412->next;
}
$fn2414 $tmp2413 = $tmp2412->methods[0];
frost$core$Bit $tmp2415 = $tmp2413($tmp2411);
bool $tmp2416 = $tmp2415.value;
if ($tmp2416) goto block43; else goto block42;
block42:;
*(&local6) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2417 = $tmp2411->$class->itable;
while ($tmp2417->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2417 = $tmp2417->next;
}
$fn2419 $tmp2418 = $tmp2417->methods[1];
frost$core$Object* $tmp2420 = $tmp2418($tmp2411);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2420)));
org$frostlang$frostc$IR$Block* $tmp2421 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2421));
*(&local6) = ((org$frostlang$frostc$IR$Block*) $tmp2420);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:484
frost$collections$HashMap** $tmp2422 = &param0->entryStates;
frost$collections$HashMap* $tmp2423 = *$tmp2422;
org$frostlang$frostc$IR$Block* $tmp2424 = *(&local6);
org$frostlang$frostc$IR$Block$ID* $tmp2425 = &$tmp2424->id;
org$frostlang$frostc$IR$Block$ID $tmp2426 = *$tmp2425;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2427;
$tmp2427 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2427->value = $tmp2426;
frost$core$Object* $tmp2428 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2423, ((frost$collections$Key*) $tmp2427));
frost$core$Bit $tmp2429 = (frost$core$Bit) {((org$frostlang$frostc$pass$Analyzer$State*) $tmp2428) != NULL};
bool $tmp2430 = $tmp2429.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2428);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2427)));
if ($tmp2430) goto block44; else goto block46;
block44:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:485
org$frostlang$frostc$IR$Block* $tmp2431 = *(&local6);
frost$collections$Array** $tmp2432 = &$tmp2431->statements;
frost$collections$Array* $tmp2433 = *$tmp2432;
frost$core$Int $tmp2434 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:485:35
frost$core$Int $tmp2435 = (frost$core$Int) {0u};
int64_t $tmp2436 = $tmp2434.value;
int64_t $tmp2437 = $tmp2435.value;
bool $tmp2438 = $tmp2436 >= $tmp2437;
frost$core$Bit $tmp2439 = (frost$core$Bit) {$tmp2438};
bool $tmp2440 = $tmp2439.value;
if ($tmp2440) goto block50; else goto block49;
block50:;
ITable* $tmp2441 = ((frost$collections$CollectionView*) $tmp2433)->$class->itable;
while ($tmp2441->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2441 = $tmp2441->next;
}
$fn2443 $tmp2442 = $tmp2441->methods[0];
frost$core$Int $tmp2444 = $tmp2442(((frost$collections$CollectionView*) $tmp2433));
int64_t $tmp2445 = $tmp2434.value;
int64_t $tmp2446 = $tmp2444.value;
bool $tmp2447 = $tmp2445 < $tmp2446;
frost$core$Bit $tmp2448 = (frost$core$Bit) {$tmp2447};
bool $tmp2449 = $tmp2448.value;
if ($tmp2449) goto block48; else goto block49;
block49:;
frost$core$Int $tmp2450 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2451, $tmp2450, &$s2452);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2453 = &$tmp2433->data;
frost$core$Object** $tmp2454 = *$tmp2453;
frost$core$Int64 $tmp2455 = frost$core$Int64$init$frost$core$Int($tmp2434);
int64_t $tmp2456 = $tmp2455.value;
frost$core$Object* $tmp2457 = $tmp2454[$tmp2456];
frost$core$Frost$ref$frost$core$Object$Q($tmp2457);
frost$core$Int* $tmp2458 = &((org$frostlang$frostc$IR$Statement*) $tmp2457)->$rawValue;
frost$core$Int $tmp2459 = *$tmp2458;
frost$core$Int $tmp2460 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:486:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp2461 = $tmp2459.value;
int64_t $tmp2462 = $tmp2460.value;
bool $tmp2463 = $tmp2461 == $tmp2462;
frost$core$Bit $tmp2464 = (frost$core$Bit) {$tmp2463};
bool $tmp2465 = $tmp2464.value;
if ($tmp2465) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:487
org$frostlang$frostc$MethodDecl** $tmp2466 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2467 = *$tmp2466;
org$frostlang$frostc$MethodDecl$Kind* $tmp2468 = &$tmp2467->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2469 = *$tmp2468;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2470;
$tmp2470 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2470->value = $tmp2469;
frost$core$Int $tmp2471 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Analyzer.frost:487:59
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2472 = &(&local8)->$rawValue;
*$tmp2472 = $tmp2471;
org$frostlang$frostc$MethodDecl$Kind $tmp2473 = *(&local8);
*(&local7) = $tmp2473;
org$frostlang$frostc$MethodDecl$Kind $tmp2474 = *(&local7);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2475;
$tmp2475 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2475->value = $tmp2474;
ITable* $tmp2476 = ((frost$core$Equatable*) $tmp2470)->$class->itable;
while ($tmp2476->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2476 = $tmp2476->next;
}
$fn2478 $tmp2477 = $tmp2476->methods[1];
frost$core$Bit $tmp2479 = $tmp2477(((frost$core$Equatable*) $tmp2470), ((frost$core$Equatable*) $tmp2475));
bool $tmp2480 = $tmp2479.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2475)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2470)));
if ($tmp2480) goto block57; else goto block56;
block57:;
org$frostlang$frostc$MethodDecl** $tmp2481 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2482 = *$tmp2481;
org$frostlang$frostc$Type** $tmp2483 = &$tmp2482->returnType;
org$frostlang$frostc$Type* $tmp2484 = *$tmp2483;
org$frostlang$frostc$Compiler** $tmp2485 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2486 = *$tmp2485;
org$frostlang$frostc$Type** $tmp2487 = &$tmp2486->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2488 = *$tmp2487;
ITable* $tmp2489 = ((frost$core$Equatable*) $tmp2484)->$class->itable;
while ($tmp2489->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2489 = $tmp2489->next;
}
$fn2491 $tmp2490 = $tmp2489->methods[1];
frost$core$Bit $tmp2492 = $tmp2490(((frost$core$Equatable*) $tmp2484), ((frost$core$Equatable*) $tmp2488));
bool $tmp2493 = $tmp2492.value;
if ($tmp2493) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:489
org$frostlang$frostc$Compiler** $tmp2494 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2495 = *$tmp2494;
org$frostlang$frostc$MethodDecl** $tmp2496 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2497 = *$tmp2496;
org$frostlang$frostc$Position* $tmp2498 = &((org$frostlang$frostc$Symbol*) $tmp2497)->position;
org$frostlang$frostc$Position $tmp2499 = *$tmp2498;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp2495, $tmp2499, &$s2500);
goto block56;
block56:;
goto block51;
block53:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:493
org$frostlang$frostc$IR$Block* $tmp2501 = *(&local6);
org$frostlang$frostc$IR$Block$ID* $tmp2502 = &$tmp2501->id;
org$frostlang$frostc$IR$Block$ID $tmp2503 = *$tmp2502;
frost$core$Int $tmp2504 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:493:51
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:80
org$frostlang$frostc$IR$Block$ID* $tmp2505 = &(&local10)->id;
*$tmp2505 = $tmp2503;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
frost$core$Int* $tmp2506 = &(&local10)->exit;
*$tmp2506 = $tmp2504;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2507 = *(&local10);
*(&local9) = $tmp2507;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2508 = *(&local9);
frost$core$Bit $tmp2509 = (frost$core$Bit) {true};
$fn2511 $tmp2510 = ($fn2511) param0->$class->vtable[7];
org$frostlang$frostc$pass$Analyzer$State* $tmp2512 = $tmp2510(param0, $tmp2508, $tmp2509);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
goto block51;
block51:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2457);
goto block45;
block46:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:497
org$frostlang$frostc$IR$Block* $tmp2513 = *(&local6);
frost$core$Bit* $tmp2514 = &$tmp2513->containsExplicitCode;
frost$core$Bit $tmp2515 = *$tmp2514;
bool $tmp2516 = $tmp2515.value;
if ($tmp2516) goto block62; else goto block61;
block62:;
org$frostlang$frostc$IR$Block* $tmp2517 = *(&local6);
frost$core$Bit* $tmp2518 = &$tmp2517->forceReachable;
frost$core$Bit $tmp2519 = *$tmp2518;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:497:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp2520 = $tmp2519.value;
bool $tmp2521 = !$tmp2520;
frost$core$Bit $tmp2522 = (frost$core$Bit) {$tmp2521};
bool $tmp2523 = $tmp2522.value;
if ($tmp2523) goto block60; else goto block61;
block60:;
goto block61;
block61:;
goto block45;
block45:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2420);
org$frostlang$frostc$IR$Block* $tmp2524 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
*(&local6) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block41;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
org$frostlang$frostc$pass$Analyzer$State* $tmp2525 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2525));
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2526 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2526));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$makeUnreachable$org$frostlang$frostc$IR$Block(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Block* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:504
frost$collections$Array** $tmp2527 = &param1->statements;
frost$collections$Array* $tmp2528 = *$tmp2527;
frost$core$Int $tmp2529 = (frost$core$Int) {0u};
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2530 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2531 = (frost$core$Int) {28u};
frost$collections$Array** $tmp2532 = &param1->statements;
frost$collections$Array* $tmp2533 = *$tmp2532;
frost$core$Int $tmp2534 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:504:65
frost$core$Int $tmp2535 = (frost$core$Int) {0u};
int64_t $tmp2536 = $tmp2534.value;
int64_t $tmp2537 = $tmp2535.value;
bool $tmp2538 = $tmp2536 >= $tmp2537;
frost$core$Bit $tmp2539 = (frost$core$Bit) {$tmp2538};
bool $tmp2540 = $tmp2539.value;
if ($tmp2540) goto block4; else goto block3;
block4:;
ITable* $tmp2541 = ((frost$collections$CollectionView*) $tmp2533)->$class->itable;
while ($tmp2541->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2541 = $tmp2541->next;
}
$fn2543 $tmp2542 = $tmp2541->methods[0];
frost$core$Int $tmp2544 = $tmp2542(((frost$collections$CollectionView*) $tmp2533));
int64_t $tmp2545 = $tmp2534.value;
int64_t $tmp2546 = $tmp2544.value;
bool $tmp2547 = $tmp2545 < $tmp2546;
frost$core$Bit $tmp2548 = (frost$core$Bit) {$tmp2547};
bool $tmp2549 = $tmp2548.value;
if ($tmp2549) goto block2; else goto block3;
block3:;
frost$core$Int $tmp2550 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2551, $tmp2550, &$s2552);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2553 = &$tmp2533->data;
frost$core$Object** $tmp2554 = *$tmp2553;
frost$core$Int64 $tmp2555 = frost$core$Int64$init$frost$core$Int($tmp2534);
int64_t $tmp2556 = $tmp2555.value;
frost$core$Object* $tmp2557 = $tmp2554[$tmp2556];
frost$core$Frost$ref$frost$core$Object$Q($tmp2557);
$fn2559 $tmp2558 = ($fn2559) ((org$frostlang$frostc$IR$Statement*) $tmp2557)->$class->vtable[2];
org$frostlang$frostc$Position $tmp2560 = $tmp2558(((org$frostlang$frostc$IR$Statement*) $tmp2557));
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position($tmp2530, $tmp2531, $tmp2560);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:504:21
frost$core$Int $tmp2561 = (frost$core$Int) {0u};
int64_t $tmp2562 = $tmp2529.value;
int64_t $tmp2563 = $tmp2561.value;
bool $tmp2564 = $tmp2562 >= $tmp2563;
frost$core$Bit $tmp2565 = (frost$core$Bit) {$tmp2564};
bool $tmp2566 = $tmp2565.value;
if ($tmp2566) goto block8; else goto block7;
block8:;
ITable* $tmp2567 = ((frost$collections$CollectionView*) $tmp2528)->$class->itable;
while ($tmp2567->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2567 = $tmp2567->next;
}
$fn2569 $tmp2568 = $tmp2567->methods[0];
frost$core$Int $tmp2570 = $tmp2568(((frost$collections$CollectionView*) $tmp2528));
int64_t $tmp2571 = $tmp2529.value;
int64_t $tmp2572 = $tmp2570.value;
bool $tmp2573 = $tmp2571 < $tmp2572;
frost$core$Bit $tmp2574 = (frost$core$Bit) {$tmp2573};
bool $tmp2575 = $tmp2574.value;
if ($tmp2575) goto block6; else goto block7;
block7:;
frost$core$Int $tmp2576 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2577, $tmp2576, &$s2578);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp2579 = &$tmp2528->data;
frost$core$Object** $tmp2580 = *$tmp2579;
frost$core$Int64 $tmp2581 = frost$core$Int64$init$frost$core$Int($tmp2529);
int64_t $tmp2582 = $tmp2581.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
frost$core$Object* $tmp2583 = $tmp2580[$tmp2582];
frost$core$Frost$unref$frost$core$Object$Q($tmp2583);
$tmp2580[$tmp2582] = ((frost$core$Object*) $tmp2530);
frost$core$Frost$unref$frost$core$Object$Q($tmp2557);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:505
frost$collections$Array** $tmp2584 = &param1->statements;
frost$collections$Array* $tmp2585 = *$tmp2584;
ITable* $tmp2586 = ((frost$collections$CollectionView*) $tmp2585)->$class->itable;
while ($tmp2586->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2586 = $tmp2586->next;
}
$fn2588 $tmp2587 = $tmp2586->methods[0];
frost$core$Int $tmp2589 = $tmp2587(((frost$collections$CollectionView*) $tmp2585));
frost$core$Int $tmp2590 = (frost$core$Int) {1u};
int64_t $tmp2591 = $tmp2589.value;
int64_t $tmp2592 = $tmp2590.value;
int64_t $tmp2593 = $tmp2591 - $tmp2592;
frost$core$Int $tmp2594 = (frost$core$Int) {$tmp2593};
frost$core$Int $tmp2595 = (frost$core$Int) {1u};
frost$core$Int $tmp2596 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp2597 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp2598 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2594, $tmp2595, $tmp2596, $tmp2597);
frost$core$Int $tmp2599 = $tmp2598.start;
*(&local0) = $tmp2599;
frost$core$Int $tmp2600 = $tmp2598.end;
frost$core$Int $tmp2601 = $tmp2598.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from Analyzer.frost:505:9
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:120
int64_t $tmp2602 = $tmp2601.value;
int64_t $tmp2603 = -$tmp2602;
frost$core$Int $tmp2604 = (frost$core$Int) {$tmp2603};
frost$core$Bit $tmp2605 = $tmp2598.inclusive;
bool $tmp2606 = $tmp2605.value;
frost$core$Int $tmp2607 = (frost$core$Int) {0u};
int64_t $tmp2608 = $tmp2601.value;
int64_t $tmp2609 = $tmp2607.value;
bool $tmp2610 = $tmp2608 >= $tmp2609;
frost$core$Bit $tmp2611 = (frost$core$Bit) {$tmp2610};
bool $tmp2612 = $tmp2611.value;
if ($tmp2612) goto block13; else goto block14;
block13:;
if ($tmp2606) goto block15; else goto block16;
block15:;
int64_t $tmp2613 = $tmp2599.value;
int64_t $tmp2614 = $tmp2600.value;
bool $tmp2615 = $tmp2613 <= $tmp2614;
frost$core$Bit $tmp2616 = (frost$core$Bit) {$tmp2615};
bool $tmp2617 = $tmp2616.value;
if ($tmp2617) goto block10; else goto block11;
block16:;
int64_t $tmp2618 = $tmp2599.value;
int64_t $tmp2619 = $tmp2600.value;
bool $tmp2620 = $tmp2618 < $tmp2619;
frost$core$Bit $tmp2621 = (frost$core$Bit) {$tmp2620};
bool $tmp2622 = $tmp2621.value;
if ($tmp2622) goto block10; else goto block11;
block14:;
if ($tmp2606) goto block17; else goto block18;
block17:;
int64_t $tmp2623 = $tmp2599.value;
int64_t $tmp2624 = $tmp2600.value;
bool $tmp2625 = $tmp2623 >= $tmp2624;
frost$core$Bit $tmp2626 = (frost$core$Bit) {$tmp2625};
bool $tmp2627 = $tmp2626.value;
if ($tmp2627) goto block10; else goto block11;
block18:;
int64_t $tmp2628 = $tmp2599.value;
int64_t $tmp2629 = $tmp2600.value;
bool $tmp2630 = $tmp2628 > $tmp2629;
frost$core$Bit $tmp2631 = (frost$core$Bit) {$tmp2630};
bool $tmp2632 = $tmp2631.value;
if ($tmp2632) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:506
frost$collections$Array** $tmp2633 = &param1->statements;
frost$collections$Array* $tmp2634 = *$tmp2633;
frost$core$Int $tmp2635 = *(&local0);
frost$core$Object* $tmp2636 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp2634, $tmp2635);
frost$core$Frost$unref$frost$core$Object$Q($tmp2636);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:507
frost$collections$Array** $tmp2637 = &param1->ids;
frost$collections$Array* $tmp2638 = *$tmp2637;
frost$core$Int $tmp2639 = *(&local0);
frost$core$Object* $tmp2640 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp2638, $tmp2639);
frost$core$Frost$unref$frost$core$Object$Q($tmp2640);
frost$core$Int $tmp2641 = *(&local0);
if ($tmp2612) goto block20; else goto block21;
block20:;
int64_t $tmp2642 = $tmp2600.value;
int64_t $tmp2643 = $tmp2641.value;
int64_t $tmp2644 = $tmp2642 - $tmp2643;
frost$core$Int $tmp2645 = (frost$core$Int) {$tmp2644};
if ($tmp2606) goto block22; else goto block23;
block22:;
int64_t $tmp2646 = $tmp2645.value;
int64_t $tmp2647 = $tmp2601.value;
bool $tmp2648 = $tmp2646 >= $tmp2647;
frost$core$Bit $tmp2649 = (frost$core$Bit) {$tmp2648};
bool $tmp2650 = $tmp2649.value;
if ($tmp2650) goto block19; else goto block11;
block23:;
int64_t $tmp2651 = $tmp2645.value;
int64_t $tmp2652 = $tmp2601.value;
bool $tmp2653 = $tmp2651 > $tmp2652;
frost$core$Bit $tmp2654 = (frost$core$Bit) {$tmp2653};
bool $tmp2655 = $tmp2654.value;
if ($tmp2655) goto block19; else goto block11;
block21:;
int64_t $tmp2656 = $tmp2641.value;
int64_t $tmp2657 = $tmp2600.value;
int64_t $tmp2658 = $tmp2656 - $tmp2657;
frost$core$Int $tmp2659 = (frost$core$Int) {$tmp2658};
if ($tmp2606) goto block24; else goto block25;
block24:;
int64_t $tmp2660 = $tmp2659.value;
int64_t $tmp2661 = $tmp2604.value;
bool $tmp2662 = $tmp2660 >= $tmp2661;
frost$core$Bit $tmp2663 = (frost$core$Bit) {$tmp2662};
bool $tmp2664 = $tmp2663.value;
if ($tmp2664) goto block19; else goto block11;
block25:;
int64_t $tmp2665 = $tmp2659.value;
int64_t $tmp2666 = $tmp2604.value;
bool $tmp2667 = $tmp2665 > $tmp2666;
frost$core$Bit $tmp2668 = (frost$core$Bit) {$tmp2667};
bool $tmp2669 = $tmp2668.value;
if ($tmp2669) goto block19; else goto block11;
block19:;
int64_t $tmp2670 = $tmp2641.value;
int64_t $tmp2671 = $tmp2601.value;
int64_t $tmp2672 = $tmp2670 + $tmp2671;
frost$core$Int $tmp2673 = (frost$core$Int) {$tmp2672};
*(&local0) = $tmp2673;
goto block10;
block11:;
return;

}
void org$frostlang$frostc$pass$Analyzer$removeBlock$frost$core$Int(org$frostlang$frostc$pass$Analyzer* param0, frost$core$Int param1) {

org$frostlang$frostc$IR$Block$ID local0;
org$frostlang$frostc$IR$Block* local1 = NULL;
frost$core$Int local2;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$Position local4;
org$frostlang$frostc$IR$Block$ID local5;
org$frostlang$frostc$IR$Block$ID local6;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:512
org$frostlang$frostc$IR** $tmp2674 = &param0->ir;
org$frostlang$frostc$IR* $tmp2675 = *$tmp2674;
frost$collections$Array** $tmp2676 = &$tmp2675->blocks;
frost$collections$Array* $tmp2677 = *$tmp2676;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:512:33
frost$core$Int $tmp2678 = (frost$core$Int) {0u};
int64_t $tmp2679 = param1.value;
int64_t $tmp2680 = $tmp2678.value;
bool $tmp2681 = $tmp2679 >= $tmp2680;
frost$core$Bit $tmp2682 = (frost$core$Bit) {$tmp2681};
bool $tmp2683 = $tmp2682.value;
if ($tmp2683) goto block4; else goto block3;
block4:;
ITable* $tmp2684 = ((frost$collections$CollectionView*) $tmp2677)->$class->itable;
while ($tmp2684->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2684 = $tmp2684->next;
}
$fn2686 $tmp2685 = $tmp2684->methods[0];
frost$core$Int $tmp2687 = $tmp2685(((frost$collections$CollectionView*) $tmp2677));
int64_t $tmp2688 = param1.value;
int64_t $tmp2689 = $tmp2687.value;
bool $tmp2690 = $tmp2688 < $tmp2689;
frost$core$Bit $tmp2691 = (frost$core$Bit) {$tmp2690};
bool $tmp2692 = $tmp2691.value;
if ($tmp2692) goto block2; else goto block3;
block3:;
frost$core$Int $tmp2693 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2694, $tmp2693, &$s2695);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2696 = &$tmp2677->data;
frost$core$Object** $tmp2697 = *$tmp2696;
frost$core$Int64 $tmp2698 = frost$core$Int64$init$frost$core$Int(param1);
int64_t $tmp2699 = $tmp2698.value;
frost$core$Object* $tmp2700 = $tmp2697[$tmp2699];
frost$core$Frost$ref$frost$core$Object$Q($tmp2700);
org$frostlang$frostc$IR$Block$ID* $tmp2701 = &((org$frostlang$frostc$IR$Block*) $tmp2700)->id;
org$frostlang$frostc$IR$Block$ID $tmp2702 = *$tmp2701;
*(&local0) = $tmp2702;
frost$core$Frost$unref$frost$core$Object$Q($tmp2700);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:513
org$frostlang$frostc$IR** $tmp2703 = &param0->ir;
org$frostlang$frostc$IR* $tmp2704 = *$tmp2703;
frost$collections$Array** $tmp2705 = &$tmp2704->blocks;
frost$collections$Array* $tmp2706 = *$tmp2705;
frost$core$Object* $tmp2707 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp2706, param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp2707);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:514
org$frostlang$frostc$IR** $tmp2708 = &param0->ir;
org$frostlang$frostc$IR* $tmp2709 = *$tmp2708;
frost$collections$Array** $tmp2710 = &$tmp2709->blocks;
frost$collections$Array* $tmp2711 = *$tmp2710;
ITable* $tmp2712 = ((frost$collections$Iterable*) $tmp2711)->$class->itable;
while ($tmp2712->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2712 = $tmp2712->next;
}
$fn2714 $tmp2713 = $tmp2712->methods[0];
frost$collections$Iterator* $tmp2715 = $tmp2713(((frost$collections$Iterable*) $tmp2711));
goto block5;
block5:;
ITable* $tmp2716 = $tmp2715->$class->itable;
while ($tmp2716->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2716 = $tmp2716->next;
}
$fn2718 $tmp2717 = $tmp2716->methods[0];
frost$core$Bit $tmp2719 = $tmp2717($tmp2715);
bool $tmp2720 = $tmp2719.value;
if ($tmp2720) goto block7; else goto block6;
block6:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2721 = $tmp2715->$class->itable;
while ($tmp2721->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2721 = $tmp2721->next;
}
$fn2723 $tmp2722 = $tmp2721->methods[1];
frost$core$Object* $tmp2724 = $tmp2722($tmp2715);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2724)));
org$frostlang$frostc$IR$Block* $tmp2725 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp2724);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:515
org$frostlang$frostc$IR$Block* $tmp2726 = *(&local1);
frost$collections$Array** $tmp2727 = &$tmp2726->statements;
frost$collections$Array* $tmp2728 = *$tmp2727;
ITable* $tmp2729 = ((frost$collections$CollectionView*) $tmp2728)->$class->itable;
while ($tmp2729->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2729 = $tmp2729->next;
}
$fn2731 $tmp2730 = $tmp2729->methods[0];
frost$core$Int $tmp2732 = $tmp2730(((frost$collections$CollectionView*) $tmp2728));
frost$core$Int $tmp2733 = (frost$core$Int) {1u};
int64_t $tmp2734 = $tmp2732.value;
int64_t $tmp2735 = $tmp2733.value;
int64_t $tmp2736 = $tmp2734 - $tmp2735;
frost$core$Int $tmp2737 = (frost$core$Int) {$tmp2736};
*(&local2) = $tmp2737;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:516
org$frostlang$frostc$IR$Block* $tmp2738 = *(&local1);
frost$collections$Array** $tmp2739 = &$tmp2738->statements;
frost$collections$Array* $tmp2740 = *$tmp2739;
frost$core$Int $tmp2741 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:516:31
frost$core$Int $tmp2742 = (frost$core$Int) {0u};
int64_t $tmp2743 = $tmp2741.value;
int64_t $tmp2744 = $tmp2742.value;
bool $tmp2745 = $tmp2743 >= $tmp2744;
frost$core$Bit $tmp2746 = (frost$core$Bit) {$tmp2745};
bool $tmp2747 = $tmp2746.value;
if ($tmp2747) goto block11; else goto block10;
block11:;
ITable* $tmp2748 = ((frost$collections$CollectionView*) $tmp2740)->$class->itable;
while ($tmp2748->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2748 = $tmp2748->next;
}
$fn2750 $tmp2749 = $tmp2748->methods[0];
frost$core$Int $tmp2751 = $tmp2749(((frost$collections$CollectionView*) $tmp2740));
int64_t $tmp2752 = $tmp2741.value;
int64_t $tmp2753 = $tmp2751.value;
bool $tmp2754 = $tmp2752 < $tmp2753;
frost$core$Bit $tmp2755 = (frost$core$Bit) {$tmp2754};
bool $tmp2756 = $tmp2755.value;
if ($tmp2756) goto block9; else goto block10;
block10:;
frost$core$Int $tmp2757 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2758, $tmp2757, &$s2759);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2760 = &$tmp2740->data;
frost$core$Object** $tmp2761 = *$tmp2760;
frost$core$Int64 $tmp2762 = frost$core$Int64$init$frost$core$Int($tmp2741);
int64_t $tmp2763 = $tmp2762.value;
frost$core$Object* $tmp2764 = $tmp2761[$tmp2763];
frost$core$Frost$ref$frost$core$Object$Q($tmp2764);
frost$core$Int* $tmp2765 = &((org$frostlang$frostc$IR$Statement*) $tmp2764)->$rawValue;
frost$core$Int $tmp2766 = *$tmp2765;
frost$core$Int $tmp2767 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:517:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp2768 = $tmp2766.value;
int64_t $tmp2769 = $tmp2767.value;
bool $tmp2770 = $tmp2768 == $tmp2769;
frost$core$Bit $tmp2771 = (frost$core$Bit) {$tmp2770};
bool $tmp2772 = $tmp2771.value;
if ($tmp2772) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Position* $tmp2773 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2764)->$data + 0);
org$frostlang$frostc$Position $tmp2774 = *$tmp2773;
org$frostlang$frostc$IR$Block$ID* $tmp2775 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2764)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp2776 = *$tmp2775;
*(&local3) = $tmp2776;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:518
org$frostlang$frostc$IR$Block$ID $tmp2777 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp2778 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:518:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2779 = $tmp2777.value;
frost$core$Int $tmp2780 = $tmp2778.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp2781 = $tmp2779.value;
int64_t $tmp2782 = $tmp2780.value;
bool $tmp2783 = $tmp2781 == $tmp2782;
frost$core$Bit $tmp2784 = (frost$core$Bit) {$tmp2783};
bool $tmp2785 = $tmp2784.value;
if ($tmp2785) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:519
org$frostlang$frostc$IR$Block* $tmp2786 = *(&local1);
$fn2788 $tmp2787 = ($fn2788) param0->$class->vtable[11];
$tmp2787(param0, $tmp2786);
goto block17;
block17:;
goto block12;
block14:;
frost$core$Int $tmp2789 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:522:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp2790 = $tmp2766.value;
int64_t $tmp2791 = $tmp2789.value;
bool $tmp2792 = $tmp2790 == $tmp2791;
frost$core$Bit $tmp2793 = (frost$core$Bit) {$tmp2792};
bool $tmp2794 = $tmp2793.value;
if ($tmp2794) goto block20; else goto block12;
block20:;
org$frostlang$frostc$Position* $tmp2795 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2764)->$data + 0);
org$frostlang$frostc$Position $tmp2796 = *$tmp2795;
*(&local4) = $tmp2796;
org$frostlang$frostc$IR$Value** $tmp2797 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp2764)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp2798 = *$tmp2797;
org$frostlang$frostc$IR$Block$ID* $tmp2799 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2764)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp2800 = *$tmp2799;
*(&local5) = $tmp2800;
org$frostlang$frostc$IR$Block$ID* $tmp2801 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2764)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp2802 = *$tmp2801;
*(&local6) = $tmp2802;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:523
org$frostlang$frostc$IR$Block$ID $tmp2803 = *(&local5);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2804;
$tmp2804 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2804->value = $tmp2803;
org$frostlang$frostc$IR$Block$ID $tmp2805 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2806;
$tmp2806 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2806->value = $tmp2805;
ITable* $tmp2807 = ((frost$core$Equatable*) $tmp2804)->$class->itable;
while ($tmp2807->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2807 = $tmp2807->next;
}
$fn2809 $tmp2808 = $tmp2807->methods[1];
frost$core$Bit $tmp2810 = $tmp2808(((frost$core$Equatable*) $tmp2804), ((frost$core$Equatable*) $tmp2806));
bool $tmp2811 = $tmp2810.value;
if ($tmp2811) goto block22; else goto block23;
block23:;
frost$core$Int $tmp2812 = (frost$core$Int) {523u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2813, $tmp2812);
abort(); // unreachable
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2806)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2804)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:524
org$frostlang$frostc$IR$Block$ID $tmp2814 = *(&local5);
org$frostlang$frostc$IR$Block$ID $tmp2815 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:524:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2816 = $tmp2814.value;
frost$core$Int $tmp2817 = $tmp2815.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp2818 = $tmp2816.value;
int64_t $tmp2819 = $tmp2817.value;
bool $tmp2820 = $tmp2818 == $tmp2819;
frost$core$Bit $tmp2821 = (frost$core$Bit) {$tmp2820};
bool $tmp2822 = $tmp2821.value;
if ($tmp2822) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:525
org$frostlang$frostc$IR$Block* $tmp2823 = *(&local1);
frost$collections$Array** $tmp2824 = &$tmp2823->statements;
frost$collections$Array* $tmp2825 = *$tmp2824;
frost$core$Int $tmp2826 = *(&local2);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2827 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2828 = (frost$core$Int) {1u};
org$frostlang$frostc$Position $tmp2829 = *(&local4);
org$frostlang$frostc$IR$Block$ID $tmp2830 = *(&local6);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2827, $tmp2828, $tmp2829, $tmp2830);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:525:37
frost$core$Int $tmp2831 = (frost$core$Int) {0u};
int64_t $tmp2832 = $tmp2826.value;
int64_t $tmp2833 = $tmp2831.value;
bool $tmp2834 = $tmp2832 >= $tmp2833;
frost$core$Bit $tmp2835 = (frost$core$Bit) {$tmp2834};
bool $tmp2836 = $tmp2835.value;
if ($tmp2836) goto block32; else goto block31;
block32:;
ITable* $tmp2837 = ((frost$collections$CollectionView*) $tmp2825)->$class->itable;
while ($tmp2837->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2837 = $tmp2837->next;
}
$fn2839 $tmp2838 = $tmp2837->methods[0];
frost$core$Int $tmp2840 = $tmp2838(((frost$collections$CollectionView*) $tmp2825));
int64_t $tmp2841 = $tmp2826.value;
int64_t $tmp2842 = $tmp2840.value;
bool $tmp2843 = $tmp2841 < $tmp2842;
frost$core$Bit $tmp2844 = (frost$core$Bit) {$tmp2843};
bool $tmp2845 = $tmp2844.value;
if ($tmp2845) goto block30; else goto block31;
block31:;
frost$core$Int $tmp2846 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2847, $tmp2846, &$s2848);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp2849 = &$tmp2825->data;
frost$core$Object** $tmp2850 = *$tmp2849;
frost$core$Int64 $tmp2851 = frost$core$Int64$init$frost$core$Int($tmp2826);
int64_t $tmp2852 = $tmp2851.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
frost$core$Object* $tmp2853 = $tmp2850[$tmp2852];
frost$core$Frost$unref$frost$core$Object$Q($tmp2853);
$tmp2850[$tmp2852] = ((frost$core$Object*) $tmp2827);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
goto block25;
block26:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:527
org$frostlang$frostc$IR$Block$ID $tmp2854 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp2855 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:527:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2856 = $tmp2854.value;
frost$core$Int $tmp2857 = $tmp2855.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp2858 = $tmp2856.value;
int64_t $tmp2859 = $tmp2857.value;
bool $tmp2860 = $tmp2858 == $tmp2859;
frost$core$Bit $tmp2861 = (frost$core$Bit) {$tmp2860};
bool $tmp2862 = $tmp2861.value;
if ($tmp2862) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:528
org$frostlang$frostc$IR$Block* $tmp2863 = *(&local1);
frost$collections$Array** $tmp2864 = &$tmp2863->statements;
frost$collections$Array* $tmp2865 = *$tmp2864;
frost$core$Int $tmp2866 = *(&local2);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2867 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2868 = (frost$core$Int) {1u};
org$frostlang$frostc$Position $tmp2869 = *(&local4);
org$frostlang$frostc$IR$Block$ID $tmp2870 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2867, $tmp2868, $tmp2869, $tmp2870);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:528:37
frost$core$Int $tmp2871 = (frost$core$Int) {0u};
int64_t $tmp2872 = $tmp2866.value;
int64_t $tmp2873 = $tmp2871.value;
bool $tmp2874 = $tmp2872 >= $tmp2873;
frost$core$Bit $tmp2875 = (frost$core$Bit) {$tmp2874};
bool $tmp2876 = $tmp2875.value;
if ($tmp2876) goto block40; else goto block39;
block40:;
ITable* $tmp2877 = ((frost$collections$CollectionView*) $tmp2865)->$class->itable;
while ($tmp2877->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2877 = $tmp2877->next;
}
$fn2879 $tmp2878 = $tmp2877->methods[0];
frost$core$Int $tmp2880 = $tmp2878(((frost$collections$CollectionView*) $tmp2865));
int64_t $tmp2881 = $tmp2866.value;
int64_t $tmp2882 = $tmp2880.value;
bool $tmp2883 = $tmp2881 < $tmp2882;
frost$core$Bit $tmp2884 = (frost$core$Bit) {$tmp2883};
bool $tmp2885 = $tmp2884.value;
if ($tmp2885) goto block38; else goto block39;
block39:;
frost$core$Int $tmp2886 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2887, $tmp2886, &$s2888);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp2889 = &$tmp2865->data;
frost$core$Object** $tmp2890 = *$tmp2889;
frost$core$Int64 $tmp2891 = frost$core$Int64$init$frost$core$Int($tmp2866);
int64_t $tmp2892 = $tmp2891.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
frost$core$Object* $tmp2893 = $tmp2890[$tmp2892];
frost$core$Frost$unref$frost$core$Object$Q($tmp2893);
$tmp2890[$tmp2892] = ((frost$core$Object*) $tmp2867);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
goto block34;
block34:;
goto block25;
block25:;
goto block12;
block12:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2764);
frost$core$Frost$unref$frost$core$Object$Q($tmp2724);
org$frostlang$frostc$IR$Block* $tmp2894 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2715));
return;

}
void org$frostlang$frostc$pass$Analyzer$cleanup(org$frostlang$frostc$pass$Analyzer* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:14
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp2895 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2896 = *$tmp2895;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
org$frostlang$frostc$MethodDecl** $tmp2897 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2898 = *$tmp2897;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
org$frostlang$frostc$IR** $tmp2899 = &param0->ir;
org$frostlang$frostc$IR* $tmp2900 = *$tmp2899;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
frost$collections$HashMap** $tmp2901 = &param0->blocks;
frost$collections$HashMap* $tmp2902 = *$tmp2901;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
frost$collections$HashMap** $tmp2903 = &param0->predecessors;
frost$collections$HashMap* $tmp2904 = *$tmp2903;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
frost$collections$HashMap** $tmp2905 = &param0->entryStates;
frost$collections$HashMap* $tmp2906 = *$tmp2905;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2906));
frost$collections$HashSet** $tmp2907 = &param0->worklist;
frost$collections$HashSet* $tmp2908 = *$tmp2907;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
frost$collections$HashMap** $tmp2909 = &param0->statements;
frost$collections$HashMap* $tmp2910 = *$tmp2909;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
return;

}

