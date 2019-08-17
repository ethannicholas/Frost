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
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "frost/core/Int.h"
#include "frost/collections/Key.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/ListView.h"
#include "frost/core/Weak.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
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
typedef frost$core$Bit (*$fn103)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn111)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn125)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn133)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn136)(frost$core$Object*);
typedef frost$core$String* (*$fn144)(frost$core$Object*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn157)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn214)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn226)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$Type* (*$fn253)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn278)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn291)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn304)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn317)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn327)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn343)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn356)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn369)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn382)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn392)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn442)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn452)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Int (*$fn496)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn548)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Bit (*$fn575)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn584)(frost$core$Object*);
typedef frost$core$String* (*$fn592)(frost$core$Object*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn613)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn629)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn632)(org$frostlang$frostc$pass$Analyzer$DataFlowValue*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn671)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn709)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
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
typedef frost$core$Int (*$fn1209)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1262)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1348)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1421)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn1429)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1435)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1444)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1449)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1487)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Int (*$fn1497)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1573)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1596)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn1626)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$pass$Analyzer$State*);
typedef void (*$fn1632)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*, frost$core$Int, org$frostlang$frostc$pass$Analyzer$State*);
typedef frost$core$Object* (*$fn1647)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn1671)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn1696)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn1707)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Object* (*$fn1731)(org$frostlang$frostc$LinkedList*);
typedef frost$core$String* (*$fn1734)(frost$core$Object*);
typedef frost$core$Int (*$fn1751)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1773)(frost$core$Object*);
typedef frost$core$Int (*$fn1792)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1808)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1839)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1843)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1848)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1856)(frost$core$Object*);
typedef frost$core$String* (*$fn1879)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1889)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn1897)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1903)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1912)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1916)(frost$core$Object*);
typedef frost$core$Object* (*$fn1922)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1925)(frost$core$Object*);
typedef frost$core$Int (*$fn1945)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2002)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2027)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2031)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2036)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2051)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn2059)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2065)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2076)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2082)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2102)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn2126)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2138)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn2142)(frost$collections$Iterator*);
typedef void (*$fn2152)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn2161)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2165)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2170)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2187)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2209)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2222)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$pass$Analyzer$State* (*$fn2241)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$pass$Analyzer$BlockExit);
typedef frost$core$Object* (*$fn2261)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn2264)(org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn2274)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2280)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn2283)(org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2288)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2294)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef void (*$fn2298)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2305)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef frost$core$Int (*$fn2318)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2346)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2350)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2355)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2363)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2374)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn2399)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*);
typedef frost$core$Bit (*$fn2420)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72", 34, -7908766228797686597, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -6163429507827714296, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x6d\x61\x79\x20\x62\x65\x20\x6e\x75\x6c\x6c\x20\x61\x74\x20", 17, -8774972163340468218, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s587 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x6c\x75\x65\x20", 6, 2389068132842847038, NULL };
static frost$core$String $s589 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s596 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x68\x61\x73\x20\x6e\x6f\x74\x20\x62\x65\x65\x6e\x20\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x64", 25, 6096059661963607284, NULL };
static frost$core$String $s680 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s683 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s718 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s721 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
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
static frost$core$String $s1217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s1267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1353 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1506 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s1581 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1582 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1604 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1605 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s1737 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b\x20\x65\x6e\x64\x65\x64\x20\x69\x6e\x20\x6e\x6f\x6e\x74\x65\x72\x6d\x69\x6e\x61\x6c\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x20", 37, 4880269855066615229, NULL };
static frost$core$String $s1738 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s1743 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1776 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 2638862777294684392, NULL };
static frost$core$String $s1778 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s1800 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1801 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1812 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1813 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1859 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1861 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1882 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1883 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s2010 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2011 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x20\x65\x78\x69\x74\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 33, 2495389199813969088, NULL };
static frost$core$String $s2266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 2003079889812304977, NULL };
static frost$core$String $s2326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s2327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s2424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };

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
org$frostlang$frostc$FixedArray* local14 = NULL;
frost$core$Bit local15;
org$frostlang$frostc$IR$Value* local16 = NULL;
org$frostlang$frostc$Type* local17 = NULL;
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
org$frostlang$frostc$Type$Kind local32;
org$frostlang$frostc$Type$Kind local33;
org$frostlang$frostc$IR$Value* local34 = NULL;
org$frostlang$frostc$FieldDecl* local35 = NULL;
frost$core$Bit local36;
org$frostlang$frostc$ChoiceCase* local37 = NULL;
frost$core$Int local38;
org$frostlang$frostc$FieldDecl* local39 = NULL;
org$frostlang$frostc$Position local40;
org$frostlang$frostc$IR$Value* local41 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local42 = NULL;
frost$core$Bit local43;
org$frostlang$frostc$IR$Value* local44 = NULL;
org$frostlang$frostc$IR$Value* local45 = NULL;
org$frostlang$frostc$Type* local46 = NULL;
org$frostlang$frostc$IR$Value* local47 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local48 = NULL;
org$frostlang$frostc$IR$Value* local49 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local50 = NULL;
org$frostlang$frostc$IR$Value* local51 = NULL;
org$frostlang$frostc$IR$Value* local52 = NULL;
org$frostlang$frostc$MethodDecl* local53 = NULL;
org$frostlang$frostc$FixedArray* local54 = NULL;
frost$core$Bit local55;
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
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:156:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp85 = $tmp84.value;
bool $tmp86 = !$tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block12; else goto block9;
block12:;
frost$core$Bit* $tmp89 = &param0->reportErrors;
frost$core$Bit $tmp90 = *$tmp89;
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block11; else goto block9;
block11:;
org$frostlang$frostc$Type* $tmp92 = *(&local6);
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Analyzer.frost:156:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
org$frostlang$frostc$Type$Kind* $tmp93 = &$tmp92->typeKind;
org$frostlang$frostc$Type$Kind $tmp94 = *$tmp93;
org$frostlang$frostc$Type$Kind$wrapper* $tmp95;
$tmp95 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp95->value = $tmp94;
frost$core$Int $tmp96 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:400:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp97 = &(&local9)->$rawValue;
*$tmp97 = $tmp96;
org$frostlang$frostc$Type$Kind $tmp98 = *(&local9);
*(&local8) = $tmp98;
org$frostlang$frostc$Type$Kind $tmp99 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp100;
$tmp100 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp100->value = $tmp99;
ITable* $tmp101 = ((frost$core$Equatable*) $tmp95)->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp101 = $tmp101->next;
}
$fn103 $tmp102 = $tmp101->methods[0];
frost$core$Bit $tmp104 = $tmp102(((frost$core$Equatable*) $tmp95), ((frost$core$Equatable*) $tmp100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp100)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp95)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:156:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp105 = $tmp104.value;
bool $tmp106 = !$tmp105;
frost$core$Bit $tmp107 = (frost$core$Bit) {$tmp106};
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block10; else goto block9;
block10:;
org$frostlang$frostc$IR$Value* $tmp109 = *(&local5);
$fn111 $tmp110 = ($fn111) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp112 = $tmp110(param0, $tmp109, param2);
org$frostlang$frostc$Type** $tmp113 = &$tmp112->type;
org$frostlang$frostc$Type* $tmp114 = *$tmp113;
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Analyzer.frost:157:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
org$frostlang$frostc$Type$Kind* $tmp115 = &$tmp114->typeKind;
org$frostlang$frostc$Type$Kind $tmp116 = *$tmp115;
org$frostlang$frostc$Type$Kind$wrapper* $tmp117;
$tmp117 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp117->value = $tmp116;
frost$core$Int $tmp118 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:400:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp119 = &(&local11)->$rawValue;
*$tmp119 = $tmp118;
org$frostlang$frostc$Type$Kind $tmp120 = *(&local11);
*(&local10) = $tmp120;
org$frostlang$frostc$Type$Kind $tmp121 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp122;
$tmp122 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp122->value = $tmp121;
ITable* $tmp123 = ((frost$core$Equatable*) $tmp117)->$class->itable;
while ($tmp123->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp123 = $tmp123->next;
}
$fn125 $tmp124 = $tmp123->methods[0];
frost$core$Bit $tmp126 = $tmp124(((frost$core$Equatable*) $tmp117), ((frost$core$Equatable*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp122)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp117)));
bool $tmp127 = $tmp126.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
if ($tmp127) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:158
org$frostlang$frostc$Compiler** $tmp128 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp129 = *$tmp128;
org$frostlang$frostc$Position $tmp130 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp131 = *(&local5);
$fn133 $tmp132 = ($fn133) $tmp131->$class->vtable[2];
org$frostlang$frostc$Type* $tmp134 = $tmp132($tmp131);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:158:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn136 $tmp135 = ($fn136) ((frost$core$Object*) $tmp134)->$class->vtable[0];
frost$core$String* $tmp137 = $tmp135(((frost$core$Object*) $tmp134));
frost$core$String* $tmp138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s139, $tmp137);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$String* $tmp140 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp138, &$s141);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp142;
$tmp142 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp142->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:158:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn144 $tmp143 = ($fn144) ((frost$core$Object*) $tmp142)->$class->vtable[0];
frost$core$String* $tmp145 = $tmp143(((frost$core$Object*) $tmp142));
frost$core$String* $tmp146 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp140, $tmp145);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$String* $tmp147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp146, &$s148);
org$frostlang$frostc$Compiler$warn$org$frostlang$frostc$Position$frost$core$String($tmp129, $tmp130, $tmp147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:160
frost$core$Bit $tmp149 = *(&local7);
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block21; else goto block23;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:161
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp151 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp152 = *(&local6);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp151, $tmp152);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
org$frostlang$frostc$Type* $tmp153 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp154 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp151;
block23:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:164
org$frostlang$frostc$IR$Value* $tmp155 = *(&local5);
$fn157 $tmp156 = ($fn157) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp158 = $tmp156(param0, $tmp155, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
org$frostlang$frostc$Type* $tmp159 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp160 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp158;
block22:;
org$frostlang$frostc$Type* $tmp161 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp162 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block6:;
frost$core$Int $tmp163 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:167:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp164 = $tmp38.value;
int64_t $tmp165 = $tmp163.value;
bool $tmp166 = $tmp164 == $tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp169 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp170 = *$tmp169;
org$frostlang$frostc$ClassDecl** $tmp171 = (org$frostlang$frostc$ClassDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp172 = *$tmp171;
*(&local12) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
org$frostlang$frostc$ClassDecl* $tmp173 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
*(&local12) = $tmp172;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:168
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp174 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$ClassDecl* $tmp175 = *(&local12);
org$frostlang$frostc$Type** $tmp176 = &$tmp175->type;
org$frostlang$frostc$Type* $tmp177 = *$tmp176;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp174, $tmp177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
org$frostlang$frostc$ClassDecl* $tmp178 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local12) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp174;
block25:;
frost$core$Int $tmp179 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:170:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp180 = $tmp38.value;
int64_t $tmp181 = $tmp179.value;
bool $tmp182 = $tmp180 == $tmp181;
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block27; else goto block28;
block27:;
org$frostlang$frostc$Position* $tmp185 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp186 = *$tmp185;
org$frostlang$frostc$ClassDecl** $tmp187 = (org$frostlang$frostc$ClassDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp188 = *$tmp187;
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
org$frostlang$frostc$ClassDecl* $tmp189 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local13) = $tmp188;
org$frostlang$frostc$FixedArray** $tmp190 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp191 = *$tmp190;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
org$frostlang$frostc$FixedArray* $tmp192 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local14) = $tmp191;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:171
org$frostlang$frostc$ClassDecl* $tmp193 = *(&local13);
org$frostlang$frostc$Type** $tmp194 = &$tmp193->type;
org$frostlang$frostc$Type* $tmp195 = *$tmp194;
org$frostlang$frostc$Compiler** $tmp196 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp197 = *$tmp196;
org$frostlang$frostc$Type** $tmp198 = &$tmp197->BIT_TYPE;
org$frostlang$frostc$Type* $tmp199 = *$tmp198;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:171:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp200 = &((org$frostlang$frostc$Symbol*) $tmp195)->name;
frost$core$String* $tmp201 = *$tmp200;
frost$core$String** $tmp202 = &((org$frostlang$frostc$Symbol*) $tmp199)->name;
frost$core$String* $tmp203 = *$tmp202;
frost$core$Bit $tmp204 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp201, $tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Type$Kind* $tmp206 = &$tmp195->typeKind;
org$frostlang$frostc$Type$Kind $tmp207 = *$tmp206;
org$frostlang$frostc$Type$Kind$wrapper* $tmp208;
$tmp208 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp208->value = $tmp207;
org$frostlang$frostc$Type$Kind* $tmp209 = &$tmp199->typeKind;
org$frostlang$frostc$Type$Kind $tmp210 = *$tmp209;
org$frostlang$frostc$Type$Kind$wrapper* $tmp211;
$tmp211 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp211->value = $tmp210;
ITable* $tmp212 = ((frost$core$Equatable*) $tmp208)->$class->itable;
while ($tmp212->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp212 = $tmp212->next;
}
$fn214 $tmp213 = $tmp212->methods[0];
frost$core$Bit $tmp215 = $tmp213(((frost$core$Equatable*) $tmp208), ((frost$core$Equatable*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp211)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp208)));
*(&local15) = $tmp215;
goto block35;
block34:;
*(&local15) = $tmp204;
goto block35;
block35:;
frost$core$Bit $tmp216 = *(&local15);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:172
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp218 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$ClassDecl* $tmp219 = *(&local13);
org$frostlang$frostc$Type** $tmp220 = &$tmp219->type;
org$frostlang$frostc$Type* $tmp221 = *$tmp220;
org$frostlang$frostc$FixedArray* $tmp222 = *(&local14);
frost$core$Int $tmp223 = (frost$core$Int) {0u};
frost$core$Object* $tmp224 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp222, $tmp223);
$fn226 $tmp225 = ($fn226) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp227 = $tmp225(param0, ((org$frostlang$frostc$IR$Value*) $tmp224), param2);
frost$collections$ListView** $tmp228 = &$tmp227->nonNullImplications;
frost$collections$ListView* $tmp229 = *$tmp228;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp218, $tmp221, $tmp229);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q($tmp224);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
org$frostlang$frostc$FixedArray* $tmp230 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ClassDecl* $tmp231 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp218;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:174
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp232 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$ClassDecl* $tmp233 = *(&local13);
org$frostlang$frostc$Type** $tmp234 = &$tmp233->type;
org$frostlang$frostc$Type* $tmp235 = *$tmp234;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp232, $tmp235);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
org$frostlang$frostc$FixedArray* $tmp236 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ClassDecl* $tmp237 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp232;
block28:;
frost$core$Int $tmp238 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:176:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp239 = $tmp38.value;
int64_t $tmp240 = $tmp238.value;
bool $tmp241 = $tmp239 == $tmp240;
frost$core$Bit $tmp242 = (frost$core$Bit) {$tmp241};
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp244 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp245 = *$tmp244;
org$frostlang$frostc$IR$Value** $tmp246 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp247 = *$tmp246;
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
org$frostlang$frostc$IR$Value* $tmp248 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local16) = $tmp247;
org$frostlang$frostc$FixedArray** $tmp249 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp250 = *$tmp249;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:177
org$frostlang$frostc$IR$Value* $tmp251 = *(&local16);
$fn253 $tmp252 = ($fn253) $tmp251->$class->vtable[2];
org$frostlang$frostc$Type* $tmp254 = $tmp252($tmp251);
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
org$frostlang$frostc$Type* $tmp255 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
*(&local17) = $tmp254;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:178
org$frostlang$frostc$Type* $tmp256 = *(&local17);
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:178:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:388
frost$core$String** $tmp257 = &((org$frostlang$frostc$Symbol*) $tmp256)->name;
frost$core$String* $tmp258 = *$tmp257;
frost$core$Bit $tmp259 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp258, &$s260);
bool $tmp261 = $tmp259.value;
if ($tmp261) goto block39; else goto block41;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:179
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp262 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp263 = *(&local17);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:179:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp264 = &$tmp263->_subtypes;
org$frostlang$frostc$FixedArray* $tmp265 = *$tmp264;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$core$Int $tmp266 = (frost$core$Int) {1u};
frost$core$Object* $tmp267 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp265, $tmp266);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Analyzer.frost:179:58
org$frostlang$frostc$Type$Kind* $tmp268 = &((org$frostlang$frostc$Type*) $tmp267)->typeKind;
org$frostlang$frostc$Type$Kind $tmp269 = *$tmp268;
org$frostlang$frostc$Type$Kind$wrapper* $tmp270;
$tmp270 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp270->value = $tmp269;
frost$core$Int $tmp271 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp272 = &(&local19)->$rawValue;
*$tmp272 = $tmp271;
org$frostlang$frostc$Type$Kind $tmp273 = *(&local19);
*(&local18) = $tmp273;
org$frostlang$frostc$Type$Kind $tmp274 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp275;
$tmp275 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp275->value = $tmp274;
ITable* $tmp276 = ((frost$core$Equatable*) $tmp270)->$class->itable;
while ($tmp276->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp276 = $tmp276->next;
}
$fn278 $tmp277 = $tmp276->methods[0];
frost$core$Bit $tmp279 = $tmp277(((frost$core$Equatable*) $tmp270), ((frost$core$Equatable*) $tmp275));
bool $tmp280 = $tmp279.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp275)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp270)));
if ($tmp280) goto block45; else goto block49;
block49:;
org$frostlang$frostc$Type$Kind* $tmp281 = &((org$frostlang$frostc$Type*) $tmp267)->typeKind;
org$frostlang$frostc$Type$Kind $tmp282 = *$tmp281;
org$frostlang$frostc$Type$Kind$wrapper* $tmp283;
$tmp283 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp283->value = $tmp282;
frost$core$Int $tmp284 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp285 = &(&local21)->$rawValue;
*$tmp285 = $tmp284;
org$frostlang$frostc$Type$Kind $tmp286 = *(&local21);
*(&local20) = $tmp286;
org$frostlang$frostc$Type$Kind $tmp287 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp288;
$tmp288 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp288->value = $tmp287;
ITable* $tmp289 = ((frost$core$Equatable*) $tmp283)->$class->itable;
while ($tmp289->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp289 = $tmp289->next;
}
$fn291 $tmp290 = $tmp289->methods[0];
frost$core$Bit $tmp292 = $tmp290(((frost$core$Equatable*) $tmp283), ((frost$core$Equatable*) $tmp288));
bool $tmp293 = $tmp292.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp288)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp283)));
if ($tmp293) goto block45; else goto block48;
block48:;
org$frostlang$frostc$Type$Kind* $tmp294 = &((org$frostlang$frostc$Type*) $tmp267)->typeKind;
org$frostlang$frostc$Type$Kind $tmp295 = *$tmp294;
org$frostlang$frostc$Type$Kind$wrapper* $tmp296;
$tmp296 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp296->value = $tmp295;
frost$core$Int $tmp297 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp298 = &(&local23)->$rawValue;
*$tmp298 = $tmp297;
org$frostlang$frostc$Type$Kind $tmp299 = *(&local23);
*(&local22) = $tmp299;
org$frostlang$frostc$Type$Kind $tmp300 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp301;
$tmp301 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp301->value = $tmp300;
ITable* $tmp302 = ((frost$core$Equatable*) $tmp296)->$class->itable;
while ($tmp302->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp302 = $tmp302->next;
}
$fn304 $tmp303 = $tmp302->methods[0];
frost$core$Bit $tmp305 = $tmp303(((frost$core$Equatable*) $tmp296), ((frost$core$Equatable*) $tmp301));
bool $tmp306 = $tmp305.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp301)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp296)));
if ($tmp306) goto block45; else goto block47;
block47:;
org$frostlang$frostc$Type$Kind* $tmp307 = &((org$frostlang$frostc$Type*) $tmp267)->typeKind;
org$frostlang$frostc$Type$Kind $tmp308 = *$tmp307;
org$frostlang$frostc$Type$Kind$wrapper* $tmp309;
$tmp309 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp309->value = $tmp308;
frost$core$Int $tmp310 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp311 = &(&local25)->$rawValue;
*$tmp311 = $tmp310;
org$frostlang$frostc$Type$Kind $tmp312 = *(&local25);
*(&local24) = $tmp312;
org$frostlang$frostc$Type$Kind $tmp313 = *(&local24);
org$frostlang$frostc$Type$Kind$wrapper* $tmp314;
$tmp314 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp314->value = $tmp313;
ITable* $tmp315 = ((frost$core$Equatable*) $tmp309)->$class->itable;
while ($tmp315->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp315 = $tmp315->next;
}
$fn317 $tmp316 = $tmp315->methods[0];
frost$core$Bit $tmp318 = $tmp316(((frost$core$Equatable*) $tmp309), ((frost$core$Equatable*) $tmp314));
bool $tmp319 = $tmp318.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp314)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp309)));
if ($tmp319) goto block45; else goto block46;
block46:;
frost$core$Int $tmp320 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s321, $tmp320, &$s322);
abort(); // unreachable
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp323 = &((org$frostlang$frostc$Type*) $tmp267)->_subtypes;
org$frostlang$frostc$FixedArray* $tmp324 = *$tmp323;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
ITable* $tmp325 = ((frost$collections$ListView*) $tmp324)->$class->itable;
while ($tmp325->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp325 = $tmp325->next;
}
$fn327 $tmp326 = $tmp325->methods[5];
frost$core$Object* $tmp328 = $tmp326(((frost$collections$ListView*) $tmp324));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp328)));
frost$core$Frost$unref$frost$core$Object$Q($tmp328);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp262, ((org$frostlang$frostc$Type*) $tmp328));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp328)));
frost$core$Frost$unref$frost$core$Object$Q($tmp267);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
org$frostlang$frostc$Type* $tmp329 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp330 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp262;
block41:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:182
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp331 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp332 = *(&local17);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from Analyzer.frost:182:46
org$frostlang$frostc$Type$Kind* $tmp333 = &$tmp332->typeKind;
org$frostlang$frostc$Type$Kind $tmp334 = *$tmp333;
org$frostlang$frostc$Type$Kind$wrapper* $tmp335;
$tmp335 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp335->value = $tmp334;
frost$core$Int $tmp336 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp337 = &(&local27)->$rawValue;
*$tmp337 = $tmp336;
org$frostlang$frostc$Type$Kind $tmp338 = *(&local27);
*(&local26) = $tmp338;
org$frostlang$frostc$Type$Kind $tmp339 = *(&local26);
org$frostlang$frostc$Type$Kind$wrapper* $tmp340;
$tmp340 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp340->value = $tmp339;
ITable* $tmp341 = ((frost$core$Equatable*) $tmp335)->$class->itable;
while ($tmp341->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp341 = $tmp341->next;
}
$fn343 $tmp342 = $tmp341->methods[0];
frost$core$Bit $tmp344 = $tmp342(((frost$core$Equatable*) $tmp335), ((frost$core$Equatable*) $tmp340));
bool $tmp345 = $tmp344.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp340)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp335)));
if ($tmp345) goto block56; else goto block60;
block60:;
org$frostlang$frostc$Type$Kind* $tmp346 = &$tmp332->typeKind;
org$frostlang$frostc$Type$Kind $tmp347 = *$tmp346;
org$frostlang$frostc$Type$Kind$wrapper* $tmp348;
$tmp348 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp348->value = $tmp347;
frost$core$Int $tmp349 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp350 = &(&local29)->$rawValue;
*$tmp350 = $tmp349;
org$frostlang$frostc$Type$Kind $tmp351 = *(&local29);
*(&local28) = $tmp351;
org$frostlang$frostc$Type$Kind $tmp352 = *(&local28);
org$frostlang$frostc$Type$Kind$wrapper* $tmp353;
$tmp353 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp353->value = $tmp352;
ITable* $tmp354 = ((frost$core$Equatable*) $tmp348)->$class->itable;
while ($tmp354->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp354 = $tmp354->next;
}
$fn356 $tmp355 = $tmp354->methods[0];
frost$core$Bit $tmp357 = $tmp355(((frost$core$Equatable*) $tmp348), ((frost$core$Equatable*) $tmp353));
bool $tmp358 = $tmp357.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp353)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp348)));
if ($tmp358) goto block56; else goto block59;
block59:;
org$frostlang$frostc$Type$Kind* $tmp359 = &$tmp332->typeKind;
org$frostlang$frostc$Type$Kind $tmp360 = *$tmp359;
org$frostlang$frostc$Type$Kind$wrapper* $tmp361;
$tmp361 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp361->value = $tmp360;
frost$core$Int $tmp362 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp363 = &(&local31)->$rawValue;
*$tmp363 = $tmp362;
org$frostlang$frostc$Type$Kind $tmp364 = *(&local31);
*(&local30) = $tmp364;
org$frostlang$frostc$Type$Kind $tmp365 = *(&local30);
org$frostlang$frostc$Type$Kind$wrapper* $tmp366;
$tmp366 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp366->value = $tmp365;
ITable* $tmp367 = ((frost$core$Equatable*) $tmp361)->$class->itable;
while ($tmp367->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp367 = $tmp367->next;
}
$fn369 $tmp368 = $tmp367->methods[0];
frost$core$Bit $tmp370 = $tmp368(((frost$core$Equatable*) $tmp361), ((frost$core$Equatable*) $tmp366));
bool $tmp371 = $tmp370.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp366)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp361)));
if ($tmp371) goto block56; else goto block58;
block58:;
org$frostlang$frostc$Type$Kind* $tmp372 = &$tmp332->typeKind;
org$frostlang$frostc$Type$Kind $tmp373 = *$tmp372;
org$frostlang$frostc$Type$Kind$wrapper* $tmp374;
$tmp374 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp374->value = $tmp373;
frost$core$Int $tmp375 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp376 = &(&local33)->$rawValue;
*$tmp376 = $tmp375;
org$frostlang$frostc$Type$Kind $tmp377 = *(&local33);
*(&local32) = $tmp377;
org$frostlang$frostc$Type$Kind $tmp378 = *(&local32);
org$frostlang$frostc$Type$Kind$wrapper* $tmp379;
$tmp379 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp379->value = $tmp378;
ITable* $tmp380 = ((frost$core$Equatable*) $tmp374)->$class->itable;
while ($tmp380->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp380 = $tmp380->next;
}
$fn382 $tmp381 = $tmp380->methods[0];
frost$core$Bit $tmp383 = $tmp381(((frost$core$Equatable*) $tmp374), ((frost$core$Equatable*) $tmp379));
bool $tmp384 = $tmp383.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp379)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp374)));
if ($tmp384) goto block56; else goto block57;
block57:;
frost$core$Int $tmp385 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s386, $tmp385, &$s387);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp388 = &$tmp332->_subtypes;
org$frostlang$frostc$FixedArray* $tmp389 = *$tmp388;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
ITable* $tmp390 = ((frost$collections$ListView*) $tmp389)->$class->itable;
while ($tmp390->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp390 = $tmp390->next;
}
$fn392 $tmp391 = $tmp390->methods[5];
frost$core$Object* $tmp393 = $tmp391(((frost$collections$ListView*) $tmp389));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp393)));
frost$core$Frost$unref$frost$core$Object$Q($tmp393);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp331, ((org$frostlang$frostc$Type*) $tmp393));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp393)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
org$frostlang$frostc$Type* $tmp394 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp395 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp331;
block40:;
org$frostlang$frostc$Type* $tmp396 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp397 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block37:;
frost$core$Int $tmp398 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:185:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp399 = $tmp38.value;
int64_t $tmp400 = $tmp398.value;
bool $tmp401 = $tmp399 == $tmp400;
frost$core$Bit $tmp402 = (frost$core$Bit) {$tmp401};
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block66; else goto block67;
block66:;
org$frostlang$frostc$Position* $tmp404 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp405 = *$tmp404;
org$frostlang$frostc$IR$Value** $tmp406 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp407 = *$tmp406;
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
org$frostlang$frostc$IR$Value* $tmp408 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
*(&local34) = $tmp407;
org$frostlang$frostc$FieldDecl** $tmp409 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp410 = *$tmp409;
*(&local35) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
org$frostlang$frostc$FieldDecl* $tmp411 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local35) = $tmp410;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:186
org$frostlang$frostc$FieldDecl* $tmp412 = *(&local35);
frost$core$Weak** $tmp413 = &$tmp412->owner;
frost$core$Weak* $tmp414 = *$tmp413;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Analyzer.frost:186:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp415 = &$tmp414->_valid;
frost$core$Bit $tmp416 = *$tmp415;
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block74; else goto block75;
block75:;
frost$core$Int $tmp418 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s419, $tmp418);
abort(); // unreachable
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp420 = &$tmp414->value;
frost$core$Object* $tmp421 = *$tmp420;
frost$core$Frost$ref$frost$core$Object$Q($tmp421);
org$frostlang$frostc$Type** $tmp422 = &((org$frostlang$frostc$ClassDecl*) $tmp421)->type;
org$frostlang$frostc$Type* $tmp423 = *$tmp422;
org$frostlang$frostc$Compiler** $tmp424 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp425 = *$tmp424;
org$frostlang$frostc$Type** $tmp426 = &$tmp425->BIT_TYPE;
org$frostlang$frostc$Type* $tmp427 = *$tmp426;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:186:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp428 = &((org$frostlang$frostc$Symbol*) $tmp423)->name;
frost$core$String* $tmp429 = *$tmp428;
frost$core$String** $tmp430 = &((org$frostlang$frostc$Symbol*) $tmp427)->name;
frost$core$String* $tmp431 = *$tmp430;
frost$core$Bit $tmp432 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp429, $tmp431);
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block77; else goto block78;
block77:;
org$frostlang$frostc$Type$Kind* $tmp434 = &$tmp423->typeKind;
org$frostlang$frostc$Type$Kind $tmp435 = *$tmp434;
org$frostlang$frostc$Type$Kind$wrapper* $tmp436;
$tmp436 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp436->value = $tmp435;
org$frostlang$frostc$Type$Kind* $tmp437 = &$tmp427->typeKind;
org$frostlang$frostc$Type$Kind $tmp438 = *$tmp437;
org$frostlang$frostc$Type$Kind$wrapper* $tmp439;
$tmp439 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp439->value = $tmp438;
ITable* $tmp440 = ((frost$core$Equatable*) $tmp436)->$class->itable;
while ($tmp440->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp440 = $tmp440->next;
}
$fn442 $tmp441 = $tmp440->methods[0];
frost$core$Bit $tmp443 = $tmp441(((frost$core$Equatable*) $tmp436), ((frost$core$Equatable*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp439)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp436)));
*(&local36) = $tmp443;
goto block79;
block78:;
*(&local36) = $tmp432;
goto block79;
block79:;
frost$core$Bit $tmp444 = *(&local36);
bool $tmp445 = $tmp444.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp421);
if ($tmp445) goto block69; else goto block71;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:187
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp446 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp447 = *(&local35);
org$frostlang$frostc$Type** $tmp448 = &$tmp447->type;
org$frostlang$frostc$Type* $tmp449 = *$tmp448;
org$frostlang$frostc$IR$Value* $tmp450 = *(&local34);
$fn452 $tmp451 = ($fn452) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp453 = $tmp451(param0, $tmp450, param2);
frost$collections$ListView** $tmp454 = &$tmp453->nonNullImplications;
frost$collections$ListView* $tmp455 = *$tmp454;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp446, $tmp449, $tmp455);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
org$frostlang$frostc$FieldDecl* $tmp456 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local35) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp457 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp446;
block71:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:190
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp458 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp459 = *(&local35);
org$frostlang$frostc$Type** $tmp460 = &$tmp459->type;
org$frostlang$frostc$Type* $tmp461 = *$tmp460;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp458, $tmp461);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
org$frostlang$frostc$FieldDecl* $tmp462 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
*(&local35) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp463 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp458;
block70:;
org$frostlang$frostc$FieldDecl* $tmp464 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local35) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp465 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block67:;
frost$core$Int $tmp466 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:193:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp467 = $tmp38.value;
int64_t $tmp468 = $tmp466.value;
bool $tmp469 = $tmp467 == $tmp468;
frost$core$Bit $tmp470 = (frost$core$Bit) {$tmp469};
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block80; else goto block81;
block80:;
org$frostlang$frostc$Position* $tmp472 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp473 = *$tmp472;
org$frostlang$frostc$IR$Value** $tmp474 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp475 = *$tmp474;
org$frostlang$frostc$ChoiceCase** $tmp476 = (org$frostlang$frostc$ChoiceCase**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp477 = *$tmp476;
*(&local37) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
org$frostlang$frostc$ChoiceCase* $tmp478 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
*(&local37) = $tmp477;
frost$core$Int* $tmp479 = (frost$core$Int*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 40);
frost$core$Int $tmp480 = *$tmp479;
*(&local38) = $tmp480;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:194
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp481 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp482 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp483 = *$tmp482;
org$frostlang$frostc$ChoiceCase* $tmp484 = *(&local37);
frost$collections$Array** $tmp485 = &$tmp484->fields;
frost$collections$Array* $tmp486 = *$tmp485;
frost$core$Int $tmp487 = *(&local38);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:194:72
frost$core$Int $tmp488 = (frost$core$Int) {0u};
int64_t $tmp489 = $tmp487.value;
int64_t $tmp490 = $tmp488.value;
bool $tmp491 = $tmp489 >= $tmp490;
frost$core$Bit $tmp492 = (frost$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block86; else goto block85;
block86:;
ITable* $tmp494 = ((frost$collections$CollectionView*) $tmp486)->$class->itable;
while ($tmp494->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp494 = $tmp494->next;
}
$fn496 $tmp495 = $tmp494->methods[0];
frost$core$Int $tmp497 = $tmp495(((frost$collections$CollectionView*) $tmp486));
int64_t $tmp498 = $tmp487.value;
int64_t $tmp499 = $tmp497.value;
bool $tmp500 = $tmp498 < $tmp499;
frost$core$Bit $tmp501 = (frost$core$Bit) {$tmp500};
bool $tmp502 = $tmp501.value;
if ($tmp502) goto block84; else goto block85;
block85:;
frost$core$Int $tmp503 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s504, $tmp503, &$s505);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp506 = &$tmp486->data;
frost$core$Object** $tmp507 = *$tmp506;
frost$core$Int64 $tmp508 = frost$core$Int64$init$frost$core$Int($tmp487);
int64_t $tmp509 = $tmp508.value;
frost$core$Object* $tmp510 = $tmp507[$tmp509];
frost$core$Frost$ref$frost$core$Object$Q($tmp510);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Analyzer.frost:194:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:283
org$frostlang$frostc$Type** $tmp511 = &$tmp483->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp512 = *$tmp511;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp513 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp514 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp513, $tmp514);
frost$collections$Array$add$frost$collections$Array$T($tmp513, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp510)));
org$frostlang$frostc$Type* $tmp515 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp512, ((frost$collections$ListView*) $tmp513));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp481, $tmp515);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$Frost$unref$frost$core$Object$Q($tmp510);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
org$frostlang$frostc$ChoiceCase* $tmp516 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local37) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp481;
block81:;
frost$core$Int $tmp517 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:196:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp518 = $tmp38.value;
int64_t $tmp519 = $tmp517.value;
bool $tmp520 = $tmp518 == $tmp519;
frost$core$Bit $tmp521 = (frost$core$Bit) {$tmp520};
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block88; else goto block89;
block88:;
org$frostlang$frostc$Position* $tmp523 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp524 = *$tmp523;
org$frostlang$frostc$IR$Value** $tmp525 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp526 = *$tmp525;
org$frostlang$frostc$FieldDecl** $tmp527 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp528 = *$tmp527;
*(&local39) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
org$frostlang$frostc$FieldDecl* $tmp529 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local39) = $tmp528;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:197
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp530 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$FieldDecl* $tmp531 = *(&local39);
org$frostlang$frostc$Type** $tmp532 = &$tmp531->type;
org$frostlang$frostc$Type* $tmp533 = *$tmp532;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp530, $tmp533);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
org$frostlang$frostc$FieldDecl* $tmp534 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
*(&local39) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp530;
block89:;
frost$core$Int $tmp535 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:199:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp536 = $tmp38.value;
int64_t $tmp537 = $tmp535.value;
bool $tmp538 = $tmp536 == $tmp537;
frost$core$Bit $tmp539 = (frost$core$Bit) {$tmp538};
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block91; else goto block92;
block91:;
org$frostlang$frostc$Position* $tmp541 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp542 = *$tmp541;
*(&local40) = $tmp542;
org$frostlang$frostc$IR$Value** $tmp543 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp544 = *$tmp543;
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
org$frostlang$frostc$IR$Value* $tmp545 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
*(&local41) = $tmp544;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:200
org$frostlang$frostc$IR$Value* $tmp546 = *(&local41);
$fn548 $tmp547 = ($fn548) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp549 = $tmp547(param0, $tmp546, param2);
*(&local42) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp550 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local42) = $tmp549;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:201
frost$core$Bit* $tmp551 = &param0->reportErrors;
frost$core$Bit $tmp552 = *$tmp551;
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block96; else goto block95;
block96:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp554 = *(&local42);
org$frostlang$frostc$Type** $tmp555 = &$tmp554->type;
org$frostlang$frostc$Type* $tmp556 = *$tmp555;
org$frostlang$frostc$Compiler** $tmp557 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp558 = *$tmp557;
org$frostlang$frostc$Type** $tmp559 = &$tmp558->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp560 = *$tmp559;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:201:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp561 = &((org$frostlang$frostc$Symbol*) $tmp556)->name;
frost$core$String* $tmp562 = *$tmp561;
frost$core$String** $tmp563 = &((org$frostlang$frostc$Symbol*) $tmp560)->name;
frost$core$String* $tmp564 = *$tmp563;
frost$core$Bit $tmp565 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp562, $tmp564);
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Type$Kind* $tmp567 = &$tmp556->typeKind;
org$frostlang$frostc$Type$Kind $tmp568 = *$tmp567;
org$frostlang$frostc$Type$Kind$wrapper* $tmp569;
$tmp569 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp569->value = $tmp568;
org$frostlang$frostc$Type$Kind* $tmp570 = &$tmp560->typeKind;
org$frostlang$frostc$Type$Kind $tmp571 = *$tmp570;
org$frostlang$frostc$Type$Kind$wrapper* $tmp572;
$tmp572 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp572->value = $tmp571;
ITable* $tmp573 = ((frost$core$Equatable*) $tmp569)->$class->itable;
while ($tmp573->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp573 = $tmp573->next;
}
$fn575 $tmp574 = $tmp573->methods[0];
frost$core$Bit $tmp576 = $tmp574(((frost$core$Equatable*) $tmp569), ((frost$core$Equatable*) $tmp572));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp572)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp569)));
*(&local43) = $tmp576;
goto block100;
block99:;
*(&local43) = $tmp565;
goto block100;
block100:;
frost$core$Bit $tmp577 = *(&local43);
bool $tmp578 = $tmp577.value;
if ($tmp578) goto block94; else goto block95;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:202
org$frostlang$frostc$Compiler** $tmp579 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp580 = *$tmp579;
org$frostlang$frostc$Position $tmp581 = *(&local40);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp582;
$tmp582 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp582->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:202:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn584 $tmp583 = ($fn584) ((frost$core$Object*) $tmp582)->$class->vtable[0];
frost$core$String* $tmp585 = $tmp583(((frost$core$Object*) $tmp582));
frost$core$String* $tmp586 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s587, $tmp585);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$String* $tmp588 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp586, &$s589);
org$frostlang$frostc$IR$Value* $tmp590 = *(&local41);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:202:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn592 $tmp591 = ($fn592) ((frost$core$Object*) $tmp590)->$class->vtable[0];
frost$core$String* $tmp593 = $tmp591(((frost$core$Object*) $tmp590));
frost$core$String* $tmp594 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp588, $tmp593);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
frost$core$String* $tmp595 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp594, &$s596);
org$frostlang$frostc$Compiler$warn$org$frostlang$frostc$Position$frost$core$String($tmp580, $tmp581, $tmp595);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
goto block95;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:204
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp597 = *(&local42);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp598 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local42) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp599 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp597;
block92:;
frost$core$Int $tmp600 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:206:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp601 = $tmp38.value;
int64_t $tmp602 = $tmp600.value;
bool $tmp603 = $tmp601 == $tmp602;
frost$core$Bit $tmp604 = (frost$core$Bit) {$tmp603};
bool $tmp605 = $tmp604.value;
if ($tmp605) goto block103; else goto block104;
block103:;
org$frostlang$frostc$Position* $tmp606 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp607 = *$tmp606;
org$frostlang$frostc$IR$Value** $tmp608 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp609 = *$tmp608;
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
org$frostlang$frostc$IR$Value* $tmp610 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local44) = $tmp609;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:207
org$frostlang$frostc$IR$Value* $tmp611 = *(&local44);
$fn613 $tmp612 = ($fn613) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp614 = $tmp612(param0, $tmp611, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
org$frostlang$frostc$IR$Value* $tmp615 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp614;
block104:;
frost$core$Int $tmp616 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:209:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp617 = $tmp38.value;
int64_t $tmp618 = $tmp616.value;
bool $tmp619 = $tmp617 == $tmp618;
frost$core$Bit $tmp620 = (frost$core$Bit) {$tmp619};
bool $tmp621 = $tmp620.value;
if ($tmp621) goto block106; else goto block107;
block106:;
org$frostlang$frostc$Position* $tmp622 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp623 = *$tmp622;
org$frostlang$frostc$IR$Value** $tmp624 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp625 = *$tmp624;
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
org$frostlang$frostc$IR$Value* $tmp626 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
*(&local45) = $tmp625;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:210
org$frostlang$frostc$IR$Value* $tmp627 = *(&local45);
$fn629 $tmp628 = ($fn629) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp630 = $tmp628(param0, $tmp627, param2);
$fn632 $tmp631 = ($fn632) $tmp630->$class->vtable[4];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp633 = $tmp631($tmp630);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
org$frostlang$frostc$IR$Value* $tmp634 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp633;
block107:;
frost$core$Int $tmp635 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:212:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp636 = $tmp38.value;
int64_t $tmp637 = $tmp635.value;
bool $tmp638 = $tmp636 == $tmp637;
frost$core$Bit $tmp639 = (frost$core$Bit) {$tmp638};
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block109; else goto block110;
block109:;
org$frostlang$frostc$Position* $tmp641 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp642 = *$tmp641;
org$frostlang$frostc$IR$Value** $tmp643 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp644 = *$tmp643;
org$frostlang$frostc$Type** $tmp645 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$Type* $tmp646 = *$tmp645;
*(&local46) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
org$frostlang$frostc$Type* $tmp647 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local46) = $tmp646;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:213
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp648 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp649 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp650 = *$tmp649;
org$frostlang$frostc$Type* $tmp651 = *(&local46);
// begin inline call to method org.frostlang.frostc.Type.pointerTo(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Analyzer.frost:213:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:283
org$frostlang$frostc$Type** $tmp652 = &$tmp650->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp653 = *$tmp652;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp654 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp655 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp654, $tmp655);
frost$collections$Array$add$frost$collections$Array$T($tmp654, ((frost$core$Object*) $tmp651));
org$frostlang$frostc$Type* $tmp656 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp653, ((frost$collections$ListView*) $tmp654));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp648, $tmp656);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
org$frostlang$frostc$Type* $tmp657 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
*(&local46) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp648;
block110:;
frost$core$Int $tmp658 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:215:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp659 = $tmp38.value;
int64_t $tmp660 = $tmp658.value;
bool $tmp661 = $tmp659 == $tmp660;
frost$core$Bit $tmp662 = (frost$core$Bit) {$tmp661};
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block113; else goto block114;
block113:;
org$frostlang$frostc$Position* $tmp664 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp665 = *$tmp664;
org$frostlang$frostc$IR$Value** $tmp666 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp667 = *$tmp666;
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
org$frostlang$frostc$IR$Value* $tmp668 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
*(&local47) = $tmp667;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:216
org$frostlang$frostc$IR$Value* $tmp669 = *(&local47);
$fn671 $tmp670 = ($fn671) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp672 = $tmp670(param0, $tmp669, param2);
*(&local48) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp673 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
*(&local48) = $tmp672;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:217
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp674 = *(&local48);
org$frostlang$frostc$Type** $tmp675 = &$tmp674->type;
org$frostlang$frostc$Type* $tmp676 = *$tmp675;
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:217:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:388
frost$core$String** $tmp677 = &((org$frostlang$frostc$Symbol*) $tmp676)->name;
frost$core$String* $tmp678 = *$tmp677;
frost$core$Bit $tmp679 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp678, &$s680);
bool $tmp681 = $tmp679.value;
if ($tmp681) goto block117; else goto block118;
block118:;
frost$core$Int $tmp682 = (frost$core$Int) {217u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s683, $tmp682);
abort(); // unreachable
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:218
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp684 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp685 = *(&local48);
org$frostlang$frostc$Type** $tmp686 = &$tmp685->type;
org$frostlang$frostc$Type* $tmp687 = *$tmp686;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:218:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp688 = &$tmp687->_subtypes;
org$frostlang$frostc$FixedArray* $tmp689 = *$tmp688;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
frost$core$Int $tmp690 = (frost$core$Int) {1u};
frost$core$Object* $tmp691 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp689, $tmp690);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp684, ((org$frostlang$frostc$Type*) $tmp691));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
frost$core$Frost$unref$frost$core$Object$Q($tmp691);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp692 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
*(&local48) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp693 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp684;
block114:;
frost$core$Int $tmp694 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:220:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp695 = $tmp38.value;
int64_t $tmp696 = $tmp694.value;
bool $tmp697 = $tmp695 == $tmp696;
frost$core$Bit $tmp698 = (frost$core$Bit) {$tmp697};
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block120; else goto block121;
block120:;
org$frostlang$frostc$Position* $tmp700 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp701 = *$tmp700;
org$frostlang$frostc$IR$Value** $tmp702 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp703 = *$tmp702;
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
org$frostlang$frostc$IR$Value* $tmp704 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
*(&local49) = $tmp703;
org$frostlang$frostc$IR$Value** $tmp705 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp706 = *$tmp705;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:221
org$frostlang$frostc$IR$Value* $tmp707 = *(&local49);
$fn709 $tmp708 = ($fn709) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp710 = $tmp708(param0, $tmp707, param2);
*(&local50) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp711 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
*(&local50) = $tmp710;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:222
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp712 = *(&local50);
org$frostlang$frostc$Type** $tmp713 = &$tmp712->type;
org$frostlang$frostc$Type* $tmp714 = *$tmp713;
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from Analyzer.frost:222:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:388
frost$core$String** $tmp715 = &((org$frostlang$frostc$Symbol*) $tmp714)->name;
frost$core$String* $tmp716 = *$tmp715;
frost$core$Bit $tmp717 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp716, &$s718);
bool $tmp719 = $tmp717.value;
if ($tmp719) goto block124; else goto block125;
block125:;
frost$core$Int $tmp720 = (frost$core$Int) {222u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s721, $tmp720);
abort(); // unreachable
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:223
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp722 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp723 = *(&local50);
org$frostlang$frostc$Type** $tmp724 = &$tmp723->type;
org$frostlang$frostc$Type* $tmp725 = *$tmp724;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Analyzer.frost:223:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp726 = &$tmp725->_subtypes;
org$frostlang$frostc$FixedArray* $tmp727 = *$tmp726;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
frost$core$Int $tmp728 = (frost$core$Int) {1u};
frost$core$Object* $tmp729 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp727, $tmp728);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp722, ((org$frostlang$frostc$Type*) $tmp729));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
frost$core$Frost$unref$frost$core$Object$Q($tmp729);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp730 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
*(&local50) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp731 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp722;
block121:;
frost$core$Int $tmp732 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:225:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp733 = $tmp38.value;
int64_t $tmp734 = $tmp732.value;
bool $tmp735 = $tmp733 == $tmp734;
frost$core$Bit $tmp736 = (frost$core$Bit) {$tmp735};
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block127; else goto block128;
block127:;
org$frostlang$frostc$Position* $tmp738 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp739 = *$tmp738;
org$frostlang$frostc$IR$Value** $tmp740 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp741 = *$tmp740;
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
org$frostlang$frostc$IR$Value* $tmp742 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local51) = $tmp741;
org$frostlang$frostc$IR$Value** $tmp743 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp744 = *$tmp743;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:226
org$frostlang$frostc$IR$Value* $tmp745 = *(&local51);
$fn747 $tmp746 = ($fn747) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp748 = $tmp746(param0, $tmp745, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
org$frostlang$frostc$IR$Value* $tmp749 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp748;
block128:;
frost$core$Int $tmp750 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:228:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp751 = $tmp38.value;
int64_t $tmp752 = $tmp750.value;
bool $tmp753 = $tmp751 == $tmp752;
frost$core$Bit $tmp754 = (frost$core$Bit) {$tmp753};
bool $tmp755 = $tmp754.value;
if ($tmp755) goto block130; else goto block131;
block130:;
org$frostlang$frostc$Position* $tmp756 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp757 = *$tmp756;
org$frostlang$frostc$IR$Value** $tmp758 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp759 = *$tmp758;
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
org$frostlang$frostc$IR$Value* $tmp760 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local52) = $tmp759;
org$frostlang$frostc$IR$Value** $tmp761 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp762 = *$tmp761;
org$frostlang$frostc$IR$Value** $tmp763 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 40);
org$frostlang$frostc$IR$Value* $tmp764 = *$tmp763;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:229
org$frostlang$frostc$IR$Value* $tmp765 = *(&local52);
$fn767 $tmp766 = ($fn767) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp768 = $tmp766(param0, $tmp765, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
org$frostlang$frostc$IR$Value* $tmp769 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp768;
block131:;
frost$core$Int $tmp770 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:231:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp771 = $tmp38.value;
int64_t $tmp772 = $tmp770.value;
bool $tmp773 = $tmp771 == $tmp772;
frost$core$Bit $tmp774 = (frost$core$Bit) {$tmp773};
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block133; else goto block134;
block133:;
org$frostlang$frostc$Position* $tmp776 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 0);
org$frostlang$frostc$Position $tmp777 = *$tmp776;
org$frostlang$frostc$MethodDecl** $tmp778 = (org$frostlang$frostc$MethodDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 24);
org$frostlang$frostc$MethodDecl* $tmp779 = *$tmp778;
*(&local53) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
org$frostlang$frostc$MethodDecl* $tmp780 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
*(&local53) = $tmp779;
org$frostlang$frostc$FixedArray** $tmp781 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp36)->$data + 32);
org$frostlang$frostc$FixedArray* $tmp782 = *$tmp781;
*(&local54) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
org$frostlang$frostc$FixedArray* $tmp783 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
*(&local54) = $tmp782;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:232
org$frostlang$frostc$MethodDecl* $tmp784 = *(&local53);
org$frostlang$frostc$Type** $tmp785 = &$tmp784->returnType;
org$frostlang$frostc$Type* $tmp786 = *$tmp785;
org$frostlang$frostc$Compiler** $tmp787 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp788 = *$tmp787;
org$frostlang$frostc$Type** $tmp789 = &$tmp788->BIT_TYPE;
org$frostlang$frostc$Type* $tmp790 = *$tmp789;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:232:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp791 = &((org$frostlang$frostc$Symbol*) $tmp786)->name;
frost$core$String* $tmp792 = *$tmp791;
frost$core$String** $tmp793 = &((org$frostlang$frostc$Symbol*) $tmp790)->name;
frost$core$String* $tmp794 = *$tmp793;
frost$core$Bit $tmp795 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp792, $tmp794);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block140; else goto block141;
block140:;
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
*(&local55) = $tmp806;
goto block142;
block141:;
*(&local55) = $tmp795;
goto block142;
block142:;
frost$core$Bit $tmp807 = *(&local55);
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block136; else goto block138;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:233
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp809 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$MethodDecl* $tmp810 = *(&local53);
org$frostlang$frostc$Type** $tmp811 = &$tmp810->returnType;
org$frostlang$frostc$Type* $tmp812 = *$tmp811;
org$frostlang$frostc$FixedArray* $tmp813 = *(&local54);
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
org$frostlang$frostc$FixedArray* $tmp821 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
*(&local54) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp822 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
*(&local53) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp809;
block138:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:236
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp823 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$MethodDecl* $tmp824 = *(&local53);
org$frostlang$frostc$Type** $tmp825 = &$tmp824->returnType;
org$frostlang$frostc$Type* $tmp826 = *$tmp825;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp823, $tmp826);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
org$frostlang$frostc$FixedArray* $tmp827 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
*(&local54) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp828 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
*(&local53) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp35)));
return $tmp823;
block137:;
org$frostlang$frostc$FixedArray* $tmp829 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
*(&local54) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp830 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local53) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block1;
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:240
frost$core$Int $tmp831 = (frost$core$Int) {240u};
frost$collections$HashMap** $tmp832 = &param0->statements;
frost$collections$HashMap* $tmp833 = *$tmp832;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp834;
$tmp834 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp834->value = param1;
frost$core$Object* $tmp835 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp833, ((frost$collections$Key*) $tmp834));
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:240:30
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
goto block144;
block144:;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:246
frost$core$Int* $tmp844 = &param1->$rawValue;
frost$core$Int $tmp845 = *$tmp844;
frost$core$Int $tmp846 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:247:26
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:248
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
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:250:26
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:251
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
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:253:26
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:254
frost$collections$Array** $tmp884 = &param2->locals;
frost$collections$Array* $tmp885 = *$tmp884;
frost$core$Int $tmp886 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:254:32
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
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:256:26
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:257
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
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:259:26
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:260
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
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:262:26
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:263
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
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:265:26
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:266
org$frostlang$frostc$IR$Statement$ID $tmp960 = *(&local6);
$fn962 $tmp961 = ($fn962) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp963 = $tmp961(param0, $tmp960, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
return $tmp963;
block25:;
frost$core$Int $tmp964 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:268:26
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:269
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:272
frost$core$Int $tmp978 = (frost$core$Int) {272u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:272:30
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:278
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:279
frost$collections$HashSet* $tmp992 = *(&local0);
frost$core$Bit $tmp993 = (frost$core$Bit) {$tmp992 == NULL};
bool $tmp994 = $tmp993.value;
if ($tmp994) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:280
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp995 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp995);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$collections$HashSet* $tmp996 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
*(&local0) = $tmp995;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:281
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:283
frost$collections$HashSet* $tmp1001 = *(&local0);
org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper* $tmp1002;
$tmp1002 = (org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$BlockExit$wrapperclass);
$tmp1002->value = param1;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:283:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp1003 = &$tmp1001->contents;
frost$collections$HashMap* $tmp1004 = *$tmp1003;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1004, ((frost$collections$Key*) $tmp1002), ((frost$core$Object*) ((frost$collections$Key*) $tmp1002)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1002)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:284
frost$core$Bit $tmp1005 = (frost$core$Bit) {false};
*(&local1) = $tmp1005;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:285
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:286
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:287
org$frostlang$frostc$pass$Analyzer$State* $tmp1017 = *(&local3);
frost$core$Bit $tmp1018 = (frost$core$Bit) {$tmp1017 == NULL};
bool $tmp1019 = $tmp1018.value;
if ($tmp1019) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:288
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:289
frost$collections$HashMap** $tmp1029 = &param0->entryStates;
frost$collections$HashMap* $tmp1030 = *$tmp1029;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1031;
$tmp1031 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1031->value = param2;
org$frostlang$frostc$pass$Analyzer$State* $tmp1032 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1030, ((frost$collections$Key*) $tmp1031), ((frost$core$Object*) $tmp1032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1031)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:290
frost$core$Bit $tmp1033 = (frost$core$Bit) {true};
*(&local1) = $tmp1033;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:292
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:293
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:295
frost$core$Bit $tmp1057 = *(&local1);
bool $tmp1058 = $tmp1057.value;
if ($tmp1058) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:296
frost$collections$HashSet** $tmp1059 = &param0->worklist;
frost$collections$HashSet* $tmp1060 = *$tmp1059;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1061;
$tmp1061 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1061->value = param2;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:296:25
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:313
org$frostlang$frostc$LinkedList** $tmp1067 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp1068 = *$tmp1067;
$fn1070 $tmp1069 = ($fn1070) $tmp1068->$class->vtable[6];
frost$core$Object* $tmp1071 = $tmp1069($tmp1068);
frost$core$Int* $tmp1072 = &((org$frostlang$frostc$IR$Statement*) $tmp1071)->$rawValue;
frost$core$Int $tmp1073 = *$tmp1072;
frost$core$Int $tmp1074 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:314:30
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:315
org$frostlang$frostc$IR$Value* $tmp1089 = *(&local0);
$fn1091 $tmp1090 = ($fn1091) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1092 = $tmp1090(param0, $tmp1089, param3);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1093 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
*(&local1) = $tmp1092;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:316
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1094 = *(&local1);
frost$collections$ListView** $tmp1095 = &$tmp1094->nonNullImplications;
frost$collections$ListView* $tmp1096 = *$tmp1095;
frost$core$Bit $tmp1097 = (frost$core$Bit) {$tmp1096 != NULL};
bool $tmp1098 = $tmp1097.value;
if ($tmp1098) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:317
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:318
org$frostlang$frostc$Pair* $tmp1116 = *(&local2);
frost$core$Object** $tmp1117 = &$tmp1116->second;
frost$core$Object* $tmp1118 = *$tmp1117;
frost$core$Int $tmp1119 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:318:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1120 = param2.value;
int64_t $tmp1121 = $tmp1119.value;
bool $tmp1122 = $tmp1120 == $tmp1121;
frost$core$Bit $tmp1123 = (frost$core$Bit) {$tmp1122};
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Analyzer.frost:318:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:25
bool $tmp1124 = ((frost$core$Bit$wrapper*) $tmp1118)->value.value;
bool $tmp1125 = $tmp1123.value;
bool $tmp1126 = $tmp1124 == $tmp1125;
frost$core$Bit $tmp1127 = (frost$core$Bit) {$tmp1126};
bool $tmp1128 = $tmp1127.value;
if ($tmp1128) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:319
org$frostlang$frostc$Pair* $tmp1129 = *(&local2);
frost$core$Object** $tmp1130 = &$tmp1129->first;
frost$core$Object* $tmp1131 = *$tmp1130;
frost$core$Int* $tmp1132 = &((org$frostlang$frostc$IR$Value*) $tmp1131)->$rawValue;
frost$core$Int $tmp1133 = *$tmp1132;
frost$core$Int $tmp1134 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:320:46
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:321
frost$collections$Array** $tmp1144 = &param3->locals;
frost$collections$Array* $tmp1145 = *$tmp1144;
frost$core$Int $tmp1146 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:321:60
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:322
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1171 = *(&local4);
frost$core$Bit $tmp1172 = (frost$core$Bit) {true};
bool $tmp1173 = $tmp1172.value;
if ($tmp1173) goto block21; else goto block22;
block22:;
frost$core$Int $tmp1174 = (frost$core$Int) {322u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1175, $tmp1174);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:323
frost$collections$Array** $tmp1176 = &param3->locals;
frost$collections$Array* $tmp1177 = *$tmp1176;
frost$core$Int $tmp1178 = *(&local3);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1179 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1180 = *(&local4);
org$frostlang$frostc$Type** $tmp1181 = &$tmp1180->type;
org$frostlang$frostc$Type* $tmp1182 = *$tmp1181;
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Analyzer.frost:323:93
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp1183 = &$tmp1182->typeKind;
org$frostlang$frostc$Type$Kind $tmp1184 = *$tmp1183;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1185;
$tmp1185 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1185->value = $tmp1184;
frost$core$Int $tmp1186 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
*(&local5) = $tmp1182;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
goto block23;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1196 = &$tmp1182->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1197 = *$tmp1196;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
frost$core$Int $tmp1198 = (frost$core$Int) {0u};
frost$core$Object* $tmp1199 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1197, $tmp1198);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1199)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1199);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp1199);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1199)));
goto block23;
block23:;
org$frostlang$frostc$Type* $tmp1200 = *(&local5);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1179, $tmp1200);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:323:49
frost$core$Int $tmp1201 = (frost$core$Int) {0u};
int64_t $tmp1202 = $tmp1178.value;
int64_t $tmp1203 = $tmp1201.value;
bool $tmp1204 = $tmp1202 >= $tmp1203;
frost$core$Bit $tmp1205 = (frost$core$Bit) {$tmp1204};
bool $tmp1206 = $tmp1205.value;
if ($tmp1206) goto block31; else goto block30;
block31:;
ITable* $tmp1207 = ((frost$collections$CollectionView*) $tmp1177)->$class->itable;
while ($tmp1207->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1207 = $tmp1207->next;
}
$fn1209 $tmp1208 = $tmp1207->methods[0];
frost$core$Int $tmp1210 = $tmp1208(((frost$collections$CollectionView*) $tmp1177));
int64_t $tmp1211 = $tmp1178.value;
int64_t $tmp1212 = $tmp1210.value;
bool $tmp1213 = $tmp1211 < $tmp1212;
frost$core$Bit $tmp1214 = (frost$core$Bit) {$tmp1213};
bool $tmp1215 = $tmp1214.value;
if ($tmp1215) goto block29; else goto block30;
block30:;
frost$core$Int $tmp1216 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1217, $tmp1216, &$s1218);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1219 = &$tmp1177->data;
frost$core$Object** $tmp1220 = *$tmp1219;
frost$core$Int64 $tmp1221 = frost$core$Int64$init$frost$core$Int($tmp1178);
int64_t $tmp1222 = $tmp1221.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
frost$core$Object* $tmp1223 = $tmp1220[$tmp1222];
frost$core$Frost$unref$frost$core$Object$Q($tmp1223);
$tmp1220[$tmp1222] = ((frost$core$Object*) $tmp1179);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
org$frostlang$frostc$Type* $tmp1224 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1225 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
goto block14;
block14:;
goto block11;
block11:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1114);
org$frostlang$frostc$Pair* $tmp1226 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block7;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
goto block6;
block6:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1227 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$IR$Value* $tmp1228 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1071);
return;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:331
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:338
frost$core$Int $tmp1229 = param2.$rawValue;
frost$core$Int $tmp1230 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:339:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1231 = $tmp1229.value;
int64_t $tmp1232 = $tmp1230.value;
bool $tmp1233 = $tmp1231 == $tmp1232;
frost$core$Bit $tmp1234 = (frost$core$Bit) {$tmp1233};
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:340
frost$core$Int* $tmp1236 = &param3->$rawValue;
frost$core$Int $tmp1237 = *$tmp1236;
frost$core$Int $tmp1238 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:341:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1239 = $tmp1237.value;
int64_t $tmp1240 = $tmp1238.value;
bool $tmp1241 = $tmp1239 == $tmp1240;
frost$core$Bit $tmp1242 = (frost$core$Bit) {$tmp1241};
bool $tmp1243 = $tmp1242.value;
if ($tmp1243) goto block6; else goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:342
org$frostlang$frostc$Compiler** $tmp1244 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1245 = *$tmp1244;
org$frostlang$frostc$Type** $tmp1246 = &$tmp1245->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1247 = *$tmp1246;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:342:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1248 = &((org$frostlang$frostc$Symbol*) param5)->name;
frost$core$String* $tmp1249 = *$tmp1248;
frost$core$String** $tmp1250 = &((org$frostlang$frostc$Symbol*) $tmp1247)->name;
frost$core$String* $tmp1251 = *$tmp1250;
frost$core$Bit $tmp1252 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1249, $tmp1251);
bool $tmp1253 = $tmp1252.value;
if ($tmp1253) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Type$Kind* $tmp1254 = &param5->typeKind;
org$frostlang$frostc$Type$Kind $tmp1255 = *$tmp1254;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1256;
$tmp1256 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1256->value = $tmp1255;
org$frostlang$frostc$Type$Kind* $tmp1257 = &$tmp1247->typeKind;
org$frostlang$frostc$Type$Kind $tmp1258 = *$tmp1257;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1259;
$tmp1259 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1259->value = $tmp1258;
ITable* $tmp1260 = ((frost$core$Equatable*) $tmp1256)->$class->itable;
while ($tmp1260->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1260 = $tmp1260->next;
}
$fn1262 $tmp1261 = $tmp1260->methods[0];
frost$core$Bit $tmp1263 = $tmp1261(((frost$core$Equatable*) $tmp1256), ((frost$core$Equatable*) $tmp1259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1259)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1256)));
*(&local0) = $tmp1263;
goto block11;
block10:;
*(&local0) = $tmp1252;
goto block11;
block11:;
frost$core$Bit $tmp1264 = *(&local0);
bool $tmp1265 = $tmp1264.value;
if ($tmp1265) goto block12; else goto block13;
block13:;
frost$core$Int $tmp1266 = (frost$core$Int) {342u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1267, $tmp1266);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:343
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1268 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1269 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1268, $tmp1269);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp1270 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp1271 = (frost$core$Bit) {true};
frost$core$Bit$wrapper* $tmp1272;
$tmp1272 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1272->value = $tmp1271;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1270, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp1272));
frost$collections$Array$add$frost$collections$Array$T($tmp1268, ((frost$core$Object*) $tmp1270));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
frost$collections$Array* $tmp1273 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
*(&local1) = $tmp1268;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:344
frost$core$Int* $tmp1274 = &param1->$rawValue;
frost$core$Int $tmp1275 = *$tmp1274;
frost$core$Int $tmp1276 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:345:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1277 = $tmp1275.value;
int64_t $tmp1278 = $tmp1276.value;
bool $tmp1279 = $tmp1277 == $tmp1278;
frost$core$Bit $tmp1280 = (frost$core$Bit) {$tmp1279};
bool $tmp1281 = $tmp1280.value;
if ($tmp1281) goto block15; else goto block14;
block15:;
org$frostlang$frostc$IR$Statement$ID* $tmp1282 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1283 = *$tmp1282;
*(&local2) = $tmp1283;
org$frostlang$frostc$Type** $tmp1284 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1285 = *$tmp1284;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:346
frost$collections$HashMap** $tmp1286 = &param0->statements;
frost$collections$HashMap* $tmp1287 = *$tmp1286;
org$frostlang$frostc$IR$Statement$ID $tmp1288 = *(&local2);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1289;
$tmp1289 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1289->value = $tmp1288;
frost$core$Object* $tmp1290 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1287, ((frost$collections$Key*) $tmp1289));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1290)));
org$frostlang$frostc$IR$Statement* $tmp1291 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) $tmp1290);
frost$core$Frost$unref$frost$core$Object$Q($tmp1290);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1289)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:347
org$frostlang$frostc$IR$Statement* $tmp1292 = *(&local3);
frost$core$Int* $tmp1293 = &$tmp1292->$rawValue;
frost$core$Int $tmp1294 = *$tmp1293;
frost$core$Int $tmp1295 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:348:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1296 = $tmp1294.value;
int64_t $tmp1297 = $tmp1295.value;
bool $tmp1298 = $tmp1296 == $tmp1297;
frost$core$Bit $tmp1299 = (frost$core$Bit) {$tmp1298};
bool $tmp1300 = $tmp1299.value;
if ($tmp1300) goto block18; else goto block17;
block18:;
org$frostlang$frostc$Position* $tmp1301 = (org$frostlang$frostc$Position*) ($tmp1292->$data + 0);
org$frostlang$frostc$Position $tmp1302 = *$tmp1301;
org$frostlang$frostc$IR$Value** $tmp1303 = (org$frostlang$frostc$IR$Value**) ($tmp1292->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1304 = *$tmp1303;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
org$frostlang$frostc$IR$Value* $tmp1305 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
*(&local4) = $tmp1304;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:349
frost$collections$Array* $tmp1306 = *(&local1);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp1307 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$IR$Value* $tmp1308 = *(&local4);
frost$core$Bit $tmp1309 = (frost$core$Bit) {true};
frost$core$Bit$wrapper* $tmp1310;
$tmp1310 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1310->value = $tmp1309;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1307, ((frost$core$Object*) $tmp1308), ((frost$core$Object*) $tmp1310));
frost$collections$Array$add$frost$collections$Array$T($tmp1306, ((frost$core$Object*) $tmp1307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
org$frostlang$frostc$IR$Value* $tmp1311 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block17;
block17:;
org$frostlang$frostc$IR$Statement* $tmp1312 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:354
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1313 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
frost$collections$Array* $tmp1314 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp1313, param5, ((frost$collections$ListView*) $tmp1314));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
frost$collections$Array* $tmp1315 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp1313;
block5:;
goto block1;
block3:;
frost$core$Int $tmp1316 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:358:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1317 = $tmp1229.value;
int64_t $tmp1318 = $tmp1316.value;
bool $tmp1319 = $tmp1317 == $tmp1318;
frost$core$Bit $tmp1320 = (frost$core$Bit) {$tmp1319};
bool $tmp1321 = $tmp1320.value;
if ($tmp1321) goto block20; else goto block1;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:359
frost$core$Int* $tmp1322 = &param3->$rawValue;
frost$core$Int $tmp1323 = *$tmp1322;
frost$core$Int $tmp1324 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:360:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1325 = $tmp1323.value;
int64_t $tmp1326 = $tmp1324.value;
bool $tmp1327 = $tmp1325 == $tmp1326;
frost$core$Bit $tmp1328 = (frost$core$Bit) {$tmp1327};
bool $tmp1329 = $tmp1328.value;
if ($tmp1329) goto block23; else goto block22;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:361
org$frostlang$frostc$Compiler** $tmp1330 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1331 = *$tmp1330;
org$frostlang$frostc$Type** $tmp1332 = &$tmp1331->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1333 = *$tmp1332;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:361:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1334 = &((org$frostlang$frostc$Symbol*) param5)->name;
frost$core$String* $tmp1335 = *$tmp1334;
frost$core$String** $tmp1336 = &((org$frostlang$frostc$Symbol*) $tmp1333)->name;
frost$core$String* $tmp1337 = *$tmp1336;
frost$core$Bit $tmp1338 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1335, $tmp1337);
bool $tmp1339 = $tmp1338.value;
if ($tmp1339) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Type$Kind* $tmp1340 = &param5->typeKind;
org$frostlang$frostc$Type$Kind $tmp1341 = *$tmp1340;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1342;
$tmp1342 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1342->value = $tmp1341;
org$frostlang$frostc$Type$Kind* $tmp1343 = &$tmp1333->typeKind;
org$frostlang$frostc$Type$Kind $tmp1344 = *$tmp1343;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1345;
$tmp1345 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1345->value = $tmp1344;
ITable* $tmp1346 = ((frost$core$Equatable*) $tmp1342)->$class->itable;
while ($tmp1346->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1346 = $tmp1346->next;
}
$fn1348 $tmp1347 = $tmp1346->methods[0];
frost$core$Bit $tmp1349 = $tmp1347(((frost$core$Equatable*) $tmp1342), ((frost$core$Equatable*) $tmp1345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1345)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1342)));
*(&local5) = $tmp1349;
goto block28;
block27:;
*(&local5) = $tmp1338;
goto block28;
block28:;
frost$core$Bit $tmp1350 = *(&local5);
bool $tmp1351 = $tmp1350.value;
if ($tmp1351) goto block29; else goto block30;
block30:;
frost$core$Int $tmp1352 = (frost$core$Int) {361u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1353, $tmp1352);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:362
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1354 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1355 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1354, $tmp1355);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp1356 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp1357 = (frost$core$Bit) {false};
frost$core$Bit$wrapper* $tmp1358;
$tmp1358 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1358->value = $tmp1357;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1356, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp1358));
frost$collections$Array$add$frost$collections$Array$T($tmp1354, ((frost$core$Object*) $tmp1356));
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
frost$collections$Array* $tmp1359 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
*(&local6) = $tmp1354;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:363
frost$core$Int* $tmp1360 = &param1->$rawValue;
frost$core$Int $tmp1361 = *$tmp1360;
frost$core$Int $tmp1362 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:364:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1363 = $tmp1361.value;
int64_t $tmp1364 = $tmp1362.value;
bool $tmp1365 = $tmp1363 == $tmp1364;
frost$core$Bit $tmp1366 = (frost$core$Bit) {$tmp1365};
bool $tmp1367 = $tmp1366.value;
if ($tmp1367) goto block32; else goto block31;
block32:;
org$frostlang$frostc$IR$Statement$ID* $tmp1368 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1369 = *$tmp1368;
*(&local7) = $tmp1369;
org$frostlang$frostc$Type** $tmp1370 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp1371 = *$tmp1370;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:365
frost$collections$HashMap** $tmp1372 = &param0->statements;
frost$collections$HashMap* $tmp1373 = *$tmp1372;
org$frostlang$frostc$IR$Statement$ID $tmp1374 = *(&local7);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1375;
$tmp1375 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1375->value = $tmp1374;
frost$core$Object* $tmp1376 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1373, ((frost$collections$Key*) $tmp1375));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1376)));
org$frostlang$frostc$IR$Statement* $tmp1377 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) $tmp1376);
frost$core$Frost$unref$frost$core$Object$Q($tmp1376);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1375)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:366
org$frostlang$frostc$IR$Statement* $tmp1378 = *(&local8);
frost$core$Int* $tmp1379 = &$tmp1378->$rawValue;
frost$core$Int $tmp1380 = *$tmp1379;
frost$core$Int $tmp1381 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:367:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1382 = $tmp1380.value;
int64_t $tmp1383 = $tmp1381.value;
bool $tmp1384 = $tmp1382 == $tmp1383;
frost$core$Bit $tmp1385 = (frost$core$Bit) {$tmp1384};
bool $tmp1386 = $tmp1385.value;
if ($tmp1386) goto block35; else goto block34;
block35:;
org$frostlang$frostc$Position* $tmp1387 = (org$frostlang$frostc$Position*) ($tmp1378->$data + 0);
org$frostlang$frostc$Position $tmp1388 = *$tmp1387;
org$frostlang$frostc$IR$Value** $tmp1389 = (org$frostlang$frostc$IR$Value**) ($tmp1378->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1390 = *$tmp1389;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
org$frostlang$frostc$IR$Value* $tmp1391 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
*(&local9) = $tmp1390;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:368
frost$collections$Array* $tmp1392 = *(&local6);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp1393 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$IR$Value* $tmp1394 = *(&local9);
frost$core$Bit $tmp1395 = (frost$core$Bit) {false};
frost$core$Bit$wrapper* $tmp1396;
$tmp1396 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1396->value = $tmp1395;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1393, ((frost$core$Object*) $tmp1394), ((frost$core$Object*) $tmp1396));
frost$collections$Array$add$frost$collections$Array$T($tmp1392, ((frost$core$Object*) $tmp1393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
org$frostlang$frostc$IR$Value* $tmp1397 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block34;
block34:;
org$frostlang$frostc$IR$Statement* $tmp1398 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
*(&local8) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:373
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1399 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
frost$collections$Array* $tmp1400 = *(&local6);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp1399, param5, ((frost$collections$ListView*) $tmp1400));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
frost$collections$Array* $tmp1401 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
*(&local6) = ((frost$collections$Array*) NULL);
return $tmp1399;
block22:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:379
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1402 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1402, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
return $tmp1402;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:383
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$pass$Analyzer$State));
org$frostlang$frostc$pass$Analyzer$State* $tmp1403 = (org$frostlang$frostc$pass$Analyzer$State*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$State$class);
frost$collections$HashMap** $tmp1404 = &param0->entryStates;
frost$collections$HashMap* $tmp1405 = *$tmp1404;
org$frostlang$frostc$IR$Block$ID $tmp1406 = param1.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1407;
$tmp1407 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1407->value = $tmp1406;
frost$core$Object* $tmp1408 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1405, ((frost$collections$Key*) $tmp1407));
org$frostlang$frostc$pass$Analyzer$State$init$org$frostlang$frostc$pass$Analyzer$State($tmp1403, ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1408));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
org$frostlang$frostc$pass$Analyzer$State* $tmp1409 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
*(&local0) = $tmp1403;
frost$core$Frost$unref$frost$core$Object$Q($tmp1408);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1407)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:384
frost$collections$HashMap** $tmp1410 = &param0->blocks;
frost$collections$HashMap* $tmp1411 = *$tmp1410;
org$frostlang$frostc$IR$Block$ID $tmp1412 = param1.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1413;
$tmp1413 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1413->value = $tmp1412;
frost$core$Object* $tmp1414 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1411, ((frost$collections$Key*) $tmp1413));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp1414)));
org$frostlang$frostc$IR$Block* $tmp1415 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp1414);
frost$core$Frost$unref$frost$core$Object$Q($tmp1414);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1413)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:385
org$frostlang$frostc$IR$Block* $tmp1416 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1417 = &$tmp1416->ids;
org$frostlang$frostc$LinkedList* $tmp1418 = *$tmp1417;
ITable* $tmp1419 = ((frost$collections$Iterable*) $tmp1418)->$class->itable;
while ($tmp1419->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1419 = $tmp1419->next;
}
$fn1421 $tmp1420 = $tmp1419->methods[0];
frost$collections$Iterator* $tmp1422 = $tmp1420(((frost$collections$Iterable*) $tmp1418));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
frost$collections$Iterator* $tmp1423 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
*(&local2) = $tmp1422;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:386
org$frostlang$frostc$IR$Block* $tmp1424 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1425 = &$tmp1424->statements;
org$frostlang$frostc$LinkedList* $tmp1426 = *$tmp1425;
ITable* $tmp1427 = ((frost$collections$Iterable*) $tmp1426)->$class->itable;
while ($tmp1427->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1427 = $tmp1427->next;
}
$fn1429 $tmp1428 = $tmp1427->methods[0];
frost$collections$Iterator* $tmp1430 = $tmp1428(((frost$collections$Iterable*) $tmp1426));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
frost$collections$Iterator* $tmp1431 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
*(&local3) = $tmp1430;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:387
goto block1;
block1:;
frost$collections$Iterator* $tmp1432 = *(&local2);
ITable* $tmp1433 = $tmp1432->$class->itable;
while ($tmp1433->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1433 = $tmp1433->next;
}
$fn1435 $tmp1434 = $tmp1433->methods[0];
frost$core$Bit $tmp1436 = $tmp1434($tmp1432);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:387:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1437 = $tmp1436.value;
bool $tmp1438 = !$tmp1437;
frost$core$Bit $tmp1439 = (frost$core$Bit) {$tmp1438};
bool $tmp1440 = $tmp1439.value;
if ($tmp1440) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:388
frost$collections$Iterator* $tmp1441 = *(&local2);
ITable* $tmp1442 = $tmp1441->$class->itable;
while ($tmp1442->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1442 = $tmp1442->next;
}
$fn1444 $tmp1443 = $tmp1442->methods[1];
frost$core$Object* $tmp1445 = $tmp1443($tmp1441);
*(&local4) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp1445)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1445);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:389
frost$collections$Iterator* $tmp1446 = *(&local3);
ITable* $tmp1447 = $tmp1446->$class->itable;
while ($tmp1447->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1447 = $tmp1447->next;
}
$fn1449 $tmp1448 = $tmp1447->methods[1];
frost$core$Object* $tmp1450 = $tmp1448($tmp1446);
frost$core$Int* $tmp1451 = &((org$frostlang$frostc$IR$Statement*) $tmp1450)->$rawValue;
frost$core$Int $tmp1452 = *$tmp1451;
frost$core$Int $tmp1453 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:390:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1454 = $tmp1452.value;
int64_t $tmp1455 = $tmp1453.value;
bool $tmp1456 = $tmp1454 == $tmp1455;
frost$core$Bit $tmp1457 = (frost$core$Bit) {$tmp1456};
bool $tmp1458 = $tmp1457.value;
if ($tmp1458) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp1459 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1450)->$data + 0);
org$frostlang$frostc$Position $tmp1460 = *$tmp1459;
org$frostlang$frostc$IR$Value** $tmp1461 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1450)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1462 = *$tmp1461;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
org$frostlang$frostc$IR$Value* $tmp1463 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
*(&local5) = $tmp1462;
org$frostlang$frostc$IR$Value** $tmp1464 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1450)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp1465 = *$tmp1464;
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
org$frostlang$frostc$IR$Value* $tmp1466 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local6) = $tmp1465;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:391
org$frostlang$frostc$IR$Value* $tmp1467 = *(&local6);
frost$core$Int* $tmp1468 = &$tmp1467->$rawValue;
frost$core$Int $tmp1469 = *$tmp1468;
frost$core$Int $tmp1470 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:392:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1471 = $tmp1469.value;
int64_t $tmp1472 = $tmp1470.value;
bool $tmp1473 = $tmp1471 == $tmp1472;
frost$core$Bit $tmp1474 = (frost$core$Bit) {$tmp1473};
bool $tmp1475 = $tmp1474.value;
if ($tmp1475) goto block10; else goto block11;
block10:;
frost$core$Int* $tmp1476 = (frost$core$Int*) ($tmp1467->$data + 0);
frost$core$Int $tmp1477 = *$tmp1476;
*(&local7) = $tmp1477;
org$frostlang$frostc$Type** $tmp1478 = (org$frostlang$frostc$Type**) ($tmp1467->$data + 8);
org$frostlang$frostc$Type* $tmp1479 = *$tmp1478;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:393
org$frostlang$frostc$pass$Analyzer$State* $tmp1480 = *(&local0);
frost$collections$Array** $tmp1481 = &$tmp1480->locals;
frost$collections$Array* $tmp1482 = *$tmp1481;
frost$core$Int $tmp1483 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1484 = *(&local5);
org$frostlang$frostc$pass$Analyzer$State* $tmp1485 = *(&local0);
$fn1487 $tmp1486 = ($fn1487) param0->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1488 = $tmp1486(param0, $tmp1484, $tmp1485);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:393:42
frost$core$Int $tmp1489 = (frost$core$Int) {0u};
int64_t $tmp1490 = $tmp1483.value;
int64_t $tmp1491 = $tmp1489.value;
bool $tmp1492 = $tmp1490 >= $tmp1491;
frost$core$Bit $tmp1493 = (frost$core$Bit) {$tmp1492};
bool $tmp1494 = $tmp1493.value;
if ($tmp1494) goto block16; else goto block15;
block16:;
ITable* $tmp1495 = ((frost$collections$CollectionView*) $tmp1482)->$class->itable;
while ($tmp1495->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1495 = $tmp1495->next;
}
$fn1497 $tmp1496 = $tmp1495->methods[0];
frost$core$Int $tmp1498 = $tmp1496(((frost$collections$CollectionView*) $tmp1482));
int64_t $tmp1499 = $tmp1483.value;
int64_t $tmp1500 = $tmp1498.value;
bool $tmp1501 = $tmp1499 < $tmp1500;
frost$core$Bit $tmp1502 = (frost$core$Bit) {$tmp1501};
bool $tmp1503 = $tmp1502.value;
if ($tmp1503) goto block14; else goto block15;
block15:;
frost$core$Int $tmp1504 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1505, $tmp1504, &$s1506);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1507 = &$tmp1482->data;
frost$core$Object** $tmp1508 = *$tmp1507;
frost$core$Int64 $tmp1509 = frost$core$Int64$init$frost$core$Int($tmp1483);
int64_t $tmp1510 = $tmp1509.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
frost$core$Object* $tmp1511 = $tmp1508[$tmp1510];
frost$core$Frost$unref$frost$core$Object$Q($tmp1511);
$tmp1508[$tmp1510] = ((frost$core$Object*) $tmp1488);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
goto block9;
block11:;
frost$core$Int $tmp1512 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:395:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1513 = $tmp1469.value;
int64_t $tmp1514 = $tmp1512.value;
bool $tmp1515 = $tmp1513 == $tmp1514;
frost$core$Bit $tmp1516 = (frost$core$Bit) {$tmp1515};
bool $tmp1517 = $tmp1516.value;
if ($tmp1517) goto block17; else goto block9;
block17:;
org$frostlang$frostc$IR$Statement$ID* $tmp1518 = (org$frostlang$frostc$IR$Statement$ID*) ($tmp1467->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp1519 = *$tmp1518;
*(&local8) = $tmp1519;
org$frostlang$frostc$Type** $tmp1520 = (org$frostlang$frostc$Type**) ($tmp1467->$data + 8);
org$frostlang$frostc$Type* $tmp1521 = *$tmp1520;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:396
frost$collections$HashMap** $tmp1522 = &param0->statements;
frost$collections$HashMap* $tmp1523 = *$tmp1522;
org$frostlang$frostc$IR$Statement$ID $tmp1524 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1525;
$tmp1525 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1525->value = $tmp1524;
frost$core$Object* $tmp1526 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1523, ((frost$collections$Key*) $tmp1525));
frost$core$Int* $tmp1527 = &((org$frostlang$frostc$IR$Statement*) $tmp1526)->$rawValue;
frost$core$Int $tmp1528 = *$tmp1527;
frost$core$Int $tmp1529 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:397:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1530 = $tmp1528.value;
int64_t $tmp1531 = $tmp1529.value;
bool $tmp1532 = $tmp1530 == $tmp1531;
frost$core$Bit $tmp1533 = (frost$core$Bit) {$tmp1532};
bool $tmp1534 = $tmp1533.value;
if ($tmp1534) goto block20; else goto block19;
block20:;
org$frostlang$frostc$Position* $tmp1535 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1526)->$data + 0);
org$frostlang$frostc$Position $tmp1536 = *$tmp1535;
org$frostlang$frostc$IR$Value** $tmp1537 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1526)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1538 = *$tmp1537;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1538));
org$frostlang$frostc$IR$Value* $tmp1539 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
*(&local9) = $tmp1538;
org$frostlang$frostc$FieldDecl** $tmp1540 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp1526)->$data + 32);
org$frostlang$frostc$FieldDecl* $tmp1541 = *$tmp1540;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:398
org$frostlang$frostc$IR$Value* $tmp1542 = *(&local9);
frost$core$Int* $tmp1543 = &$tmp1542->$rawValue;
frost$core$Int $tmp1544 = *$tmp1543;
frost$core$Int $tmp1545 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:399:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1546 = $tmp1544.value;
int64_t $tmp1547 = $tmp1545.value;
bool $tmp1548 = $tmp1546 == $tmp1547;
frost$core$Bit $tmp1549 = (frost$core$Bit) {$tmp1548};
bool $tmp1550 = $tmp1549.value;
if ($tmp1550) goto block23; else goto block22;
block23:;
frost$core$Int* $tmp1551 = (frost$core$Int*) ($tmp1542->$data + 0);
frost$core$Int $tmp1552 = *$tmp1551;
*(&local10) = $tmp1552;
org$frostlang$frostc$Type** $tmp1553 = (org$frostlang$frostc$Type**) ($tmp1542->$data + 8);
org$frostlang$frostc$Type* $tmp1554 = *$tmp1553;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:400
org$frostlang$frostc$pass$Analyzer$State* $tmp1555 = *(&local0);
frost$collections$Array** $tmp1556 = &$tmp1555->locals;
frost$collections$Array* $tmp1557 = *$tmp1556;
frost$core$Int $tmp1558 = *(&local10);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1559 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$IR** $tmp1560 = &param0->ir;
org$frostlang$frostc$IR* $tmp1561 = *$tmp1560;
frost$collections$Array** $tmp1562 = &$tmp1561->locals;
frost$collections$Array* $tmp1563 = *$tmp1562;
frost$core$Int $tmp1564 = *(&local10);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:400:91
frost$core$Int $tmp1565 = (frost$core$Int) {0u};
int64_t $tmp1566 = $tmp1564.value;
int64_t $tmp1567 = $tmp1565.value;
bool $tmp1568 = $tmp1566 >= $tmp1567;
frost$core$Bit $tmp1569 = (frost$core$Bit) {$tmp1568};
bool $tmp1570 = $tmp1569.value;
if ($tmp1570) goto block28; else goto block27;
block28:;
ITable* $tmp1571 = ((frost$collections$CollectionView*) $tmp1563)->$class->itable;
while ($tmp1571->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1571 = $tmp1571->next;
}
$fn1573 $tmp1572 = $tmp1571->methods[0];
frost$core$Int $tmp1574 = $tmp1572(((frost$collections$CollectionView*) $tmp1563));
int64_t $tmp1575 = $tmp1564.value;
int64_t $tmp1576 = $tmp1574.value;
bool $tmp1577 = $tmp1575 < $tmp1576;
frost$core$Bit $tmp1578 = (frost$core$Bit) {$tmp1577};
bool $tmp1579 = $tmp1578.value;
if ($tmp1579) goto block26; else goto block27;
block27:;
frost$core$Int $tmp1580 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1581, $tmp1580, &$s1582);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1583 = &$tmp1563->data;
frost$core$Object** $tmp1584 = *$tmp1583;
frost$core$Int64 $tmp1585 = frost$core$Int64$init$frost$core$Int($tmp1564);
int64_t $tmp1586 = $tmp1585.value;
frost$core$Object* $tmp1587 = $tmp1584[$tmp1586];
frost$core$Frost$ref$frost$core$Object$Q($tmp1587);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1559, ((org$frostlang$frostc$Type*) $tmp1587));
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:400:58
frost$core$Int $tmp1588 = (frost$core$Int) {0u};
int64_t $tmp1589 = $tmp1558.value;
int64_t $tmp1590 = $tmp1588.value;
bool $tmp1591 = $tmp1589 >= $tmp1590;
frost$core$Bit $tmp1592 = (frost$core$Bit) {$tmp1591};
bool $tmp1593 = $tmp1592.value;
if ($tmp1593) goto block32; else goto block31;
block32:;
ITable* $tmp1594 = ((frost$collections$CollectionView*) $tmp1557)->$class->itable;
while ($tmp1594->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1594 = $tmp1594->next;
}
$fn1596 $tmp1595 = $tmp1594->methods[0];
frost$core$Int $tmp1597 = $tmp1595(((frost$collections$CollectionView*) $tmp1557));
int64_t $tmp1598 = $tmp1558.value;
int64_t $tmp1599 = $tmp1597.value;
bool $tmp1600 = $tmp1598 < $tmp1599;
frost$core$Bit $tmp1601 = (frost$core$Bit) {$tmp1600};
bool $tmp1602 = $tmp1601.value;
if ($tmp1602) goto block30; else goto block31;
block31:;
frost$core$Int $tmp1603 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1604, $tmp1603, &$s1605);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp1606 = &$tmp1557->data;
frost$core$Object** $tmp1607 = *$tmp1606;
frost$core$Int64 $tmp1608 = frost$core$Int64$init$frost$core$Int($tmp1558);
int64_t $tmp1609 = $tmp1608.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
frost$core$Object* $tmp1610 = $tmp1607[$tmp1609];
frost$core$Frost$unref$frost$core$Object$Q($tmp1610);
$tmp1607[$tmp1609] = ((frost$core$Object*) $tmp1559);
frost$core$Frost$unref$frost$core$Object$Q($tmp1587);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
goto block22;
block22:;
org$frostlang$frostc$IR$Value* $tmp1611 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block19;
block19:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1526);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1525)));
goto block9;
block9:;
org$frostlang$frostc$IR$Value* $tmp1612 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1613 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block5;
block7:;
frost$core$Int $tmp1614 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:408:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1615 = $tmp1452.value;
int64_t $tmp1616 = $tmp1614.value;
bool $tmp1617 = $tmp1615 == $tmp1616;
frost$core$Bit $tmp1618 = (frost$core$Bit) {$tmp1617};
bool $tmp1619 = $tmp1618.value;
if ($tmp1619) goto block33; else goto block5;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:409
frost$core$Bit* $tmp1620 = &param0->reportErrors;
frost$core$Bit $tmp1621 = *$tmp1620;
bool $tmp1622 = $tmp1621.value;
if ($tmp1622) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:410
org$frostlang$frostc$IR$Statement$ID $tmp1623 = *(&local4);
org$frostlang$frostc$pass$Analyzer$State* $tmp1624 = *(&local0);
$fn1626 $tmp1625 = ($fn1626) param0->$class->vtable[2];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1627 = $tmp1625(param0, $tmp1623, $tmp1624);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
goto block36;
block36:;
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1450);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:415
org$frostlang$frostc$IR$Block* $tmp1628 = *(&local1);
frost$core$Int $tmp1629 = param1.exit;
org$frostlang$frostc$pass$Analyzer$State* $tmp1630 = *(&local0);
$fn1632 $tmp1631 = ($fn1632) param0->$class->vtable[5];
$tmp1631(param0, $tmp1628, $tmp1629, $tmp1630);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:416
org$frostlang$frostc$pass$Analyzer$State* $tmp1633 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
frost$collections$Iterator* $tmp1634 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp1635 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
*(&local2) = ((frost$collections$Iterator*) NULL);
org$frostlang$frostc$IR$Block* $tmp1636 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
org$frostlang$frostc$pass$Analyzer$State* $tmp1637 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
return $tmp1633;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:420
frost$collections$HashMap** $tmp1638 = &param0->blocks;
frost$collections$HashMap* $tmp1639 = *$tmp1638;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1640;
$tmp1640 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1640->value = param1;
frost$core$Object* $tmp1641 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1639, ((frost$collections$Key*) $tmp1640));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp1641)));
org$frostlang$frostc$IR$Block* $tmp1642 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
*(&local0) = ((org$frostlang$frostc$IR$Block*) $tmp1641);
frost$core$Frost$unref$frost$core$Object$Q($tmp1641);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1640)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:421
org$frostlang$frostc$IR$Block* $tmp1643 = *(&local0);
org$frostlang$frostc$LinkedList** $tmp1644 = &$tmp1643->statements;
org$frostlang$frostc$LinkedList* $tmp1645 = *$tmp1644;
$fn1647 $tmp1646 = ($fn1647) $tmp1645->$class->vtable[6];
frost$core$Object* $tmp1648 = $tmp1646($tmp1645);
frost$core$Int* $tmp1649 = &((org$frostlang$frostc$IR$Statement*) $tmp1648)->$rawValue;
frost$core$Int $tmp1650 = *$tmp1649;
frost$core$Int $tmp1651 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:422:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1652 = $tmp1650.value;
int64_t $tmp1653 = $tmp1651.value;
bool $tmp1654 = $tmp1652 == $tmp1653;
frost$core$Bit $tmp1655 = (frost$core$Bit) {$tmp1654};
bool $tmp1656 = $tmp1655.value;
if ($tmp1656) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1657 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1648)->$data + 0);
org$frostlang$frostc$Position $tmp1658 = *$tmp1657;
org$frostlang$frostc$IR$Block$ID* $tmp1659 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1648)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp1660 = *$tmp1659;
*(&local1) = $tmp1660;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:423
org$frostlang$frostc$IR$Block* $tmp1661 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1662 = &$tmp1661->id;
org$frostlang$frostc$IR$Block$ID $tmp1663 = *$tmp1662;
frost$core$Int $tmp1664 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:423:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
org$frostlang$frostc$IR$Block$ID* $tmp1665 = &(&local3)->id;
*$tmp1665 = $tmp1663;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:82
frost$core$Int* $tmp1666 = &(&local3)->exit;
*$tmp1666 = $tmp1664;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1667 = *(&local3);
*(&local2) = $tmp1667;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1668 = *(&local2);
org$frostlang$frostc$IR$Block$ID $tmp1669 = *(&local1);
$fn1671 $tmp1670 = ($fn1671) param0->$class->vtable[4];
$tmp1670(param0, $tmp1668, $tmp1669);
goto block1;
block3:;
frost$core$Int $tmp1672 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:425:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1673 = $tmp1650.value;
int64_t $tmp1674 = $tmp1672.value;
bool $tmp1675 = $tmp1673 == $tmp1674;
frost$core$Bit $tmp1676 = (frost$core$Bit) {$tmp1675};
bool $tmp1677 = $tmp1676.value;
if ($tmp1677) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp1678 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp1648)->$data + 0);
org$frostlang$frostc$Position $tmp1679 = *$tmp1678;
org$frostlang$frostc$IR$Value** $tmp1680 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp1648)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp1681 = *$tmp1680;
org$frostlang$frostc$IR$Block$ID* $tmp1682 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1648)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp1683 = *$tmp1682;
*(&local4) = $tmp1683;
org$frostlang$frostc$IR$Block$ID* $tmp1684 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp1648)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp1685 = *$tmp1684;
*(&local5) = $tmp1685;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:426
org$frostlang$frostc$IR$Block* $tmp1686 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1687 = &$tmp1686->id;
org$frostlang$frostc$IR$Block$ID $tmp1688 = *$tmp1687;
frost$core$Int $tmp1689 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:426:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
org$frostlang$frostc$IR$Block$ID* $tmp1690 = &(&local7)->id;
*$tmp1690 = $tmp1688;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:82
frost$core$Int* $tmp1691 = &(&local7)->exit;
*$tmp1691 = $tmp1689;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1692 = *(&local7);
*(&local6) = $tmp1692;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1693 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp1694 = *(&local4);
$fn1696 $tmp1695 = ($fn1696) param0->$class->vtable[4];
$tmp1695(param0, $tmp1693, $tmp1694);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:427
org$frostlang$frostc$IR$Block* $tmp1697 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp1698 = &$tmp1697->id;
org$frostlang$frostc$IR$Block$ID $tmp1699 = *$tmp1698;
frost$core$Int $tmp1700 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:427:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
org$frostlang$frostc$IR$Block$ID* $tmp1701 = &(&local9)->id;
*$tmp1701 = $tmp1699;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:82
frost$core$Int* $tmp1702 = &(&local9)->exit;
*$tmp1702 = $tmp1700;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1703 = *(&local9);
*(&local8) = $tmp1703;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp1704 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp1705 = *(&local5);
$fn1707 $tmp1706 = ($fn1707) param0->$class->vtable[4];
$tmp1706(param0, $tmp1704, $tmp1705);
goto block1;
block7:;
frost$core$Int $tmp1708 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:429:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1709 = $tmp1650.value;
int64_t $tmp1710 = $tmp1708.value;
bool $tmp1711 = $tmp1709 == $tmp1710;
frost$core$Bit $tmp1712 = (frost$core$Bit) {$tmp1711};
bool $tmp1713 = $tmp1712.value;
if ($tmp1713) goto block11; else goto block12;
block11:;
goto block1;
block12:;
frost$core$Int $tmp1714 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:431:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1715 = $tmp1650.value;
int64_t $tmp1716 = $tmp1714.value;
bool $tmp1717 = $tmp1715 == $tmp1716;
frost$core$Bit $tmp1718 = (frost$core$Bit) {$tmp1717};
bool $tmp1719 = $tmp1718.value;
if ($tmp1719) goto block14; else goto block15;
block14:;
goto block1;
block15:;
frost$core$Int $tmp1720 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:433:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1721 = $tmp1650.value;
int64_t $tmp1722 = $tmp1720.value;
bool $tmp1723 = $tmp1721 == $tmp1722;
frost$core$Bit $tmp1724 = (frost$core$Bit) {$tmp1723};
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block17; else goto block18;
block17:;
goto block1;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:436
frost$core$Int $tmp1726 = (frost$core$Int) {436u};
org$frostlang$frostc$IR$Block* $tmp1727 = *(&local0);
org$frostlang$frostc$LinkedList** $tmp1728 = &$tmp1727->statements;
org$frostlang$frostc$LinkedList* $tmp1729 = *$tmp1728;
$fn1731 $tmp1730 = ($fn1731) $tmp1729->$class->vtable[6];
frost$core$Object* $tmp1732 = $tmp1730($tmp1729);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:436:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1734 $tmp1733 = ($fn1734) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1732))->$class->vtable[0];
frost$core$String* $tmp1735 = $tmp1733(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1732)));
frost$core$String* $tmp1736 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1737, $tmp1735);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1738, $tmp1726, $tmp1736);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
frost$core$Frost$unref$frost$core$Object$Q($tmp1732);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1648);
org$frostlang$frostc$IR$Block* $tmp1739 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$dump(org$frostlang$frostc$pass$Analyzer* param0) {

frost$core$Int local0;
org$frostlang$frostc$IR$Block* local1 = NULL;
frost$collections$Iterator* local2 = NULL;
frost$collections$Iterator* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:442
org$frostlang$frostc$MethodDecl** $tmp1740 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp1741 = *$tmp1740;
frost$core$String* $tmp1742 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp1741);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Analyzer.frost:442:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1742);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1743);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:443
frost$core$Int $tmp1744 = (frost$core$Int) {0u};
org$frostlang$frostc$IR** $tmp1745 = &param0->ir;
org$frostlang$frostc$IR* $tmp1746 = *$tmp1745;
frost$collections$Array** $tmp1747 = &$tmp1746->locals;
frost$collections$Array* $tmp1748 = *$tmp1747;
ITable* $tmp1749 = ((frost$collections$CollectionView*) $tmp1748)->$class->itable;
while ($tmp1749->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1749 = $tmp1749->next;
}
$fn1751 $tmp1750 = $tmp1749->methods[0];
frost$core$Int $tmp1752 = $tmp1750(((frost$collections$CollectionView*) $tmp1748));
frost$core$Bit $tmp1753 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1754 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1744, $tmp1752, $tmp1753);
frost$core$Int $tmp1755 = $tmp1754.min;
*(&local0) = $tmp1755;
frost$core$Int $tmp1756 = $tmp1754.max;
frost$core$Bit $tmp1757 = $tmp1754.inclusive;
bool $tmp1758 = $tmp1757.value;
frost$core$Int $tmp1759 = (frost$core$Int) {1u};
if ($tmp1758) goto block6; else goto block7;
block6:;
int64_t $tmp1760 = $tmp1755.value;
int64_t $tmp1761 = $tmp1756.value;
bool $tmp1762 = $tmp1760 <= $tmp1761;
frost$core$Bit $tmp1763 = (frost$core$Bit) {$tmp1762};
bool $tmp1764 = $tmp1763.value;
if ($tmp1764) goto block3; else goto block4;
block7:;
int64_t $tmp1765 = $tmp1755.value;
int64_t $tmp1766 = $tmp1756.value;
bool $tmp1767 = $tmp1765 < $tmp1766;
frost$core$Bit $tmp1768 = (frost$core$Bit) {$tmp1767};
bool $tmp1769 = $tmp1768.value;
if ($tmp1769) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:444
frost$core$Int $tmp1770 = *(&local0);
frost$core$Int$wrapper* $tmp1771;
$tmp1771 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1771->value = $tmp1770;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:444:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1773 $tmp1772 = ($fn1773) ((frost$core$Object*) $tmp1771)->$class->vtable[0];
frost$core$String* $tmp1774 = $tmp1772(((frost$core$Object*) $tmp1771));
frost$core$String* $tmp1775 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1776, $tmp1774);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1774));
frost$core$String* $tmp1777 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1775, &$s1778);
org$frostlang$frostc$IR** $tmp1779 = &param0->ir;
org$frostlang$frostc$IR* $tmp1780 = *$tmp1779;
frost$collections$Array** $tmp1781 = &$tmp1780->locals;
frost$collections$Array* $tmp1782 = *$tmp1781;
frost$core$Int $tmp1783 = *(&local0);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:444:54
frost$core$Int $tmp1784 = (frost$core$Int) {0u};
int64_t $tmp1785 = $tmp1783.value;
int64_t $tmp1786 = $tmp1784.value;
bool $tmp1787 = $tmp1785 >= $tmp1786;
frost$core$Bit $tmp1788 = (frost$core$Bit) {$tmp1787};
bool $tmp1789 = $tmp1788.value;
if ($tmp1789) goto block12; else goto block11;
block12:;
ITable* $tmp1790 = ((frost$collections$CollectionView*) $tmp1782)->$class->itable;
while ($tmp1790->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1790 = $tmp1790->next;
}
$fn1792 $tmp1791 = $tmp1790->methods[0];
frost$core$Int $tmp1793 = $tmp1791(((frost$collections$CollectionView*) $tmp1782));
int64_t $tmp1794 = $tmp1783.value;
int64_t $tmp1795 = $tmp1793.value;
bool $tmp1796 = $tmp1794 < $tmp1795;
frost$core$Bit $tmp1797 = (frost$core$Bit) {$tmp1796};
bool $tmp1798 = $tmp1797.value;
if ($tmp1798) goto block10; else goto block11;
block11:;
frost$core$Int $tmp1799 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1800, $tmp1799, &$s1801);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1802 = &$tmp1782->data;
frost$core$Object** $tmp1803 = *$tmp1802;
frost$core$Int64 $tmp1804 = frost$core$Int64$init$frost$core$Int($tmp1783);
int64_t $tmp1805 = $tmp1804.value;
frost$core$Object* $tmp1806 = $tmp1803[$tmp1805];
frost$core$Frost$ref$frost$core$Object$Q($tmp1806);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:444:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1808 $tmp1807 = ($fn1808) ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1806))->$class->vtable[0];
frost$core$String* $tmp1809 = $tmp1807(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1806)));
frost$core$String* $tmp1810 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1777, $tmp1809);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
frost$core$String* $tmp1811 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1810, &$s1812);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Analyzer.frost:444:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1811);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1813);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1810));
frost$core$Frost$unref$frost$core$Object$Q($tmp1806);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
frost$core$Int $tmp1814 = *(&local0);
int64_t $tmp1815 = $tmp1756.value;
int64_t $tmp1816 = $tmp1814.value;
int64_t $tmp1817 = $tmp1815 - $tmp1816;
frost$core$Int $tmp1818 = (frost$core$Int) {$tmp1817};
if ($tmp1758) goto block17; else goto block18;
block17:;
int64_t $tmp1819 = $tmp1818.value;
int64_t $tmp1820 = $tmp1759.value;
bool $tmp1821 = $tmp1819 >= $tmp1820;
frost$core$Bit $tmp1822 = (frost$core$Bit) {$tmp1821};
bool $tmp1823 = $tmp1822.value;
if ($tmp1823) goto block16; else goto block4;
block18:;
int64_t $tmp1824 = $tmp1818.value;
int64_t $tmp1825 = $tmp1759.value;
bool $tmp1826 = $tmp1824 > $tmp1825;
frost$core$Bit $tmp1827 = (frost$core$Bit) {$tmp1826};
bool $tmp1828 = $tmp1827.value;
if ($tmp1828) goto block16; else goto block4;
block16:;
int64_t $tmp1829 = $tmp1814.value;
int64_t $tmp1830 = $tmp1759.value;
int64_t $tmp1831 = $tmp1829 + $tmp1830;
frost$core$Int $tmp1832 = (frost$core$Int) {$tmp1831};
*(&local0) = $tmp1832;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:446
org$frostlang$frostc$IR** $tmp1833 = &param0->ir;
org$frostlang$frostc$IR* $tmp1834 = *$tmp1833;
frost$collections$Array** $tmp1835 = &$tmp1834->blocks;
frost$collections$Array* $tmp1836 = *$tmp1835;
ITable* $tmp1837 = ((frost$collections$Iterable*) $tmp1836)->$class->itable;
while ($tmp1837->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1837 = $tmp1837->next;
}
$fn1839 $tmp1838 = $tmp1837->methods[0];
frost$collections$Iterator* $tmp1840 = $tmp1838(((frost$collections$Iterable*) $tmp1836));
goto block19;
block19:;
ITable* $tmp1841 = $tmp1840->$class->itable;
while ($tmp1841->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1841 = $tmp1841->next;
}
$fn1843 $tmp1842 = $tmp1841->methods[0];
frost$core$Bit $tmp1844 = $tmp1842($tmp1840);
bool $tmp1845 = $tmp1844.value;
if ($tmp1845) goto block21; else goto block20;
block20:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp1846 = $tmp1840->$class->itable;
while ($tmp1846->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1846 = $tmp1846->next;
}
$fn1848 $tmp1847 = $tmp1846->methods[1];
frost$core$Object* $tmp1849 = $tmp1847($tmp1840);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp1849)));
org$frostlang$frostc$IR$Block* $tmp1850 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp1849);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:447
org$frostlang$frostc$IR$Block* $tmp1851 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp1852 = &$tmp1851->id;
org$frostlang$frostc$IR$Block$ID $tmp1853 = *$tmp1852;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1854;
$tmp1854 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1854->value = $tmp1853;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:447:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1856 $tmp1855 = ($fn1856) ((frost$core$Object*) $tmp1854)->$class->vtable[0];
frost$core$String* $tmp1857 = $tmp1855(((frost$core$Object*) $tmp1854));
frost$core$String* $tmp1858 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1859, $tmp1857);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
frost$core$String* $tmp1860 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1858, &$s1861);
frost$io$Console$print$frost$core$String($tmp1860);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:448
frost$collections$HashMap** $tmp1862 = &param0->entryStates;
frost$collections$HashMap* $tmp1863 = *$tmp1862;
org$frostlang$frostc$IR$Block* $tmp1864 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp1865 = &$tmp1864->id;
org$frostlang$frostc$IR$Block$ID $tmp1866 = *$tmp1865;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1867;
$tmp1867 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1867->value = $tmp1866;
frost$core$Object* $tmp1868 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1863, ((frost$collections$Key*) $tmp1867));
frost$core$Bit $tmp1869 = (frost$core$Bit) {((org$frostlang$frostc$pass$Analyzer$State*) $tmp1868) != NULL};
bool $tmp1870 = $tmp1869.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1868);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1867)));
if ($tmp1870) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:449
frost$collections$HashMap** $tmp1871 = &param0->entryStates;
frost$collections$HashMap* $tmp1872 = *$tmp1871;
org$frostlang$frostc$IR$Block* $tmp1873 = *(&local1);
org$frostlang$frostc$IR$Block$ID* $tmp1874 = &$tmp1873->id;
org$frostlang$frostc$IR$Block$ID $tmp1875 = *$tmp1874;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp1876;
$tmp1876 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp1876->value = $tmp1875;
frost$core$Object* $tmp1877 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1872, ((frost$collections$Key*) $tmp1876));
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:449:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1879 $tmp1878 = ($fn1879) ((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1877))->$class->vtable[0];
frost$core$String* $tmp1880 = $tmp1878(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$State*) $tmp1877)));
frost$core$String* $tmp1881 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1882, $tmp1880);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1881));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1881));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
frost$io$Console$print$frost$core$String($tmp1881);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1881));
frost$core$Frost$unref$frost$core$Object$Q($tmp1877);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp1876)));
goto block24;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:451
// begin inline call to method frost.io.Console.printLine() from Analyzer.frost:451:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1883);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:452
org$frostlang$frostc$IR$Block* $tmp1884 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1885 = &$tmp1884->ids;
org$frostlang$frostc$LinkedList* $tmp1886 = *$tmp1885;
ITable* $tmp1887 = ((frost$collections$Iterable*) $tmp1886)->$class->itable;
while ($tmp1887->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1887 = $tmp1887->next;
}
$fn1889 $tmp1888 = $tmp1887->methods[0];
frost$collections$Iterator* $tmp1890 = $tmp1888(((frost$collections$Iterable*) $tmp1886));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
frost$collections$Iterator* $tmp1891 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
*(&local2) = $tmp1890;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:453
org$frostlang$frostc$IR$Block* $tmp1892 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp1893 = &$tmp1892->statements;
org$frostlang$frostc$LinkedList* $tmp1894 = *$tmp1893;
ITable* $tmp1895 = ((frost$collections$Iterable*) $tmp1894)->$class->itable;
while ($tmp1895->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1895 = $tmp1895->next;
}
$fn1897 $tmp1896 = $tmp1895->methods[0];
frost$collections$Iterator* $tmp1898 = $tmp1896(((frost$collections$Iterable*) $tmp1894));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1898));
frost$collections$Iterator* $tmp1899 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
*(&local3) = $tmp1898;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1898));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:454
goto block27;
block27:;
frost$collections$Iterator* $tmp1900 = *(&local2);
ITable* $tmp1901 = $tmp1900->$class->itable;
while ($tmp1901->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1901 = $tmp1901->next;
}
$fn1903 $tmp1902 = $tmp1901->methods[0];
frost$core$Bit $tmp1904 = $tmp1902($tmp1900);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:454:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1905 = $tmp1904.value;
bool $tmp1906 = !$tmp1905;
frost$core$Bit $tmp1907 = (frost$core$Bit) {$tmp1906};
bool $tmp1908 = $tmp1907.value;
if ($tmp1908) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:455
frost$collections$Iterator* $tmp1909 = *(&local2);
ITable* $tmp1910 = $tmp1909->$class->itable;
while ($tmp1910->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1910 = $tmp1910->next;
}
$fn1912 $tmp1911 = $tmp1910->methods[1];
frost$core$Object* $tmp1913 = $tmp1911($tmp1909);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp1914;
$tmp1914 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp1914->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp1913)->value;
// begin inline call to method frost.io.Console.print(o:frost.core.Object) from Analyzer.frost:455:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:54
$fn1916 $tmp1915 = ($fn1916) ((frost$core$Object*) $tmp1914)->$class->vtable[0];
frost$core$String* $tmp1917 = $tmp1915(((frost$core$Object*) $tmp1914));
frost$io$Console$print$frost$core$String($tmp1917);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
frost$core$Frost$unref$frost$core$Object$Q($tmp1913);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:456
frost$io$Console$print$frost$core$String(&$s1918);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:457
frost$collections$Iterator* $tmp1919 = *(&local3);
ITable* $tmp1920 = $tmp1919->$class->itable;
while ($tmp1920->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1920 = $tmp1920->next;
}
$fn1922 $tmp1921 = $tmp1920->methods[1];
frost$core$Object* $tmp1923 = $tmp1921($tmp1919);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from Analyzer.frost:457:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn1925 $tmp1924 = ($fn1925) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1923))->$class->vtable[0];
frost$core$String* $tmp1926 = $tmp1924(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp1923)));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1926);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
frost$core$Frost$unref$frost$core$Object$Q($tmp1923);
goto block27;
block29:;
frost$collections$Iterator* $tmp1927 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
*(&local3) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp1928 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1849);
org$frostlang$frostc$IR$Block* $tmp1929 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:463
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1930 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Compiler** $tmp1931 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1932 = *$tmp1931;
org$frostlang$frostc$Type** $tmp1933 = &$tmp1932->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp1934 = *$tmp1933;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp1930, $tmp1934);
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1930));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1935 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
*(&local0) = $tmp1930;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1930));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:464
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$pass$Analyzer$State));
org$frostlang$frostc$pass$Analyzer$State* $tmp1936 = (org$frostlang$frostc$pass$Analyzer$State*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$State$class);
org$frostlang$frostc$pass$Analyzer$State$init($tmp1936);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1936));
org$frostlang$frostc$pass$Analyzer$State* $tmp1937 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
*(&local1) = $tmp1936;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1936));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:465
frost$core$Int $tmp1938 = (frost$core$Int) {0u};
org$frostlang$frostc$IR** $tmp1939 = &param0->ir;
org$frostlang$frostc$IR* $tmp1940 = *$tmp1939;
frost$collections$Array** $tmp1941 = &$tmp1940->locals;
frost$collections$Array* $tmp1942 = *$tmp1941;
ITable* $tmp1943 = ((frost$collections$CollectionView*) $tmp1942)->$class->itable;
while ($tmp1943->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1943 = $tmp1943->next;
}
$fn1945 $tmp1944 = $tmp1943->methods[0];
frost$core$Int $tmp1946 = $tmp1944(((frost$collections$CollectionView*) $tmp1942));
frost$core$Bit $tmp1947 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1948 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1938, $tmp1946, $tmp1947);
frost$core$Int $tmp1949 = $tmp1948.min;
*(&local2) = $tmp1949;
frost$core$Int $tmp1950 = $tmp1948.max;
frost$core$Bit $tmp1951 = $tmp1948.inclusive;
bool $tmp1952 = $tmp1951.value;
frost$core$Int $tmp1953 = (frost$core$Int) {1u};
if ($tmp1952) goto block4; else goto block5;
block4:;
int64_t $tmp1954 = $tmp1949.value;
int64_t $tmp1955 = $tmp1950.value;
bool $tmp1956 = $tmp1954 <= $tmp1955;
frost$core$Bit $tmp1957 = (frost$core$Bit) {$tmp1956};
bool $tmp1958 = $tmp1957.value;
if ($tmp1958) goto block1; else goto block2;
block5:;
int64_t $tmp1959 = $tmp1949.value;
int64_t $tmp1960 = $tmp1950.value;
bool $tmp1961 = $tmp1959 < $tmp1960;
frost$core$Bit $tmp1962 = (frost$core$Bit) {$tmp1961};
bool $tmp1963 = $tmp1962.value;
if ($tmp1963) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:466
org$frostlang$frostc$pass$Analyzer$State* $tmp1964 = *(&local1);
frost$collections$Array** $tmp1965 = &$tmp1964->locals;
frost$collections$Array* $tmp1966 = *$tmp1965;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp1967 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1966, ((frost$core$Object*) $tmp1967));
frost$core$Int $tmp1968 = *(&local2);
int64_t $tmp1969 = $tmp1950.value;
int64_t $tmp1970 = $tmp1968.value;
int64_t $tmp1971 = $tmp1969 - $tmp1970;
frost$core$Int $tmp1972 = (frost$core$Int) {$tmp1971};
if ($tmp1952) goto block7; else goto block8;
block7:;
int64_t $tmp1973 = $tmp1972.value;
int64_t $tmp1974 = $tmp1953.value;
bool $tmp1975 = $tmp1973 >= $tmp1974;
frost$core$Bit $tmp1976 = (frost$core$Bit) {$tmp1975};
bool $tmp1977 = $tmp1976.value;
if ($tmp1977) goto block6; else goto block2;
block8:;
int64_t $tmp1978 = $tmp1972.value;
int64_t $tmp1979 = $tmp1953.value;
bool $tmp1980 = $tmp1978 > $tmp1979;
frost$core$Bit $tmp1981 = (frost$core$Bit) {$tmp1980};
bool $tmp1982 = $tmp1981.value;
if ($tmp1982) goto block6; else goto block2;
block6:;
int64_t $tmp1983 = $tmp1968.value;
int64_t $tmp1984 = $tmp1953.value;
int64_t $tmp1985 = $tmp1983 + $tmp1984;
frost$core$Int $tmp1986 = (frost$core$Int) {$tmp1985};
*(&local2) = $tmp1986;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:468
frost$collections$HashMap** $tmp1987 = &param0->entryStates;
frost$collections$HashMap* $tmp1988 = *$tmp1987;
org$frostlang$frostc$IR** $tmp1989 = &param0->ir;
org$frostlang$frostc$IR* $tmp1990 = *$tmp1989;
frost$collections$Array** $tmp1991 = &$tmp1990->blocks;
frost$collections$Array* $tmp1992 = *$tmp1991;
frost$core$Int $tmp1993 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:468:30
frost$core$Int $tmp1994 = (frost$core$Int) {0u};
int64_t $tmp1995 = $tmp1993.value;
int64_t $tmp1996 = $tmp1994.value;
bool $tmp1997 = $tmp1995 >= $tmp1996;
frost$core$Bit $tmp1998 = (frost$core$Bit) {$tmp1997};
bool $tmp1999 = $tmp1998.value;
if ($tmp1999) goto block12; else goto block11;
block12:;
ITable* $tmp2000 = ((frost$collections$CollectionView*) $tmp1992)->$class->itable;
while ($tmp2000->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2000 = $tmp2000->next;
}
$fn2002 $tmp2001 = $tmp2000->methods[0];
frost$core$Int $tmp2003 = $tmp2001(((frost$collections$CollectionView*) $tmp1992));
int64_t $tmp2004 = $tmp1993.value;
int64_t $tmp2005 = $tmp2003.value;
bool $tmp2006 = $tmp2004 < $tmp2005;
frost$core$Bit $tmp2007 = (frost$core$Bit) {$tmp2006};
bool $tmp2008 = $tmp2007.value;
if ($tmp2008) goto block10; else goto block11;
block11:;
frost$core$Int $tmp2009 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2010, $tmp2009, &$s2011);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2012 = &$tmp1992->data;
frost$core$Object** $tmp2013 = *$tmp2012;
frost$core$Int64 $tmp2014 = frost$core$Int64$init$frost$core$Int($tmp1993);
int64_t $tmp2015 = $tmp2014.value;
frost$core$Object* $tmp2016 = $tmp2013[$tmp2015];
frost$core$Frost$ref$frost$core$Object$Q($tmp2016);
org$frostlang$frostc$IR$Block$ID* $tmp2017 = &((org$frostlang$frostc$IR$Block*) $tmp2016)->id;
org$frostlang$frostc$IR$Block$ID $tmp2018 = *$tmp2017;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2019;
$tmp2019 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2019->value = $tmp2018;
org$frostlang$frostc$pass$Analyzer$State* $tmp2020 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1988, ((frost$collections$Key*) $tmp2019), ((frost$core$Object*) $tmp2020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2019)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2016);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:469
org$frostlang$frostc$IR** $tmp2021 = &param0->ir;
org$frostlang$frostc$IR* $tmp2022 = *$tmp2021;
frost$collections$Array** $tmp2023 = &$tmp2022->blocks;
frost$collections$Array* $tmp2024 = *$tmp2023;
ITable* $tmp2025 = ((frost$collections$Iterable*) $tmp2024)->$class->itable;
while ($tmp2025->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2025 = $tmp2025->next;
}
$fn2027 $tmp2026 = $tmp2025->methods[0];
frost$collections$Iterator* $tmp2028 = $tmp2026(((frost$collections$Iterable*) $tmp2024));
goto block13;
block13:;
ITable* $tmp2029 = $tmp2028->$class->itable;
while ($tmp2029->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2029 = $tmp2029->next;
}
$fn2031 $tmp2030 = $tmp2029->methods[0];
frost$core$Bit $tmp2032 = $tmp2030($tmp2028);
bool $tmp2033 = $tmp2032.value;
if ($tmp2033) goto block15; else goto block14;
block14:;
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2034 = $tmp2028->$class->itable;
while ($tmp2034->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2034 = $tmp2034->next;
}
$fn2036 $tmp2035 = $tmp2034->methods[1];
frost$core$Object* $tmp2037 = $tmp2035($tmp2028);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2037)));
org$frostlang$frostc$IR$Block* $tmp2038 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2038));
*(&local3) = ((org$frostlang$frostc$IR$Block*) $tmp2037);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:470
frost$collections$HashMap** $tmp2039 = &param0->blocks;
frost$collections$HashMap* $tmp2040 = *$tmp2039;
org$frostlang$frostc$IR$Block* $tmp2041 = *(&local3);
org$frostlang$frostc$IR$Block$ID* $tmp2042 = &$tmp2041->id;
org$frostlang$frostc$IR$Block$ID $tmp2043 = *$tmp2042;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2044;
$tmp2044 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2044->value = $tmp2043;
org$frostlang$frostc$IR$Block* $tmp2045 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2040, ((frost$collections$Key*) $tmp2044), ((frost$core$Object*) $tmp2045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2044)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:471
org$frostlang$frostc$IR$Block* $tmp2046 = *(&local3);
org$frostlang$frostc$LinkedList** $tmp2047 = &$tmp2046->ids;
org$frostlang$frostc$LinkedList* $tmp2048 = *$tmp2047;
ITable* $tmp2049 = ((frost$collections$Iterable*) $tmp2048)->$class->itable;
while ($tmp2049->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2049 = $tmp2049->next;
}
$fn2051 $tmp2050 = $tmp2049->methods[0];
frost$collections$Iterator* $tmp2052 = $tmp2050(((frost$collections$Iterable*) $tmp2048));
*(&local4) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2052));
frost$collections$Iterator* $tmp2053 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
*(&local4) = $tmp2052;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2052));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:472
org$frostlang$frostc$IR$Block* $tmp2054 = *(&local3);
org$frostlang$frostc$LinkedList** $tmp2055 = &$tmp2054->statements;
org$frostlang$frostc$LinkedList* $tmp2056 = *$tmp2055;
ITable* $tmp2057 = ((frost$collections$Iterable*) $tmp2056)->$class->itable;
while ($tmp2057->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2057 = $tmp2057->next;
}
$fn2059 $tmp2058 = $tmp2057->methods[0];
frost$collections$Iterator* $tmp2060 = $tmp2058(((frost$collections$Iterable*) $tmp2056));
*(&local5) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
frost$collections$Iterator* $tmp2061 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
*(&local5) = $tmp2060;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:473
goto block16;
block16:;
frost$collections$Iterator* $tmp2062 = *(&local4);
ITable* $tmp2063 = $tmp2062->$class->itable;
while ($tmp2063->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2063 = $tmp2063->next;
}
$fn2065 $tmp2064 = $tmp2063->methods[0];
frost$core$Bit $tmp2066 = $tmp2064($tmp2062);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:473:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2067 = $tmp2066.value;
bool $tmp2068 = !$tmp2067;
frost$core$Bit $tmp2069 = (frost$core$Bit) {$tmp2068};
bool $tmp2070 = $tmp2069.value;
if ($tmp2070) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:474
frost$collections$HashMap** $tmp2071 = &param0->statements;
frost$collections$HashMap* $tmp2072 = *$tmp2071;
frost$collections$Iterator* $tmp2073 = *(&local4);
ITable* $tmp2074 = $tmp2073->$class->itable;
while ($tmp2074->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2074 = $tmp2074->next;
}
$fn2076 $tmp2075 = $tmp2074->methods[1];
frost$core$Object* $tmp2077 = $tmp2075($tmp2073);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2078;
$tmp2078 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2078->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2077)->value;
frost$collections$Iterator* $tmp2079 = *(&local5);
ITable* $tmp2080 = $tmp2079->$class->itable;
while ($tmp2080->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2080 = $tmp2080->next;
}
$fn2082 $tmp2081 = $tmp2080->methods[1];
frost$core$Object* $tmp2083 = $tmp2081($tmp2079);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2072, ((frost$collections$Key*) $tmp2078), ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp2083)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2083);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2078)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2077);
goto block16;
block18:;
frost$collections$Iterator* $tmp2084 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
*(&local5) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp2085 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
*(&local4) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2037);
org$frostlang$frostc$IR$Block* $tmp2086 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:477
frost$collections$HashSet** $tmp2087 = &param0->worklist;
frost$collections$HashSet* $tmp2088 = *$tmp2087;
org$frostlang$frostc$IR** $tmp2089 = &param0->ir;
org$frostlang$frostc$IR* $tmp2090 = *$tmp2089;
frost$collections$Array** $tmp2091 = &$tmp2090->blocks;
frost$collections$Array* $tmp2092 = *$tmp2091;
frost$core$Int $tmp2093 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:477:31
frost$core$Int $tmp2094 = (frost$core$Int) {0u};
int64_t $tmp2095 = $tmp2093.value;
int64_t $tmp2096 = $tmp2094.value;
bool $tmp2097 = $tmp2095 >= $tmp2096;
frost$core$Bit $tmp2098 = (frost$core$Bit) {$tmp2097};
bool $tmp2099 = $tmp2098.value;
if ($tmp2099) goto block23; else goto block22;
block23:;
ITable* $tmp2100 = ((frost$collections$CollectionView*) $tmp2092)->$class->itable;
while ($tmp2100->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2100 = $tmp2100->next;
}
$fn2102 $tmp2101 = $tmp2100->methods[0];
frost$core$Int $tmp2103 = $tmp2101(((frost$collections$CollectionView*) $tmp2092));
int64_t $tmp2104 = $tmp2093.value;
int64_t $tmp2105 = $tmp2103.value;
bool $tmp2106 = $tmp2104 < $tmp2105;
frost$core$Bit $tmp2107 = (frost$core$Bit) {$tmp2106};
bool $tmp2108 = $tmp2107.value;
if ($tmp2108) goto block21; else goto block22;
block22:;
frost$core$Int $tmp2109 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2110, $tmp2109, &$s2111);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2112 = &$tmp2092->data;
frost$core$Object** $tmp2113 = *$tmp2112;
frost$core$Int64 $tmp2114 = frost$core$Int64$init$frost$core$Int($tmp2093);
int64_t $tmp2115 = $tmp2114.value;
frost$core$Object* $tmp2116 = $tmp2113[$tmp2115];
frost$core$Frost$ref$frost$core$Object$Q($tmp2116);
org$frostlang$frostc$IR$Block$ID* $tmp2117 = &((org$frostlang$frostc$IR$Block*) $tmp2116)->id;
org$frostlang$frostc$IR$Block$ID $tmp2118 = *$tmp2117;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2119;
$tmp2119 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2119->value = $tmp2118;
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Analyzer.frost:477:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp2120 = &$tmp2088->contents;
frost$collections$HashMap* $tmp2121 = *$tmp2120;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2121, ((frost$collections$Key*) $tmp2119), ((frost$core$Object*) ((frost$collections$Key*) $tmp2119)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2119)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2116);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:478
goto block25;
block25:;
frost$collections$HashSet** $tmp2122 = &param0->worklist;
frost$collections$HashSet* $tmp2123 = *$tmp2122;
ITable* $tmp2124 = ((frost$collections$CollectionView*) $tmp2123)->$class->itable;
while ($tmp2124->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2124 = $tmp2124->next;
}
$fn2126 $tmp2125 = $tmp2124->methods[0];
frost$core$Int $tmp2127 = $tmp2125(((frost$collections$CollectionView*) $tmp2123));
frost$core$Int $tmp2128 = (frost$core$Int) {0u};
int64_t $tmp2129 = $tmp2127.value;
int64_t $tmp2130 = $tmp2128.value;
bool $tmp2131 = $tmp2129 > $tmp2130;
frost$core$Bit $tmp2132 = (frost$core$Bit) {$tmp2131};
bool $tmp2133 = $tmp2132.value;
if ($tmp2133) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:479
frost$collections$HashSet** $tmp2134 = &param0->worklist;
frost$collections$HashSet* $tmp2135 = *$tmp2134;
ITable* $tmp2136 = ((frost$collections$Iterable*) $tmp2135)->$class->itable;
while ($tmp2136->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2136 = $tmp2136->next;
}
$fn2138 $tmp2137 = $tmp2136->methods[0];
frost$collections$Iterator* $tmp2139 = $tmp2137(((frost$collections$Iterable*) $tmp2135));
ITable* $tmp2140 = $tmp2139->$class->itable;
while ($tmp2140->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2140 = $tmp2140->next;
}
$fn2142 $tmp2141 = $tmp2140->methods[1];
frost$core$Object* $tmp2143 = $tmp2141($tmp2139);
*(&local6) = ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp2143)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:480
frost$collections$HashSet** $tmp2144 = &param0->worklist;
frost$collections$HashSet* $tmp2145 = *$tmp2144;
org$frostlang$frostc$IR$Block$ID $tmp2146 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2147;
$tmp2147 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2147->value = $tmp2146;
// begin inline call to method frost.collections.HashSet.remove(value:frost.collections.HashSet.T) from Analyzer.frost:480:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:30
frost$collections$HashMap** $tmp2148 = &$tmp2145->contents;
frost$collections$HashMap* $tmp2149 = *$tmp2148;
frost$collections$HashMap$remove$frost$collections$HashMap$K($tmp2149, ((frost$collections$Key*) $tmp2147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2147)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:481
org$frostlang$frostc$IR$Block$ID $tmp2150 = *(&local6);
$fn2152 $tmp2151 = ($fn2152) param0->$class->vtable[8];
$tmp2151(param0, $tmp2150);
goto block25;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:483
frost$core$Bit $tmp2153 = (frost$core$Bit) {true};
frost$core$Bit* $tmp2154 = &param0->reportErrors;
*$tmp2154 = $tmp2153;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:484
org$frostlang$frostc$IR** $tmp2155 = &param0->ir;
org$frostlang$frostc$IR* $tmp2156 = *$tmp2155;
frost$collections$Array** $tmp2157 = &$tmp2156->blocks;
frost$collections$Array* $tmp2158 = *$tmp2157;
ITable* $tmp2159 = ((frost$collections$Iterable*) $tmp2158)->$class->itable;
while ($tmp2159->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2159 = $tmp2159->next;
}
$fn2161 $tmp2160 = $tmp2159->methods[0];
frost$collections$Iterator* $tmp2162 = $tmp2160(((frost$collections$Iterable*) $tmp2158));
goto block29;
block29:;
ITable* $tmp2163 = $tmp2162->$class->itable;
while ($tmp2163->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2163 = $tmp2163->next;
}
$fn2165 $tmp2164 = $tmp2163->methods[0];
frost$core$Bit $tmp2166 = $tmp2164($tmp2162);
bool $tmp2167 = $tmp2166.value;
if ($tmp2167) goto block31; else goto block30;
block30:;
*(&local7) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2168 = $tmp2162->$class->itable;
while ($tmp2168->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2168 = $tmp2168->next;
}
$fn2170 $tmp2169 = $tmp2168->methods[1];
frost$core$Object* $tmp2171 = $tmp2169($tmp2162);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2171)));
org$frostlang$frostc$IR$Block* $tmp2172 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
*(&local7) = ((org$frostlang$frostc$IR$Block*) $tmp2171);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:485
frost$collections$HashMap** $tmp2173 = &param0->entryStates;
frost$collections$HashMap* $tmp2174 = *$tmp2173;
org$frostlang$frostc$IR$Block* $tmp2175 = *(&local7);
org$frostlang$frostc$IR$Block$ID* $tmp2176 = &$tmp2175->id;
org$frostlang$frostc$IR$Block$ID $tmp2177 = *$tmp2176;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2178;
$tmp2178 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2178->value = $tmp2177;
frost$core$Object* $tmp2179 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2174, ((frost$collections$Key*) $tmp2178));
frost$core$Bit $tmp2180 = (frost$core$Bit) {((org$frostlang$frostc$pass$Analyzer$State*) $tmp2179) != NULL};
bool $tmp2181 = $tmp2180.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2179);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp2178)));
if ($tmp2181) goto block32; else goto block34;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:486
org$frostlang$frostc$IR$Block* $tmp2182 = *(&local7);
org$frostlang$frostc$LinkedList** $tmp2183 = &$tmp2182->statements;
org$frostlang$frostc$LinkedList* $tmp2184 = *$tmp2183;
ITable* $tmp2185 = ((frost$collections$CollectionView*) $tmp2184)->$class->itable;
while ($tmp2185->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2185 = $tmp2185->next;
}
$fn2187 $tmp2186 = $tmp2185->methods[1];
frost$core$Object* $tmp2188 = $tmp2186(((frost$collections$CollectionView*) $tmp2184));
frost$core$Int* $tmp2189 = &((org$frostlang$frostc$IR$Statement*) $tmp2188)->$rawValue;
frost$core$Int $tmp2190 = *$tmp2189;
frost$core$Int $tmp2191 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:487:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2192 = $tmp2190.value;
int64_t $tmp2193 = $tmp2191.value;
bool $tmp2194 = $tmp2192 == $tmp2193;
frost$core$Bit $tmp2195 = (frost$core$Bit) {$tmp2194};
bool $tmp2196 = $tmp2195.value;
if ($tmp2196) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:488
org$frostlang$frostc$MethodDecl** $tmp2197 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2198 = *$tmp2197;
org$frostlang$frostc$MethodDecl$Kind* $tmp2199 = &$tmp2198->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2200 = *$tmp2199;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2201;
$tmp2201 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2201->value = $tmp2200;
frost$core$Int $tmp2202 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Analyzer.frost:488:59
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2203 = &(&local9)->$rawValue;
*$tmp2203 = $tmp2202;
org$frostlang$frostc$MethodDecl$Kind $tmp2204 = *(&local9);
*(&local8) = $tmp2204;
org$frostlang$frostc$MethodDecl$Kind $tmp2205 = *(&local8);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2206;
$tmp2206 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2206->value = $tmp2205;
ITable* $tmp2207 = ((frost$core$Equatable*) $tmp2201)->$class->itable;
while ($tmp2207->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2207 = $tmp2207->next;
}
$fn2209 $tmp2208 = $tmp2207->methods[1];
frost$core$Bit $tmp2210 = $tmp2208(((frost$core$Equatable*) $tmp2201), ((frost$core$Equatable*) $tmp2206));
bool $tmp2211 = $tmp2210.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2206)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2201)));
if ($tmp2211) goto block41; else goto block40;
block41:;
org$frostlang$frostc$MethodDecl** $tmp2212 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2213 = *$tmp2212;
org$frostlang$frostc$Type** $tmp2214 = &$tmp2213->returnType;
org$frostlang$frostc$Type* $tmp2215 = *$tmp2214;
org$frostlang$frostc$Compiler** $tmp2216 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2217 = *$tmp2216;
org$frostlang$frostc$Type** $tmp2218 = &$tmp2217->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2219 = *$tmp2218;
ITable* $tmp2220 = ((frost$core$Equatable*) $tmp2215)->$class->itable;
while ($tmp2220->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2220 = $tmp2220->next;
}
$fn2222 $tmp2221 = $tmp2220->methods[1];
frost$core$Bit $tmp2223 = $tmp2221(((frost$core$Equatable*) $tmp2215), ((frost$core$Equatable*) $tmp2219));
bool $tmp2224 = $tmp2223.value;
if ($tmp2224) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:490
org$frostlang$frostc$Compiler** $tmp2225 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2226 = *$tmp2225;
org$frostlang$frostc$MethodDecl** $tmp2227 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2228 = *$tmp2227;
org$frostlang$frostc$Position* $tmp2229 = &((org$frostlang$frostc$Symbol*) $tmp2228)->position;
org$frostlang$frostc$Position $tmp2230 = *$tmp2229;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp2226, $tmp2230, &$s2231);
goto block40;
block40:;
goto block35;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:494
org$frostlang$frostc$IR$Block* $tmp2232 = *(&local7);
org$frostlang$frostc$IR$Block$ID* $tmp2233 = &$tmp2232->id;
org$frostlang$frostc$IR$Block$ID $tmp2234 = *$tmp2233;
frost$core$Int $tmp2235 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.pass.Analyzer.BlockExit.init(id:org.frostlang.frostc.IR.Block.ID, exit:frost.core.Int):org.frostlang.frostc.pass.Analyzer.BlockExit from Analyzer.frost:494:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:81
org$frostlang$frostc$IR$Block$ID* $tmp2236 = &(&local11)->id;
*$tmp2236 = $tmp2234;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:82
frost$core$Int* $tmp2237 = &(&local11)->exit;
*$tmp2237 = $tmp2235;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2238 = *(&local11);
*(&local10) = $tmp2238;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp2239 = *(&local10);
$fn2241 $tmp2240 = ($fn2241) param0->$class->vtable[7];
org$frostlang$frostc$pass$Analyzer$State* $tmp2242 = $tmp2240(param0, $tmp2239);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2242));
goto block35;
block35:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2188);
goto block33;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:498
org$frostlang$frostc$IR$Block* $tmp2243 = *(&local7);
frost$core$Bit* $tmp2244 = &$tmp2243->containsExplicitCode;
frost$core$Bit $tmp2245 = *$tmp2244;
bool $tmp2246 = $tmp2245.value;
if ($tmp2246) goto block46; else goto block45;
block46:;
org$frostlang$frostc$IR$Block* $tmp2247 = *(&local7);
frost$core$Bit* $tmp2248 = &$tmp2247->forceReachable;
frost$core$Bit $tmp2249 = *$tmp2248;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Analyzer.frost:498:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2250 = $tmp2249.value;
bool $tmp2251 = !$tmp2250;
frost$core$Bit $tmp2252 = (frost$core$Bit) {$tmp2251};
bool $tmp2253 = $tmp2252.value;
if ($tmp2253) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:499
org$frostlang$frostc$Compiler** $tmp2254 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2255 = *$tmp2254;
org$frostlang$frostc$IR$Block* $tmp2256 = *(&local7);
org$frostlang$frostc$LinkedList** $tmp2257 = &$tmp2256->statements;
org$frostlang$frostc$LinkedList* $tmp2258 = *$tmp2257;
ITable* $tmp2259 = ((frost$collections$CollectionView*) $tmp2258)->$class->itable;
while ($tmp2259->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2259 = $tmp2259->next;
}
$fn2261 $tmp2260 = $tmp2259->methods[1];
frost$core$Object* $tmp2262 = $tmp2260(((frost$collections$CollectionView*) $tmp2258));
$fn2264 $tmp2263 = ($fn2264) ((org$frostlang$frostc$IR$Statement*) $tmp2262)->$class->vtable[2];
org$frostlang$frostc$Position $tmp2265 = $tmp2263(((org$frostlang$frostc$IR$Statement*) $tmp2262));
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp2255, $tmp2265, &$s2266);
frost$core$Frost$unref$frost$core$Object$Q($tmp2262);
goto block45;
block45:;
goto block33;
block33:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2171);
org$frostlang$frostc$IR$Block* $tmp2267 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
*(&local7) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block29;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2162));
org$frostlang$frostc$pass$Analyzer$State* $tmp2268 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2268));
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$State*) NULL);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp2269 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2269));
*(&local0) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
return;

}
void org$frostlang$frostc$pass$Analyzer$makeUnreachable$org$frostlang$frostc$IR$Block(org$frostlang$frostc$pass$Analyzer* param0, org$frostlang$frostc$IR$Block* param1) {

org$frostlang$frostc$IR$Statement$ID local0;
org$frostlang$frostc$Position local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:505
org$frostlang$frostc$LinkedList** $tmp2270 = &param1->ids;
org$frostlang$frostc$LinkedList* $tmp2271 = *$tmp2270;
ITable* $tmp2272 = ((frost$collections$CollectionView*) $tmp2271)->$class->itable;
while ($tmp2272->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2272 = $tmp2272->next;
}
$fn2274 $tmp2273 = $tmp2272->methods[1];
frost$core$Object* $tmp2275 = $tmp2273(((frost$collections$CollectionView*) $tmp2271));
*(&local0) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp2275)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2275);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:506
org$frostlang$frostc$LinkedList** $tmp2276 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp2277 = *$tmp2276;
ITable* $tmp2278 = ((frost$collections$CollectionView*) $tmp2277)->$class->itable;
while ($tmp2278->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2278 = $tmp2278->next;
}
$fn2280 $tmp2279 = $tmp2278->methods[1];
frost$core$Object* $tmp2281 = $tmp2279(((frost$collections$CollectionView*) $tmp2277));
$fn2283 $tmp2282 = ($fn2283) ((org$frostlang$frostc$IR$Statement*) $tmp2281)->$class->vtable[2];
org$frostlang$frostc$Position $tmp2284 = $tmp2282(((org$frostlang$frostc$IR$Statement*) $tmp2281));
*(&local1) = $tmp2284;
frost$core$Frost$unref$frost$core$Object$Q($tmp2281);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:507
org$frostlang$frostc$LinkedList** $tmp2285 = &param1->ids;
org$frostlang$frostc$LinkedList* $tmp2286 = *$tmp2285;
$fn2288 $tmp2287 = ($fn2288) $tmp2286->$class->vtable[8];
$tmp2287($tmp2286);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:508
org$frostlang$frostc$LinkedList** $tmp2289 = &param1->ids;
org$frostlang$frostc$LinkedList* $tmp2290 = *$tmp2289;
org$frostlang$frostc$IR$Statement$ID $tmp2291 = *(&local0);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp2292;
$tmp2292 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp2292->value = $tmp2291;
$fn2294 $tmp2293 = ($fn2294) $tmp2290->$class->vtable[4];
$tmp2293($tmp2290, ((frost$core$Object*) $tmp2292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:509
org$frostlang$frostc$LinkedList** $tmp2295 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp2296 = *$tmp2295;
$fn2298 $tmp2297 = ($fn2298) $tmp2296->$class->vtable[8];
$tmp2297($tmp2296);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:510
org$frostlang$frostc$LinkedList** $tmp2299 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp2300 = *$tmp2299;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2301 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp2302 = (frost$core$Int) {28u};
org$frostlang$frostc$Position $tmp2303 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position($tmp2301, $tmp2302, $tmp2303);
$fn2305 $tmp2304 = ($fn2305) $tmp2300->$class->vtable[4];
$tmp2304($tmp2300, ((frost$core$Object*) $tmp2301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2301));
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:514
org$frostlang$frostc$IR** $tmp2306 = &param0->ir;
org$frostlang$frostc$IR* $tmp2307 = *$tmp2306;
frost$collections$Array** $tmp2308 = &$tmp2307->blocks;
frost$collections$Array* $tmp2309 = *$tmp2308;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:514:33
frost$core$Int $tmp2310 = (frost$core$Int) {0u};
int64_t $tmp2311 = param1.value;
int64_t $tmp2312 = $tmp2310.value;
bool $tmp2313 = $tmp2311 >= $tmp2312;
frost$core$Bit $tmp2314 = (frost$core$Bit) {$tmp2313};
bool $tmp2315 = $tmp2314.value;
if ($tmp2315) goto block4; else goto block3;
block4:;
ITable* $tmp2316 = ((frost$collections$CollectionView*) $tmp2309)->$class->itable;
while ($tmp2316->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2316 = $tmp2316->next;
}
$fn2318 $tmp2317 = $tmp2316->methods[0];
frost$core$Int $tmp2319 = $tmp2317(((frost$collections$CollectionView*) $tmp2309));
int64_t $tmp2320 = param1.value;
int64_t $tmp2321 = $tmp2319.value;
bool $tmp2322 = $tmp2320 < $tmp2321;
frost$core$Bit $tmp2323 = (frost$core$Bit) {$tmp2322};
bool $tmp2324 = $tmp2323.value;
if ($tmp2324) goto block2; else goto block3;
block3:;
frost$core$Int $tmp2325 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2326, $tmp2325, &$s2327);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp2328 = &$tmp2309->data;
frost$core$Object** $tmp2329 = *$tmp2328;
frost$core$Int64 $tmp2330 = frost$core$Int64$init$frost$core$Int(param1);
int64_t $tmp2331 = $tmp2330.value;
frost$core$Object* $tmp2332 = $tmp2329[$tmp2331];
frost$core$Frost$ref$frost$core$Object$Q($tmp2332);
org$frostlang$frostc$IR$Block$ID* $tmp2333 = &((org$frostlang$frostc$IR$Block*) $tmp2332)->id;
org$frostlang$frostc$IR$Block$ID $tmp2334 = *$tmp2333;
*(&local0) = $tmp2334;
frost$core$Frost$unref$frost$core$Object$Q($tmp2332);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:515
org$frostlang$frostc$IR** $tmp2335 = &param0->ir;
org$frostlang$frostc$IR* $tmp2336 = *$tmp2335;
frost$collections$Array** $tmp2337 = &$tmp2336->blocks;
frost$collections$Array* $tmp2338 = *$tmp2337;
frost$core$Object* $tmp2339 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp2338, param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp2339);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:516
org$frostlang$frostc$IR** $tmp2340 = &param0->ir;
org$frostlang$frostc$IR* $tmp2341 = *$tmp2340;
frost$collections$Array** $tmp2342 = &$tmp2341->blocks;
frost$collections$Array* $tmp2343 = *$tmp2342;
ITable* $tmp2344 = ((frost$collections$Iterable*) $tmp2343)->$class->itable;
while ($tmp2344->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2344 = $tmp2344->next;
}
$fn2346 $tmp2345 = $tmp2344->methods[0];
frost$collections$Iterator* $tmp2347 = $tmp2345(((frost$collections$Iterable*) $tmp2343));
goto block5;
block5:;
ITable* $tmp2348 = $tmp2347->$class->itable;
while ($tmp2348->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2348 = $tmp2348->next;
}
$fn2350 $tmp2349 = $tmp2348->methods[0];
frost$core$Bit $tmp2351 = $tmp2349($tmp2347);
bool $tmp2352 = $tmp2351.value;
if ($tmp2352) goto block7; else goto block6;
block6:;
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp2353 = $tmp2347->$class->itable;
while ($tmp2353->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2353 = $tmp2353->next;
}
$fn2355 $tmp2354 = $tmp2353->methods[1];
frost$core$Object* $tmp2356 = $tmp2354($tmp2347);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp2356)));
org$frostlang$frostc$IR$Block* $tmp2357 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2357));
*(&local1) = ((org$frostlang$frostc$IR$Block*) $tmp2356);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:517
org$frostlang$frostc$IR$Block* $tmp2358 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp2359 = &$tmp2358->statements;
org$frostlang$frostc$LinkedList* $tmp2360 = *$tmp2359;
ITable* $tmp2361 = ((frost$collections$CollectionView*) $tmp2360)->$class->itable;
while ($tmp2361->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2361 = $tmp2361->next;
}
$fn2363 $tmp2362 = $tmp2361->methods[0];
frost$core$Int $tmp2364 = $tmp2362(((frost$collections$CollectionView*) $tmp2360));
frost$core$Int $tmp2365 = (frost$core$Int) {1u};
int64_t $tmp2366 = $tmp2364.value;
int64_t $tmp2367 = $tmp2365.value;
int64_t $tmp2368 = $tmp2366 - $tmp2367;
frost$core$Int $tmp2369 = (frost$core$Int) {$tmp2368};
*(&local2) = $tmp2369;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:518
org$frostlang$frostc$IR$Block* $tmp2370 = *(&local1);
org$frostlang$frostc$LinkedList** $tmp2371 = &$tmp2370->statements;
org$frostlang$frostc$LinkedList* $tmp2372 = *$tmp2371;
$fn2374 $tmp2373 = ($fn2374) $tmp2372->$class->vtable[6];
frost$core$Object* $tmp2375 = $tmp2373($tmp2372);
frost$core$Int* $tmp2376 = &((org$frostlang$frostc$IR$Statement*) $tmp2375)->$rawValue;
frost$core$Int $tmp2377 = *$tmp2376;
frost$core$Int $tmp2378 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:519:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2379 = $tmp2377.value;
int64_t $tmp2380 = $tmp2378.value;
bool $tmp2381 = $tmp2379 == $tmp2380;
frost$core$Bit $tmp2382 = (frost$core$Bit) {$tmp2381};
bool $tmp2383 = $tmp2382.value;
if ($tmp2383) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp2384 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2375)->$data + 0);
org$frostlang$frostc$Position $tmp2385 = *$tmp2384;
org$frostlang$frostc$IR$Block$ID* $tmp2386 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2375)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp2387 = *$tmp2386;
*(&local3) = $tmp2387;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:520
org$frostlang$frostc$IR$Block$ID $tmp2388 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp2389 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:520:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2390 = $tmp2388.value;
frost$core$Int $tmp2391 = $tmp2389.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2392 = $tmp2390.value;
int64_t $tmp2393 = $tmp2391.value;
bool $tmp2394 = $tmp2392 == $tmp2393;
frost$core$Bit $tmp2395 = (frost$core$Bit) {$tmp2394};
bool $tmp2396 = $tmp2395.value;
if ($tmp2396) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:521
org$frostlang$frostc$IR$Block* $tmp2397 = *(&local1);
$fn2399 $tmp2398 = ($fn2399) param0->$class->vtable[11];
$tmp2398(param0, $tmp2397);
goto block13;
block13:;
goto block8;
block10:;
frost$core$Int $tmp2400 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:524:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2401 = $tmp2377.value;
int64_t $tmp2402 = $tmp2400.value;
bool $tmp2403 = $tmp2401 == $tmp2402;
frost$core$Bit $tmp2404 = (frost$core$Bit) {$tmp2403};
bool $tmp2405 = $tmp2404.value;
if ($tmp2405) goto block16; else goto block8;
block16:;
org$frostlang$frostc$Position* $tmp2406 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp2375)->$data + 0);
org$frostlang$frostc$Position $tmp2407 = *$tmp2406;
*(&local4) = $tmp2407;
org$frostlang$frostc$IR$Value** $tmp2408 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp2375)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp2409 = *$tmp2408;
org$frostlang$frostc$IR$Block$ID* $tmp2410 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2375)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp2411 = *$tmp2410;
*(&local5) = $tmp2411;
org$frostlang$frostc$IR$Block$ID* $tmp2412 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp2375)->$data + 40);
org$frostlang$frostc$IR$Block$ID $tmp2413 = *$tmp2412;
*(&local6) = $tmp2413;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:525
org$frostlang$frostc$IR$Block$ID $tmp2414 = *(&local5);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2415;
$tmp2415 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2415->value = $tmp2414;
org$frostlang$frostc$IR$Block$ID $tmp2416 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp2417;
$tmp2417 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp2417->value = $tmp2416;
ITable* $tmp2418 = ((frost$core$Equatable*) $tmp2415)->$class->itable;
while ($tmp2418->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2418 = $tmp2418->next;
}
$fn2420 $tmp2419 = $tmp2418->methods[1];
frost$core$Bit $tmp2421 = $tmp2419(((frost$core$Equatable*) $tmp2415), ((frost$core$Equatable*) $tmp2417));
bool $tmp2422 = $tmp2421.value;
if ($tmp2422) goto block18; else goto block19;
block19:;
frost$core$Int $tmp2423 = (frost$core$Int) {525u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2424, $tmp2423);
abort(); // unreachable
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2417)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2415)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:526
org$frostlang$frostc$IR$Block$ID $tmp2425 = *(&local5);
org$frostlang$frostc$IR$Block$ID $tmp2426 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:526:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2427 = $tmp2425.value;
frost$core$Int $tmp2428 = $tmp2426.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2429 = $tmp2427.value;
int64_t $tmp2430 = $tmp2428.value;
bool $tmp2431 = $tmp2429 == $tmp2430;
frost$core$Bit $tmp2432 = (frost$core$Bit) {$tmp2431};
bool $tmp2433 = $tmp2432.value;
if ($tmp2433) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:528
frost$core$System$crash();
goto block21;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:530
org$frostlang$frostc$IR$Block$ID $tmp2434 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp2435 = *(&local0);
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:530:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp2436 = $tmp2434.value;
frost$core$Int $tmp2437 = $tmp2435.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2438 = $tmp2436.value;
int64_t $tmp2439 = $tmp2437.value;
bool $tmp2440 = $tmp2438 == $tmp2439;
frost$core$Bit $tmp2441 = (frost$core$Bit) {$tmp2440};
bool $tmp2442 = $tmp2441.value;
if ($tmp2442) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:532
frost$core$System$crash();
goto block26;
block26:;
goto block21;
block21:;
goto block8;
block8:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2375);
frost$core$Frost$unref$frost$core$Object$Q($tmp2356);
org$frostlang$frostc$IR$Block* $tmp2443 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2443));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
return;

}
void org$frostlang$frostc$pass$Analyzer$cleanup(org$frostlang$frostc$pass$Analyzer* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:14
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp2444 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp2445 = *$tmp2444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
org$frostlang$frostc$MethodDecl** $tmp2446 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp2447 = *$tmp2446;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2447));
org$frostlang$frostc$IR** $tmp2448 = &param0->ir;
org$frostlang$frostc$IR* $tmp2449 = *$tmp2448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2449));
frost$collections$HashMap** $tmp2450 = &param0->blocks;
frost$collections$HashMap* $tmp2451 = *$tmp2450;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
frost$collections$HashMap** $tmp2452 = &param0->predecessors;
frost$collections$HashMap* $tmp2453 = *$tmp2452;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
frost$collections$HashMap** $tmp2454 = &param0->entryStates;
frost$collections$HashMap* $tmp2455 = *$tmp2454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
frost$collections$HashSet** $tmp2456 = &param0->worklist;
frost$collections$HashSet* $tmp2457 = *$tmp2456;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2457));
frost$collections$HashMap** $tmp2458 = &param0->statements;
frost$collections$HashMap* $tmp2459 = *$tmp2458;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
return;

}

