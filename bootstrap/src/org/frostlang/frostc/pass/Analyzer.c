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
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/pass/Analyzer/DataFlowValue.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/pass/Analyzer/State.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/Key.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Weak.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Array.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt64.h"
#include "frost/core/Real64.h"
#include "org/frostlang/frostc/pass/Analyzer/BlockExit.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/LinkedList.h"
#include "frost/io/Console.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/core/System.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$Analyzer$class_type org$frostlang$frostc$pass$Analyzer$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$pass$Analyzer$cleanup, org$frostlang$frostc$pass$Analyzer$getValue$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$pass$Analyzer$State$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue, org$frostlang$frostc$pass$Analyzer$getValue$org$frostlang$frostc$IR$Value$org$frostlang$frostc$pass$Analyzer$State$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue, org$frostlang$frostc$pass$Analyzer$propagate$org$frostlang$frostc$pass$Analyzer$BlockExit$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$pass$Analyzer$updateStateForExitIndex$org$frostlang$frostc$IR$Block$frost$core$Int$org$frostlang$frostc$pass$Analyzer$State, org$frostlang$frostc$pass$Analyzer$binaryValue$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$pass$Analyzer$State$org$frostlang$frostc$Type$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue, org$frostlang$frostc$pass$Analyzer$computeExitState$org$frostlang$frostc$pass$Analyzer$BlockExit$R$org$frostlang$frostc$pass$Analyzer$State, org$frostlang$frostc$pass$Analyzer$process$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$pass$Analyzer$dump, org$frostlang$frostc$pass$Analyzer$analyze, org$frostlang$frostc$pass$Analyzer$makeUnreachable$org$frostlang$frostc$IR$Block, org$frostlang$frostc$pass$Analyzer$removeBlock$frost$core$Int} };

typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn63)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$expression$Binary$Operator, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*, org$frostlang$frostc$Type*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn92)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn115)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn123)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn137)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn195)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn226)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn239)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn252)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn265)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn289)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn311)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn324)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn337)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn350)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn374)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn430)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn440)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Int (*$fn484)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn536)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn563)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn572)(frost$core$Object*);
typedef frost$core$String* (*$fn580)(frost$core$Object*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn601)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn617)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn620)(org$frostlang$frostc$pass$Analyzer$DataFlowValue*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn659)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn703)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn747)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn767)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn805)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn817)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$String* (*$fn837)(frost$core$Object*);
typedef frost$core$Int (*$fn895)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn962)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$String* (*$fn980)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1009)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn1023)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn1026)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit);
typedef frost$core$Bit (*$fn1037)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1042)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn1051)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit);
typedef frost$core$Bit (*$fn1054)(org$frostlang$frostc$pass$Analyzer$State*, org$frostlang$frostc$Compiler*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Object* (*$fn1070)(org$frostlang$frostc$LinkedList*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1091)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$collections$Iterator* (*$fn1104)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1108)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1113)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn1155)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1193)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1215)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1268)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1354)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1427)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn1435)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1441)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1450)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1455)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1493)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Int (*$fn1503)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1579)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1602)(frost$collections$CollectionView*);
typedef void (*$fn1624)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*, frost$core$Int, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Object* (*$fn1639)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn1663)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn1688)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn1699)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Object* (*$fn1723)(org$frostlang$frostc$LinkedList*);
typedef frost$core$String* (*$fn1726)(frost$core$Object*);
typedef frost$core$Int (*$fn1743)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1765)(frost$core$Object*);
typedef frost$core$Int (*$fn1784)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1800)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1831)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1835)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1840)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1848)(frost$core$Object*);
typedef frost$core$String* (*$fn1871)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1881)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn1889)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1895)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1904)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1908)(frost$core$Object*);
typedef frost$core$Object* (*$fn1914)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1917)(frost$core$Object*);
typedef frost$core$Int (*$fn1937)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1994)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2019)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2023)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2028)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2043)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn2051)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2057)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2068)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2074)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2094)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2118)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2130)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn2134)(frost$collections$Iterator*);
typedef void (*$fn2144)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn2153)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2157)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2162)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2179)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2201)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2214)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn2233)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit);
typedef frost$core$Object* (*$fn2253)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2259)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn2262)(org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2267)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2273)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef void (*$fn2277)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2284)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef frost$core$Int (*$fn2297)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2325)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2329)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2334)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2342)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2353)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2378)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*);
typedef frost$core$Bit (*$fn2399)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72", 34, -7908766228797686597, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6d\x61\x79\x20\x62\x65\x20\x6e\x75\x6c\x6c", 17, 1736803051692862081, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s492 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x6c\x75\x65\x20", 6, 2389068132842847038, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x68\x61\x73\x20\x6e\x6f\x74\x20\x62\x65\x65\x6e\x20\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x64", 25, 6096059661963607284, NULL };
static frost$core$String $s668 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s671 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s681 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s712 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s715 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s725 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s840 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x3a\x20", 23, 7177047828670113807, NULL };
static frost$core$String $s842 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s843 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s903 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s904 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s983 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x76\x61\x6c\x75\x65\x20\x27", 19, 3303349432046188092, NULL };
static frost$core$String $s985 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s986 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s1273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1512 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s1587 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1588 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1610 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1611 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s1729 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b\x20\x65\x6e\x64\x65\x64\x20\x69\x6e\x20\x6e\x6f\x6e\x74\x65\x72\x6d\x69\x6e\x61\x6c\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x20", 37, 4880269855066615229, NULL };
static frost$core$String $s1730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1735 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1768 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 2638862777294684392, NULL };
static frost$core$String $s1770 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s1792 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1793 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1804 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1805 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1851 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1853 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1874 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1875 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1910 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s2002 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2003 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x20\x65\x78\x69\x74\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 33, 2495389199813969088, NULL };
static frost$core$String $s2305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };

void org$frostlang$frostc$pass$Analyzer$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$MethodDecl* param2, org$frostlang$frostc$IR* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:132
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:134
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:136
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:138
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:140
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:142
frost$core$Bit $tmp22 = (frost$core$Bit) {false};
frost$core$Bit* $tmp23 = &param0->reportErrors;
*$tmp23 = $tmp22;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:145
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp24 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp25 = *$tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
org$frostlang$frostc$Compiler** $tmp26 = &param0->compiler;
*$tmp26 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:146
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$MethodDecl** $tmp27 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp28 = *$tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
org$frostlang$frostc$MethodDecl** $tmp29 = &param0->m;
*$tmp29 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:147
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR** $tmp30 = &param0->ir;
org$frostlang$frostc$IR* $tmp31 = *$tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
org$frostlang$frostc$IR** $tmp32 = &param0->ir;
*$tmp32 = param3;
return;

}
org$frostlang$frostc$pass$Analyzer$DataFlowValue* org$frostlang$frostc$pass$Analyzer$getValue$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$pass$Analyzer$State$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$pass$Analyzer$State* param2) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$expression$Binary$Operator local1;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Position local4;
org$frostlang$frostc$IR$Value* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
frost$core$Bit local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$ClassDecl* local12 = NULL;
org$frostlang$frostc$ClassDecl* local13 = NULL;
org$frostlang$frostc$IR$Value* local14 = NULL;
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
org$frostlang$frostc$Type$Kind local26;
org$frostlang$frostc$Type$Kind local27;
org$frostlang$frostc$Type$Kind local28;
org$frostlang$frostc$Type$Kind local29;
org$frostlang$frostc$Type$Kind local30;
org$frostlang$frostc$Type$Kind local31;
org$frostlang$frostc$IR$Value* local32 = NULL;
org$frostlang$frostc$FieldDecl* local33 = NULL;
frost$core$Bit local34;
org$frostlang$frostc$ChoiceCase* local35 = NULL;
frost$core$Int local36;
org$frostlang$frostc$FieldDecl* local37 = NULL;
org$frostlang$frostc$Position local38;
org$frostlang$frostc$IR$Value* local39 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local40 = NULL;
frost$core$Bit local41;
org$frostlang$frostc$IR$Value* local42 = NULL;
org$frostlang$frostc$IR$Value* local43 = NULL;
org$frostlang$frostc$Type* local44 = NULL;
org$frostlang$frostc$IR$Value* local45 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local46 = NULL;
org$frostlang$frostc$IR$Value* local47 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local48 = NULL;
org$frostlang$frostc$IR$Value* local49 = NULL;
org$frostlang$frostc$IR$Value* local50 = NULL;
org$frostlang$frostc$MethodDecl* local51 = NULL;
org$frostlang$frostc$FixedArray* local52 = NULL;
frost$core$Bit local53;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:151
frost$collections$HashMap** $tmp33 = &param0->statements;
frost$collections$HashMap* $tmp34 = *$tmp33;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp35;
$tmp35 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp35->value = param1;
frost$core$Object* $tmp36 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp34, ((frost$collections$Key*) $tmp35));
frost$core$Int* $tmp37 = &((org$frostlang$frostc$IR$Statement*) $tmp36)->$rawValue;
frost$core$Int $tmp38 = *$tmp37;
frost$core$Int $tmp39 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:152:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp40 = $tmp38.value;
int64_t $tmp41 = $tmp39.value;
bool $tmp42 = $tmp40 == $tmp41;
frost$core$Bit $tmp43 = (frost$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp45 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp46 = *$tmp45;
org$frostlang$frostc$IR$Value** $tmp47 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp48 = *$tmp47;
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
org$frostlang$frostc$IR$Value* $tmp49 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local0) = $tmp48;
org$frostlang$frostc$expression$Binary$Operator* $tmp50 = (org$frostlang$frostc$expression$Binary$Operator*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp51 = *$tmp50;
*(&local1) = $tmp51;
org$frostlang$frostc$IR$Value** $tmp52 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 40);
org$frostlang$frostc$IR$Value* $tmp53 = *$tmp52;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
org$frostlang$frostc$IR$Value* $tmp54 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local2) = $tmp53;
org$frostlang$frostc$Type** $tmp55 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 48);
org$frostlang$frostc$Type* $tmp56 = *$tmp55;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
org$frostlang$frostc$Type* $tmp57 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local3) = $tmp56;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:153
org$frostlang$frostc$IR$Value* $tmp58 = *(&local0);
org$frostlang$frostc$expression$Binary$Operator $tmp59 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp60 = *(&local2);
org$frostlang$frostc$Type* $tmp61 = *(&local3);
$fn63 $tmp62 = ($fn63) param0->$class->vtable[6];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp64 = $tmp62(param0, $tmp58, $tmp59, $tmp60, param2, $tmp61);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
org$frostlang$frostc$Type* $tmp65 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp66 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp67 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp64;
block3:;
frost$core$Int $tmp68 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:155:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp69 = $tmp38.value;
int64_t $tmp70 = $tmp68.value;
bool $tmp71 = $tmp69 == $tmp70;
frost$core$Bit $tmp72 = (frost$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp74 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp75 = *$tmp74;
*(&local4) = $tmp75;
org$frostlang$frostc$IR$Value** $tmp76 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp77 = *$tmp76;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
org$frostlang$frostc$IR$Value* $tmp78 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local5) = $tmp77;
org$frostlang$frostc$Type** $tmp79 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$Type* $tmp80 = *$tmp79;
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
org$frostlang$frostc$Type* $tmp81 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local6) = $tmp80;
frost$core$Bit* $tmp82 = (frost$core$Bit*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 40);
frost$core$Bit $tmp83 = *$tmp82;
*(&local7) = $tmp83;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:156
frost$core$Bit $tmp84 = *(&local7);
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:157
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp86 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp87 = *(&local6);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp86, $tmp87);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
org$frostlang$frostc$Type* $tmp88 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp89 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp86;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:160
org$frostlang$frostc$IR$Value* $tmp90 = *(&local5);
$fn92 $tmp91 = ($fn92) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp93 = $tmp91(param0, $tmp90, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
org$frostlang$frostc$Type* $tmp94 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp95 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp93;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:162
frost$core$Bit $tmp96 = *(&local7);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:162:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp97 = $tmp96.value;
bool $tmp98 = !$tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
goto block16;
block16:;
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block15; else goto block12;
block15:;
frost$core$Bit* $tmp101 = &param0->reportErrors;
frost$core$Bit $tmp102 = *$tmp101;
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block14; else goto block12;
block14:;
org$frostlang$frostc$Type* $tmp104 = *(&local6);
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Analyzer.frost:162:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:401
org$frostlang$frostc$Type$Kind* $tmp105 = &$tmp104->typeKind;
org$frostlang$frostc$Type$Kind $tmp106 = *$tmp105;
org$frostlang$frostc$Type$Kind$wrapper* $tmp107;
$tmp107 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp107->value = $tmp106;
frost$core$Int $tmp108 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:401:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp109 = &(&local9)->$rawValue;
*$tmp109 = $tmp108;
org$frostlang$frostc$Type$Kind $tmp110 = *(&local9);
*(&local8) = $tmp110;
goto block18;
block18:;
org$frostlang$frostc$Type$Kind $tmp111 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp112;
$tmp112 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp112->value = $tmp111;
ITable* $tmp113 = ((frost$core$Equatable*) $tmp107)->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[0];
frost$core$Bit $tmp116 = $tmp114(((frost$core$Equatable*) $tmp107), ((frost$core$Equatable*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp112)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp107)));
goto block17;
block17:;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:162:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp117 = $tmp116.value;
bool $tmp118 = !$tmp117;
frost$core$Bit $tmp119 = (frost$core$Bit) {$tmp118};
goto block19;
block19:;
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block13; else goto block12;
block13:;
org$frostlang$frostc$IR$Value* $tmp121 = *(&local5);
$fn123 $tmp122 = ($fn123) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp124 = $tmp122(param0, $tmp121, param2);
org$frostlang$frostc$Type** $tmp125 = &$tmp124->type;
org$frostlang$frostc$Type* $tmp126 = *$tmp125;
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Analyzer.frost:163:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:401
org$frostlang$frostc$Type$Kind* $tmp127 = &$tmp126->typeKind;
org$frostlang$frostc$Type$Kind $tmp128 = *$tmp127;
org$frostlang$frostc$Type$Kind$wrapper* $tmp129;
$tmp129 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp129->value = $tmp128;
frost$core$Int $tmp130 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:401:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp131 = &(&local11)->$rawValue;
*$tmp131 = $tmp130;
org$frostlang$frostc$Type$Kind $tmp132 = *(&local11);
*(&local10) = $tmp132;
goto block21;
block21:;
org$frostlang$frostc$Type$Kind $tmp133 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp134;
$tmp134 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp134->value = $tmp133;
ITable* $tmp135 = ((frost$core$Equatable*) $tmp129)->$class->itable;
while ($tmp135->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp135 = $tmp135->next;
}
$fn137 $tmp136 = $tmp135->methods[0];
frost$core$Bit $tmp138 = $tmp136(((frost$core$Equatable*) $tmp129), ((frost$core$Equatable*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp134)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp129)));
goto block20;
block20:;
bool $tmp139 = $tmp138.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
if ($tmp139) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:164
org$frostlang$frostc$Compiler** $tmp140 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp141 = *$tmp140;
org$frostlang$frostc$Position $tmp142 = *(&local4);
org$frostlang$frostc$Compiler$warn$org$frostlang$frostc$Position$frost$core$String($tmp141, $tmp142, &$s143);
goto block12;
block12:;
org$frostlang$frostc$Type* $tmp144 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp145 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block6:;
frost$core$Int $tmp146 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:167:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp147 = $tmp38.value;
int64_t $tmp148 = $tmp146.value;
bool $tmp149 = $tmp147 == $tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp152 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp153 = *$tmp152;
org$frostlang$frostc$ClassDecl** $tmp154 = (org$frostlang$frostc$ClassDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp155 = *$tmp154;
*(&local12) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
org$frostlang$frostc$ClassDecl* $tmp156 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local12) = $tmp155;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:168
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp157 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$ClassDecl* $tmp158 = *(&local12);
org$frostlang$frostc$Type** $tmp159 = &$tmp158->type;
org$frostlang$frostc$Type* $tmp160 = *$tmp159;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp157, $tmp160);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
org$frostlang$frostc$ClassDecl* $tmp161 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local12) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp157;
block23:;
frost$core$Int $tmp162 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:170:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp163 = $tmp38.value;
int64_t $tmp164 = $tmp162.value;
bool $tmp165 = $tmp163 == $tmp164;
frost$core$Bit $tmp166 = (frost$core$Bit) {$tmp165};
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block25; else goto block26;
block25:;
org$frostlang$frostc$Position* $tmp168 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp169 = *$tmp168;
org$frostlang$frostc$ClassDecl** $tmp170 = (org$frostlang$frostc$ClassDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp171 = *$tmp170;
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
org$frostlang$frostc$ClassDecl* $tmp172 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
*(&local13) = $tmp171;
org$frostlang$frostc$FixedArray** $tmp173 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp174 = *$tmp173;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:171
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp175 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$ClassDecl* $tmp176 = *(&local13);
org$frostlang$frostc$Type** $tmp177 = &$tmp176->type;
org$frostlang$frostc$Type* $tmp178 = *$tmp177;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp175, $tmp178);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
org$frostlang$frostc$ClassDecl* $tmp179 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp175;
block26:;
frost$core$Int $tmp180 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:173:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp181 = $tmp38.value;
int64_t $tmp182 = $tmp180.value;
bool $tmp183 = $tmp181 == $tmp182;
frost$core$Bit $tmp184 = (frost$core$Bit) {$tmp183};
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp186 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp187 = *$tmp186;
org$frostlang$frostc$IR$Value** $tmp188 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp189 = *$tmp188;
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
org$frostlang$frostc$IR$Value* $tmp190 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local14) = $tmp189;
org$frostlang$frostc$FixedArray** $tmp191 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp192 = *$tmp191;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:174
org$frostlang$frostc$IR$Value* $tmp193 = *(&local14);
$fn195 $tmp194 = ($fn195) $tmp193->$class->vtable[2];
org$frostlang$frostc$Type* $tmp196 = $tmp194($tmp193);
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
org$frostlang$frostc$Type* $tmp197 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local15) = $tmp196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:175
org$frostlang$frostc$Type* $tmp198 = *(&local15);
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:175:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:389
frost$core$String** $tmp199 = &((org$frostlang$frostc$Symbol*) $tmp198)->name;
frost$core$String* $tmp200 = *$tmp199;
frost$core$Bit $tmp201 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp200, &$s202);
bool $tmp203 = $tmp201.value;
if ($tmp203) goto block31; else goto block33;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:176
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp204 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp205 = *(&local15);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:176:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp206 = &$tmp205->_subtypes;
org$frostlang$frostc$FixedArray* $tmp207 = *$tmp206;
frost$core$Bit $tmp208 = (frost$core$Bit) {$tmp207 != NULL};
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block36; else goto block37;
block37:;
frost$core$Int $tmp210 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s211, $tmp210);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp212 = &$tmp205->_subtypes;
org$frostlang$frostc$FixedArray* $tmp213 = *$tmp212;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Int $tmp214 = (frost$core$Int) {1u};
frost$core$Object* $tmp215 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp213, $tmp214);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Analyzer.frost:176:58
org$frostlang$frostc$Type$Kind* $tmp216 = &((org$frostlang$frostc$Type*) $tmp215)->typeKind;
org$frostlang$frostc$Type$Kind $tmp217 = *$tmp216;
org$frostlang$frostc$Type$Kind$wrapper* $tmp218;
$tmp218 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp218->value = $tmp217;
frost$core$Int $tmp219 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp220 = &(&local17)->$rawValue;
*$tmp220 = $tmp219;
org$frostlang$frostc$Type$Kind $tmp221 = *(&local17);
*(&local16) = $tmp221;
org$frostlang$frostc$Type$Kind $tmp222 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp223;
$tmp223 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp223->value = $tmp222;
ITable* $tmp224 = ((frost$core$Equatable*) $tmp218)->$class->itable;
while ($tmp224->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp224 = $tmp224->next;
}
$fn226 $tmp225 = $tmp224->methods[0];
frost$core$Bit $tmp227 = $tmp225(((frost$core$Equatable*) $tmp218), ((frost$core$Equatable*) $tmp223));
bool $tmp228 = $tmp227.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp223)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp218)));
if ($tmp228) goto block39; else goto block43;
block43:;
org$frostlang$frostc$Type$Kind* $tmp229 = &((org$frostlang$frostc$Type*) $tmp215)->typeKind;
org$frostlang$frostc$Type$Kind $tmp230 = *$tmp229;
org$frostlang$frostc$Type$Kind$wrapper* $tmp231;
$tmp231 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp231->value = $tmp230;
frost$core$Int $tmp232 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp233 = &(&local19)->$rawValue;
*$tmp233 = $tmp232;
org$frostlang$frostc$Type$Kind $tmp234 = *(&local19);
*(&local18) = $tmp234;
org$frostlang$frostc$Type$Kind $tmp235 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp236;
$tmp236 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp236->value = $tmp235;
ITable* $tmp237 = ((frost$core$Equatable*) $tmp231)->$class->itable;
while ($tmp237->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp237 = $tmp237->next;
}
$fn239 $tmp238 = $tmp237->methods[0];
frost$core$Bit $tmp240 = $tmp238(((frost$core$Equatable*) $tmp231), ((frost$core$Equatable*) $tmp236));
bool $tmp241 = $tmp240.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp236)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp231)));
if ($tmp241) goto block39; else goto block42;
block42:;
org$frostlang$frostc$Type$Kind* $tmp242 = &((org$frostlang$frostc$Type*) $tmp215)->typeKind;
org$frostlang$frostc$Type$Kind $tmp243 = *$tmp242;
org$frostlang$frostc$Type$Kind$wrapper* $tmp244;
$tmp244 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp244->value = $tmp243;
frost$core$Int $tmp245 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp246 = &(&local21)->$rawValue;
*$tmp246 = $tmp245;
org$frostlang$frostc$Type$Kind $tmp247 = *(&local21);
*(&local20) = $tmp247;
org$frostlang$frostc$Type$Kind $tmp248 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp249;
$tmp249 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp249->value = $tmp248;
ITable* $tmp250 = ((frost$core$Equatable*) $tmp244)->$class->itable;
while ($tmp250->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp250 = $tmp250->next;
}
$fn252 $tmp251 = $tmp250->methods[0];
frost$core$Bit $tmp253 = $tmp251(((frost$core$Equatable*) $tmp244), ((frost$core$Equatable*) $tmp249));
bool $tmp254 = $tmp253.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp249)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp244)));
if ($tmp254) goto block39; else goto block41;
block41:;
org$frostlang$frostc$Type$Kind* $tmp255 = &((org$frostlang$frostc$Type*) $tmp215)->typeKind;
org$frostlang$frostc$Type$Kind $tmp256 = *$tmp255;
org$frostlang$frostc$Type$Kind$wrapper* $tmp257;
$tmp257 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp257->value = $tmp256;
frost$core$Int $tmp258 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp259 = &(&local23)->$rawValue;
*$tmp259 = $tmp258;
org$frostlang$frostc$Type$Kind $tmp260 = *(&local23);
*(&local22) = $tmp260;
org$frostlang$frostc$Type$Kind $tmp261 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp262;
$tmp262 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp262->value = $tmp261;
ITable* $tmp263 = ((frost$core$Equatable*) $tmp257)->$class->itable;
while ($tmp263->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp263 = $tmp263->next;
}
$fn265 $tmp264 = $tmp263->methods[0];
frost$core$Bit $tmp266 = $tmp264(((frost$core$Equatable*) $tmp257), ((frost$core$Equatable*) $tmp262));
bool $tmp267 = $tmp266.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp262)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp257)));
if ($tmp267) goto block39; else goto block40;
block40:;
frost$core$Int $tmp268 = (frost$core$Int) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s269, $tmp268, &$s270);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp271 = &((org$frostlang$frostc$Type*) $tmp215)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp272 = *$tmp271;
frost$core$Bit $tmp273 = (frost$core$Bit) {$tmp272 != NULL};
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block49; else goto block50;
block50:;
frost$core$Int $tmp275 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s276, $tmp275);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp277 = &((org$frostlang$frostc$Type*) $tmp215)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp278 = *$tmp277;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp279 = &((org$frostlang$frostc$Type*) $tmp215)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp280 = *$tmp279;
frost$core$Bit $tmp281 = (frost$core$Bit) {$tmp280 != NULL};
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block52; else goto block53;
block53:;
frost$core$Int $tmp283 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s284, $tmp283);
abort(); // unreachable
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp285 = &((org$frostlang$frostc$Type*) $tmp215)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp286 = *$tmp285;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
ITable* $tmp287 = ((frost$collections$CollectionView*) $tmp286)->$class->itable;
while ($tmp287->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp287 = $tmp287->next;
}
$fn289 $tmp288 = $tmp287->methods[0];
frost$core$Int $tmp290 = $tmp288(((frost$collections$CollectionView*) $tmp286));
frost$core$Int $tmp291 = (frost$core$Int) {1u};
int64_t $tmp292 = $tmp290.value;
int64_t $tmp293 = $tmp291.value;
int64_t $tmp294 = $tmp292 - $tmp293;
frost$core$Int $tmp295 = (frost$core$Int) {$tmp294};
frost$core$Object* $tmp296 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp278, $tmp295);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp296)));
frost$core$Frost$unref$frost$core$Object$Q($tmp296);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp204, ((org$frostlang$frostc$Type*) $tmp296));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp296)));
frost$core$Frost$unref$frost$core$Object$Q($tmp215);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
org$frostlang$frostc$Type* $tmp297 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp298 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp204;
block33:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:179
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp299 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp300 = *(&local15);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Analyzer.frost:179:46
org$frostlang$frostc$Type$Kind* $tmp301 = &$tmp300->typeKind;
org$frostlang$frostc$Type$Kind $tmp302 = *$tmp301;
org$frostlang$frostc$Type$Kind$wrapper* $tmp303;
$tmp303 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp303->value = $tmp302;
frost$core$Int $tmp304 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp305 = &(&local25)->$rawValue;
*$tmp305 = $tmp304;
org$frostlang$frostc$Type$Kind $tmp306 = *(&local25);
*(&local24) = $tmp306;
org$frostlang$frostc$Type$Kind $tmp307 = *(&local24);
org$frostlang$frostc$Type$Kind$wrapper* $tmp308;
$tmp308 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp308->value = $tmp307;
ITable* $tmp309 = ((frost$core$Equatable*) $tmp303)->$class->itable;
while ($tmp309->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp309 = $tmp309->next;
}
$fn311 $tmp310 = $tmp309->methods[0];
frost$core$Bit $tmp312 = $tmp310(((frost$core$Equatable*) $tmp303), ((frost$core$Equatable*) $tmp308));
bool $tmp313 = $tmp312.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp308)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp303)));
if ($tmp313) goto block55; else goto block59;
block59:;
org$frostlang$frostc$Type$Kind* $tmp314 = &$tmp300->typeKind;
org$frostlang$frostc$Type$Kind $tmp315 = *$tmp314;
org$frostlang$frostc$Type$Kind$wrapper* $tmp316;
$tmp316 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp316->value = $tmp315;
frost$core$Int $tmp317 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp318 = &(&local27)->$rawValue;
*$tmp318 = $tmp317;
org$frostlang$frostc$Type$Kind $tmp319 = *(&local27);
*(&local26) = $tmp319;
org$frostlang$frostc$Type$Kind $tmp320 = *(&local26);
org$frostlang$frostc$Type$Kind$wrapper* $tmp321;
$tmp321 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp321->value = $tmp320;
ITable* $tmp322 = ((frost$core$Equatable*) $tmp316)->$class->itable;
while ($tmp322->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp322 = $tmp322->next;
}
$fn324 $tmp323 = $tmp322->methods[0];
frost$core$Bit $tmp325 = $tmp323(((frost$core$Equatable*) $tmp316), ((frost$core$Equatable*) $tmp321));
bool $tmp326 = $tmp325.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp321)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp316)));
if ($tmp326) goto block55; else goto block58;
block58:;
org$frostlang$frostc$Type$Kind* $tmp327 = &$tmp300->typeKind;
org$frostlang$frostc$Type$Kind $tmp328 = *$tmp327;
org$frostlang$frostc$Type$Kind$wrapper* $tmp329;
$tmp329 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp329->value = $tmp328;
frost$core$Int $tmp330 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp331 = &(&local29)->$rawValue;
*$tmp331 = $tmp330;
org$frostlang$frostc$Type$Kind $tmp332 = *(&local29);
*(&local28) = $tmp332;
org$frostlang$frostc$Type$Kind $tmp333 = *(&local28);
org$frostlang$frostc$Type$Kind$wrapper* $tmp334;
$tmp334 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp334->value = $tmp333;
ITable* $tmp335 = ((frost$core$Equatable*) $tmp329)->$class->itable;
while ($tmp335->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp335 = $tmp335->next;
}
$fn337 $tmp336 = $tmp335->methods[0];
frost$core$Bit $tmp338 = $tmp336(((frost$core$Equatable*) $tmp329), ((frost$core$Equatable*) $tmp334));
bool $tmp339 = $tmp338.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp334)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp329)));
if ($tmp339) goto block55; else goto block57;
block57:;
org$frostlang$frostc$Type$Kind* $tmp340 = &$tmp300->typeKind;
org$frostlang$frostc$Type$Kind $tmp341 = *$tmp340;
org$frostlang$frostc$Type$Kind$wrapper* $tmp342;
$tmp342 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp342->value = $tmp341;
frost$core$Int $tmp343 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp344 = &(&local31)->$rawValue;
*$tmp344 = $tmp343;
org$frostlang$frostc$Type$Kind $tmp345 = *(&local31);
*(&local30) = $tmp345;
org$frostlang$frostc$Type$Kind $tmp346 = *(&local30);
org$frostlang$frostc$Type$Kind$wrapper* $tmp347;
$tmp347 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp347->value = $tmp346;
ITable* $tmp348 = ((frost$core$Equatable*) $tmp342)->$class->itable;
while ($tmp348->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp348 = $tmp348->next;
}
$fn350 $tmp349 = $tmp348->methods[0];
frost$core$Bit $tmp351 = $tmp349(((frost$core$Equatable*) $tmp342), ((frost$core$Equatable*) $tmp347));
bool $tmp352 = $tmp351.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp347)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp342)));
if ($tmp352) goto block55; else goto block56;
block56:;
frost$core$Int $tmp353 = (frost$core$Int) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s354, $tmp353, &$s355);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp356 = &$tmp300->_subtypes;
org$frostlang$frostc$FixedArray* $tmp357 = *$tmp356;
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357 != NULL};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block65; else goto block66;
block66:;
frost$core$Int $tmp360 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s361, $tmp360);
abort(); // unreachable
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp362 = &$tmp300->_subtypes;
org$frostlang$frostc$FixedArray* $tmp363 = *$tmp362;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp364 = &$tmp300->_subtypes;
org$frostlang$frostc$FixedArray* $tmp365 = *$tmp364;
frost$core$Bit $tmp366 = (frost$core$Bit) {$tmp365 != NULL};
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block68; else goto block69;
block69:;
frost$core$Int $tmp368 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s369, $tmp368);
abort(); // unreachable
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp370 = &$tmp300->_subtypes;
org$frostlang$frostc$FixedArray* $tmp371 = *$tmp370;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
ITable* $tmp372 = ((frost$collections$CollectionView*) $tmp371)->$class->itable;
while ($tmp372->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp372 = $tmp372->next;
}
$fn374 $tmp373 = $tmp372->methods[0];
frost$core$Int $tmp375 = $tmp373(((frost$collections$CollectionView*) $tmp371));
frost$core$Int $tmp376 = (frost$core$Int) {1u};
int64_t $tmp377 = $tmp375.value;
int64_t $tmp378 = $tmp376.value;
int64_t $tmp379 = $tmp377 - $tmp378;
frost$core$Int $tmp380 = (frost$core$Int) {$tmp379};
frost$core$Object* $tmp381 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp363, $tmp380);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp381)));
frost$core$Frost$unref$frost$core$Object$Q($tmp381);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp299, ((org$frostlang$frostc$Type*) $tmp381));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp381)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
org$frostlang$frostc$Type* $tmp382 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp383 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp299;
block32:;
org$frostlang$frostc$Type* $tmp384 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp385 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block29:;
frost$core$Int $tmp386 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:182:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp387 = $tmp38.value;
int64_t $tmp388 = $tmp386.value;
bool $tmp389 = $tmp387 == $tmp388;
frost$core$Bit $tmp390 = (frost$core$Bit) {$tmp389};
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block70; else goto block71;
block70:;
org$frostlang$frostc$Position* $tmp392 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp393 = *$tmp392;
org$frostlang$frostc$IR$Value** $tmp394 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp395 = *$tmp394;
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
org$frostlang$frostc$IR$Value* $tmp396 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local32) = $tmp395;
org$frostlang$frostc$FieldDecl** $tmp397 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp398 = *$tmp397;
*(&local33) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
org$frostlang$frostc$FieldDecl* $tmp399 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local33) = $tmp398;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:183
org$frostlang$frostc$FieldDecl* $tmp400 = *(&local33);
frost$core$Weak** $tmp401 = &$tmp400->owner;
frost$core$Weak* $tmp402 = *$tmp401;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Analyzer.frost:183:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp403 = &$tmp402->_valid;
frost$core$Bit $tmp404 = *$tmp403;
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block78; else goto block79;
block79:;
frost$core$Int $tmp406 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s407, $tmp406);
abort(); // unreachable
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp408 = &$tmp402->value;
frost$core$Object* $tmp409 = *$tmp408;
frost$core$Frost$ref$frost$core$Object$Q($tmp409);
org$frostlang$frostc$Type** $tmp410 = &((org$frostlang$frostc$ClassDecl*) $tmp409)->type;
org$frostlang$frostc$Type* $tmp411 = *$tmp410;
org$frostlang$frostc$Compiler** $tmp412 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp413 = *$tmp412;
org$frostlang$frostc$Type** $tmp414 = &$tmp413->BIT_TYPE;
org$frostlang$frostc$Type* $tmp415 = *$tmp414;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:183:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp416 = &((org$frostlang$frostc$Symbol*) $tmp411)->name;
frost$core$String* $tmp417 = *$tmp416;
frost$core$String** $tmp418 = &((org$frostlang$frostc$Symbol*) $tmp415)->name;
frost$core$String* $tmp419 = *$tmp418;
frost$core$Bit $tmp420 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp417, $tmp419);
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block81; else goto block82;
block81:;
org$frostlang$frostc$Type$Kind* $tmp422 = &$tmp411->typeKind;
org$frostlang$frostc$Type$Kind $tmp423 = *$tmp422;
org$frostlang$frostc$Type$Kind$wrapper* $tmp424;
$tmp424 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp424->value = $tmp423;
org$frostlang$frostc$Type$Kind* $tmp425 = &$tmp415->typeKind;
org$frostlang$frostc$Type$Kind $tmp426 = *$tmp425;
org$frostlang$frostc$Type$Kind$wrapper* $tmp427;
$tmp427 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp427->value = $tmp426;
ITable* $tmp428 = ((frost$core$Equatable*) $tmp424)->$class->itable;
while ($tmp428->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp428 = $tmp428->next;
}
$fn430 $tmp429 = $tmp428->methods[0];
frost$core$Bit $tmp431 = $tmp429(((frost$core$Equatable*) $tmp424), ((frost$core$Equatable*) $tmp427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp427)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp424)));
*(&local34) = $tmp431;
goto block83;
block82:;
*(&local34) = $tmp420;
goto block83;
block83:;
frost$core$Bit $tmp432 = *(&local34);
bool $tmp433 = $tmp432.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp409);
if ($tmp433) goto block73; else goto block75;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:184
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp434 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp435 = *(&local33);
org$frostlang$frostc$Type** $tmp436 = &$tmp435->type;
org$frostlang$frostc$Type* $tmp437 = *$tmp436;
org$frostlang$frostc$IR$Value* $tmp438 = *(&local32);
$fn440 $tmp439 = ($fn440) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp441 = $tmp439(param0, $tmp438, param2);
frost$collections$ListView** $tmp442 = &$tmp441->nonNullImplications;
frost$collections$ListView* $tmp443 = *$tmp442;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp434, $tmp437, $tmp443);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
org$frostlang$frostc$FieldDecl* $tmp444 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
*(&local33) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp445 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp434;
block75:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:187
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp446 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp447 = *(&local33);
org$frostlang$frostc$Type** $tmp448 = &$tmp447->type;
org$frostlang$frostc$Type* $tmp449 = *$tmp448;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp446, $tmp449);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
org$frostlang$frostc$FieldDecl* $tmp450 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local33) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp451 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp446;
block74:;
org$frostlang$frostc$FieldDecl* $tmp452 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local33) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp453 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block71:;
frost$core$Int $tmp454 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:190:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp455 = $tmp38.value;
int64_t $tmp456 = $tmp454.value;
bool $tmp457 = $tmp455 == $tmp456;
frost$core$Bit $tmp458 = (frost$core$Bit) {$tmp457};
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block84; else goto block85;
block84:;
org$frostlang$frostc$Position* $tmp460 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp461 = *$tmp460;
org$frostlang$frostc$IR$Value** $tmp462 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp463 = *$tmp462;
org$frostlang$frostc$ChoiceCase** $tmp464 = (org$frostlang$frostc$ChoiceCase**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp465 = *$tmp464;
*(&local35) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
org$frostlang$frostc$ChoiceCase* $tmp466 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
*(&local35) = $tmp465;
frost$core$Int* $tmp467 = (frost$core$Int*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 40);
frost$core$Int $tmp468 = *$tmp467;
*(&local36) = $tmp468;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:191
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp469 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp470 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp471 = *$tmp470;
org$frostlang$frostc$ChoiceCase* $tmp472 = *(&local35);
frost$collections$Array** $tmp473 = &$tmp472->fields;
frost$collections$Array* $tmp474 = *$tmp473;
frost$core$Int $tmp475 = *(&local36);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:191:72
frost$core$Int $tmp476 = (frost$core$Int) {0u};
int64_t $tmp477 = $tmp475.value;
int64_t $tmp478 = $tmp476.value;
bool $tmp479 = $tmp477 >= $tmp478;
frost$core$Bit $tmp480 = (frost$core$Bit) {$tmp479};
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block90; else goto block89;
block90:;
ITable* $tmp482 = ((frost$collections$CollectionView*) $tmp474)->$class->itable;
while ($tmp482->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp482 = $tmp482->next;
}
$fn484 $tmp483 = $tmp482->methods[0];
frost$core$Int $tmp485 = $tmp483(((frost$collections$CollectionView*) $tmp474));
int64_t $tmp486 = $tmp475.value;
int64_t $tmp487 = $tmp485.value;
bool $tmp488 = $tmp486 < $tmp487;
frost$core$Bit $tmp489 = (frost$core$Bit) {$tmp488};
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block88; else goto block89;
block89:;
frost$core$Int $tmp491 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s492, $tmp491, &$s493);
abort(); // unreachable
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp494 = &$tmp474->data;
frost$core$Object** $tmp495 = *$tmp494;
frost$core$Int64 $tmp496 = frost$core$Int64$init$frost$core$Int($tmp475);
int64_t $tmp497 = $tmp496.value;
frost$core$Object* $tmp498 = $tmp495[$tmp497];
frost$core$Frost$ref$frost$core$Object$Q($tmp498);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Analyzer.frost:191:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:284
org$frostlang$frostc$Type** $tmp499 = &$tmp471->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp500 = *$tmp499;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp501 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp502 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp501, $tmp502);
frost$collections$Array$add$frost$collections$Array$T($tmp501, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp498)));
org$frostlang$frostc$Type* $tmp503 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp500, ((frost$collections$ListView*) $tmp501));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp469, $tmp503);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$Frost$unref$frost$core$Object$Q($tmp498);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
org$frostlang$frostc$ChoiceCase* $tmp504 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local35) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp469;
block85:;
frost$core$Int $tmp505 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:193:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp506 = $tmp38.value;
int64_t $tmp507 = $tmp505.value;
bool $tmp508 = $tmp506 == $tmp507;
frost$core$Bit $tmp509 = (frost$core$Bit) {$tmp508};
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp511 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp512 = *$tmp511;
org$frostlang$frostc$IR$Value** $tmp513 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp514 = *$tmp513;
org$frostlang$frostc$FieldDecl** $tmp515 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp516 = *$tmp515;
*(&local37) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
org$frostlang$frostc$FieldDecl* $tmp517 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local37) = $tmp516;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:194
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp518 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp519 = *(&local37);
org$frostlang$frostc$Type** $tmp520 = &$tmp519->type;
org$frostlang$frostc$Type* $tmp521 = *$tmp520;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp518, $tmp521);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
org$frostlang$frostc$FieldDecl* $tmp522 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local37) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp518;
block93:;
frost$core$Int $tmp523 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:196:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp524 = $tmp38.value;
int64_t $tmp525 = $tmp523.value;
bool $tmp526 = $tmp524 == $tmp525;
frost$core$Bit $tmp527 = (frost$core$Bit) {$tmp526};
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block95; else goto block96;
block95:;
org$frostlang$frostc$Position* $tmp529 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp530 = *$tmp529;
*(&local38) = $tmp530;
org$frostlang$frostc$IR$Value** $tmp531 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp532 = *$tmp531;
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
org$frostlang$frostc$IR$Value* $tmp533 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
*(&local39) = $tmp532;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:197
org$frostlang$frostc$IR$Value* $tmp534 = *(&local39);
$fn536 $tmp535 = ($fn536) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp537 = $tmp535(param0, $tmp534, param2);
*(&local40) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp538 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local40) = $tmp537;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:198
frost$core$Bit* $tmp539 = &param0->reportErrors;
frost$core$Bit $tmp540 = *$tmp539;
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block100; else goto block99;
block100:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp542 = *(&local40);
org$frostlang$frostc$Type** $tmp543 = &$tmp542->type;
org$frostlang$frostc$Type* $tmp544 = *$tmp543;
org$frostlang$frostc$Compiler** $tmp545 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp546 = *$tmp545;
org$frostlang$frostc$Type** $tmp547 = &$tmp546->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp548 = *$tmp547;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:198:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp549 = &((org$frostlang$frostc$Symbol*) $tmp544)->name;
frost$core$String* $tmp550 = *$tmp549;
frost$core$String** $tmp551 = &((org$frostlang$frostc$Symbol*) $tmp548)->name;
frost$core$String* $tmp552 = *$tmp551;
frost$core$Bit $tmp553 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp550, $tmp552);
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block102; else goto block103;
block102:;
org$frostlang$frostc$Type$Kind* $tmp555 = &$tmp544->typeKind;
org$frostlang$frostc$Type$Kind $tmp556 = *$tmp555;
org$frostlang$frostc$Type$Kind$wrapper* $tmp557;
$tmp557 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp557->value = $tmp556;
org$frostlang$frostc$Type$Kind* $tmp558 = &$tmp548->typeKind;
org$frostlang$frostc$Type$Kind $tmp559 = *$tmp558;
org$frostlang$frostc$Type$Kind$wrapper* $tmp560;
$tmp560 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp560->value = $tmp559;
ITable* $tmp561 = ((frost$core$Equatable*) $tmp557)->$class->itable;
while ($tmp561->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp561 = $tmp561->next;
}
$fn563 $tmp562 = $tmp561->methods[0];
frost$core$Bit $tmp564 = $tmp562(((frost$core$Equatable*) $tmp557), ((frost$core$Equatable*) $tmp560));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp560)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp557)));
*(&local41) = $tmp564;
goto block104;
block103:;
*(&local41) = $tmp553;
goto block104;
block104:;
frost$core$Bit $tmp565 = *(&local41);
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:199
org$frostlang$frostc$Compiler** $tmp567 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp568 = *$tmp567;
org$frostlang$frostc$Position $tmp569 = *(&local38);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp570;
$tmp570 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp570->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:199:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn572 $tmp571 = ($fn572) ((frost$core$Object*) $tmp570)->$class->vtable[0];
frost$core$String* $tmp573 = $tmp571(((frost$core$Object*) $tmp570));
frost$core$String* $tmp574 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s575, $tmp573);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
frost$core$String* $tmp576 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp574, &$s577);
org$frostlang$frostc$IR$Value* $tmp578 = *(&local39);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:199:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn580 $tmp579 = ($fn580) ((frost$core$Object*) $tmp578)->$class->vtable[0];
frost$core$String* $tmp581 = $tmp579(((frost$core$Object*) $tmp578));
frost$core$String* $tmp582 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp576, $tmp581);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
frost$core$String* $tmp583 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp582, &$s584);
org$frostlang$frostc$Compiler$warn$org$frostlang$frostc$Position$frost$core$String($tmp568, $tmp569, $tmp583);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
goto block99;
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:201
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp585 = *(&local40);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp586 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
*(&local40) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp587 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp585;
block96:;
frost$core$Int $tmp588 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:203:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp589 = $tmp38.value;
int64_t $tmp590 = $tmp588.value;
bool $tmp591 = $tmp589 == $tmp590;
frost$core$Bit $tmp592 = (frost$core$Bit) {$tmp591};
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block107; else goto block108;
block107:;
org$frostlang$frostc$Position* $tmp594 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp595 = *$tmp594;
org$frostlang$frostc$IR$Value** $tmp596 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp597 = *$tmp596;
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
org$frostlang$frostc$IR$Value* $tmp598 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local42) = $tmp597;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:204
org$frostlang$frostc$IR$Value* $tmp599 = *(&local42);
$fn601 $tmp600 = ($fn601) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp602 = $tmp600(param0, $tmp599, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
org$frostlang$frostc$IR$Value* $tmp603 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp602;
block108:;
frost$core$Int $tmp604 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:206:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp605 = $tmp38.value;
int64_t $tmp606 = $tmp604.value;
bool $tmp607 = $tmp605 == $tmp606;
frost$core$Bit $tmp608 = (frost$core$Bit) {$tmp607};
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block110; else goto block111;
block110:;
org$frostlang$frostc$Position* $tmp610 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp611 = *$tmp610;
org$frostlang$frostc$IR$Value** $tmp612 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp613 = *$tmp612;
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
org$frostlang$frostc$IR$Value* $tmp614 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local43) = $tmp613;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:207
org$frostlang$frostc$IR$Value* $tmp615 = *(&local43);
$fn617 $tmp616 = ($fn617) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp618 = $tmp616(param0, $tmp615, param2);
$fn620 $tmp619 = ($fn620) $tmp618->$class->vtable[4];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp621 = $tmp619($tmp618);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
org$frostlang$frostc$IR$Value* $tmp622 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp621;
block111:;
frost$core$Int $tmp623 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:209:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp624 = $tmp38.value;
int64_t $tmp625 = $tmp623.value;
bool $tmp626 = $tmp624 == $tmp625;
frost$core$Bit $tmp627 = (frost$core$Bit) {$tmp626};
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block113; else goto block114;
block113:;
org$frostlang$frostc$Position* $tmp629 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp630 = *$tmp629;
org$frostlang$frostc$IR$Value** $tmp631 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp632 = *$tmp631;
org$frostlang$frostc$Type** $tmp633 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$Type* $tmp634 = *$tmp633;
*(&local44) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
org$frostlang$frostc$Type* $tmp635 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
*(&local44) = $tmp634;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:210
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp636 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp637 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp638 = *$tmp637;
org$frostlang$frostc$Type* $tmp639 = *(&local44);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Analyzer.frost:210:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:284
org$frostlang$frostc$Type** $tmp640 = &$tmp638->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp641 = *$tmp640;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp642 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp643 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp642, $tmp643);
frost$collections$Array$add$frost$collections$Array$T($tmp642, ((frost$core$Object*) $tmp639));
org$frostlang$frostc$Type* $tmp644 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp641, ((frost$collections$ListView*) $tmp642));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp636, $tmp644);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
org$frostlang$frostc$Type* $tmp645 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
*(&local44) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp636;
block114:;
frost$core$Int $tmp646 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:212:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp647 = $tmp38.value;
int64_t $tmp648 = $tmp646.value;
bool $tmp649 = $tmp647 == $tmp648;
frost$core$Bit $tmp650 = (frost$core$Bit) {$tmp649};
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block117; else goto block118;
block117:;
org$frostlang$frostc$Position* $tmp652 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp653 = *$tmp652;
org$frostlang$frostc$IR$Value** $tmp654 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp655 = *$tmp654;
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
org$frostlang$frostc$IR$Value* $tmp656 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
*(&local45) = $tmp655;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:213
org$frostlang$frostc$IR$Value* $tmp657 = *(&local45);
$fn659 $tmp658 = ($fn659) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp660 = $tmp658(param0, $tmp657, param2);
*(&local46) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp661 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
*(&local46) = $tmp660;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:214
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp662 = *(&local46);
org$frostlang$frostc$Type** $tmp663 = &$tmp662->type;
org$frostlang$frostc$Type* $tmp664 = *$tmp663;
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:214:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:389
frost$core$String** $tmp665 = &((org$frostlang$frostc$Symbol*) $tmp664)->name;
frost$core$String* $tmp666 = *$tmp665;
frost$core$Bit $tmp667 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp666, &$s668);
bool $tmp669 = $tmp667.value;
if ($tmp669) goto block121; else goto block122;
block122:;
frost$core$Int $tmp670 = (frost$core$Int) {214u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s671, $tmp670);
abort(); // unreachable
block121:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:215
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp672 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp673 = *(&local46);
org$frostlang$frostc$Type** $tmp674 = &$tmp673->type;
org$frostlang$frostc$Type* $tmp675 = *$tmp674;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:215:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp676 = &$tmp675->_subtypes;
org$frostlang$frostc$FixedArray* $tmp677 = *$tmp676;
frost$core$Bit $tmp678 = (frost$core$Bit) {$tmp677 != NULL};
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block124; else goto block125;
block125:;
frost$core$Int $tmp680 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s681, $tmp680);
abort(); // unreachable
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp682 = &$tmp675->_subtypes;
org$frostlang$frostc$FixedArray* $tmp683 = *$tmp682;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
frost$core$Int $tmp684 = (frost$core$Int) {1u};
frost$core$Object* $tmp685 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp683, $tmp684);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp672, ((org$frostlang$frostc$Type*) $tmp685));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
frost$core$Frost$unref$frost$core$Object$Q($tmp685);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp686 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
*(&local46) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp687 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp672;
block118:;
frost$core$Int $tmp688 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:217:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp689 = $tmp38.value;
int64_t $tmp690 = $tmp688.value;
bool $tmp691 = $tmp689 == $tmp690;
frost$core$Bit $tmp692 = (frost$core$Bit) {$tmp691};
bool $tmp693 = $tmp692.value;
if ($tmp693) goto block126; else goto block127;
block126:;
org$frostlang$frostc$Position* $tmp694 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp695 = *$tmp694;
org$frostlang$frostc$IR$Value** $tmp696 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp697 = *$tmp696;
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
org$frostlang$frostc$IR$Value* $tmp698 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
*(&local47) = $tmp697;
org$frostlang$frostc$IR$Value** $tmp699 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp700 = *$tmp699;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:218
org$frostlang$frostc$IR$Value* $tmp701 = *(&local47);
$fn703 $tmp702 = ($fn703) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp704 = $tmp702(param0, $tmp701, param2);
*(&local48) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp705 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
*(&local48) = $tmp704;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:219
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp706 = *(&local48);
org$frostlang$frostc$Type** $tmp707 = &$tmp706->type;
org$frostlang$frostc$Type* $tmp708 = *$tmp707;
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:219:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:389
frost$core$String** $tmp709 = &((org$frostlang$frostc$Symbol*) $tmp708)->name;
frost$core$String* $tmp710 = *$tmp709;
frost$core$Bit $tmp711 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp710, &$s712);
bool $tmp713 = $tmp711.value;
if ($tmp713) goto block130; else goto block131;
block131:;
frost$core$Int $tmp714 = (frost$core$Int) {219u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s715, $tmp714);
abort(); // unreachable
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:220
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp716 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp717 = *(&local48);
org$frostlang$frostc$Type** $tmp718 = &$tmp717->type;
org$frostlang$frostc$Type* $tmp719 = *$tmp718;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:220:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp720 = &$tmp719->_subtypes;
org$frostlang$frostc$FixedArray* $tmp721 = *$tmp720;
frost$core$Bit $tmp722 = (frost$core$Bit) {$tmp721 != NULL};
bool $tmp723 = $tmp722.value;
if ($tmp723) goto block133; else goto block134;
block134:;
frost$core$Int $tmp724 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s725, $tmp724);
abort(); // unreachable
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp726 = &$tmp719->_subtypes;
org$frostlang$frostc$FixedArray* $tmp727 = *$tmp726;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
frost$core$Int $tmp728 = (frost$core$Int) {1u};
frost$core$Object* $tmp729 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp727, $tmp728);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp716, ((org$frostlang$frostc$Type*) $tmp729));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
frost$core$Frost$unref$frost$core$Object$Q($tmp729);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp730 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
*(&local48) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp731 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp716;
block127:;
frost$core$Int $tmp732 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:222:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp733 = $tmp38.value;
int64_t $tmp734 = $tmp732.value;
bool $tmp735 = $tmp733 == $tmp734;
frost$core$Bit $tmp736 = (frost$core$Bit) {$tmp735};
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block135; else goto block136;
block135:;
org$frostlang$frostc$Position* $tmp738 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp739 = *$tmp738;
org$frostlang$frostc$IR$Value** $tmp740 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp741 = *$tmp740;
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
org$frostlang$frostc$IR$Value* $tmp742 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local49) = $tmp741;
org$frostlang$frostc$IR$Value** $tmp743 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp744 = *$tmp743;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:223
org$frostlang$frostc$IR$Value* $tmp745 = *(&local49);
$fn747 $tmp746 = ($fn747) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp748 = $tmp746(param0, $tmp745, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
org$frostlang$frostc$IR$Value* $tmp749 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp748;
block136:;
frost$core$Int $tmp750 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:225:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp751 = $tmp38.value;
int64_t $tmp752 = $tmp750.value;
bool $tmp753 = $tmp751 == $tmp752;
frost$core$Bit $tmp754 = (frost$core$Bit) {$tmp753};
bool $tmp755 = $tmp754.value;
if ($tmp755) goto block138; else goto block139;
block138:;
org$frostlang$frostc$Position* $tmp756 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp757 = *$tmp756;
org$frostlang$frostc$IR$Value** $tmp758 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp759 = *$tmp758;
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
org$frostlang$frostc$IR$Value* $tmp760 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local50) = $tmp759;
org$frostlang$frostc$IR$Value** $tmp761 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp762 = *$tmp761;
org$frostlang$frostc$IR$Value** $tmp763 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 40);
org$frostlang$frostc$IR$Value* $tmp764 = *$tmp763;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:226
org$frostlang$frostc$IR$Value* $tmp765 = *(&local50);
$fn767 $tmp766 = ($fn767) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp768 = $tmp766(param0, $tmp765, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
org$frostlang$frostc$IR$Value* $tmp769 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp768;
block139:;
frost$core$Int $tmp770 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:228:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp771 = $tmp38.value;
int64_t $tmp772 = $tmp770.value;
bool $tmp773 = $tmp771 == $tmp772;
frost$core$Bit $tmp774 = (frost$core$Bit) {$tmp773};
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block141; else goto block142;
block141:;
org$frostlang$frostc$Position* $tmp776 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp777 = *$tmp776;
org$frostlang$frostc$MethodDecl** $tmp778 = (org$frostlang$frostc$MethodDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$MethodDecl* $tmp779 = *$tmp778;
*(&local51) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
org$frostlang$frostc$MethodDecl* $tmp780 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
*(&local51) = $tmp779;
org$frostlang$frostc$FixedArray** $tmp781 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp782 = *$tmp781;
*(&local52) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
org$frostlang$frostc$FixedArray* $tmp783 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
*(&local52) = $tmp782;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:229
org$frostlang$frostc$MethodDecl* $tmp784 = *(&local51);
org$frostlang$frostc$Type** $tmp785 = &$tmp784->returnType;
org$frostlang$frostc$Type* $tmp786 = *$tmp785;
org$frostlang$frostc$Compiler** $tmp787 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp788 = *$tmp787;
org$frostlang$frostc$Type** $tmp789 = &$tmp788->BIT_TYPE;
org$frostlang$frostc$Type* $tmp790 = *$tmp789;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:229:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp791 = &((org$frostlang$frostc$Symbol*) $tmp786)->name;
frost$core$String* $tmp792 = *$tmp791;
frost$core$String** $tmp793 = &((org$frostlang$frostc$Symbol*) $tmp790)->name;
frost$core$String* $tmp794 = *$tmp793;
frost$core$Bit $tmp795 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp792, $tmp794);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block148; else goto block149;
block148:;
org$frostlang$frostc$Type$Kind* $tmp797 = &$tmp786->typeKind;
org$frostlang$frostc$Type$Kind $tmp798 = *$tmp797;
org$frostlang$frostc$Type$Kind$wrapper* $tmp799;
$tmp799 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp799->value = $tmp798;
org$frostlang$frostc$Type$Kind* $tmp800 = &$tmp790->typeKind;
org$frostlang$frostc$Type$Kind $tmp801 = *$tmp800;
org$frostlang$frostc$Type$Kind$wrapper* $tmp802;
$tmp802 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp802->value = $tmp801;
ITable* $tmp803 = ((frost$core$Equatable*) $tmp799)->$class->itable;
while ($tmp803->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp803 = $tmp803->next;
}
$fn805 $tmp804 = $tmp803->methods[0];
frost$core$Bit $tmp806 = $tmp804(((frost$core$Equatable*) $tmp799), ((frost$core$Equatable*) $tmp802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp802)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp799)));
*(&local53) = $tmp806;
goto block150;
block149:;
*(&local53) = $tmp795;
goto block150;
block150:;
frost$core$Bit $tmp807 = *(&local53);
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block144; else goto block146;
block144:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:230
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp809 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$MethodDecl* $tmp810 = *(&local51);
org$frostlang$frostc$Type** $tmp811 = &$tmp810->returnType;
org$frostlang$frostc$Type* $tmp812 = *$tmp811;
org$frostlang$frostc$FixedArray* $tmp813 = *(&local52);
frost$core$Int $tmp814 = (frost$core$Int) {0u};
frost$core$Object* $tmp815 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp813, $tmp814);
$fn817 $tmp816 = ($fn817) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp818 = $tmp816(param0, ((org$frostlang$frostc$IR$Value*) $tmp815), param2);
frost$collections$ListView** $tmp819 = &$tmp818->nonNullImplications;
frost$collections$ListView* $tmp820 = *$tmp819;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp809, $tmp812, $tmp820);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
frost$core$Frost$unref$frost$core$Object$Q($tmp815);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
org$frostlang$frostc$FixedArray* $tmp821 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
*(&local52) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp822 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
*(&local51) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp809;
block146:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:233
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp823 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$MethodDecl* $tmp824 = *(&local51);
org$frostlang$frostc$Type** $tmp825 = &$tmp824->returnType;
org$frostlang$frostc$Type* $tmp826 = *$tmp825;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp823, $tmp826);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
org$frostlang$frostc$FixedArray* $tmp827 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
*(&local52) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp828 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
*(&local51) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp823;
block145:;
org$frostlang$frostc$FixedArray* $tmp829 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
*(&local52) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp830 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local51) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block1;
block142:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:237
frost$core$Int $tmp831 = (frost$core$Int) {237u};
frost$collections$HashMap** $tmp832 = &param0->statements;
frost$collections$HashMap* $tmp833 = *$tmp832;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp834;
$tmp834 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp834->value = param1;
frost$core$Object* $tmp835 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp833, ((frost$collections$Key*) $tmp834));
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:237:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn837 $tmp836 = ($fn837) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp835))->$class->vtable[0];
frost$core$String* $tmp838 = $tmp836(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp835)));
frost$core$String* $tmp839 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s840, $tmp838);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
frost$core$String* $tmp841 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp839, &$s842);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s843, $tmp831, $tmp841);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q($tmp835);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp834)));
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
goto block152;
block152:;

}
org$frostlang$frostc$pass$Analyzer$DataFlowValue* org$frostlang$frostc$pass$Analyzer$getValue$org$frostlang$frostc$IR$Value$org$frostlang$frostc$pass$Analyzer$State$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$pass$Analyzer$State* param2) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
frost$core$Int local2;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$IR$Statement$ID local6;
org$frostlang$frostc$Type* local7 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:243
frost$core$Int* $tmp844 = &param1->$rawValue;
frost$core$Int $tmp845 = *$tmp844;
frost$core$Int $tmp846 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:244:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp847 = $tmp845.value;
int64_t $tmp848 = $tmp846.value;
bool $tmp849 = $tmp847 == $tmp848;
frost$core$Bit $tmp850 = (frost$core$Bit) {$tmp849};
bool $tmp851 = $tmp850.value;
if ($tmp851) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp852 = (frost$core$Bit*) (param1->$data + 0);
frost$core$Bit $tmp853 = *$tmp852;
org$frostlang$frostc$Type** $tmp854 = (org$frostlang$frostc$Type**) (param1->$data + 1);
org$frostlang$frostc$Type* $tmp855 = *$tmp854;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
org$frostlang$frostc$Type* $tmp856 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
*(&local0) = $tmp855;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:245
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp857 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp858 = *(&local0);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp857, $tmp858);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
org$frostlang$frostc$Type* $tmp859 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp857;
block3:;
frost$core$Int $tmp860 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:247:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp861 = $tmp845.value;
int64_t $tmp862 = $tmp860.value;
bool $tmp863 = $tmp861 == $tmp862;
frost$core$Bit $tmp864 = (frost$core$Bit) {$tmp863};
bool $tmp865 = $tmp864.value;
if ($tmp865) goto block5; else goto block6;
block5:;
frost$core$UInt64* $tmp866 = (frost$core$UInt64*) (param1->$data + 0);
frost$core$UInt64 $tmp867 = *$tmp866;
org$frostlang$frostc$Type** $tmp868 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp869 = *$tmp868;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
org$frostlang$frostc$Type* $tmp870 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local1) = $tmp869;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:248
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp871 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp872 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp871, $tmp872);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
org$frostlang$frostc$Type* $tmp873 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp871;
block6:;
frost$core$Int $tmp874 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:250:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp875 = $tmp845.value;
int64_t $tmp876 = $tmp874.value;
bool $tmp877 = $tmp875 == $tmp876;
frost$core$Bit $tmp878 = (frost$core$Bit) {$tmp877};
bool $tmp879 = $tmp878.value;
if ($tmp879) goto block8; else goto block9;
block8:;
frost$core$Int* $tmp880 = (frost$core$Int*) (param1->$data + 0);
frost$core$Int $tmp881 = *$tmp880;
*(&local2) = $tmp881;
org$frostlang$frostc$Type** $tmp882 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp883 = *$tmp882;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:251
frost$collections$Array** $tmp884 = &param2->locals;
frost$collections$Array* $tmp885 = *$tmp884;
frost$core$Int $tmp886 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:251:32
frost$core$Int $tmp887 = (frost$core$Int) {0u};
int64_t $tmp888 = $tmp886.value;
int64_t $tmp889 = $tmp887.value;
bool $tmp890 = $tmp888 >= $tmp889;
frost$core$Bit $tmp891 = (frost$core$Bit) {$tmp890};
bool $tmp892 = $tmp891.value;
if ($tmp892) goto block14; else goto block13;
block14:;
ITable* $tmp893 = ((frost$collections$CollectionView*) $tmp885)->$class->itable;
while ($tmp893->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp893 = $tmp893->next;
}
$fn895 $tmp894 = $tmp893->methods[0];
frost$core$Int $tmp896 = $tmp894(((frost$collections$CollectionView*) $tmp885));
int64_t $tmp897 = $tmp886.value;
int64_t $tmp898 = $tmp896.value;
bool $tmp899 = $tmp897 < $tmp898;
frost$core$Bit $tmp900 = (frost$core$Bit) {$tmp899};
bool $tmp901 = $tmp900.value;
if ($tmp901) goto block12; else goto block13;
block13:;
frost$core$Int $tmp902 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s903, $tmp902, &$s904);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp905 = &$tmp885->data;
frost$core$Object** $tmp906 = *$tmp905;
frost$core$Int64 $tmp907 = frost$core$Int64$init$frost$core$Int($tmp886);
int64_t $tmp908 = $tmp907.value;
frost$core$Object* $tmp909 = $tmp906[$tmp908];
frost$core$Frost$ref$frost$core$Object$Q($tmp909);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp909)));
frost$core$Frost$unref$frost$core$Object$Q($tmp909);
return ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp909);
block9:;
frost$core$Int $tmp910 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:253:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp911 = $tmp845.value;
int64_t $tmp912 = $tmp910.value;
bool $tmp913 = $tmp911 == $tmp912;
frost$core$Bit $tmp914 = (frost$core$Bit) {$tmp913};
bool $tmp915 = $tmp914.value;
if ($tmp915) goto block15; else goto block16;
block15:;
org$frostlang$frostc$Type** $tmp916 = (org$frostlang$frostc$Type**) (param1->$data + 0);
org$frostlang$frostc$Type* $tmp917 = *$tmp916;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
org$frostlang$frostc$Type* $tmp918 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
*(&local3) = $tmp917;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:254
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp919 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp920 = *(&local3);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp919, $tmp920);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
org$frostlang$frostc$Type* $tmp921 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp919;
block16:;
frost$core$Int $tmp922 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:256:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp923 = $tmp845.value;
int64_t $tmp924 = $tmp922.value;
bool $tmp925 = $tmp923 == $tmp924;
frost$core$Bit $tmp926 = (frost$core$Bit) {$tmp925};
bool $tmp927 = $tmp926.value;
if ($tmp927) goto block18; else goto block19;
block18:;
frost$core$Int* $tmp928 = (frost$core$Int*) (param1->$data + 0);
frost$core$Int $tmp929 = *$tmp928;
org$frostlang$frostc$Type** $tmp930 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp931 = *$tmp930;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
org$frostlang$frostc$Type* $tmp932 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
*(&local4) = $tmp931;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:257
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp933 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp934 = *(&local4);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp933, $tmp934);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
org$frostlang$frostc$Type* $tmp935 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp933;
block19:;
frost$core$Int $tmp936 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:259:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp937 = $tmp845.value;
int64_t $tmp938 = $tmp936.value;
bool $tmp939 = $tmp937 == $tmp938;
frost$core$Bit $tmp940 = (frost$core$Bit) {$tmp939};
bool $tmp941 = $tmp940.value;
if ($tmp941) goto block21; else goto block22;
block21:;
frost$core$Real64* $tmp942 = (frost$core$Real64*) (param1->$data + 0);
frost$core$Real64 $tmp943 = *$tmp942;
org$frostlang$frostc$Type** $tmp944 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp945 = *$tmp944;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
org$frostlang$frostc$Type* $tmp946 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
*(&local5) = $tmp945;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:260
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp947 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp948 = *(&local5);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp947, $tmp948);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
org$frostlang$frostc$Type* $tmp949 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return $tmp947;
block22:;
frost$core$Int $tmp950 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:262:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp951 = $tmp845.value;
int64_t $tmp952 = $tmp950.value;
bool $tmp953 = $tmp951 == $tmp952;
frost$core$Bit $tmp954 = (frost$core$Bit) {$tmp953};
bool $tmp955 = $tmp954.value;
if ($tmp955) goto block24; else goto block25;
block24:;
org$frostlang$frostc$IR$Statement$ID* $tmp956 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp957 = *$tmp956;
*(&local6) = $tmp957;
org$frostlang$frostc$Type** $tmp958 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp959 = *$tmp958;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:263
org$frostlang$frostc$IR$Statement$ID $tmp960 = *(&local6);
$fn962 $tmp961 = ($fn962) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp963 = $tmp961(param0, $tmp960, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
return $tmp963;
block25:;
frost$core$Int $tmp964 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:265:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp965 = $tmp845.value;
int64_t $tmp966 = $tmp964.value;
bool $tmp967 = $tmp965 == $tmp966;
frost$core$Bit $tmp968 = (frost$core$Bit) {$tmp967};
bool $tmp969 = $tmp968.value;
if ($tmp969) goto block27; else goto block28;
block27:;
frost$core$String** $tmp970 = (frost$core$String**) (param1->$data + 0);
frost$core$String* $tmp971 = *$tmp970;
org$frostlang$frostc$Type** $tmp972 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp973 = *$tmp972;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
org$frostlang$frostc$Type* $tmp974 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
*(&local7) = $tmp973;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:266
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp975 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp976 = *(&local7);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp975, $tmp976);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
org$frostlang$frostc$Type* $tmp977 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp975;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:269
frost$core$Int $tmp978 = (frost$core$Int) {269u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:269:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn980 $tmp979 = ($fn980) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp981 = $tmp979(((frost$core$Object*) param1));
frost$core$String* $tmp982 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s983, $tmp981);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
frost$core$String* $tmp984 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp982, &$s985);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s986, $tmp978, $tmp984);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
abort(); // unreachable
block1:;
goto block31;
block31:;

}
void org$frostlang$frostc$pass$Analyzer$propagate$org$frostlang$frostc$pass$Analyzer$BlockExit$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$pass$Analyzer$BlockExit param1, org$frostlang$frostc$IR$Block$ID param2) {

frost$collections$HashSet* local0 = NULL;
frost$core$Bit local1;
frost$collections$Iterator* local2 = NULL;
org$frostlang$frostc$pass$Analyzer$State* local3 = NULL;
org$frostlang$frostc$pass$Analyzer$BlockExit local4;
frost$core$Bit local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:275
frost$collections$HashMap** $tmp987 = &param0->predecessors;
frost$collections$HashMap* $tmp988 = *$tmp987;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp989;
$tmp989 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp989->value = param2;
frost$core$Object* $tmp990 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp988, ((frost$collections$Key*) $tmp989));
*(&local0) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp990)));
frost$collections$HashSet* $tmp991 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
*(&local0) = ((frost$collections$HashSet*) $tmp990);
frost$core$Frost$unref$frost$core$Object$Q($tmp990);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp989)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:276
frost$collections$HashSet* $tmp992 = *(&local0);
frost$core$Bit $tmp993 = (frost$core$Bit) {$tmp992 == NULL};
bool $tmp994 = $tmp993.value;
if ($tmp994) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:277
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp995 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp995);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$collections$HashSet* $tmp996 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
*(&local0) = $tmp995;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:278
frost$collections$HashMap** $tmp997 = &param0->predecessors;
frost$collections$HashMap* $tmp998 = *$tmp997;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp999;
$tmp999 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp999->value = param2;
frost$collections$HashSet* $tmp1000 = *(&local0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp998, ((frost$collections$Key*) $tmp999), ((frost$core$Object*) $tmp1000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp999)));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:280
frost$collections$HashSet* $tmp1001 = *(&local0);
org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper* $tmp1002;
$tmp1002 = (org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$BlockExit$wrapperclass);
$tmp1002->value = param1;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:280:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp1003 = &$tmp1001->contents;
frost$collections$HashMap* $tmp1004 = *$tmp1003;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1004, ((frost$collections$Key*) $tmp1002), ((frost$core$Object*) ((frost$collections$Key*) $tmp1002)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1002)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:281
frost$core$Bit $tmp1005 = (frost$core$Bit) {false};
*(&local1) = $tmp1005;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:282
frost$collections$HashSet* $tmp1006 = *(&local0);
ITable* $tmp1007 = ((frost$collections$Iterable*) $tmp1006)->$class->itable;
while ($tmp1007->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1007 = $tmp1007->next;
}
$fn1009 $tmp1008 = $tmp1007->methods[0];
frost$collections$Iterator* $tmp1010 = $tmp1008(((frost$collections$Iterable*) $tmp1006));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
frost$collections$Iterator* $tmp1011 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
*(&local2) = $tmp1010;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:283
frost$collections$HashMap** $tmp1012 = &param0->entryStates;
frost$collections$HashMap* $tmp1013 = *$tmp1012;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1014;
$tmp1014 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1014->value = param2;
frost$core$Object* $tmp1015 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1013, ((frost$collections$Key*) $tmp1014));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1015)));
org$frostlang$frostc$pass$Analyzer$State* $tmp1016 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1015);
frost$core$Frost$unref$frost$core$Object$Q($tmp1015);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1014)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:284
org$frostlang$frostc$pass$Analyzer$State* $tmp1017 = *(&local3);
frost$core$Bit $tmp1018 = (frost$core$Bit) {$tmp1017 == NULL};
bool $tmp1019 = $tmp1018.value;
if ($tmp1019) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:285
frost$collections$Iterator* $tmp1020 = *(&local2);
ITable* $tmp1021 = $tmp1020->$class->itable;
while ($tmp1021->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1021 = $tmp1021->next;
}
$fn1023 $tmp1022 = $tmp1021->methods[1];
frost$core$Object* $tmp1024 = $tmp1022($tmp1020);
$fn1026 $tmp1025 = ($fn1026) param0->$class->vtable[7];
org$frostlang$frostc$pass$Analyzer$State* $tmp1027 = $tmp1025(param0, ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) $tmp1024)->value);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
org$frostlang$frostc$pass$Analyzer$State* $tmp1028 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
*(&local3) = $tmp1027;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
frost$core$Frost$unref$frost$core$Object$Q($tmp1024);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:286
frost$collections$HashMap** $tmp1029 = &param0->entryStates;
frost$collections$HashMap* $tmp1030 = *$tmp1029;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1031;
$tmp1031 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1031->value = param2;
org$frostlang$frostc$pass$Analyzer$State* $tmp1032 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1030, ((frost$collections$Key*) $tmp1031), ((frost$core$Object*) $tmp1032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1031)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:287
frost$core$Bit $tmp1033 = (frost$core$Bit) {true};
*(&local1) = $tmp1033;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:289
frost$collections$Iterator* $tmp1034 = *(&local2);
goto block6;
block6:;
ITable* $tmp1035 = $tmp1034->$class->itable;
while ($tmp1035->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1035 = $tmp1035->next;
}
$fn1037 $tmp1036 = $tmp1035->methods[0];
frost$core$Bit $tmp1038 = $tmp1036($tmp1034);
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block8; else goto block7;
block7:;
ITable* $tmp1040 = $tmp1034->$class->itable;
while ($tmp1040->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1040 = $tmp1040->next;
}
$fn1042 $tmp1041 = $tmp1040->methods[1];
frost$core$Object* $tmp1043 = $tmp1041($tmp1034);
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) $tmp1043)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:290
frost$core$Bit $tmp1044 = *(&local1);
bool $tmp1045 = $tmp1044.value;
if ($tmp1045) goto block9; else goto block10;
block9:;
*(&local5) = $tmp1044;
goto block11;
block10:;
org$frostlang$frostc$pass$Analyzer$State* $tmp1046 = *(&local3);
org$frostlang$frostc$Compiler** $tmp1047 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1048 = *$tmp1047;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1049 = *(&local4);
$fn1051 $tmp1050 = ($fn1051) param0->$class->vtable[7];
org$frostlang$frostc$pass$Analyzer$State* $tmp1052 = $tmp1050(param0, $tmp1049);
$fn1054 $tmp1053 = ($fn1054) $tmp1046->$class->vtable[2];
frost$core$Bit $tmp1055 = $tmp1053($tmp1046, $tmp1048, $tmp1052);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
*(&local5) = $tmp1055;
goto block11;
block11:;
frost$core$Bit $tmp1056 = *(&local5);
*(&local1) = $tmp1056;
frost$core$Frost$unref$frost$core$Object$Q($tmp1043);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:292
frost$core$Bit $tmp1057 = *(&local1);
bool $tmp1058 = $tmp1057.value;
if ($tmp1058) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:293
frost$collections$HashSet** $tmp1059 = &param0->worklist;
frost$collections$HashSet* $tmp1060 = *$tmp1059;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1061;
$tmp1061 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1061->value = param2;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:293:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp1062 = &$tmp1060->contents;
frost$collections$HashMap* $tmp1063 = *$tmp1062;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1063, ((frost$collections$Key*) $tmp1061), ((frost$core$Object*) ((frost$collections$Key*) $tmp1061)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1061)));
goto block13;
block13:;
org$frostlang$frostc$pass$Analyzer$State* $tmp1064 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
*(&local3) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$collections$Iterator* $tmp1065 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$collections$HashSet* $tmp1066 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
*(&local0) = ((frost$collections$HashSet*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$updateStateForExitIndex$org$frostlang$frostc$IR$Block$frost$core$Int$org$frostlang$frostc$pass$Analyzer$State(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Block* param1, frost$core$Int param2, org$frostlang$frostc$pass$Analyzer$State* param3) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local1 = NULL;
org$frostlang$frostc$Pair* local2 = NULL;
frost$core$Int local3;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:310
org$frostlang$frostc$LinkedList** $tmp1067 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp1068 = *$tmp1067;
$fn1070 $tmp1069 = ($fn1070) $tmp1068->$class->vtable[6];
frost$core$Object* $tmp1071 = $tmp1069($tmp1068);
frost$core$Int* $tmp1072 = &((org$frostlang$frostc$IR$Statement*) $tmp1071)->$rawValue;
frost$core$Int $tmp1073 = *$tmp1072;
frost$core$Int $tmp1074 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:311:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1075 = $tmp1073.value;
int64_t $tmp1076 = $tmp1074.value;
bool $tmp1077 = $tmp1075 == $tmp1076;
frost$core$Bit $tmp1078 = (frost$core$Bit) {$tmp1077};
bool $tmp1079 = $tmp1078.value;
if ($tmp1079) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1080 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1071)->$data + 0);
org$frostlang$frostc$Position $tmp1081 = *$tmp1080;
org$frostlang$frostc$IR$Value** $tmp1082 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1071)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1083 = *$tmp1082;
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
org$frostlang$frostc$IR$Value* $tmp1084 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
*(&local0) = $tmp1083;
org$frostlang$frostc$IR$Block$ID* $tmp1085 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1071)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp1086 = *$tmp1085;
org$frostlang$frostc$IR$Block$ID* $tmp1087 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1071)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp1088 = *$tmp1087;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:312
org$frostlang$frostc$IR$Value* $tmp1089 = *(&local0);
$fn1091 $tmp1090 = ($fn1091) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1092 = $tmp1090(param0, $tmp1089, param3);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1093 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
*(&local1) = $tmp1092;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:313
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1094 = *(&local1);
frost$collections$ListView** $tmp1095 = &$tmp1094->nonNullImplications;
frost$collections$ListView* $tmp1096 = *$tmp1095;
frost$core$Bit $tmp1097 = (frost$core$Bit) {$tmp1096 != NULL};
bool $tmp1098 = $tmp1097.value;
if ($tmp1098) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:314
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1099 = *(&local1);
frost$collections$ListView** $tmp1100 = &$tmp1099->nonNullImplications;
frost$collections$ListView* $tmp1101 = *$tmp1100;
ITable* $tmp1102 = ((frost$collections$Iterable*) $tmp1101)->$class->itable;
while ($tmp1102->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1102 = $tmp1102->next;
}
$fn1104 $tmp1103 = $tmp1102->methods[0];
frost$collections$Iterator* $tmp1105 = $tmp1103(((frost$collections$Iterable*) $tmp1101));
goto block7;
block7:;
ITable* $tmp1106 = $tmp1105->$class->itable;
while ($tmp1106->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1106 = $tmp1106->next;
}
$fn1108 $tmp1107 = $tmp1106->methods[0];
frost$core$Bit $tmp1109 = $tmp1107($tmp1105);
bool $tmp1110 = $tmp1109.value;
if ($tmp1110) goto block9; else goto block8;
block8:;
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp1111 = $tmp1105->$class->itable;
while ($tmp1111->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1111 = $tmp1111->next;
}
$fn1113 $tmp1112 = $tmp1111->methods[1];
frost$core$Object* $tmp1114 = $tmp1112($tmp1105);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) $tmp1114)));
org$frostlang$frostc$Pair* $tmp1115 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
*(&local2) = ((org$frostlang$frostc$Pair*) $tmp1114);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:315
org$frostlang$frostc$Pair* $tmp1116 = *(&local2);
frost$core$Object** $tmp1117 = &$tmp1116->second;
frost$core$Object* $tmp1118 = *$tmp1117;
frost$core$Int $tmp1119 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:315:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1120 = param2.value;
int64_t $tmp1121 = $tmp1119.value;
bool $tmp1122 = $tmp1120 == $tmp1121;
frost$core$Bit $tmp1123 = (frost$core$Bit) {$tmp1122};
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Analyzer.frost:315:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:25
bool $tmp1124 = ((frost$core$Bit$wrapper*) $tmp1118)->value.value;
bool $tmp1125 = $tmp1123.value;
bool $tmp1126 = $tmp1124 == $tmp1125;
frost$core$Bit $tmp1127 = (frost$core$Bit) {$tmp1126};
bool $tmp1128 = $tmp1127.value;
if ($tmp1128) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:316
org$frostlang$frostc$Pair* $tmp1129 = *(&local2);
frost$core$Object** $tmp1130 = &$tmp1129->first;
frost$core$Object* $tmp1131 = *$tmp1130;
frost$core$Int* $tmp1132 = &((org$frostlang$frostc$IR$Value*) $tmp1131)->$rawValue;
frost$core$Int $tmp1133 = *$tmp1132;
frost$core$Int $tmp1134 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:317:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1135 = $tmp1133.value;
int64_t $tmp1136 = $tmp1134.value;
bool $tmp1137 = $tmp1135 == $tmp1136;
frost$core$Bit $tmp1138 = (frost$core$Bit) {$tmp1137};
bool $tmp1139 = $tmp1138.value;
if ($tmp1139) goto block15; else goto block14;
block15:;
frost$core$Int* $tmp1140 = (frost$core$Int*) (((org$frostlang$frostc$IR$Value*) $tmp1131)->$data + 0);
frost$core$Int $tmp1141 = *$tmp1140;
*(&local3) = $tmp1141;
org$frostlang$frostc$Type** $tmp1142 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Value*) $tmp1131)->$data + 8);
org$frostlang$frostc$Type* $tmp1143 = *$tmp1142;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:318
frost$collections$Array** $tmp1144 = &param3->locals;
frost$collections$Array* $tmp1145 = *$tmp1144;
frost$core$Int $tmp1146 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:318:60
frost$core$Int $tmp1147 = (frost$core$Int) {0u};
int64_t $tmp1148 = $tmp1146.value;
int64_t $tmp1149 = $tmp1147.value;
bool $tmp1150 = $tmp1148 >= $tmp1149;
frost$core$Bit $tmp1151 = (frost$core$Bit) {$tmp1150};
bool $tmp1152 = $tmp1151.value;
if ($tmp1152) goto block20; else goto block19;
block20:;
ITable* $tmp1153 = ((frost$collections$CollectionView*) $tmp1145)->$class->itable;
while ($tmp1153->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1153 = $tmp1153->next;
}
$fn1155 $tmp1154 = $tmp1153->methods[0];
frost$core$Int $tmp1156 = $tmp1154(((frost$collections$CollectionView*) $tmp1145));
int64_t $tmp1157 = $tmp1146.value;
int64_t $tmp1158 = $tmp1156.value;
bool $tmp1159 = $tmp1157 < $tmp1158;
frost$core$Bit $tmp1160 = (frost$core$Bit) {$tmp1159};
bool $tmp1161 = $tmp1160.value;
if ($tmp1161) goto block18; else goto block19;
block19:;
frost$core$Int $tmp1162 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1163, $tmp1162, &$s1164);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1165 = &$tmp1145->data;
frost$core$Object** $tmp1166 = *$tmp1165;
frost$core$Int64 $tmp1167 = frost$core$Int64$init$frost$core$Int($tmp1146);
int64_t $tmp1168 = $tmp1167.value;
frost$core$Object* $tmp1169 = $tmp1166[$tmp1168];
frost$core$Frost$ref$frost$core$Object$Q($tmp1169);
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp1169)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1170 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp1169);
frost$core$Frost$unref$frost$core$Object$Q($tmp1169);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:319
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1171 = *(&local4);
frost$core$Bit $tmp1172 = (frost$core$Bit) {true};
bool $tmp1173 = $tmp1172.value;
if ($tmp1173) goto block21; else goto block22;
block22:;
frost$core$Int $tmp1174 = (frost$core$Int) {319u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1175, $tmp1174);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:320
frost$collections$Array** $tmp1176 = &param3->locals;
frost$collections$Array* $tmp1177 = *$tmp1176;
frost$core$Int $tmp1178 = *(&local3);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1179 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1180 = *(&local4);
org$frostlang$frostc$Type** $tmp1181 = &$tmp1180->type;
org$frostlang$frostc$Type* $tmp1182 = *$tmp1181;
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Analyzer.frost:320:93
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp1183 = &$tmp1182->typeKind;
org$frostlang$frostc$Type$Kind $tmp1184 = *$tmp1183;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1185;
$tmp1185 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1185->value = $tmp1184;
frost$core$Int $tmp1186 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1187 = &(&local7)->$rawValue;
*$tmp1187 = $tmp1186;
org$frostlang$frostc$Type$Kind $tmp1188 = *(&local7);
*(&local6) = $tmp1188;
org$frostlang$frostc$Type$Kind $tmp1189 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1190;
$tmp1190 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1190->value = $tmp1189;
ITable* $tmp1191 = ((frost$core$Equatable*) $tmp1185)->$class->itable;
while ($tmp1191->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1191 = $tmp1191->next;
}
$fn1193 $tmp1192 = $tmp1191->methods[1];
frost$core$Bit $tmp1194 = $tmp1192(((frost$core$Equatable*) $tmp1185), ((frost$core$Equatable*) $tmp1190));
bool $tmp1195 = $tmp1194.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1190)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1185)));
if ($tmp1195) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
*(&local5) = $tmp1182;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
goto block23;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1196 = &$tmp1182->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1197 = *$tmp1196;
frost$core$Bit $tmp1198 = (frost$core$Bit) {$tmp1197 != NULL};
bool $tmp1199 = $tmp1198.value;
if ($tmp1199) goto block28; else goto block29;
block29:;
frost$core$Int $tmp1200 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1201, $tmp1200);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1202 = &$tmp1182->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1203 = *$tmp1202;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
frost$core$Int $tmp1204 = (frost$core$Int) {0u};
frost$core$Object* $tmp1205 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1203, $tmp1204);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1205)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1205);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp1205);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1205)));
goto block23;
block23:;
org$frostlang$frostc$Type* $tmp1206 = *(&local5);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1179, $tmp1206);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:320:49
frost$core$Int $tmp1207 = (frost$core$Int) {0u};
int64_t $tmp1208 = $tmp1178.value;
int64_t $tmp1209 = $tmp1207.value;
bool $tmp1210 = $tmp1208 >= $tmp1209;
frost$core$Bit $tmp1211 = (frost$core$Bit) {$tmp1210};
bool $tmp1212 = $tmp1211.value;
if ($tmp1212) goto block33; else goto block32;
block33:;
ITable* $tmp1213 = ((frost$collections$CollectionView*) $tmp1177)->$class->itable;
while ($tmp1213->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1213 = $tmp1213->next;
}
$fn1215 $tmp1214 = $tmp1213->methods[0];
frost$core$Int $tmp1216 = $tmp1214(((frost$collections$CollectionView*) $tmp1177));
int64_t $tmp1217 = $tmp1178.value;
int64_t $tmp1218 = $tmp1216.value;
bool $tmp1219 = $tmp1217 < $tmp1218;
frost$core$Bit $tmp1220 = (frost$core$Bit) {$tmp1219};
bool $tmp1221 = $tmp1220.value;
if ($tmp1221) goto block31; else goto block32;
block32:;
frost$core$Int $tmp1222 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1223, $tmp1222, &$s1224);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1225 = &$tmp1177->data;
frost$core$Object** $tmp1226 = *$tmp1225;
frost$core$Int64 $tmp1227 = frost$core$Int64$init$frost$core$Int($tmp1178);
int64_t $tmp1228 = $tmp1227.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
frost$core$Object* $tmp1229 = $tmp1226[$tmp1228];
frost$core$Frost$unref$frost$core$Object$Q($tmp1229);
$tmp1226[$tmp1228] = ((frost$core$Object*) $tmp1179);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
org$frostlang$frostc$Type* $tmp1230 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1231 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
goto block14;
block14:;
goto block11;
block11:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1114);
org$frostlang$frostc$Pair* $tmp1232 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block7;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
goto block6;
block6:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1233 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp1234 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1071);
return;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:328
frost$core$Frost$unref$frost$core$Object$Q($tmp1071);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:335
frost$core$Int $tmp1235 = param2.$rawValue;
frost$core$Int $tmp1236 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:336:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1237 = $tmp1235.value;
int64_t $tmp1238 = $tmp1236.value;
bool $tmp1239 = $tmp1237 == $tmp1238;
frost$core$Bit $tmp1240 = (frost$core$Bit) {$tmp1239};
bool $tmp1241 = $tmp1240.value;
if ($tmp1241) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:337
frost$core$Int* $tmp1242 = &param3->$rawValue;
frost$core$Int $tmp1243 = *$tmp1242;
frost$core$Int $tmp1244 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:338:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1245 = $tmp1243.value;
int64_t $tmp1246 = $tmp1244.value;
bool $tmp1247 = $tmp1245 == $tmp1246;
frost$core$Bit $tmp1248 = (frost$core$Bit) {$tmp1247};
bool $tmp1249 = $tmp1248.value;
if ($tmp1249) goto block6; else goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:339
org$frostlang$frostc$Compiler** $tmp1250 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1251 = *$tmp1250;
org$frostlang$frostc$Type** $tmp1252 = &$tmp1251->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1253 = *$tmp1252;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:339:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1254 = &((org$frostlang$frostc$Symbol*) param5)->name;
frost$core$String* $tmp1255 = *$tmp1254;
frost$core$String** $tmp1256 = &((org$frostlang$frostc$Symbol*) $tmp1253)->name;
frost$core$String* $tmp1257 = *$tmp1256;
frost$core$Bit $tmp1258 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1255, $tmp1257);
bool $tmp1259 = $tmp1258.value;
if ($tmp1259) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Type$Kind* $tmp1260 = &param5->typeKind;
org$frostlang$frostc$Type$Kind $tmp1261 = *$tmp1260;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1262;
$tmp1262 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1262->value = $tmp1261;
org$frostlang$frostc$Type$Kind* $tmp1263 = &$tmp1253->typeKind;
org$frostlang$frostc$Type$Kind $tmp1264 = *$tmp1263;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1265;
$tmp1265 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1265->value = $tmp1264;
ITable* $tmp1266 = ((frost$core$Equatable*) $tmp1262)->$class->itable;
while ($tmp1266->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1266 = $tmp1266->next;
}
$fn1268 $tmp1267 = $tmp1266->methods[0];
frost$core$Bit $tmp1269 = $tmp1267(((frost$core$Equatable*) $tmp1262), ((frost$core$Equatable*) $tmp1265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1265)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1262)));
*(&local0) = $tmp1269;
goto block11;
block10:;
*(&local0) = $tmp1258;
goto block11;
block11:;
frost$core$Bit $tmp1270 = *(&local0);
bool $tmp1271 = $tmp1270.value;
if ($tmp1271) goto block12; else goto block13;
block13:;
frost$core$Int $tmp1272 = (frost$core$Int) {339u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1273, $tmp1272);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:340
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1274 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1275 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1274, $tmp1275);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp1276 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp1277 = (frost$core$Bit) {true};
frost$core$Bit$wrapper* $tmp1278;
$tmp1278 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1278->value = $tmp1277;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1276, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp1278));
frost$collections$Array$add$frost$collections$Array$T($tmp1274, ((frost$core$Object*) $tmp1276));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
frost$collections$Array* $tmp1279 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
*(&local1) = $tmp1274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:341
frost$core$Int* $tmp1280 = &param1->$rawValue;
frost$core$Int $tmp1281 = *$tmp1280;
frost$core$Int $tmp1282 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:342:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1283 = $tmp1281.value;
int64_t $tmp1284 = $tmp1282.value;
bool $tmp1285 = $tmp1283 == $tmp1284;
frost$core$Bit $tmp1286 = (frost$core$Bit) {$tmp1285};
bool $tmp1287 = $tmp1286.value;
if ($tmp1287) goto block15; else goto block14;
block15:;
org$frostlang$frostc$IR$Statement$ID* $tmp1288 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1289 = *$tmp1288;
*(&local2) = $tmp1289;
org$frostlang$frostc$Type** $tmp1290 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1291 = *$tmp1290;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:343
frost$collections$HashMap** $tmp1292 = &param0->statements;
frost$collections$HashMap* $tmp1293 = *$tmp1292;
org$frostlang$frostc$IR$Statement$ID $tmp1294 = *(&local2);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1295;
$tmp1295 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1295->value = $tmp1294;
frost$core$Object* $tmp1296 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1293, ((frost$collections$Key*) $tmp1295));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1296)));
org$frostlang$frostc$IR$Statement* $tmp1297 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) $tmp1296);
frost$core$Frost$unref$frost$core$Object$Q($tmp1296);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1295)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:344
org$frostlang$frostc$IR$Statement* $tmp1298 = *(&local3);
frost$core$Int* $tmp1299 = &$tmp1298->$rawValue;
frost$core$Int $tmp1300 = *$tmp1299;
frost$core$Int $tmp1301 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:345:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1302 = $tmp1300.value;
int64_t $tmp1303 = $tmp1301.value;
bool $tmp1304 = $tmp1302 == $tmp1303;
frost$core$Bit $tmp1305 = (frost$core$Bit) {$tmp1304};
bool $tmp1306 = $tmp1305.value;
if ($tmp1306) goto block18; else goto block17;
block18:;
org$frostlang$frostc$Position* $tmp1307 = (org$frostlang$frostc$Position*) ($tmp1298->$data + 0);
org$frostlang$frostc$Position $tmp1308 = *$tmp1307;
org$frostlang$frostc$IR$Value** $tmp1309 = (org$frostlang$frostc$IR$Value**) ($tmp1298->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1310 = *$tmp1309;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
org$frostlang$frostc$IR$Value* $tmp1311 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
*(&local4) = $tmp1310;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:346
frost$collections$Array* $tmp1312 = *(&local1);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp1313 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$IR$Value* $tmp1314 = *(&local4);
frost$core$Bit $tmp1315 = (frost$core$Bit) {true};
frost$core$Bit$wrapper* $tmp1316;
$tmp1316 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1316->value = $tmp1315;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1313, ((frost$core$Object*) $tmp1314), ((frost$core$Object*) $tmp1316));
frost$collections$Array$add$frost$collections$Array$T($tmp1312, ((frost$core$Object*) $tmp1313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
org$frostlang$frostc$IR$Value* $tmp1317 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block17;
block17:;
org$frostlang$frostc$IR$Statement* $tmp1318 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:351
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1319 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
frost$collections$Array* $tmp1320 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp1319, param5, ((frost$collections$ListView*) $tmp1320));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
frost$collections$Array* $tmp1321 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp1319;
block5:;
goto block1;
block3:;
frost$core$Int $tmp1322 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:355:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1323 = $tmp1235.value;
int64_t $tmp1324 = $tmp1322.value;
bool $tmp1325 = $tmp1323 == $tmp1324;
frost$core$Bit $tmp1326 = (frost$core$Bit) {$tmp1325};
bool $tmp1327 = $tmp1326.value;
if ($tmp1327) goto block20; else goto block1;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:356
frost$core$Int* $tmp1328 = &param3->$rawValue;
frost$core$Int $tmp1329 = *$tmp1328;
frost$core$Int $tmp1330 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:357:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1331 = $tmp1329.value;
int64_t $tmp1332 = $tmp1330.value;
bool $tmp1333 = $tmp1331 == $tmp1332;
frost$core$Bit $tmp1334 = (frost$core$Bit) {$tmp1333};
bool $tmp1335 = $tmp1334.value;
if ($tmp1335) goto block23; else goto block22;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:358
org$frostlang$frostc$Compiler** $tmp1336 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1337 = *$tmp1336;
org$frostlang$frostc$Type** $tmp1338 = &$tmp1337->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1339 = *$tmp1338;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:358:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1340 = &((org$frostlang$frostc$Symbol*) param5)->name;
frost$core$String* $tmp1341 = *$tmp1340;
frost$core$String** $tmp1342 = &((org$frostlang$frostc$Symbol*) $tmp1339)->name;
frost$core$String* $tmp1343 = *$tmp1342;
frost$core$Bit $tmp1344 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1341, $tmp1343);
bool $tmp1345 = $tmp1344.value;
if ($tmp1345) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Type$Kind* $tmp1346 = &param5->typeKind;
org$frostlang$frostc$Type$Kind $tmp1347 = *$tmp1346;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1348;
$tmp1348 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1348->value = $tmp1347;
org$frostlang$frostc$Type$Kind* $tmp1349 = &$tmp1339->typeKind;
org$frostlang$frostc$Type$Kind $tmp1350 = *$tmp1349;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1351;
$tmp1351 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1351->value = $tmp1350;
ITable* $tmp1352 = ((frost$core$Equatable*) $tmp1348)->$class->itable;
while ($tmp1352->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1352 = $tmp1352->next;
}
$fn1354 $tmp1353 = $tmp1352->methods[0];
frost$core$Bit $tmp1355 = $tmp1353(((frost$core$Equatable*) $tmp1348), ((frost$core$Equatable*) $tmp1351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1351)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1348)));
*(&local5) = $tmp1355;
goto block28;
block27:;
*(&local5) = $tmp1344;
goto block28;
block28:;
frost$core$Bit $tmp1356 = *(&local5);
bool $tmp1357 = $tmp1356.value;
if ($tmp1357) goto block29; else goto block30;
block30:;
frost$core$Int $tmp1358 = (frost$core$Int) {358u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1359, $tmp1358);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:359
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1360 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1361 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1360, $tmp1361);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp1362 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp1363 = (frost$core$Bit) {false};
frost$core$Bit$wrapper* $tmp1364;
$tmp1364 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1364->value = $tmp1363;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1362, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp1364));
frost$collections$Array$add$frost$collections$Array$T($tmp1360, ((frost$core$Object*) $tmp1362));
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
frost$collections$Array* $tmp1365 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
*(&local6) = $tmp1360;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:360
frost$core$Int* $tmp1366 = &param1->$rawValue;
frost$core$Int $tmp1367 = *$tmp1366;
frost$core$Int $tmp1368 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:361:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1369 = $tmp1367.value;
int64_t $tmp1370 = $tmp1368.value;
bool $tmp1371 = $tmp1369 == $tmp1370;
frost$core$Bit $tmp1372 = (frost$core$Bit) {$tmp1371};
bool $tmp1373 = $tmp1372.value;
if ($tmp1373) goto block32; else goto block31;
block32:;
org$frostlang$frostc$IR$Statement$ID* $tmp1374 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1375 = *$tmp1374;
*(&local7) = $tmp1375;
org$frostlang$frostc$Type** $tmp1376 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1377 = *$tmp1376;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:362
frost$collections$HashMap** $tmp1378 = &param0->statements;
frost$collections$HashMap* $tmp1379 = *$tmp1378;
org$frostlang$frostc$IR$Statement$ID $tmp1380 = *(&local7);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1381;
$tmp1381 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1381->value = $tmp1380;
frost$core$Object* $tmp1382 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1379, ((frost$collections$Key*) $tmp1381));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1382)));
org$frostlang$frostc$IR$Statement* $tmp1383 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) $tmp1382);
frost$core$Frost$unref$frost$core$Object$Q($tmp1382);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1381)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:363
org$frostlang$frostc$IR$Statement* $tmp1384 = *(&local8);
frost$core$Int* $tmp1385 = &$tmp1384->$rawValue;
frost$core$Int $tmp1386 = *$tmp1385;
frost$core$Int $tmp1387 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:364:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1388 = $tmp1386.value;
int64_t $tmp1389 = $tmp1387.value;
bool $tmp1390 = $tmp1388 == $tmp1389;
frost$core$Bit $tmp1391 = (frost$core$Bit) {$tmp1390};
bool $tmp1392 = $tmp1391.value;
if ($tmp1392) goto block35; else goto block34;
block35:;
org$frostlang$frostc$Position* $tmp1393 = (org$frostlang$frostc$Position*) ($tmp1384->$data + 0);
org$frostlang$frostc$Position $tmp1394 = *$tmp1393;
org$frostlang$frostc$IR$Value** $tmp1395 = (org$frostlang$frostc$IR$Value**) ($tmp1384->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1396 = *$tmp1395;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
org$frostlang$frostc$IR$Value* $tmp1397 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
*(&local9) = $tmp1396;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:365
frost$collections$Array* $tmp1398 = *(&local6);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp1399 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$IR$Value* $tmp1400 = *(&local9);
frost$core$Bit $tmp1401 = (frost$core$Bit) {false};
frost$core$Bit$wrapper* $tmp1402;
$tmp1402 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1402->value = $tmp1401;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1399, ((frost$core$Object*) $tmp1400), ((frost$core$Object*) $tmp1402));
frost$collections$Array$add$frost$collections$Array$T($tmp1398, ((frost$core$Object*) $tmp1399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
org$frostlang$frostc$IR$Value* $tmp1403 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block34;
block34:;
org$frostlang$frostc$IR$Statement* $tmp1404 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:370
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1405 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
frost$collections$Array* $tmp1406 = *(&local6);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp1405, param5, ((frost$collections$ListView*) $tmp1406));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
frost$collections$Array* $tmp1407 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
*(&local6) = ((frost$collections$Array*) NULL);
return $tmp1405;
block22:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:376
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1408 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1408, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
return $tmp1408;

}
org$frostlang$frostc$pass$Analyzer$State* org$frostlang$frostc$pass$Analyzer$computeExitState$org$frostlang$frostc$pass$Analyzer$BlockExit$R$org$frostlang$frostc$pass$Analyzer$State(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$pass$Analyzer$BlockExit param1) {

org$frostlang$frostc$pass$Analyzer$State* local0 = NULL;
org$frostlang$frostc$IR$Block* local1 = NULL;
frost$collections$Iterator* local2 = NULL;
frost$collections$Iterator* local3 = NULL;
org$frostlang$frostc$IR$Statement$ID local4;
org$frostlang$frostc$IR$Value* local5 = NULL;
org$frostlang$frostc$IR$Value* local6 = NULL;
frost$core$Int local7;
org$frostlang$frostc$IR$Statement$ID local8;
org$frostlang$frostc$IR$Value* local9 = NULL;
frost$core$Int local10;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:380
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$pass$Analyzer$State));
org$frostlang$frostc$pass$Analyzer$State* $tmp1409 = (org$frostlang$frostc$pass$Analyzer$State*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$State$class);
frost$collections$HashMap** $tmp1410 = &param0->entryStates;
frost$collections$HashMap* $tmp1411 = *$tmp1410;
org$frostlang$frostc$IR$Block$ID $tmp1412 = param1.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1413;
$tmp1413 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1413->value = $tmp1412;
frost$core$Object* $tmp1414 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1411, ((frost$collections$Key*) $tmp1413));
org$frostlang$frostc$pass$Analyzer$State$init$org$frostlang$frostc$pass$Analyzer$State($tmp1409, ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1414));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
org$frostlang$frostc$pass$Analyzer$State* $tmp1415 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
*(&local0) = $tmp1409;
frost$core$Frost$unref$frost$core$Object$Q($tmp1414);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1413)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:381
frost$collections$HashMap** $tmp1416 = &param0->blocks;
frost$collections$HashMap* $tmp1417 = *$tmp1416;
org$frostlang$frostc$IR$Block$ID $tmp1418 = param1.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1419;
$tmp1419 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1419->value = $tmp1418;
frost$core$Object* $tmp1420 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1417, ((frost$collections$Key*) $tmp1419));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp1420)));
org$frostlang$frostc$IR$Block* $tmp1421 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp1420);
frost$core$Frost$unref$frost$core$Object$Q($tmp1420);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1419)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:382
org$frostlang$frostc$IR$Block* $tmp1422 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1423 = &$tmp1422->ids;
org$frostlang$frostc$LinkedList* $tmp1424 = *$tmp1423;
ITable* $tmp1425 = ((frost$collections$Iterable*) $tmp1424)->$class->itable;
while ($tmp1425->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1425 = $tmp1425->next;
}
$fn1427 $tmp1426 = $tmp1425->methods[0];
frost$collections$Iterator* $tmp1428 = $tmp1426(((frost$collections$Iterable*) $tmp1424));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
frost$collections$Iterator* $tmp1429 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
*(&local2) = $tmp1428;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:383
org$frostlang$frostc$IR$Block* $tmp1430 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1431 = &$tmp1430->statements;
org$frostlang$frostc$LinkedList* $tmp1432 = *$tmp1431;
ITable* $tmp1433 = ((frost$collections$Iterable*) $tmp1432)->$class->itable;
while ($tmp1433->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1433 = $tmp1433->next;
}
$fn1435 $tmp1434 = $tmp1433->methods[0];
frost$collections$Iterator* $tmp1436 = $tmp1434(((frost$collections$Iterable*) $tmp1432));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
frost$collections$Iterator* $tmp1437 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
*(&local3) = $tmp1436;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:384
goto block1;
block1:;
frost$collections$Iterator* $tmp1438 = *(&local2);
ITable* $tmp1439 = $tmp1438->$class->itable;
while ($tmp1439->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1439 = $tmp1439->next;
}
$fn1441 $tmp1440 = $tmp1439->methods[0];
frost$core$Bit $tmp1442 = $tmp1440($tmp1438);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:384:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1443 = $tmp1442.value;
bool $tmp1444 = !$tmp1443;
frost$core$Bit $tmp1445 = (frost$core$Bit) {$tmp1444};
bool $tmp1446 = $tmp1445.value;
if ($tmp1446) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:385
frost$collections$Iterator* $tmp1447 = *(&local2);
ITable* $tmp1448 = $tmp1447->$class->itable;
while ($tmp1448->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1448 = $tmp1448->next;
}
$fn1450 $tmp1449 = $tmp1448->methods[1];
frost$core$Object* $tmp1451 = $tmp1449($tmp1447);
*(&local4) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp1451)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1451);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:386
frost$collections$Iterator* $tmp1452 = *(&local3);
ITable* $tmp1453 = $tmp1452->$class->itable;
while ($tmp1453->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1453 = $tmp1453->next;
}
$fn1455 $tmp1454 = $tmp1453->methods[1];
frost$core$Object* $tmp1456 = $tmp1454($tmp1452);
frost$core$Int* $tmp1457 = &((org$frostlang$frostc$IR$Statement*) $tmp1456)->$rawValue;
frost$core$Int $tmp1458 = *$tmp1457;
frost$core$Int $tmp1459 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:387:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1460 = $tmp1458.value;
int64_t $tmp1461 = $tmp1459.value;
bool $tmp1462 = $tmp1460 == $tmp1461;
frost$core$Bit $tmp1463 = (frost$core$Bit) {$tmp1462};
bool $tmp1464 = $tmp1463.value;
if ($tmp1464) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Position* $tmp1465 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1456)->$data + 0);
org$frostlang$frostc$Position $tmp1466 = *$tmp1465;
org$frostlang$frostc$IR$Value** $tmp1467 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1456)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1468 = *$tmp1467;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
org$frostlang$frostc$IR$Value* $tmp1469 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
*(&local5) = $tmp1468;
org$frostlang$frostc$IR$Value** $tmp1470 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1456)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1471 = *$tmp1470;
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
org$frostlang$frostc$IR$Value* $tmp1472 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
*(&local6) = $tmp1471;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:388
org$frostlang$frostc$IR$Value* $tmp1473 = *(&local6);
frost$core$Int* $tmp1474 = &$tmp1473->$rawValue;
frost$core$Int $tmp1475 = *$tmp1474;
frost$core$Int $tmp1476 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:389:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1477 = $tmp1475.value;
int64_t $tmp1478 = $tmp1476.value;
bool $tmp1479 = $tmp1477 == $tmp1478;
frost$core$Bit $tmp1480 = (frost$core$Bit) {$tmp1479};
bool $tmp1481 = $tmp1480.value;
if ($tmp1481) goto block9; else goto block10;
block9:;
frost$core$Int* $tmp1482 = (frost$core$Int*) ($tmp1473->$data + 0);
frost$core$Int $tmp1483 = *$tmp1482;
*(&local7) = $tmp1483;
org$frostlang$frostc$Type** $tmp1484 = (org$frostlang$frostc$Type**) ($tmp1473->$data + 8);
org$frostlang$frostc$Type* $tmp1485 = *$tmp1484;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:390
org$frostlang$frostc$pass$Analyzer$State* $tmp1486 = *(&local0);
frost$collections$Array** $tmp1487 = &$tmp1486->locals;
frost$collections$Array* $tmp1488 = *$tmp1487;
frost$core$Int $tmp1489 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1490 = *(&local5);
org$frostlang$frostc$pass$Analyzer$State* $tmp1491 = *(&local0);
$fn1493 $tmp1492 = ($fn1493) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1494 = $tmp1492(param0, $tmp1490, $tmp1491);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:390:42
frost$core$Int $tmp1495 = (frost$core$Int) {0u};
int64_t $tmp1496 = $tmp1489.value;
int64_t $tmp1497 = $tmp1495.value;
bool $tmp1498 = $tmp1496 >= $tmp1497;
frost$core$Bit $tmp1499 = (frost$core$Bit) {$tmp1498};
bool $tmp1500 = $tmp1499.value;
if ($tmp1500) goto block15; else goto block14;
block15:;
ITable* $tmp1501 = ((frost$collections$CollectionView*) $tmp1488)->$class->itable;
while ($tmp1501->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1501 = $tmp1501->next;
}
$fn1503 $tmp1502 = $tmp1501->methods[0];
frost$core$Int $tmp1504 = $tmp1502(((frost$collections$CollectionView*) $tmp1488));
int64_t $tmp1505 = $tmp1489.value;
int64_t $tmp1506 = $tmp1504.value;
bool $tmp1507 = $tmp1505 < $tmp1506;
frost$core$Bit $tmp1508 = (frost$core$Bit) {$tmp1507};
bool $tmp1509 = $tmp1508.value;
if ($tmp1509) goto block13; else goto block14;
block14:;
frost$core$Int $tmp1510 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1511, $tmp1510, &$s1512);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1513 = &$tmp1488->data;
frost$core$Object** $tmp1514 = *$tmp1513;
frost$core$Int64 $tmp1515 = frost$core$Int64$init$frost$core$Int($tmp1489);
int64_t $tmp1516 = $tmp1515.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
frost$core$Object* $tmp1517 = $tmp1514[$tmp1516];
frost$core$Frost$unref$frost$core$Object$Q($tmp1517);
$tmp1514[$tmp1516] = ((frost$core$Object*) $tmp1494);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
goto block8;
block10:;
frost$core$Int $tmp1518 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:392:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1519 = $tmp1475.value;
int64_t $tmp1520 = $tmp1518.value;
bool $tmp1521 = $tmp1519 == $tmp1520;
frost$core$Bit $tmp1522 = (frost$core$Bit) {$tmp1521};
bool $tmp1523 = $tmp1522.value;
if ($tmp1523) goto block16; else goto block8;
block16:;
org$frostlang$frostc$IR$Statement$ID* $tmp1524 = (org$frostlang$frostc$IR$Statement$ID*) ($tmp1473->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1525 = *$tmp1524;
*(&local8) = $tmp1525;
org$frostlang$frostc$Type** $tmp1526 = (org$frostlang$frostc$Type**) ($tmp1473->$data + 8);
org$frostlang$frostc$Type* $tmp1527 = *$tmp1526;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:393
frost$collections$HashMap** $tmp1528 = &param0->statements;
frost$collections$HashMap* $tmp1529 = *$tmp1528;
org$frostlang$frostc$IR$Statement$ID $tmp1530 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1531;
$tmp1531 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1531->value = $tmp1530;
frost$core$Object* $tmp1532 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1529, ((frost$collections$Key*) $tmp1531));
frost$core$Int* $tmp1533 = &((org$frostlang$frostc$IR$Statement*) $tmp1532)->$rawValue;
frost$core$Int $tmp1534 = *$tmp1533;
frost$core$Int $tmp1535 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:394:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1536 = $tmp1534.value;
int64_t $tmp1537 = $tmp1535.value;
bool $tmp1538 = $tmp1536 == $tmp1537;
frost$core$Bit $tmp1539 = (frost$core$Bit) {$tmp1538};
bool $tmp1540 = $tmp1539.value;
if ($tmp1540) goto block19; else goto block18;
block19:;
org$frostlang$frostc$Position* $tmp1541 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1532)->$data + 0);
org$frostlang$frostc$Position $tmp1542 = *$tmp1541;
org$frostlang$frostc$IR$Value** $tmp1543 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1532)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1544 = *$tmp1543;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
org$frostlang$frostc$IR$Value* $tmp1545 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
*(&local9) = $tmp1544;
org$frostlang$frostc$FieldDecl** $tmp1546 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp1532)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp1547 = *$tmp1546;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:395
org$frostlang$frostc$IR$Value* $tmp1548 = *(&local9);
frost$core$Int* $tmp1549 = &$tmp1548->$rawValue;
frost$core$Int $tmp1550 = *$tmp1549;
frost$core$Int $tmp1551 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:396:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1552 = $tmp1550.value;
int64_t $tmp1553 = $tmp1551.value;
bool $tmp1554 = $tmp1552 == $tmp1553;
frost$core$Bit $tmp1555 = (frost$core$Bit) {$tmp1554};
bool $tmp1556 = $tmp1555.value;
if ($tmp1556) goto block22; else goto block21;
block22:;
frost$core$Int* $tmp1557 = (frost$core$Int*) ($tmp1548->$data + 0);
frost$core$Int $tmp1558 = *$tmp1557;
*(&local10) = $tmp1558;
org$frostlang$frostc$Type** $tmp1559 = (org$frostlang$frostc$Type**) ($tmp1548->$data + 8);
org$frostlang$frostc$Type* $tmp1560 = *$tmp1559;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:397
org$frostlang$frostc$pass$Analyzer$State* $tmp1561 = *(&local0);
frost$collections$Array** $tmp1562 = &$tmp1561->locals;
frost$collections$Array* $tmp1563 = *$tmp1562;
frost$core$Int $tmp1564 = *(&local10);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1565 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$IR** $tmp1566 = &param0->ir;
org$frostlang$frostc$IR* $tmp1567 = *$tmp1566;
frost$collections$Array** $tmp1568 = &$tmp1567->locals;
frost$collections$Array* $tmp1569 = *$tmp1568;
frost$core$Int $tmp1570 = *(&local10);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:397:91
frost$core$Int $tmp1571 = (frost$core$Int) {0u};
int64_t $tmp1572 = $tmp1570.value;
int64_t $tmp1573 = $tmp1571.value;
bool $tmp1574 = $tmp1572 >= $tmp1573;
frost$core$Bit $tmp1575 = (frost$core$Bit) {$tmp1574};
bool $tmp1576 = $tmp1575.value;
if ($tmp1576) goto block27; else goto block26;
block27:;
ITable* $tmp1577 = ((frost$collections$CollectionView*) $tmp1569)->$class->itable;
while ($tmp1577->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1577 = $tmp1577->next;
}
$fn1579 $tmp1578 = $tmp1577->methods[0];
frost$core$Int $tmp1580 = $tmp1578(((frost$collections$CollectionView*) $tmp1569));
int64_t $tmp1581 = $tmp1570.value;
int64_t $tmp1582 = $tmp1580.value;
bool $tmp1583 = $tmp1581 < $tmp1582;
frost$core$Bit $tmp1584 = (frost$core$Bit) {$tmp1583};
bool $tmp1585 = $tmp1584.value;
if ($tmp1585) goto block25; else goto block26;
block26:;
frost$core$Int $tmp1586 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1587, $tmp1586, &$s1588);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1589 = &$tmp1569->data;
frost$core$Object** $tmp1590 = *$tmp1589;
frost$core$Int64 $tmp1591 = frost$core$Int64$init$frost$core$Int($tmp1570);
int64_t $tmp1592 = $tmp1591.value;
frost$core$Object* $tmp1593 = $tmp1590[$tmp1592];
frost$core$Frost$ref$frost$core$Object$Q($tmp1593);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1565, ((org$frostlang$frostc$Type*) $tmp1593));
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:397:58
frost$core$Int $tmp1594 = (frost$core$Int) {0u};
int64_t $tmp1595 = $tmp1564.value;
int64_t $tmp1596 = $tmp1594.value;
bool $tmp1597 = $tmp1595 >= $tmp1596;
frost$core$Bit $tmp1598 = (frost$core$Bit) {$tmp1597};
bool $tmp1599 = $tmp1598.value;
if ($tmp1599) goto block31; else goto block30;
block31:;
ITable* $tmp1600 = ((frost$collections$CollectionView*) $tmp1563)->$class->itable;
while ($tmp1600->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1600 = $tmp1600->next;
}
$fn1602 $tmp1601 = $tmp1600->methods[0];
frost$core$Int $tmp1603 = $tmp1601(((frost$collections$CollectionView*) $tmp1563));
int64_t $tmp1604 = $tmp1564.value;
int64_t $tmp1605 = $tmp1603.value;
bool $tmp1606 = $tmp1604 < $tmp1605;
frost$core$Bit $tmp1607 = (frost$core$Bit) {$tmp1606};
bool $tmp1608 = $tmp1607.value;
if ($tmp1608) goto block29; else goto block30;
block30:;
frost$core$Int $tmp1609 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1610, $tmp1609, &$s1611);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1612 = &$tmp1563->data;
frost$core$Object** $tmp1613 = *$tmp1612;
frost$core$Int64 $tmp1614 = frost$core$Int64$init$frost$core$Int($tmp1564);
int64_t $tmp1615 = $tmp1614.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
frost$core$Object* $tmp1616 = $tmp1613[$tmp1615];
frost$core$Frost$unref$frost$core$Object$Q($tmp1616);
$tmp1613[$tmp1615] = ((frost$core$Object*) $tmp1565);
frost$core$Frost$unref$frost$core$Object$Q($tmp1593);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
goto block21;
block21:;
org$frostlang$frostc$IR$Value* $tmp1617 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block18;
block18:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1532);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1531)));
goto block8;
block8:;
org$frostlang$frostc$IR$Value* $tmp1618 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1619 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1456);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:407
org$frostlang$frostc$IR$Block* $tmp1620 = *(&local1);
frost$core$Int $tmp1621 = param1.exit;
org$frostlang$frostc$pass$Analyzer$State* $tmp1622 = *(&local0);
$fn1624 $tmp1623 = ($fn1624) param0->$class->vtable[5];
$tmp1623(param0, $tmp1620, $tmp1621, $tmp1622);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:408
org$frostlang$frostc$pass$Analyzer$State* $tmp1625 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
frost$collections$Iterator* $tmp1626 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp1627 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
*(&local2) = ((frost$collections$Iterator*) NULL);
org$frostlang$frostc$IR$Block* $tmp1628 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
org$frostlang$frostc$pass$Analyzer$State* $tmp1629 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
return $tmp1625;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:412
frost$collections$HashMap** $tmp1630 = &param0->blocks;
frost$collections$HashMap* $tmp1631 = *$tmp1630;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1632;
$tmp1632 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1632->value = param1;
frost$core$Object* $tmp1633 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1631, ((frost$collections$Key*) $tmp1632));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp1633)));
org$frostlang$frostc$IR$Block* $tmp1634 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
*(&local0) = ((org$frostlang$frostc$IR$Block*) $tmp1633);
frost$core$Frost$unref$frost$core$Object$Q($tmp1633);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1632)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:413
org$frostlang$frostc$IR$Block* $tmp1635 = *(&local0);
org$frostlang$frostc$LinkedList** $tmp1636 = &$tmp1635->statements;
org$frostlang$frostc$LinkedList* $tmp1637 = *$tmp1636;
$fn1639 $tmp1638 = ($fn1639) $tmp1637->$class->vtable[6];
frost$core$Object* $tmp1640 = $tmp1638($tmp1637);
frost$core$Int* $tmp1641 = &((org$frostlang$frostc$IR$Statement*) $tmp1640)->$rawValue;
frost$core$Int $tmp1642 = *$tmp1641;
frost$core$Int $tmp1643 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:414:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1644 = $tmp1642.value;
int64_t $tmp1645 = $tmp1643.value;
bool $tmp1646 = $tmp1644 == $tmp1645;
frost$core$Bit $tmp1647 = (frost$core$Bit) {$tmp1646};
bool $tmp1648 = $tmp1647.value;
if ($tmp1648) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1649 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1640)->$data + 0);
org$frostlang$frostc$Position $tmp1650 = *$tmp1649;
org$frostlang$frostc$IR$Block$ID* $tmp1651 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1640)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp1652 = *$tmp1651;
*(&local1) = $tmp1652;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:415
org$frostlang$frostc$IR$Block* $tmp1653 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1654 = &$tmp1653->id;
org$frostlang$frostc$IR$Block$ID $tmp1655 = *$tmp1654;
frost$core$Int $tmp1656 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:415:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
org$frostlang$frostc$IR$Block$ID* $tmp1657 = &(&local3)->id;
*$tmp1657 = $tmp1655;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:82
frost$core$Int* $tmp1658 = &(&local3)->exit;
*$tmp1658 = $tmp1656;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1659 = *(&local3);
*(&local2) = $tmp1659;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1660 = *(&local2);
org$frostlang$frostc$IR$Block$ID $tmp1661 = *(&local1);
$fn1663 $tmp1662 = ($fn1663) param0->$class->vtable[4];
$tmp1662(param0, $tmp1660, $tmp1661);
goto block1;
block3:;
frost$core$Int $tmp1664 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:417:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1665 = $tmp1642.value;
int64_t $tmp1666 = $tmp1664.value;
bool $tmp1667 = $tmp1665 == $tmp1666;
frost$core$Bit $tmp1668 = (frost$core$Bit) {$tmp1667};
bool $tmp1669 = $tmp1668.value;
if ($tmp1669) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp1670 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1640)->$data + 0);
org$frostlang$frostc$Position $tmp1671 = *$tmp1670;
org$frostlang$frostc$IR$Value** $tmp1672 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1640)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1673 = *$tmp1672;
org$frostlang$frostc$IR$Block$ID* $tmp1674 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1640)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp1675 = *$tmp1674;
*(&local4) = $tmp1675;
org$frostlang$frostc$IR$Block$ID* $tmp1676 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1640)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp1677 = *$tmp1676;
*(&local5) = $tmp1677;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:418
org$frostlang$frostc$IR$Block* $tmp1678 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1679 = &$tmp1678->id;
org$frostlang$frostc$IR$Block$ID $tmp1680 = *$tmp1679;
frost$core$Int $tmp1681 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:418:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
org$frostlang$frostc$IR$Block$ID* $tmp1682 = &(&local7)->id;
*$tmp1682 = $tmp1680;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:82
frost$core$Int* $tmp1683 = &(&local7)->exit;
*$tmp1683 = $tmp1681;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1684 = *(&local7);
*(&local6) = $tmp1684;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1685 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp1686 = *(&local4);
$fn1688 $tmp1687 = ($fn1688) param0->$class->vtable[4];
$tmp1687(param0, $tmp1685, $tmp1686);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:419
org$frostlang$frostc$IR$Block* $tmp1689 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1690 = &$tmp1689->id;
org$frostlang$frostc$IR$Block$ID $tmp1691 = *$tmp1690;
frost$core$Int $tmp1692 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:419:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
org$frostlang$frostc$IR$Block$ID* $tmp1693 = &(&local9)->id;
*$tmp1693 = $tmp1691;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:82
frost$core$Int* $tmp1694 = &(&local9)->exit;
*$tmp1694 = $tmp1692;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1695 = *(&local9);
*(&local8) = $tmp1695;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1696 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp1697 = *(&local5);
$fn1699 $tmp1698 = ($fn1699) param0->$class->vtable[4];
$tmp1698(param0, $tmp1696, $tmp1697);
goto block1;
block7:;
frost$core$Int $tmp1700 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:421:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1701 = $tmp1642.value;
int64_t $tmp1702 = $tmp1700.value;
bool $tmp1703 = $tmp1701 == $tmp1702;
frost$core$Bit $tmp1704 = (frost$core$Bit) {$tmp1703};
bool $tmp1705 = $tmp1704.value;
if ($tmp1705) goto block11; else goto block12;
block11:;
goto block1;
block12:;
frost$core$Int $tmp1706 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:423:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1707 = $tmp1642.value;
int64_t $tmp1708 = $tmp1706.value;
bool $tmp1709 = $tmp1707 == $tmp1708;
frost$core$Bit $tmp1710 = (frost$core$Bit) {$tmp1709};
bool $tmp1711 = $tmp1710.value;
if ($tmp1711) goto block14; else goto block15;
block14:;
goto block1;
block15:;
frost$core$Int $tmp1712 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:425:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1713 = $tmp1642.value;
int64_t $tmp1714 = $tmp1712.value;
bool $tmp1715 = $tmp1713 == $tmp1714;
frost$core$Bit $tmp1716 = (frost$core$Bit) {$tmp1715};
bool $tmp1717 = $tmp1716.value;
if ($tmp1717) goto block17; else goto block18;
block17:;
goto block1;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:428
frost$core$Int $tmp1718 = (frost$core$Int) {428u};
org$frostlang$frostc$IR$Block* $tmp1719 = *(&local0);
org$frostlang$frostc$LinkedList** $tmp1720 = &$tmp1719->statements;
org$frostlang$frostc$LinkedList* $tmp1721 = *$tmp1720;
$fn1723 $tmp1722 = ($fn1723) $tmp1721->$class->vtable[6];
frost$core$Object* $tmp1724 = $tmp1722($tmp1721);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:428:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1726 $tmp1725 = ($fn1726) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1724))->$class->vtable[0];
frost$core$String* $tmp1727 = $tmp1725(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1724)));
frost$core$String* $tmp1728 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1729, $tmp1727);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1730, $tmp1718, $tmp1728);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
frost$core$Frost$unref$frost$core$Object$Q($tmp1724);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1640);
org$frostlang$frostc$IR$Block* $tmp1731 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$dump(org$frostlang$frostc$pass$Analyzer* param0) {

frost$core$Int local0;
org$frostlang$frostc$IR$Block* local1 = NULL;
frost$collections$Iterator* local2 = NULL;
frost$collections$Iterator* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:434
org$frostlang$frostc$MethodDecl** $tmp1732 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp1733 = *$tmp1732;
frost$core$String* $tmp1734 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp1733);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Analyzer.frost:434:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1734);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1735);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:435
frost$core$Int $tmp1736 = (frost$core$Int) {0u};
org$frostlang$frostc$IR** $tmp1737 = &param0->ir;
org$frostlang$frostc$IR* $tmp1738 = *$tmp1737;
frost$collections$Array** $tmp1739 = &$tmp1738->locals;
frost$collections$Array* $tmp1740 = *$tmp1739;
ITable* $tmp1741 = ((frost$collections$CollectionView*) $tmp1740)->$class->itable;
while ($tmp1741->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1741 = $tmp1741->next;
}
$fn1743 $tmp1742 = $tmp1741->methods[0];
frost$core$Int $tmp1744 = $tmp1742(((frost$collections$CollectionView*) $tmp1740));
frost$core$Bit $tmp1745 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1746 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1736, $tmp1744, $tmp1745);
frost$core$Int $tmp1747 = $tmp1746.min;
*(&local0) = $tmp1747;
frost$core$Int $tmp1748 = $tmp1746.max;
frost$core$Bit $tmp1749 = $tmp1746.inclusive;
bool $tmp1750 = $tmp1749.value;
frost$core$Int $tmp1751 = (frost$core$Int) {1u};
if ($tmp1750) goto block6; else goto block7;
block6:;
int64_t $tmp1752 = $tmp1747.value;
int64_t $tmp1753 = $tmp1748.value;
bool $tmp1754 = $tmp1752 <= $tmp1753;
frost$core$Bit $tmp1755 = (frost$core$Bit) {$tmp1754};
bool $tmp1756 = $tmp1755.value;
if ($tmp1756) goto block3; else goto block4;
block7:;
int64_t $tmp1757 = $tmp1747.value;
int64_t $tmp1758 = $tmp1748.value;
bool $tmp1759 = $tmp1757 < $tmp1758;
frost$core$Bit $tmp1760 = (frost$core$Bit) {$tmp1759};
bool $tmp1761 = $tmp1760.value;
if ($tmp1761) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:436
frost$core$Int $tmp1762 = *(&local0);
frost$core$Int$wrapper* $tmp1763;
$tmp1763 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1763->value = $tmp1762;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:436:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1765 $tmp1764 = ($fn1765) ((frost$core$Object*) $tmp1763)->$class->vtable[0];
frost$core$String* $tmp1766 = $tmp1764(((frost$core$Object*) $tmp1763));
frost$core$String* $tmp1767 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1768, $tmp1766);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1766));
frost$core$String* $tmp1769 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1767, &$s1770);
org$frostlang$frostc$IR** $tmp1771 = &param0->ir;
org$frostlang$frostc$IR* $tmp1772 = *$tmp1771;
frost$collections$Array** $tmp1773 = &$tmp1772->locals;
frost$collections$Array* $tmp1774 = *$tmp1773;
frost$core$Int $tmp1775 = *(&local0);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:436:54
frost$core$Int $tmp1776 = (frost$core$Int) {0u};
int64_t $tmp1777 = $tmp1775.value;
int64_t $tmp1778 = $tmp1776.value;
bool $tmp1779 = $tmp1777 >= $tmp1778;
frost$core$Bit $tmp1780 = (frost$core$Bit) {$tmp1779};
bool $tmp1781 = $tmp1780.value;
if ($tmp1781) goto block12; else goto block11;
block12:;
ITable* $tmp1782 = ((frost$collections$CollectionView*) $tmp1774)->$class->itable;
while ($tmp1782->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1782 = $tmp1782->next;
}
$fn1784 $tmp1783 = $tmp1782->methods[0];
frost$core$Int $tmp1785 = $tmp1783(((frost$collections$CollectionView*) $tmp1774));
int64_t $tmp1786 = $tmp1775.value;
int64_t $tmp1787 = $tmp1785.value;
bool $tmp1788 = $tmp1786 < $tmp1787;
frost$core$Bit $tmp1789 = (frost$core$Bit) {$tmp1788};
bool $tmp1790 = $tmp1789.value;
if ($tmp1790) goto block10; else goto block11;
block11:;
frost$core$Int $tmp1791 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1792, $tmp1791, &$s1793);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1794 = &$tmp1774->data;
frost$core$Object** $tmp1795 = *$tmp1794;
frost$core$Int64 $tmp1796 = frost$core$Int64$init$frost$core$Int($tmp1775);
int64_t $tmp1797 = $tmp1796.value;
frost$core$Object* $tmp1798 = $tmp1795[$tmp1797];
frost$core$Frost$ref$frost$core$Object$Q($tmp1798);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:436:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1800 $tmp1799 = ($fn1800) ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1798))->$class->vtable[0];
frost$core$String* $tmp1801 = $tmp1799(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1798)));
frost$core$String* $tmp1802 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1769, $tmp1801);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
frost$core$String* $tmp1803 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1802, &$s1804);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Analyzer.frost:436:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1803);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1805);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
frost$core$Frost$unref$frost$core$Object$Q($tmp1798);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1763));
frost$core$Int $tmp1806 = *(&local0);
int64_t $tmp1807 = $tmp1748.value;
int64_t $tmp1808 = $tmp1806.value;
int64_t $tmp1809 = $tmp1807 - $tmp1808;
frost$core$Int $tmp1810 = (frost$core$Int) {$tmp1809};
if ($tmp1750) goto block17; else goto block18;
block17:;
int64_t $tmp1811 = $tmp1810.value;
int64_t $tmp1812 = $tmp1751.value;
bool $tmp1813 = $tmp1811 >= $tmp1812;
frost$core$Bit $tmp1814 = (frost$core$Bit) {$tmp1813};
bool $tmp1815 = $tmp1814.value;
if ($tmp1815) goto block16; else goto block4;
block18:;
int64_t $tmp1816 = $tmp1810.value;
int64_t $tmp1817 = $tmp1751.value;
bool $tmp1818 = $tmp1816 > $tmp1817;
frost$core$Bit $tmp1819 = (frost$core$Bit) {$tmp1818};
bool $tmp1820 = $tmp1819.value;
if ($tmp1820) goto block16; else goto block4;
block16:;
int64_t $tmp1821 = $tmp1806.value;
int64_t $tmp1822 = $tmp1751.value;
int64_t $tmp1823 = $tmp1821 + $tmp1822;
frost$core$Int $tmp1824 = (frost$core$Int) {$tmp1823};
*(&local0) = $tmp1824;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:438
org$frostlang$frostc$IR** $tmp1825 = &param0->ir;
org$frostlang$frostc$IR* $tmp1826 = *$tmp1825;
frost$collections$Array** $tmp1827 = &$tmp1826->blocks;
frost$collections$Array* $tmp1828 = *$tmp1827;
ITable* $tmp1829 = ((frost$collections$Iterable*) $tmp1828)->$class->itable;
while ($tmp1829->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1829 = $tmp1829->next;
}
$fn1831 $tmp1830 = $tmp1829->methods[0];
frost$collections$Iterator* $tmp1832 = $tmp1830(((frost$collections$Iterable*) $tmp1828));
goto block19;
block19:;
ITable* $tmp1833 = $tmp1832->$class->itable;
while ($tmp1833->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1833 = $tmp1833->next;
}
$fn1835 $tmp1834 = $tmp1833->methods[0];
frost$core$Bit $tmp1836 = $tmp1834($tmp1832);
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block21; else goto block20;
block20:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp1838 = $tmp1832->$class->itable;
while ($tmp1838->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1838 = $tmp1838->next;
}
$fn1840 $tmp1839 = $tmp1838->methods[1];
frost$core$Object* $tmp1841 = $tmp1839($tmp1832);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp1841)));
org$frostlang$frostc$IR$Block* $tmp1842 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp1841);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:439
org$frostlang$frostc$IR$Block* $tmp1843 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp1844 = &$tmp1843->id;
org$frostlang$frostc$IR$Block$ID $tmp1845 = *$tmp1844;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1846;
$tmp1846 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1846->value = $tmp1845;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:439:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1848 $tmp1847 = ($fn1848) ((frost$core$Object*) $tmp1846)->$class->vtable[0];
frost$core$String* $tmp1849 = $tmp1847(((frost$core$Object*) $tmp1846));
frost$core$String* $tmp1850 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1851, $tmp1849);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
frost$core$String* $tmp1852 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1850, &$s1853);
frost$io$Console$print$frost$core$String($tmp1852);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:440
frost$collections$HashMap** $tmp1854 = &param0->entryStates;
frost$collections$HashMap* $tmp1855 = *$tmp1854;
org$frostlang$frostc$IR$Block* $tmp1856 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp1857 = &$tmp1856->id;
org$frostlang$frostc$IR$Block$ID $tmp1858 = *$tmp1857;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1859;
$tmp1859 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1859->value = $tmp1858;
frost$core$Object* $tmp1860 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1855, ((frost$collections$Key*) $tmp1859));
frost$core$Bit $tmp1861 = (frost$core$Bit) {((org$frostlang$frostc$pass$Analyzer$State*) $tmp1860) != NULL};
bool $tmp1862 = $tmp1861.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1860);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1859)));
if ($tmp1862) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:441
frost$collections$HashMap** $tmp1863 = &param0->entryStates;
frost$collections$HashMap* $tmp1864 = *$tmp1863;
org$frostlang$frostc$IR$Block* $tmp1865 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp1866 = &$tmp1865->id;
org$frostlang$frostc$IR$Block$ID $tmp1867 = *$tmp1866;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1868;
$tmp1868 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1868->value = $tmp1867;
frost$core$Object* $tmp1869 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1864, ((frost$collections$Key*) $tmp1868));
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:441:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1871 $tmp1870 = ($fn1871) ((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1869))->$class->vtable[0];
frost$core$String* $tmp1872 = $tmp1870(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1869)));
frost$core$String* $tmp1873 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1874, $tmp1872);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
frost$io$Console$print$frost$core$String($tmp1873);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
frost$core$Frost$unref$frost$core$Object$Q($tmp1869);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1868)));
goto block24;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:443
// begin inline call to method frost.io.Console.printLine() from Analyzer.frost:443:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1875);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:444
org$frostlang$frostc$IR$Block* $tmp1876 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1877 = &$tmp1876->ids;
org$frostlang$frostc$LinkedList* $tmp1878 = *$tmp1877;
ITable* $tmp1879 = ((frost$collections$Iterable*) $tmp1878)->$class->itable;
while ($tmp1879->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1879 = $tmp1879->next;
}
$fn1881 $tmp1880 = $tmp1879->methods[0];
frost$collections$Iterator* $tmp1882 = $tmp1880(((frost$collections$Iterable*) $tmp1878));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
frost$collections$Iterator* $tmp1883 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
*(&local2) = $tmp1882;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:445
org$frostlang$frostc$IR$Block* $tmp1884 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1885 = &$tmp1884->statements;
org$frostlang$frostc$LinkedList* $tmp1886 = *$tmp1885;
ITable* $tmp1887 = ((frost$collections$Iterable*) $tmp1886)->$class->itable;
while ($tmp1887->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1887 = $tmp1887->next;
}
$fn1889 $tmp1888 = $tmp1887->methods[0];
frost$collections$Iterator* $tmp1890 = $tmp1888(((frost$collections$Iterable*) $tmp1886));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
frost$collections$Iterator* $tmp1891 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
*(&local3) = $tmp1890;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:446
goto block27;
block27:;
frost$collections$Iterator* $tmp1892 = *(&local2);
ITable* $tmp1893 = $tmp1892->$class->itable;
while ($tmp1893->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1893 = $tmp1893->next;
}
$fn1895 $tmp1894 = $tmp1893->methods[0];
frost$core$Bit $tmp1896 = $tmp1894($tmp1892);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:446:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1897 = $tmp1896.value;
bool $tmp1898 = !$tmp1897;
frost$core$Bit $tmp1899 = (frost$core$Bit) {$tmp1898};
bool $tmp1900 = $tmp1899.value;
if ($tmp1900) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:447
frost$collections$Iterator* $tmp1901 = *(&local2);
ITable* $tmp1902 = $tmp1901->$class->itable;
while ($tmp1902->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1902 = $tmp1902->next;
}
$fn1904 $tmp1903 = $tmp1902->methods[1];
frost$core$Object* $tmp1905 = $tmp1903($tmp1901);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1906;
$tmp1906 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1906->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp1905)->value;
// begin inline call to method frost.io.Console.print(o:frost.core.Object) from Analyzer.frost:447:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:54
$fn1908 $tmp1907 = ($fn1908) ((frost$core$Object*) $tmp1906)->$class->vtable[0];
frost$core$String* $tmp1909 = $tmp1907(((frost$core$Object*) $tmp1906));
frost$io$Console$print$frost$core$String($tmp1909);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
frost$core$Frost$unref$frost$core$Object$Q($tmp1905);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:448
frost$io$Console$print$frost$core$String(&$s1910);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:449
frost$collections$Iterator* $tmp1911 = *(&local3);
ITable* $tmp1912 = $tmp1911->$class->itable;
while ($tmp1912->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1912 = $tmp1912->next;
}
$fn1914 $tmp1913 = $tmp1912->methods[1];
frost$core$Object* $tmp1915 = $tmp1913($tmp1911);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from Analyzer.frost:449:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn1917 $tmp1916 = ($fn1917) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1915))->$class->vtable[0];
frost$core$String* $tmp1918 = $tmp1916(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1915)));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1918);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1918));
frost$core$Frost$unref$frost$core$Object$Q($tmp1915);
goto block27;
block29:;
frost$collections$Iterator* $tmp1919 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp1920 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1920));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1841);
org$frostlang$frostc$IR$Block* $tmp1921 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
return;

}
void org$frostlang$frostc$pass$Analyzer$analyze(org$frostlang$frostc$pass$Analyzer* param0) {

org$frostlang$frostc$pass$Analyzer$DataFlowValue* local0 = NULL;
org$frostlang$frostc$pass$Analyzer$State* local1 = NULL;
frost$core$Int local2;
org$frostlang$frostc$IR$Block* local3 = NULL;
frost$collections$Iterator* local4 = NULL;
frost$collections$Iterator* local5 = NULL;
org$frostlang$frostc$IR$Block$ID local6;
org$frostlang$frostc$IR$Block* local7 = NULL;
org$frostlang$frostc$MethodDecl$Kind local8;
org$frostlang$frostc$MethodDecl$Kind local9;
org$frostlang$frostc$pass$Analyzer$BlockExit local10;
org$frostlang$frostc$pass$Analyzer$BlockExit local11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:455
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1922 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp1923 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1924 = *$tmp1923;
org$frostlang$frostc$Type** $tmp1925 = &$tmp1924->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp1926 = *$tmp1925;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1922, $tmp1926);
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1927 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
*(&local0) = $tmp1922;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:456
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$pass$Analyzer$State));
org$frostlang$frostc$pass$Analyzer$State* $tmp1928 = (org$frostlang$frostc$pass$Analyzer$State*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$State$class);
org$frostlang$frostc$pass$Analyzer$State$init($tmp1928);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
org$frostlang$frostc$pass$Analyzer$State* $tmp1929 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
*(&local1) = $tmp1928;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:457
frost$core$Int $tmp1930 = (frost$core$Int) {0u};
org$frostlang$frostc$IR** $tmp1931 = &param0->ir;
org$frostlang$frostc$IR* $tmp1932 = *$tmp1931;
frost$collections$Array** $tmp1933 = &$tmp1932->locals;
frost$collections$Array* $tmp1934 = *$tmp1933;
ITable* $tmp1935 = ((frost$collections$CollectionView*) $tmp1934)->$class->itable;
while ($tmp1935->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1935 = $tmp1935->next;
}
$fn1937 $tmp1936 = $tmp1935->methods[0];
frost$core$Int $tmp1938 = $tmp1936(((frost$collections$CollectionView*) $tmp1934));
frost$core$Bit $tmp1939 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1940 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1930, $tmp1938, $tmp1939);
frost$core$Int $tmp1941 = $tmp1940.min;
*(&local2) = $tmp1941;
frost$core$Int $tmp1942 = $tmp1940.max;
frost$core$Bit $tmp1943 = $tmp1940.inclusive;
bool $tmp1944 = $tmp1943.value;
frost$core$Int $tmp1945 = (frost$core$Int) {1u};
if ($tmp1944) goto block4; else goto block5;
block4:;
int64_t $tmp1946 = $tmp1941.value;
int64_t $tmp1947 = $tmp1942.value;
bool $tmp1948 = $tmp1946 <= $tmp1947;
frost$core$Bit $tmp1949 = (frost$core$Bit) {$tmp1948};
bool $tmp1950 = $tmp1949.value;
if ($tmp1950) goto block1; else goto block2;
block5:;
int64_t $tmp1951 = $tmp1941.value;
int64_t $tmp1952 = $tmp1942.value;
bool $tmp1953 = $tmp1951 < $tmp1952;
frost$core$Bit $tmp1954 = (frost$core$Bit) {$tmp1953};
bool $tmp1955 = $tmp1954.value;
if ($tmp1955) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:458
org$frostlang$frostc$pass$Analyzer$State* $tmp1956 = *(&local1);
frost$collections$Array** $tmp1957 = &$tmp1956->locals;
frost$collections$Array* $tmp1958 = *$tmp1957;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1959 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1958, ((frost$core$Object*) $tmp1959));
frost$core$Int $tmp1960 = *(&local2);
int64_t $tmp1961 = $tmp1942.value;
int64_t $tmp1962 = $tmp1960.value;
int64_t $tmp1963 = $tmp1961 - $tmp1962;
frost$core$Int $tmp1964 = (frost$core$Int) {$tmp1963};
if ($tmp1944) goto block7; else goto block8;
block7:;
int64_t $tmp1965 = $tmp1964.value;
int64_t $tmp1966 = $tmp1945.value;
bool $tmp1967 = $tmp1965 >= $tmp1966;
frost$core$Bit $tmp1968 = (frost$core$Bit) {$tmp1967};
bool $tmp1969 = $tmp1968.value;
if ($tmp1969) goto block6; else goto block2;
block8:;
int64_t $tmp1970 = $tmp1964.value;
int64_t $tmp1971 = $tmp1945.value;
bool $tmp1972 = $tmp1970 > $tmp1971;
frost$core$Bit $tmp1973 = (frost$core$Bit) {$tmp1972};
bool $tmp1974 = $tmp1973.value;
if ($tmp1974) goto block6; else goto block2;
block6:;
int64_t $tmp1975 = $tmp1960.value;
int64_t $tmp1976 = $tmp1945.value;
int64_t $tmp1977 = $tmp1975 + $tmp1976;
frost$core$Int $tmp1978 = (frost$core$Int) {$tmp1977};
*(&local2) = $tmp1978;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:460
frost$collections$HashMap** $tmp1979 = &param0->entryStates;
frost$collections$HashMap* $tmp1980 = *$tmp1979;
org$frostlang$frostc$IR** $tmp1981 = &param0->ir;
org$frostlang$frostc$IR* $tmp1982 = *$tmp1981;
frost$collections$Array** $tmp1983 = &$tmp1982->blocks;
frost$collections$Array* $tmp1984 = *$tmp1983;
frost$core$Int $tmp1985 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:460:30
frost$core$Int $tmp1986 = (frost$core$Int) {0u};
int64_t $tmp1987 = $tmp1985.value;
int64_t $tmp1988 = $tmp1986.value;
bool $tmp1989 = $tmp1987 >= $tmp1988;
frost$core$Bit $tmp1990 = (frost$core$Bit) {$tmp1989};
bool $tmp1991 = $tmp1990.value;
if ($tmp1991) goto block12; else goto block11;
block12:;
ITable* $tmp1992 = ((frost$collections$CollectionView*) $tmp1984)->$class->itable;
while ($tmp1992->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1992 = $tmp1992->next;
}
$fn1994 $tmp1993 = $tmp1992->methods[0];
frost$core$Int $tmp1995 = $tmp1993(((frost$collections$CollectionView*) $tmp1984));
int64_t $tmp1996 = $tmp1985.value;
int64_t $tmp1997 = $tmp1995.value;
bool $tmp1998 = $tmp1996 < $tmp1997;
frost$core$Bit $tmp1999 = (frost$core$Bit) {$tmp1998};
bool $tmp2000 = $tmp1999.value;
if ($tmp2000) goto block10; else goto block11;
block11:;
frost$core$Int $tmp2001 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2002, $tmp2001, &$s2003);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2004 = &$tmp1984->data;
frost$core$Object** $tmp2005 = *$tmp2004;
frost$core$Int64 $tmp2006 = frost$core$Int64$init$frost$core$Int($tmp1985);
int64_t $tmp2007 = $tmp2006.value;
frost$core$Object* $tmp2008 = $tmp2005[$tmp2007];
frost$core$Frost$ref$frost$core$Object$Q($tmp2008);
org$frostlang$frostc$IR$Block$ID* $tmp2009 = &((org$frostlang$frostc$IR$Block*) $tmp2008)->id;
org$frostlang$frostc$IR$Block$ID $tmp2010 = *$tmp2009;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2011;
$tmp2011 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2011->value = $tmp2010;
org$frostlang$frostc$pass$Analyzer$State* $tmp2012 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1980, ((frost$collections$Key*) $tmp2011), ((frost$core$Object*) $tmp2012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2011)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2008);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:461
org$frostlang$frostc$IR** $tmp2013 = &param0->ir;
org$frostlang$frostc$IR* $tmp2014 = *$tmp2013;
frost$collections$Array** $tmp2015 = &$tmp2014->blocks;
frost$collections$Array* $tmp2016 = *$tmp2015;
ITable* $tmp2017 = ((frost$collections$Iterable*) $tmp2016)->$class->itable;
while ($tmp2017->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2017 = $tmp2017->next;
}
$fn2019 $tmp2018 = $tmp2017->methods[0];
frost$collections$Iterator* $tmp2020 = $tmp2018(((frost$collections$Iterable*) $tmp2016));
goto block13;
block13:;
ITable* $tmp2021 = $tmp2020->$class->itable;
while ($tmp2021->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2021 = $tmp2021->next;
}
$fn2023 $tmp2022 = $tmp2021->methods[0];
frost$core$Bit $tmp2024 = $tmp2022($tmp2020);
bool $tmp2025 = $tmp2024.value;
if ($tmp2025) goto block15; else goto block14;
block14:;
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2026 = $tmp2020->$class->itable;
while ($tmp2026->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2026 = $tmp2026->next;
}
$fn2028 $tmp2027 = $tmp2026->methods[1];
frost$core$Object* $tmp2029 = $tmp2027($tmp2020);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2029)));
org$frostlang$frostc$IR$Block* $tmp2030 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
*(&local3) = ((org$frostlang$frostc$IR$Block*) $tmp2029);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:462
frost$collections$HashMap** $tmp2031 = &param0->blocks;
frost$collections$HashMap* $tmp2032 = *$tmp2031;
org$frostlang$frostc$IR$Block* $tmp2033 = *(&local3);
org$frostlang$frostc$IR$Block$ID* $tmp2034 = &$tmp2033->id;
org$frostlang$frostc$IR$Block$ID $tmp2035 = *$tmp2034;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2036;
$tmp2036 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2036->value = $tmp2035;
org$frostlang$frostc$IR$Block* $tmp2037 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2032, ((frost$collections$Key*) $tmp2036), ((frost$core$Object*) $tmp2037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2036)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:463
org$frostlang$frostc$IR$Block* $tmp2038 = *(&local3);
org$frostlang$frostc$LinkedList** $tmp2039 = &$tmp2038->ids;
org$frostlang$frostc$LinkedList* $tmp2040 = *$tmp2039;
ITable* $tmp2041 = ((frost$collections$Iterable*) $tmp2040)->$class->itable;
while ($tmp2041->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2041 = $tmp2041->next;
}
$fn2043 $tmp2042 = $tmp2041->methods[0];
frost$collections$Iterator* $tmp2044 = $tmp2042(((frost$collections$Iterable*) $tmp2040));
*(&local4) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2044));
frost$collections$Iterator* $tmp2045 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
*(&local4) = $tmp2044;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2044));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:464
org$frostlang$frostc$IR$Block* $tmp2046 = *(&local3);
org$frostlang$frostc$LinkedList** $tmp2047 = &$tmp2046->statements;
org$frostlang$frostc$LinkedList* $tmp2048 = *$tmp2047;
ITable* $tmp2049 = ((frost$collections$Iterable*) $tmp2048)->$class->itable;
while ($tmp2049->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2049 = $tmp2049->next;
}
$fn2051 $tmp2050 = $tmp2049->methods[0];
frost$collections$Iterator* $tmp2052 = $tmp2050(((frost$collections$Iterable*) $tmp2048));
*(&local5) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2052));
frost$collections$Iterator* $tmp2053 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
*(&local5) = $tmp2052;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2052));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:465
goto block16;
block16:;
frost$collections$Iterator* $tmp2054 = *(&local4);
ITable* $tmp2055 = $tmp2054->$class->itable;
while ($tmp2055->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2055 = $tmp2055->next;
}
$fn2057 $tmp2056 = $tmp2055->methods[0];
frost$core$Bit $tmp2058 = $tmp2056($tmp2054);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:465:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2059 = $tmp2058.value;
bool $tmp2060 = !$tmp2059;
frost$core$Bit $tmp2061 = (frost$core$Bit) {$tmp2060};
bool $tmp2062 = $tmp2061.value;
if ($tmp2062) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:466
frost$collections$HashMap** $tmp2063 = &param0->statements;
frost$collections$HashMap* $tmp2064 = *$tmp2063;
frost$collections$Iterator* $tmp2065 = *(&local4);
ITable* $tmp2066 = $tmp2065->$class->itable;
while ($tmp2066->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2066 = $tmp2066->next;
}
$fn2068 $tmp2067 = $tmp2066->methods[1];
frost$core$Object* $tmp2069 = $tmp2067($tmp2065);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2070;
$tmp2070 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2070->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2069)->value;
frost$collections$Iterator* $tmp2071 = *(&local5);
ITable* $tmp2072 = $tmp2071->$class->itable;
while ($tmp2072->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2072 = $tmp2072->next;
}
$fn2074 $tmp2073 = $tmp2072->methods[1];
frost$core$Object* $tmp2075 = $tmp2073($tmp2071);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2064, ((frost$collections$Key*) $tmp2070), ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2075)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2075);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2070)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2069);
goto block16;
block18:;
frost$collections$Iterator* $tmp2076 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
*(&local5) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp2077 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2077));
*(&local4) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2029);
org$frostlang$frostc$IR$Block* $tmp2078 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2020));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:469
frost$collections$HashSet** $tmp2079 = &param0->worklist;
frost$collections$HashSet* $tmp2080 = *$tmp2079;
org$frostlang$frostc$IR** $tmp2081 = &param0->ir;
org$frostlang$frostc$IR* $tmp2082 = *$tmp2081;
frost$collections$Array** $tmp2083 = &$tmp2082->blocks;
frost$collections$Array* $tmp2084 = *$tmp2083;
frost$core$Int $tmp2085 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:469:31
frost$core$Int $tmp2086 = (frost$core$Int) {0u};
int64_t $tmp2087 = $tmp2085.value;
int64_t $tmp2088 = $tmp2086.value;
bool $tmp2089 = $tmp2087 >= $tmp2088;
frost$core$Bit $tmp2090 = (frost$core$Bit) {$tmp2089};
bool $tmp2091 = $tmp2090.value;
if ($tmp2091) goto block23; else goto block22;
block23:;
ITable* $tmp2092 = ((frost$collections$CollectionView*) $tmp2084)->$class->itable;
while ($tmp2092->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2092 = $tmp2092->next;
}
$fn2094 $tmp2093 = $tmp2092->methods[0];
frost$core$Int $tmp2095 = $tmp2093(((frost$collections$CollectionView*) $tmp2084));
int64_t $tmp2096 = $tmp2085.value;
int64_t $tmp2097 = $tmp2095.value;
bool $tmp2098 = $tmp2096 < $tmp2097;
frost$core$Bit $tmp2099 = (frost$core$Bit) {$tmp2098};
bool $tmp2100 = $tmp2099.value;
if ($tmp2100) goto block21; else goto block22;
block22:;
frost$core$Int $tmp2101 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2102, $tmp2101, &$s2103);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2104 = &$tmp2084->data;
frost$core$Object** $tmp2105 = *$tmp2104;
frost$core$Int64 $tmp2106 = frost$core$Int64$init$frost$core$Int($tmp2085);
int64_t $tmp2107 = $tmp2106.value;
frost$core$Object* $tmp2108 = $tmp2105[$tmp2107];
frost$core$Frost$ref$frost$core$Object$Q($tmp2108);
org$frostlang$frostc$IR$Block$ID* $tmp2109 = &((org$frostlang$frostc$IR$Block*) $tmp2108)->id;
org$frostlang$frostc$IR$Block$ID $tmp2110 = *$tmp2109;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2111;
$tmp2111 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2111->value = $tmp2110;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:469:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp2112 = &$tmp2080->contents;
frost$collections$HashMap* $tmp2113 = *$tmp2112;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2113, ((frost$collections$Key*) $tmp2111), ((frost$core$Object*) ((frost$collections$Key*) $tmp2111)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2111)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2108);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:470
goto block25;
block25:;
frost$collections$HashSet** $tmp2114 = &param0->worklist;
frost$collections$HashSet* $tmp2115 = *$tmp2114;
ITable* $tmp2116 = ((frost$collections$CollectionView*) $tmp2115)->$class->itable;
while ($tmp2116->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2116 = $tmp2116->next;
}
$fn2118 $tmp2117 = $tmp2116->methods[0];
frost$core$Int $tmp2119 = $tmp2117(((frost$collections$CollectionView*) $tmp2115));
frost$core$Int $tmp2120 = (frost$core$Int) {0u};
int64_t $tmp2121 = $tmp2119.value;
int64_t $tmp2122 = $tmp2120.value;
bool $tmp2123 = $tmp2121 > $tmp2122;
frost$core$Bit $tmp2124 = (frost$core$Bit) {$tmp2123};
bool $tmp2125 = $tmp2124.value;
if ($tmp2125) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:471
frost$collections$HashSet** $tmp2126 = &param0->worklist;
frost$collections$HashSet* $tmp2127 = *$tmp2126;
ITable* $tmp2128 = ((frost$collections$Iterable*) $tmp2127)->$class->itable;
while ($tmp2128->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2128 = $tmp2128->next;
}
$fn2130 $tmp2129 = $tmp2128->methods[0];
frost$collections$Iterator* $tmp2131 = $tmp2129(((frost$collections$Iterable*) $tmp2127));
ITable* $tmp2132 = $tmp2131->$class->itable;
while ($tmp2132->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2132 = $tmp2132->next;
}
$fn2134 $tmp2133 = $tmp2132->methods[1];
frost$core$Object* $tmp2135 = $tmp2133($tmp2131);
*(&local6) = ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp2135)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:472
frost$collections$HashSet** $tmp2136 = &param0->worklist;
frost$collections$HashSet* $tmp2137 = *$tmp2136;
org$frostlang$frostc$IR$Block$ID $tmp2138 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2139;
$tmp2139 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2139->value = $tmp2138;
// begin inline call to method frost.collections.HashSet.remove(value:frost.collections.HashSet.T) from Analyzer.frost:472:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:30
frost$collections$HashMap** $tmp2140 = &$tmp2137->contents;
frost$collections$HashMap* $tmp2141 = *$tmp2140;
frost$collections$HashMap$remove$frost$collections$HashMap$K($tmp2141, ((frost$collections$Key*) $tmp2139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2139)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:473
org$frostlang$frostc$IR$Block$ID $tmp2142 = *(&local6);
$fn2144 $tmp2143 = ($fn2144) param0->$class->vtable[8];
$tmp2143(param0, $tmp2142);
goto block25;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:475
frost$core$Bit $tmp2145 = (frost$core$Bit) {true};
frost$core$Bit* $tmp2146 = &param0->reportErrors;
*$tmp2146 = $tmp2145;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:476
org$frostlang$frostc$IR** $tmp2147 = &param0->ir;
org$frostlang$frostc$IR* $tmp2148 = *$tmp2147;
frost$collections$Array** $tmp2149 = &$tmp2148->blocks;
frost$collections$Array* $tmp2150 = *$tmp2149;
ITable* $tmp2151 = ((frost$collections$Iterable*) $tmp2150)->$class->itable;
while ($tmp2151->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2151 = $tmp2151->next;
}
$fn2153 $tmp2152 = $tmp2151->methods[0];
frost$collections$Iterator* $tmp2154 = $tmp2152(((frost$collections$Iterable*) $tmp2150));
goto block29;
block29:;
ITable* $tmp2155 = $tmp2154->$class->itable;
while ($tmp2155->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2155 = $tmp2155->next;
}
$fn2157 $tmp2156 = $tmp2155->methods[0];
frost$core$Bit $tmp2158 = $tmp2156($tmp2154);
bool $tmp2159 = $tmp2158.value;
if ($tmp2159) goto block31; else goto block30;
block30:;
*(&local7) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2160 = $tmp2154->$class->itable;
while ($tmp2160->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2160 = $tmp2160->next;
}
$fn2162 $tmp2161 = $tmp2160->methods[1];
frost$core$Object* $tmp2163 = $tmp2161($tmp2154);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2163)));
org$frostlang$frostc$IR$Block* $tmp2164 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
*(&local7) = ((org$frostlang$frostc$IR$Block*) $tmp2163);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:477
frost$collections$HashMap** $tmp2165 = &param0->entryStates;
frost$collections$HashMap* $tmp2166 = *$tmp2165;
org$frostlang$frostc$IR$Block* $tmp2167 = *(&local7);
org$frostlang$frostc$IR$Block$ID* $tmp2168 = &$tmp2167->id;
org$frostlang$frostc$IR$Block$ID $tmp2169 = *$tmp2168;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2170;
$tmp2170 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2170->value = $tmp2169;
frost$core$Object* $tmp2171 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2166, ((frost$collections$Key*) $tmp2170));
frost$core$Bit $tmp2172 = (frost$core$Bit) {((org$frostlang$frostc$pass$Analyzer$State*) $tmp2171) != NULL};
bool $tmp2173 = $tmp2172.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2171);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2170)));
if ($tmp2173) goto block32; else goto block34;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:478
org$frostlang$frostc$IR$Block* $tmp2174 = *(&local7);
org$frostlang$frostc$LinkedList** $tmp2175 = &$tmp2174->statements;
org$frostlang$frostc$LinkedList* $tmp2176 = *$tmp2175;
ITable* $tmp2177 = ((frost$collections$CollectionView*) $tmp2176)->$class->itable;
while ($tmp2177->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2177 = $tmp2177->next;
}
$fn2179 $tmp2178 = $tmp2177->methods[1];
frost$core$Object* $tmp2180 = $tmp2178(((frost$collections$CollectionView*) $tmp2176));
frost$core$Int* $tmp2181 = &((org$frostlang$frostc$IR$Statement*) $tmp2180)->$rawValue;
frost$core$Int $tmp2182 = *$tmp2181;
frost$core$Int $tmp2183 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:479:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2184 = $tmp2182.value;
int64_t $tmp2185 = $tmp2183.value;
bool $tmp2186 = $tmp2184 == $tmp2185;
frost$core$Bit $tmp2187 = (frost$core$Bit) {$tmp2186};
bool $tmp2188 = $tmp2187.value;
if ($tmp2188) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:480
org$frostlang$frostc$MethodDecl** $tmp2189 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2190 = *$tmp2189;
org$frostlang$frostc$MethodDecl$Kind* $tmp2191 = &$tmp2190->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2192 = *$tmp2191;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2193;
$tmp2193 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2193->value = $tmp2192;
frost$core$Int $tmp2194 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Analyzer.frost:480:59
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2195 = &(&local9)->$rawValue;
*$tmp2195 = $tmp2194;
org$frostlang$frostc$MethodDecl$Kind $tmp2196 = *(&local9);
*(&local8) = $tmp2196;
org$frostlang$frostc$MethodDecl$Kind $tmp2197 = *(&local8);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2198;
$tmp2198 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2198->value = $tmp2197;
ITable* $tmp2199 = ((frost$core$Equatable*) $tmp2193)->$class->itable;
while ($tmp2199->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2199 = $tmp2199->next;
}
$fn2201 $tmp2200 = $tmp2199->methods[1];
frost$core$Bit $tmp2202 = $tmp2200(((frost$core$Equatable*) $tmp2193), ((frost$core$Equatable*) $tmp2198));
bool $tmp2203 = $tmp2202.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2198)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2193)));
if ($tmp2203) goto block41; else goto block40;
block41:;
org$frostlang$frostc$MethodDecl** $tmp2204 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2205 = *$tmp2204;
org$frostlang$frostc$Type** $tmp2206 = &$tmp2205->returnType;
org$frostlang$frostc$Type* $tmp2207 = *$tmp2206;
org$frostlang$frostc$Compiler** $tmp2208 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2209 = *$tmp2208;
org$frostlang$frostc$Type** $tmp2210 = &$tmp2209->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2211 = *$tmp2210;
ITable* $tmp2212 = ((frost$core$Equatable*) $tmp2207)->$class->itable;
while ($tmp2212->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2212 = $tmp2212->next;
}
$fn2214 $tmp2213 = $tmp2212->methods[1];
frost$core$Bit $tmp2215 = $tmp2213(((frost$core$Equatable*) $tmp2207), ((frost$core$Equatable*) $tmp2211));
bool $tmp2216 = $tmp2215.value;
if ($tmp2216) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:482
org$frostlang$frostc$Compiler** $tmp2217 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2218 = *$tmp2217;
org$frostlang$frostc$MethodDecl** $tmp2219 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2220 = *$tmp2219;
org$frostlang$frostc$Position* $tmp2221 = &((org$frostlang$frostc$Symbol*) $tmp2220)->position;
org$frostlang$frostc$Position $tmp2222 = *$tmp2221;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp2218, $tmp2222, &$s2223);
goto block40;
block40:;
goto block35;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:486
org$frostlang$frostc$IR$Block* $tmp2224 = *(&local7);
org$frostlang$frostc$IR$Block$ID* $tmp2225 = &$tmp2224->id;
org$frostlang$frostc$IR$Block$ID $tmp2226 = *$tmp2225;
frost$core$Int $tmp2227 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:486:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
org$frostlang$frostc$IR$Block$ID* $tmp2228 = &(&local11)->id;
*$tmp2228 = $tmp2226;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:82
frost$core$Int* $tmp2229 = &(&local11)->exit;
*$tmp2229 = $tmp2227;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2230 = *(&local11);
*(&local10) = $tmp2230;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2231 = *(&local10);
$fn2233 $tmp2232 = ($fn2233) param0->$class->vtable[7];
org$frostlang$frostc$pass$Analyzer$State* $tmp2234 = $tmp2232(param0, $tmp2231);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
goto block35;
block35:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2180);
goto block33;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:490
org$frostlang$frostc$IR$Block* $tmp2235 = *(&local7);
frost$core$Bit* $tmp2236 = &$tmp2235->containsExplicitCode;
frost$core$Bit $tmp2237 = *$tmp2236;
bool $tmp2238 = $tmp2237.value;
if ($tmp2238) goto block46; else goto block45;
block46:;
org$frostlang$frostc$IR$Block* $tmp2239 = *(&local7);
frost$core$Bit* $tmp2240 = &$tmp2239->forceReachable;
frost$core$Bit $tmp2241 = *$tmp2240;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:490:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2242 = $tmp2241.value;
bool $tmp2243 = !$tmp2242;
frost$core$Bit $tmp2244 = (frost$core$Bit) {$tmp2243};
bool $tmp2245 = $tmp2244.value;
if ($tmp2245) goto block44; else goto block45;
block44:;
goto block45;
block45:;
goto block33;
block33:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2163);
org$frostlang$frostc$IR$Block* $tmp2246 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
*(&local7) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block29;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
org$frostlang$frostc$pass$Analyzer$State* $tmp2247 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2248 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$makeUnreachable$org$frostlang$frostc$IR$Block(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Block* param1) {

org$frostlang$frostc$IR$Statement$ID local0;
org$frostlang$frostc$Position local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:497
org$frostlang$frostc$LinkedList** $tmp2249 = &param1->ids;
org$frostlang$frostc$LinkedList* $tmp2250 = *$tmp2249;
ITable* $tmp2251 = ((frost$collections$CollectionView*) $tmp2250)->$class->itable;
while ($tmp2251->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2251 = $tmp2251->next;
}
$fn2253 $tmp2252 = $tmp2251->methods[1];
frost$core$Object* $tmp2254 = $tmp2252(((frost$collections$CollectionView*) $tmp2250));
*(&local0) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2254)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2254);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:498
org$frostlang$frostc$LinkedList** $tmp2255 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp2256 = *$tmp2255;
ITable* $tmp2257 = ((frost$collections$CollectionView*) $tmp2256)->$class->itable;
while ($tmp2257->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2257 = $tmp2257->next;
}
$fn2259 $tmp2258 = $tmp2257->methods[1];
frost$core$Object* $tmp2260 = $tmp2258(((frost$collections$CollectionView*) $tmp2256));
$fn2262 $tmp2261 = ($fn2262) ((org$frostlang$frostc$IR$Statement*) $tmp2260)->$class->vtable[2];
org$frostlang$frostc$Position $tmp2263 = $tmp2261(((org$frostlang$frostc$IR$Statement*) $tmp2260));
*(&local1) = $tmp2263;
frost$core$Frost$unref$frost$core$Object$Q($tmp2260);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:499
org$frostlang$frostc$LinkedList** $tmp2264 = &param1->ids;
org$frostlang$frostc$LinkedList* $tmp2265 = *$tmp2264;
$fn2267 $tmp2266 = ($fn2267) $tmp2265->$class->vtable[8];
$tmp2266($tmp2265);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:500
org$frostlang$frostc$LinkedList** $tmp2268 = &param1->ids;
org$frostlang$frostc$LinkedList* $tmp2269 = *$tmp2268;
org$frostlang$frostc$IR$Statement$ID $tmp2270 = *(&local0);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2271;
$tmp2271 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2271->value = $tmp2270;
$fn2273 $tmp2272 = ($fn2273) $tmp2269->$class->vtable[4];
$tmp2272($tmp2269, ((frost$core$Object*) $tmp2271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:501
org$frostlang$frostc$LinkedList** $tmp2274 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp2275 = *$tmp2274;
$fn2277 $tmp2276 = ($fn2277) $tmp2275->$class->vtable[8];
$tmp2276($tmp2275);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:502
org$frostlang$frostc$LinkedList** $tmp2278 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp2279 = *$tmp2278;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2280 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2281 = (frost$core$Int) {28u};
org$frostlang$frostc$Position $tmp2282 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position($tmp2280, $tmp2281, $tmp2282);
$fn2284 $tmp2283 = ($fn2284) $tmp2279->$class->vtable[4];
$tmp2283($tmp2279, ((frost$core$Object*) $tmp2280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2280));
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:506
org$frostlang$frostc$IR** $tmp2285 = &param0->ir;
org$frostlang$frostc$IR* $tmp2286 = *$tmp2285;
frost$collections$Array** $tmp2287 = &$tmp2286->blocks;
frost$collections$Array* $tmp2288 = *$tmp2287;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:506:33
frost$core$Int $tmp2289 = (frost$core$Int) {0u};
int64_t $tmp2290 = param1.value;
int64_t $tmp2291 = $tmp2289.value;
bool $tmp2292 = $tmp2290 >= $tmp2291;
frost$core$Bit $tmp2293 = (frost$core$Bit) {$tmp2292};
bool $tmp2294 = $tmp2293.value;
if ($tmp2294) goto block4; else goto block3;
block4:;
ITable* $tmp2295 = ((frost$collections$CollectionView*) $tmp2288)->$class->itable;
while ($tmp2295->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2295 = $tmp2295->next;
}
$fn2297 $tmp2296 = $tmp2295->methods[0];
frost$core$Int $tmp2298 = $tmp2296(((frost$collections$CollectionView*) $tmp2288));
int64_t $tmp2299 = param1.value;
int64_t $tmp2300 = $tmp2298.value;
bool $tmp2301 = $tmp2299 < $tmp2300;
frost$core$Bit $tmp2302 = (frost$core$Bit) {$tmp2301};
bool $tmp2303 = $tmp2302.value;
if ($tmp2303) goto block2; else goto block3;
block3:;
frost$core$Int $tmp2304 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2305, $tmp2304, &$s2306);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2307 = &$tmp2288->data;
frost$core$Object** $tmp2308 = *$tmp2307;
frost$core$Int64 $tmp2309 = frost$core$Int64$init$frost$core$Int(param1);
int64_t $tmp2310 = $tmp2309.value;
frost$core$Object* $tmp2311 = $tmp2308[$tmp2310];
frost$core$Frost$ref$frost$core$Object$Q($tmp2311);
org$frostlang$frostc$IR$Block$ID* $tmp2312 = &((org$frostlang$frostc$IR$Block*) $tmp2311)->id;
org$frostlang$frostc$IR$Block$ID $tmp2313 = *$tmp2312;
*(&local0) = $tmp2313;
frost$core$Frost$unref$frost$core$Object$Q($tmp2311);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:507
org$frostlang$frostc$IR** $tmp2314 = &param0->ir;
org$frostlang$frostc$IR* $tmp2315 = *$tmp2314;
frost$collections$Array** $tmp2316 = &$tmp2315->blocks;
frost$collections$Array* $tmp2317 = *$tmp2316;
frost$core$Object* $tmp2318 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp2317, param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp2318);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:508
org$frostlang$frostc$IR** $tmp2319 = &param0->ir;
org$frostlang$frostc$IR* $tmp2320 = *$tmp2319;
frost$collections$Array** $tmp2321 = &$tmp2320->blocks;
frost$collections$Array* $tmp2322 = *$tmp2321;
ITable* $tmp2323 = ((frost$collections$Iterable*) $tmp2322)->$class->itable;
while ($tmp2323->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2323 = $tmp2323->next;
}
$fn2325 $tmp2324 = $tmp2323->methods[0];
frost$collections$Iterator* $tmp2326 = $tmp2324(((frost$collections$Iterable*) $tmp2322));
goto block5;
block5:;
ITable* $tmp2327 = $tmp2326->$class->itable;
while ($tmp2327->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2327 = $tmp2327->next;
}
$fn2329 $tmp2328 = $tmp2327->methods[0];
frost$core$Bit $tmp2330 = $tmp2328($tmp2326);
bool $tmp2331 = $tmp2330.value;
if ($tmp2331) goto block7; else goto block6;
block6:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2332 = $tmp2326->$class->itable;
while ($tmp2332->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2332 = $tmp2332->next;
}
$fn2334 $tmp2333 = $tmp2332->methods[1];
frost$core$Object* $tmp2335 = $tmp2333($tmp2326);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2335)));
org$frostlang$frostc$IR$Block* $tmp2336 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2336));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp2335);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:509
org$frostlang$frostc$IR$Block* $tmp2337 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp2338 = &$tmp2337->statements;
org$frostlang$frostc$LinkedList* $tmp2339 = *$tmp2338;
ITable* $tmp2340 = ((frost$collections$CollectionView*) $tmp2339)->$class->itable;
while ($tmp2340->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2340 = $tmp2340->next;
}
$fn2342 $tmp2341 = $tmp2340->methods[0];
frost$core$Int $tmp2343 = $tmp2341(((frost$collections$CollectionView*) $tmp2339));
frost$core$Int $tmp2344 = (frost$core$Int) {1u};
int64_t $tmp2345 = $tmp2343.value;
int64_t $tmp2346 = $tmp2344.value;
int64_t $tmp2347 = $tmp2345 - $tmp2346;
frost$core$Int $tmp2348 = (frost$core$Int) {$tmp2347};
*(&local2) = $tmp2348;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:510
org$frostlang$frostc$IR$Block* $tmp2349 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp2350 = &$tmp2349->statements;
org$frostlang$frostc$LinkedList* $tmp2351 = *$tmp2350;
$fn2353 $tmp2352 = ($fn2353) $tmp2351->$class->vtable[6];
frost$core$Object* $tmp2354 = $tmp2352($tmp2351);
frost$core$Int* $tmp2355 = &((org$frostlang$frostc$IR$Statement*) $tmp2354)->$rawValue;
frost$core$Int $tmp2356 = *$tmp2355;
frost$core$Int $tmp2357 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:511:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2358 = $tmp2356.value;
int64_t $tmp2359 = $tmp2357.value;
bool $tmp2360 = $tmp2358 == $tmp2359;
frost$core$Bit $tmp2361 = (frost$core$Bit) {$tmp2360};
bool $tmp2362 = $tmp2361.value;
if ($tmp2362) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp2363 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2354)->$data + 0);
org$frostlang$frostc$Position $tmp2364 = *$tmp2363;
org$frostlang$frostc$IR$Block$ID* $tmp2365 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2354)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp2366 = *$tmp2365;
*(&local3) = $tmp2366;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:512
org$frostlang$frostc$IR$Block$ID $tmp2367 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp2368 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:512:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2369 = $tmp2367.value;
frost$core$Int $tmp2370 = $tmp2368.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2371 = $tmp2369.value;
int64_t $tmp2372 = $tmp2370.value;
bool $tmp2373 = $tmp2371 == $tmp2372;
frost$core$Bit $tmp2374 = (frost$core$Bit) {$tmp2373};
bool $tmp2375 = $tmp2374.value;
if ($tmp2375) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:513
org$frostlang$frostc$IR$Block* $tmp2376 = *(&local1);
$fn2378 $tmp2377 = ($fn2378) param0->$class->vtable[11];
$tmp2377(param0, $tmp2376);
goto block13;
block13:;
goto block8;
block10:;
frost$core$Int $tmp2379 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:516:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2380 = $tmp2356.value;
int64_t $tmp2381 = $tmp2379.value;
bool $tmp2382 = $tmp2380 == $tmp2381;
frost$core$Bit $tmp2383 = (frost$core$Bit) {$tmp2382};
bool $tmp2384 = $tmp2383.value;
if ($tmp2384) goto block16; else goto block8;
block16:;
org$frostlang$frostc$Position* $tmp2385 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2354)->$data + 0);
org$frostlang$frostc$Position $tmp2386 = *$tmp2385;
*(&local4) = $tmp2386;
org$frostlang$frostc$IR$Value** $tmp2387 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp2354)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp2388 = *$tmp2387;
org$frostlang$frostc$IR$Block$ID* $tmp2389 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2354)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp2390 = *$tmp2389;
*(&local5) = $tmp2390;
org$frostlang$frostc$IR$Block$ID* $tmp2391 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2354)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp2392 = *$tmp2391;
*(&local6) = $tmp2392;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:517
org$frostlang$frostc$IR$Block$ID $tmp2393 = *(&local5);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2394;
$tmp2394 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2394->value = $tmp2393;
org$frostlang$frostc$IR$Block$ID $tmp2395 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2396;
$tmp2396 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2396->value = $tmp2395;
ITable* $tmp2397 = ((frost$core$Equatable*) $tmp2394)->$class->itable;
while ($tmp2397->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2397 = $tmp2397->next;
}
$fn2399 $tmp2398 = $tmp2397->methods[1];
frost$core$Bit $tmp2400 = $tmp2398(((frost$core$Equatable*) $tmp2394), ((frost$core$Equatable*) $tmp2396));
bool $tmp2401 = $tmp2400.value;
if ($tmp2401) goto block18; else goto block19;
block19:;
frost$core$Int $tmp2402 = (frost$core$Int) {517u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2403, $tmp2402);
abort(); // unreachable
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2396)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2394)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:518
org$frostlang$frostc$IR$Block$ID $tmp2404 = *(&local5);
org$frostlang$frostc$IR$Block$ID $tmp2405 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:518:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2406 = $tmp2404.value;
frost$core$Int $tmp2407 = $tmp2405.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2408 = $tmp2406.value;
int64_t $tmp2409 = $tmp2407.value;
bool $tmp2410 = $tmp2408 == $tmp2409;
frost$core$Bit $tmp2411 = (frost$core$Bit) {$tmp2410};
bool $tmp2412 = $tmp2411.value;
if ($tmp2412) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:520
frost$core$System$crash();
goto block21;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:522
org$frostlang$frostc$IR$Block$ID $tmp2413 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp2414 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:522:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2415 = $tmp2413.value;
frost$core$Int $tmp2416 = $tmp2414.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2417 = $tmp2415.value;
int64_t $tmp2418 = $tmp2416.value;
bool $tmp2419 = $tmp2417 == $tmp2418;
frost$core$Bit $tmp2420 = (frost$core$Bit) {$tmp2419};
bool $tmp2421 = $tmp2420.value;
if ($tmp2421) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:524
frost$core$System$crash();
goto block26;
block26:;
goto block21;
block21:;
goto block8;
block8:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2354);
frost$core$Frost$unref$frost$core$Object$Q($tmp2335);
org$frostlang$frostc$IR$Block* $tmp2422 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
return;

}
void org$frostlang$frostc$pass$Analyzer$cleanup(org$frostlang$frostc$pass$Analyzer* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:14
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp2423 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2424 = *$tmp2423;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
org$frostlang$frostc$MethodDecl** $tmp2425 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2426 = *$tmp2425;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2426));
org$frostlang$frostc$IR** $tmp2427 = &param0->ir;
org$frostlang$frostc$IR* $tmp2428 = *$tmp2427;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2428));
frost$collections$HashMap** $tmp2429 = &param0->blocks;
frost$collections$HashMap* $tmp2430 = *$tmp2429;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2430));
frost$collections$HashMap** $tmp2431 = &param0->predecessors;
frost$collections$HashMap* $tmp2432 = *$tmp2431;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
frost$collections$HashMap** $tmp2433 = &param0->entryStates;
frost$collections$HashMap* $tmp2434 = *$tmp2433;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
frost$collections$HashSet** $tmp2435 = &param0->worklist;
frost$collections$HashSet* $tmp2436 = *$tmp2435;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2436));
frost$collections$HashMap** $tmp2437 = &param0->statements;
frost$collections$HashMap* $tmp2438 = *$tmp2437;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
return;

}

